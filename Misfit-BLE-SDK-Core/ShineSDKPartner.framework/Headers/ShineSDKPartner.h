//
//  ShineSDK.h
//  ShineSDK
//
//  Created by Minh Nguyen on 2/14/14.
//  Copyright (c) 2014 Misfit Wearables. All rights reserved.
//

#define MISFIT_SHINE_SDK_VERSION_STRING @""

#if defined(__cplusplus)
#define MISFIT_BLE_EXTERN extern "C"
#else
#define MISFIT_BLE_EXTERN extern
#endif

#import "MFSSDKSettings.h"
#import "MFSPartnerManager.h"
#import "MFSDevice.h"
#import "MFSDevice+Pluto.h"
#import "MFSDevice+SAM.h"
#import "MFSDevice+ANCS.h"
#import "MFSDevice+ActionId.h"
#import "MFSDevice+Constants.h"
#import "MFSDevice+ButtonEvent.h"
#import "MFSDevice+MicroApp.h"

#import "MFSConfiguration.h"
#import "MFSConfigurationUpdate.h"
#import "MFSConnectionParameters.h"
#import "MFSStreamingParameters.h"
#import "MFSButtonEventAnimationMapping.h"
#import "MFSFirmwareManager.h"
#import "MFSFirmware.h"
#import "MFSCustomFirmware.h"
#import "MFSDataCollectionAutoController.h"
#import "MFSDataCollectionNoneController.h"
#import "MFSDataCollectionManualController.h"
#import "MFSHandSetting.h"
#import "MFSCurrentHandPositions.h"
#import "MFSEventMapping.h"
#import "MFSHIDEventMapping.h"
#import "MFSAlarm.h"
#import "MFSError.h"
#import "MFSEnumError.h"
#import "MFSKeyboardEventMapping.h"
#import "MFSButtonStreamingEventMapping.h"
#import "MFSGoalTrackingEventMapping.h"
#import "MFSDisplayModeEventMapping.h"
#import "MFSNoResponseCustomRequest.h"
#import "MFSSimpleCustomRequest.h"
#import "MFSMultipleResponseCustomRequest.h"

#import "MFSUAppInstructionFactory.h"
#import "MFSInstruction.h"
#import "MFSDelayInstr.h"
#import "MFSEndRepeatInstr.h"
#import "MFSHIDInstr.h"
#import "MFSStartRepeatInstr.h"
#import "MFSStreamInstr.h"
#import "MFSSwitchActivityInstr.h"
#import "MFSTerminateInstr.h"
#import "MFSAnimationInstr.h"
#import "MFSAnimationConfig.h"
#import "MFSVibeInstr.h"
#import "MFSKeyValueDescriptionProtocol.h"
#import "MFSUAppCustomization.h"
#import "MFSUAppGoalTrackingCustom.h"
