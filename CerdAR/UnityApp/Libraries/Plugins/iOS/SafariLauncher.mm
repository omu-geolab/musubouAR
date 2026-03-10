#import <SafariServices/SafariServices.h>

// Unity側の関数を宣言
extern "C" void UnitySendMessage(const char *, const char *, const char *);

// SFSafariViewControllerの閉じる動作を検知するためのデリゲート
@interface SafariDelegate : NSObject <SFSafariViewControllerDelegate>
@end

@implementation SafariDelegate
- (void)safariViewControllerDidFinish:(SFSafariViewController *)controller {
    // 1. Unity側へのミュート解除通知
    UnitySendMessage("SafariCallbackReceiver", "OnSafariClosed", "");
    
    // 2. ★追加：iOSネイティブ側（Swift等）へのミュート解除通知
    [[NSNotificationCenter defaultCenter] postNotificationName:@"UnmuteBackgroundSound" object:nil];
}
@end

// デリゲートのインスタンスを保持するグローバル変数
static SafariDelegate *safariDelegate = nil;

extern "C" {
    void _LaunchSafariView(const char *url);
}

void _LaunchSafariView(const char *url) {
    
    // ★追加：Safariを開く直前にiOSネイティブ側（Swift等）へミュート指示の通知を飛ばす
    [[NSNotificationCenter defaultCenter] postNotificationName:@"MuteBackgroundSound" object:nil];

    NSString *urlString = [NSString stringWithUTF8String:url];
    NSURL *nsUrl = [NSURL URLWithString:urlString];
    
    if (@available(iOS 9.0, *)) {
        dispatch_async(dispatch_get_main_queue(), ^{
            SFSafariViewController *sfvc = [[SFSafariViewController alloc] initWithURL:nsUrl];
            
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
