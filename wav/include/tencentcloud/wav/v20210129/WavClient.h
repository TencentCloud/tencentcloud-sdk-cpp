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

#ifndef TENCENTCLOUD_WAV_V20210129_WAVCLIENT_H_
#define TENCENTCLOUD_WAV_V20210129_WAVCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/wav/v20210129/model/QueryActivityLiveCodeListRequest.h>
#include <tencentcloud/wav/v20210129/model/QueryActivityLiveCodeListResponse.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            class WavClient : public AbstractClient
            {
            public:
                WavClient(const Credential &credential, const std::string &region);
                WavClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::QueryActivityLiveCodeListResponse> QueryActivityLiveCodeListOutcome;
                typedef std::future<QueryActivityLiveCodeListOutcome> QueryActivityLiveCodeListOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::QueryActivityLiveCodeListRequest&, QueryActivityLiveCodeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryActivityLiveCodeListAsyncHandler;



                /**
                 *根据游标拉取活动活码列表信息
                 * @param req QueryActivityLiveCodeListRequest
                 * @return QueryActivityLiveCodeListOutcome
                 */
                QueryActivityLiveCodeListOutcome QueryActivityLiveCodeList(const Model::QueryActivityLiveCodeListRequest &request);
                void QueryActivityLiveCodeListAsync(const Model::QueryActivityLiveCodeListRequest& request, const QueryActivityLiveCodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryActivityLiveCodeListOutcomeCallable QueryActivityLiveCodeListCallable(const Model::QueryActivityLiveCodeListRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_WAVCLIENT_H_
