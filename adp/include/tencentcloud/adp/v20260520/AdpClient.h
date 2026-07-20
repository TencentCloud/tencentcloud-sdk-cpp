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

#ifndef TENCENTCLOUD_ADP_V20260520_ADPCLIENT_H_
#define TENCENTCLOUD_ADP_V20260520_ADPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/adp/v20260520/model/CopyAgentFromAppRequest.h>
#include <tencentcloud/adp/v20260520/model/CopyAgentFromAppResponse.h>
#include <tencentcloud/adp/v20260520/model/CopyAppRequest.h>
#include <tencentcloud/adp/v20260520/model/CopyAppResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateAgentRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateAgentResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateAppRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateAppResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateConversationRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateConversationResponse.h>
#include <tencentcloud/adp/v20260520/model/CreatePluginRequest.h>
#include <tencentcloud/adp/v20260520/model/CreatePluginResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateReleaseRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateReleaseResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateSkillRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateSkillResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateSkillShareRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateSkillShareResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateSpaceRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateSpaceResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateVariableRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateVariableResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateWebSocketTokenRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateWebSocketTokenResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateWorkspaceCredentialRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateWorkspaceCredentialResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteAgentRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteAgentResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteAppRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteAppResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteConversationRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteConversationResponse.h>
#include <tencentcloud/adp/v20260520/model/DeletePluginRequest.h>
#include <tencentcloud/adp/v20260520/model/DeletePluginResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteSkillRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteSkillResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteSkillShareRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteSkillShareResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteSpaceRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteSpaceResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteVariableRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteVariableResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAccountListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAccountListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAgentDetailRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAgentDetailResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAgentReleasePreviewListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAgentReleasePreviewListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAgentSummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAgentSummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppSummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppSummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAuditLogListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAuditLogListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAuditLogMetaRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAuditLogMetaResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeConversationRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeConversationResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeConversationListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeConversationListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeConversationMessageListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeConversationMessageListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeLatestReleaseRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeLatestReleaseResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeModelListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeModelListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribePluginRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribePluginResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribePluginSummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribePluginSummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeReleaseListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeReleaseListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeReleaseSummaryRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeReleaseSummaryResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillCategoryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillCategoryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillDetailRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillDetailResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillReferenceListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillReferenceListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillSummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillSummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeSpaceListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeSpaceListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeSystemVariableListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeSystemVariableListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeVariableRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeVariableResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeVariableListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeVariableListResponse.h>
#include <tencentcloud/adp/v20260520/model/FavoritePluginRequest.h>
#include <tencentcloud/adp/v20260520/model/FavoritePluginResponse.h>
#include <tencentcloud/adp/v20260520/model/FavoriteSkillRequest.h>
#include <tencentcloud/adp/v20260520/model/FavoriteSkillResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyAgentRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyAgentResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyAppRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyAppResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyConversationRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyConversationResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyPluginRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyPluginResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifySkillRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifySkillResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifySpaceRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifySpaceResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyVariableRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyVariableResponse.h>
#include <tencentcloud/adp/v20260520/model/ReleaseSkillRequest.h>
#include <tencentcloud/adp/v20260520/model/ReleaseSkillResponse.h>
#include <tencentcloud/adp/v20260520/model/ResetConversationRequest.h>
#include <tencentcloud/adp/v20260520/model/ResetConversationResponse.h>
#include <tencentcloud/adp/v20260520/model/RetryReleaseRequest.h>
#include <tencentcloud/adp/v20260520/model/RetryReleaseResponse.h>
#include <tencentcloud/adp/v20260520/model/RollbackReleaseRequest.h>
#include <tencentcloud/adp/v20260520/model/RollbackReleaseResponse.h>
#include <tencentcloud/adp/v20260520/model/UnfavoritePluginRequest.h>
#include <tencentcloud/adp/v20260520/model/UnfavoritePluginResponse.h>
#include <tencentcloud/adp/v20260520/model/UnfavoriteSkillRequest.h>
#include <tencentcloud/adp/v20260520/model/UnfavoriteSkillResponse.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            class AdpClient : public AbstractClient
            {
            public:
                AdpClient(const Credential &credential, const std::string &region);
                AdpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CopyAgentFromAppResponse> CopyAgentFromAppOutcome;
                typedef std::future<CopyAgentFromAppOutcome> CopyAgentFromAppOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CopyAgentFromAppRequest&, CopyAgentFromAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyAgentFromAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyAppResponse> CopyAppOutcome;
                typedef std::future<CopyAppOutcome> CopyAppOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CopyAppRequest&, CopyAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAgentResponse> CreateAgentOutcome;
                typedef std::future<CreateAgentOutcome> CreateAgentOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateAgentRequest&, CreateAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAppResponse> CreateAppOutcome;
                typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateAppRequest&, CreateAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConversationResponse> CreateConversationOutcome;
                typedef std::future<CreateConversationOutcome> CreateConversationOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateConversationRequest&, CreateConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePluginResponse> CreatePluginOutcome;
                typedef std::future<CreatePluginOutcome> CreatePluginOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreatePluginRequest&, CreatePluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePluginAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReleaseResponse> CreateReleaseOutcome;
                typedef std::future<CreateReleaseOutcome> CreateReleaseOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateReleaseRequest&, CreateReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSkillResponse> CreateSkillOutcome;
                typedef std::future<CreateSkillOutcome> CreateSkillOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateSkillRequest&, CreateSkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSkillAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSkillShareResponse> CreateSkillShareOutcome;
                typedef std::future<CreateSkillShareOutcome> CreateSkillShareOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateSkillShareRequest&, CreateSkillShareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSkillShareAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSpaceResponse> CreateSpaceOutcome;
                typedef std::future<CreateSpaceOutcome> CreateSpaceOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateSpaceRequest&, CreateSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVariableResponse> CreateVariableOutcome;
                typedef std::future<CreateVariableOutcome> CreateVariableOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateVariableRequest&, CreateVariableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVariableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWebSocketTokenResponse> CreateWebSocketTokenOutcome;
                typedef std::future<CreateWebSocketTokenOutcome> CreateWebSocketTokenOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateWebSocketTokenRequest&, CreateWebSocketTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebSocketTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkspaceCredentialResponse> CreateWorkspaceCredentialOutcome;
                typedef std::future<CreateWorkspaceCredentialOutcome> CreateWorkspaceCredentialOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateWorkspaceCredentialRequest&, CreateWorkspaceCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspaceCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAgentResponse> DeleteAgentOutcome;
                typedef std::future<DeleteAgentOutcome> DeleteAgentOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteAgentRequest&, DeleteAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAppResponse> DeleteAppOutcome;
                typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteAppRequest&, DeleteAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConversationResponse> DeleteConversationOutcome;
                typedef std::future<DeleteConversationOutcome> DeleteConversationOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteConversationRequest&, DeleteConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePluginResponse> DeletePluginOutcome;
                typedef std::future<DeletePluginOutcome> DeletePluginOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeletePluginRequest&, DeletePluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePluginAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSkillResponse> DeleteSkillOutcome;
                typedef std::future<DeleteSkillOutcome> DeleteSkillOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteSkillRequest&, DeleteSkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSkillAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSkillShareResponse> DeleteSkillShareOutcome;
                typedef std::future<DeleteSkillShareOutcome> DeleteSkillShareOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteSkillShareRequest&, DeleteSkillShareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSkillShareAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSpaceResponse> DeleteSpaceOutcome;
                typedef std::future<DeleteSpaceOutcome> DeleteSpaceOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteSpaceRequest&, DeleteSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVariableResponse> DeleteVariableOutcome;
                typedef std::future<DeleteVariableOutcome> DeleteVariableOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteVariableRequest&, DeleteVariableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVariableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountListResponse> DescribeAccountListOutcome;
                typedef std::future<DescribeAccountListOutcome> DescribeAccountListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAccountListRequest&, DescribeAccountListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentDetailResponse> DescribeAgentDetailOutcome;
                typedef std::future<DescribeAgentDetailOutcome> DescribeAgentDetailOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAgentDetailRequest&, DescribeAgentDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentReleasePreviewListResponse> DescribeAgentReleasePreviewListOutcome;
                typedef std::future<DescribeAgentReleasePreviewListOutcome> DescribeAgentReleasePreviewListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAgentReleasePreviewListRequest&, DescribeAgentReleasePreviewListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentReleasePreviewListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentSummaryListResponse> DescribeAgentSummaryListOutcome;
                typedef std::future<DescribeAgentSummaryListOutcome> DescribeAgentSummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAgentSummaryListRequest&, DescribeAgentSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppResponse> DescribeAppOutcome;
                typedef std::future<DescribeAppOutcome> DescribeAppOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAppRequest&, DescribeAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppSummaryListResponse> DescribeAppSummaryListOutcome;
                typedef std::future<DescribeAppSummaryListOutcome> DescribeAppSummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAppSummaryListRequest&, DescribeAppSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditLogListResponse> DescribeAuditLogListOutcome;
                typedef std::future<DescribeAuditLogListOutcome> DescribeAuditLogListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAuditLogListRequest&, DescribeAuditLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditLogMetaResponse> DescribeAuditLogMetaOutcome;
                typedef std::future<DescribeAuditLogMetaOutcome> DescribeAuditLogMetaOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAuditLogMetaRequest&, DescribeAuditLogMetaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogMetaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConversationResponse> DescribeConversationOutcome;
                typedef std::future<DescribeConversationOutcome> DescribeConversationOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeConversationRequest&, DescribeConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConversationListResponse> DescribeConversationListOutcome;
                typedef std::future<DescribeConversationListOutcome> DescribeConversationListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeConversationListRequest&, DescribeConversationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConversationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConversationMessageListResponse> DescribeConversationMessageListOutcome;
                typedef std::future<DescribeConversationMessageListOutcome> DescribeConversationMessageListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeConversationMessageListRequest&, DescribeConversationMessageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConversationMessageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLatestReleaseResponse> DescribeLatestReleaseOutcome;
                typedef std::future<DescribeLatestReleaseOutcome> DescribeLatestReleaseOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeLatestReleaseRequest&, DescribeLatestReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLatestReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelListResponse> DescribeModelListOutcome;
                typedef std::future<DescribeModelListOutcome> DescribeModelListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeModelListRequest&, DescribeModelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePluginResponse> DescribePluginOutcome;
                typedef std::future<DescribePluginOutcome> DescribePluginOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribePluginRequest&, DescribePluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePluginSummaryListResponse> DescribePluginSummaryListOutcome;
                typedef std::future<DescribePluginSummaryListOutcome> DescribePluginSummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribePluginSummaryListRequest&, DescribePluginSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReleaseListResponse> DescribeReleaseListOutcome;
                typedef std::future<DescribeReleaseListOutcome> DescribeReleaseListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeReleaseListRequest&, DescribeReleaseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReleaseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReleaseSummaryResponse> DescribeReleaseSummaryOutcome;
                typedef std::future<DescribeReleaseSummaryOutcome> DescribeReleaseSummaryOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeReleaseSummaryRequest&, DescribeReleaseSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReleaseSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillCategoryListResponse> DescribeSkillCategoryListOutcome;
                typedef std::future<DescribeSkillCategoryListOutcome> DescribeSkillCategoryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeSkillCategoryListRequest&, DescribeSkillCategoryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillCategoryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillDetailResponse> DescribeSkillDetailOutcome;
                typedef std::future<DescribeSkillDetailOutcome> DescribeSkillDetailOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeSkillDetailRequest&, DescribeSkillDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillReferenceListResponse> DescribeSkillReferenceListOutcome;
                typedef std::future<DescribeSkillReferenceListOutcome> DescribeSkillReferenceListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeSkillReferenceListRequest&, DescribeSkillReferenceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillReferenceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillSummaryListResponse> DescribeSkillSummaryListOutcome;
                typedef std::future<DescribeSkillSummaryListOutcome> DescribeSkillSummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeSkillSummaryListRequest&, DescribeSkillSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpaceListResponse> DescribeSpaceListOutcome;
                typedef std::future<DescribeSpaceListOutcome> DescribeSpaceListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeSpaceListRequest&, DescribeSpaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSystemVariableListResponse> DescribeSystemVariableListOutcome;
                typedef std::future<DescribeSystemVariableListOutcome> DescribeSystemVariableListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeSystemVariableListRequest&, DescribeSystemVariableListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSystemVariableListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVariableResponse> DescribeVariableOutcome;
                typedef std::future<DescribeVariableOutcome> DescribeVariableOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeVariableRequest&, DescribeVariableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVariableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVariableListResponse> DescribeVariableListOutcome;
                typedef std::future<DescribeVariableListOutcome> DescribeVariableListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeVariableListRequest&, DescribeVariableListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVariableListAsyncHandler;
                typedef Outcome<Core::Error, Model::FavoritePluginResponse> FavoritePluginOutcome;
                typedef std::future<FavoritePluginOutcome> FavoritePluginOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::FavoritePluginRequest&, FavoritePluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FavoritePluginAsyncHandler;
                typedef Outcome<Core::Error, Model::FavoriteSkillResponse> FavoriteSkillOutcome;
                typedef std::future<FavoriteSkillOutcome> FavoriteSkillOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::FavoriteSkillRequest&, FavoriteSkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FavoriteSkillAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentResponse> ModifyAgentOutcome;
                typedef std::future<ModifyAgentOutcome> ModifyAgentOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyAgentRequest&, ModifyAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAppResponse> ModifyAppOutcome;
                typedef std::future<ModifyAppOutcome> ModifyAppOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyAppRequest&, ModifyAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConversationResponse> ModifyConversationOutcome;
                typedef std::future<ModifyConversationOutcome> ModifyConversationOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyConversationRequest&, ModifyConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPluginResponse> ModifyPluginOutcome;
                typedef std::future<ModifyPluginOutcome> ModifyPluginOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyPluginRequest&, ModifyPluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPluginAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySkillResponse> ModifySkillOutcome;
                typedef std::future<ModifySkillOutcome> ModifySkillOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifySkillRequest&, ModifySkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySkillAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySpaceResponse> ModifySpaceOutcome;
                typedef std::future<ModifySpaceOutcome> ModifySpaceOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifySpaceRequest&, ModifySpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVariableResponse> ModifyVariableOutcome;
                typedef std::future<ModifyVariableOutcome> ModifyVariableOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyVariableRequest&, ModifyVariableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVariableAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseSkillResponse> ReleaseSkillOutcome;
                typedef std::future<ReleaseSkillOutcome> ReleaseSkillOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ReleaseSkillRequest&, ReleaseSkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseSkillAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetConversationResponse> ResetConversationOutcome;
                typedef std::future<ResetConversationOutcome> ResetConversationOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ResetConversationRequest&, ResetConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryReleaseResponse> RetryReleaseOutcome;
                typedef std::future<RetryReleaseOutcome> RetryReleaseOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::RetryReleaseRequest&, RetryReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackReleaseResponse> RollbackReleaseOutcome;
                typedef std::future<RollbackReleaseOutcome> RollbackReleaseOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::RollbackReleaseRequest&, RollbackReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::UnfavoritePluginResponse> UnfavoritePluginOutcome;
                typedef std::future<UnfavoritePluginOutcome> UnfavoritePluginOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::UnfavoritePluginRequest&, UnfavoritePluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnfavoritePluginAsyncHandler;
                typedef Outcome<Core::Error, Model::UnfavoriteSkillResponse> UnfavoriteSkillOutcome;
                typedef std::future<UnfavoriteSkillOutcome> UnfavoriteSkillOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::UnfavoriteSkillRequest&, UnfavoriteSkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnfavoriteSkillAsyncHandler;



                /**
                 *创建Agent
                 * @param req CopyAgentFromAppRequest
                 * @return CopyAgentFromAppOutcome
                 */
                CopyAgentFromAppOutcome CopyAgentFromApp(const Model::CopyAgentFromAppRequest &request);
                void CopyAgentFromAppAsync(const Model::CopyAgentFromAppRequest& request, const CopyAgentFromAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyAgentFromAppOutcomeCallable CopyAgentFromAppCallable(const Model::CopyAgentFromAppRequest& request);

                /**
                 *复制应用
                 * @param req CopyAppRequest
                 * @return CopyAppOutcome
                 */
                CopyAppOutcome CopyApp(const Model::CopyAppRequest &request);
                void CopyAppAsync(const Model::CopyAppRequest& request, const CopyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyAppOutcomeCallable CopyAppCallable(const Model::CopyAppRequest& request);

                /**
                 *创建Agent
                 * @param req CreateAgentRequest
                 * @return CreateAgentOutcome
                 */
                CreateAgentOutcome CreateAgent(const Model::CreateAgentRequest &request);
                void CreateAgentAsync(const Model::CreateAgentRequest& request, const CreateAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentOutcomeCallable CreateAgentCallable(const Model::CreateAgentRequest& request);

                /**
                 *创建应用
                 * @param req CreateAppRequest
                 * @return CreateAppOutcome
                 */
                CreateAppOutcome CreateApp(const Model::CreateAppRequest &request);
                void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request);

                /**
                 *新建会话
                 * @param req CreateConversationRequest
                 * @return CreateConversationOutcome
                 */
                CreateConversationOutcome CreateConversation(const Model::CreateConversationRequest &request);
                void CreateConversationAsync(const Model::CreateConversationRequest& request, const CreateConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConversationOutcomeCallable CreateConversationCallable(const Model::CreateConversationRequest& request);

                /**
                 *获取插件详情
                 * @param req CreatePluginRequest
                 * @return CreatePluginOutcome
                 */
                CreatePluginOutcome CreatePlugin(const Model::CreatePluginRequest &request);
                void CreatePluginAsync(const Model::CreatePluginRequest& request, const CreatePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePluginOutcomeCallable CreatePluginCallable(const Model::CreatePluginRequest& request);

                /**
                 *新增发布任务
                 * @param req CreateReleaseRequest
                 * @return CreateReleaseOutcome
                 */
                CreateReleaseOutcome CreateRelease(const Model::CreateReleaseRequest &request);
                void CreateReleaseAsync(const Model::CreateReleaseRequest& request, const CreateReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReleaseOutcomeCallable CreateReleaseCallable(const Model::CreateReleaseRequest& request);

                /**
                 *创建skill
                 * @param req CreateSkillRequest
                 * @return CreateSkillOutcome
                 */
                CreateSkillOutcome CreateSkill(const Model::CreateSkillRequest &request);
                void CreateSkillAsync(const Model::CreateSkillRequest& request, const CreateSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSkillOutcomeCallable CreateSkillCallable(const Model::CreateSkillRequest& request);

                /**
                 *提交自定义Skill至企业级共享审批（两段式：提交→审批→回调创建共享任务）
                 * @param req CreateSkillShareRequest
                 * @return CreateSkillShareOutcome
                 */
                CreateSkillShareOutcome CreateSkillShare(const Model::CreateSkillShareRequest &request);
                void CreateSkillShareAsync(const Model::CreateSkillShareRequest& request, const CreateSkillShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSkillShareOutcomeCallable CreateSkillShareCallable(const Model::CreateSkillShareRequest& request);

                /**
                 *创建空间
                 * @param req CreateSpaceRequest
                 * @return CreateSpaceOutcome
                 */
                CreateSpaceOutcome CreateSpace(const Model::CreateSpaceRequest &request);
                void CreateSpaceAsync(const Model::CreateSpaceRequest& request, const CreateSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSpaceOutcomeCallable CreateSpaceCallable(const Model::CreateSpaceRequest& request);

                /**
                 *创建参数变量
                 * @param req CreateVariableRequest
                 * @return CreateVariableOutcome
                 */
                CreateVariableOutcome CreateVariable(const Model::CreateVariableRequest &request);
                void CreateVariableAsync(const Model::CreateVariableRequest& request, const CreateVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVariableOutcomeCallable CreateVariableCallable(const Model::CreateVariableRequest& request);

                /**
                 *创建 WebSocket Token
                 * @param req CreateWebSocketTokenRequest
                 * @return CreateWebSocketTokenOutcome
                 */
                CreateWebSocketTokenOutcome CreateWebSocketToken(const Model::CreateWebSocketTokenRequest &request);
                void CreateWebSocketTokenAsync(const Model::CreateWebSocketTokenRequest& request, const CreateWebSocketTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWebSocketTokenOutcomeCallable CreateWebSocketTokenCallable(const Model::CreateWebSocketTokenRequest& request);

                /**
                 *创建工作空间凭证
                 * @param req CreateWorkspaceCredentialRequest
                 * @return CreateWorkspaceCredentialOutcome
                 */
                CreateWorkspaceCredentialOutcome CreateWorkspaceCredential(const Model::CreateWorkspaceCredentialRequest &request);
                void CreateWorkspaceCredentialAsync(const Model::CreateWorkspaceCredentialRequest& request, const CreateWorkspaceCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkspaceCredentialOutcomeCallable CreateWorkspaceCredentialCallable(const Model::CreateWorkspaceCredentialRequest& request);

                /**
                 *删除Agent
                 * @param req DeleteAgentRequest
                 * @return DeleteAgentOutcome
                 */
                DeleteAgentOutcome DeleteAgent(const Model::DeleteAgentRequest &request);
                void DeleteAgentAsync(const Model::DeleteAgentRequest& request, const DeleteAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAgentOutcomeCallable DeleteAgentCallable(const Model::DeleteAgentRequest& request);

                /**
                 *删除应用
                 * @param req DeleteAppRequest
                 * @return DeleteAppOutcome
                 */
                DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest &request);
                void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request);

                /**
                 *删除会话
                 * @param req DeleteConversationRequest
                 * @return DeleteConversationOutcome
                 */
                DeleteConversationOutcome DeleteConversation(const Model::DeleteConversationRequest &request);
                void DeleteConversationAsync(const Model::DeleteConversationRequest& request, const DeleteConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConversationOutcomeCallable DeleteConversationCallable(const Model::DeleteConversationRequest& request);

                /**
                 *修改插件
                 * @param req DeletePluginRequest
                 * @return DeletePluginOutcome
                 */
                DeletePluginOutcome DeletePlugin(const Model::DeletePluginRequest &request);
                void DeletePluginAsync(const Model::DeletePluginRequest& request, const DeletePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePluginOutcomeCallable DeletePluginCallable(const Model::DeletePluginRequest& request);

                /**
                 *删除自定义 Skill  鉴权：创建者 ∨ (编辑权限 ∧ 删除权限） 拒绝场景：非 Custom 类型 / 已共享 / 安全检测中 / 上架审批中 / 下架审批中
                 * @param req DeleteSkillRequest
                 * @return DeleteSkillOutcome
                 */
                DeleteSkillOutcome DeleteSkill(const Model::DeleteSkillRequest &request);
                void DeleteSkillAsync(const Model::DeleteSkillRequest& request, const DeleteSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSkillOutcomeCallable DeleteSkillCallable(const Model::DeleteSkillRequest& request);

                /**
                 *提交共享 Skill 下架审批（v2，两段式：提交→审批→回调下架共享 Skill） 鉴权：删除权 拒绝场景：未共享 / 上架审批中 / 下架审批中
                 * @param req DeleteSkillShareRequest
                 * @return DeleteSkillShareOutcome
                 */
                DeleteSkillShareOutcome DeleteSkillShare(const Model::DeleteSkillShareRequest &request);
                void DeleteSkillShareAsync(const Model::DeleteSkillShareRequest& request, const DeleteSkillShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSkillShareOutcomeCallable DeleteSkillShareCallable(const Model::DeleteSkillShareRequest& request);

                /**
                 *删除空间
                 * @param req DeleteSpaceRequest
                 * @return DeleteSpaceOutcome
                 */
                DeleteSpaceOutcome DeleteSpace(const Model::DeleteSpaceRequest &request);
                void DeleteSpaceAsync(const Model::DeleteSpaceRequest& request, const DeleteSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSpaceOutcomeCallable DeleteSpaceCallable(const Model::DeleteSpaceRequest& request);

                /**
                 *删除参数变量
                 * @param req DeleteVariableRequest
                 * @return DeleteVariableOutcome
                 */
                DeleteVariableOutcome DeleteVariable(const Model::DeleteVariableRequest &request);
                void DeleteVariableAsync(const Model::DeleteVariableRequest& request, const DeleteVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVariableOutcomeCallable DeleteVariableCallable(const Model::DeleteVariableRequest& request);

                /**
                 *查看企业下的员工列表
                 * @param req DescribeAccountListRequest
                 * @return DescribeAccountListOutcome
                 */
                DescribeAccountListOutcome DescribeAccountList(const Model::DescribeAccountListRequest &request);
                void DescribeAccountListAsync(const Model::DescribeAccountListRequest& request, const DescribeAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountListOutcomeCallable DescribeAccountListCallable(const Model::DescribeAccountListRequest& request);

                /**
                 *查询 Agent 详情
                 * @param req DescribeAgentDetailRequest
                 * @return DescribeAgentDetailOutcome
                 */
                DescribeAgentDetailOutcome DescribeAgentDetail(const Model::DescribeAgentDetailRequest &request);
                void DescribeAgentDetailAsync(const Model::DescribeAgentDetailRequest& request, const DescribeAgentDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentDetailOutcomeCallable DescribeAgentDetailCallable(const Model::DescribeAgentDetailRequest& request);

                /**
                 *获取应用下 Agent 的发布预览列表
                 * @param req DescribeAgentReleasePreviewListRequest
                 * @return DescribeAgentReleasePreviewListOutcome
                 */
                DescribeAgentReleasePreviewListOutcome DescribeAgentReleasePreviewList(const Model::DescribeAgentReleasePreviewListRequest &request);
                void DescribeAgentReleasePreviewListAsync(const Model::DescribeAgentReleasePreviewListRequest& request, const DescribeAgentReleasePreviewListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentReleasePreviewListOutcomeCallable DescribeAgentReleasePreviewListCallable(const Model::DescribeAgentReleasePreviewListRequest& request);

                /**
                 *查询 Agent 摘要信息列表
                 * @param req DescribeAgentSummaryListRequest
                 * @return DescribeAgentSummaryListOutcome
                 */
                DescribeAgentSummaryListOutcome DescribeAgentSummaryList(const Model::DescribeAgentSummaryListRequest &request);
                void DescribeAgentSummaryListAsync(const Model::DescribeAgentSummaryListRequest& request, const DescribeAgentSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentSummaryListOutcomeCallable DescribeAgentSummaryListCallable(const Model::DescribeAgentSummaryListRequest& request);

                /**
                 *获取应用信息
                 * @param req DescribeAppRequest
                 * @return DescribeAppOutcome
                 */
                DescribeAppOutcome DescribeApp(const Model::DescribeAppRequest &request);
                void DescribeAppAsync(const Model::DescribeAppRequest& request, const DescribeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppOutcomeCallable DescribeAppCallable(const Model::DescribeAppRequest& request);

                /**
                 *获取应用摘要列表
                 * @param req DescribeAppSummaryListRequest
                 * @return DescribeAppSummaryListOutcome
                 */
                DescribeAppSummaryListOutcome DescribeAppSummaryList(const Model::DescribeAppSummaryListRequest &request);
                void DescribeAppSummaryListAsync(const Model::DescribeAppSummaryListRequest& request, const DescribeAppSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppSummaryListOutcomeCallable DescribeAppSummaryListCallable(const Model::DescribeAppSummaryListRequest& request);

                /**
                 *查看操作日志列表
                 * @param req DescribeAuditLogListRequest
                 * @return DescribeAuditLogListOutcome
                 */
                DescribeAuditLogListOutcome DescribeAuditLogList(const Model::DescribeAuditLogListRequest &request);
                void DescribeAuditLogListAsync(const Model::DescribeAuditLogListRequest& request, const DescribeAuditLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditLogListOutcomeCallable DescribeAuditLogListCallable(const Model::DescribeAuditLogListRequest& request);

                /**
                 *获取审计日志元信息
                 * @param req DescribeAuditLogMetaRequest
                 * @return DescribeAuditLogMetaOutcome
                 */
                DescribeAuditLogMetaOutcome DescribeAuditLogMeta(const Model::DescribeAuditLogMetaRequest &request);
                void DescribeAuditLogMetaAsync(const Model::DescribeAuditLogMetaRequest& request, const DescribeAuditLogMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditLogMetaOutcomeCallable DescribeAuditLogMetaCallable(const Model::DescribeAuditLogMetaRequest& request);

                /**
                 *查看会话信息
                 * @param req DescribeConversationRequest
                 * @return DescribeConversationOutcome
                 */
                DescribeConversationOutcome DescribeConversation(const Model::DescribeConversationRequest &request);
                void DescribeConversationAsync(const Model::DescribeConversationRequest& request, const DescribeConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConversationOutcomeCallable DescribeConversationCallable(const Model::DescribeConversationRequest& request);

                /**
                 *获取会话列表
                 * @param req DescribeConversationListRequest
                 * @return DescribeConversationListOutcome
                 */
                DescribeConversationListOutcome DescribeConversationList(const Model::DescribeConversationListRequest &request);
                void DescribeConversationListAsync(const Model::DescribeConversationListRequest& request, const DescribeConversationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConversationListOutcomeCallable DescribeConversationListCallable(const Model::DescribeConversationListRequest& request);

                /**
                 *获取会话历史消息
                 * @param req DescribeConversationMessageListRequest
                 * @return DescribeConversationMessageListOutcome
                 */
                DescribeConversationMessageListOutcome DescribeConversationMessageList(const Model::DescribeConversationMessageListRequest &request);
                void DescribeConversationMessageListAsync(const Model::DescribeConversationMessageListRequest& request, const DescribeConversationMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConversationMessageListOutcomeCallable DescribeConversationMessageListCallable(const Model::DescribeConversationMessageListRequest& request);

                /**
                 *拉取最新发布信息(包含发布时间、状态、渠道)
                 * @param req DescribeLatestReleaseRequest
                 * @return DescribeLatestReleaseOutcome
                 */
                DescribeLatestReleaseOutcome DescribeLatestRelease(const Model::DescribeLatestReleaseRequest &request);
                void DescribeLatestReleaseAsync(const Model::DescribeLatestReleaseRequest& request, const DescribeLatestReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLatestReleaseOutcomeCallable DescribeLatestReleaseCallable(const Model::DescribeLatestReleaseRequest& request);

                /**
                 *查询模型列表
                 * @param req DescribeModelListRequest
                 * @return DescribeModelListOutcome
                 */
                DescribeModelListOutcome DescribeModelList(const Model::DescribeModelListRequest &request);
                void DescribeModelListAsync(const Model::DescribeModelListRequest& request, const DescribeModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelListOutcomeCallable DescribeModelListCallable(const Model::DescribeModelListRequest& request);

                /**
                 *获取插件详情
                 * @param req DescribePluginRequest
                 * @return DescribePluginOutcome
                 */
                DescribePluginOutcome DescribePlugin(const Model::DescribePluginRequest &request);
                void DescribePluginAsync(const Model::DescribePluginRequest& request, const DescribePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePluginOutcomeCallable DescribePluginCallable(const Model::DescribePluginRequest& request);

                /**
                 *获取插件列表
                 * @param req DescribePluginSummaryListRequest
                 * @return DescribePluginSummaryListOutcome
                 */
                DescribePluginSummaryListOutcome DescribePluginSummaryList(const Model::DescribePluginSummaryListRequest &request);
                void DescribePluginSummaryListAsync(const Model::DescribePluginSummaryListRequest& request, const DescribePluginSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePluginSummaryListOutcomeCallable DescribePluginSummaryListCallable(const Model::DescribePluginSummaryListRequest& request);

                /**
                 *发布记录列表
                 * @param req DescribeReleaseListRequest
                 * @return DescribeReleaseListOutcome
                 */
                DescribeReleaseListOutcome DescribeReleaseList(const Model::DescribeReleaseListRequest &request);
                void DescribeReleaseListAsync(const Model::DescribeReleaseListRequest& request, const DescribeReleaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReleaseListOutcomeCallable DescribeReleaseListCallable(const Model::DescribeReleaseListRequest& request);

                /**
                 *查询发布任务
                 * @param req DescribeReleaseSummaryRequest
                 * @return DescribeReleaseSummaryOutcome
                 */
                DescribeReleaseSummaryOutcome DescribeReleaseSummary(const Model::DescribeReleaseSummaryRequest &request);
                void DescribeReleaseSummaryAsync(const Model::DescribeReleaseSummaryRequest& request, const DescribeReleaseSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReleaseSummaryOutcomeCallable DescribeReleaseSummaryCallable(const Model::DescribeReleaseSummaryRequest& request);

                /**
                 *查询 Skill 分类列表
                 * @param req DescribeSkillCategoryListRequest
                 * @return DescribeSkillCategoryListOutcome
                 */
                DescribeSkillCategoryListOutcome DescribeSkillCategoryList(const Model::DescribeSkillCategoryListRequest &request);
                void DescribeSkillCategoryListAsync(const Model::DescribeSkillCategoryListRequest& request, const DescribeSkillCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillCategoryListOutcomeCallable DescribeSkillCategoryListCallable(const Model::DescribeSkillCategoryListRequest& request);

                /**
                 *查询skill详情
                 * @param req DescribeSkillDetailRequest
                 * @return DescribeSkillDetailOutcome
                 */
                DescribeSkillDetailOutcome DescribeSkillDetail(const Model::DescribeSkillDetailRequest &request);
                void DescribeSkillDetailAsync(const Model::DescribeSkillDetailRequest& request, const DescribeSkillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillDetailOutcomeCallable DescribeSkillDetailCallable(const Model::DescribeSkillDetailRequest& request);

                /**
                 *查询某个 Skill 被引用的详情列表（按 SkillRefType 分组：OpenClaw / cloud agent / 企业助手 agent） 鉴权：同 DescribeSkillDetail（能看该 Skill 即可查）
                 * @param req DescribeSkillReferenceListRequest
                 * @return DescribeSkillReferenceListOutcome
                 */
                DescribeSkillReferenceListOutcome DescribeSkillReferenceList(const Model::DescribeSkillReferenceListRequest &request);
                void DescribeSkillReferenceListAsync(const Model::DescribeSkillReferenceListRequest& request, const DescribeSkillReferenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillReferenceListOutcomeCallable DescribeSkillReferenceListCallable(const Model::DescribeSkillReferenceListRequest& request);

                /**
                 *查询 Skill 列表
                 * @param req DescribeSkillSummaryListRequest
                 * @return DescribeSkillSummaryListOutcome
                 */
                DescribeSkillSummaryListOutcome DescribeSkillSummaryList(const Model::DescribeSkillSummaryListRequest &request);
                void DescribeSkillSummaryListAsync(const Model::DescribeSkillSummaryListRequest& request, const DescribeSkillSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillSummaryListOutcomeCallable DescribeSkillSummaryListCallable(const Model::DescribeSkillSummaryListRequest& request);

                /**
                 *获取空间列表
                 * @param req DescribeSpaceListRequest
                 * @return DescribeSpaceListOutcome
                 */
                DescribeSpaceListOutcome DescribeSpaceList(const Model::DescribeSpaceListRequest &request);
                void DescribeSpaceListAsync(const Model::DescribeSpaceListRequest& request, const DescribeSpaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpaceListOutcomeCallable DescribeSpaceListCallable(const Model::DescribeSpaceListRequest& request);

                /**
                 *获取系统变量
                 * @param req DescribeSystemVariableListRequest
                 * @return DescribeSystemVariableListOutcome
                 */
                DescribeSystemVariableListOutcome DescribeSystemVariableList(const Model::DescribeSystemVariableListRequest &request);
                void DescribeSystemVariableListAsync(const Model::DescribeSystemVariableListRequest& request, const DescribeSystemVariableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSystemVariableListOutcomeCallable DescribeSystemVariableListCallable(const Model::DescribeSystemVariableListRequest& request);

                /**
                 *获取参数变量
                 * @param req DescribeVariableRequest
                 * @return DescribeVariableOutcome
                 */
                DescribeVariableOutcome DescribeVariable(const Model::DescribeVariableRequest &request);
                void DescribeVariableAsync(const Model::DescribeVariableRequest& request, const DescribeVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVariableOutcomeCallable DescribeVariableCallable(const Model::DescribeVariableRequest& request);

                /**
                 *获取参数变量列表
                 * @param req DescribeVariableListRequest
                 * @return DescribeVariableListOutcome
                 */
                DescribeVariableListOutcome DescribeVariableList(const Model::DescribeVariableListRequest &request);
                void DescribeVariableListAsync(const Model::DescribeVariableListRequest& request, const DescribeVariableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVariableListOutcomeCallable DescribeVariableListCallable(const Model::DescribeVariableListRequest& request);

                /**
                 *收藏插件
                 * @param req FavoritePluginRequest
                 * @return FavoritePluginOutcome
                 */
                FavoritePluginOutcome FavoritePlugin(const Model::FavoritePluginRequest &request);
                void FavoritePluginAsync(const Model::FavoritePluginRequest& request, const FavoritePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FavoritePluginOutcomeCallable FavoritePluginCallable(const Model::FavoritePluginRequest& request);

                /**
                 *收藏skill
                 * @param req FavoriteSkillRequest
                 * @return FavoriteSkillOutcome
                 */
                FavoriteSkillOutcome FavoriteSkill(const Model::FavoriteSkillRequest &request);
                void FavoriteSkillAsync(const Model::FavoriteSkillRequest& request, const FavoriteSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FavoriteSkillOutcomeCallable FavoriteSkillCallable(const Model::FavoriteSkillRequest& request);

                /**
                 *修改Agent配置信息
                 * @param req ModifyAgentRequest
                 * @return ModifyAgentOutcome
                 */
                ModifyAgentOutcome ModifyAgent(const Model::ModifyAgentRequest &request);
                void ModifyAgentAsync(const Model::ModifyAgentRequest& request, const ModifyAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentOutcomeCallable ModifyAgentCallable(const Model::ModifyAgentRequest& request);

                /**
                 *修改应用
                 * @param req ModifyAppRequest
                 * @return ModifyAppOutcome
                 */
                ModifyAppOutcome ModifyApp(const Model::ModifyAppRequest &request);
                void ModifyAppAsync(const Model::ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAppOutcomeCallable ModifyAppCallable(const Model::ModifyAppRequest& request);

                /**
                 *修改会话信息
                 * @param req ModifyConversationRequest
                 * @return ModifyConversationOutcome
                 */
                ModifyConversationOutcome ModifyConversation(const Model::ModifyConversationRequest &request);
                void ModifyConversationAsync(const Model::ModifyConversationRequest& request, const ModifyConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConversationOutcomeCallable ModifyConversationCallable(const Model::ModifyConversationRequest& request);

                /**
                 *修改插件
                 * @param req ModifyPluginRequest
                 * @return ModifyPluginOutcome
                 */
                ModifyPluginOutcome ModifyPlugin(const Model::ModifyPluginRequest &request);
                void ModifyPluginAsync(const Model::ModifyPluginRequest& request, const ModifyPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPluginOutcomeCallable ModifyPluginCallable(const Model::ModifyPluginRequest& request);

                /**
                 *Skill修改
                 * @param req ModifySkillRequest
                 * @return ModifySkillOutcome
                 */
                ModifySkillOutcome ModifySkill(const Model::ModifySkillRequest &request);
                void ModifySkillAsync(const Model::ModifySkillRequest& request, const ModifySkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySkillOutcomeCallable ModifySkillCallable(const Model::ModifySkillRequest& request);

                /**
                 *编辑空间
                 * @param req ModifySpaceRequest
                 * @return ModifySpaceOutcome
                 */
                ModifySpaceOutcome ModifySpace(const Model::ModifySpaceRequest &request);
                void ModifySpaceAsync(const Model::ModifySpaceRequest& request, const ModifySpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySpaceOutcomeCallable ModifySpaceCallable(const Model::ModifySpaceRequest& request);

                /**
                 *更新参数变量
                 * @param req ModifyVariableRequest
                 * @return ModifyVariableOutcome
                 */
                ModifyVariableOutcome ModifyVariable(const Model::ModifyVariableRequest &request);
                void ModifyVariableAsync(const Model::ModifyVariableRequest& request, const ModifyVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVariableOutcomeCallable ModifyVariableCallable(const Model::ModifyVariableRequest& request);

                /**
                 *上架skill
                 * @param req ReleaseSkillRequest
                 * @return ReleaseSkillOutcome
                 */
                ReleaseSkillOutcome ReleaseSkill(const Model::ReleaseSkillRequest &request);
                void ReleaseSkillAsync(const Model::ReleaseSkillRequest& request, const ReleaseSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseSkillOutcomeCallable ReleaseSkillCallable(const Model::ReleaseSkillRequest& request);

                /**
                 *重置会话
                 * @param req ResetConversationRequest
                 * @return ResetConversationOutcome
                 */
                ResetConversationOutcome ResetConversation(const Model::ResetConversationRequest &request);
                void ResetConversationAsync(const Model::ResetConversationRequest& request, const ResetConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetConversationOutcomeCallable ResetConversationCallable(const Model::ResetConversationRequest& request);

                /**
                 *重试发布(发布暂停之后再次重新发布)
                 * @param req RetryReleaseRequest
                 * @return RetryReleaseOutcome
                 */
                RetryReleaseOutcome RetryRelease(const Model::RetryReleaseRequest &request);
                void RetryReleaseAsync(const Model::RetryReleaseRequest& request, const RetryReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryReleaseOutcomeCallable RetryReleaseCallable(const Model::RetryReleaseRequest& request);

                /**
                 *回滚发布
                 * @param req RollbackReleaseRequest
                 * @return RollbackReleaseOutcome
                 */
                RollbackReleaseOutcome RollbackRelease(const Model::RollbackReleaseRequest &request);
                void RollbackReleaseAsync(const Model::RollbackReleaseRequest& request, const RollbackReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackReleaseOutcomeCallable RollbackReleaseCallable(const Model::RollbackReleaseRequest& request);

                /**
                 *取消收藏插件
                 * @param req UnfavoritePluginRequest
                 * @return UnfavoritePluginOutcome
                 */
                UnfavoritePluginOutcome UnfavoritePlugin(const Model::UnfavoritePluginRequest &request);
                void UnfavoritePluginAsync(const Model::UnfavoritePluginRequest& request, const UnfavoritePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnfavoritePluginOutcomeCallable UnfavoritePluginCallable(const Model::UnfavoritePluginRequest& request);

                /**
                 *取消收藏skill
                 * @param req UnfavoriteSkillRequest
                 * @return UnfavoriteSkillOutcome
                 */
                UnfavoriteSkillOutcome UnfavoriteSkill(const Model::UnfavoriteSkillRequest &request);
                void UnfavoriteSkillAsync(const Model::UnfavoriteSkillRequest& request, const UnfavoriteSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnfavoriteSkillOutcomeCallable UnfavoriteSkillCallable(const Model::UnfavoriteSkillRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_ADPCLIENT_H_
