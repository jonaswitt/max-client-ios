//
//  JWMasterViewController.h
//  Max Client
//
//  Created by Jonas Witt on 15.09.14.
//  Copyright (c) 2014 metaquark GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString *const MAX_API_HOST = @"http://192.168.1.151:3000";
static NSString *const MAX_CUBE_IP = @"192.168.1.150";

@class JWDetailViewController;

@interface JWMasterViewController : UITableViewController

@property (strong, nonatomic) JWDetailViewController *detailViewController;

@end
