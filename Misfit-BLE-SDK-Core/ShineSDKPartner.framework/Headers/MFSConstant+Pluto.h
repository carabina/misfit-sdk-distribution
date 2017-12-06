//
//  MFSConstant+Pluto.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 8/5/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#ifndef MFSConstant_Pluto_h
#define MFSConstant_Pluto_h

typedef NS_ENUM(NSUInteger, MFSLEDSequence) {
    MFSLEDSequenceDummy,
};

typedef NS_ENUM(NSUInteger, MFSVibeSequence) {
    MFSVibeSequenceDummy,
};

typedef NS_ENUM(NSUInteger, MFSSoundSequence) {
    MFSSoundSequenceDummy,
};

typedef struct {
    MFSLEDSequence ledSequence;
    MFSVibeSequence vibeSequence;
    MFSSoundSequence soundSequence;
} MFSPlutoSequenceSettings;

typedef NS_ENUM(NSUInteger, MFSSwimmingLapCountingLicenseStatus)
{
    MFSSwimmingLapCountingLicenseNotReady = 0,
    MFSSwimmingLapCountingLicenseReady = 1,
};

typedef NS_ENUM(NSUInteger, MFSSwimmingLapCountingLapCountingMode)
{
    MFSSwimmingLapCountingLapCountingModeManual = 0,
    MFSSwimmingLapCountingLapCountingModeTimeout = 1,
};

#endif /* MFSConstant_Pluto_h */
