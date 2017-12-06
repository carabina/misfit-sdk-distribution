//
//  MFSUAppBuilder.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 7/18/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSInstruction.h"

typedef struct {
    float value;
    float angle;
} MFSPairValues;

typedef NS_ENUM(uint8_t, MFSErrorInstructionId) {
    MFSErrorInstructionDefault,
    MFSErrorInstructionETA,
    MFSErrorInstructionTravel,
};

@interface MFSUAppInstructionFactory : NSObject

/*!
 *  @method commuteETAInstructionWithHour:
 *
 *  @param hour     The ETA hour.
 *
 *  @param minute   The ETA minute.
 *
 *  @discussion     Both hands will independently move to display the ETA; the hands need to move in a clockwise direction.
 *                  The hands stays there for 8 seconds or until user dismisses it via press of any other button.
 *
 */
+ (NSOrderedSet<MFSInstruction *> *)commuteETAInstructionWithHour:(NSUInteger)hour
                                                           minute:(NSUInteger)minute;

/*!
 *  @method commuteTravelInstructionWithTotalMinute:
 *
 *  @param travelTimeInMinute     The ETA in minute.
 *
 *  @discussion     Both hands will come together at 12 and sweep to show the commute time in minutes.
 *                  If the commute time is less than an hour, both hands will sweep together and stop at the minutes
 *                  If the commute time is more or equal than an hour, the hour hand points to hour while the minute hand points to minutes.
 *                  The hands stays there for 8 seconds or until user dismisses it via press of any other button.
 *
 */
+ (NSOrderedSet<MFSInstruction *> *)commuteTravelInstructionWithTotalMinute:(NSUInteger)travelTimeInMinute;

/*!
 *  @method ringMyPhoneInstruction:
 *
 *  @discussion     A feedback to ring my phone uapp.
 *
 */
+ (NSOrderedSet<MFSInstruction *> *)ringMyPhoneInstruction;

/*!
 *  @method errorInstructionWithId:
 *
 *  @param errorId  The error type.
 *
 *  @discussion     The vibe instruction based on error id.
 *
 */
+ (NSOrderedSet<MFSInstruction *> *)errorInstructionWithId:(MFSErrorInstructionId)errorId;

+ (NSOrderedSet<MFSInstruction *> *)weatherInstructionWithValue:(NSInteger)value
                                                    startValues:(MFSPairValues)start
                                                      minValues:(MFSPairValues)min
                                                      maxValues:(MFSPairValues)max;
@end
