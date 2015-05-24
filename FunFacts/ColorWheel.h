//
//  ColorWheel.h
//  FunFacts
//
//  Created by Katherine Sivonxay on 5/16/15.
//  Copyright (c) 2015 ksivonxay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

// keep track of the color used previously
@property (nonatomic) NSNumber *lastColor;

// array to hold all the colors for the background
@property (strong, nonatomic) NSArray *bgColors;

// declare method to get a random color from the bgColors array
- (UIColor *)randomColor;

@end
