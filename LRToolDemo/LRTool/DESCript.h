//
//  DESCript.h
//  KCKP
//
//  Created by zzy on 15/10/16.
//  Copyright (c) 2015年 zzy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCryptor.h>

@interface DESCript : NSObject

/**
 加密/解密

 @param sText 加密内容
 @param encryptOperation 加密kCCEncrypt/解密kCCDecrypt
 @param key 密匙
 @return 加密后的字符串
 */
+ (NSString *)encrypt:(NSString *)sText encryptOrDecrypt:(CCOperation)encryptOperation key:(NSString *)key;

@end
