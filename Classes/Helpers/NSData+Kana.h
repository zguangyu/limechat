// LimeChat is copyrighted free software by Satoshi Nakagawa <psychs AT limechat DOT net>.
// You can redistribute it and/or modify it under the terms of the GPL version 2 (see the file GPL.txt).

#import <Foundation/Foundation.h>


@interface NSData (Kana)

- (NSData*)convertKanaFromISO2022ToNative;
- (NSData*)convertKanaFromNativeToISO2022;

@end
