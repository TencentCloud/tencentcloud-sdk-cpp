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

#ifndef TENCENTCLOUD_CDWPG_V20201230_CDWPGCLIENT_H_
#define TENCENTCLOUD_CDWPG_V20201230_CDWPGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdwpg/v20201230/model/CreateInstanceByApiRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/CreateInstanceByApiResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeInstanceStateRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeInstanceStateResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeSimpleInstancesRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeSimpleInstancesResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DestroyInstanceByApiRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DestroyInstanceByApiResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/ModifyInstanceRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/ModifyInstanceResponse.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            class CdwpgClient : public AbstractClient
            {
            public:
                CdwpgClient(const Credential &credential, const std::string &region);
                CdwpgClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateInstanceByApiResponse> CreateInstanceByApiOutcome;
                typedef std::future<CreateInstanceByApiOutcome> CreateInstanceByApiOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::CreateInstanceByApiRequest&, CreateInstanceByApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceByApiAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceStateResponse> DescribeInstanceStateOutcome;
                typedef std::future<DescribeInstanceStateOutcome> DescribeInstanceStateOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeInstanceStateRequest&, DescribeInstanceStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSimpleInstancesResponse> DescribeSimpleInstancesOutcome;
                typedef std::future<DescribeSimpleInstancesOutcome> DescribeSimpleInstancesOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeSimpleInstancesRequest&, DescribeSimpleInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimpleInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyInstanceByApiResponse> DestroyInstanceByApiOutcome;
                typedef std::future<DestroyInstanceByApiOutcome> DestroyInstanceByApiOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DestroyInstanceByApiRequest&, DestroyInstanceByApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyInstanceByApiAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;



                /**
                 *创建集群
                 * @param req CreateInstanceByApiRequest
                 * @return CreateInstanceByApiOutcome
                 */
                CreateInstanceByApiOutcome CreateInstanceByApi(const Model::CreateInstanceByApiRequest &request);
                void CreateInstanceByApiAsync(const Model::CreateInstanceByApiRequest& request, const CreateInstanceByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceByApiOutcomeCallable CreateInstanceByApiCallable(const Model::CreateInstanceByApiRequest& request);

                /**
                 *集群详情页中显示集群状态、流程进度等
                 * @param req DescribeInstanceStateRequest
                 * @return DescribeInstanceStateOutcome
                 */
                DescribeInstanceStateOutcome DescribeInstanceState(const Model::DescribeInstanceStateRequest &request);
                void DescribeInstanceStateAsync(const Model::DescribeInstanceStateRequest& request, const DescribeInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceStateOutcomeCallable DescribeInstanceStateCallable(const Model::DescribeInstanceStateRequest& request);

                /**
                 *获取集群实例列表
                 * @param req DescribeSimpleInstancesRequest
                 * @return DescribeSimpleInstancesOutcome
                 */
                DescribeSimpleInstancesOutcome DescribeSimpleInstances(const Model::DescribeSimpleInstancesRequest &request);
                void DescribeSimpleInstancesAsync(const Model::DescribeSimpleInstancesRequest& request, const DescribeSimpleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSimpleInstancesOutcomeCallable DescribeSimpleInstancesCallable(const Model::DescribeSimpleInstancesRequest& request);

                /**
                 *销毁集群
                 * @param req DestroyInstanceByApiRequest
                 * @return DestroyInstanceByApiOutcome
                 */
                DestroyInstanceByApiOutcome DestroyInstanceByApi(const Model::DestroyInstanceByApiRequest &request);
                void DestroyInstanceByApiAsync(const Model::DestroyInstanceByApiRequest& request, const DestroyInstanceByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyInstanceByApiOutcomeCallable DestroyInstanceByApiCallable(const Model::DestroyInstanceByApiRequest& request);

                /**
                 *修改实例信息，目前为实例名称
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_CDWPGCLIENT_H_
