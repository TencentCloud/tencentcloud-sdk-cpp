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

#ifndef TENCENTCLOUD_ANICLOUD_V20220923_ANICLOUDCLIENT_H_
#define TENCENTCLOUD_ANICLOUD_V20220923_ANICLOUDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/anicloud/v20220923/model/CheckAppidExistRequest.h>
#include <tencentcloud/anicloud/v20220923/model/CheckAppidExistResponse.h>
#include <tencentcloud/anicloud/v20220923/model/QueryResourceRequest.h>
#include <tencentcloud/anicloud/v20220923/model/QueryResourceResponse.h>
#include <tencentcloud/anicloud/v20220923/model/QueryResourceInfoRequest.h>
#include <tencentcloud/anicloud/v20220923/model/QueryResourceInfoResponse.h>


namespace TencentCloud
{
    namespace Anicloud
    {
        namespace V20220923
        {
            class AnicloudClient : public AbstractClient
            {
            public:
                AnicloudClient(const Credential &credential, const std::string &region);
                AnicloudClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CheckAppidExistResponse> CheckAppidExistOutcome;
                typedef std::future<CheckAppidExistOutcome> CheckAppidExistOutcomeCallable;
                typedef std::function<void(const AnicloudClient*, const Model::CheckAppidExistRequest&, CheckAppidExistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAppidExistAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryResourceResponse> QueryResourceOutcome;
                typedef std::future<QueryResourceOutcome> QueryResourceOutcomeCallable;
                typedef std::function<void(const AnicloudClient*, const Model::QueryResourceRequest&, QueryResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryResourceInfoResponse> QueryResourceInfoOutcome;
                typedef std::future<QueryResourceInfoOutcome> QueryResourceInfoOutcomeCallable;
                typedef std::function<void(const AnicloudClient*, const Model::QueryResourceInfoRequest&, QueryResourceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryResourceInfoAsyncHandler;



                /**
                 *查看appid是否存在
                 * @param req CheckAppidExistRequest
                 * @return CheckAppidExistOutcome
                 */
                CheckAppidExistOutcome CheckAppidExist(const Model::CheckAppidExistRequest &request);
                void CheckAppidExistAsync(const Model::CheckAppidExistRequest& request, const CheckAppidExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAppidExistOutcomeCallable CheckAppidExistCallable(const Model::CheckAppidExistRequest& request);

                /**
                 *查询购买资源
                 * @param req QueryResourceRequest
                 * @return QueryResourceOutcome
                 */
                QueryResourceOutcome QueryResource(const Model::QueryResourceRequest &request);
                void QueryResourceAsync(const Model::QueryResourceRequest& request, const QueryResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryResourceOutcomeCallable QueryResourceCallable(const Model::QueryResourceRequest& request);

                /**
                 *查询资源信息
                 * @param req QueryResourceInfoRequest
                 * @return QueryResourceInfoOutcome
                 */
                QueryResourceInfoOutcome QueryResourceInfo(const Model::QueryResourceInfoRequest &request);
                void QueryResourceInfoAsync(const Model::QueryResourceInfoRequest& request, const QueryResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryResourceInfoOutcomeCallable QueryResourceInfoCallable(const Model::QueryResourceInfoRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ANICLOUD_V20220923_ANICLOUDCLIENT_H_
