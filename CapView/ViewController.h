//
//  ViewController.h
//  CapView
//
//  Created by Stephen Rowe on 12/26/16.
//  Copyright © 2016 Stephen Rowe. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <AVFoundation/AVFoundation.h>
#import "CustomView.h"

@interface ViewController : NSViewController{
    AVCaptureSession *session;
    AVCaptureConnection *video_connection;
    AVCaptureStillImageOutput *still_image_output;
}
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *preview_layer;
@property (nonatomic, retain) IBOutlet CustomView* customView1;
@property (nonatomic, retain) IBOutlet NSButton* startPreviewButton;
@property (nonatomic, retain) IBOutlet NSButton* stopPreviewButton;
@property (nonatomic, retain) IBOutlet NSButton* captureButton;

@property (nonatomic, retain) IBOutlet NSImageView* imageView1;

-(IBAction) startPreview_click:(id)sender;
-(IBAction) stopPreview_click:(id)sender;
-(IBAction) capture_click:(id)sender;

-(void) initCaptureSession;
-(void) setupPreviewLayer;



@end

