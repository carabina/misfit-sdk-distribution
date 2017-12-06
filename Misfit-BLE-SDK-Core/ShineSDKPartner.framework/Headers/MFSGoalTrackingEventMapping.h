//
//  MFSGoalTrackerEventMapping.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 12/22/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import "MFSEventMapping.h"

@interface MFSGoalTrackingEventMapping : MFSEventMapping

- (instancetype)initWithButtonEvent:(MFSButtonEventType)event
                             goalId:(uint8_t)goalId;

@end
