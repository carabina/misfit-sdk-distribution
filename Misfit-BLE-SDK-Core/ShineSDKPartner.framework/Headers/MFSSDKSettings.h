//
//  MFSSDKSettings.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Minh Nguyen on 7/4/14.
//  Copyright (c) 2014 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSDevice+Constants.h"
#import "MFSDataCollectionController.h"

/*!
 *  @class MFSSDKSettings
 *
 *  @description MFSSDKSettings is used to setup required information.
 */
@interface MFSSDKSettings : NSObject

/*!
 *  @method sharedSettings
 *
 *  @description Get an instance object of MFSSDKSettings.
 *
 *  @return shared instance of MFSSDKSettings.
 */
+ (MFSSDKSettings *)sharedSettings;

/*!
 *  @property userID
 *
 *  @description    An unique identifier represent a user in your system.
 *
 *                  It may not be longer than 30 characters and can only consist of alphanumberic
 *                  characters (A-Z, a-z, 0-9) and some special characters such as dot (.),
 *                  dash (-), underscore (_) and at (@).
 */
@property (nonatomic, copy) NSString *userID;

/*!
 *  A property define the LogLevels should print out. 
 *  If logLevel contains MFSLogLevelVerbose, the logSystems will print out all logLevels.
 */
@property (nonatomic) MFSLogLevel logLevel;

/*!
 *  A property define the data collection controller. Set MFSDataCollectionNoneController to disable data collection.
 */
@property (nonatomic) MFSDataCollectionController *dataCollectionController;

/*!
 *  A property define firmware module state. Default is NO.
 */
@property (nonatomic) BOOL enableFirmwareModule;

@end
