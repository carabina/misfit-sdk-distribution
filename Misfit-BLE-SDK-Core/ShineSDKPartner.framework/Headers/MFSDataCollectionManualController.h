//
//  MFSManualDataCollectionLogPusher.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/10/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import "MFSDataCollectionController.h"

@protocol MFSDataCollectionLogManualPusherDelegate <NSObject>

- (void)onSessionStored:(NSString *)sessionName;
- (void)onSessionUploaded:(NSString *)sessionName
                sessionId:(NSString*)sessiongId;

@end

@interface MFSDataCollectionManualController : MFSDataCollectionController

- (instancetype)initWithDelegate:(id<MFSDataCollectionLogManualPusherDelegate>)delegate;

- (NSArray *)storedSessionFiles;

- (void)pushSession:(NSString *)sessionName;

@end
