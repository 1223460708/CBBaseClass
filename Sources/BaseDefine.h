//
//  BaseDefine.h
//  Kangyx
//
//  Created by 王乐乐 on 16/9/12.
//  Copyright © 2016年 Wanglele. All rights reserved.
//

#ifndef BaseDefine_h
#define BaseDefine_h


#ifdef DEBUG
#define WLog(format, ...)  NSLog(format, ## __VA_ARGS__)
#else
#define WLog(format, ...)
#endif
#define WLogFunc  WLog(@"%s,%d",__func__,__LINE__);

/** 获取字典的key对应的String value */
#define WLStringValue(x) x == nil?@"":x

/** 获取用户模型 */
#define SHUserModel       [UserManager sharedUserManager].userinfo
/** 检查输入框为数字（小数也可以） */
#define SHTFCheck [NSPredicate predicateWithFormat:@"SELF MATCHES %@",@"^\\-?([1-9]\\d*|0)(\\.\\d{1,2})?$"]
/** 检查输入框为6位数字（交易密码） */
#define SHTradeTFCheck [NSPredicate predicateWithFormat:@"SELF MATCHES %@",@"^\\d{6}$"]

/** 设置弱引用 */
#define WLGetWeakSelf(toName,instance)   __weak typeof(&*instance)toName = instance
/** 设置强引用 */
#define WLGetStrongSelf(toName,instance)   __strong typeof(&*instance)toName = instance

/** 导航条的高度 */
#define WLNavHeight       64.0f
/** 选项卡的高度 */
#define WLTabBarHeight       49.0f

/** 屏幕的宽高 */
#define WLSCREENW         [UIScreen mainScreen].bounds.size.width
#define WLSCREENH         [UIScreen mainScreen].bounds.size.height

/** 比例 */
#define WLRateFor6                          WLSCREENW/375.0

/** 屏幕的宽高的比例 */
#define WLKeyBoardWidthScale                      WLSCREENW/375.0 *0.5
#define WLKeyBoardHeightScale                     WLSCREENH/667.0 *0.5


/** 获取系统版本 */
#define IOS_VERSION                                   [[[UIDevice currentDevice] systemVersion] floatValue]

/** 当前应用的版本号 */
#define WLCurrentAppVersion                             [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

/** 主要单例 */
#define NotificationCenter                          [NSNotificationCenter defaultCenter]
#define SharedApplication                            [UIApplication sharedApplication]
#define Bundle                                      [NSBundle mainBundle]
#define MainScreen                                  [UIScreen mainScreen]

#define WLAPPIsActive    SharedApplication.applicationState == UIApplicationStateActive

/** 定义UIImage对象 */
#define ImageNamed(fileName) [UIImage imageNamed:fileName]

/** URLStr */
#define URLWithStr(URLStr)   [NSURL URLWithString:URLStr]

/** 字体大小 */
#define Font(f) [UIFont systemFontOfSize:f]
#define BoldFont(bf) [UIFont boldSystemFontOfSize:bf]
//----------------------颜色类---------------------------
/** rgb颜色转换（16进制->10进制 */
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
/** rgb颜色转换 */
#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
/** rgba颜色转换 */
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]

/** 判断5 6 6p */
#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)

#endif /* BaseDefine_h */



