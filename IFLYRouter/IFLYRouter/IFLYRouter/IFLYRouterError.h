//
//  IFLYRouterError.h
//  IFLYRouter
//
//  Created by admin on 2018/10/25.
//  Copyright © 2018年 admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface IFLYRouterError : NSObject


+(id)sharedInstance;
-(UIViewController *)getErrorController;

@end

NS_ASSUME_NONNULL_END
