//
//  JPMDetailViewController.h
//  ControllingSource
//
//  Created by Jean-Pierre - Dev. on 21/07/14.
//  Copyright (c) 2014 Jean-Pierre. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JPMDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
