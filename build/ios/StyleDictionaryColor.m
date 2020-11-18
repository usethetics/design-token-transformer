
//
// StyleDictionaryColor.m
//
// Do not edit directly
// Generated on Wed, 18 Nov 2020 10:37:38 GMT
//

#import "StyleDictionaryColor.h"


@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
rgba(255, 230, 0, 1),
rgba(112, 141, 242, 1),
rgba(4, 74, 255, 1),
rgba(64, 255, 186, 1),
rgba(64, 255, 186, 1),
rgba(0, 0, 0, 0.1),
rgba(4, 74, 255, 1),
rgba(64, 223, 80, 1),
rgba(52, 86, 175, 1),
rgba(255, 184, 0, 1),
rgba(255, 184, 0, 1),
rgba(255, 255, 255, 1),
rgba(255, 255, 255, 1),
rgba(207, 48, 48, 1),
rgba(255, 255, 255, 1),
rgba(74, 79, 204, 1),
rgba(255, 255, 255, 1),
rgba(255, 184, 0, 1),
rgba(255, 138, 0, 1),
rgba(255, 46, 0, 1),
rgba(255, 0, 0, 1),
rgba(0, 0, 0, 0.25),
rgba(0, 0, 0, 0.25),
rgba(0, 0, 0, 1),
rgba(0, 0, 0, 0.25),
rgba(27, 27, 27, 1),
rgba(63, 63, 63, 1),
rgba(100, 100, 100, 1),
rgba(136, 136, 136, 1),
rgba(172, 172, 172, 1),
rgba(209, 209, 209, 1),
rgba(245, 245, 245, 1),
rgba(255, 255, 255, 1),
rgba(30, 144, 255, 1),
rgba(0, 128, 0, 1),
rgba(255, 165, 0, 1),
rgba(220, 20, 60, 1),
rgba(0, 0, 205, 1),
rgba(128, 0, 128, 1),
rgba(255, 255, 255, 1),
rgba(30, 144, 255, 0.05),
rgba(0, 128, 0, 0.05),
rgba(255, 165, 0, 0.05),
rgba(220, 20, 60, 0.05)
    ];
  });

  return colorArray;
}

@end
