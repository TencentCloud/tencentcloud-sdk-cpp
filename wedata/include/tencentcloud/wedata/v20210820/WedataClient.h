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

#ifndef TENCENTCLOUD_WEDATA_V20210820_WEDATACLIENT_H_
#define TENCENTCLOUD_WEDATA_V20210820_WEDATACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeProjectResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRelatedInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeRelatedInstancesResponse.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstancesRequest.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstancesResponse.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            class WedataClient : public AbstractClient
            {
            public:
                WedataClient(const Credential &credential, const std::string &region);
                WedataClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeProjectResponse> DescribeProjectOutcome;
                typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeProjectRequest&, DescribeProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRelatedInstancesResponse> DescribeRelatedInstancesOutcome;
                typedef std::future<DescribeRelatedInstancesOutcome> DescribeRelatedInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeRelatedInstancesRequest&, DescribeRelatedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRelatedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInstancesResponse> DescribeTaskInstancesOutcome;
                typedef std::future<DescribeTaskInstancesOutcome> DescribeTaskInstancesOutcomeCallable;
                typedef std::function<void(const WedataClient*, const Model::DescribeTaskInstancesRequest&, DescribeTaskInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInstancesAsyncHandler;



                /**
                 *获取项目信息
                 * @param req DescribeProjectRequest
                 * @return DescribeProjectOutcome
                 */
                DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest &request);
                void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request);

                /**
                 *查询任务实例的关联实例列表
                 * @param req DescribeRelatedInstancesRequest
                 * @return DescribeRelatedInstancesOutcome
                 */
                DescribeRelatedInstancesOutcome DescribeRelatedInstances(const Model::DescribeRelatedInstancesRequest &request);
                void DescribeRelatedInstancesAsync(const Model::DescribeRelatedInstancesRequest& request, const DescribeRelatedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRelatedInstancesOutcomeCallable DescribeRelatedInstancesCallable(const Model::DescribeRelatedInstancesRequest& request);

                /**
                 *查询任务实例列表
                 * @param req DescribeTaskInstancesRequest
                 * @return DescribeTaskInstancesOutcome
                 */
                DescribeTaskInstancesOutcome DescribeTaskInstances(const Model::DescribeTaskInstancesRequest &request);
                void DescribeTaskInstancesAsync(const Model::DescribeTaskInstancesRequest& request, const DescribeTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskInstancesOutcomeCallable DescribeTaskInstancesCallable(const Model::DescribeTaskInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_WEDATACLIENT_H_
