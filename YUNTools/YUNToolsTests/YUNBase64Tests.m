//
//  YUNBase64Tests.m
//  YUNTools
//
//  Created by Orange on 4/22/16.
//  Copyright © 2016 Tordian. All rights reserved.
//

#import <XCTest/XCTest.h>

#import <Foundation/Foundation.h>
#import "YUNBase64.h"

@interface YUNBase64 (YUNBase64Tests)

- (instancetype)initWithOptionsEnabled:(BOOL)optionsEnabled;
- (NSData *)decodeAsData:(NSString *)string;
- (NSString *)decodeAsString:(NSString *)string;
- (NSString *)encodeData:(NSData *)data;
- (NSString *)encodeString:(NSString *)string;

@end

@interface YUNBase64Tests : XCTestCase

@end

@implementation YUNBase64Tests

- (void)runBackwardCompatibilityWithBlock:(void(^)(YUNBase64 *base64))block
{
    block([[YUNBase64 alloc] initWithOptionsEnabled:YES]);
    block([[YUNBase64 alloc] initWithOptionsEnabled:NO]);
}

- (void)runTests:(NSDictionary *)tests
{
    [self runBackwardCompatibilityWithBlock:^(YUNBase64 *base64) {
        [tests enumerateKeysAndObjectsUsingBlock:^(NSString *plainString, NSString *base64String, BOOL *stop) {
            XCTAssertEqualObjects([base64 encodeString:plainString], base64String);
            XCTAssertEqualObjects([base64 decodeAsString:base64String], plainString);
        }];
    }];
}

- (void)testRFC4648TestVectors
{
    [self runTests:@{
                     @"": @"",
                     @"f": @"Zg==",
                     @"fo": @"Zm8=",
                     @"foo": @"Zm9v",
                     @"foob": @"Zm9vYg==",
                     @"fooba": @"Zm9vYmE=",
                     @"foobar": @"Zm9vYmFy",
                     }];

}

- (void)testDecodeVariations
{
    [self runBackwardCompatibilityWithBlock:^(YUNBase64 *base64) {
        XCTAssertEqualObjects([base64 decodeAsString:@"aGVsbG8gd29ybGQh"], @"hello world!");
        XCTAssertEqualObjects([base64 decodeAsString:@"a  GVs\tb\r\nG8gd2\n9y\rbGQ h"], @"hello world!");
        XCTAssertEqualObjects([base64 decodeAsString:@"aGVsbG8gd29ybGQh"], @"hello world!");
        XCTAssertEqualObjects([base64 decodeAsString:@"aGVs#bG8*gd^29yb$GQh"], @"hello world!");
    }];
}

- (void)testEncodeDecode
{
    [self runTests:@{
                     @"Hello World": @"SGVsbG8gV29ybGQ=",
                     @"ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!%^&*(){}[]": @"QUJDREVGR0hJSktMTU5PUFFSU1RVVldYWVoxMjM0NTY3ODkwISVeJiooKXt9W10=",
                     @"\n\t Line with control characters\r\n": @"CgkgTGluZSB3aXRoIGNvbnRyb2wgY2hhcmFjdGVycw0K",
                     }];
}

@end
