//
//  TextEditTableViewController.h
//  HairSaionManager
//
//  Created by chen loman on 12-12-11.
//  Copyright (c) 2012年 chen loman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseRightSideViewController.h"

@interface TextEditTableViewController : BaseRightSideViewController<UITextFieldDelegate>
@property (nonatomic, strong)NSString* text;

@end
