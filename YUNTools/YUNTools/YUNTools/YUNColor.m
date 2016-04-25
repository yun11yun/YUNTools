//
//  YUNColor.m
//  ColorCun
//
//  Created by Orange on 4/22/16.
//  Copyright © 2016 Tordian. All rights reserved.
//

#import "YUNColor.h"

static const CGFloat kYUNRGBMax = 255.0;

UIColor *YUNColorWithRGBA(uint8_t r, uint8_t g, uint8_t b, CGFloat a)
{
    return [UIColor colorWithRed:(r / kYUNRGBMax) green:(g / kYUNRGBMax) blue:(b / kYUNRGBMax) alpha:a];
}

UIColor *YUNColorWithRGB(uint8_t r, uint8_t g, uint8_t b)
{
    return YUNColorWithRGBA(r, g, b, 1.0);
}

UIColor *YUNBlackColor()
{
    return [UIColor blackColor];
}

UIColor *YUNDarkGrayColor()
{
    return [UIColor darkGrayColor];
}

UIColor *YUNLightGrayColor()
{
    return [UIColor lightGrayColor];
}

UIColor *YUNWhiteColor()
{
    return [UIColor whiteColor];
}

UIColor *YUNGrayColor()
{
    return [UIColor grayColor];
}

UIColor *YUNRedColor()
{
    return [UIColor redColor];
}

UIColor *YUNGreenColor()
{
    return [UIColor greenColor];
}

UIColor *YUNBlueColor()
{
    return [UIColor blueColor];
}

UIColor *YUNOrangeColor()
{
    return [UIColor orangeColor];
}

UIColor *YUNPurpleColor()
{
    return [UIColor purpleColor];
}

UIColor *YUNClearColor()
{
    return [UIColor clearColor];
}
