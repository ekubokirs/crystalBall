//
//  BTCrystalBall.h
//  CrystalBall
//
//  Created by Emilia Kirschenbaum on 10/28/13.
//  Copyright (c) 2013 BedTimeTaco. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BTCrystalBall : NSObject{
    NSArray *_predictions;
}

@property(strong, readonly, nonatomic) NSArray *predictions;
-(NSString*)randomPrediction;
@end
