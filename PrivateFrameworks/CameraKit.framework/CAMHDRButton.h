/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CAMButtonLabel;

@interface CAMHDRButton : CAMExpandableMenuButton {
    CAMButtonLabel *__headerLabel;
    BOOL _allowsAutomaticHDR;
}

@property int HDRMode;
@property(readonly) CAMButtonLabel * _headerLabel;
@property BOOL allowsAutomaticHDR;

- (void).cxx_destruct;
- (int)HDRMode;
- (void)_commonCAMHDRButtonInitialization;
- (id)_headerLabel;
- (BOOL)allowsAutomaticHDR;
- (id)headerView;
- (id)hiddenIndexesWhileCollapsed;
- (int)indexForMode:(int)arg1;
- (id)initWithExpansionOrientation:(int)arg1;
- (int)modeForIndex:(int)arg1;
- (int)numberOfMenuItems;
- (void)reloadData;
- (void)setAllowsAutomaticHDR:(BOOL)arg1;
- (void)setHDRMode:(int)arg1;
- (id)titleForMenuItemAtIndex:(int)arg1;
- (void)updateToContentSize:(id)arg1;

@end
