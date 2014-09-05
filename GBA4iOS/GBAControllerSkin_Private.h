//
//  GBAControllerSkin_Private.h
//  GBA4iOS
//
//  Created by Riley Testut on 9/3/14.
//  Copyright (c) 2014 Riley Testut. All rights reserved.
//

#import "GBAControllerSkin.h"

extern NSString *const GBAControllerSkinNameKey;
extern NSString *const GBAControllerSkinIdentifierKey;
extern NSString *const GBAControllerSkinTypeKey;
extern NSString *const GBAControllerSkinResizableKey;
extern NSString *const GBAControllerSkinDebugKey;
extern NSString *const GBAControllerSkinOrientationPortraitKey;
extern NSString *const GBAControllerSkinOrientationLandscapeKey;
extern NSString *const GBAControllerSkinAssetsKey;
extern NSString *const GBAControllerSkinLayoutsKey;

extern NSString *const GBAControllerSkinLayoutXKey;
extern NSString *const GBAControllerSkinLayoutYKey;
extern NSString *const GBAControllerSkinLayoutWidthKey;
extern NSString *const GBAControllerSkinLayoutHeightKey;

extern NSString *const GBAControllerSkinExtendedEdgesKey;
extern NSString *const GBAControllerSkinExtendedEdgesTopKey;
extern NSString *const GBAControllerSkinExtendedEdgesBottomKey;
extern NSString *const GBAControllerSkinExtendedEdgesLeftKey;
extern NSString *const GBAControllerSkinExtendedEdgesRightKey;

extern NSString *const GBAControllerSkinMappingSizeKey;
extern NSString *const GBAControllerSkinMappingSizeWidthKey;
extern NSString *const GBAControllerSkinMappingSizeHeightKey;

@interface GBAControllerSkin ()

- (NSDictionary *)dictionaryForOrientation:(GBAControllerSkinOrientation)orientation;
- (NSString *)keyForMapping:(GBAControllerSkinMapping)mapping;

- (CGSize)mappingSizeForOrientation:(GBAControllerSkinOrientation)orientation;

+ (NSString *)screenTypeForCurrentDeviceWithDictionary:(NSDictionary *)dictionary resizable:(BOOL)resizable;

@end
