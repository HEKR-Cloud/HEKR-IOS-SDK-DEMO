//
//  HekrWebView.h
//  HekrSDK
//
//  Created by WangMike on 15/8/4.
//  Copyright (c) 2015年 Hekr. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HekrWebView : UIWebView

@end

@interface HekrWebViewController : UIViewController
@property (nonatomic,weak,readonly) HekrWebView * webView;
@end
