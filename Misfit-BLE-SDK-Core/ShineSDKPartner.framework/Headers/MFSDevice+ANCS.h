//
//  MFSDevice+ANCS.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 9/23/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import "MFSDevice.h"
#import "MFSNotificationFilter.h"
#import "MFSTrackerAnimation.h"

@interface MFSDevice (ANCS)
/*!
 *  Set notification filter rule to device.(NOTE: The rule will be lost when power reset)
 *
 *  @param notificationFilter NotificationFilter rule. See more: MFSNotificationFilter
 *  @param completion         completionBlock to be invoked once the operation end.
 */
- (void)setNotificationFiltering:(MFSNotificationFilter *)notificationFilter
                      completion:(MFSSetNotificationFilteringCompletion)completion;

/*!
 *  Clear a notification rule by index.
 *
 *  @param ruleIndex  The index of rule.
 *  @param completion completionBlock to be invoked once the operation end.
 */
- (void)clearNotificationFiltering:(uint8_t)ruleIndex
                        completion:(MFSClearNotificationFilteringCompletion)completion;
/*!
 *  Clear all notification filter.
 *
 *  @param completion   completionBlock to be invoked once the operation end.
 */
- (void)clearAllNotificationFiltering:(MFSClearAllNotificationFilteringCompletion)completion;

/*!
 *  Get a notification rule by index.
 *
 *  @param ruleIndex  The index of rule.
 *  @param completion completionBlock to be invoked once the operation end.
 */
- (void)getNotificationFiltering:(uint8_t)ruleIndex
                      completion:(MFSGetNotificationFilteringCompletion)completion;

/*!
 *  Get all notification rule by index.
 *
 *  @param completion completionBlock to be invoked once the operation end.
 */
- (void)getAllNotificationFiltering:(MFSGetAllNotificationFilteringCompletion)completion;

/*!
 *  Store all notification filter rules to flash memory.
 *
 *  @param completion completionBlock to be invoked once the operation end.
 */
- (void)saveAllNotificationFilteringWithCompletion:(MFSSaveAllNotificationFilteringCompletion)completion;

/*!
 *  Used to trigger notification with an specify animation.
 *
 *  @param animation    notification animation type.SEE MORE: @MFSHybridNotificationFilterParser, @MFSTrackerNotificationFilterParser
 *  @param completion   completionBlock to be invoked once the operation end.
 */
- (void)playNotificationWithAnimation:(MFSNotificationAnimation *)animation
                           completion:(MFSPlayHandAnimationCompletion)completion;

@end
