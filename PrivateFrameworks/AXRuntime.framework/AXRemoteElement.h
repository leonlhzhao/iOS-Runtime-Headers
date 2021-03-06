/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@class <AXRemoteElementChildrenDelegate>, NSMutableSet, NSString;

@interface AXRemoteElement : NSObject {
    id _accessibilityContainer;
    NSMutableSet *_allChildren;
    unsigned int _contextId;
    BOOL _deniesDirectAppConnection;
    unsigned int _machPort;
    BOOL _onClientSide;
    <AXRemoteElementChildrenDelegate> *_remoteChildrenDelegate;
    int _remotePid;
    NSString *_uuid;
}

@property id accessibilityContainer;
@property unsigned int contextId;
@property BOOL deniesDirectAppConnection;
@property unsigned int machPort;
@property BOOL onClientSide;
@property <AXRemoteElementChildrenDelegate> * remoteChildrenDelegate;
@property int remotePid;
@property(retain) NSString * uuid;
@property(readonly) unsigned long long uuidHash;

+ (void)initialize;
+ (BOOL)registerRemoteElement:(id)arg1;
+ (id)remoteElementForBlock:(id)arg1;
+ (id)remoteElementForContextId:(unsigned int)arg1;

- (void)_accessibilityEnumerateSiblingsWithParent:(id*)arg1 options:(id)arg2 usingBlock:(id)arg3;
- (id)_accessibilityFirstElement;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (BOOL)_accessibilityIsRemoteElement;
- (id)_accessibilityLastElement;
- (id)_accessibilityResponderElement;
- (id)_accessibilitySortedElementsWithin;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_remoteElementWithAttribute:(int)arg1;
- (id)accessibilityAttributeValue:(int)arg1 forParameter:(id)arg2;
- (id)accessibilityContainer;
- (id)accessibilityContainerElements;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (BOOL)accessibilityViewIsModal;
- (unsigned int)contextId;
- (void)dealloc;
- (BOOL)deniesDirectAppConnection;
- (id)description;
- (id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned int)arg3;
- (unsigned int)machPort;
- (BOOL)onClientSide;
- (void)platformCleanup;
- (void)platformCleanup;
- (id)remoteChildrenDelegate;
- (int)remotePid;
- (void)setAccessibilityContainer:(id)arg1;
- (void)setContextId:(unsigned int)arg1;
- (void)setDeniesDirectAppConnection:(BOOL)arg1;
- (void)setMachPort:(unsigned int)arg1;
- (void)setOnClientSide:(BOOL)arg1;
- (void)setRemoteChildrenDelegate:(id)arg1;
- (void)setRemotePid:(int)arg1;
- (void)setUuid:(id)arg1;
- (void)unregister;
- (id)uuid;
- (unsigned long long)uuidHash;

@end
