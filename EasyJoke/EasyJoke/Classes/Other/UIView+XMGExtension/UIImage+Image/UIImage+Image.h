//
//  UIImage+Image.h
//  
//
//  Created by SMART on 15/7/6.
//  Copyright (c) 2015年 SMART. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Image)


// 根据颜色生成一张尺寸为1*1的相同颜色图片
+ (UIImage *)imageWithColor:(UIColor *)color;


@end
