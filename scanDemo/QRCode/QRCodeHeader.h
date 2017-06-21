//
//  QRCodeHeader.h
//  ZDSApp
//
//  Created by lei on 16/8/29.
//  Copyright © 2016年 lei. All rights reserved.
//

#ifndef QRCodeHeader_h
#define QRCodeHeader_h
#import "UIFont+MyFont.h"
#import "UIView+Frame.h"
#import "SystemFunctions.h"

#define kBgImgX             45*ratio
#define kBgImgY             (20+60)*ratio
#define kBgImgWidth         230*ratio

#define kScrollLineHeight   20*ratio

#define kTipY               (kBgImgY+kBgImgWidth+kTipHeight)
#define kTipHeight          40*ratio

#define kLampX              ([[UIScreen mainScreen] bounds].size.width-kLampWidth)/2
#define kLampY              ([[UIScreen mainScreen] bounds].size.height-kLampWidth-70*ratio)
#define kLampWidth          50*ratio

#define kBgAlpha            0.6

static NSString *bgImg_img = @"image.bundle/scanBackground";
static NSString *Line_img = @"image.bundle/scanLine";
static NSString *turn_on = @"image.bundle/turn_on";
static NSString *turn_off = @"image.bundle/turn_off";
static NSString *ringPath = @"image.bundle/ring";
static NSString *ringType = @"wav";

#endif /* QRCodeHeader_h */