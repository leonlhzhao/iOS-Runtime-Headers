/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class CKRecordID, CKShareID, NSString;

@interface BRCSharingCopyAccessTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    CKRecordID *_recordID;
    CKShareID *_shareID;
    BOOL _wantsSharePermissions;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) CKRecordID * recordID;
@property(retain) CKShareID * shareID;
@property(readonly) Class superclass;
@property BOOL wantsSharePermissions;

- (void).cxx_destruct;
- (id)initWithItem:(id)arg1;
- (void)main;
- (id)recordID;
- (void)setRecordID:(id)arg1;
- (void)setShareID:(id)arg1;
- (void)setWantsSharePermissions:(BOOL)arg1;
- (id)shareID;
- (BOOL)shouldRetryForError:(id)arg1;
- (BOOL)wantsSharePermissions;

@end
