//
//  ScanQRViewController.h
//  ZDSApp
//
//  Created by lei on 16/8/29.
//  Copyright © 2016年 lei. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef void(^successBlock)(NSString *QRCodeInfo);
@interface ScanQRViewController : UIViewController

@property (strong, nonatomic) successBlock block;

/**
 *是否需要将扫码得到的信息进行回传并展示 Default is NO
 */
@property (assign, nonatomic) BOOL showQRCodeInfo;
//区分不同界面跳转进来得到扫面结果
@property(nonatomic,strong)NSString *qcodeString;


/**
 *将扫码成功后获得的 二维码/条形码 信息进行回传
 */
- (void)successfulGetQRCodeInfo:(successBlock)success;
@end
