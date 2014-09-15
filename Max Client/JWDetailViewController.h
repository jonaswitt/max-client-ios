//
//  JWDetailViewController.h
//  Max Client
//
//  Created by Jonas Witt on 15.09.14.
//  Copyright (c) 2014 metaquark GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JWDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
