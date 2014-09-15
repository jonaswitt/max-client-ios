//
//  DetailViewController.h
//  Max Client
//
//  Created by user on 15/09/14.
//  Copyright (c) 2014 Jonas Witt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

