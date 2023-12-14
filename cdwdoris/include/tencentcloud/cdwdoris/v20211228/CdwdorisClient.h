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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_CDWDORISCLIENT_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_CDWDORISCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesResponse.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstancesRequest.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstancesResponse.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            class CdwdorisClient : public AbstractClient
            {
            public:
                CdwdorisClient(const Credential &credential, const std::string &region);
                CdwdorisClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeInstanceResponse> DescribeInstanceOutcome;
                typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceRequest&, DescribeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodesResponse> DescribeInstanceNodesOutcome;
                typedef std::future<DescribeInstanceNodesOutcome> DescribeInstanceNodesOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstanceNodesRequest&, DescribeInstanceNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const CdwdorisClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;



                /**
                 *根据实例ID查询某个实例的具体信息
                 * @param req DescribeInstanceRequest
                 * @return DescribeInstanceOutcome
                 */
                DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest &request);
                void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request);

                /**
                 *获取实例节点信息列表
                 * @param req DescribeInstanceNodesRequest
                 * @return DescribeInstanceNodesOutcome
                 */
                DescribeInstanceNodesOutcome DescribeInstanceNodes(const Model::DescribeInstanceNodesRequest &request);
                void DescribeInstanceNodesAsync(const Model::DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodesOutcomeCallable DescribeInstanceNodesCallable(const Model::DescribeInstanceNodesRequest& request);

                /**
                 *获取集群列表
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_CDWDORISCLIENT_H_
