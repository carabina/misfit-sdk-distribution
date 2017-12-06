//
//  MFSKeyValueDescriptionProtocol.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/19/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MFSKeyValueDescriptionProtocol <NSObject>
@property (nonatomic, readonly, copy) NSDictionary *keyValueDescription;
@end
