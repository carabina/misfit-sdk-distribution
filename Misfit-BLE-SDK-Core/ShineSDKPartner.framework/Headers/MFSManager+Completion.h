//
//  Test.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Uy Nguyen Long on 11/28/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import "MFSDevice.h"
/*!
 *  @description Invoked when discover a Shine device.
 *
 *  @param shine    the device discovered.
 *  @param rssi     signal's strength.
 */
typedef void (^MFSScanCallback)(MFSDevice *shine, NSInteger rssi, NSDictionary *advertisementData);

/*!
 *  @description Invoked when a connection attempt succeeds or fails.
 *
 *  @param shine    the device in question.
 *  @param error    cause of the failure. NIL if the opereration succeeded.
 */
typedef void (^MFSConnectionCompletion)(MFSDevice *shine, NSError *error);
