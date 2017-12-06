//
//  MFSSwimmingLapCountingLicense.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Uy Nguyen Long on 4/3/17.
//  Copyright © 2017 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSSwimmingLapCountingLicense : NSObject

/*!
 *  @brief License status
 */
@property (nonatomic, assign) MFSSwimmingLapCountingLicenseStatus licenseStatus;
/*!
 *  @brief Trial counter value
 */
@property (nonatomic, assign) uint8_t trialCounter;
/*!
 *  @brief Swimming lap counting mode
 */
@property (nonatomic, assign) MFSSwimmingLapCountingLapCountingMode lapCountingMode;
/*!
 *  @brief Timeout value if in Timeout mode. (00 for Manual mode)
 */
@property (nonatomic, assign) uint8_t timeoutValue;
/*!
 *  @brief Max trial counter value
 */
@property (nonatomic, assign) uint8_t maxTrialCounter;

@end
