//
//  ScanResultViewController.h
//  LBXScanDemo
//
//  Created by lbxia on 15/11/17.
//  Copyright © 2015年 lbxia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JJBaseViewController.h"

@interface ScanResultViewController : JJBaseViewController

@property (nonatomic, strong) UIImage* imgScan;
@property (nonatomic, copy) NSString* strScan;

@property (nonatomic,copy)NSString *strCodeType;

@end
