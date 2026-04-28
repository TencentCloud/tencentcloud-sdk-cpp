/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_ANTIDDOSCLIENT_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_ANTIDDOSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/antiddos/v20250903/model/DescribeDDoSBlockRecordsRequest.h>
#include <tencentcloud/antiddos/v20250903/model/DescribeDDoSBlockRecordsResponse.h>
#include <tencentcloud/antiddos/v20250903/model/UnblockResourcesRequest.h>
#include <tencentcloud/antiddos/v20250903/model/UnblockResourcesResponse.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            class AntiddosClient : public AbstractClient
            {
            public:
                AntiddosClient(const Credential &credential, const std::string &region);
                AntiddosClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeDDoSBlockRecordsResponse> DescribeDDoSBlockRecordsOutcome;
                typedef std::future<DescribeDDoSBlockRecordsOutcome> DescribeDDoSBlockRecordsOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeDDoSBlockRecordsRequest&, DescribeDDoSBlockRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSBlockRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::UnblockResourcesResponse> UnblockResourcesOutcome;
                typedef std::future<UnblockResourcesOutcome> UnblockResourcesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::UnblockResourcesRequest&, UnblockResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnblockResourcesAsyncHandler;



                /**
                 *查询封堵解封记录和解封配额信息。
                 * @param req DescribeDDoSBlockRecordsRequest
                 * @return DescribeDDoSBlockRecordsOutcome
                 */
                DescribeDDoSBlockRecordsOutcome DescribeDDoSBlockRecords(const Model::DescribeDDoSBlockRecordsRequest &request);
                void DescribeDDoSBlockRecordsAsync(const Model::DescribeDDoSBlockRecordsRequest& request, const DescribeDDoSBlockRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSBlockRecordsOutcomeCallable DescribeDDoSBlockRecordsCallable(const Model::DescribeDDoSBlockRecordsRequest& request);

                /**
                 *申请解封资源，可通过 DescribeDDoSBlockRecords 接口获取资源的封堵解封状态。
                 * @param req UnblockResourcesRequest
                 * @return UnblockResourcesOutcome
                 */
                UnblockResourcesOutcome UnblockResources(const Model::UnblockResourcesRequest &request);
                void UnblockResourcesAsync(const Model::UnblockResourcesRequest& request, const UnblockResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnblockResourcesOutcomeCallable UnblockResourcesCallable(const Model::UnblockResourcesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_ANTIDDOSCLIENT_H_
