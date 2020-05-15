//
//  CMYLog.h
//  CMYLog
//
//  Created by zyF on 2020/5/15.
//  Copyright © 2020 jojo. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for CMYLog.
FOUNDATION_EXPORT double CMYLogVersionNumber;

//! Project version string for CMYLog.
FOUNDATION_EXPORT const unsigned char CMYLogVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CMYLog/PublicHeader.h>

@interface CMYLogger : NSObject

+ (void)log;

+ (void)logNum:(NSInteger *)num;

@end

