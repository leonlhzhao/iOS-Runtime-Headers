/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, UIKBRenderConfig;

@interface UIKBRenderFactory : NSObject {
    BOOL _boldTextEnabled;
    BOOL _lightweightFactory;
    UIKBRenderConfig *_renderConfig;
    float _rivenSizeFactor;
    float _scale;
    NSMutableArray *_segmentTraits;
}

@property(readonly) BOOL boldTextEnabled;
@property BOOL lightweightFactory;
@property(readonly) UIKBRenderConfig * renderConfig;
@property float rivenSizeFactor;
@property float scale;
@property(readonly) NSArray * segmentTraits;

+ (BOOL)_enabled;
+ (int)_graphicsQuality;
+ (id)cacheKeyForString:(id)arg1 withRenderFlags:(int)arg2 renderConfig:(id)arg3;
+ (Class)factoryClassForVisualStyle:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
+ (id)factoryForVisualStyle:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1 renderConfig:(id)arg2;
+ (id)lightweightFactoryForVisualStyle:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1 renderConfig:(id)arg2;
+ (id)segmentedControlColor:(BOOL)arg1;

- (float)RivenFactor:(float)arg1;
- (id)_controlKeyBackgroundColorName;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderConfig:(id)arg3 keycapsFontName:(id)arg4;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (void)addLayoutSegment:(id)arg1;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (id)biuKeyImageName;
- (id)boldKeyImageName;
- (BOOL)boldTextEnabled;
- (id)controlKeyBackgroundColorName;
- (id)controlKeyForegroundColorName;
- (id)controlKeyShadowColorName;
- (id)copyKeyImageName;
- (id)cutKeyImageName;
- (void)dealloc;
- (id)defaultKeyBackgroundColorName;
- (id)defaultKeyShadowColorName;
- (id)deleteKeyImageName;
- (id)dictationKeyImageName;
- (id)dismissKeyImageName;
- (id)displayContentsForKey:(id)arg1;
- (float)emojiPopupDividerKeyOffset;
- (int)enabledBlendForm;
- (id)extraPasscodePaddleTraits;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (id)handwritingMoreKeyImageName;
- (id)hashStringElement;
- (id)initWithRenderConfig:(id)arg1 skipLayoutSegments:(BOOL)arg2;
- (float)keyCornerRadius;
- (id)keyImageNameWithSkinnyVariation:(id)arg1;
- (id)leftArrowKeyImageName;
- (int)lightHighQualityEnabledBlendForm;
- (id)lightKeycapsFontName;
- (id)lightPadKeycapsFontName;
- (id)lightTextFontName;
- (BOOL)lightweightFactory;
- (void)lowQualityTraits:(id)arg1;
- (void)modifyKeyTraitsForPasscode:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;
- (void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2;
- (void)modifyTraitsForDividerVariant:(id)arg1 withKey:(id)arg2;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (id)passcodeActiveControlKeyTraits;
- (id)passcodeBackgroundTraitsForKeyplane:(id)arg1;
- (id)passcodeControlKeyTraits;
- (float)passcodeEdgeWeight;
- (id)passcodeKeyEdgeColorName;
- (id)passcodeShiftedControlKeyTraits;
- (id)pasteKeyImageName;
- (void)removeAllLayoutSegments;
- (id)renderConfig;
- (id)rightArrowKeyImageName;
- (float)rivenSizeFactor;
- (float)scale;
- (void)scaleTraits:(id)arg1;
- (id)segmentTraits;
- (void)setLightweightFactory:(BOOL)arg1;
- (void)setRivenSizeFactor:(float)arg1;
- (void)setScale:(float)arg1;
- (void)setupLayoutSegments;
- (id)shiftKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (BOOL)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (float)skinnyKeyThreshold;
- (id)thinKeycapsFontName;
- (id)thinTextFontName;
- (id)traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 controlOpacities:(BOOL)arg3;
- (float)translucentGapWidth;
- (id)undoKeyImageName;
- (BOOL)useBlueThemingForKey:(id)arg1;

@end
