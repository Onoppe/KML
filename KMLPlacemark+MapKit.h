//
//  KMLPlacemark+MapKit.h
//  KML+MapKit
//
//  Created by NextBusinessSystem on 11/12/01.
//  Copyright (c) 2011 NextBusinessSystem Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
#import <KML/KMLPlacemark.h>

@interface KMLPlacemark (MapKit)

- (BOOL)hasIcon;
- (UIImage*)icon;

@end
