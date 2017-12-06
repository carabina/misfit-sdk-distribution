//
//  MFSDevice+MicroApp.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 5/30/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//
#import "MFSDevice.h"
#import "MFSUAppMapping.h"
#import "MFSUAppNotification.h"
#import "MFSInstruction.h"

@interface MFSDevice (MicroApp)

- (void)setUAppMapping:(NSArray<MFSUAppMapping *> *)mappings
       progressHandler:(MFSDataTransferProgressHandler)progressHandler
            completion:(MFSMicroAppDataTransferCompletion)completion;

- (void)sendInstructions:(NSOrderedSet<MFSInstruction *> *)instructions
      toUAppNotification:(MFSUAppNotification *)uappNotification
              completion:(MFSMicroAppDataTransferCompletion)completion;

@end
