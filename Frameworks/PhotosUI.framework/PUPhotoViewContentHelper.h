/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class PUAvalancheStackView, PUBackgroundColorView, PUBadgeView, PUPhotoDecoration, PUTextBannerView, UIImage, UIImageView, UIView;

@interface PUPhotoViewContentHelper : NSObject {
    UIImageView *__crossfadeImageView;
    float _avalancheMaxPixelSize;
    struct CGColor { } *_avalancheStackBackgroundColor;
    PUAvalancheStackView *_avalancheStackView;
    BOOL _avoidsImageViewIfPossible;
    BOOL _avoidsPhotoDecoration;
    int _badgeType;
    PUBadgeView *_badgeView;
    UIView *_contentView;
    int _fillMode;
    BOOL _flattensBadgeView;
    BOOL _hasTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _imageTransform;
    BOOL _isTextBannerVisible;
    BOOL _needsAvalancheStack;
    PUPhotoDecoration *_photoDecoration;
    PUBackgroundColorView *_photoDecorationBorderView;
    PUBackgroundColorView *_photoDecorationOverlayView;
    UIImage *_photoImage;
    UIImageView *_photoImageView;
    struct CGSize { 
        float width; 
        float height; 
    } _photoSize;
    PUTextBannerView *_textBannerView;
    double _videoDuration;
}

@property(retain) UIImageView * _crossfadeImageView;
@property float avalancheMaxPixelSize;
@property struct CGColor { }* avalancheStackBackgroundColor;
@property(retain) PUAvalancheStackView * avalancheStackView;
@property BOOL avoidsImageViewIfPossible;
@property BOOL avoidsPhotoDecoration;
@property(readonly) UIView * badgeContainerView;
@property(readonly) int badgeType;
@property(readonly) UIView * contentView;
@property int fillMode;
@property BOOL flattensBadgeView;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageContentFrame;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } imageTransform;
@property BOOL needsAvalancheStack;
@property(copy) PUPhotoDecoration * photoDecoration;
@property(retain) UIImage * photoImage;
@property(retain) UIImageView * photoImageView;
@property struct CGSize { float x1; float x2; } photoSize;
@property(readonly) PUTextBannerView * textBannerView;
@property(getter=isTextBannerVisible) BOOL textBannerVisible;
@property(readonly) double videoDuration;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_imageContentFrameForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 fillMode:(int)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 fillMode:(int)arg3;

- (void).cxx_destruct;
- (id)_crossfadeImageView;
- (void)_updateBadgeView;
- (void)_updateContentViewClipsToBounds;
- (void)_updateImageView;
- (void)_updatePhotoDecoration;
- (void)_updateSubviewOrdering;
- (void)_updateTextBannerView;
- (void)animateCrossfadeToImage:(id)arg1;
- (float)avalancheMaxPixelSize;
- (struct CGColor { }*)avalancheStackBackgroundColor;
- (id)avalancheStackView;
- (BOOL)avoidsImageViewIfPossible;
- (BOOL)avoidsPhotoDecoration;
- (id)badgeContainerView;
- (int)badgeType;
- (id)contentView;
- (struct CGSize { float x1; float x2; })contentViewSizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)fillMode;
- (BOOL)flattensBadgeView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageContentFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageContentFrameForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })imageTransform;
- (id)initWithContentView:(id)arg1;
- (BOOL)isTextBannerVisible;
- (void)layoutSubviewsOfContentView;
- (BOOL)needsAvalancheStack;
- (id)photoDecoration;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })photoDecorationBorderViewFrameForImageContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)photoImage;
- (id)photoImageView;
- (struct CGSize { float x1; float x2; })photoSize;
- (void)setAvalancheMaxPixelSize:(float)arg1;
- (void)setAvalancheStackBackgroundColor:(struct CGColor { }*)arg1;
- (void)setAvalancheStackView:(id)arg1;
- (void)setAvoidsImageViewIfPossible:(BOOL)arg1;
- (void)setAvoidsPhotoDecoration:(BOOL)arg1;
- (void)setBadgeType:(int)arg1 videoDuration:(double)arg2;
- (void)setFillMode:(int)arg1;
- (void)setFlattensBadgeView:(BOOL)arg1;
- (void)setImageTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setNeedsAvalancheStack:(BOOL)arg1;
- (void)setPhotoDecoration:(id)arg1;
- (void)setPhotoImage:(id)arg1;
- (void)setPhotoImageView:(id)arg1;
- (void)setPhotoSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTextBannerVisible:(BOOL)arg1;
- (void)set_crossfadeImageView:(id)arg1;
- (id)textBannerView;
- (void)updatePhotoImageWithoutReconfiguring:(id)arg1;
- (double)videoDuration;

@end
