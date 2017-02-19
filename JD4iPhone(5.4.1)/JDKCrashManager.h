//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDKPLCrashReporter, NSFileManager, NSMutableArray, NSString;

@interface JDKCrashManager : NSObject
{
    NSFileManager *_fileManager;
    NSString *_cacheDirectory;
    NSString *_attachmentInfoFilePath;
    NSMutableArray *_crashFiles;
    _Bool _enableMachExceptionHandler;
    _Bool _enableOnDeviceSymbolication;
    JDKPLCrashReporter *_plCrashReporter;
}

@property(nonatomic, getter=isOnDeviceSymbolicationEnabled) _Bool enableOnDeviceSymbolication; // @synthesize enableOnDeviceSymbolication=_enableOnDeviceSymbolication;
@property(nonatomic, getter=isMachExceptionHandlerEnabled) _Bool enableMachExceptionHandler; // @synthesize enableMachExceptionHandler=_enableMachExceptionHandler;
@property(retain, nonatomic) JDKPLCrashReporter *plCrashReporter; // @synthesize plCrashReporter=_plCrashReporter;
- (void).cxx_destruct;
- (void)handleCrashReport;
- (void)deleteAttachmentInfo;
- (id)attachmentInfo;
- (_Bool)isDebuggerAttached;
- (void)deleteCrashFilePath:(id)arg1;
- (id)crashModel;
- (_Bool)hasPendingCrashReport;
- (void)saveAttachmentInfo:(id)arg1;
- (void)setCrashCallbacks:(struct JDKCrashManagerCallbacks *)arg1;
- (void)startManager;
- (id)init;

@end
