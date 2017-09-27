// http://stackoverflow.com/questions/5427656/ios-uiimagepickercontroller-result-image-orientation-after-upload



#import <UIKit/UIKit.h>

@interface UIImage(fixOrientation)
- (UIImage *)fixOrientation;
/** Returns the UIImageOrientation needed for an image captured with a specific deviceOrientation */
+ (UIImageOrientation)rotationNeededForImageCapturedWithDeviceOrientation:(UIDeviceOrientation)deviceOrientation;
@end
