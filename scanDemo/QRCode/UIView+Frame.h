//
//  UIView+Frame.h
//  ZDSApp
//
//  Created by lei on 16/8/29.
//  Copyright © 2016年 lei. All rights reserved.
//

#import <UIKit/UIKit.h>

//获取当前设备的尺寸
#define ScreenWidthes   [[UIScreen mainScreen] bounds].size.width
#define ScreenHeightes  [[UIScreen mainScreen] bounds].size.height
#define ScreenSize    [[UIScreen mainScreen] bounds].size

//以iphone5为基础 坐标都以iphone5为基准 进行代码的适配
#define ratio         [[UIScreen mainScreen] bounds].size.width/320.0

//设置图片
#define ImgName(imagename) [UIImage imageNamed:imagename]

@interface UIView (Frame)

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGPoint origin;
@property (nonatomic, assign) CGSize size;

@end
