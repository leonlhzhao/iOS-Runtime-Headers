/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSMutableArray, NSString;

@interface Alert : NSObject {
    NSString *_bodyText;
    id _context;
    NSInteger _defaultAction;
    NSInteger _hideAction;
    NSInteger _indexOfSelectedTableItem;
    NSInteger _otherAction;
    NSInteger _tableAction;
    NSMutableArray *_tableItems;
    NSString *_title;
    NSInteger _type;
}

- (id)_buttonTitleForAction:(NSInteger)arg1;
- (NSInteger)actionForButtonTag:(NSUInteger)arg1;
- (id)bodyText;
- (id)buttonTitles;
- (id)context;
- (void)dealloc;
- (NSInteger)defaultAction;
- (NSInteger)hideAction;
- (id)initWithType:(NSInteger)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(NSInteger)arg4 otherAction:(NSInteger)arg5 tableAction:(NSInteger)arg6;
- (id)initWithType:(NSInteger)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(NSInteger)arg4 otherAction:(NSInteger)arg5;
- (id)initWithType:(NSInteger)arg1 title:(id)arg2 defaultAction:(NSInteger)arg3 otherAction:(NSInteger)arg4 tableAction:(NSInteger)arg5;
- (id)initWithType:(NSInteger)arg1 title:(id)arg2 defaultAction:(NSInteger)arg3 otherAction:(NSInteger)arg4;
- (id)selectedTableItem;
- (void)setContext:(id)arg1;
- (void)setHideAction:(NSInteger)arg1;
- (void)setSelectedTableItemIndex:(NSInteger)arg1;
- (void)setTableItems:(id)arg1 withTitles:(id)arg2;
- (NSInteger)tableAction;
- (id)tableItems;
- (id)title;
- (NSInteger)type;

@end