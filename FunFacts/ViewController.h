//
//  ViewController.h
//  FunFacts
//
//  Created by Katherine Sivonxay on 5/15/15.
//  Copyright (c) 2015 ksivonxay. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (strong, nonatomic) FactBook *factBook;

@end

