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

@property (strong, nonatomic) NSArray *bgColors;

- (UIColor *)randomColor;

@end
