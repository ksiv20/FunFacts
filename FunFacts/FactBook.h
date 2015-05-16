//
//  FactBook.h
//  FunFacts
//
//  Created by Katherine Sivonxay on 5/16/15.
//  Copyright (c) 2015 ksivonxay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;

@end
