
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Thu, 19 Nov 2020 15:57:31 GMT
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
Voorgrond,
Grijs6,
Grijs5,
Grijs4,
Grijs3,
Grijs2,
Grijs1,
Achtergrond,
FeedbackInformatie,
FeedbackInformatieAchtergrond,
FeedbackSucces,
FeedbackSuccesAchtergrond,
FeedbackWaarschuwing,
FeedbackWaarschuwingAchtergrond,
FeedbackFoutmelding,
FeedbackFoutmeldingAchtergrond,
Link,
LinkVisited,
Transparant,
Designspecs
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
