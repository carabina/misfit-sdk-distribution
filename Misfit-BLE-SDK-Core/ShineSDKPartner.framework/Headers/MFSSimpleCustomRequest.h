//
//  MFSSimpleCustomRequest.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Uy Nguyen Long on 3/22/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSCustomRequest.h"

@interface MFSSimpleCustomRequest : MFSCustomRequest

@property (nonatomic, readonly) MFSResponse *response;

@end
