//
//  HomeTableView.h
//  项目三首页
//
//  Created by mac on 16/2/9.
//  Copyright © 2016年 jagain. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeTableView : UITableView <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, copy) NSMutableDictionary *dataDic;

@end
