/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKServerChangeToken;

@interface CKDFetchChangedRecordZonesOperation : CKDDatabaseOperation {
    CKServerChangeToken *_previousServerChangeToken;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordZoneWithIDChangedBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordZoneWithIDWasDeletedBlock;

    unsigned int _resultsLimit;
    CKServerChangeToken *_serverChangeToken;
    int _status;
}

@property(retain) CKServerChangeToken * previousServerChangeToken;
@property(copy) id recordZoneWithIDChangedBlock;
@property(copy) id recordZoneWithIDWasDeletedBlock;
@property unsigned int resultsLimit;
@property(retain) CKServerChangeToken * serverChangeToken;
@property int status;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchChangedRecordZonesRequestCompleted:(id)arg1;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (Class)operationResultClass;
- (id)previousServerChangeToken;
- (id)recordZoneWithIDChangedBlock;
- (id)recordZoneWithIDWasDeletedBlock;
- (unsigned int)resultsLimit;
- (id)serverChangeToken;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordZoneWithIDChangedBlock:(id)arg1;
- (void)setRecordZoneWithIDWasDeletedBlock:(id)arg1;
- (void)setResultsLimit:(unsigned int)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end