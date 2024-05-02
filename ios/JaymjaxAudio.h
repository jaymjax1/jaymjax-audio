
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNJaymjaxAudioSpec.h"

@interface JaymjaxAudio : NSObject <NativeJaymjaxAudioSpec>
#else
#import <React/RCTBridgeModule.h>

@interface JaymjaxAudio : NSObject <RCTBridgeModule>
#endif

@end
