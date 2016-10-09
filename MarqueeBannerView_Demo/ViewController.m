//
//  ViewController.m
//  MarqueeBannerView_Demo
//
//  Created by admin on 2016/10/9.
//  Copyright © 2016年 AlezJi. All rights reserved.
//

#import "ViewController.h"
#import "MarqueeBannerView.h"
@interface ViewController ()
@property(nonatomic,retain)MarqueeBannerView *LoopView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSArray *loopArrs = [NSArray arrayWithObjects:@"白日依山尽", @"黄河入海流",@"欲穷千里目",@"更上一层楼",nil];
    
    _LoopView = [[MarqueeBannerView alloc] initWithFrame:CGRectMake(0, 64,self.view.bounds.size.width, 40)];
    [_LoopView setDirection:LoopDirectionRight];
    [_LoopView setTickerArrs:loopArrs];
    [_LoopView setSpeed:100.0f];
    [_LoopView setBackColor:[UIColor brownColor]];
    [self.view addSubview:_LoopView];
    [_LoopView start];
    
}



@end
