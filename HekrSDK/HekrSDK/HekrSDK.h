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

@interface Hekr : NSObject
+(instancetype) sharedInstance;
-(void) config:(NSString*) appKey startPage:(NSString*) url;

@property (nonatomic,strong,readonly) HekrUser * user;
@property (nonatomic,strong,readonly) NSArray * devices;

-(void) logout;
//-(void) setupDeviceSSID:(NSString*) ssid pwd:(NSString*) pwd callback:(void(^)(BOOL)) block;
//-(void) setupDevicesBySoftAP:(void(^)(NSArray*,NSError*)) block;
//-(void) cancelSetup;

//-(HekrWebViewController*) webViewFor:(NSString*) url;
-(HekrWebViewController*) firstPage;
@end
