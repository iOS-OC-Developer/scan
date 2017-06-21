//
//  UIView+Frame.m
//  ZDSApp
//
//  Created by lei on 16/8/29.
//  Copyright © 2016年 lei. All rights reserved.
//

#import "UIView+Frame.h"

@implementation UIView (Frame)

/**
 设置新的Origin.x
 @param   x  新设置的值

 */
- (void)setX:(CGFloat)x
{
    CGRect frame = self.frame;
    frame.origin.x = x;
    self.frame = frame;
}

/**
   返回一个Origin.x
 */
- (CGFloat)x
{
    return self.frame.origin.x;
}

/**
   设置新的Origin.Y
 */
- (void)setY:(CGFloat)y
{
    CGRect frame = self.frame;
    frame.origin.y = y;
    self.frame = frame;
}

/**
   返回一个Origin.y
 */
- (CGFloat)y
{
    return self.frame.origin.y;
}

/**
   设置新的Origin
 */
- (void)setOrigin:(CGPoint)origin
{
    CGRect frame = self.frame;
    frame.origin = origin;
    self.frame = frame;
}

/**
    返回一个Origin
 */
- (CGPoint)origin
{
    return self.frame.origin;
}

/**
   设置新的Size.Width
 */
- (void)setWidth:(CGFloat)width
{
    CGRect frame = self.frame;
    frame.size.width = width;
    self.frame = frame;
}

/**
   返回一个Size.Width
 */
- (CGFloat)width
{
    return self.frame.size.width;
}

/**
   设置新的Size.Height
 */
- (void)setHeight:(CGFloat)height
{
    CGRect frame = self.frame;
    frame.size.height = height;
    self.frame = frame;
}

/**
   返回一个Size.Height
 */
- (CGFloat)height
{
    return self.frame.size.height;
}

/**
   设置新的Size
 */
- (void)setSize:(CGSize)size
{
    CGRect frame = self.frame;
    frame.size = size;
    self.frame = frame;
}

/**
  返回一个Size
 */
- (CGSize)size
{
    return self.frame.size;
}

@end
