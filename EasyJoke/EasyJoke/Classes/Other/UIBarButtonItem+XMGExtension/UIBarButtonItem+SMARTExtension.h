//
//  UIBarButtonItem+SMARTExtension.h
//  3期-百思不得姐
//
//  Created by xiaomage on 15/9/1.
//  Copyright (c) 2015年 SMART. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (SMARTExtension)
+ (instancetype)itemWithImage:(NSString *)image highImage:(NSString *)highImage target:(id)target action:(SEL)action;
+ (UIButton*)barButtonWithImage:(NSString *)image highImage:(NSString *)highImage target:(id)target action:(SEL)action;
@end
