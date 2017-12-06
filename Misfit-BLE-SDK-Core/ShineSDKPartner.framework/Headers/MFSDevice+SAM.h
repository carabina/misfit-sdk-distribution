//
//  MFSDevice+SAM.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 7/12/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import "MFSDevice.h"
#import "MFSHandSetting.h"

@interface MFSDevice (SAM)

/*!
 *  Used to request control of the hands. This will lock out control from any other watch features that are a lower or equal priority to the access requested.
 *
 *  @param priority                         Access Priority. Zero is highest priority.
 *
 *  @param responseWhenControlIsComplete    If this is enabled we will send a BLE command
 back to the app when the current move is complete.
 *
 *  @param responseWhenControlIsLost        If this is enabled we will send a BLE command back to the app
 whenever a higher priority module within the firmware takes
 control of the hands away from the app.
 *
 *  @param completion                       completionBlock to be invoked once the operation end.
 */
- (void)requestControlHandWithPriority:(uint8_t)priority
         responseWhenControlIsComplete:(BOOL)responseWhenControlIsComplete
             responseWhenControlIsLost:(BOOL)responseWhenControlIsLost
                            completion:(MFSRequestControlHandsCompletion)completion;

/*!
 *  Used to release control of the hands. This will give control of the hands back to the watch.
 *
 *  @param delay      Delay time before the watch back to work.
 *  @param completion completionBlock to be invoked once the operation end.
 */
- (void)releaseControlHandWithDelay:(uint16_t)delay
                         completion:(MFReleaseControlHandsCompletion)completion;

/*!
 *  Set the current position of the hands is will be the new calibrated position
 *
 *  @param completion completionBlock to be invoked once the operation end.
 */
- (void)setCalibratedHandPosition:(MFSSetCalibratedHandPositionCompletion)completion;

/*!
 *  Used to command the hands to move. This is a flexible command that allows for control of the hands in several different ways
 *
 *  @param handSettings The settings for hand movement. SEE MORE: MFSHandSetting
 *  @param movingType   Hand moving type. SEE MORE: MFSHandMovingType
 *  @param completion   completionBlock to be invoked once the operation end.
 */
- (void)moveHandWithHandSettings:(NSArray<MFSHandSetting *> *)handSettings
                      movingType:(MFSHandMovingType)movingType
                      completion:(MFSMoveHandsCompletion)completion;

/*!
 *  Used to returns current hand positions.
 *
 *  @param completion completionBlock to be invoked once the operation end.
 */
- (void)getCurrentHandPositions:(MFSGetCurrentHandPositions)completion;

@end
