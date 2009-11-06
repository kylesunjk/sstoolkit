//
//  TWURLConnectionQueueRequest.h
//  TWToolkit
//
//  Created by Sam Soffes on 11/4/09.
//  Copyright 2009 Tasteful Works, Inc. All rights reserved.
//

@class TWURLRequest;
@class TWURLConnection;
@protocol TWURLConnectionDelegate;

@interface TWURLConnectionQueueRequest : NSObject {

	TWURLRequest *request;
	NSUInteger priority;
	id<TWURLConnectionDelegate> delegate;
	BOOL loading;
	NSDate *timestamp;
	TWURLConnection *connection;
}

@property (nonatomic, retain) TWURLRequest *request;
@property (nonatomic, assign) NSUInteger priority;
@property (nonatomic, assign) id<TWURLConnectionDelegate> delegate;
@property (nonatomic, assign, getter=isLoading) BOOL loading;
@property (nonatomic, assign, readonly) NSDate *timestamp;
@property (nonatomic, assign) TWURLConnection *connection;

- (id)initWithRequest:(TWURLRequest *)aRequest delegate:(id<TWURLConnectionDelegate>)aDelegate priority:(NSUInteger)aPriority;

- (NSDate *)timestamp;

@end
