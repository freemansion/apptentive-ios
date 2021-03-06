//
//  ATWebClient+MessageCenter.h
//  ApptentiveConnect
//
//  Created by Andrew Wooster on 10/2/12.
//  Copyright (c) 2012 Apptentive, Inc. All rights reserved.
//

#import "ATWebClient.h"

#import "ATConversation.h"
#import "ATDeviceInfo.h"
#import "ATAbstractMessage.h"
#import "ATPersonInfo.h"

@interface ATWebClient (MessageCenter)
- (ATAPIRequest *)requestForCreatingConversation:(ATConversation *)conversation;
- (ATAPIRequest *)requestForUpdatingConversation:(ATConversation *)conversation;

- (ATAPIRequest *)requestForUpdatingDevice:(ATDeviceInfo *)deviceInfo;
- (ATAPIRequest *)requestForUpdatingPerson:(ATPersonInfo *)personInfo;
- (ATAPIRequest *)requestForPostingMessage:(ATAbstractMessage *)message;
- (ATAPIRequest *)requestForRetrievingMessagesSinceMessage:(ATAbstractMessage *)message;
@end

void ATWebClient_MessageCenter_Bootstrap();
