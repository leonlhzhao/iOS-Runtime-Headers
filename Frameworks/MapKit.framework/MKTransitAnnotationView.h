/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKRouteStep, UIImage, UIImageView, UILabel;

@interface MKTransitAnnotationView : MKAnnotationView <MKOrientable, MKCountdownTimerObserver> {
    UIImageView *_iconView;
    UIImageView *_imageView;
    UILabel *_label;
    int _orientation;
}

@property int _orientation;
@property(retain) UIImage * icon;
@property(readonly) MKRouteStep * step;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_bubbleFrameForType:(int)arg1 labelWidth:(float)arg2;
+ (id)_imageForType:(int)arg1;

- (void)_layoutIcon;
- (void)_layoutLabel;
- (int)_orientation;
- (unsigned int)_orientationCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantBounds;
- (void)_updateAnchorPoint;
- (void)_updateCalloutOffset;
- (void)dealloc;
- (id)icon;
- (id)image;
- (id)initWithStep:(id)arg1;
- (void)layoutSubviews;
- (id)rightCalloutAccessoryView;
- (void)setIcon:(id)arg1;
- (void)setImage:(id)arg1;
- (void)set_orientation:(int)arg1;
- (id)step;
- (void)updateCountdowns;

@end