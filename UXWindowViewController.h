// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import <Cocoa/Cocoa.h>

@class UXViewController;

@interface UXWindowController : NSWindowController

- (instancetype)initWithRootViewController:(UXViewController *)viewController;

@property (retain, nonatomic) UXViewController *rootViewController;
@property __weak NSToolbarItem *navigationBarToolbarItem;

@end
