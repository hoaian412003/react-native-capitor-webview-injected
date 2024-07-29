
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCapitorWebviewInjectedSpec.h"

@interface CapitorWebviewInjected : NSObject <NativeCapitorWebviewInjectedSpec>
#else
#import <React/RCTBridgeModule.h>

@interface CapitorWebviewInjected : NSObject <RCTBridgeModule>
#endif

@end
