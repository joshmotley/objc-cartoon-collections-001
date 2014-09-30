//
//  FISAppDelegate.h
//  cartoonCollections
//
//  Created by Joe Burgess on 6/4/14.
//  Copyright (c) 2014 Joe Burgess. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FISAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

-(NSString *)rollCallDwarves:(NSArray *)dwarves;
-(NSArray *)summonCaptainPlanet:(NSArray *)planteerCalls;
-(NSArray *)longPlaneteerCalls:(NSArray *)planteerCalls;
-(NSString *)findTheCheese:(NSArray *)cheeses;
-(NSArray *)calculateDollarAmountsWithReceipt:(NSArray *)receipt;


@end
