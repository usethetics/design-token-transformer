
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Thu, 26 Nov 2020 20:25:36 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
BordersUnsupportedMultipleBordersStroke,
BordersSingleStroke,
BordersSingleStyleStroke,
BordersDashedOutsideStroke,
ColorsMultipleFills0,
ColorsMultipleFills1,
ColorsSingleBlue,
ColorsSpecialCharacters😅,
ColorsSpecialCharactersAnderung,
GradientMultiple0Stops0Color,
GradientMultiple0Stops1Color,
GradientMultiple1Stops0Color,
GradientMultiple1Stops1Color,
GradientMultiple2Stops0Color,
GradientMultiple2Stops1Color,
GradientMultiple3Stops0Color,
GradientMultiple3Stops1Color,
GradientSingleWithMultipleColorStopsStops0Color,
GradientSingleWithMultipleColorStopsStops1Color,
GradientSingleWithMultipleColorStopsStops2Color,
GradientSingleWithMultipleColorStopsStops3Color,
EffectDropShadowSingleColor,
EffectInnerShadowMultiple0Color,
EffectInnerShadowMultiple1Color,
EffectInnerShadowMultiple2Color,
Foreground,
Grey6,
Grey5,
Grey4,
Grey3,
Grey2,
Grey1,
Background,
FeedbackInformation,
FeedbackInformationBackground,
FeedbackSuccess,
FeedbackSuccessBackground,
FeedbackWarning,
FeedbackWarningBackground,
FeedbackError,
FeedbackErrorBackground,
Link,
LinkVisited,
Transparent,
Designspecs,
FocusColor
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
