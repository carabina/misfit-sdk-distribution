//
//  MFSDevice+Pluto.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Minh Nguyen on 8/4/15.
//  Copyright (c) 2015 Misfit Wearables. All rights reserved.
//

#import "MFSDevice.h"
#import "MFSAlarmSettings.h"
#import "MFSNotificationSettings.h"
#import "MFSInactivityNudgeSettings.h"
#import "MFSGoalHitNotificationSettings.h"

@interface MFSDevice (Pluto)

/*!
 *  @method setAlarm:completion:
 *
 *  @param alarmSettings    refer to @MFSAlarmSettings.
 *  @param completion       completionBlock to be invoked once the operation end.
 *
 *  @description configure alarm time and LED, Vibe and Sound sequence.
 */
- (void)setAlarm:(MFSAlarmSettings *)alarmSettings
      completion:(void (^)(NSError *error))completion;

/*!
 *  @method removeAllAlarmsWithCompletion:
 *
 *  @param completion   completionBlock to be invoked once the operation end.
 *
 *  @description remove all existing alarms.
 */
- (void)removeAllAlarmsWithCompletion:(void (^)(NSError *error))completion;

/*!
 *  @method getAlarmSettingsWithCompletion:
 *
 *  @param completion   completionBlock to be invoked once the operation end.
 *
 *  @description get current alarm settings.
 */
- (void)getAlarmSettingsWithCompletion:(void (^)(MFSAlarmSettings *settings, NSError *error))completion;

/*!
 *  @method setNotification:completion:
 *
 *  @param notificationSettings refer to @MFSNotificationSettings.
 *  @param completion           completionBlock to be invoked once the operation end.
 *
 *  @description configure LED, Vibe and Sound when there is call or text coming.
 */
- (void)setNotification:(MFSNotificationSettings *)notificationSettings
             completion:(void (^)(NSError *error))completion;

/*!
 *  @method getNotificationSettingsWithCompletion:
 *
 *  @param completion           completionBlock to be invoked once the operation end.
 *
 *  @description get current notification settings.
 */
- (void)getNotificationSettingsWithCompletion:(void (^)(MFSNotificationSettings *settings, NSError *error))completion;

/*!
 *  @method disableAllNotificationsWithCompletion:
 *
 *  @param completion           completionBlock to be invoked once the operation end.
 *
 *  @description disable all BLE notifications.
 */
- (void)disableAllNotificationsWithCompletion:(void (^)(NSError *error))completion;

/*!
 *  @method setInactivityNudge:completion:
 *
 *  @param inactivityNudgeSettings  refer to @MFSInactivityNudgeSettings.
 *  @param completion               completionBlock to be invoked once the operation end.
 *
 *  @description configure LED, Vibe and Sound when user stay idle for too long.
 */
- (void)setInactivityNudge:(MFSInactivityNudgeSettings *)inactivityNudgeSettings
                completion:(void (^)(NSError *error))completion;

/*!
 *  @method getInactivityNudgeSettingsWithCompletion:
 *
 *  @param completion               completionBlock to be invoked once the operation end.
 *
 *  @description get current inactivity nudge settings.
 */
- (void)getInactivityNudgeSettingsWithCompletion:(void (^)(MFSInactivityNudgeSettings *settings, NSError *error))completion;

/*!
 *  @method setGoalHitNotification:completion:
 *
 *  @param goalHitNotificationSettings   refer to @MFSGoalHitNotificationSettings.
 *  @param completion                   completionBlock to be invoked once the operation end.
 *
 *  @description configure LED, Vibe and Sound when user hit goal.
 */
- (void)setGoalHitNotification:(MFSGoalHitNotificationSettings *)goalHitNotificationSettings
                    completion:(void (^)(NSError *error))completion;

/*!
 *  @method getGoalHitNotificationSettingsWithCompletion:
 *
 *  @param completion                   completionBlock to be invoked once the operation end.
 *
 *  @description get current goal hit notification settings.
 */
- (void)getGoalHitNotificationSettingsWithCompletion:(void (^)(MFSGoalHitNotificationSettings *settings, NSError *error))completion;

/*!
 *  @method playLED:repeats:completion
 *
 *  @param ledSequence      refer to @MFSLEDSequence
 *  @param repeats          number of repeats.
 *  @param repeatInterval   milliseconds between repeats.
 *  @param completion       completionBlock to be invoked once the operation end.
 *
 *  @description play @{ledSequence} for @{repeats} times.
 */
- (void)playLED:(MFSLEDSequence)ledSequence
        repeats:(uint8_t)repeats
 repeatInterval:(uint8_t)repeatInterval
     completion:(void (^)(NSError *error))completion;

/*!
 *  @method playVibration:repeats:completion
 *
 *  @param vibeSequence refer to @MFSVibeSequence
 *  @param repeats      number of repeats.
 *  @param repeatInterval   milliseconds between repeats.
 *  @param completion   completionBlock to be invoked once the operation end.
 *
 *  @description play @{vibeSequence} for @{repeats} times.
 */
- (void)playVibration:(MFSVibeSequence)vibeSequence
              repeats:(uint8_t)repeats
       repeatInterval:(uint8_t)repeatInterval
           completion:(void (^)(NSError *error))completion;

/*!
 *  @method playSound:repeats:completion
 *
 *  @param soundSequence    refer to @MFSSoundSequence
 *  @param repeats          number of repeats.
 *  @param repeatInterval   milliseconds between repeats.
 *  @param completion       completionBlock to be invoked once the operation end.
 *
 *  @description play @{soundSequence} for @{repeats} times.
 */
- (void)playSound:(MFSSoundSequence)soundSequence
          repeats:(uint8_t)repeats
   repeatInterval:(uint8_t)repeatInterval
       completion:(void (^)(NSError *error))completion;

- (void)playSpecifiedLED:(MFSLedControlSequenceId)ledSequence
                ledColor:(MFSLedColorId)ledColor
                 repeats:(uint8_t)repeats
          repeatInterval:(uint8_t)repeatInterval
              completion:(void (^)(NSError *error))completion;

- (void)playSpecifiedVibration:(MFSVibeControlSequenceId)vibeSequence
              repeats:(uint8_t)repeats
       repeatInterval:(uint8_t)repeatInterval
           completion:(void (^)(NSError *error))completion;

/*!
 *  @brief get swimming lap counting license status
 *
 *  @param completion completionBlock to be invoked once the operation end.
 */
- (void)getSwimmingLapCountingLicenseWithCompletion:(MFSGetSwimmingLapCountingLicenseCompletion)completion;

/*!
 *  @brief set swimming lap counting license status
 *
 *  @param license    Encrypted license
 *  @param completion completionBlock to be invoked once the operation end.
 */
- (void)setSwimmingLapCountingLicense:(NSString *)license
                           completion:(MFSSetSwimmingLapCountingLicenseCompletion)completion;

/*!
 *  @brief set swimming lap counting triple tap mode
 *
 *  @param mode       swimming lap counting triple tap mode
 *  @param timeout    timeout in minutes
 *  @param completion completionBlock to be invoked once the operation end.
 */
- (void)setSwimmingLapCountingTripleTapMode:(MFSSwimmingLapCountingLapCountingMode)mode
                           timeoutInMinutes:(uint8_t)timeout
                                 completion:(MFSSetSwimmingLapCountingTripleTapModeCompletion)completion;
@end
