/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSData;



@interface DAConvertCRtoCRLFStream : NSInputStream 
{
    NSData *_data;
    NSUInteger _readOffset;
    BOOL _lastByteCopiedWasCR;
    BOOL _openEventSent;
    NSUInteger _streamStatus;
    id _delegate;
    struct __CFRunLoopSource { } *_rls;
    int (*_clientCallback)();
    struct { 
        NSInteger version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    } _clientContext;
}


- (void)_streamEventTrigger;
- (void)_scheduleCallback;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(int (*)())arg2 context:(struct { NSInteger x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)open;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (NSUInteger)streamStatus;
- (NSInteger)read:(char *)arg1 maxLength:(NSUInteger)arg2;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)arg1 length:(NSUInteger*)arg2;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end
