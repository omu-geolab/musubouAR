#import <SafariServices/SafariServices.h>

extern "C" {
    void _LaunchSafariView(const char *url);
}

void _LaunchSafariView(const char *url) {
    NSString *urlString = [NSString stringWithUTF8String:url];
    NSURL *nsUrl = [NSURL URLWithString:urlString];
    
    if (@available(iOS 9.0, *)) {
        // メインスレッドで実行
        dispatch_async(dispatch_get_main_queue(), ^{
            SFSafariViewController *sfvc = [[SFSafariViewController alloc] initWithURL:nsUrl];
            UIViewController *rootVC = UnityGetGLViewController();
            [rootVC presentViewController:sfvc animated:YES completion:nil];
        });
    } else {
        // 古いiOSの場合は通常のSafari起動
        [[UIApplication sharedApplication] openURL:nsUrl];
    }
}