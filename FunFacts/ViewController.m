//
//  ViewController.m
//  FunFacts
//
//  Created by Katherine Sivonxay on 5/15/15.
//  Copyright (c) 2015 ksivonxay. All rights reserved.
//

#import "ViewController.h"
#import "FactBook.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    // allocate a space in memory for FactBook class then call its init method.
    self.factBook = [[FactBook alloc] init];
    self.funFactLabel.text = [self.factBook randomFact];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showFunFact {
    
//    NSLog(@"showFunFact button pressed");
    self.funFactLabel.text = [self.factBook randomFact];
}
@end
