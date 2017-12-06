//
//  MFSNotificationFilter.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 3/21/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSDevice+Constants.h"
#import "MFSHybridAnimation.h"
#import "MFSTrackerAnimation.h"
#import "MFSConstant+ANCS.h"

@interface MFSNotificationFilter : NSObject

@property (nonatomic, readonly) NSInteger index;
@property (nonatomic, readonly) NSString *contact;
@property (nonatomic, readonly) MFSFilterRuleApplication application;
@property (nonatomic, readonly) MFSNotificationAnimation *animation;

- (instancetype)initWithIndex:(NSInteger)index
                  application:(MFSFilterRuleApplication)application
                      contact:(NSString *)contact
                    animation:(MFSNotificationAnimation *)animation
                        error:(NSError **)error;

- (NSDictionary *)keyValueDescription;

@end
