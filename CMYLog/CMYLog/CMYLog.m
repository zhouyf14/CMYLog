//
//  CMYLog.m
//  CMYLog
//
//  Created by zyF on 2020/5/15.
//

#import <Foundation/Foundation.h>
#import "CMYLog.h"

@implementation CMYLogger

+ (void)log {
    NSLog(@"%d*************",__LINE__);
}

+ (void)logNum:(NSInteger*) num{
    NSInteger* sum= num ;
//    sum= sum*100;
    //    NSLog(@"%ld",sum);
    NSLog(@"i=%d",(int)sum);
}
@end
