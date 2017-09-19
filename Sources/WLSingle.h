//
//  WLSingle.h
//  Kangyx
//
//  Created by 王乐乐 on 16/9/12.
//  Copyright © 2016年 Wanglele. All rights reserved.
//

#ifndef WLSingle_h
#define WLSingle_h


#define SingleH(name) + (instancetype)share##name;\
\
- (void)resetSelf;

//arc
#if __has_feature(objc_arc)


#define SingleM(name)  static id _onceClass;\
+ (instancetype)share##name{\
@synchronized (self){\
if (_onceClass == nil) {\
    _onceClass = [[self alloc] init];\
}\
return _onceClass;\
}\
}\
\
+ (instancetype)allocWithZone:(struct _NSZone *)zone{\
@synchronized (self){\
if (_onceClass == nil) {\
_onceClass = [super allocWithZone:zone];\
}\
return _onceClass;\
}\
}\
\
- (instancetype)copy{\
return _onceClass;\
}\
\
- (instancetype)mutableCopy{\
return _onceClass;\
}\
\
- (void)resetSelf{\
_onceClass = nil;\
}\

#else

//mrc
#define SingleM(name)  static id _onceClass;\
+ (instancetype)share##name{\
@synchronized (self){\
if (_onceClass == nil) {\
_onceClass = [[self alloc] init];\
}\
return _onceClass;\
}\
}\
\
+ (instancetype)allocWithZone:(struct _NSZone *)zone{\
@synchronized (self){\
if (_onceClass == nil) {\
_onceClass = [super allocWithZone:zone];\
}\
return _onceClass;\
}\
}\
\
- (instancetype)copy{\
return _onceClass;\
}\
\
- (instancetype)mutableCopy{\
return _onceClass;\
}\
\
- (oneway void)release{\
}\
\
- (NSUInteger)retainCount{\
return MAXFLOAT;\
}\
\
- (void)resetSelf{\
_onceClass = nil;\
}

#endif

#endif /* WLSingle_h */
