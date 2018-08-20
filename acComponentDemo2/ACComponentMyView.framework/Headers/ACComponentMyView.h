//
//  ACComponentMyView.h
//  ACComponentMyView
//
//  Created by hb on 2018/7/26.
//  Copyright © 2018年 ac. All rights reserved.
//

#import <ACRouterKit/ACRouterKit.h>
#import "ACMyButton.h"

@interface ACComponentMyView : ACComponentBase

- (id)provideAnButton:(NSDictionary *)params;

- (void)setMyBtn:(NSDictionary *)params;

@end
