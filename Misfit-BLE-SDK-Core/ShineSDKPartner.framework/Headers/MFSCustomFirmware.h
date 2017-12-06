//
//  MFSCustomFirmware.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/23/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import "MFSFirmware.h"

@interface MFSCustomFirmware : MFSFirmware

- (instancetype)initWithVersion:(NSString *)firmwareVersion
                    deviceModel:(NSString *)deviceModel
                   firmwareData:(NSData *)firmwareData;

@end
