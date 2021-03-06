#import <Foundation/Foundation.h>

@class WordPressComApi;

@interface ReaderTopicServiceRemote : NSObject

- (id)initWithRemoteApi:(WordPressComApi *)api;

/**
 Fetches the topics for the reader's menu from the remote service.
 
 @param success block called on a successful fetch. An `NSArray` of `NSDictionary` 
 objects describing topics is passed as an argument.
 @param failure block called if there is any error. `error` can be any underlying network error.
 */
- (void)fetchReaderMenuWithSuccess:(void (^)(NSArray *topics))success
                         failure:(void (^)(NSError *error))failure;

@end
