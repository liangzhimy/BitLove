//
//  CPreferencesAppDelegate.h
//  CPreferences
//
//  Created by Patrick Chamelo on 11/06/2010.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface CPreferencesAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;
- (IBAction)openPreferences:(id)sender;
@end
