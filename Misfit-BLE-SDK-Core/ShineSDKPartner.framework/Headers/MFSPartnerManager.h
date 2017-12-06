//
//  MFSPartnerManager.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Uy Nguyen Long on 11/27/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import "MFSManager+Completion.h"
#import "MFSDevice.h"

@interface MFSPartnerManager : NSObject

/*!
 *  @method defaultManager
 *
 *  @description Get an instance of MFSPartnerManager.
 *
 *  @return default instance of MFSPartnerManager.
 */
+ (MFSPartnerManager *)defaultManager:(NSString *)key;

/*!
 *  @property state
 *
 *  @description Bluetooth state
 *
 *  @see MFSBluetoothState
 */
@property (nonatomic, readonly) MFSBluetoothState state;

/*!
 *  @method isReady
 *
 *  @description Whether the bluetooth is ready (turned on and ready to use).
 *
 *  @return YES if it is ready, otherwise returns NO.
 */
- (BOOL)isReady;

/*!
 *  @method isBTLESupportedOnCurrentDevice
 *
 *  @description Whether current device support bluetooth.
 *
 *  @return YES if BLE is supported, otherwise returns NO.
 */
- (BOOL)isBTLESupportedOnCurrentDevice;

/*!
 *  @method startScanningWithCallback:callback:
 *
 *  @description Start looking for Shine nearby.
 *
 *  @param callback Will be invoked for each Shine discovered.
 *
 *  @seealso MFSScanCallback
 */
- (BOOL)startScanningWithCallback:(MFSScanCallback)callback;

/*!
 *  @method stopScanning
 *
 *  @description Stop scanning for Shine.
 */
- (void)stopScanning;

/*!
 *  @method connectShine:completion:
 *
 *  @description Establishes a connection to Shine.
 *
 *  @param shine        the Shine to be connected.
 *  @param completion   completionBlock to be invoked once the operation end.
 *
 *  @see MFSConnectionCompletion
 */
- (void)connectShine:(MFSDevice *)shine completion:(MFSConnectionCompletion)completion;

/*!
 *  @method disconnectShine:completion:
 *
 *  @description Disconnect current connection or cancel pending connection attempt.
 *
 *  @param shine    the device to be disconnected.
 *  @param completion    completionBlock to be invoked once the operation end.
 *
 *  @see MFSConnectionCompletion
 */
- (void)disconnectShine:(MFSDevice *)shine completion:(MFSConnectionCompletion)completion;

/*!
 *  @method retrieveConnectedDevices
 *
 *  @description Retrieve list of currently connected Shines. Serial number of returned MFSDevice objects might be NIL.
 *               It will be available when the device has finished the preparing step (MFSDevice prepareWithCompletion:).
 *
 *  @return list of currently connected Shines.
 */
- (NSArray<MFSDevice *> *)retrieveConnectedDevices;

/*!
 *  @method retrieveDeviceWithSerialNumber:
 *
 *  @description Retrieve a previously discovered Shine, regardless of connection state.
 *
 *  @return the device retrieved if it's still in cache. Otherwise, nil is returned.
 */
- (MFSDevice *)retrieveDeviceWithSerialNumber:(NSString *)serialNumber;

@end
