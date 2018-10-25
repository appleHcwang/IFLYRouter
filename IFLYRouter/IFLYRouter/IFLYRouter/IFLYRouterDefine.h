//
//  IFLYRouterDefine.h
//  IFLYRouter
//
//  Created by admin on 2018/10/25.
//  Copyright © 2018年 admin. All rights reserved.
//

#ifndef IFLYRouterDefine_h
#define IFLYRouterDefine_h
#define SuppressPerformSelectorLeakWarning(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
Stuff; \
_Pragma("clang diagnostic pop") \
} while (0)
#endif /* IFLYRouterDefine_h */
