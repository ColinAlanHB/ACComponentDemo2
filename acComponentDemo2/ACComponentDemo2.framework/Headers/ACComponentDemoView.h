//
//  ACComponentDemoView.h
//  ACComponentDemo2
//
//  Created by hb on 2017/8/18.
//  Copyright © 2017年 appcan. All rights reserved.
//

#import <ACRouterKit/ACRouterKit.h>

@interface ACComponentDemoView : ACComponentBase

/**
 入参params字典中需包含
 1 itemTitle tabbar名称
 2 itemImage tabbaritem图片名称
 2 itemSelectedImage tabbaritem选择图片名称
 */

-(id)tabbarView1:(NSDictionary *)params;

/**
 入参params字典中需包含
 1 itemTitle tabbar名称
 2 itemImage tabbaritem图片名称
 2 itemSelectedImage tabbaritem选择图片名称
 */

-(id)tabbarView2:(NSDictionary *)params;

@end
