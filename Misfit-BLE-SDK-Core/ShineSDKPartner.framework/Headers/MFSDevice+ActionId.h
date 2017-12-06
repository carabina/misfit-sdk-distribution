//
//  MFSDevice+ActionId.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 1/12/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

typedef NS_ENUM(NSInteger, MFSPhaseActionId)
{
    MFSPhaseActionIdNone                                        = 0,
    MFSPhaseActionIdPrepare                                     = 1, // Only for Logging
    MFSPhaseActionIdAnimation                                   = 2,
    
    MFSPhaseActionIdGetConfiguration                            = 3,
    MFSPhaseActionIdSetConfiguration                            = 4,
    
    MFSPhaseActionIdSync                                        = 5,
    MFSPhaseActionIdOTA                                         = 6,
    MFSPhaseActionIdGetConnectionParameters                     = 7,
    MFSPhaseActionIdSetConnectionParameters                     = 8,
    MFSPhaseActionIdChangeSerialNumber                          = 9,
    MFSPhaseActionIdActivation                                  = 10,
    MFSPhaseActionIdStopAnimation                               = 11,
    MFSPhaseActionIdStreaming                                   = 12,
    MFSPhaseActionIdStopFileStreaming                           = 13,
    MFSPhaseActionIdSetStreamingParameters                  	= 14,
    MFSPhaseActionIdMapButtonEventAnimation                     = 15,
    MFSPhaseActionIdPlayButtonEventResponseAnimation            = 16,
    MFSPhaseActionIdPlayLED                                     = 17,
    MFSPhaseActionIdPlayVibration                               = 18,
    MFSPhaseActionIdPlaySound                                   = 19,
    MFSPhaseActionIdSetupGoalHitNotification                    = 20,
    MFSPhaseActionIdGetGoalHitNotification                      = 21,
    MFSPhaseActionIdSetupInactivityNudge                        = 22,
    MFSPhaseActionIdGetInactivityNudge                          = 23,
    MFSPhaseActionIdSetupSingleAlarm                            = 24,
    MFSPhaseActionIdGetSingleAlarm                              = 25,
    MFSPhaseActionIdClearAllAlarms                              = 26,
    MFSPhaseActionIdSetupBLENotification                        = 27,
    MFSPhaseActionIdGetBLENotification                          = 28,
    MFSPhaseActionIdDisableAllBLENotifications                  = 29,
    MFSPhaseActionIdRetrieveHardwareLog                         = 30,
    MFSPhaseActionIdCustomRequests                              = 31,
	MFSPhaseActionIdSetNotificationFiltering                    = 32,
    MFSPhaseActionIdGetNotificationFiltering                    = 33,
    MFSPhaseActionIdGetAllNotificationFiltering                 = 34,
    MFSPhaseActionIdClearAllNotificationFiltering               = 35,
    MFSPhaseActionIdClearNotificationFiltering                  = 36,
    MFSPhaseActionIdSaveAllNotificationFiltering                = 37,
    MFSPhaseActionIdDebug                                       = 38,
    MFSPhaseActionIdPlaySpecifiedLed                            = 39,
    MFSPhaseActionIdPlaySpecifiedVibration                      = 40,
    MFSPhaseActionIdRequestControlHands                         = 41,
    MFSPhaseActionIdReleaseControlHands                         = 42,
    MFSPhaseActionIdSetLockingCalibratedPositions               = 43,
    MFSPhaseActionIdMovingHandsPosition                         = 44,
    MFSPhaseActionIdGetCurrentHandsPosition                     = 45,
    MFSPhaseActionIdPlayNotificationAnimation                   = 46,
    MFSPhaseActionIdSetEventMapping                             = 47,
    MFSPhaseActionIdUnmapButtonEvent                            = 48,
    
    // Multiple alarms
    MFSPhaseActionIdSetMultipleAlarms                           = 49,
    MFSPhaseActionIdVerifyMultipleAlarms                        = 50,
    // Get Event Mapping - DC
    MFSPhaseActionIdGetEventMapping                             = 51,
    
    MFSPhaseControllerGetSwimmingLapCountingLicense             = 65,
    MFSPhaseControllerSetSwimmingLapCountingLicense             = 66,
    MFSPhaseControllerSetSwimmingLapCountingTripleTapMode       = 67,

    MFSPhaseActionIdGetUAppSystemVersion                        = 68,
    
    MFSPhaseActionIdUAppSetConfiguration                        = 69,
    MFSPhaseActionIdUAppSetRemoteFile                           = 70,
    MFSPhaseActionIdSendACK                                     = 71,
    MFSPhaseActionIdEnableStreaming                             = 72,
    MFSPhaseActionIdDisableStreaming                            = 73,
	MFSPhaseActionIdUnknown                                     = 999
};
