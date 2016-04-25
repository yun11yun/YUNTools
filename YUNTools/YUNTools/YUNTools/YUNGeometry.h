//
//  YUNGeometry.h
//  YUNTools
//
//  Created by Orange on 4/22/16.
//  Copyright © 2016 Tordian. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  @abstract Insets a CGSize  with the insets in a UIEdgeInsets.
 */
UIKIT_STATIC_INLINE CGSize YUNEdgeInsetsInsetSize(CGSize size, UIEdgeInsets insets)
{
    CGRect rect = CGRectZero;
    rect.size = size;
    return UIEdgeInsetsInsetRect(rect, insets).size;
}

/**
 *  @abstract Outsets a CGSize with the insets in a UIEdgeInsets.
 */
UIKIT_STATIC_INLINE CGSize YUNEdgeInsetsOutsetSize(CGSize size, UIEdgeInsets insets)
{
    CGRect rect = CGRectZero;
    rect.size = size;
    return CGSizeMake(insets.left + size.width + insets.right,
                      insets.top + size.height + insets.bottom);
}

@interface YUNGeometry : NSObject

@end
