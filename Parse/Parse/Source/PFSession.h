/**
 * Copyright (c) 2015-present, Parse, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#if __has_include(<Bolts/BFTask.h>)
#import <Bolts/BFTask.h>
#else
#import "BFTask.h"
#endif

#import "PFObject.h"
#import "PFSubclassing.h"

NS_ASSUME_NONNULL_BEGIN

@class PFSession;

typedef void(^PFSessionResultBlock)(PFSession *_Nullable session, NSError *_Nullable error);

/**
 `PFSession` is a local representation of a session.
 This class is a subclass of a `PFObject`,
 and retains the same functionality as any other subclass of `PFObject`.
 */
@interface PFSession : PFObject<PFSubclassing>

/**
 The session token string for this session.
 */
@property (nullable, nonatomic, copy, readonly) NSString *sessionToken;

/**
 *Asynchronously* fetches a `PFSession` object related to the current user.

 @return A task that is `completed` with an instance of `PFSession` class or is `faulted` if the operation fails.
 */
+ (BFTask<PFSession *> *)getCurrentSessionInBackground;

/**
 *Asynchronously* fetches a `PFSession` object related to the current user.

 @param block The block to execute when the operation completes.
 It should have the following argument signature: `^(PFSession *session, NSError *error)`.
 */
+ (void)getCurrentSessionInBackgroundWithBlock:(nullable PFSessionResultBlock)block;

@end

NS_ASSUME_NONNULL_END
