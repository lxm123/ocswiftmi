//
//  DataManager.h
//  swiftmi_oc
//
//  Created by wings on 7/31/15.
//  Copyright (c) 2015 swing. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, RequestMethod) {
    RequestMethodJSONGET    = 1,
    RequestMethodHTTPPOST   = 2,
    RequestMethodHTTPGET    = 3,
    RequestMethodHTTPGETPC  = 4
};


@interface DataManager : NSObject

+ (instancetype)manager;

@property (nonatomic, assign) BOOL preferHttps;

- (NSURLSessionDataTask *)getTopicList:(int)maxId count:(int)count
                                         success:(void (^)(NSURLSessionDataTask *task, id responseObject))success
                               failure:(void (^)(NSError *error))failure;


@end
