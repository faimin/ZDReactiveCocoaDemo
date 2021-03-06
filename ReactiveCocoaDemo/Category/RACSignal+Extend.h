//
//  RACSignal+Extend.h
//  ReactiveCocoaDemo
//
//  Created by Zero.D.Saber on 16/8/2.
//  Copyright © 2016年 zd. All rights reserved.
//

#import <ReactiveObjC/ReactiveObjC.h>

@interface RACSignal (Extend)

/// 连接多个请求后把结果放在一起
- (RACSignal *)serialCollect:(NSArray<RACSignal *> *)signals;

/// 防止按钮被连续点击
- (RACSignal *)filterEventWithInterval:(NSTimeInterval)interval;

- (RACSignal *)shareWhileActive;

- (RACSignal *)continueInBackground;

@end
