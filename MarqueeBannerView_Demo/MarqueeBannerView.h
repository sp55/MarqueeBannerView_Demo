//
//  MarqueeBannerView.h
//  MarqueeBannerView_Demo
//
//  Created by admin on 2016/10/9.
//  Copyright © 2016年 AlezJi. All rights reserved.
//

#import <UIKit/UIKit.h>


//方向

typedef enum
{
    LoopDirectionLeft,
    LoopDirectionRight,
    
}LoopDirection;

static CGSize appScreenSize;
static UIInterfaceOrientation lastOrientation;

@interface MarqueeBannerView : UIView{
    // 记录
    int currentIndex;
    //是否循环（默认为YES）
    BOOL loops;
    // 当前状态
    BOOL running;
    // 内容载体
    UILabel *tickerLabel;
}



/**
 *  跑马灯loop速度
 */
@property(nonatomic) float Speed;
/**
 *  显示的内容(支持多条数据)
 */
@property(nonatomic, retain) NSArray *tickerArrs;
/**
 * loop方向(左/右)
 */
@property(nonatomic) LoopDirection Direction;
/**
 *  设置背景颜色
 */
-(void)setBackColor:(UIColor *)color;
/**
 *  开启
 */
-(void)start;
/**
 *  暂停
 */
-(void)pause;
/**
 *  复位
 */
-(void)resume;
@end
