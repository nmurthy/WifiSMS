/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSNumber, NSDate, ASEvent;



@interface ASRecurrence : ASItem <NSCoding>
{
    NSNumber *_type;
    NSNumber *_interval;
    NSNumber *_dayOfWeek;
    NSNumber *_dayOfMonth;
    NSNumber *_weekOfMonth;
    NSNumber *_monthOfYear;
    NSDate *_until;
    NSNumber *_occurrences;
    ASEvent *_parentEvent;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;

- (void)setParentEvent:(id)arg1;
- (id)_untilDateForCalFramework;
- (id)_transformedUntilDateForActiveSync:(id)arg1;
- (id)asParseRules;
- (BOOL)_requiresParentEvent;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void*)_createRecurrence;
- (void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void*)arg2 treatNullsAsDeletes:(BOOL)arg3;
- (BOOL)_loadAttributesFromCalRecurrence:(void*)arg1 parentStartDate:(id)arg2 parentItem:(id)arg3;
- (id)initWithCalRecurrence:(void*)arg1 parentEvent:(id)arg2;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (void)setUntilString:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)interval;
- (void)setInterval:(id)arg1;
- (id)dayOfWeek;
- (void)setDayOfWeek:(id)arg1;
- (id)dayOfMonth;
- (void)setDayOfMonth:(id)arg1;
- (id)weekOfMonth;
- (void)setWeekOfMonth:(id)arg1;
- (id)monthOfYear;
- (void)setMonthOfYear:(id)arg1;
- (id)until;
- (void)setUntil:(id)arg1;
- (id)occurrences;
- (void)setOccurrences:(id)arg1;

@end
