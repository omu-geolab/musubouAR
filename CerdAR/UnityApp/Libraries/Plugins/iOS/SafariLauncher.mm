#import <SafariServices/SafariServices.h>

// Unity側の関数を宣言（ビルド警告を防ぐため）
extern "C" void UnitySendMessage(const char *, const char *, const char *);

// SFSafariViewControllerの閉じる動作を検知するためのデリゲート
@interface SafariDelegate : NSObject <SFSafariViewControllerDelegate>
@end

@implementation SafariDelegate
- (void)safariViewControllerDidFinish:(SFSafariViewController *)controller {
    // Safariが閉じられたら、Unity側の "SafariCallbackReceiver" というオブジェクトに通知を送る
    UnitySendMessage("SafariCallbackReceiver", "OnSafariClosed", "");
}
@end

// デリゲートのインスタンスを保持するグローバル変数
static SafariDelegate *safariDelegate = nil;

extern "C" {
    void _LaunchSafariView(const char *url);
}

void _LaunchSafariView(const char *url) {
    NSString *urlString = [NSString stringWithUTF8String:url];
    NSURL *nsUrl = [NSURL URLWithString:urlString];
    
    if (@available(iOS 9.0, *)) {
        dispatch_async(dispatch_get_main_queue(), ^{
            SFSafariViewController *sfvc = [[SFSafariViewController alloc] initWithURL:nsUrl];
            
            // デリゲートの初期化と設定（閉じたときの検知用）
            if (safariDelegate == nil) {
                safariDelegate = [[SafariDelegate alloc] init];
            }
            sfvc.delegate = safariDelegate;
            
            UIViewController *rootVC = UnityGetGLViewController();
            [rootVC presentViewController:sfvc animated:YES completion:nil];
        });
    } else {
        [[UIApplication sharedApplication] openURL:nsUrl];
    }
}
