//
//  MFSDevice+ButtonEvent.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 2/7/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import "MFSDevice.h"

@interface MFSDevice (ButtonEvent)

/*!
 *  Set the heartbeat interval to device. Zero to disable heartbeat event.
 *
 *  @param streamingParameters  The streaming parameters
 *  @param completion           completionBlock to be invoked once the operation end.
 */
- (void)setStreamingParameters:(MFSStreamingParameters *)streamingParameters
                    completion:(MFSTaskCompletion)completion;

/*!
 *  Enable streaming event
 *
 *  @param completion completionBlock to be invoked once the operation end.
 */
- (void)startStreamingEventWithCompletion:(MFSTaskCompletion)completion;

/*!
 *  Disable streaming event
 *
 *  @param completion completionBlock to be invoked once the operation end.
 */
- (void)stopStreamingWithCompletion:(MFSTaskCompletion)completion;

- (void)playButtonEventAnimation:(MFSButtonEventAnimationType)buttonEventAnimation
                  withCompletion:(MFSTaskCompletion)completion;

/*!
 *  Set event mapping to device.
 *
 *  @param events                           Event mapping settings.
 *  @param shouldClearEventOnButton         Automatically clear all events on button.
 *
 *  @see MFSOverrideEventMappingKey.    (Default is NO)
 *
 *  @param completion   completionBlock to be invoked once the operation end.
 */
- (void)setEventMapping:(NSArray<MFSEventMapping *> *)events
shouldClearEventOnButton:(BOOL)shouldClearEventOnButton
             completion:(MFSTaskCompletion)completion;

- (void)getEventMappingForButtonEvent:(MFSButtonEventType)buttonEvent
                           completion:(MFSGetEventMappingForButtonEventCompletion)completion;
/*!
 *  Unmap button event.
 *
 *  @param event      unmap a specify event.
 *  @param completion completionBlock to be invoked once the operation end.
 */
- (void)unmapButtonEvent:(MFSButtonEventType)event
              completion:(MFSTaskCompletion)completion;

/*!
 *  Unmap all button event.
 *
 *  @param completion completionBlock to be invoked once the operation end.
 */
- (void)unmapAllButtonEvent:(MFSTaskCompletion)completion;

@end
