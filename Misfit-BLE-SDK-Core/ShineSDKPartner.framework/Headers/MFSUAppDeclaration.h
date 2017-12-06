//
//  MFSDeclaration.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/10/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSKeyValueDescriptionProtocol.h"
#import "MFSUAppCustomization.h"

@interface MFSUAppDeclaration : NSObject <MFSKeyValueDescriptionProtocol>

@property (nonatomic, readonly) MFSUAppId uAppId;
@property (nonatomic, readonly) MFSUAppVariantId variant;
@property (nonatomic, readonly) uint8_t uAppVersion;
@property (nonatomic, readonly) uint8_t minorVersion;
@property (nonatomic, readonly) uint8_t majorVersion;
@property (nonatomic, readonly) uint8_t runtime;
@property (nonatomic, readonly) uint8_t variationNumber;
@property (nonatomic, readonly) uint16_t declarationFileId;

@property (nonatomic) MFSUAppCustomization *customization;

- (instancetype)initWithData:(NSData *)data;

- (instancetype)initWithData:(NSData *)data
             variationNumber:(uint8_t)variationNumber;

@end
