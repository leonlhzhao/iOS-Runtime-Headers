/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@class CDSession, NSString;

@interface CDDevice : NSObject {
    unsigned int _identifier;
    NSString *_modelIdentifier;
    CDSession *_session;
    int remoteDataNotificationToken;
}

@property(readonly) unsigned int identifier;
@property(readonly) NSString * modelIdentifier;
@property(readonly) CDSession * session;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (unsigned int)identifier;
- (id)initWithSession:(id)arg1 identifier:(unsigned int)arg2 modelIdentifier:(id)arg3 error:(id*)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDevice:(id)arg1;
- (id)modelIdentifier;
- (id)readLogDataWithError:(id*)arg1;
- (id)readSystemDataWithError:(id*)arg1;
- (BOOL)requestLogDataWithError:(id*)arg1;
- (BOOL)requestSystemDataWithError:(id*)arg1;
- (id)session;
- (BOOL)setLogDataHandlerWithError:(id*)arg1 handler:(id)arg2;
- (BOOL)setSystemDataHandlerWithError:(id*)arg1 handler:(id)arg2;

@end
