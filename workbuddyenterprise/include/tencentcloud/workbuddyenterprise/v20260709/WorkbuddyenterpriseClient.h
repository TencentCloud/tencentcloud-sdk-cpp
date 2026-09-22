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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_WORKBUDDYENTERPRISECLIENT_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_WORKBUDDYENTERPRISECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/BindExternalAgentRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/BindExternalAgentResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentSessionRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentSessionResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentVersionRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentVersionResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentVersionFromSourceRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/CreateAgentVersionFromSourceResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DeleteAgentRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DeleteAgentResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentListRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentListResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentSessionRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentSessionResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentSessionListRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentSessionListResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentVersionRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentVersionResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentVersionListRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentVersionListResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeBuiltinModelListRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeBuiltinModelListResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeConnectorListRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeConnectorListResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeExpertListRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeExpertListResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeExternalAgentRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeExternalAgentResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeExternalAgentListRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeExternalAgentListResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeMessageEventListRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeMessageEventListResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeSkillListRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeSkillListResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/MigrateAgentSessionRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/MigrateAgentSessionResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentA2AConfigRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentA2AConfigResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentRoutingRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentRoutingResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentVersionRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentVersionResponse.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/UnbindExternalAgentRequest.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/UnbindExternalAgentResponse.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            class WorkbuddyenterpriseClient : public AbstractClient
            {
            public:
                WorkbuddyenterpriseClient(const Credential &credential, const std::string &region);
                WorkbuddyenterpriseClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindExternalAgentResponse> BindExternalAgentOutcome;
                typedef std::future<BindExternalAgentOutcome> BindExternalAgentOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::BindExternalAgentRequest&, BindExternalAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindExternalAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAgentResponse> CreateAgentOutcome;
                typedef std::future<CreateAgentOutcome> CreateAgentOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::CreateAgentRequest&, CreateAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAgentSessionResponse> CreateAgentSessionOutcome;
                typedef std::future<CreateAgentSessionOutcome> CreateAgentSessionOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::CreateAgentSessionRequest&, CreateAgentSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAgentVersionResponse> CreateAgentVersionOutcome;
                typedef std::future<CreateAgentVersionOutcome> CreateAgentVersionOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::CreateAgentVersionRequest&, CreateAgentVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAgentVersionFromSourceResponse> CreateAgentVersionFromSourceOutcome;
                typedef std::future<CreateAgentVersionFromSourceOutcome> CreateAgentVersionFromSourceOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::CreateAgentVersionFromSourceRequest&, CreateAgentVersionFromSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentVersionFromSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAgentResponse> DeleteAgentOutcome;
                typedef std::future<DeleteAgentOutcome> DeleteAgentOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::DeleteAgentRequest&, DeleteAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentResponse> DescribeAgentOutcome;
                typedef std::future<DescribeAgentOutcome> DescribeAgentOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::DescribeAgentRequest&, DescribeAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentListResponse> DescribeAgentListOutcome;
                typedef std::future<DescribeAgentListOutcome> DescribeAgentListOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::DescribeAgentListRequest&, DescribeAgentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentSessionResponse> DescribeAgentSessionOutcome;
                typedef std::future<DescribeAgentSessionOutcome> DescribeAgentSessionOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::DescribeAgentSessionRequest&, DescribeAgentSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentSessionListResponse> DescribeAgentSessionListOutcome;
                typedef std::future<DescribeAgentSessionListOutcome> DescribeAgentSessionListOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::DescribeAgentSessionListRequest&, DescribeAgentSessionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentSessionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentVersionResponse> DescribeAgentVersionOutcome;
                typedef std::future<DescribeAgentVersionOutcome> DescribeAgentVersionOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::DescribeAgentVersionRequest&, DescribeAgentVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentVersionListResponse> DescribeAgentVersionListOutcome;
                typedef std::future<DescribeAgentVersionListOutcome> DescribeAgentVersionListOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::DescribeAgentVersionListRequest&, DescribeAgentVersionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentVersionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBuiltinModelListResponse> DescribeBuiltinModelListOutcome;
                typedef std::future<DescribeBuiltinModelListOutcome> DescribeBuiltinModelListOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::DescribeBuiltinModelListRequest&, DescribeBuiltinModelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBuiltinModelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConnectorListResponse> DescribeConnectorListOutcome;
                typedef std::future<DescribeConnectorListOutcome> DescribeConnectorListOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::DescribeConnectorListRequest&, DescribeConnectorListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConnectorListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExpertListResponse> DescribeExpertListOutcome;
                typedef std::future<DescribeExpertListOutcome> DescribeExpertListOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::DescribeExpertListRequest&, DescribeExpertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpertListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExternalAgentResponse> DescribeExternalAgentOutcome;
                typedef std::future<DescribeExternalAgentOutcome> DescribeExternalAgentOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::DescribeExternalAgentRequest&, DescribeExternalAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExternalAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExternalAgentListResponse> DescribeExternalAgentListOutcome;
                typedef std::future<DescribeExternalAgentListOutcome> DescribeExternalAgentListOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::DescribeExternalAgentListRequest&, DescribeExternalAgentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExternalAgentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageEventListResponse> DescribeMessageEventListOutcome;
                typedef std::future<DescribeMessageEventListOutcome> DescribeMessageEventListOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::DescribeMessageEventListRequest&, DescribeMessageEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillListResponse> DescribeSkillListOutcome;
                typedef std::future<DescribeSkillListOutcome> DescribeSkillListOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::DescribeSkillListRequest&, DescribeSkillListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillListAsyncHandler;
                typedef Outcome<Core::Error, Model::MigrateAgentSessionResponse> MigrateAgentSessionOutcome;
                typedef std::future<MigrateAgentSessionOutcome> MigrateAgentSessionOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::MigrateAgentSessionRequest&, MigrateAgentSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigrateAgentSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentResponse> ModifyAgentOutcome;
                typedef std::future<ModifyAgentOutcome> ModifyAgentOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::ModifyAgentRequest&, ModifyAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentA2AConfigResponse> ModifyAgentA2AConfigOutcome;
                typedef std::future<ModifyAgentA2AConfigOutcome> ModifyAgentA2AConfigOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::ModifyAgentA2AConfigRequest&, ModifyAgentA2AConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentA2AConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentRoutingResponse> ModifyAgentRoutingOutcome;
                typedef std::future<ModifyAgentRoutingOutcome> ModifyAgentRoutingOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::ModifyAgentRoutingRequest&, ModifyAgentRoutingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentRoutingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentVersionResponse> ModifyAgentVersionOutcome;
                typedef std::future<ModifyAgentVersionOutcome> ModifyAgentVersionOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::ModifyAgentVersionRequest&, ModifyAgentVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindExternalAgentResponse> UnbindExternalAgentOutcome;
                typedef std::future<UnbindExternalAgentOutcome> UnbindExternalAgentOutcomeCallable;
                typedef std::function<void(const WorkbuddyenterpriseClient*, const Model::UnbindExternalAgentRequest&, UnbindExternalAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindExternalAgentAsyncHandler;



                /**
                 *把外部 agent 绑定到某 managed agent
                 * @param req BindExternalAgentRequest
                 * @return BindExternalAgentOutcome
                 */
                BindExternalAgentOutcome BindExternalAgent(const Model::BindExternalAgentRequest &request);
                void BindExternalAgentAsync(const Model::BindExternalAgentRequest& request, const BindExternalAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindExternalAgentOutcomeCallable BindExternalAgentCallable(const Model::BindExternalAgentRequest& request);

                /**
                 *创建一个新的 Managed Agent，同时自动生成 default 版本。配置采用 Manifest v2.0。
                 * @param req CreateAgentRequest
                 * @return CreateAgentOutcome
                 */
                CreateAgentOutcome CreateAgent(const Model::CreateAgentRequest &request);
                void CreateAgentAsync(const Model::CreateAgentRequest& request, const CreateAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentOutcomeCallable CreateAgentCallable(const Model::CreateAgentRequest& request);

                /**
                 *为指定 Agent 创建新的会话，返回会话 ID 和聊天凭证。
                 * @param req CreateAgentSessionRequest
                 * @return CreateAgentSessionOutcome
                 */
                CreateAgentSessionOutcome CreateAgentSession(const Model::CreateAgentSessionRequest &request);
                void CreateAgentSessionAsync(const Model::CreateAgentSessionRequest& request, const CreateAgentSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentSessionOutcomeCallable CreateAgentSessionCallable(const Model::CreateAgentSessionRequest& request);

                /**
                 *完全新建版本：外部准备完整 Manifest 后直接传入，不引用任何已有版本。
                 * @param req CreateAgentVersionRequest
                 * @return CreateAgentVersionOutcome
                 */
                CreateAgentVersionOutcome CreateAgentVersion(const Model::CreateAgentVersionRequest &request);
                void CreateAgentVersionAsync(const Model::CreateAgentVersionRequest& request, const CreateAgentVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentVersionOutcomeCallable CreateAgentVersionCallable(const Model::CreateAgentVersionRequest& request);

                /**
                 *基于源版本创建新版本：Manifest / Model / Description 传入即整体覆盖，未传则沿用源版本。
                 * @param req CreateAgentVersionFromSourceRequest
                 * @return CreateAgentVersionFromSourceOutcome
                 */
                CreateAgentVersionFromSourceOutcome CreateAgentVersionFromSource(const Model::CreateAgentVersionFromSourceRequest &request);
                void CreateAgentVersionFromSourceAsync(const Model::CreateAgentVersionFromSourceRequest& request, const CreateAgentVersionFromSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentVersionFromSourceOutcomeCallable CreateAgentVersionFromSourceCallable(const Model::CreateAgentVersionFromSourceRequest& request);

                /**
                 *删除指定的 Agent 及其所有版本。删除后不可恢复。
                 * @param req DeleteAgentRequest
                 * @return DeleteAgentOutcome
                 */
                DeleteAgentOutcome DeleteAgent(const Model::DeleteAgentRequest &request);
                void DeleteAgentAsync(const Model::DeleteAgentRequest& request, const DeleteAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAgentOutcomeCallable DeleteAgentCallable(const Model::DeleteAgentRequest& request);

                /**
                 *查询单个 Agent 的详细信息，包括基础配置和路由配置。
                 * @param req DescribeAgentRequest
                 * @return DescribeAgentOutcome
                 */
                DescribeAgentOutcome DescribeAgent(const Model::DescribeAgentRequest &request);
                void DescribeAgentAsync(const Model::DescribeAgentRequest& request, const DescribeAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentOutcomeCallable DescribeAgentCallable(const Model::DescribeAgentRequest& request);

                /**
                 *查询当前企业的 Agent 列表，支持分页、过滤和排序。
                 * @param req DescribeAgentListRequest
                 * @return DescribeAgentListOutcome
                 */
                DescribeAgentListOutcome DescribeAgentList(const Model::DescribeAgentListRequest &request);
                void DescribeAgentListAsync(const Model::DescribeAgentListRequest& request, const DescribeAgentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentListOutcomeCallable DescribeAgentListCallable(const Model::DescribeAgentListRequest& request);

                /**
                 *查询单个 Agent 会话详情：返回会话基础信息（会话名称 / Agent / 版本 / 状态 / 来源 / 发起人）与可用的聊天接入点列表（EndpointSet）。数据面鉴权走 DescribeUserAccessToken 的用户级访问令牌。
                 * @param req DescribeAgentSessionRequest
                 * @return DescribeAgentSessionOutcome
                 */
                DescribeAgentSessionOutcome DescribeAgentSession(const Model::DescribeAgentSessionRequest &request);
                void DescribeAgentSessionAsync(const Model::DescribeAgentSessionRequest& request, const DescribeAgentSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentSessionOutcomeCallable DescribeAgentSessionCallable(const Model::DescribeAgentSessionRequest& request);

                /**
                 *分页查询企业下所有会话（跨 Agent）：支持按 SessionId / Status / AgentId / UserId 过滤，按创建 / 更新时间排序，返回会话摘要列表。
                 * @param req DescribeAgentSessionListRequest
                 * @return DescribeAgentSessionListOutcome
                 */
                DescribeAgentSessionListOutcome DescribeAgentSessionList(const Model::DescribeAgentSessionListRequest &request);
                void DescribeAgentSessionListAsync(const Model::DescribeAgentSessionListRequest& request, const DescribeAgentSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentSessionListOutcomeCallable DescribeAgentSessionListCallable(const Model::DescribeAgentSessionListRequest& request);

                /**
                 *查询单个版本的详细信息，包括 Manifest、Model、状态等。
                 * @param req DescribeAgentVersionRequest
                 * @return DescribeAgentVersionOutcome
                 */
                DescribeAgentVersionOutcome DescribeAgentVersion(const Model::DescribeAgentVersionRequest &request);
                void DescribeAgentVersionAsync(const Model::DescribeAgentVersionRequest& request, const DescribeAgentVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentVersionOutcomeCallable DescribeAgentVersionCallable(const Model::DescribeAgentVersionRequest& request);

                /**
                 *查询指定 Agent 下的版本列表，支持分页和版本类型过滤。
                 * @param req DescribeAgentVersionListRequest
                 * @return DescribeAgentVersionListOutcome
                 */
                DescribeAgentVersionListOutcome DescribeAgentVersionList(const Model::DescribeAgentVersionListRequest &request);
                void DescribeAgentVersionListAsync(const Model::DescribeAgentVersionListRequest& request, const DescribeAgentVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentVersionListOutcomeCallable DescribeAgentVersionListCallable(const Model::DescribeAgentVersionListRequest& request);

                /**
                 *查询当前企业的内置模型列表，支持分页与过滤。内置模型由平台预置，企业可按需启用/停用。过滤字段支持：ModelId（模型ID，模糊）、Name（模型名称，模糊）、Vendor（供应商，模糊）、Status（状态，精确：enabled/disabled）。
                 * @param req DescribeBuiltinModelListRequest
                 * @return DescribeBuiltinModelListOutcome
                 */
                DescribeBuiltinModelListOutcome DescribeBuiltinModelList(const Model::DescribeBuiltinModelListRequest &request);
                void DescribeBuiltinModelListAsync(const Model::DescribeBuiltinModelListRequest& request, const DescribeBuiltinModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBuiltinModelListOutcomeCallable DescribeBuiltinModelListCallable(const Model::DescribeBuiltinModelListRequest& request);

                /**
                 *查询指定企业下的连接器列表（PageNumber/PageSize 分页，支持名称模糊与状态、来源过滤）。
                 * @param req DescribeConnectorListRequest
                 * @return DescribeConnectorListOutcome
                 */
                DescribeConnectorListOutcome DescribeConnectorList(const Model::DescribeConnectorListRequest &request);
                void DescribeConnectorListAsync(const Model::DescribeConnectorListRequest& request, const DescribeConnectorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConnectorListOutcomeCallable DescribeConnectorListCallable(const Model::DescribeConnectorListRequest& request);

                /**
                 *分页查询 Expert 列表，支持关键词、分类、发布状态过滤。
                 * @param req DescribeExpertListRequest
                 * @return DescribeExpertListOutcome
                 */
                DescribeExpertListOutcome DescribeExpertList(const Model::DescribeExpertListRequest &request);
                void DescribeExpertListAsync(const Model::DescribeExpertListRequest& request, const DescribeExpertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExpertListOutcomeCallable DescribeExpertListCallable(const Model::DescribeExpertListRequest& request);

                /**
                 *查询某 managed agent 绑定的单个外部 agent 详情
                 * @param req DescribeExternalAgentRequest
                 * @return DescribeExternalAgentOutcome
                 */
                DescribeExternalAgentOutcome DescribeExternalAgent(const Model::DescribeExternalAgentRequest &request);
                void DescribeExternalAgentAsync(const Model::DescribeExternalAgentRequest& request, const DescribeExternalAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExternalAgentOutcomeCallable DescribeExternalAgentCallable(const Model::DescribeExternalAgentRequest& request);

                /**
                 *列某 managed agent 绑定的外部 agent 列表
                 * @param req DescribeExternalAgentListRequest
                 * @return DescribeExternalAgentListOutcome
                 */
                DescribeExternalAgentListOutcome DescribeExternalAgentList(const Model::DescribeExternalAgentListRequest &request);
                void DescribeExternalAgentListAsync(const Model::DescribeExternalAgentListRequest& request, const DescribeExternalAgentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExternalAgentListOutcomeCallable DescribeExternalAgentListCallable(const Model::DescribeExternalAgentListRequest& request);

                /**
                 *按 Session 分页查询消息事件
                 * @param req DescribeMessageEventListRequest
                 * @return DescribeMessageEventListOutcome
                 */
                DescribeMessageEventListOutcome DescribeMessageEventList(const Model::DescribeMessageEventListRequest &request);
                void DescribeMessageEventListAsync(const Model::DescribeMessageEventListRequest& request, const DescribeMessageEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageEventListOutcomeCallable DescribeMessageEventListCallable(const Model::DescribeMessageEventListRequest& request);

                /**
                 *分页查询 Skill 列表，支持关键词、分类、发布状态过滤。
                 * @param req DescribeSkillListRequest
                 * @return DescribeSkillListOutcome
                 */
                DescribeSkillListOutcome DescribeSkillList(const Model::DescribeSkillListRequest &request);
                void DescribeSkillListAsync(const Model::DescribeSkillListRequest& request, const DescribeSkillListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillListOutcomeCallable DescribeSkillListCallable(const Model::DescribeSkillListRequest& request);

                /**
                 *将指定会话迁移到目标版本。SessionID / RuntimeID 保持不变，通过 AgentOS UpdateSession 在原沙箱上更新 manifest 到新版本；AgentId 必须与原 Session 一致（禁止跨 Agent 迁移）；ChatToken 复用旧值不轮转。
                 * @param req MigrateAgentSessionRequest
                 * @return MigrateAgentSessionOutcome
                 */
                MigrateAgentSessionOutcome MigrateAgentSession(const Model::MigrateAgentSessionRequest &request);
                void MigrateAgentSessionAsync(const Model::MigrateAgentSessionRequest& request, const MigrateAgentSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigrateAgentSessionOutcomeCallable MigrateAgentSessionCallable(const Model::MigrateAgentSessionRequest& request);

                /**
                 *修改 Agent 基础信息（名称、描述、头像）。AgentName / Description / AvatarUrl 均为可选，仅传递需要更新的字段。
                 * @param req ModifyAgentRequest
                 * @return ModifyAgentOutcome
                 */
                ModifyAgentOutcome ModifyAgent(const Model::ModifyAgentRequest &request);
                void ModifyAgentAsync(const Model::ModifyAgentRequest& request, const ModifyAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentOutcomeCallable ModifyAgentCallable(const Model::ModifyAgentRequest& request);

                /**
                 *修改 Agent 的 A2A 配置。A2AEnabled 是 Agent 级唯一开关，与具体版本和流量分发策略无关。
                 * @param req ModifyAgentA2AConfigRequest
                 * @return ModifyAgentA2AConfigOutcome
                 */
                ModifyAgentA2AConfigOutcome ModifyAgentA2AConfig(const Model::ModifyAgentA2AConfigRequest &request);
                void ModifyAgentA2AConfigAsync(const Model::ModifyAgentA2AConfigRequest& request, const ModifyAgentA2AConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentA2AConfigOutcomeCallable ModifyAgentA2AConfigCallable(const Model::ModifyAgentA2AConfigRequest& request);

                /**
                 *覆盖式写入 Agent 路由配置（版本权重）。所有 VersionId 必须属于同一 Agent 且未弃用；允许空数组（下线 Agent 对外流量）；非空时权重总和须等于 1。
                 * @param req ModifyAgentRoutingRequest
                 * @return ModifyAgentRoutingOutcome
                 */
                ModifyAgentRoutingOutcome ModifyAgentRouting(const Model::ModifyAgentRoutingRequest &request);
                void ModifyAgentRoutingAsync(const Model::ModifyAgentRoutingRequest& request, const ModifyAgentRoutingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentRoutingOutcomeCallable ModifyAgentRoutingCallable(const Model::ModifyAgentRoutingRequest& request);

                /**
                 *原地更新 default 或 test 版本的 Manifest / Model / Description / SandboxTemplateId / ConnectorSet（prod 版本冻结不可修改），五个可选字段至少提供一个。ConnectorSet 为全量覆盖语义：缺省表示不改动连接器绑定；空数组表示解绑全部连接器。
                 * @param req ModifyAgentVersionRequest
                 * @return ModifyAgentVersionOutcome
                 */
                ModifyAgentVersionOutcome ModifyAgentVersion(const Model::ModifyAgentVersionRequest &request);
                void ModifyAgentVersionAsync(const Model::ModifyAgentVersionRequest& request, const ModifyAgentVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentVersionOutcomeCallable ModifyAgentVersionCallable(const Model::ModifyAgentVersionRequest& request);

                /**
                 *解除外部 agent 与 managed agent 的绑定
                 * @param req UnbindExternalAgentRequest
                 * @return UnbindExternalAgentOutcome
                 */
                UnbindExternalAgentOutcome UnbindExternalAgent(const Model::UnbindExternalAgentRequest &request);
                void UnbindExternalAgentAsync(const Model::UnbindExternalAgentRequest& request, const UnbindExternalAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindExternalAgentOutcomeCallable UnbindExternalAgentCallable(const Model::UnbindExternalAgentRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_WORKBUDDYENTERPRISECLIENT_H_
