//
//  AppDelegate.h
//  Logistics Project
//
//  Created by Dustin Notsch on 6/16/14.
//  Copyright (c) 2014 Dustin Notsch. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;


@end


@interface welcome : NSObject {
    NSString* message1;
    NSString* message2;
}

- (NSString*) message1;
- (NSString*) message2;

- (void) setMessage1: (NSString*)input;
- (void) setMessage2: (NSString*)input;


@end