//
//  NSTimer+YUNControl.h
//  YUNTools
//
//  Created by Orange on 4/26/16.
//  Copyright © 2016 Tordian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (YUNControl)

/**
 *  暂停计时器
 */
- (void)pauseTimer;

/**
 *  重启计时器
 */
- (void)resumeTimer;

/**
 *  在interval秒后重启计时器
 *
 *  @param interval 重启计时器的时间
 */
- (void)resumeTimerAfterTimeInterval:(NSTimeInterval)interval;

@end
