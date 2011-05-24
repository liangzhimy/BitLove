//
//  CPreferencesAppDelegate.m
//  CPreferences
//
//  Created by Patrick Chamelo on 11/06/2010.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "CPreferencesAppDelegate.h"
#import "Preferences.h"

@implementation CPreferencesAppDelegate

@synthesize window;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
	[self openPreferences:nil];
}

- (IBAction)openPreferences:(id)sender
{
	[[Preferences sharedPrefsWindowController] showWindow:nil];
	(void)sender;
}

@end
