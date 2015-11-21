//
//  HekrSDK.h
//  HekrSDK
//
//  Created by WangMike on 15/7/31.
//  Copyright (c) 2015年 Hekr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HekrUser.h"
#import "HekrDevice.h"
#import "HekrWebView.h"

extern NSString * HekrSDKUserChangeNotification;
extern NSString * HekrSDKDevicesChangeNotification;

extern NSString * KeyOfHekr;//@"Hekr"
extern NSString * KeyOfPush;//@"push"
extern NSString * KeyOfSocial;//@"Social"
extern NSString * KeyOfAppIdKey;//@"AppId"
extern NSString * KeyOfAppKey;//@"AppKey"
extern NSString * KeyOfAppSecurit;//@"AppSecurit"
extern NSString * KeyOfSocialWeibo;//@"Weibo"
extern NSString * KeyOfSocialQQ;//@"QQ"
extern NSString * KeyOfSocialWeixin;//@"Weixin"
extern NSString * KeyOfSocialFacebook;//@"Facebook"
extern NSString * KeyOfSocialGoogle;//@"Google"
extern NSString * KeyOfSocialTwitter;//@"Twitter"

@interface Hekr : NSObject
+(instancetype) sharedInstance;
-(void) config:(NSDictionary*) config startPage:(NSString*) url launchOptions:(NSDictionary*) launchOptions;
-(void) didReceiveRemoteNotification:(NSDictionary*) userInfo;
-(BOOL) openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

@property (nonatomic,strong,readonly) HekrUser * user;
@property (nonatomic,strong,readonly) NSArray * devices;

-(void) logout;
//-(void) setupDeviceSSID:(NSString*) ssid pwd:(NSString*) pwd callback:(void(^)(BOOL)) block;
//-(void) setupDevicesBySoftAP:(void(^)(NSArray*,NSError*)) block;
//-(void) cancelSetup;

//-(HekrWebViewController*) webViewFor:(NSString*) url;
-(HekrWebViewController*) firstPage;
@end
