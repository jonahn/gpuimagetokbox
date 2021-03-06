//
//  TBPublisher.h
//  Lets-Build-OTPublisher
//
//  Copyright (c) 2013 TokBox, Inc. All rights reserved.
//

#import <OpenTok/OpenTok.h>

@interface TBExamplePublisher : OTPublisherKit

@property(readonly) UIView* view;

@property(nonatomic, assign) AVCaptureDevicePosition cameraPosition;

- (id)initWithDelegate:(id<OTPublisherDelegate>)delegate
                  name:(NSString*)name
               capture:(id<OTVideoCapture>)capture;
@end
