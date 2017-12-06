//
//  MFSNotificationAnimation.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 10/10/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSConstant+ANCS.h"
#import "MFSNotificationAnimation.h"

@interface MFSNotificationAnimation : NSObject

@property (nonatomic, readonly) MFSNotificationVibeSequence vibeSequence;

- (instancetype)initWithVibeSequence:(MFSNotificationVibeSequence)vibeSequence;

- (NSDictionary *)keyValueDescription;

@end
