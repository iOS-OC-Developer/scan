//
//  CreateQRCode.h
//  ZDSApp
//
//  Created by lei on 16/8/29.
//  Copyright © 2016年 lei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CreateQRCode : NSObject

/**
 *根据传入的字符串来生成相应的二维码
 *@param   string     传入的字符串
 *@param   vc         调用方法时当前的Viewcontroller
 *@return  UIImage(二维码)
 */
+ (UIImage *)createQRCodeWithString:(NSString *)string ViewController:(UIViewController *)vc;


@end
