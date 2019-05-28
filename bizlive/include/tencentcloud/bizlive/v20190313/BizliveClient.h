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

#ifndef TENCENTCLOUD_BIZLIVE_V20190313_BIZLIVECLIENT_H_
#define TENCENTCLOUD_BIZLIVE_V20190313_BIZLIVECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bizlive/v20190313/model/DescribeStreamPlayInfoListRequest.h>
#include <tencentcloud/bizlive/v20190313/model/DescribeStreamPlayInfoListResponse.h>
#include <tencentcloud/bizlive/v20190313/model/ForbidLiveStreamRequest.h>
#include <tencentcloud/bizlive/v20190313/model/ForbidLiveStreamResponse.h>
#include <tencentcloud/bizlive/v20190313/model/RegisterIMRequest.h>
#include <tencentcloud/bizlive/v20190313/model/RegisterIMResponse.h>


namespace TencentCloud
{
    namespace Bizlive
    {
        namespace V20190313
        {
            class BizliveClient : public AbstractClient
            {
            public:
                BizliveClient(const Credential &credential, const std::string &region);
                BizliveClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::DescribeStreamPlayInfoListResponse> DescribeStreamPlayInfoListOutcome;
                typedef std::future<DescribeStreamPlayInfoListOutcome> DescribeStreamPlayInfoListOutcomeCallable;
                typedef std::function<void(const BizliveClient*, const Model::DescribeStreamPlayInfoListRequest&, DescribeStreamPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPlayInfoListAsyncHandler;
                typedef Outcome<Error, Model::ForbidLiveStreamResponse> ForbidLiveStreamOutcome;
                typedef std::future<ForbidLiveStreamOutcome> ForbidLiveStreamOutcomeCallable;
                typedef std::function<void(const BizliveClient*, const Model::ForbidLiveStreamRequest&, ForbidLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForbidLiveStreamAsyncHandler;
                typedef Outcome<Error, Model::RegisterIMResponse> RegisterIMOutcome;
                typedef std::future<RegisterIMOutcome> RegisterIMOutcomeCallable;
                typedef std::function<void(const BizliveClient*, const Model::RegisterIMRequest&, RegisterIMOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterIMAsyncHandler;



                /**
                 *查询播放数据，支持按流名称查询详细播放数据，也可按播放域名查询详细总数据。
                 * @param req DescribeStreamPlayInfoListRequest
                 * @return DescribeStreamPlayInfoListOutcome
                 */
                DescribeStreamPlayInfoListOutcome DescribeStreamPlayInfoList(const Model::DescribeStreamPlayInfoListRequest &request);
                void DescribeStreamPlayInfoListAsync(const Model::DescribeStreamPlayInfoListRequest& request, const DescribeStreamPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPlayInfoListOutcomeCallable DescribeStreamPlayInfoListCallable(const Model::DescribeStreamPlayInfoListRequest& request);

                /**
                 *禁止某条流的推送，可以预设某个时刻将流恢复。
                 * @param req ForbidLiveStreamRequest
                 * @return ForbidLiveStreamOutcome
                 */
                ForbidLiveStreamOutcome ForbidLiveStream(const Model::ForbidLiveStreamRequest &request);
                void ForbidLiveStreamAsync(const Model::ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForbidLiveStreamOutcomeCallable ForbidLiveStreamCallable(const Model::ForbidLiveStreamRequest& request);

                /**
                 *注册聊天室
                 * @param req RegisterIMRequest
                 * @return RegisterIMOutcome
                 */
                RegisterIMOutcome RegisterIM(const Model::RegisterIMRequest &request);
                void RegisterIMAsync(const Model::RegisterIMRequest& request, const RegisterIMAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterIMOutcomeCallable RegisterIMCallable(const Model::RegisterIMRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BIZLIVE_V20190313_BIZLIVECLIENT_H_
