//
//  UIImage+fixOrientation.h
//  HairSaionManager
//
//  Created by chen loman on 12-12-25.
//  Copyright (c) 2012年 chen loman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (additions)
- (UIImage *)fixOrientation ;
- (UIImage*)mirrored;
- (UIImage*)downMirrored;
- (UIImage*)merge:(UIImage*)image;

@end
