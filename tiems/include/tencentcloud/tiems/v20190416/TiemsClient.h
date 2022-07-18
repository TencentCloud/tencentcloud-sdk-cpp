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

#ifndef TENCENTCLOUD_TIEMS_V20190416_TIEMSCLIENT_H_
#define TENCENTCLOUD_TIEMS_V20190416_TIEMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tiems/v20190416/model/CreateJobRequest.h>
#include <tencentcloud/tiems/v20190416/model/CreateJobResponse.h>
#include <tencentcloud/tiems/v20190416/model/CreateRsgAsGroupRequest.h>
#include <tencentcloud/tiems/v20190416/model/CreateRsgAsGroupResponse.h>
#include <tencentcloud/tiems/v20190416/model/CreateRuntimeRequest.h>
#include <tencentcloud/tiems/v20190416/model/CreateRuntimeResponse.h>
#include <tencentcloud/tiems/v20190416/model/CreateServiceRequest.h>
#include <tencentcloud/tiems/v20190416/model/CreateServiceResponse.h>
#include <tencentcloud/tiems/v20190416/model/CreateServiceConfigRequest.h>
#include <tencentcloud/tiems/v20190416/model/CreateServiceConfigResponse.h>
#include <tencentcloud/tiems/v20190416/model/DeleteInstanceRequest.h>
#include <tencentcloud/tiems/v20190416/model/DeleteInstanceResponse.h>
#include <tencentcloud/tiems/v20190416/model/DeleteJobRequest.h>
#include <tencentcloud/tiems/v20190416/model/DeleteJobResponse.h>
#include <tencentcloud/tiems/v20190416/model/DeleteResourceGroupRequest.h>
#include <tencentcloud/tiems/v20190416/model/DeleteResourceGroupResponse.h>
#include <tencentcloud/tiems/v20190416/model/DeleteRsgAsGroupRequest.h>
#include <tencentcloud/tiems/v20190416/model/DeleteRsgAsGroupResponse.h>
#include <tencentcloud/tiems/v20190416/model/DeleteRuntimeRequest.h>
#include <tencentcloud/tiems/v20190416/model/DeleteRuntimeResponse.h>
#include <tencentcloud/tiems/v20190416/model/DeleteServiceRequest.h>
#include <tencentcloud/tiems/v20190416/model/DeleteServiceResponse.h>
#include <tencentcloud/tiems/v20190416/model/DeleteServiceConfigRequest.h>
#include <tencentcloud/tiems/v20190416/model/DeleteServiceConfigResponse.h>
#include <tencentcloud/tiems/v20190416/model/DescribeInstancesRequest.h>
#include <tencentcloud/tiems/v20190416/model/DescribeInstancesResponse.h>
#include <tencentcloud/tiems/v20190416/model/DescribeResourceGroupsRequest.h>
#include <tencentcloud/tiems/v20190416/model/DescribeResourceGroupsResponse.h>
#include <tencentcloud/tiems/v20190416/model/DescribeRsgAsGroupActivitiesRequest.h>
#include <tencentcloud/tiems/v20190416/model/DescribeRsgAsGroupActivitiesResponse.h>
#include <tencentcloud/tiems/v20190416/model/DescribeRsgAsGroupsRequest.h>
#include <tencentcloud/tiems/v20190416/model/DescribeRsgAsGroupsResponse.h>
#include <tencentcloud/tiems/v20190416/model/DescribeRuntimesRequest.h>
#include <tencentcloud/tiems/v20190416/model/DescribeRuntimesResponse.h>
#include <tencentcloud/tiems/v20190416/model/DescribeServiceConfigsRequest.h>
#include <tencentcloud/tiems/v20190416/model/DescribeServiceConfigsResponse.h>
#include <tencentcloud/tiems/v20190416/model/DescribeServicesRequest.h>
#include <tencentcloud/tiems/v20190416/model/DescribeServicesResponse.h>
#include <tencentcloud/tiems/v20190416/model/DisableRsgAsGroupRequest.h>
#include <tencentcloud/tiems/v20190416/model/DisableRsgAsGroupResponse.h>
#include <tencentcloud/tiems/v20190416/model/EnableRsgAsGroupRequest.h>
#include <tencentcloud/tiems/v20190416/model/EnableRsgAsGroupResponse.h>
#include <tencentcloud/tiems/v20190416/model/ExposeServiceRequest.h>
#include <tencentcloud/tiems/v20190416/model/ExposeServiceResponse.h>
#include <tencentcloud/tiems/v20190416/model/UpdateJobRequest.h>
#include <tencentcloud/tiems/v20190416/model/UpdateJobResponse.h>
#include <tencentcloud/tiems/v20190416/model/UpdateRsgAsGroupRequest.h>
#include <tencentcloud/tiems/v20190416/model/UpdateRsgAsGroupResponse.h>
#include <tencentcloud/tiems/v20190416/model/UpdateServiceRequest.h>
#include <tencentcloud/tiems/v20190416/model/UpdateServiceResponse.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            class TiemsClient : public AbstractClient
            {
            public:
                TiemsClient(const Credential &credential, const std::string &region);
                TiemsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateJobResponse> CreateJobOutcome;
                typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::CreateJobRequest&, CreateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRsgAsGroupResponse> CreateRsgAsGroupOutcome;
                typedef std::future<CreateRsgAsGroupOutcome> CreateRsgAsGroupOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::CreateRsgAsGroupRequest&, CreateRsgAsGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRsgAsGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuntimeResponse> CreateRuntimeOutcome;
                typedef std::future<CreateRuntimeOutcome> CreateRuntimeOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::CreateRuntimeRequest&, CreateRuntimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuntimeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServiceResponse> CreateServiceOutcome;
                typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::CreateServiceRequest&, CreateServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServiceConfigResponse> CreateServiceConfigOutcome;
                typedef std::future<CreateServiceConfigOutcome> CreateServiceConfigOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::CreateServiceConfigRequest&, CreateServiceConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceResponse> DeleteInstanceOutcome;
                typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DeleteInstanceRequest&, DeleteInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteJobResponse> DeleteJobOutcome;
                typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DeleteJobRequest&, DeleteJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourceGroupResponse> DeleteResourceGroupOutcome;
                typedef std::future<DeleteResourceGroupOutcome> DeleteResourceGroupOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DeleteResourceGroupRequest&, DeleteResourceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRsgAsGroupResponse> DeleteRsgAsGroupOutcome;
                typedef std::future<DeleteRsgAsGroupOutcome> DeleteRsgAsGroupOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DeleteRsgAsGroupRequest&, DeleteRsgAsGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRsgAsGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRuntimeResponse> DeleteRuntimeOutcome;
                typedef std::future<DeleteRuntimeOutcome> DeleteRuntimeOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DeleteRuntimeRequest&, DeleteRuntimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuntimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServiceResponse> DeleteServiceOutcome;
                typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DeleteServiceRequest&, DeleteServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServiceConfigResponse> DeleteServiceConfigOutcome;
                typedef std::future<DeleteServiceConfigOutcome> DeleteServiceConfigOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DeleteServiceConfigRequest&, DeleteServiceConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceGroupsResponse> DescribeResourceGroupsOutcome;
                typedef std::future<DescribeResourceGroupsOutcome> DescribeResourceGroupsOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DescribeResourceGroupsRequest&, DescribeResourceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRsgAsGroupActivitiesResponse> DescribeRsgAsGroupActivitiesOutcome;
                typedef std::future<DescribeRsgAsGroupActivitiesOutcome> DescribeRsgAsGroupActivitiesOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DescribeRsgAsGroupActivitiesRequest&, DescribeRsgAsGroupActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRsgAsGroupActivitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRsgAsGroupsResponse> DescribeRsgAsGroupsOutcome;
                typedef std::future<DescribeRsgAsGroupsOutcome> DescribeRsgAsGroupsOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DescribeRsgAsGroupsRequest&, DescribeRsgAsGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRsgAsGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuntimesResponse> DescribeRuntimesOutcome;
                typedef std::future<DescribeRuntimesOutcome> DescribeRuntimesOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DescribeRuntimesRequest&, DescribeRuntimesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuntimesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceConfigsResponse> DescribeServiceConfigsOutcome;
                typedef std::future<DescribeServiceConfigsOutcome> DescribeServiceConfigsOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DescribeServiceConfigsRequest&, DescribeServiceConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServicesResponse> DescribeServicesOutcome;
                typedef std::future<DescribeServicesOutcome> DescribeServicesOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DescribeServicesRequest&, DescribeServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableRsgAsGroupResponse> DisableRsgAsGroupOutcome;
                typedef std::future<DisableRsgAsGroupOutcome> DisableRsgAsGroupOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::DisableRsgAsGroupRequest&, DisableRsgAsGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableRsgAsGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableRsgAsGroupResponse> EnableRsgAsGroupOutcome;
                typedef std::future<EnableRsgAsGroupOutcome> EnableRsgAsGroupOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::EnableRsgAsGroupRequest&, EnableRsgAsGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableRsgAsGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ExposeServiceResponse> ExposeServiceOutcome;
                typedef std::future<ExposeServiceOutcome> ExposeServiceOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::ExposeServiceRequest&, ExposeServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExposeServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateJobResponse> UpdateJobOutcome;
                typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::UpdateJobRequest&, UpdateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRsgAsGroupResponse> UpdateRsgAsGroupOutcome;
                typedef std::future<UpdateRsgAsGroupOutcome> UpdateRsgAsGroupOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::UpdateRsgAsGroupRequest&, UpdateRsgAsGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRsgAsGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateServiceResponse> UpdateServiceOutcome;
                typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
                typedef std::function<void(const TiemsClient*, const Model::UpdateServiceRequest&, UpdateServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceAsyncHandler;



                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

创建任务
                 * @param req CreateJobRequest
                 * @return CreateJobOutcome
                 */
                CreateJobOutcome CreateJob(const Model::CreateJobRequest &request);
                void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

创建资源组的伸缩组。当前一个资源组仅允许创建一个伸缩组。
                 * @param req CreateRsgAsGroupRequest
                 * @return CreateRsgAsGroupOutcome
                 */
                CreateRsgAsGroupOutcome CreateRsgAsGroup(const Model::CreateRsgAsGroupRequest &request);
                void CreateRsgAsGroupAsync(const Model::CreateRsgAsGroupRequest& request, const CreateRsgAsGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRsgAsGroupOutcomeCallable CreateRsgAsGroupCallable(const Model::CreateRsgAsGroupRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

创建运行环境
                 * @param req CreateRuntimeRequest
                 * @return CreateRuntimeOutcome
                 */
                CreateRuntimeOutcome CreateRuntime(const Model::CreateRuntimeRequest &request);
                void CreateRuntimeAsync(const Model::CreateRuntimeRequest& request, const CreateRuntimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuntimeOutcomeCallable CreateRuntimeCallable(const Model::CreateRuntimeRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

创建服务
                 * @param req CreateServiceRequest
                 * @return CreateServiceOutcome
                 */
                CreateServiceOutcome CreateService(const Model::CreateServiceRequest &request);
                void CreateServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceOutcomeCallable CreateServiceCallable(const Model::CreateServiceRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

创建服务配置
                 * @param req CreateServiceConfigRequest
                 * @return CreateServiceConfigOutcome
                 */
                CreateServiceConfigOutcome CreateServiceConfig(const Model::CreateServiceConfigRequest &request);
                void CreateServiceConfigAsync(const Model::CreateServiceConfigRequest& request, const CreateServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceConfigOutcomeCallable CreateServiceConfigCallable(const Model::CreateServiceConfigRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

删除资源组中的节点。目前仅支持删除已经到期的预付费节点，和按量付费节点。
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

删除任务
                 * @param req DeleteJobRequest
                 * @return DeleteJobOutcome
                 */
                DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest &request);
                void DeleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteJobOutcomeCallable DeleteJobCallable(const Model::DeleteJobRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

删除资源组
                 * @param req DeleteResourceGroupRequest
                 * @return DeleteResourceGroupOutcome
                 */
                DeleteResourceGroupOutcome DeleteResourceGroup(const Model::DeleteResourceGroupRequest &request);
                void DeleteResourceGroupAsync(const Model::DeleteResourceGroupRequest& request, const DeleteResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourceGroupOutcomeCallable DeleteResourceGroupCallable(const Model::DeleteResourceGroupRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

伸缩
                 * @param req DeleteRsgAsGroupRequest
                 * @return DeleteRsgAsGroupOutcome
                 */
                DeleteRsgAsGroupOutcome DeleteRsgAsGroup(const Model::DeleteRsgAsGroupRequest &request);
                void DeleteRsgAsGroupAsync(const Model::DeleteRsgAsGroupRequest& request, const DeleteRsgAsGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRsgAsGroupOutcomeCallable DeleteRsgAsGroupCallable(const Model::DeleteRsgAsGroupRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

删除运行环境
                 * @param req DeleteRuntimeRequest
                 * @return DeleteRuntimeOutcome
                 */
                DeleteRuntimeOutcome DeleteRuntime(const Model::DeleteRuntimeRequest &request);
                void DeleteRuntimeAsync(const Model::DeleteRuntimeRequest& request, const DeleteRuntimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuntimeOutcomeCallable DeleteRuntimeCallable(const Model::DeleteRuntimeRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

删除服务
                 * @param req DeleteServiceRequest
                 * @return DeleteServiceOutcome
                 */
                DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest &request);
                void DeleteServiceAsync(const Model::DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceOutcomeCallable DeleteServiceCallable(const Model::DeleteServiceRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

删除服务配置
                 * @param req DeleteServiceConfigRequest
                 * @return DeleteServiceConfigOutcome
                 */
                DeleteServiceConfigOutcome DeleteServiceConfig(const Model::DeleteServiceConfigRequest &request);
                void DeleteServiceConfigAsync(const Model::DeleteServiceConfigRequest& request, const DeleteServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceConfigOutcomeCallable DeleteServiceConfigCallable(const Model::DeleteServiceConfigRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

获取节点列表
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

获取资源组列表
                 * @param req DescribeResourceGroupsRequest
                 * @return DescribeResourceGroupsOutcome
                 */
                DescribeResourceGroupsOutcome DescribeResourceGroups(const Model::DescribeResourceGroupsRequest &request);
                void DescribeResourceGroupsAsync(const Model::DescribeResourceGroupsRequest& request, const DescribeResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceGroupsOutcomeCallable DescribeResourceGroupsCallable(const Model::DescribeResourceGroupsRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

查询伸缩组活动
                 * @param req DescribeRsgAsGroupActivitiesRequest
                 * @return DescribeRsgAsGroupActivitiesOutcome
                 */
                DescribeRsgAsGroupActivitiesOutcome DescribeRsgAsGroupActivities(const Model::DescribeRsgAsGroupActivitiesRequest &request);
                void DescribeRsgAsGroupActivitiesAsync(const Model::DescribeRsgAsGroupActivitiesRequest& request, const DescribeRsgAsGroupActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRsgAsGroupActivitiesOutcomeCallable DescribeRsgAsGroupActivitiesCallable(const Model::DescribeRsgAsGroupActivitiesRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

查询资源组的伸缩组信息
                 * @param req DescribeRsgAsGroupsRequest
                 * @return DescribeRsgAsGroupsOutcome
                 */
                DescribeRsgAsGroupsOutcome DescribeRsgAsGroups(const Model::DescribeRsgAsGroupsRequest &request);
                void DescribeRsgAsGroupsAsync(const Model::DescribeRsgAsGroupsRequest& request, const DescribeRsgAsGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRsgAsGroupsOutcomeCallable DescribeRsgAsGroupsCallable(const Model::DescribeRsgAsGroupsRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

描述服务运行环境
                 * @param req DescribeRuntimesRequest
                 * @return DescribeRuntimesOutcome
                 */
                DescribeRuntimesOutcome DescribeRuntimes(const Model::DescribeRuntimesRequest &request);
                void DescribeRuntimesAsync(const Model::DescribeRuntimesRequest& request, const DescribeRuntimesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuntimesOutcomeCallable DescribeRuntimesCallable(const Model::DescribeRuntimesRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

描述服务配置
                 * @param req DescribeServiceConfigsRequest
                 * @return DescribeServiceConfigsOutcome
                 */
                DescribeServiceConfigsOutcome DescribeServiceConfigs(const Model::DescribeServiceConfigsRequest &request);
                void DescribeServiceConfigsAsync(const Model::DescribeServiceConfigsRequest& request, const DescribeServiceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceConfigsOutcomeCallable DescribeServiceConfigsCallable(const Model::DescribeServiceConfigsRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

描述服务
                 * @param req DescribeServicesRequest
                 * @return DescribeServicesOutcome
                 */
                DescribeServicesOutcome DescribeServices(const Model::DescribeServicesRequest &request);
                void DescribeServicesAsync(const Model::DescribeServicesRequest& request, const DescribeServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServicesOutcomeCallable DescribeServicesCallable(const Model::DescribeServicesRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

停用资源组的伸缩组
                 * @param req DisableRsgAsGroupRequest
                 * @return DisableRsgAsGroupOutcome
                 */
                DisableRsgAsGroupOutcome DisableRsgAsGroup(const Model::DisableRsgAsGroupRequest &request);
                void DisableRsgAsGroupAsync(const Model::DisableRsgAsGroupRequest& request, const DisableRsgAsGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableRsgAsGroupOutcomeCallable DisableRsgAsGroupCallable(const Model::DisableRsgAsGroupRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

启用资源组的伸缩组
                 * @param req EnableRsgAsGroupRequest
                 * @return EnableRsgAsGroupOutcome
                 */
                EnableRsgAsGroupOutcome EnableRsgAsGroup(const Model::EnableRsgAsGroupRequest &request);
                void EnableRsgAsGroupAsync(const Model::EnableRsgAsGroupRequest& request, const EnableRsgAsGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableRsgAsGroupOutcomeCallable EnableRsgAsGroupCallable(const Model::EnableRsgAsGroupRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

暴露服务
                 * @param req ExposeServiceRequest
                 * @return ExposeServiceOutcome
                 */
                ExposeServiceOutcome ExposeService(const Model::ExposeServiceRequest &request);
                void ExposeServiceAsync(const Model::ExposeServiceRequest& request, const ExposeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExposeServiceOutcomeCallable ExposeServiceCallable(const Model::ExposeServiceRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

更新任务
                 * @param req UpdateJobRequest
                 * @return UpdateJobOutcome
                 */
                UpdateJobOutcome UpdateJob(const Model::UpdateJobRequest &request);
                void UpdateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateJobOutcomeCallable UpdateJobCallable(const Model::UpdateJobRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

更新资源组的伸缩组
                 * @param req UpdateRsgAsGroupRequest
                 * @return UpdateRsgAsGroupOutcome
                 */
                UpdateRsgAsGroupOutcome UpdateRsgAsGroup(const Model::UpdateRsgAsGroupRequest &request);
                void UpdateRsgAsGroupAsync(const Model::UpdateRsgAsGroupRequest& request, const UpdateRsgAsGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRsgAsGroupOutcomeCallable UpdateRsgAsGroupCallable(const Model::UpdateRsgAsGroupRequest& request);

                /**
                 *因业务策略调整，腾讯云TI平台TI-EMS已经于2022年6月30日下线并停止提供服务。若您有新增的业务需求，可前往TI-ONE(https://cloud.tencent.com/document/product/851)使用。

更新服务
                 * @param req UpdateServiceRequest
                 * @return UpdateServiceOutcome
                 */
                UpdateServiceOutcome UpdateService(const Model::UpdateServiceRequest &request);
                void UpdateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateServiceOutcomeCallable UpdateServiceCallable(const Model::UpdateServiceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_TIEMSCLIENT_H_
