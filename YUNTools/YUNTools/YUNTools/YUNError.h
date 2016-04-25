//
//  YUNError.h
//  YUNTools
//
//  Created by Orange on 4/22/16.
//  Copyright © 2016 Tordian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YUNError : NSObject

+ (NSString *)errorDomain;

+ (BOOL)errorIsNetworkError:(NSError *)error;

@end
