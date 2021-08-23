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

#ifndef TENCENTCLOUD_SOLAR_V20181011_SOLARCLIENT_H_
#define TENCENTCLOUD_SOLAR_V20181011_SOLARCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/solar/v20181011/model/CheckStaffChUserRequest.h>
#include <tencentcloud/solar/v20181011/model/CheckStaffChUserResponse.h>
#include <tencentcloud/solar/v20181011/model/CopyActivityChannelRequest.h>
#include <tencentcloud/solar/v20181011/model/CopyActivityChannelResponse.h>
#include <tencentcloud/solar/v20181011/model/CreateProjectRequest.h>
#include <tencentcloud/solar/v20181011/model/CreateProjectResponse.h>
#include <tencentcloud/solar/v20181011/model/CreateSubProjectRequest.h>
#include <tencentcloud/solar/v20181011/model/CreateSubProjectResponse.h>
#include <tencentcloud/solar/v20181011/model/DeleteProjectRequest.h>
#include <tencentcloud/solar/v20181011/model/DeleteProjectResponse.h>
#include <tencentcloud/solar/v20181011/model/DescribeCustomerRequest.h>
#include <tencentcloud/solar/v20181011/model/DescribeCustomerResponse.h>
#include <tencentcloud/solar/v20181011/model/DescribeCustomersRequest.h>
#include <tencentcloud/solar/v20181011/model/DescribeCustomersResponse.h>
#include <tencentcloud/solar/v20181011/model/DescribeProjectRequest.h>
#include <tencentcloud/solar/v20181011/model/DescribeProjectResponse.h>
#include <tencentcloud/solar/v20181011/model/DescribeProjectStockRequest.h>
#include <tencentcloud/solar/v20181011/model/DescribeProjectStockResponse.h>
#include <tencentcloud/solar/v20181011/model/DescribeProjectsRequest.h>
#include <tencentcloud/solar/v20181011/model/DescribeProjectsResponse.h>
#include <tencentcloud/solar/v20181011/model/DescribeResourceTemplateHeadersRequest.h>
#include <tencentcloud/solar/v20181011/model/DescribeResourceTemplateHeadersResponse.h>
#include <tencentcloud/solar/v20181011/model/DescribeSubProjectRequest.h>
#include <tencentcloud/solar/v20181011/model/DescribeSubProjectResponse.h>
#include <tencentcloud/solar/v20181011/model/ExpireFlowRequest.h>
#include <tencentcloud/solar/v20181011/model/ExpireFlowResponse.h>
#include <tencentcloud/solar/v20181011/model/ModifyProjectRequest.h>
#include <tencentcloud/solar/v20181011/model/ModifyProjectResponse.h>
#include <tencentcloud/solar/v20181011/model/OffLineProjectRequest.h>
#include <tencentcloud/solar/v20181011/model/OffLineProjectResponse.h>
#include <tencentcloud/solar/v20181011/model/ReplenishProjectStockRequest.h>
#include <tencentcloud/solar/v20181011/model/ReplenishProjectStockResponse.h>
#include <tencentcloud/solar/v20181011/model/SendWxTouchTaskRequest.h>
#include <tencentcloud/solar/v20181011/model/SendWxTouchTaskResponse.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            class SolarClient : public AbstractClient
            {
            public:
                SolarClient(const Credential &credential, const std::string &region);
                SolarClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CheckStaffChUserResponse> CheckStaffChUserOutcome;
                typedef std::future<CheckStaffChUserOutcome> CheckStaffChUserOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::CheckStaffChUserRequest&, CheckStaffChUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckStaffChUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyActivityChannelResponse> CopyActivityChannelOutcome;
                typedef std::future<CopyActivityChannelOutcome> CopyActivityChannelOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::CopyActivityChannelRequest&, CopyActivityChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyActivityChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubProjectResponse> CreateSubProjectOutcome;
                typedef std::future<CreateSubProjectOutcome> CreateSubProjectOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::CreateSubProjectRequest&, CreateSubProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectResponse> DeleteProjectOutcome;
                typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::DeleteProjectRequest&, DeleteProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerResponse> DescribeCustomerOutcome;
                typedef std::future<DescribeCustomerOutcome> DescribeCustomerOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::DescribeCustomerRequest&, DescribeCustomerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomersResponse> DescribeCustomersOutcome;
                typedef std::future<DescribeCustomersOutcome> DescribeCustomersOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::DescribeCustomersRequest&, DescribeCustomersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectResponse> DescribeProjectOutcome;
                typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::DescribeProjectRequest&, DescribeProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectStockResponse> DescribeProjectStockOutcome;
                typedef std::future<DescribeProjectStockOutcome> DescribeProjectStockOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::DescribeProjectStockRequest&, DescribeProjectStockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectStockAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectsResponse> DescribeProjectsOutcome;
                typedef std::future<DescribeProjectsOutcome> DescribeProjectsOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::DescribeProjectsRequest&, DescribeProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceTemplateHeadersResponse> DescribeResourceTemplateHeadersOutcome;
                typedef std::future<DescribeResourceTemplateHeadersOutcome> DescribeResourceTemplateHeadersOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::DescribeResourceTemplateHeadersRequest&, DescribeResourceTemplateHeadersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceTemplateHeadersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubProjectResponse> DescribeSubProjectOutcome;
                typedef std::future<DescribeSubProjectOutcome> DescribeSubProjectOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::DescribeSubProjectRequest&, DescribeSubProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ExpireFlowResponse> ExpireFlowOutcome;
                typedef std::future<ExpireFlowOutcome> ExpireFlowOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::ExpireFlowRequest&, ExpireFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExpireFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProjectResponse> ModifyProjectOutcome;
                typedef std::future<ModifyProjectOutcome> ModifyProjectOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::ModifyProjectRequest&, ModifyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::OffLineProjectResponse> OffLineProjectOutcome;
                typedef std::future<OffLineProjectOutcome> OffLineProjectOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::OffLineProjectRequest&, OffLineProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OffLineProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplenishProjectStockResponse> ReplenishProjectStockOutcome;
                typedef std::future<ReplenishProjectStockOutcome> ReplenishProjectStockOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::ReplenishProjectStockRequest&, ReplenishProjectStockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplenishProjectStockAsyncHandler;
                typedef Outcome<Core::Error, Model::SendWxTouchTaskResponse> SendWxTouchTaskOutcome;
                typedef std::future<SendWxTouchTaskOutcome> SendWxTouchTaskOutcomeCallable;
                typedef std::function<void(const SolarClient*, const Model::SendWxTouchTaskRequest&, SendWxTouchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendWxTouchTaskAsyncHandler;



                /**
                 *员工渠道更改员工状态
                 * @param req CheckStaffChUserRequest
                 * @return CheckStaffChUserOutcome
                 */
                CheckStaffChUserOutcome CheckStaffChUser(const Model::CheckStaffChUserRequest &request);
                void CheckStaffChUserAsync(const Model::CheckStaffChUserRequest& request, const CheckStaffChUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckStaffChUserOutcomeCallable CheckStaffChUserCallable(const Model::CheckStaffChUserRequest& request);

                /**
                 *复制活动渠道的策略
                 * @param req CopyActivityChannelRequest
                 * @return CopyActivityChannelOutcome
                 */
                CopyActivityChannelOutcome CopyActivityChannel(const Model::CopyActivityChannelRequest &request);
                void CopyActivityChannelAsync(const Model::CopyActivityChannelRequest& request, const CopyActivityChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyActivityChannelOutcomeCallable CopyActivityChannelCallable(const Model::CopyActivityChannelRequest& request);

                /**
                 *创建项目
                 * @param req CreateProjectRequest
                 * @return CreateProjectOutcome
                 */
                CreateProjectOutcome CreateProject(const Model::CreateProjectRequest &request);
                void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request);

                /**
                 *创建子项目
                 * @param req CreateSubProjectRequest
                 * @return CreateSubProjectOutcome
                 */
                CreateSubProjectOutcome CreateSubProject(const Model::CreateSubProjectRequest &request);
                void CreateSubProjectAsync(const Model::CreateSubProjectRequest& request, const CreateSubProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubProjectOutcomeCallable CreateSubProjectCallable(const Model::CreateSubProjectRequest& request);

                /**
                 *删除项目
                 * @param req DeleteProjectRequest
                 * @return DeleteProjectOutcome
                 */
                DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest &request);
                void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request);

                /**
                 *客户档案查询客户详情
                 * @param req DescribeCustomerRequest
                 * @return DescribeCustomerOutcome
                 */
                DescribeCustomerOutcome DescribeCustomer(const Model::DescribeCustomerRequest &request);
                void DescribeCustomerAsync(const Model::DescribeCustomerRequest& request, const DescribeCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerOutcomeCallable DescribeCustomerCallable(const Model::DescribeCustomerRequest& request);

                /**
                 *查询客户档案列表
                 * @param req DescribeCustomersRequest
                 * @return DescribeCustomersOutcome
                 */
                DescribeCustomersOutcome DescribeCustomers(const Model::DescribeCustomersRequest &request);
                void DescribeCustomersAsync(const Model::DescribeCustomersRequest& request, const DescribeCustomersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomersOutcomeCallable DescribeCustomersCallable(const Model::DescribeCustomersRequest& request);

                /**
                 *项目详情展示
                 * @param req DescribeProjectRequest
                 * @return DescribeProjectOutcome
                 */
                DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest &request);
                void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request);

                /**
                 *项目库存详情
                 * @param req DescribeProjectStockRequest
                 * @return DescribeProjectStockOutcome
                 */
                DescribeProjectStockOutcome DescribeProjectStock(const Model::DescribeProjectStockRequest &request);
                void DescribeProjectStockAsync(const Model::DescribeProjectStockRequest& request, const DescribeProjectStockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectStockOutcomeCallable DescribeProjectStockCallable(const Model::DescribeProjectStockRequest& request);

                /**
                 *项目列表展示
                 * @param req DescribeProjectsRequest
                 * @return DescribeProjectsOutcome
                 */
                DescribeProjectsOutcome DescribeProjects(const Model::DescribeProjectsRequest &request);
                void DescribeProjectsAsync(const Model::DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectsOutcomeCallable DescribeProjectsCallable(const Model::DescribeProjectsRequest& request);

                /**
                 *素材查询服务号模板的列表（样例）
                 * @param req DescribeResourceTemplateHeadersRequest
                 * @return DescribeResourceTemplateHeadersOutcome
                 */
                DescribeResourceTemplateHeadersOutcome DescribeResourceTemplateHeaders(const Model::DescribeResourceTemplateHeadersRequest &request);
                void DescribeResourceTemplateHeadersAsync(const Model::DescribeResourceTemplateHeadersRequest& request, const DescribeResourceTemplateHeadersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceTemplateHeadersOutcomeCallable DescribeResourceTemplateHeadersCallable(const Model::DescribeResourceTemplateHeadersRequest& request);

                /**
                 *子项目详情
                 * @param req DescribeSubProjectRequest
                 * @return DescribeSubProjectOutcome
                 */
                DescribeSubProjectOutcome DescribeSubProject(const Model::DescribeSubProjectRequest &request);
                void DescribeSubProjectAsync(const Model::DescribeSubProjectRequest& request, const DescribeSubProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubProjectOutcomeCallable DescribeSubProjectCallable(const Model::DescribeSubProjectRequest& request);

                /**
                 *把审批中的工单置为已失效
                 * @param req ExpireFlowRequest
                 * @return ExpireFlowOutcome
                 */
                ExpireFlowOutcome ExpireFlow(const Model::ExpireFlowRequest &request);
                void ExpireFlowAsync(const Model::ExpireFlowRequest& request, const ExpireFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExpireFlowOutcomeCallable ExpireFlowCallable(const Model::ExpireFlowRequest& request);

                /**
                 *修改项目
                 * @param req ModifyProjectRequest
                 * @return ModifyProjectOutcome
                 */
                ModifyProjectOutcome ModifyProject(const Model::ModifyProjectRequest &request);
                void ModifyProjectAsync(const Model::ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProjectOutcomeCallable ModifyProjectCallable(const Model::ModifyProjectRequest& request);

                /**
                 *下线项目
                 * @param req OffLineProjectRequest
                 * @return OffLineProjectOutcome
                 */
                OffLineProjectOutcome OffLineProject(const Model::OffLineProjectRequest &request);
                void OffLineProjectAsync(const Model::OffLineProjectRequest& request, const OffLineProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OffLineProjectOutcomeCallable OffLineProjectCallable(const Model::OffLineProjectRequest& request);

                /**
                 *补充子项目库存
                 * @param req ReplenishProjectStockRequest
                 * @return ReplenishProjectStockOutcome
                 */
                ReplenishProjectStockOutcome ReplenishProjectStock(const Model::ReplenishProjectStockRequest &request);
                void ReplenishProjectStockAsync(const Model::ReplenishProjectStockRequest& request, const ReplenishProjectStockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplenishProjectStockOutcomeCallable ReplenishProjectStockCallable(const Model::ReplenishProjectStockRequest& request);

                /**
                 *发送企业微信触达任务
                 * @param req SendWxTouchTaskRequest
                 * @return SendWxTouchTaskOutcome
                 */
                SendWxTouchTaskOutcome SendWxTouchTask(const Model::SendWxTouchTaskRequest &request);
                void SendWxTouchTaskAsync(const Model::SendWxTouchTaskRequest& request, const SendWxTouchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendWxTouchTaskOutcomeCallable SendWxTouchTaskCallable(const Model::SendWxTouchTaskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_SOLARCLIENT_H_
