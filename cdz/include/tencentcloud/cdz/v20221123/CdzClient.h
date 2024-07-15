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

#ifndef TENCENTCLOUD_CDZ_V20221123_CDZCLIENT_H_
#define TENCENTCLOUD_CDZ_V20221123_CDZCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdz/v20221123/model/DescribeCloudDedicatedZoneHostsRequest.h>
#include <tencentcloud/cdz/v20221123/model/DescribeCloudDedicatedZoneHostsResponse.h>
#include <tencentcloud/cdz/v20221123/model/DescribeCloudDedicatedZoneResourceSummaryRequest.h>
#include <tencentcloud/cdz/v20221123/model/DescribeCloudDedicatedZoneResourceSummaryResponse.h>


namespace TencentCloud
{
    namespace Cdz
    {
        namespace V20221123
        {
            class CdzClient : public AbstractClient
            {
            public:
                CdzClient(const Credential &credential, const std::string &region);
                CdzClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeCloudDedicatedZoneHostsResponse> DescribeCloudDedicatedZoneHostsOutcome;
                typedef std::future<DescribeCloudDedicatedZoneHostsOutcome> DescribeCloudDedicatedZoneHostsOutcomeCallable;
                typedef std::function<void(const CdzClient*, const Model::DescribeCloudDedicatedZoneHostsRequest&, DescribeCloudDedicatedZoneHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudDedicatedZoneHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudDedicatedZoneResourceSummaryResponse> DescribeCloudDedicatedZoneResourceSummaryOutcome;
                typedef std::future<DescribeCloudDedicatedZoneResourceSummaryOutcome> DescribeCloudDedicatedZoneResourceSummaryOutcomeCallable;
                typedef std::function<void(const CdzClient*, const Model::DescribeCloudDedicatedZoneResourceSummaryRequest&, DescribeCloudDedicatedZoneResourceSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudDedicatedZoneResourceSummaryAsyncHandler;



                /**
                 *查询可用区的Host和Host上部署的实例
                 * @param req DescribeCloudDedicatedZoneHostsRequest
                 * @return DescribeCloudDedicatedZoneHostsOutcome
                 */
                DescribeCloudDedicatedZoneHostsOutcome DescribeCloudDedicatedZoneHosts(const Model::DescribeCloudDedicatedZoneHostsRequest &request);
                void DescribeCloudDedicatedZoneHostsAsync(const Model::DescribeCloudDedicatedZoneHostsRequest& request, const DescribeCloudDedicatedZoneHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudDedicatedZoneHostsOutcomeCallable DescribeCloudDedicatedZoneHostsCallable(const Model::DescribeCloudDedicatedZoneHostsRequest& request);

                /**
                 *查询专属可用区各个垂直产品的资源使用情况
                 * @param req DescribeCloudDedicatedZoneResourceSummaryRequest
                 * @return DescribeCloudDedicatedZoneResourceSummaryOutcome
                 */
                DescribeCloudDedicatedZoneResourceSummaryOutcome DescribeCloudDedicatedZoneResourceSummary(const Model::DescribeCloudDedicatedZoneResourceSummaryRequest &request);
                void DescribeCloudDedicatedZoneResourceSummaryAsync(const Model::DescribeCloudDedicatedZoneResourceSummaryRequest& request, const DescribeCloudDedicatedZoneResourceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudDedicatedZoneResourceSummaryOutcomeCallable DescribeCloudDedicatedZoneResourceSummaryCallable(const Model::DescribeCloudDedicatedZoneResourceSummaryRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDZ_V20221123_CDZCLIENT_H_
