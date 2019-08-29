/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
#define TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/trtc/v20190722/model/DissolveRoomRequest.h>
#include <tencentcloud/trtc/v20190722/model/DissolveRoomResponse.h>
#include <tencentcloud/trtc/v20190722/model/KickOutUserRequest.h>
#include <tencentcloud/trtc/v20190722/model/KickOutUserResponse.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            class TrtcClient : public AbstractClient
            {
            public:
                TrtcClient(const Credential &credential, const std::string &region);
                TrtcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::DissolveRoomResponse> DissolveRoomOutcome;
                typedef std::future<DissolveRoomOutcome> DissolveRoomOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DissolveRoomRequest&, DissolveRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DissolveRoomAsyncHandler;
                typedef Outcome<Error, Model::KickOutUserResponse> KickOutUserOutcome;
                typedef std::future<KickOutUserOutcome> KickOutUserOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::KickOutUserRequest&, KickOutUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KickOutUserAsyncHandler;



                /**
                 *接口说明：把房间所有用户从房间踢出，解散房间。支持 TRTC SDK 6.6及以上版本，包括Android、iOS、Windows 和 macOS。
                 * @param req DissolveRoomRequest
                 * @return DissolveRoomOutcome
                 */
                DissolveRoomOutcome DissolveRoom(const Model::DissolveRoomRequest &request);
                void DissolveRoomAsync(const Model::DissolveRoomRequest& request, const DissolveRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DissolveRoomOutcomeCallable DissolveRoomCallable(const Model::DissolveRoomRequest& request);

                /**
                 *接口说明：将用户从房间踢出。支持 TRTC SDK 6.6及以上版本，包括Android、iOS、Windows 和 macOS。
                 * @param req KickOutUserRequest
                 * @return KickOutUserOutcome
                 */
                KickOutUserOutcome KickOutUser(const Model::KickOutUserRequest &request);
                void KickOutUserAsync(const Model::KickOutUserRequest& request, const KickOutUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KickOutUserOutcomeCallable KickOutUserCallable(const Model::KickOutUserRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
