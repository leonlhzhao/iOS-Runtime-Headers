/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSIndexSet, NSString;

@interface _SSVPlayActivityEndpointRevisionInformation : NSObject <NSCopying, NSSecureCoding> {
    NSIndexSet *_additionalPendingRevisionsIndexSet;
    unsigned long long _currentRevision;
    NSString *_revisionVersionToken;
}

@property(copy) NSIndexSet * additionalPendingRevisionsIndexSet;
@property unsigned long long currentRevision;
@property(copy) NSString * revisionVersionToken;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalPendingRevisionsIndexSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentRevision;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)revisionVersionToken;
- (void)setAdditionalPendingRevisionsIndexSet:(id)arg1;
- (void)setCurrentRevision:(unsigned long long)arg1;
- (void)setRevisionVersionToken:(id)arg1;

@end
