//
//  YUNBase64.h
//  YUNTools
//
//  Created by Orange on 4/22/16.
//  Copyright © 2016 Tordian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YUNBase64 : NSObject

/**
 *  @abstract Decodes a base-64 encoded string.
 *
 *  @param string The base-64 encoded string.
 *
 *  @return NSData containing the decoded bytes.
 */
+ (NSData *)decodeAsData:(NSString *)string;

/**
 *  @abstract Decodes a base-64 encoded string into a string.
 *
 *  @param string The base-64 encoded string.
 *
 *  @return NSString with the decoded UTF-8 value.
 */
+ (NSString *)decodeAsString:(NSString *)string;

/**
 *  @abstract Encodes data into a string.
 *
 *  @param data The data to be encoded.
 *
 *  @return The base-64 encoded string.
 */
+ (NSString *)encodeData:(NSData *)data;

/**
 *  @abstract Encodes string into a base-64 representation.
 *
 *  @param string The string to be encoded.
 *
 *  @return The base-64 encoded string.
 */
+ (NSString *)encodeString:(NSString *)string;

@end
