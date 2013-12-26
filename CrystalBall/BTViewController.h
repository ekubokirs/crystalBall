//
//  BTViewController.h
//  CrystalBall
//
//  Created by Emilia Kirschenbaum on 10/24/13.
//  Copyright (c) 2013 BedTimeTaco. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BTCrystalBall;

@interface BTViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;

@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

@property (strong, nonatomic) BTCrystalBall *crystalBall;

-(void) makePrediction;

@end
