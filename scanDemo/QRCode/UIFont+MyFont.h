//
//  UIFont+MyFont.h
//  ZDSApp
//
//  Created by lei on 16/8/29.
//  Copyright © 2016年 lei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (MyFont)

/**
 *设置字体方法；根据不同手机型号，改变字体大小
 *@param   size   当前机型下字体大小
 *@return  适配的字体大小
 */
+ (UIFont *)FontWithSize:(CGFloat)size;

@end
