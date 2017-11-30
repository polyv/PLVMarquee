//
//  PLVMarquee.h
//  PolyvVodSDK
//
//  Created by BqLin on 2017/11/1.
//  Copyright © 2017年 POLYV. All rights reserved.
//
// 跑马灯模型
// 随机因素：
// - 出现位置
// - 出现间隔

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, PLVVodMarqueeType) {
	/// 闪现
	PLVVodMarqueeTypeFade,
	/// 滚动
	PLVVodMarqueeTypeRoll,
	/// 滚动+闪现
	PLVVodMarqueeTypeRollFade
};

@interface PLVMarquee : NSObject

/// 跑马灯类型
@property (nonatomic, assign) PLVVodMarqueeType type;

/// 显示时长，不包含动画时长
@property (nonatomic, assign) NSTimeInterval displayDuration;

/// 呈现动画时长
@property (nonatomic, assign) NSTimeInterval fadeDuration;

/// 闪现最大间隔
@property (nonatomic, assign) NSTimeInterval maxFadeInterval;

/// 滚动最大间隔
@property (nonatomic, assign) NSTimeInterval maxRollInterval;

/// 内容
@property (nonatomic, copy) NSString *content;

/// 颜色
@property (nonatomic, strong) UIColor *color;

/// 透明度
@property (nonatomic, assign) CGFloat alpha;

/// 字体
@property (nonatomic, strong) UIFont *font;

@end
