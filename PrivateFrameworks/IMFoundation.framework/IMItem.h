/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSDate, NSDictionary, NSString;

@interface IMItem : NSObject <IMRemoteObjectCoding, NSCoding, NSCopying> {
    NSString *_account;
    NSString *_accountID;
    id _context;
    NSString *_countryCode;
    NSString *_guid;
    NSString *_handle;
    long long _messageID;
    NSString *_roomName;
    NSDictionary *_senderInfo;
    NSString *_service;
    NSDate *_time;
    long long _type;
    NSString *_unformattedID;
}

@property(retain) NSString * account;
@property(retain) NSString * accountID;
@property(retain) id context;
@property(retain) NSString * countryCode;
@property(retain) NSString * guid;
@property(retain) NSString * handle;
@property(readonly) BOOL isFromMe;
@property long long messageID;
@property(retain) NSString * roomName;
@property(retain) NSString * sender;
@property(retain) NSDictionary * senderInfo;
@property(retain) NSString * service;
@property(retain) NSDate * time;
@property long long type;
@property(retain) NSString * unformattedID;

+ (Class)classForIMItemType:(long long)arg1;

- (BOOL)_hasMessageChatItem;
- (id)_newChatItems;
- (id)_otherHandle;
- (id)_senderHandle;
- (id)_service;
- (id)_serviceHandle;
- (void)_setMessageID:(long long)arg1;
- (void)_updateContextWithSenderHandle:(id)arg1 otherHandle:(id)arg2;
- (id)account;
- (id)accountID;
- (id)context;
- (id)copyDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (id)guid;
- (id)handle;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11 type:(long long)arg12;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFromMe;
- (id)message;
- (long long)messageID;
- (id)roomName;
- (id)sender;
- (id)senderInfo;
- (id)service;
- (void)setAccount:(id)arg1;
- (void)setAccountID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSenderInfo:(id)arg1;
- (void)setService:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUnformattedID:(id)arg1;
- (id)time;
- (long long)type;
- (id)unformattedID;

@end
