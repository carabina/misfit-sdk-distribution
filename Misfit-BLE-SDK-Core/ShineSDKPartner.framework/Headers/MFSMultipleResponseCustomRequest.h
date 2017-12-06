//
//  MFSMultipleResponseCustomRequest.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Uy Nguyen Long on 3/24/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import "MFSRequest.h"
#import "MFSCustomRequest.h"

@interface MFSMultipleResponseCustomRequest : MFSCustomRequest

@property (nonatomic, readonly) NSMutableArray <MFSResponse *> *responses;

- (instancetype)initWithRequestData:(NSData *)rawRequestData
                        requestName:(NSString *)requestName
                            timeout:(NSTimeInterval)timeout
                     characteristic:(MFSCharacteristicId)characteristic;

@end
