//
//  MFSSwitchActivityInstr.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/8/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import "MFSInstruction.h"

typedef NS_ENUM(uint8_t, MFSActivityExecutionType)
{
    MFSActivityExecutionRestart = 0x00,
    MFSActivityExecutionResume = 0x01
};

/*!
 *  @class MFSSwitchActivityInstr
 *
 *  @discussion
 *      Executes an activity from the first instruction.
 *
 */
@interface MFSSwitchActivityInstr : MFSInstruction

@property (nonatomic, readonly) uint8_t activityId;
@property (nonatomic, readonly) MFSActivityExecutionType executionType;

- (instancetype)initWithActivityId:(uint8_t)activityId
                     executionType:(MFSActivityExecutionType)executionType;

@end
