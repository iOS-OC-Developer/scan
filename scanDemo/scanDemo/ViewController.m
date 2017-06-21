//
//  ViewController.m
//  scanDemo
//
//  Created by lei on 2017/6/21.
//  Copyright © 2017年 lei. All rights reserved.
//

#import "ViewController.h"
#import "ScanQRViewController.h"
#import "CreateQRCode.h"
@interface ViewController ()


@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    
    UIButton *btn1 = [ViewController initWithFrame:CGRectMake(100, 100, 100, 30) Title:@"扫描二维码" color:[UIColor redColor]];
    [btn1 addTarget:self action:@selector(saoyisao) forControlEvents:UIControlEventTouchUpInside];
    UIButton *btn2 = [ViewController initWithFrame:CGRectMake(100, 200, 100, 30) Title:@"生成二维码" color:[UIColor redColor]];
    [btn2 addTarget:self action:@selector(sheng) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn1];
    [self.view addSubview:btn2];
    
}
-(void)saoyisao{
    ScanQRViewController *scan = [ScanQRViewController new];
    [scan successfulGetQRCodeInfo:^(NSString *QRCodeInfo) {
        //二维码信息
        NSLog(@"%@",QRCodeInfo);
    }];
    [self.navigationController pushViewController:scan animated:YES];
//    [self presentViewController:[[UINavigationController alloc]initWithRootViewController:[ViewController new]] animated:YES completion:nil];
}
-(void)sheng{
//     self.imgView.image= [CreateQRCode createQRCodeWithString:@"hello" ViewController:self];
}


+ (UIButton *)initWithFrame:(CGRect)frame
                      Title:(NSString *)title
                      color:(UIColor *)color

{
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = frame;
    [btn setTitleColor:color forState:UIControlStateNormal];
    [btn setTitle:title forState:UIControlStateNormal];
    return btn;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
