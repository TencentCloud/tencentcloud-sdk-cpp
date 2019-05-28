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

#ifndef TENCENTCLOUD_TBP_V20190311_TBPCLIENT_H_
#define TENCENTCLOUD_TBP_V20190311_TBPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tbp/v20190311/model/PostAudioRequest.h>
#include <tencentcloud/tbp/v20190311/model/PostAudioResponse.h>
#include <tencentcloud/tbp/v20190311/model/PostTextRequest.h>
#include <tencentcloud/tbp/v20190311/model/PostTextResponse.h>
#include <tencentcloud/tbp/v20190311/model/ResetRequest.h>
#include <tencentcloud/tbp/v20190311/model/ResetResponse.h>


namespace TencentCloud
{
    namespace Tbp
    {
        namespace V20190311
        {
            class TbpClient : public AbstractClient
            {
            public:
                TbpClient(const Credential &credential, const std::string &region);
                TbpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::PostAudioResponse> PostAudioOutcome;
                typedef std::future<PostAudioOutcome> PostAudioOutcomeCallable;
                typedef std::function<void(const TbpClient*, const Model::PostAudioRequest&, PostAudioOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PostAudioAsyncHandler;
                typedef Outcome<Error, Model::PostTextResponse> PostTextOutcome;
                typedef std::future<PostTextOutcome> PostTextOutcomeCallable;
                typedef std::function<void(const TbpClient*, const Model::PostTextRequest&, PostTextOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PostTextAsyncHandler;
                typedef Outcome<Error, Model::ResetResponse> ResetOutcome;
                typedef std::future<ResetOutcome> ResetOutcomeCallable;
                typedef std::function<void(const TbpClient*, const Model::ResetRequest&, ResetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAsyncHandler;



                /**
                 *机器人会话接口，接收音频信息，传递给后台机器人
                 * @param req PostAudioRequest
                 * @return PostAudioOutcome
                 */
                PostAudioOutcome PostAudio(const Model::PostAudioRequest &request);
                void PostAudioAsync(const Model::PostAudioRequest& request, const PostAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PostAudioOutcomeCallable PostAudioCallable(const Model::PostAudioRequest& request);

                /**
                 *机器人会话接口，接收文本信息，传递给后台机器人
                 * @param req PostTextRequest
                 * @return PostTextOutcome
                 */
                PostTextOutcome PostText(const Model::PostTextRequest &request);
                void PostTextAsync(const Model::PostTextRequest& request, const PostTextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PostTextOutcomeCallable PostTextCallable(const Model::PostTextRequest& request);

                /**
                 *对当前机器人的会话状态进行复位
                 * @param req ResetRequest
                 * @return ResetOutcome
                 */
                ResetOutcome Reset(const Model::ResetRequest &request);
                void ResetAsync(const Model::ResetRequest& request, const ResetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetOutcomeCallable ResetCallable(const Model::ResetRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TBP_V20190311_TBPCLIENT_H_
