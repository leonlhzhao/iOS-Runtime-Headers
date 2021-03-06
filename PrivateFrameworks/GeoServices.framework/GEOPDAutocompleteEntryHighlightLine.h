/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDAutocompleteEntryHighlightLine : PBCodable <NSCopying> {
    NSString *_line;
    NSMutableArray *_spans;
    PBUnknownFields *_unknownFields;
}

@property(readonly) BOOL hasLine;
@property(retain) NSString * line;
@property(retain) NSMutableArray * spans;
@property(readonly) PBUnknownFields * unknownFields;

- (void)addSpan:(id)arg1;
- (void)clearSpans;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLine;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)line;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setLine:(id)arg1;
- (void)setSpans:(id)arg1;
- (id)spanAtIndex:(unsigned int)arg1;
- (id)spans;
- (unsigned int)spansCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
