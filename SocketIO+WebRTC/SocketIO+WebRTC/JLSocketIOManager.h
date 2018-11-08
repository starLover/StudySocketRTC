//
//  JLSocketIOManager.h
//  SocketIO+WebRTC
//
//  Created by fairytale on 2018/10/26.
//  Copyright © 2018年 JLY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JLSignalingChannel.h"

@interface JLSocketIOManager : NSObject <JLSignalingChannel>

+ (instancetype)sharedManager;

- (void)connect;

- (void)sendMessage:(JLSignalingMessage *)message;

@end
