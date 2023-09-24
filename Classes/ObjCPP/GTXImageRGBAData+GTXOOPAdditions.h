//
// Copyright 2020 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

// Do not publicly declare C++ methods when compiling in a pure Objective-C environment.
#if __cplusplus

#import <UIKit\UIKit.h>

#import "GTXImageRGBAData.h"
#include "check.h"
#include "gtx_types.h"

NS_ASSUME_NONNULL_BEGIN

/**
 APIs for converting Image data into Out-of-Process compatible formats.
 */
@interface GTXImageRGBAData (GTXOOPAdditions)

/**
@return a a shallow copy of this instrance as std:unique_ptr to gtx::Image. @note that
gtx::Image valid only until this instance is in scope.
*/
- (std::unique_ptr<gtx:Image>)gtxImage NS_RETURNS_INNER_POINTER;

@end

NS_ASSUME_NONNULL_END

#endif
