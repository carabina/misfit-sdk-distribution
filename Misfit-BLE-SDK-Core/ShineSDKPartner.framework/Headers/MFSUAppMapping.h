//
//  MFSuAppMapping.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/8/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSUAppDeclaration.h"
#import "MFSKeyValueDescriptionProtocol.h"

typedef NS_ENUM(uint8_t, MFSUAppButtonEventId)
{
    MFSUAppButton1Press,
    MFSUAppButton2Press,
    MFSUAppButton3Press,
};

@interface MFSUAppMapping : NSObject <MFSKeyValueDescriptionProtocol>

@property (nonatomic, readonly) MFSUAppButtonEventId button;
@property (nonatomic, readonly) NSArray<MFSUAppDeclaration *> *declarations;

- (instancetype)initWithButton:(MFSUAppButtonEventId)button
                  declarations:(NSArray<MFSUAppDeclaration *>*)declarations;

@end
