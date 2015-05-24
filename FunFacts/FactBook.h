//
//  FactBook.h
//  FunFacts
//
//  Created by Katherine Sivonxay on 5/16/15.
//  Copyright (c) 2015 ksivonxay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

// keep track of the previously displayed fact
@property (nonatomic) NSNumber *lastFact;

// array to hold all the facts
@property (strong, nonatomic) NSArray *facts;

// declare method to get a random fact from the facts array
- (NSString *)randomFact;

@end
