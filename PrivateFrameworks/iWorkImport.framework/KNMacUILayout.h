/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying> {
    int mInspectorPaneViewMode;
    BOOL mShowingInspectorPane;
    BOOL mShowingLightTable;
    BOOL mShowingMasterSlides;
    BOOL mShowingNavigatorViewInSidebar;
    BOOL mShowingPresenterNotes;
    BOOL mShowingSidebar;
}

@property(readonly) int inspectorPaneViewMode;
@property(getter=p_isShowingNavigatorViewInSidebar,readonly) BOOL p_showingNavigatorViewInSidebar;
@property(getter=isShowingInspectorPane,readonly) BOOL showingInspectorPane;
@property(getter=isShowingLightTable,readonly) BOOL showingLightTable;
@property(getter=isShowingMasterSlides,readonly) BOOL showingMasterSlides;
@property(getter=isShowingPresenterNotes,readonly) BOOL showingPresenterNotes;
@property(getter=isShowingSidebar,readonly) BOOL showingSidebar;
@property(readonly) int sidebarViewMode;

+ (id)uiLayoutFromArchive:(const struct DesktopUILayoutArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; bool x6; bool x7; bool x8; bool x9; int x10; bool x11; }*)arg1 unarchiver:(id)arg2 context:(id)arg3;

- (id)archivedUILayoutInContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (int)inspectorPaneViewMode;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isShowingInspectorPane;
- (BOOL)isShowingLightTable;
- (BOOL)isShowingMasterSlides;
- (BOOL)isShowingPresenterNotes;
- (BOOL)isShowingSidebar;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)p_isShowingNavigatorViewInSidebar;
- (void)saveToArchive:(struct DesktopUILayoutArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; bool x6; bool x7; bool x8; bool x9; int x10; bool x11; }*)arg1 archiver:(id)arg2;
- (int)sidebarViewMode;

@end
