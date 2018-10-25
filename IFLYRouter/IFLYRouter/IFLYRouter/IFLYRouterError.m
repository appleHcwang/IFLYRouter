//
//  IFLYRouterError.m
//  IFLYRouter
//
//  Created by admin on 2018/10/25.
//  Copyright © 2018年 admin. All rights reserved.
//

#import "IFLYRouterError.h"
#import "IFLYRouterManagement.h"
@implementation IFLYRouterError
+(id)sharedInstance
{
    static dispatch_once_t onceToken;
    static IFLYRouterError * routerError;
    dispatch_once(&onceToken,^{
        routerError = [[IFLYRouterError alloc] init];
    });
    return routerError;
}

#pragma mark  自定义错误页面 此页面一定确保能够找到，否则会进入死循环
-(UIViewController *)getErrorController{
    NSDictionary *diction = [[NSMutableDictionary alloc] init];
    UIViewController *errorController = [[IFLYRouterManagement sharedInstance] getViewController:@"VC3" withParam:diction];
    return errorController;
}
@end
