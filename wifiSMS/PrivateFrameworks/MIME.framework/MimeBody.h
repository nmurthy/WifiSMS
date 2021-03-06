/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class MimePart;



@interface MimeBody : MessageBody 
{
    MimePart *_topLevelPart;
    NSUInteger _preferredTextEncoding;
    unsigned int _preferredAlternative : 16;
    unsigned int _numAlternatives : 16;
}

+ (void)initialize;
+ (id)versionString;
+ (id)copyNewMimeBoundary;

- (id)init;
- (void)dealloc;
- (id)topLevelPart;
- (void)setTopLevelPart:(id)arg1;
- (unsigned long)preferredTextEncoding;
- (void)setPreferredTextEncoding:(unsigned long)arg1;
- (id)mimeType;
- (id)mimeSubtype;
- (id)partWithNumber:(id)arg1;
- (void)decodeIfNecessary;
- (NSUInteger)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2;
- (id)attachments;
- (BOOL)isHTML;
- (BOOL)isRich;
- (id)contentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (NSUInteger)totalTextSize;
- (NSInteger)numberOfAlternatives;
- (void)setPreferredAlternative:(NSInteger)arg1;
- (NSInteger)preferredAlternative;
- (id)preferredBodyPart;
- (id)textHtmlPart;

@end
