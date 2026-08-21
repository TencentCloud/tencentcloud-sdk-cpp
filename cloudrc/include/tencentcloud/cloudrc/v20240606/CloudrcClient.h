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

#ifndef TENCENTCLOUD_CLOUDRC_V20240606_CLOUDRCCLIENT_H_
#define TENCENTCLOUD_CLOUDRC_V20240606_CLOUDRCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cloudrc/v20240606/model/DescribeResourceRequest.h>
#include <tencentcloud/cloudrc/v20240606/model/DescribeResourceResponse.h>
#include <tencentcloud/cloudrc/v20240606/model/SearchResourcesRequest.h>
#include <tencentcloud/cloudrc/v20240606/model/SearchResourcesResponse.h>


namespace TencentCloud
{
    namespace Cloudrc
    {
        namespace V20240606
        {
            class CloudrcClient : public AbstractClient
            {
            public:
                CloudrcClient(const Credential &credential, const std::string &region);
                CloudrcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeResourceResponse> DescribeResourceOutcome;
                typedef std::future<DescribeResourceOutcome> DescribeResourceOutcomeCallable;
                typedef std::function<void(const CloudrcClient*, const Model::DescribeResourceRequest&, DescribeResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchResourcesResponse> SearchResourcesOutcome;
                typedef std::future<SearchResourcesOutcome> SearchResourcesOutcomeCallable;
                typedef std::function<void(const CloudrcClient*, const Model::SearchResourcesRequest&, SearchResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchResourcesAsyncHandler;



                /**
                 *查询资源详情
                 * @param req DescribeResourceRequest
                 * @return DescribeResourceOutcome
                 */
                DescribeResourceOutcome DescribeResource(const Model::DescribeResourceRequest &request);
                void DescribeResourceAsync(const Model::DescribeResourceRequest& request, const DescribeResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceOutcomeCallable DescribeResourceCallable(const Model::DescribeResourceRequest& request);

                /**
                 *搜索资源
                 * @param req SearchResourcesRequest
                 * @return SearchResourcesOutcome
                 */
                SearchResourcesOutcome SearchResources(const Model::SearchResourcesRequest &request);
                void SearchResourcesAsync(const Model::SearchResourcesRequest& request, const SearchResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchResourcesOutcomeCallable SearchResourcesCallable(const Model::SearchResourcesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDRC_V20240606_CLOUDRCCLIENT_H_
