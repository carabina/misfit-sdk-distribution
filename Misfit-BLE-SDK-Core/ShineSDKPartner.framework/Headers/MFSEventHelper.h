//
//  MFSEventHelper.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Uy Nguyen Long on 1/16/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - EventId
typedef NS_ENUM(UInt16, MFSEventId)
{
    MFSEventIdNone                                                 = 0,
    MFSEventIdActivate                                             = 1,
    
    MFSEventIdDisplayPairAnimation                                 = 2,
    MFSEventIdDisplaySyncAnimation                                 = 3,
    MFSEventIdStopAnimation                                        = 4,
    
    MFSEventIdGetActivityPoint                                     = 5,
    MFSEventIdGetActivityTaggingState                              = 6,
    MFSEventIdGetBattery                                           = 7,
    MFSEventIdGetClockState                                        = 8,
    MFSEventIdGetCountdownSettings                                 = 9,
    MFSEventIdGetCurrentSteps                                      = 10,
    MFSEventIdGetGoalInSteps                                       = 11,
    MFSEventIdGetGoal                                              = 12,
    MFSEventIdGetGoalTrackingState                                 = 13,
    MFSEventIdGetSecondTimeZone                                    = 14,
    MFSEventIdGetTime                                              = 15,
    MFSEventIdGetTripleTapEnable                                   = 16,
    MFSEventIdGetVibeStrength                                      = 17,
    MFSEventIdGetWristFlick                                        = 18,
    MFSEventIdSetActivityPoint                                     = 19,
    MFSEventIdSetActivityTaggingState                              = 20,
    MFSEventIdSetClockState                                        = 21,
    MFSEventIdSetCountdownSettings                                 = 22,
    MFSEventIdSetCurrentSteps                                      = 23,
    MFSEventIdSetExtraAdvertisingDataState                         = 24,
    MFSEventIdSetGoalInSteps                                       = 25,
    MFSEventIdSetGoal                                              = 26,
    MFSEventIdSetGoalTrackingState                                 = 27,
    MFSEventIdSetSecondTimeZone                                    = 28,
    MFSEventIdSetTime                                              = 29,
    MFSEventIdSetTripleTapEnable                                   = 30,
    MFSEventIdSetVibeStrength                                      = 31,
    MFSEventIdSetWristFlick                                        = 32,
    
    MFSEventIdGetConnectionParameters                              = 33,
    MFSEventIdSetConnectionParameters                              = 34,
    
    MFSEventIdSetEventMapping                                      = 35,
    MFSEventIdUnmapEventMapping                                    = 36,
    
    MFSEventIdFileStreaming                                        = 37,
    MFSEventIdGetFlashButtonMode                                   = 38,
    MFSEventIdMapButtonEventAnimation                              = 39,
    MFSEventIdPlayButtonEventAnimation                             = 40,
    MFSEventIdSetFileStreamHeartbeatInterval                       = 41,
    MFSEventIdSetFileStreamNumberOfPacketsPerEvent                 = 42,
    MFSEventIdSetFlashButtonMode                                   = 43,
    MFSEventIdStopFileStreaming                                    = 44,
    
    MFSEventIdPlaySpecifiedLed                                     = 45,
    
    MFSEventIdMultipleAlarmPut                                     = 46,
    MFSEventIdVerifyMultipleAlarms                                 = 47,
    
    MFSEventIdPlayNotificationWithAnimation                        = 48,
    MFSEventIdClearAllNotificationRule                             = 49,
    MFSEventIdClearNotificationFiltering                           = 50,
    MFSEventIdGetNotificationFiltering                             = 51,
    MFSEventIdSaveAllNotificationFiltering                         = 52,
    MFSEventIdSetNotificationFiltering                             = 53,
    
    MFSEventIdOTAEnter                                             = 54,
    MFSEventIdOTAErase                                             = 55,
    MFSEventIdOTAGetSizeWritten                                    = 56,
    MFSEventIdOTAPut                                               = 57,
    MFSEventIdOTAReset                                             = 58,
    MFSEventIdOTAVerifyFile                                        = 59,
    MFSEventIdOTAVerifySegment                                     = 60,
    
    MFSEventIdClearAllAlarms                                       = 61,
    MFSEventIdDisableAllBLENotifications                           = 62,
    MFSEventIdGetAlarmParameters                                   = 63,
    MFSEventIdGetBLENotification                                   = 64,
    MFSEventIdGetBLENotificationTimeWindow                         = 65,
    MFSEventIdGetGoalHitNotification                               = 66,
    MFSEventIdGetInactivityNudge                                   = 67,
    MFSEventIdGetSingleAlarm                                       = 68,
    MFSEventIdPlayLED                                              = 69,
    MFSEventIdPlaySound                                            = 70,
    MFSEventIdPlayVibration                                        = 71,
    MFSEventIdSetAlarmParameters                                   = 72,
    MFSEventIdSetupBLENotification                                 = 73,
    MFSEventIdSetupBLENotificationTimeWindow                       = 74,
    MFSEventIdSetupGoalHitNotification                             = 75,
    MFSEventIdSetupInactivityNudge                                 = 76,
    MFSEventIdSetupSingleAlarm                                     = 77,
    
    MFSEventIdGetHandPosition                                      = 78,
    MFSEventIdSetCalibratedHandPosition                            = 79,
    MFSEventIdSetMovingHands                                       = 80,
    MFSEventIdSetReleaseHandsControl                               = 81,
    MFSEventIdSetRequestHandsControl                               = 82,
    
    MFSEventIdSerialNumberChangeAndLock                            = 83,
    MFSEventIdSerialNumberChange                                   = 84,
    MFSEventIdSerialNumberGetLock                                  = 85,
    MFSEventIdSerialNumberSetLock                                  = 86,
    MFSEventIdSerialNumberSet                                      = 87,
    MFSEventIdSerialNumberUnlock                                   = 88,
    
    MFSEventIdCloseCurrentActivityFile                             = 89,
    MFSEventIdFileAbort                                            = 90,
    MFSEventIdFileEraseActivity                                    = 91,
    MFSEventIdFileEraseHardwareLog                                 = 92,
    MFSEventIdFileErase                                            = 93,
    MFSEventIdFileGetActivity                                      = 94,
    MFSEventIdFileGetHardwareLog                                   = 95,
    MFSEventIdFileGet                                              = 96,
    MFSEventIdFileList                                             = 97,
    MFSEventIdGetLastProcessedFileHandle                           = 98,
    MFSEventIdSetLastProcessedFileHandle                           = 99,
    
    MFSEventIdPlaySpecifiedVibration                               = 100,
    
    MFSEventIdCustom                                               = 101,
    
    MFSEventIdBoltAddGroupID                                       = 102,
    MFSEventIdBoltGetGroupID                                       = 103,
    MFSEventIdBoltGetPasscode                                      = 104,
    MFSEventIdBoltSetPasscode                                      = 105,
    
    MFSEventIdGetButtonEventMapping                                = 106,
    
    MFSEventIdGetSwimmingLapCountingLicense                        = 119,
    MFSEventIdSetSwimmingLapCountingLicense                        = 120,
    MFSEventIdSetSwimmingLapCountingTripleTapMode                  = 121,
    
    MFSEventIdGetUAppSystemVersion                                 = 122,
    MFSEventIdFileSettingDataPut                                   = 123,
    MFSEventIdFileSettingGetSizeWritten                            = 124,
    MFSEventIdFileSettingAbort                                     = 125,
    
    MFSEventIdACKHeartbeat                                         = 126,
    
    MFSEventIdEnableStreaming                                      = 127,
    MFSEventIdDisableStreaming                                     = 128,
    
    MFSEventIdReadSerialNumber                                     = 200,
    MFSEventIdReadFirmwareVersion                                  = 201,
    MFSEventIdReadModelNumber                                      = 202,
    MFSEventIdUpdateValueForCharacteristic                         = 203,
    MFSEventIdDiscoverServices                                     = 204,
    MFSEventIdDiscoverCharacteristics                              = 205,
    MFSEventIdSubscribeCharacteristic                              = 206,
    
    MFSEventIdUnknown                                              = 999
};

@interface MFSEventHelper : NSObject

+ (NSString *)eventNameFromEventId:(MFSEventId)eventId;

@end
