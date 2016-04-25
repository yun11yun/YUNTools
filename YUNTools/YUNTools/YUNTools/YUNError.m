//
//  YUNError.m
//  YUNTools
//
//  Created by Orange on 4/22/16.
//  Copyright © 2016 Tordian. All rights reserved.
//

#import "YUNError.h"

@implementation YUNError

#pragma mark - Class Methods

+ (NSString *)errorDomain
{
    return nil;
}

+ (BOOL)errorIsNetworkError:(NSError *)error
{
    if (error == nil) {
        return NO;
    }
    
    NSError *innerError = error.userInfo[NSUnderlyingErrorKey];
    if ([self errorIsNetworkError:innerError]) {
        return YES;
    }
    
    switch (error.code) {
        case NSURLErrorTimedOut:
        case NSURLErrorCannotFindHost:
        case NSURLErrorCannotConnectToHost:
        case NSURLErrorNetworkConnectionLost:
        case NSURLErrorDNSLookupFailed:
        case NSURLErrorNotConnectedToInternet:
        case NSURLErrorInternationalRoamingOff:
        case NSURLErrorCallIsActive:
        case NSURLErrorDataNotAllowed:
            return YES;
        default:
            return NO;
    }
}

@end
