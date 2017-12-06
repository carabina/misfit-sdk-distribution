//
//  MFSUAppGoalTracking.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 8/2/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import "MFSUAppCustomization.h"

@interface MFSUAppGoalTrackingCustom : MFSUAppCustomization

@property (nonatomic, readonly) uint8_t goalId;

- (instancetype)initWithGoalId:(uint8_t)goalId;

@end
