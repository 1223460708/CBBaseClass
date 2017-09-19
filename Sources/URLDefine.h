
//  URLDefine.h
//  Kangyx

//  Created by 王乐乐 on 16/9/12.
//  Copyright © 2016年 Wanglele. All rights reserved.


#ifndef URLDefine_h
#define URLDefine_h

/** 正式服务器地址 */
#define Url_YMFServer                          @"https://apipay.jhpayment.com"
#define Url_YMFWalltServer  Url_YMFServer
/**  店铺管理服务器地址 */
#define Url_YMFStoreManagerServer  [Url_YMFServer stringByAppendingString:@"/app"]
//#define Url_YMFStoreManagerServer  @"http://192.168.204.134:8080/app/"

/** 外网测试服务器地址 */
//#define Url_YMFServer                          @"http://ai.yunmazhifu.cn"
//#define Url_YMFWalltServer  Url_YMFServer
///**  店铺管理服务器地址 */
//#define Url_YMFStoreManagerServer  [Url_YMFServer stringByAppendingString:@"/app"]

///** 内网测试服务器地址 *／
//#define Url_YMFServer                          @"http://192.168.1.10:8080/localhost_v2.0.0"
//#define Url_YMFWalltServer  Url_YMFServer
/////**  店铺管理服务器地址 */
//#define Url_YMFStoreManagerServer  [Url_YMFServer stringByAppendingString:@"/app"]

/** 机构号 */
#define instId @"101"
/** 代理号 */
#define agentNo @"A0199991001"
/** appId 区分app */
#define appleId @"101100"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////h5h5h5h5/////////////////////////////////

/** 操作手册 */
#define Url_caozuoshouce  @"http://ai.yunmazhifu.cn/manual/index.html"

/** 用户协议 */
#define Url_yonghuxieyi  [Url_YMFServer stringByAppendingString:@"/app/other/useragreement.html"]

/** 关于我们 */
#define Url_guanyuwomen  [Url_YMFServer stringByAppendingString:@"/app/other/aboutus.html"]

/** 积分兑换 */
#define Url_jifenDuiHuan  [Url_YMFServer stringByAppendingString:@"/app/exchange/exchange.html"]

/** 积分规则 */
#define Url_jifenGuiZe  [Url_YMFServer stringByAppendingString:@"/app/html/integralrule.html"]

/** 手机充值 */
#define Url_shoujiChongZhi  [Url_YMFServer stringByAppendingString:@"/app/mobilerecharge/mobilerecharge.html"]

/** 余额生息 */
#define Url_yueShengXi  [Url_YMFServer stringByAppendingString:@"/app/balanceinterest/balanceinterest.html"]

/** 我要贷款 */
#define Url_woyaoDaiKuan  [Url_YMFServer stringByAppendingString:@"/app/html/loan.html"]

/** 收钱码收货地址 */
#define Url_shouqianmaShouHuoDizhi  [Url_YMFServer stringByAppendingString:@"/app/html/saveOrderAddress.html"]

/** 分享logo */
#define Url_fenxiangLoGo  [Url_YMFServer stringByAppendingString:@"/statics/images/share_logo.png"]

/** 分享注册地址 */
#define Url_fenxiangZhuCeDiZhi [Url_YMFServer stringByAppendingString:@"/pagePay/ms/reg/share"]

#endif /* URLDefine_h */
