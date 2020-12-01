
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Tue, 01 Dec 2020 13:39:20 GMT
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
ColorForeground,
ColorGrey6,
ColorGrey5,
ColorGrey4,
ColorGrey3,
ColorGrey2,
ColorGrey1,
ColorBackground,
ColorFeedbackInfo,
BackgroundcolorFeedbackInfo,
ColorFeedbackSuccess,
BackgroundcolorFeedbackSuccess,
ColorFeedbackWarning,
BackgroundcolorFeedbackWarning,
ColorFeedbackError,
BackgroundcolorFeedbackError,
ColorLink,
ColorLinkVisited,
Transparent,
Designspecs,
ColorBrandPrimary,
ColorBrandSecondary,
FocusColor
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
