//
//  DetailViewController.h
//  CreateBinaryTree
//
//  Created by 王振丰 on 17/1/2.
//  Copyright © 2017年 王振丰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

