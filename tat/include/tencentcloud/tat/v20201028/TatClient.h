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

#ifndef TENCENTCLOUD_TAT_V20201028_TATCLIENT_H_
#define TENCENTCLOUD_TAT_V20201028_TATCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tat/v20201028/model/CancelInvocationRequest.h>
#include <tencentcloud/tat/v20201028/model/CancelInvocationResponse.h>
#include <tencentcloud/tat/v20201028/model/CreateCommandRequest.h>
#include <tencentcloud/tat/v20201028/model/CreateCommandResponse.h>
#include <tencentcloud/tat/v20201028/model/CreateInvokerRequest.h>
#include <tencentcloud/tat/v20201028/model/CreateInvokerResponse.h>
#include <tencentcloud/tat/v20201028/model/CreateRegisterCodeRequest.h>
#include <tencentcloud/tat/v20201028/model/CreateRegisterCodeResponse.h>
#include <tencentcloud/tat/v20201028/model/DeleteCommandRequest.h>
#include <tencentcloud/tat/v20201028/model/DeleteCommandResponse.h>
#include <tencentcloud/tat/v20201028/model/DeleteCommandsRequest.h>
#include <tencentcloud/tat/v20201028/model/DeleteCommandsResponse.h>
#include <tencentcloud/tat/v20201028/model/DeleteInvokerRequest.h>
#include <tencentcloud/tat/v20201028/model/DeleteInvokerResponse.h>
#include <tencentcloud/tat/v20201028/model/DeleteRegisterCodesRequest.h>
#include <tencentcloud/tat/v20201028/model/DeleteRegisterCodesResponse.h>
#include <tencentcloud/tat/v20201028/model/DeleteRegisterInstanceRequest.h>
#include <tencentcloud/tat/v20201028/model/DeleteRegisterInstanceResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeAutomationAgentStatusRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeAutomationAgentStatusResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeCommandsRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeCommandsResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeInvocationTasksRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeInvocationTasksResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeInvocationsRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeInvocationsResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeInvokerRecordsRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeInvokerRecordsResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeInvokersRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeInvokersResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeQuotasRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeQuotasResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeRegionsRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeRegionsResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeRegisterCodesRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeRegisterCodesResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeRegisterInstancesRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeRegisterInstancesResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeScenesRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeScenesResponse.h>
#include <tencentcloud/tat/v20201028/model/DisableInvokerRequest.h>
#include <tencentcloud/tat/v20201028/model/DisableInvokerResponse.h>
#include <tencentcloud/tat/v20201028/model/DisableRegisterCodesRequest.h>
#include <tencentcloud/tat/v20201028/model/DisableRegisterCodesResponse.h>
#include <tencentcloud/tat/v20201028/model/EnableInvokerRequest.h>
#include <tencentcloud/tat/v20201028/model/EnableInvokerResponse.h>
#include <tencentcloud/tat/v20201028/model/InvokeCommandRequest.h>
#include <tencentcloud/tat/v20201028/model/InvokeCommandResponse.h>
#include <tencentcloud/tat/v20201028/model/ModifyCommandRequest.h>
#include <tencentcloud/tat/v20201028/model/ModifyCommandResponse.h>
#include <tencentcloud/tat/v20201028/model/ModifyInvokerRequest.h>
#include <tencentcloud/tat/v20201028/model/ModifyInvokerResponse.h>
#include <tencentcloud/tat/v20201028/model/ModifyRegisterInstanceRequest.h>
#include <tencentcloud/tat/v20201028/model/ModifyRegisterInstanceResponse.h>
#include <tencentcloud/tat/v20201028/model/PreviewReplacedCommandContentRequest.h>
#include <tencentcloud/tat/v20201028/model/PreviewReplacedCommandContentResponse.h>
#include <tencentcloud/tat/v20201028/model/RunCommandRequest.h>
#include <tencentcloud/tat/v20201028/model/RunCommandResponse.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            class TatClient : public AbstractClient
            {
            public:
                TatClient(const Credential &credential, const std::string &region);
                TatClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelInvocationResponse> CancelInvocationOutcome;
                typedef std::future<CancelInvocationOutcome> CancelInvocationOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::CancelInvocationRequest&, CancelInvocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelInvocationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCommandResponse> CreateCommandOutcome;
                typedef std::future<CreateCommandOutcome> CreateCommandOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::CreateCommandRequest&, CreateCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInvokerResponse> CreateInvokerOutcome;
                typedef std::future<CreateInvokerOutcome> CreateInvokerOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::CreateInvokerRequest&, CreateInvokerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInvokerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRegisterCodeResponse> CreateRegisterCodeOutcome;
                typedef std::future<CreateRegisterCodeOutcome> CreateRegisterCodeOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::CreateRegisterCodeRequest&, CreateRegisterCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRegisterCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCommandResponse> DeleteCommandOutcome;
                typedef std::future<DeleteCommandOutcome> DeleteCommandOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DeleteCommandRequest&, DeleteCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCommandsResponse> DeleteCommandsOutcome;
                typedef std::future<DeleteCommandsOutcome> DeleteCommandsOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DeleteCommandsRequest&, DeleteCommandsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCommandsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInvokerResponse> DeleteInvokerOutcome;
                typedef std::future<DeleteInvokerOutcome> DeleteInvokerOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DeleteInvokerRequest&, DeleteInvokerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInvokerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRegisterCodesResponse> DeleteRegisterCodesOutcome;
                typedef std::future<DeleteRegisterCodesOutcome> DeleteRegisterCodesOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DeleteRegisterCodesRequest&, DeleteRegisterCodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRegisterCodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRegisterInstanceResponse> DeleteRegisterInstanceOutcome;
                typedef std::future<DeleteRegisterInstanceOutcome> DeleteRegisterInstanceOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DeleteRegisterInstanceRequest&, DeleteRegisterInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRegisterInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutomationAgentStatusResponse> DescribeAutomationAgentStatusOutcome;
                typedef std::future<DescribeAutomationAgentStatusOutcome> DescribeAutomationAgentStatusOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeAutomationAgentStatusRequest&, DescribeAutomationAgentStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutomationAgentStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCommandsResponse> DescribeCommandsOutcome;
                typedef std::future<DescribeCommandsOutcome> DescribeCommandsOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeCommandsRequest&, DescribeCommandsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommandsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInvocationTasksResponse> DescribeInvocationTasksOutcome;
                typedef std::future<DescribeInvocationTasksOutcome> DescribeInvocationTasksOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeInvocationTasksRequest&, DescribeInvocationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInvocationsResponse> DescribeInvocationsOutcome;
                typedef std::future<DescribeInvocationsOutcome> DescribeInvocationsOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeInvocationsRequest&, DescribeInvocationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInvokerRecordsResponse> DescribeInvokerRecordsOutcome;
                typedef std::future<DescribeInvokerRecordsOutcome> DescribeInvokerRecordsOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeInvokerRecordsRequest&, DescribeInvokerRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvokerRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInvokersResponse> DescribeInvokersOutcome;
                typedef std::future<DescribeInvokersOutcome> DescribeInvokersOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeInvokersRequest&, DescribeInvokersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvokersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQuotasResponse> DescribeQuotasOutcome;
                typedef std::future<DescribeQuotasOutcome> DescribeQuotasOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeQuotasRequest&, DescribeQuotasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuotasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegisterCodesResponse> DescribeRegisterCodesOutcome;
                typedef std::future<DescribeRegisterCodesOutcome> DescribeRegisterCodesOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeRegisterCodesRequest&, DescribeRegisterCodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegisterCodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegisterInstancesResponse> DescribeRegisterInstancesOutcome;
                typedef std::future<DescribeRegisterInstancesOutcome> DescribeRegisterInstancesOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeRegisterInstancesRequest&, DescribeRegisterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegisterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScenesResponse> DescribeScenesOutcome;
                typedef std::future<DescribeScenesOutcome> DescribeScenesOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeScenesRequest&, DescribeScenesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScenesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableInvokerResponse> DisableInvokerOutcome;
                typedef std::future<DisableInvokerOutcome> DisableInvokerOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DisableInvokerRequest&, DisableInvokerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableInvokerAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableRegisterCodesResponse> DisableRegisterCodesOutcome;
                typedef std::future<DisableRegisterCodesOutcome> DisableRegisterCodesOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DisableRegisterCodesRequest&, DisableRegisterCodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableRegisterCodesAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableInvokerResponse> EnableInvokerOutcome;
                typedef std::future<EnableInvokerOutcome> EnableInvokerOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::EnableInvokerRequest&, EnableInvokerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableInvokerAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeCommandResponse> InvokeCommandOutcome;
                typedef std::future<InvokeCommandOutcome> InvokeCommandOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::InvokeCommandRequest&, InvokeCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCommandResponse> ModifyCommandOutcome;
                typedef std::future<ModifyCommandOutcome> ModifyCommandOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::ModifyCommandRequest&, ModifyCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInvokerResponse> ModifyInvokerOutcome;
                typedef std::future<ModifyInvokerOutcome> ModifyInvokerOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::ModifyInvokerRequest&, ModifyInvokerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInvokerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRegisterInstanceResponse> ModifyRegisterInstanceOutcome;
                typedef std::future<ModifyRegisterInstanceOutcome> ModifyRegisterInstanceOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::ModifyRegisterInstanceRequest&, ModifyRegisterInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRegisterInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::PreviewReplacedCommandContentResponse> PreviewReplacedCommandContentOutcome;
                typedef std::future<PreviewReplacedCommandContentOutcome> PreviewReplacedCommandContentOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::PreviewReplacedCommandContentRequest&, PreviewReplacedCommandContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PreviewReplacedCommandContentAsyncHandler;
                typedef Outcome<Core::Error, Model::RunCommandResponse> RunCommandOutcome;
                typedef std::future<RunCommandOutcome> RunCommandOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::RunCommandRequest&, RunCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunCommandAsyncHandler;



                /**
                 *取消一台或多台实例执行的命令

* 如果命令还未下发到agent，任务状态处于PENDING、DELIVERING、DELIVER_DELAYED，取消后任务状态是CANCELLED
* 如果命令已下发到agent，任务状态处于RUNNING， 取消后任务状态是TERMINATED
                 * @param req CancelInvocationRequest
                 * @return CancelInvocationOutcome
                 */
                CancelInvocationOutcome CancelInvocation(const Model::CancelInvocationRequest &request);
                void CancelInvocationAsync(const Model::CancelInvocationRequest& request, const CancelInvocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelInvocationOutcomeCallable CancelInvocationCallable(const Model::CancelInvocationRequest& request);

                /**
                 *此接口用于创建命令。
                 * @param req CreateCommandRequest
                 * @return CreateCommandOutcome
                 */
                CreateCommandOutcome CreateCommand(const Model::CreateCommandRequest &request);
                void CreateCommandAsync(const Model::CreateCommandRequest& request, const CreateCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCommandOutcomeCallable CreateCommandCallable(const Model::CreateCommandRequest& request);

                /**
                 *此接口用于创建执行器。
                 * @param req CreateInvokerRequest
                 * @return CreateInvokerOutcome
                 */
                CreateInvokerOutcome CreateInvoker(const Model::CreateInvokerRequest &request);
                void CreateInvokerAsync(const Model::CreateInvokerRequest& request, const CreateInvokerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInvokerOutcomeCallable CreateInvokerCallable(const Model::CreateInvokerRequest& request);

                /**
                 *接口用于创建注册码。
                 * @param req CreateRegisterCodeRequest
                 * @return CreateRegisterCodeOutcome
                 */
                CreateRegisterCodeOutcome CreateRegisterCode(const Model::CreateRegisterCodeRequest &request);
                void CreateRegisterCodeAsync(const Model::CreateRegisterCodeRequest& request, const CreateRegisterCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRegisterCodeOutcomeCallable CreateRegisterCodeCallable(const Model::CreateRegisterCodeRequest& request);

                /**
                 *此接口用于删除命令。
如果命令与执行器关联，则无法被删除。
                 * @param req DeleteCommandRequest
                 * @return DeleteCommandOutcome
                 */
                DeleteCommandOutcome DeleteCommand(const Model::DeleteCommandRequest &request);
                void DeleteCommandAsync(const Model::DeleteCommandRequest& request, const DeleteCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCommandOutcomeCallable DeleteCommandCallable(const Model::DeleteCommandRequest& request);

                /**
                 *批量删除命令接口
                 * @param req DeleteCommandsRequest
                 * @return DeleteCommandsOutcome
                 */
                DeleteCommandsOutcome DeleteCommands(const Model::DeleteCommandsRequest &request);
                void DeleteCommandsAsync(const Model::DeleteCommandsRequest& request, const DeleteCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCommandsOutcomeCallable DeleteCommandsCallable(const Model::DeleteCommandsRequest& request);

                /**
                 *此接口用于删除执行器。
                 * @param req DeleteInvokerRequest
                 * @return DeleteInvokerOutcome
                 */
                DeleteInvokerOutcome DeleteInvoker(const Model::DeleteInvokerRequest &request);
                void DeleteInvokerAsync(const Model::DeleteInvokerRequest& request, const DeleteInvokerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInvokerOutcomeCallable DeleteInvokerCallable(const Model::DeleteInvokerRequest& request);

                /**
                 *此接口用于批量删除注册码。
                 * @param req DeleteRegisterCodesRequest
                 * @return DeleteRegisterCodesOutcome
                 */
                DeleteRegisterCodesOutcome DeleteRegisterCodes(const Model::DeleteRegisterCodesRequest &request);
                void DeleteRegisterCodesAsync(const Model::DeleteRegisterCodesRequest& request, const DeleteRegisterCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRegisterCodesOutcomeCallable DeleteRegisterCodesCallable(const Model::DeleteRegisterCodesRequest& request);

                /**
                 *接口用于删除托管实例。
                 * @param req DeleteRegisterInstanceRequest
                 * @return DeleteRegisterInstanceOutcome
                 */
                DeleteRegisterInstanceOutcome DeleteRegisterInstance(const Model::DeleteRegisterInstanceRequest &request);
                void DeleteRegisterInstanceAsync(const Model::DeleteRegisterInstanceRequest& request, const DeleteRegisterInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRegisterInstanceOutcomeCallable DeleteRegisterInstanceCallable(const Model::DeleteRegisterInstanceRequest& request);

                /**
                 *此接口用于查询自动化助手客户端的状态。
                 * @param req DescribeAutomationAgentStatusRequest
                 * @return DescribeAutomationAgentStatusOutcome
                 */
                DescribeAutomationAgentStatusOutcome DescribeAutomationAgentStatus(const Model::DescribeAutomationAgentStatusRequest &request);
                void DescribeAutomationAgentStatusAsync(const Model::DescribeAutomationAgentStatusRequest& request, const DescribeAutomationAgentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutomationAgentStatusOutcomeCallable DescribeAutomationAgentStatusCallable(const Model::DescribeAutomationAgentStatusRequest& request);

                /**
                 *此接口用于查询命令详情。
                 * @param req DescribeCommandsRequest
                 * @return DescribeCommandsOutcome
                 */
                DescribeCommandsOutcome DescribeCommands(const Model::DescribeCommandsRequest &request);
                void DescribeCommandsAsync(const Model::DescribeCommandsRequest& request, const DescribeCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCommandsOutcomeCallable DescribeCommandsCallable(const Model::DescribeCommandsRequest& request);

                /**
                 *此接口用于查询执行任务详情。
                 * @param req DescribeInvocationTasksRequest
                 * @return DescribeInvocationTasksOutcome
                 */
                DescribeInvocationTasksOutcome DescribeInvocationTasks(const Model::DescribeInvocationTasksRequest &request);
                void DescribeInvocationTasksAsync(const Model::DescribeInvocationTasksRequest& request, const DescribeInvocationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInvocationTasksOutcomeCallable DescribeInvocationTasksCallable(const Model::DescribeInvocationTasksRequest& request);

                /**
                 *此接口用于查询执行活动详情。
                 * @param req DescribeInvocationsRequest
                 * @return DescribeInvocationsOutcome
                 */
                DescribeInvocationsOutcome DescribeInvocations(const Model::DescribeInvocationsRequest &request);
                void DescribeInvocationsAsync(const Model::DescribeInvocationsRequest& request, const DescribeInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInvocationsOutcomeCallable DescribeInvocationsCallable(const Model::DescribeInvocationsRequest& request);

                /**
                 *此接口用于查询执行器的执行记录。
                 * @param req DescribeInvokerRecordsRequest
                 * @return DescribeInvokerRecordsOutcome
                 */
                DescribeInvokerRecordsOutcome DescribeInvokerRecords(const Model::DescribeInvokerRecordsRequest &request);
                void DescribeInvokerRecordsAsync(const Model::DescribeInvokerRecordsRequest& request, const DescribeInvokerRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInvokerRecordsOutcomeCallable DescribeInvokerRecordsCallable(const Model::DescribeInvokerRecordsRequest& request);

                /**
                 *此接口用于查询执行器信息。
                 * @param req DescribeInvokersRequest
                 * @return DescribeInvokersOutcome
                 */
                DescribeInvokersOutcome DescribeInvokers(const Model::DescribeInvokersRequest &request);
                void DescribeInvokersAsync(const Model::DescribeInvokersRequest& request, const DescribeInvokersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInvokersOutcomeCallable DescribeInvokersCallable(const Model::DescribeInvokersRequest& request);

                /**
                 *此接口用于获取配额信息
                 * @param req DescribeQuotasRequest
                 * @return DescribeQuotasOutcome
                 */
                DescribeQuotasOutcome DescribeQuotas(const Model::DescribeQuotasRequest &request);
                void DescribeQuotasAsync(const Model::DescribeQuotasRequest& request, const DescribeQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQuotasOutcomeCallable DescribeQuotasCallable(const Model::DescribeQuotasRequest& request);

                /**
                 *此接口用于查询 TAT 产品后台地域列表。
RegionState 为 AVAILABLE，代表该地域的 TAT 后台服务已经可用；未返回，代表该地域的 TAT 后台服务尚不可用。
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *接口用于查询注册码信息。
                 * @param req DescribeRegisterCodesRequest
                 * @return DescribeRegisterCodesOutcome
                 */
                DescribeRegisterCodesOutcome DescribeRegisterCodes(const Model::DescribeRegisterCodesRequest &request);
                void DescribeRegisterCodesAsync(const Model::DescribeRegisterCodesRequest& request, const DescribeRegisterCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegisterCodesOutcomeCallable DescribeRegisterCodesCallable(const Model::DescribeRegisterCodesRequest& request);

                /**
                 *接口用于查询被托管的实例信息。
                 * @param req DescribeRegisterInstancesRequest
                 * @return DescribeRegisterInstancesOutcome
                 */
                DescribeRegisterInstancesOutcome DescribeRegisterInstances(const Model::DescribeRegisterInstancesRequest &request);
                void DescribeRegisterInstancesAsync(const Model::DescribeRegisterInstancesRequest& request, const DescribeRegisterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegisterInstancesOutcomeCallable DescribeRegisterInstancesCallable(const Model::DescribeRegisterInstancesRequest& request);

                /**
                 *此接口用于查询场景详情。
                 * @param req DescribeScenesRequest
                 * @return DescribeScenesOutcome
                 */
                DescribeScenesOutcome DescribeScenes(const Model::DescribeScenesRequest &request);
                void DescribeScenesAsync(const Model::DescribeScenesRequest& request, const DescribeScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScenesOutcomeCallable DescribeScenesCallable(const Model::DescribeScenesRequest& request);

                /**
                 *此接口用于停止执行器。
                 * @param req DisableInvokerRequest
                 * @return DisableInvokerOutcome
                 */
                DisableInvokerOutcome DisableInvoker(const Model::DisableInvokerRequest &request);
                void DisableInvokerAsync(const Model::DisableInvokerRequest& request, const DisableInvokerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableInvokerOutcomeCallable DisableInvokerCallable(const Model::DisableInvokerRequest& request);

                /**
                 *此接口用于批量禁用注册码。
                 * @param req DisableRegisterCodesRequest
                 * @return DisableRegisterCodesOutcome
                 */
                DisableRegisterCodesOutcome DisableRegisterCodes(const Model::DisableRegisterCodesRequest &request);
                void DisableRegisterCodesAsync(const Model::DisableRegisterCodesRequest& request, const DisableRegisterCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableRegisterCodesOutcomeCallable DisableRegisterCodesCallable(const Model::DisableRegisterCodesRequest& request);

                /**
                 *此接口用于启用执行器。
                 * @param req EnableInvokerRequest
                 * @return EnableInvokerOutcome
                 */
                EnableInvokerOutcome EnableInvoker(const Model::EnableInvokerRequest &request);
                void EnableInvokerAsync(const Model::EnableInvokerRequest& request, const EnableInvokerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableInvokerOutcomeCallable EnableInvokerCallable(const Model::EnableInvokerRequest& request);

                /**
                 *在指定的实例上触发命令，调用成功返回执行活动ID（inv-xxxxxxxx），每个执行活动内部有一个或多个执行任务（invt-xxxxxxxx），每个执行任务代表命令在一台 CVM 或一台 Lighthouse 上的执行记录。

* 如果指定实例未安装 agent，或 agent 不在线，返回失败
* 如果命令类型与 agent 运行环境不符，返回失败
* 指定的实例需要处于 VPC 网络
* 指定的实例需要处于 RUNNING 状态
* 不可同时指定 CVM 和 Lighthouse
                 * @param req InvokeCommandRequest
                 * @return InvokeCommandOutcome
                 */
                InvokeCommandOutcome InvokeCommand(const Model::InvokeCommandRequest &request);
                void InvokeCommandAsync(const Model::InvokeCommandRequest& request, const InvokeCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeCommandOutcomeCallable InvokeCommandCallable(const Model::InvokeCommandRequest& request);

                /**
                 *此接口用于修改命令。
                 * @param req ModifyCommandRequest
                 * @return ModifyCommandOutcome
                 */
                ModifyCommandOutcome ModifyCommand(const Model::ModifyCommandRequest &request);
                void ModifyCommandAsync(const Model::ModifyCommandRequest& request, const ModifyCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCommandOutcomeCallable ModifyCommandCallable(const Model::ModifyCommandRequest& request);

                /**
                 *此接口用于修改执行器。
                 * @param req ModifyInvokerRequest
                 * @return ModifyInvokerOutcome
                 */
                ModifyInvokerOutcome ModifyInvoker(const Model::ModifyInvokerRequest &request);
                void ModifyInvokerAsync(const Model::ModifyInvokerRequest& request, const ModifyInvokerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInvokerOutcomeCallable ModifyInvokerCallable(const Model::ModifyInvokerRequest& request);

                /**
                 *接口用于修改托管实例信息。
                 * @param req ModifyRegisterInstanceRequest
                 * @return ModifyRegisterInstanceOutcome
                 */
                ModifyRegisterInstanceOutcome ModifyRegisterInstance(const Model::ModifyRegisterInstanceRequest &request);
                void ModifyRegisterInstanceAsync(const Model::ModifyRegisterInstanceRequest& request, const ModifyRegisterInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRegisterInstanceOutcomeCallable ModifyRegisterInstanceCallable(const Model::ModifyRegisterInstanceRequest& request);

                /**
                 *此接口用于预览自定义参数替换后的命令内容。不会触发真实执行。
                 * @param req PreviewReplacedCommandContentRequest
                 * @return PreviewReplacedCommandContentOutcome
                 */
                PreviewReplacedCommandContentOutcome PreviewReplacedCommandContent(const Model::PreviewReplacedCommandContentRequest &request);
                void PreviewReplacedCommandContentAsync(const Model::PreviewReplacedCommandContentRequest& request, const PreviewReplacedCommandContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PreviewReplacedCommandContentOutcomeCallable PreviewReplacedCommandContentCallable(const Model::PreviewReplacedCommandContentRequest& request);

                /**
                 *执行命令，调用成功返回执行活动ID（inv-xxxxxxxx），每个执行活动内部有一个或多个执行任务（invt-xxxxxxxx），每个执行任务代表命令在一台 CVM 或一台 Lighthouse 上的执行记录。

* 如果指定实例未安装 agent，或 agent 不在线，返回失败
* 如果命令类型与 agent 运行环境不符，返回失败
* 指定的实例需要处于 VPC 网络
* 指定的实例需要处于 `RUNNING` 状态
* 不可同时指定 CVM 和 Lighthouse
                 * @param req RunCommandRequest
                 * @return RunCommandOutcome
                 */
                RunCommandOutcome RunCommand(const Model::RunCommandRequest &request);
                void RunCommandAsync(const Model::RunCommandRequest& request, const RunCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunCommandOutcomeCallable RunCommandCallable(const Model::RunCommandRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_TATCLIENT_H_
