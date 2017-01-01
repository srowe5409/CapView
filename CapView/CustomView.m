//
//  CustomView.m
//  CapView
//
//  Created by Stephen Rowe on 12/26/16.
//  Copyright © 2016 Stephen Rowe. All rights reserved.
//

#import "CustomView.h"

@implementation CustomView

- (void)drawRect:(NSRect)dirtyRect {
    [super drawRect:dirtyRect];
    
    CGContextRef context = [[NSGraphicsContext currentContext] graphicsPort];
    CGContextSetRGBFillColor(context, 0, 0, 0, 0.50);
    CGContextFillRect(context, NSRectToCGRect(dirtyRect));
    self.layer.borderColor = [[NSColor whiteColor]CGColor];
    self.layer.borderWidth = 4.0F;
                            
}

@end
