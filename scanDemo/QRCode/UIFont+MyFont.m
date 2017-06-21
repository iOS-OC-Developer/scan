//
//  UIFont+MyFont.m
//  ZDSApp
//
//  Created by lei on 16/8/29.
//  Copyright © 2016年 lei. All rights reserved.
//

#import "UIFont+MyFont.h"
#import "UIView+Frame.h"

@implementation UIFont (MyFont)

+ (UIFont *)FontWithSize:(CGFloat)size {
    CGFloat realSize = size * ratio;
    return [UIFont systemFontOfSize:realSize];
}

@end
