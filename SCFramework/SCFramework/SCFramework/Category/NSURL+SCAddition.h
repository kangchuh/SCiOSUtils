//
//  NSURL+SCAddition.h
//  ZhongTouBang
//
//  Created by Angzn on 6/11/14.
//  Copyright (c) 2014 Richer VC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (SCAddition)

/**
 *  URL连接参数
 */
- (NSURL *)serializeParams:(NSDictionary *)params;

@end
