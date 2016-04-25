//
//  YUNTypeUtility.h
//  YUNTools
//
//  Created by Orange on 4/22/16.
//  Copyright © 2016 Tordian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YUNTypeUtility : NSObject

+ (NSArray *)arrayValue:(id)object;
+ (BOOL)boolValue:(id)object;
+ (NSDictionary *)dictionaryValue:(id)object;
+ (NSInteger)integerValue:(id)object;
+ (id)objectValue:(id)object;
+ (NSString *)stringValue:(id)object;
+ (NSUInteger)unsignedIntegerValue:(id)object;
+ (NSURL *)URLValue:(id)object;

@end
