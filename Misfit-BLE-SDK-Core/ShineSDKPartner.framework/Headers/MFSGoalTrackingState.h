//
//  MFSGoalTrackingState.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 7/12/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSGoalTrackingState : NSObject

@property (nonatomic) uint8_t goalId;
@property (nonatomic) BOOL enabled;

- (NSDictionary *)keyValueDescription;

@end
