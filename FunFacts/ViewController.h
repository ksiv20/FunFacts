//
//  ViewController.h
//  FunFacts
//
//  Created by Katherine Sivonxay on 5/15/15.
//  Copyright (c) 2015 ksivonxay. All rights reserved.
//

#import <UIKit/UIKit.h>

// include the user defined objects
@class FactBook;
@class ColorWheel;


@interface ViewController : UIViewController

// view components
@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (weak, nonatomic) IBOutlet UIButton *funFactButton;

// array from user defined classes
@property (strong, nonatomic) FactBook *factBook;
@property (strong, nonatomic) ColorWheel *colorWheel;

@end

