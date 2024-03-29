//
//  PFAppleAuthenticationProvider.h
//  ParseUIDemo
//
//  Created by Darren Black on 20/12/2019.
//  Copyright © 2019 Parse Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<Parse/PFUserAuthenticationDelegate.h>)
#import <Parse/PFUserAuthenticationDelegate.h>
#else
#import "PFUserAuthenticationDelegate.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface PFAppleAuthenticationProvider : NSObject <PFUserAuthenticationDelegate>

@end

NS_ASSUME_NONNULL_END
