//
//  BTCrystalBall.m
//  CrystalBall
//
//  Created by Emilia Kirschenbaum on 10/28/13.
//  Copyright (c) 2013 BedTimeTaco. All rights reserved.
//

#import "BTCrystalBall.h"

@implementation BTCrystalBall

-(NSArray*)predictions{
    if(_predictions==nil){
        _predictions=[[NSArray alloc]initWithObjects:
                      @"It is Certain", @"It is Decidedly So",
                      @"All signs say YES",
                      @"The Stars are Not Aligned",
                      @"My reply is no",
                      @"It is doubtful",
                      @"Better not tell you now",
                      @"Ask Again",
                      @"Unable to Answer", nil];
    }
    return _predictions;
}
-(NSString*)randomPrediction{
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end
