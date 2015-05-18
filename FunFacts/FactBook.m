//
//  FactBook.m
//  FunFacts
//
//  Created by Katherine Sivonxay on 5/16/15.
//  Copyright (c) 2015 ksivonxay. All rights reserved.
//

#import "FactBook.h"

@implementation FactBook

/*
 * Initializer method.
 */
- (instancetype)init{
    
    self = [super init];
    if(self){
        // initialize the facts array.
        _facts = [[NSArray alloc] initWithObjects:
                  @"Ants stretch when they wake up.",
                  @"Ostriches can run faster than horses.",
                  @"Olympic gold medals are actually made of silver.",
                  @"You are born with 300 bones; by the time you are an adult you will have 206.",
                  @"It takes about 8 minutes for light from the sun to reach the Earth.",
                  @"Some bamboo plants can grow almost a meter in just one day.",
                  @"The state of Florida is bigger than England.",
                  @"Some penguins can leap 2-3 meters out of the water.",
                  @"On average, it takes 66 days to form a new habit.",
                  @"Mammoths still walked the Earth when the Great Pyramid was being built.",
                  @"Human thigh bones are stronger than concrete.",
                  @"It’s possible to lead a cow upstairs…but not downstairs.",
                  @"Heart attacks are more likely to happen on a Monday.",
                  @"An average person’s yearly fast food intake will contain 12 pubic hairs.",
                  @"95% of people text things they could never say in person.",
                  @"Banging your head against a wall burns 150 calories an hour.",
                  @"The average woman uses her height in lipstick every 5 years.",
                  @"If you lift a kangaroo’s tail off the ground it can’t hop.",
                  nil];
    }
    return self;
}


/*
 * Randomly selects a random fact from the facts array.
 * return: A fact from the facts array.
 */
- (NSString *)randomFact {

    int randomIndex = arc4random_uniform((int)self.facts.count);

    return [self.facts objectAtIndex:randomIndex];
}


@end
