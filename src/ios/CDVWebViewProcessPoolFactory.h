#ifndef CDV_WEB_PROCESS_POOL_FACTORY
#define CDV_WEB_PROCESS_POOL_FACTORY

#import <WebKit/WebKit.h>

@interface CDVWebViewProcessPoolFactory : NSObject
@property (nonatomic, retain) WKProcessPool* sharedPool;

+(instancetype) sharedFactory;
-(WKProcessPool*) sharedProcessPool;
@end

#endif

