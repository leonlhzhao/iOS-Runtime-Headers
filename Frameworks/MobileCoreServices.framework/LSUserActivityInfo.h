/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSData, NSDate, NSDictionary, NSError, NSString, NSURL, NSUUID;

@interface LSUserActivityInfo : NSObject <NSCopying, NSSecureCoding> {
    NSDate *_activityDate;
    NSData *_activityPayload;
    unsigned long long _changeCount;
    NSError *_error;
    NSDictionary *_options;
    NSData *_streamsData;
    NSString *_title;
    unsigned long long _type;
    NSString *_typeIdentifier;
    NSUUID *_uuid;
    NSURL *_webpageURL;
}

@property(copy) NSDate * activityDate;
@property(copy) NSData * activityPayload;
@property unsigned long long changeCount;
@property(copy) NSError * error;
@property(copy) NSDictionary * options;
@property(copy) NSData * streamsData;
@property(copy) NSString * title;
@property unsigned long long type;
@property(copy) NSString * typeIdentifier;
@property(copy) NSUUID * uuid;
@property(copy) NSURL * webpageURL;

+ (bool)supportsSecureCoding;

- (id)activityDate;
- (id)activityPayload;
- (unsigned long long)changeCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)options;
- (void)setActivityDate:(id)arg1;
- (void)setActivityPayload:(id)arg1;
- (void)setChangeCount:(unsigned long long)arg1;
- (void)setError:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setStreamsData:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (id)statusString;
- (id)streamsData;
- (id)title;
- (unsigned long long)type;
- (id)typeIdentifier;
- (id)uuid;
- (id)webpageURL;

@end