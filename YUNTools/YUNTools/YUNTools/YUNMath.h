//
//  YUNMath.h
//  YUNTools
//
//  Created by Orange on 4/22/16.
//  Copyright © 2016 Tordian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@interface YUNMath : NSObject

+ (CGPoint)ceilForPoint:(CGPoint)value;
+ (CGSize)ceilForSize:(CGSize)value;
+ (CGPoint)floorForPoint:(CGPoint)value;
+ (CGSize)floorForSize:(CGSize)value;
+ (NSUInteger)hashWithCGFloat:(CGFloat)value;
+ (NSUInteger)hashWithCString:(const char *)value;
+ (NSUInteger)hashWithDouble:(double)value;
+ (NSUInteger)hashWithFloat:(float)value;
+ (NSUInteger)hashWithInteger:(NSUInteger)value;
+ (NSUInteger)hashWithInteger:(NSUInteger)value1 andInteger:(NSUInteger)value2;
+ (NSUInteger)hashWithIntegerArray:(NSUInteger *)values count:(NSUInteger)count;
+ (NSUInteger)hashWithLong:(unsigned long long)value;
+ (NSUInteger)hashWithPointer:(const void *)value;

@end
