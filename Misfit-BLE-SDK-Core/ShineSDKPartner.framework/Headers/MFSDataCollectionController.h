//
//  MFSDataCollectionLogPusher.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 6/10/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSDataCollectionController : NSObject

/*!
 *  Data collection api endpoint.
 */
@property (nonatomic) NSString *endpoint;

/*!
 *  Data collection access key for endpoint.
 */
@property (nonatomic) NSString *accessKey;

- (BOOL)shouldSaveSession;

- (void)onSessionStored:(NSString *)sessionName
      shouldPushSession:(BOOL)shouldPushSession;

- (void)onSessionUploaded:(NSString *)sessionName
      responseDescription:(NSDictionary *)responseDescription
                    error:(NSError *)error;

@end
