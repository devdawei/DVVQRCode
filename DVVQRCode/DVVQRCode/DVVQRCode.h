//
//  DVVQRCode.h
//  DVVQRCode <https://github.com/devdawei/DVVQRCode.git>
//
//  Created by 大威 on 2016/10/31.
//  Copyright © 2016年 devdawei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DVVQRCode : NSObject

/**
 根据传入的字符串生成一个二维码图片

 @param text 字符串类型
 @param size 图片的大小
 
 @return 生成的二维码图片
 */
+ (UIImage *)qrCodeImageWithText:(NSString *)text
                            size:(CGFloat)size;

@end
