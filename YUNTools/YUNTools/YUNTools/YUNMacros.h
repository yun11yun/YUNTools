//
//  YUNMacros.h
//  YUNTools
//
//  Created by Orange on 4/22/16.
//  Copyright © 2016 Tordian. All rights reserved.
//

#import <Foundation/Foundation.h>

#define YUN_NO_DESIGNATED_INITIALIZER() \
@throw [NSException exceptionWithName:NSInvalidArgumentException \
reason:[NSString stringWithFormat:@"unrecognized selector sent to instance %p", self] \
userInfo:nil]

#define YUN_NOT_DESIGNATED_INITIALIZER(DESIGNATED_INITIALIZER) \
@throw [NSException exceptionWithName:NSInvalidArgumentException \
reason:[NSString stringWithFormat:@"Please use the designated initializer [%p %@]", \
self, \
NSStringFromSelector(@selector(DESIGNATED_INITIALIZER))] \
userInfo:nil]

