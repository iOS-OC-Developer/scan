//
//  SystemFunctions.h
//  ZDSApp
//
//  Created by lei on 16/8/29.
//  Copyright © 2016年 lei. All rights reserved.
//  系统功能

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface SystemFunctions : NSObject

/**
 *是否开启系统照明灯
 *@param   opened   是否打开

 */
+ (void)openLight:(BOOL)opened;

/**
 *是否开启系统震动和声音
 *@param   shaked   是否开启震动
 *@param   sounding   是否开启声音

 */
+ (void)openShake:(BOOL)shaked Sound:(BOOL)sounding;



@end
