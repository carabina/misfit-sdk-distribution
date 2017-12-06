//
//  MFSMSLError.h
//  MSLFramework
//
//  Created by Hien Nguyen on 8/4/16.
//  Copyright © 2016 Misfit Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, MSLErrorCode)
{
    MSLErrorUnexpectedEOF = 1,
    MSLErrorUnknownFileFormat,
    MSLErrorUnknownSpecialEntry,
    MSLErrorInvalidDuration,
    MSLErrorInvalidSecondOffset,
    MSLErrorInvalidAbsFileNumber,
    MSLErrorInvalidHWIndicator,
    MSLErrorUnknownSpecialEntryLength,
    MSLErrorEmptyFile,
    MSLErrorUnknowError
};

@interface MSLError : NSError

- (instancetype)initWithCode:(MSLErrorCode)code;
- (instancetype)initWithCode:(MSLErrorCode)code description:(NSString *)description;

- (instancetype)initWithCode:(MSLErrorCode)code description:(NSString *)description
                   extraInfo:(NSDictionary *)extraInfo;

@end
