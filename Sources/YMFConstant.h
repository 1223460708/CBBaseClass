//
//  YMFConstant.h
//  Yunmafu
//
//  Created by 王乐乐 on 2017/2/15.
//  Copyright © 2017年 wanglele. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef  NS_ENUM(NSInteger,YMFRedEnvelopeSettingType){
    YMFRedEnvelopeSettingTypeZFHB = 1, //支付红包
    YMFRedEnvelopeSettingTypeWiFi //Wi-Fi红包
};

typedef  NS_ENUM(NSInteger,YMFRedEnvelopeType){
    YMFRedEnvelopeTypeGDJE = 1, //固定金额
    YMFRedEnvelopeTypeSJJE //随机金额
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


@interface YMFConstant : NSObject

/** tokenKey */
UIKIT_EXTERN NSString * const kYMFTokenKey;

/** AES加密Key */
UIKIT_EXTERN NSString * const kYMFAESkey;

/** 是否记住账户密码 */
UIKIT_EXTERN NSString * const kYMFSaveNamePsw;

/** 总资产隐藏显示 */
UIKIT_EXTERN NSString * const kYMFWalletTextHideOrNo;

/** 云码付客服电话 */
UIKIT_EXTERN NSString * const kYMFESQPhoneNumber;
/** fmdb表单名称 user  */
UIKIT_EXTERN NSString * const fmUser;
/** 创建fmdb时的标记 */
UIKIT_EXTERN NSString * const shareDatabaseName;

/** 经度度 */
UIKIT_EXTERN NSString * const latitude;
/** 纬度 */
UIKIT_EXTERN NSString * const longitude;

/** 城市 */
UIKIT_EXTERN NSString * const cbCityname;


/** 通用小字体 */
UIKIT_EXTERN CGFloat const kMinFontSize;
/** 导航左右字体 */
UIKIT_EXTERN CGFloat const kNavFontSize;
/** 输入框通用字体大小 */
UIKIT_EXTERN CGFloat const kTFFontSize;


/** 输入框LeftView通用宽度 */
UIKIT_EXTERN CGFloat const kTFLeftViewWidth;
/** 通用间距大小 */
UIKIT_EXTERN CGFloat const kPaddingValue;
/** 输入框通用40高度 */
UIKIT_EXTERN CGFloat const kTFHeight;
/** 输入框通用50高度 */
UIKIT_EXTERN CGFloat const kBTFHeight;

/** 轮播图高度 */
UIKIT_EXTERN CGFloat const scrollerHeight;

/** 极光推送AppKey */
UIKIT_EXTERN NSString * JPUSHServiceAppKey;
/** 极光推送channel */
UIKIT_EXTERN NSString * JPUSHServiceChannel;
/** 极光推送isProduction */
UIKIT_EXTERN BOOL JPUSHServiceIsProduction;


/** shareSDKAPPKey */
UIKIT_EXTERN NSString * const kSHShareSdkAppkey;
/** shareSDKAPPIdWeChat */
UIKIT_EXTERN NSString * const kSHShareAppIdWeChat;
/** shareSDKAPPIdWeChat */
UIKIT_EXTERN NSString * const kSHShareAppSecretWeChat;
/** shareSDKAPPIdQQ */
UIKIT_EXTERN NSString * const kSHShareAppKeyQQ;
/** shareSDKAPPIdQQ */
UIKIT_EXTERN NSString * const kSHShareAppIdQQ;
/** 高德地图apiKey */
UIKIT_EXTERN NSString * const kAMapApiKey;



/** 分享停留时间 */
UIKIT_EXTERN NSTimeInterval const kHUDHideDelay;


//--------------userdefault  key-------------
/** 手机号 */
UIKIT_EXTERN NSString * const kPhone;
/** 手机密码 */
UIKIT_EXTERN NSString * const kPassword;

UIKIT_EXTERN NSString * const kTokenlose;

UIKIT_EXTERN NSString * const kRecordPwsBtnStatus;

//---------------扫描二维码----------------------
#define CBQRCodeNotificationCenter [NSNotificationCenter defaultCenter]
#define CBQRCodeScreenWidth [UIScreen mainScreen].bounds.size.width
#define CBQRCodeScreenHeight [UIScreen mainScreen].bounds.size.height

/** 分享停留时间 */
UIKIT_EXTERN NSTimeInterval const kHUDHideDelay;

/** 二维码冲击波动画时间 */
UIKIT_EXTERN CGFloat const CBQRCodeScanningLineAnimation;

/** 扫描得到的二维码信息 */
UIKIT_EXTERN NSString *const CBQRCodeInformationFromeScanning;

/** 从相册里得到的二维码信息 */
UIKIT_EXTERN NSString *const CBQRCodeInformationFromeAibum;



@end
