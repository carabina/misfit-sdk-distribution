//
//  MFSProfileShine.h
//  MSLFramework
//
//  Created by Hien Nguyen on 1/16/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum
{
    MFSGenderMale,
    MFSGenderFemale
} MFSGender;

@interface MFSProfileShine : NSObject
@property (nonatomic, readonly) NSUInteger age;
@property (nonatomic, readonly) CGFloat heightInMeter;
@property (nonatomic, readonly) CGFloat weightInKg;
@property (nonatomic, readonly) MFSGender gender;

- (instancetype)initWithAge:(NSUInteger)age
              heightInMeter:(CGFloat)heightInMeter
                 weightInKg:(CGFloat)weightInKg
                     gender:(MFSGender)gender;

- (NSDictionary *)keyValueDescription;

@end
