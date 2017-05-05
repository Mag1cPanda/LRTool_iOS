//
//  UIImage+Extension.h
//  JYJ微博
//
//  Created by JYJ on 15/3/11.
//  Copyright (c) 2015年 JYJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Extension)


/**
 用颜色返回一张图片

 @param color 颜色
 @return 根据颜色生成的图片
 */
+ (UIImage *)createImageWithColor:(UIColor*) color;

@end
