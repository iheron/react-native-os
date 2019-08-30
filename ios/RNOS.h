//
//  RNOS.h
//  RNOS
//
//  Created by Andy Prock on 11/3/16.
//  Copyright © 2016 Peel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SystemConfiguration/SCNetworkReachability.h>
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif
#import <React/RCTBridge.h>
#import <React/RCTEventDispatcher.h>

@interface RNOS : NSObject<RCTBridgeModule, RCTInvalidating>

@end
