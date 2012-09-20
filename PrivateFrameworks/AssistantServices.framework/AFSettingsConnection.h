/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class DKConnection;

@interface AFSettingsConnection : NSObject  {
    DKConnection *_connection;
}


- (void)killDaemon;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)saveAccount:(id)arg1 setActive:(BOOL)arg2;
- (void)setDictationEnabled:(BOOL)arg1;
- (void)barrier;
- (void)setAssistantEnabled:(BOOL)arg1;
- (void)_sendMessage:(id)arg1 withReplySync:(id)arg2;
- (void)_sendMessage:(id)arg1 withReply:(id)arg2;
- (void)_clearConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchSupportedLanguageCodes:(id)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (id)accounts;
- (id)_connection;

@end