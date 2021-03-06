/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class <LSUserActivityDelegate>, LSUserActivityManager, NSData, NSDate, NSDictionary, NSError, NSMutableDictionary, NSString, NSURL, NSUUID, SFCompanionAdvertiser;

@interface LSUserActivity : NSObject <SFCompanionAdvertiserDelegate> {
    SFCompanionAdvertiser *_advertiser;
    BOOL _canCreateStreams;
    BOOL _createsNewUUIDIfSaved;
    NSError *_decodeUserInfoError;
    <LSUserActivityDelegate> *_delegate;
    BOOL _dirty;
    BOOL _encodedContainsUnsynchronizedCloudDocument;
    double _encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
    BOOL _encodedFileProviderURL;
    BOOL _forceImmediateSendToServer;
    NSMutableDictionary *_frameworkPayload;
    BOOL _inWillSaveCallback;
    NSDate *_lastActivityDate;
    double _lastSaveTime;
    LSUserActivityManager *_manager;
    BOOL _needsSave;
    NSDictionary *_options;
    SFCompanionAdvertiser *_resumerAdvertiser;
    BOOL _saveScheduled;
    BOOL _sendToServerPending;
    NSData *_streamsData;
    unsigned int _suggestedActionType;
    BOOL _supportsContinuationStreams;
    NSString *_title;
    NSString *_typeIdentifier;
    NSUUID *_uniqueIdentifier;
    NSMutableDictionary *_userInfo;
    NSURL *_webpageURL;
}

@property(getter=isActive) BOOL active;
@property(copy) NSDictionary * activityPayload;
@property(getter=activityPayload,setter=setActivityPayload:,copy) NSDictionary * activityPayloadDictionary;
@property BOOL canCreateStreams;
@property BOOL createsNewUUIDIfSaved;
@property(copy,readonly) NSString * debugDescription;
@property(retain) NSError * decodeUserInfoError;
@property <LSUserActivityDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property BOOL dirty;
@property BOOL encodedContainsUnsynchronizedCloudDocument;
@property double encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
@property BOOL encodedFileProviderURL;
@property BOOL forceImmediateSendToServer;
@property(copy) NSDictionary * frameworkPayload;
@property(getter=frameworkPayload,setter=setFrameworkPayload:,copy) NSDictionary * frameworkPayloadDictionary;
@property(readonly) unsigned int hash;
@property(copy) NSDate * lastActivityDate;
@property(readonly) LSUserActivityManager * manager;
@property BOOL needsSave;
@property(copy) NSDictionary * options;
@property(copy) NSString * owningBundleIdentifier;
@property BOOL sendToServerPending;
@property(copy) NSData * streamsData;
@property(readonly) unsigned int suggestedActionType;
@property(readonly) Class superclass;
@property BOOL supportsContinuationStreams;
@property(copy) NSString * title;
@property(copy) NSString * typeIdentifier;
@property(copy) NSUUID * uniqueIdentifier;
@property(copy) NSDictionary * userInfo;
@property(copy) NSURL * webPageURL;
@property(copy) NSURL * webpageURL;

+ (id)allowedWebpageURLSchemes;
+ (BOOL)checkWebpageURL:(id)arg1 actionType:(unsigned int)arg2 throwIfFailed:(BOOL)arg3;
+ (void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(id)arg2;
+ (id)registerForSuggestedActionNudgeOfType:(unsigned int)arg1 withOptions:(id)arg2 block:(id)arg3;
+ (id)suggestedActionOfType:(unsigned int)arg1;
+ (void)unregisterForSuggestedActionNudgeOfType:(id)arg1;
+ (id)userActivity;
+ (BOOL)userActivityContinuationSupported;
+ (id)userActivityFromUUID:(id)arg1 withError:(id*)arg2;

- (void)_resignCurrent;
- (id)activityPayload;
- (id)addResourceURL:(id)arg1;
- (void)addUserInfoEntriesFromDictionary:(id)arg1;
- (void)advertiser:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (void)becomeCurrent;
- (id)callWillSaveDelegateIfDirtyAndPackageUpData:(BOOL)arg1 clearDirty:(BOOL)arg2;
- (BOOL)canCreateStreams;
- (BOOL)createsNewUUIDIfSaved;
- (void)dealloc;
- (id)debugDescription;
- (id)decodeUserInfo:(id)arg1;
- (id)decodeUserInfoError;
- (id)delegate;
- (id)description;
- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;
- (void)didSynchronizeUserActivity;
- (BOOL)dirty;
- (id)encodeUserInfo:(id)arg1;
- (BOOL)encodedContainsUnsynchronizedCloudDocument;
- (double)encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
- (BOOL)encodedFileProviderURL;
- (BOOL)forceImmediateSendToServer;
- (id)frameworkPayload;
- (void)getContinuationStreamsWithCompletionHandler:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithManager:(id)arg1 userActivityInfo:(id)arg2;
- (id)initWithSuggestedActionType:(unsigned int)arg1 options:(id)arg2;
- (id)initWithTypeIdentifier:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1 options:(id)arg2;
- (id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned int)arg2 options:(id)arg3;
- (id)initWithUUID:(id)arg1;
- (void)invalidate;
- (BOOL)isActive;
- (BOOL)isEqual:(id)arg1;
- (id)lastActivityDate;
- (id)manager;
- (BOOL)needsSave;
- (id)options;
- (id)owningBundleIdentifier;
- (void)remove;
- (void)removeActivityPayloadForKey:(id)arg1;
- (void)removeFrameworkPayloadForKey:(id)arg1;
- (void)removeFrameworkPayloadValueForKey:(id)arg1;
- (void)removeResourceURL:(id)arg1;
- (void)removeUserInfoValueForKey:(id)arg1;
- (void)resignCurrent;
- (id)resourceURLForKey:(id)arg1;
- (id)resourceURLs;
- (void)save;
- (void)scheduleSendUserActivityInfoToLSUserActivityd;
- (BOOL)sendToServerPending;
- (void)sendUserActivityInfoToLSUserActivityd:(BOOL)arg1 onAsyncQueue:(BOOL)arg2;
- (void)setActive:(BOOL)arg1;
- (void)setActivityPayload:(id)arg1;
- (void)setCanCreateStreams:(BOOL)arg1;
- (void)setCreatesNewUUIDIfSaved:(BOOL)arg1;
- (void)setDecodeUserInfoError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirty:(BOOL)arg1;
- (void)setEncodedContainsUnsynchronizedCloudDocument:(BOOL)arg1;
- (void)setEncodedContainsUnsynchronizedCloudDocumentBackoffInterval:(double)arg1;
- (void)setEncodedFileProviderURL:(BOOL)arg1;
- (void)setForceImmediateSendToServer:(BOOL)arg1;
- (void)setFrameworkPayload:(id)arg1;
- (void)setLastActivityDate:(id)arg1;
- (void)setNeedsSave:(BOOL)arg1;
- (void)setOptions:(id)arg1;
- (void)setOwningBundleIdentifier:(id)arg1;
- (void)setResourceURLs:(id)arg1;
- (void)setSendToServerPending:(BOOL)arg1;
- (void)setStreamsData:(id)arg1;
- (void)setSupportsContinuationStreams:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWebPageURL:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (id)streamsData;
- (unsigned int)suggestedActionType;
- (BOOL)supportsContinuationStreams;
- (void)tellDaemonAboutNewLSUserActivity;
- (id)title;
- (id)typeIdentifier;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (id)uniqueIdentifier;
- (void)updateActivityPayloadValue:(id)arg1 forKey:(id)arg2;
- (void)updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2;
- (void)updateUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)userActivityInfoForSelf;
- (id)userInfo;
- (id)webPageURL;
- (id)webpageURL;
- (void)willSynchronizeUserActivityWithHandler:(id)arg1;

@end
