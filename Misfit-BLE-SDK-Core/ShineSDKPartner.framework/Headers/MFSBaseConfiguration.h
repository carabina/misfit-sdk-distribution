//
//  MFSBaseConfiguration.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Minh Nguyen on 7/14/14.
//  Copyright (c) 2014 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSDevice+Constants.h"
#import "MFSCountdownSettings.h"
#import "MFSGoalTrackingState.h"

/*!
 *  @struct MFSTimeConfiguration
 *
 *  @description represents time-related configuration on device.
 */
typedef struct {
    /*!
     *  @property timestamp
     *
     *  @description UTC timestamp, the seconds part.
     */
    uint32_t timestamp;
    
    /*!
     *  @property milliseconds
     *
     *  @description UTC timestamp, the milliseconds part.
     */
    uint16_t milliseconds;
    
    /*!
     *  @property timeZoneOffsetInMinutes
     *
     *  @description Timezone offset in minutes.
     */
    int16_t timeZoneOffsetInMinutes;
} MFSTimeConfiguration;

static const int32_t kDefaultActivityPoint = -1;
static const int32_t kDefaultGoalValue = -1;
static const int16_t kDefaultCurrentSteps = -1;
static const int16_t kDefaultGoalsInStep = -1;
static const int16_t kDefaultBoltGroupId = -1;
static const uint8_t kDefaultVibeStrength = UINT8_MAX;
static const int16_t kDefaultSecondTimeZoneOffsetInMinutes = INT16_MIN;

static const MFSTimeConfiguration kDefaultTimeConfiguration = (MFSTimeConfiguration){
    .timestamp = -1,
    .milliseconds = -1,
    .timeZoneOffsetInMinutes = 1024
};

/*!
 *  @enum MFSClockState
 *
 *  @description Represents clock state.
 *
 *  @constant MFSClockStateDefault          State unknown.
 *  @constant MFSClockStateDisable          Clock function is disabled.
 *  @constant MFSClockStateEnable           Clock function is enabled. Show daily progress before clock.
 *  @constant MFSClockStateShowClockFirst   Clock function is enabled. Show clock before daily progress.
 *
 */
typedef NS_ENUM(int8_t, MFSClockState)
{
    MFSClockStateDefault = -1,
    MFSClockStateDisable = 0,
    MFSClockStateEnable = 1,
    MFSClockStateShowClockFirst = 2
};

/*!
 *  @enum MFSTripleTapState
 *
 *  @description Represents triple tap state.
 *
 *  @constant MFSTripleTapStateDefault      State unknown.
 *  @constant MFSTripleTapStateDisable      TripleTap function is disabled.
 *  @constant MFSTripleTapStateEnable       TripleTap function is enabled.
 *
 */
typedef NS_ENUM(int8_t, MFSTripleTapState)
{
    MFSTripleTapStateDefault = -1,
    MFSTripleTapStateDisable = 0,
    MFSTripleTapStateEnable = 1
};

/*!
 *  @enum MFSWristFlickState
 *
 *  @description Represents wrist flick state.
 *
 *  @constant MFSWristFlickStateDefault     State unknown.
 *  @constant MFSWristFlickStateOff         WristFlick function is disabled.
 *  @constant MFSWristFlickStateOn          WristFlick function is enabled.
 *
 */
typedef NS_ENUM(int8_t, MFSWristFlickState)
{
    MFSWristFlickStateDefault = -1,
    MFSWristFlickStateOff = 0,
    MFSWristFlickStateOn = 1
};

/*!
 *  @enum MFSActivityTaggingState
 *
 *  @description Represents activity tagging state.
 *
 *  @constant MFSActivityTaggingStateDefault    State unknown.
 *  @constant MFSActivityTaggingStateTaggedOut  Tagged-in.
 *  @constant MFSActivityTaggingStateTaggedIn   Tagged-out.
 *
 */
typedef NS_ENUM(int8_t, MFSActivityTaggingState)
{
    MFSActivityTaggingStateDefault = -1,
    MFSActivityTaggingStateTaggedOut = 0,
    MFSActivityTaggingStateTaggedIn = 1
};

/*!
 *  @class MFSBaseConfiguration
 *
 *  @description represents users' activity within a period of time (usually 1 minute).
 *
 */
@interface MFSBaseConfiguration : NSObject<NSCopying>

/*!
 *  @property clockState
 *
 *  @description Clock function settings, initially set to <code>MFSClockStateDefault</code>
 *
 *  @see    MFSClockState
 *
 */
@property (nonatomic, assign) MFSClockState clockState;

/*!
 *  @property tripleTapState
 *
 *  @description Triple tap state, initially set to <code>MFSTripleTapStateDefault</code>
 *
 *  @see    MFSTripleTapState
 *
 */
@property (nonatomic, assign) MFSTripleTapState tripleTapState;

/*!
 *  @property activityTaggingState
 *
 *  @description Activity Tagging State, initially set to <code>MFSActivityTaggingStateDefault</code>
 *
 *  @see    MFSActivityTaggingState
 *
 */
@property (nonatomic, assign) MFSActivityTaggingState activityTaggingState;

/*!
 *  @property activityPoint
 *
 *  @description Activity points earned today.
 *
 */
@property (nonatomic, assign) int32_t activityPoint;

/*!
 *  @property goalValue
 *
 *  @description Daily goal value.
 *
 */
@property (nonatomic, assign) int32_t goalValue;

/*!
 *  @property currentSteps
 *
 *  @description Current total estimated steps.
 *
 */
@property (nonatomic) int32_t currentSteps;

/*!
 *  @property goalsInStep
 *
 *  @description Daily goal value in steps unit.
 *
 */
@property (nonatomic) int32_t goalsInStep;

/*!
 *  @property wristFlickState
 *
 *  @description Wrist flick State, initially set to <code>MFSWristFlickStateDefault</code>
 *
 */
@property (nonatomic) MFSWristFlickState wristFlickState;

@property (nonatomic) MFSFlashButtonMode flashButtonMode;

@property (nonatomic) int16_t boltGroupID;

@property (nonatomic) NSData *boltPasscode;

/*!
 *  @property timeConfiguration
 *
 *  @discussion Represents time-related configuration on device.
 *
 */
@property (nonatomic, assign) MFSTimeConfiguration timeConfiguration;

/*!
 *  @property countdownSettings
 *
 *  @description Count down start/end time settings.
 */
@property (nonatomic) MFSCountdownSettings *countdownSettings;

/*!
 *  @property secondTimeZoneOffsetInMinutes
 *
 *  @description Timezone UTC offset in minutes (-660 to 840).
 */
@property (nonatomic) int16_t secondTimeZoneOffsetInMinutes;

/*!
 *  @property goalTrackingState
 *
 *  @description Goal tracking setting..
 */
@property (nonatomic) MFSGoalTrackingState *goalTrackingState;

/*!
 *  @property vibeStrengthLevel
 */
@property (nonatomic) MFSVibeStrengthLevel vibeStrengthLevel;

- (NSDictionary *)keyValueDescription;

@end
