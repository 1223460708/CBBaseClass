//
//  YMFConstant.m
//  Yunmafu
//
//  Created by 王乐乐 on 2017/2/15.
//  Copyright © 2017年 wanglele. All rights reserved.
//

#import "YMFConstant.h"

@implementation YMFConstant

/** tokenKey */
NSString * const kYMFTokenKey = @"tokenKey";

/** AES加密Key */
NSString * const kYMFAESkey = @"kYMFAESkey";
/** 是否记住账户密码 */
NSString * const kYMFSaveNamePsw = @"kYMFSaveNamePsw";
/** 总资产隐藏显示 */
NSString * const kYMFWalletTextHideOrNo = @"kYMFWalletTextHideOrNo";

/** 云码付客服电话 */
NSString * const kYMFESQPhoneNumber = @"400-021-2955";

/** fmdb表单名称 user  */
NSString * const fmUser = @"user";
NSString * const shareDatabaseName = @"ymf";

/** 经度度 */
NSString * const latitude = @"latitude";
/** 纬度 */
NSString * const longitude = @"longitude";

/** 城市 */
NSString * const cbCityname = @"cbCityname";

/** 通用小字体 */
CGFloat const kMinFontSize                              = 12.0f;
/** 导航左右字体 */
CGFloat const kNavFontSize                              = 13.0f;
/** 输入框通用字体大小 */
CGFloat const kTFFontSize                              = 15.0f;
/** 输入框LeftView通用宽度 */
CGFloat const kTFLeftViewWidth                           = 103.0f;
/** 通用间距大小 */
CGFloat const kPaddingValue                              = 12.0f;
/** 输入框通用40高度 */
CGFloat const kTFHeight                                  = 40.0f;
/** 输入框通用50高度 */
CGFloat const kBTFHeight                                  = 50.f;
/** 轮播图高度 */
CGFloat const scrollerHeight                             = 125.0f;

/** 极光推送AppKey */
NSString * JPUSHServiceAppKey = @"a8672c9e7fe3d4de4f8bfdd5";
/** 极光推送channel */
NSString * JPUSHServiceChannel = @"Publish channel";
/** 极光推送isProduction */
#ifdef DEBUG
BOOL JPUSHServiceIsProduction = NO;
#else
BOOL JPUSHServiceIsProduction = YES;
#endif


/** shareSDKAPPKey */
NSString * const kSHShareSdkAppkey  = @"1dcecfac33842";
/** shareSDKAPPIdWeChat */
NSString * const kSHShareAppIdWeChat   = @"wx50c5b573857e3e66";
/** shareSDKAPPIdWeChat */
NSString * const kSHShareAppSecretWeChat  = @"13a9e5162dc99f80277e3d04cd7380bc";
/** shareSDKAPPIdQQ */
NSString * const kSHShareAppKeyQQ   = @"6pceNPBfGSK1DbwM";
/** shareSDKAPPIdQQ */
NSString * const kSHShareAppIdQQ   = @"1105807538";
/** 高德地图apiKey */
NSString * const kAMapApiKey = @"2c31378060fbac041021944c3c3e730b";

/** 分享停留时间 */
NSTimeInterval const kHUDHideDelay = 2;



//--------------userdefault  key-------------
/** 手机号 */
NSString * const kPhone = @"kPhone";
/** 手机号 */
NSString * const kPassword = @"kPassword";

NSString * const kTokenlose = @"kTokenlose";

NSString * const kRecordPwsBtnStatus = @"kRecordPwsBtnStatus";

/** 二维码冲击波动画时间 */
CGFloat const CBQRCodeScanningLineAnimation = 0.05;

/** 从相册里得到的二维码信息 */
NSString *const CBQRCodeInformationFromeAibum = @"SGQRCodeInformationFromeAibum";

/** 扫描得到的二维码信息 */
NSString *const CBQRCodeInformationFromeScanning = @"SGQRCodeInformationFromeScanning";

@end
