//
//  DetailViewController.h
//  斐波那契
//
//  Created by 王振丰 on 16/12/20.
//  Copyright © 2016年 王振丰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

