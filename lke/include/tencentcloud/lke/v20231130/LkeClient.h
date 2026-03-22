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

#ifndef TENCENTCLOUD_LKE_V20231130_LKECLIENT_H_
#define TENCENTCLOUD_LKE_V20231130_LKECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/lke/v20231130/model/CallbackWorkflowToolNodeRequest.h>
#include <tencentcloud/lke/v20231130/model/CallbackWorkflowToolNodeResponse.h>
#include <tencentcloud/lke/v20231130/model/CheckAttributeLabelExistRequest.h>
#include <tencentcloud/lke/v20231130/model/CheckAttributeLabelExistResponse.h>
#include <tencentcloud/lke/v20231130/model/CheckAttributeLabelReferRequest.h>
#include <tencentcloud/lke/v20231130/model/CheckAttributeLabelReferResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateAppRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateAppResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateDocCateRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateDocCateResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateQARequest.h>
#include <tencentcloud/lke/v20231130/model/CreateQAResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateQACateRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateQACateResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateRejectedQuestionRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateRejectedQuestionResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateReleaseRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateReleaseResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateSharedKnowledgeRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateSharedKnowledgeResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateVarRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateVarResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateWorkflowRunRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateWorkflowRunResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteAgentRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteAgentResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteAppRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteAppResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteDocRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteDocResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteDocCateRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteDocCateResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteQARequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteQAResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteQACateRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteQACateResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteRejectedQuestionRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteRejectedQuestionResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteSharedKnowledgeRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteSharedKnowledgeResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteVarRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteVarResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeAppRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeAppResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeAppAgentListRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeAppAgentListResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeCallStatsGraphRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeCallStatsGraphResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeConcurrencyUsageRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeConcurrencyUsageResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeConcurrencyUsageGraphRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeConcurrencyUsageGraphResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeDocRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeDocResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeKnowledgeUsageRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeKnowledgeUsageResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeKnowledgeUsagePieGraphRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeKnowledgeUsagePieGraphResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeNodeRunRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeNodeRunResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeQARequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeQAResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeReferRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeReferResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeReleaseRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeReleaseResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeReleaseInfoRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeReleaseInfoResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeRobotBizIDByAppKeyRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeRobotBizIDByAppKeyResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeSearchStatsGraphRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeSearchStatsGraphResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeSegmentsRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeSegmentsResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeSharedKnowledgeRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeSharedKnowledgeResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeStorageCredentialRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeStorageCredentialResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeTokenUsageRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeTokenUsageResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeTokenUsageGraphRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeTokenUsageGraphResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeUnsatisfiedReplyContextRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeUnsatisfiedReplyContextResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeWorkflowRunRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeWorkflowRunResponse.h>
#include <tencentcloud/lke/v20231130/model/ExportAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/ExportAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/ExportQAListRequest.h>
#include <tencentcloud/lke/v20231130/model/ExportQAListResponse.h>
#include <tencentcloud/lke/v20231130/model/ExportUnsatisfiedReplyRequest.h>
#include <tencentcloud/lke/v20231130/model/ExportUnsatisfiedReplyResponse.h>
#include <tencentcloud/lke/v20231130/model/GenerateQARequest.h>
#include <tencentcloud/lke/v20231130/model/GenerateQAResponse.h>
#include <tencentcloud/lke/v20231130/model/GetAnswerTypeDataCountRequest.h>
#include <tencentcloud/lke/v20231130/model/GetAnswerTypeDataCountResponse.h>
#include <tencentcloud/lke/v20231130/model/GetAppKnowledgeCountRequest.h>
#include <tencentcloud/lke/v20231130/model/GetAppKnowledgeCountResponse.h>
#include <tencentcloud/lke/v20231130/model/GetAppSecretRequest.h>
#include <tencentcloud/lke/v20231130/model/GetAppSecretResponse.h>
#include <tencentcloud/lke/v20231130/model/GetDocPreviewRequest.h>
#include <tencentcloud/lke/v20231130/model/GetDocPreviewResponse.h>
#include <tencentcloud/lke/v20231130/model/GetLikeDataCountRequest.h>
#include <tencentcloud/lke/v20231130/model/GetLikeDataCountResponse.h>
#include <tencentcloud/lke/v20231130/model/GetMsgRecordRequest.h>
#include <tencentcloud/lke/v20231130/model/GetMsgRecordResponse.h>
#include <tencentcloud/lke/v20231130/model/GetTaskStatusRequest.h>
#include <tencentcloud/lke/v20231130/model/GetTaskStatusResponse.h>
#include <tencentcloud/lke/v20231130/model/GetVarListRequest.h>
#include <tencentcloud/lke/v20231130/model/GetVarListResponse.h>
#include <tencentcloud/lke/v20231130/model/GetWsTokenRequest.h>
#include <tencentcloud/lke/v20231130/model/GetWsTokenResponse.h>
#include <tencentcloud/lke/v20231130/model/GroupDocRequest.h>
#include <tencentcloud/lke/v20231130/model/GroupDocResponse.h>
#include <tencentcloud/lke/v20231130/model/GroupQARequest.h>
#include <tencentcloud/lke/v20231130/model/GroupQAResponse.h>
#include <tencentcloud/lke/v20231130/model/IgnoreUnsatisfiedReplyRequest.h>
#include <tencentcloud/lke/v20231130/model/IgnoreUnsatisfiedReplyResponse.h>
#include <tencentcloud/lke/v20231130/model/IsTransferIntentRequest.h>
#include <tencentcloud/lke/v20231130/model/IsTransferIntentResponse.h>
#include <tencentcloud/lke/v20231130/model/ListAppRequest.h>
#include <tencentcloud/lke/v20231130/model/ListAppResponse.h>
#include <tencentcloud/lke/v20231130/model/ListAppKnowledgeDetailRequest.h>
#include <tencentcloud/lke/v20231130/model/ListAppKnowledgeDetailResponse.h>
#include <tencentcloud/lke/v20231130/model/ListAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/ListAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/ListChannelRequest.h>
#include <tencentcloud/lke/v20231130/model/ListChannelResponse.h>
#include <tencentcloud/lke/v20231130/model/ListDocRequest.h>
#include <tencentcloud/lke/v20231130/model/ListDocResponse.h>
#include <tencentcloud/lke/v20231130/model/ListDocCateRequest.h>
#include <tencentcloud/lke/v20231130/model/ListDocCateResponse.h>
#include <tencentcloud/lke/v20231130/model/ListModelRequest.h>
#include <tencentcloud/lke/v20231130/model/ListModelResponse.h>
#include <tencentcloud/lke/v20231130/model/ListQARequest.h>
#include <tencentcloud/lke/v20231130/model/ListQAResponse.h>
#include <tencentcloud/lke/v20231130/model/ListQACateRequest.h>
#include <tencentcloud/lke/v20231130/model/ListQACateResponse.h>
#include <tencentcloud/lke/v20231130/model/ListReferShareKnowledgeRequest.h>
#include <tencentcloud/lke/v20231130/model/ListReferShareKnowledgeResponse.h>
#include <tencentcloud/lke/v20231130/model/ListRejectedQuestionRequest.h>
#include <tencentcloud/lke/v20231130/model/ListRejectedQuestionResponse.h>
#include <tencentcloud/lke/v20231130/model/ListRejectedQuestionPreviewRequest.h>
#include <tencentcloud/lke/v20231130/model/ListRejectedQuestionPreviewResponse.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseRequest.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseResponse.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseConfigPreviewRequest.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseConfigPreviewResponse.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseDocPreviewRequest.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseDocPreviewResponse.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseQAPreviewRequest.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseQAPreviewResponse.h>
#include <tencentcloud/lke/v20231130/model/ListSelectDocRequest.h>
#include <tencentcloud/lke/v20231130/model/ListSelectDocResponse.h>
#include <tencentcloud/lke/v20231130/model/ListSharedKnowledgeRequest.h>
#include <tencentcloud/lke/v20231130/model/ListSharedKnowledgeResponse.h>
#include <tencentcloud/lke/v20231130/model/ListUnsatisfiedReplyRequest.h>
#include <tencentcloud/lke/v20231130/model/ListUnsatisfiedReplyResponse.h>
#include <tencentcloud/lke/v20231130/model/ListUsageCallDetailRequest.h>
#include <tencentcloud/lke/v20231130/model/ListUsageCallDetailResponse.h>
#include <tencentcloud/lke/v20231130/model/ListWorkflowRunsRequest.h>
#include <tencentcloud/lke/v20231130/model/ListWorkflowRunsResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyAppRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyAppResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocAttrRangeRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocAttrRangeResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocCateRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocCateResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyQARequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyQAResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyQAAttrRangeRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyQAAttrRangeResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyQACateRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyQACateResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyRejectedQuestionRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyRejectedQuestionResponse.h>
#include <tencentcloud/lke/v20231130/model/RateMsgRecordRequest.h>
#include <tencentcloud/lke/v20231130/model/RateMsgRecordResponse.h>
#include <tencentcloud/lke/v20231130/model/ReferShareKnowledgeRequest.h>
#include <tencentcloud/lke/v20231130/model/ReferShareKnowledgeResponse.h>
#include <tencentcloud/lke/v20231130/model/RenameDocRequest.h>
#include <tencentcloud/lke/v20231130/model/RenameDocResponse.h>
#include <tencentcloud/lke/v20231130/model/RetryDocAuditRequest.h>
#include <tencentcloud/lke/v20231130/model/RetryDocAuditResponse.h>
#include <tencentcloud/lke/v20231130/model/RetryDocParseRequest.h>
#include <tencentcloud/lke/v20231130/model/RetryDocParseResponse.h>
#include <tencentcloud/lke/v20231130/model/RetryReleaseRequest.h>
#include <tencentcloud/lke/v20231130/model/RetryReleaseResponse.h>
#include <tencentcloud/lke/v20231130/model/SaveDocRequest.h>
#include <tencentcloud/lke/v20231130/model/SaveDocResponse.h>
#include <tencentcloud/lke/v20231130/model/StopDocParseRequest.h>
#include <tencentcloud/lke/v20231130/model/StopDocParseResponse.h>
#include <tencentcloud/lke/v20231130/model/StopWorkflowRunRequest.h>
#include <tencentcloud/lke/v20231130/model/StopWorkflowRunResponse.h>
#include <tencentcloud/lke/v20231130/model/UpdateSharedKnowledgeRequest.h>
#include <tencentcloud/lke/v20231130/model/UpdateSharedKnowledgeResponse.h>
#include <tencentcloud/lke/v20231130/model/UpdateVarRequest.h>
#include <tencentcloud/lke/v20231130/model/UpdateVarResponse.h>
#include <tencentcloud/lke/v20231130/model/UploadAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/UploadAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/VerifyQARequest.h>
#include <tencentcloud/lke/v20231130/model/VerifyQAResponse.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            class LkeClient : public AbstractClient
            {
            public:
                LkeClient(const Credential &credential, const std::string &region);
                LkeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CallbackWorkflowToolNodeResponse> CallbackWorkflowToolNodeOutcome;
                typedef std::future<CallbackWorkflowToolNodeOutcome> CallbackWorkflowToolNodeOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CallbackWorkflowToolNodeRequest&, CallbackWorkflowToolNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CallbackWorkflowToolNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckAttributeLabelExistResponse> CheckAttributeLabelExistOutcome;
                typedef std::future<CheckAttributeLabelExistOutcome> CheckAttributeLabelExistOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CheckAttributeLabelExistRequest&, CheckAttributeLabelExistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAttributeLabelExistAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckAttributeLabelReferResponse> CheckAttributeLabelReferOutcome;
                typedef std::future<CheckAttributeLabelReferOutcome> CheckAttributeLabelReferOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CheckAttributeLabelReferRequest&, CheckAttributeLabelReferOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAttributeLabelReferAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAppResponse> CreateAppOutcome;
                typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateAppRequest&, CreateAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAttributeLabelResponse> CreateAttributeLabelOutcome;
                typedef std::future<CreateAttributeLabelOutcome> CreateAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateAttributeLabelRequest&, CreateAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDocCateResponse> CreateDocCateOutcome;
                typedef std::future<CreateDocCateOutcome> CreateDocCateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateDocCateRequest&, CreateDocCateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDocCateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQAResponse> CreateQAOutcome;
                typedef std::future<CreateQAOutcome> CreateQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateQARequest&, CreateQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQAAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQACateResponse> CreateQACateOutcome;
                typedef std::future<CreateQACateOutcome> CreateQACateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateQACateRequest&, CreateQACateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQACateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRejectedQuestionResponse> CreateRejectedQuestionOutcome;
                typedef std::future<CreateRejectedQuestionOutcome> CreateRejectedQuestionOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateRejectedQuestionRequest&, CreateRejectedQuestionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRejectedQuestionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReleaseResponse> CreateReleaseOutcome;
                typedef std::future<CreateReleaseOutcome> CreateReleaseOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateReleaseRequest&, CreateReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSharedKnowledgeResponse> CreateSharedKnowledgeOutcome;
                typedef std::future<CreateSharedKnowledgeOutcome> CreateSharedKnowledgeOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateSharedKnowledgeRequest&, CreateSharedKnowledgeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSharedKnowledgeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVarResponse> CreateVarOutcome;
                typedef std::future<CreateVarOutcome> CreateVarOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateVarRequest&, CreateVarOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVarAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkflowRunResponse> CreateWorkflowRunOutcome;
                typedef std::future<CreateWorkflowRunOutcome> CreateWorkflowRunOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateWorkflowRunRequest&, CreateWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAgentResponse> DeleteAgentOutcome;
                typedef std::future<DeleteAgentOutcome> DeleteAgentOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteAgentRequest&, DeleteAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAppResponse> DeleteAppOutcome;
                typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteAppRequest&, DeleteAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAttributeLabelResponse> DeleteAttributeLabelOutcome;
                typedef std::future<DeleteAttributeLabelOutcome> DeleteAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteAttributeLabelRequest&, DeleteAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDocResponse> DeleteDocOutcome;
                typedef std::future<DeleteDocOutcome> DeleteDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteDocRequest&, DeleteDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDocAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDocCateResponse> DeleteDocCateOutcome;
                typedef std::future<DeleteDocCateOutcome> DeleteDocCateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteDocCateRequest&, DeleteDocCateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDocCateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQAResponse> DeleteQAOutcome;
                typedef std::future<DeleteQAOutcome> DeleteQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteQARequest&, DeleteQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQAAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQACateResponse> DeleteQACateOutcome;
                typedef std::future<DeleteQACateOutcome> DeleteQACateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteQACateRequest&, DeleteQACateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQACateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRejectedQuestionResponse> DeleteRejectedQuestionOutcome;
                typedef std::future<DeleteRejectedQuestionOutcome> DeleteRejectedQuestionOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteRejectedQuestionRequest&, DeleteRejectedQuestionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRejectedQuestionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSharedKnowledgeResponse> DeleteSharedKnowledgeOutcome;
                typedef std::future<DeleteSharedKnowledgeOutcome> DeleteSharedKnowledgeOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteSharedKnowledgeRequest&, DeleteSharedKnowledgeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSharedKnowledgeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVarResponse> DeleteVarOutcome;
                typedef std::future<DeleteVarOutcome> DeleteVarOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteVarRequest&, DeleteVarOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVarAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppResponse> DescribeAppOutcome;
                typedef std::future<DescribeAppOutcome> DescribeAppOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeAppRequest&, DescribeAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppAgentListResponse> DescribeAppAgentListOutcome;
                typedef std::future<DescribeAppAgentListOutcome> DescribeAppAgentListOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeAppAgentListRequest&, DescribeAppAgentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppAgentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttributeLabelResponse> DescribeAttributeLabelOutcome;
                typedef std::future<DescribeAttributeLabelOutcome> DescribeAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeAttributeLabelRequest&, DescribeAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallStatsGraphResponse> DescribeCallStatsGraphOutcome;
                typedef std::future<DescribeCallStatsGraphOutcome> DescribeCallStatsGraphOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeCallStatsGraphRequest&, DescribeCallStatsGraphOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallStatsGraphAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConcurrencyUsageResponse> DescribeConcurrencyUsageOutcome;
                typedef std::future<DescribeConcurrencyUsageOutcome> DescribeConcurrencyUsageOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeConcurrencyUsageRequest&, DescribeConcurrencyUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcurrencyUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConcurrencyUsageGraphResponse> DescribeConcurrencyUsageGraphOutcome;
                typedef std::future<DescribeConcurrencyUsageGraphOutcome> DescribeConcurrencyUsageGraphOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeConcurrencyUsageGraphRequest&, DescribeConcurrencyUsageGraphOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcurrencyUsageGraphAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDocResponse> DescribeDocOutcome;
                typedef std::future<DescribeDocOutcome> DescribeDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeDocRequest&, DescribeDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDocAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKnowledgeUsageResponse> DescribeKnowledgeUsageOutcome;
                typedef std::future<DescribeKnowledgeUsageOutcome> DescribeKnowledgeUsageOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeKnowledgeUsageRequest&, DescribeKnowledgeUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKnowledgeUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKnowledgeUsagePieGraphResponse> DescribeKnowledgeUsagePieGraphOutcome;
                typedef std::future<DescribeKnowledgeUsagePieGraphOutcome> DescribeKnowledgeUsagePieGraphOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeKnowledgeUsagePieGraphRequest&, DescribeKnowledgeUsagePieGraphOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKnowledgeUsagePieGraphAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodeRunResponse> DescribeNodeRunOutcome;
                typedef std::future<DescribeNodeRunOutcome> DescribeNodeRunOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeNodeRunRequest&, DescribeNodeRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeRunAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQAResponse> DescribeQAOutcome;
                typedef std::future<DescribeQAOutcome> DescribeQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeQARequest&, DescribeQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQAAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReferResponse> DescribeReferOutcome;
                typedef std::future<DescribeReferOutcome> DescribeReferOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeReferRequest&, DescribeReferOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReferAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReleaseResponse> DescribeReleaseOutcome;
                typedef std::future<DescribeReleaseOutcome> DescribeReleaseOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeReleaseRequest&, DescribeReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReleaseInfoResponse> DescribeReleaseInfoOutcome;
                typedef std::future<DescribeReleaseInfoOutcome> DescribeReleaseInfoOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeReleaseInfoRequest&, DescribeReleaseInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReleaseInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRobotBizIDByAppKeyResponse> DescribeRobotBizIDByAppKeyOutcome;
                typedef std::future<DescribeRobotBizIDByAppKeyOutcome> DescribeRobotBizIDByAppKeyOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeRobotBizIDByAppKeyRequest&, DescribeRobotBizIDByAppKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRobotBizIDByAppKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchStatsGraphResponse> DescribeSearchStatsGraphOutcome;
                typedef std::future<DescribeSearchStatsGraphOutcome> DescribeSearchStatsGraphOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeSearchStatsGraphRequest&, DescribeSearchStatsGraphOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchStatsGraphAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSegmentsResponse> DescribeSegmentsOutcome;
                typedef std::future<DescribeSegmentsOutcome> DescribeSegmentsOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeSegmentsRequest&, DescribeSegmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSegmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSharedKnowledgeResponse> DescribeSharedKnowledgeOutcome;
                typedef std::future<DescribeSharedKnowledgeOutcome> DescribeSharedKnowledgeOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeSharedKnowledgeRequest&, DescribeSharedKnowledgeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSharedKnowledgeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStorageCredentialResponse> DescribeStorageCredentialOutcome;
                typedef std::future<DescribeStorageCredentialOutcome> DescribeStorageCredentialOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeStorageCredentialRequest&, DescribeStorageCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenUsageResponse> DescribeTokenUsageOutcome;
                typedef std::future<DescribeTokenUsageOutcome> DescribeTokenUsageOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeTokenUsageRequest&, DescribeTokenUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenUsageGraphResponse> DescribeTokenUsageGraphOutcome;
                typedef std::future<DescribeTokenUsageGraphOutcome> DescribeTokenUsageGraphOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeTokenUsageGraphRequest&, DescribeTokenUsageGraphOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenUsageGraphAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnsatisfiedReplyContextResponse> DescribeUnsatisfiedReplyContextOutcome;
                typedef std::future<DescribeUnsatisfiedReplyContextOutcome> DescribeUnsatisfiedReplyContextOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeUnsatisfiedReplyContextRequest&, DescribeUnsatisfiedReplyContextOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnsatisfiedReplyContextAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowRunResponse> DescribeWorkflowRunOutcome;
                typedef std::future<DescribeWorkflowRunOutcome> DescribeWorkflowRunOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeWorkflowRunRequest&, DescribeWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAttributeLabelResponse> ExportAttributeLabelOutcome;
                typedef std::future<ExportAttributeLabelOutcome> ExportAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ExportAttributeLabelRequest&, ExportAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportQAListResponse> ExportQAListOutcome;
                typedef std::future<ExportQAListOutcome> ExportQAListOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ExportQAListRequest&, ExportQAListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportQAListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportUnsatisfiedReplyResponse> ExportUnsatisfiedReplyOutcome;
                typedef std::future<ExportUnsatisfiedReplyOutcome> ExportUnsatisfiedReplyOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ExportUnsatisfiedReplyRequest&, ExportUnsatisfiedReplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportUnsatisfiedReplyAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateQAResponse> GenerateQAOutcome;
                typedef std::future<GenerateQAOutcome> GenerateQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GenerateQARequest&, GenerateQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateQAAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAnswerTypeDataCountResponse> GetAnswerTypeDataCountOutcome;
                typedef std::future<GetAnswerTypeDataCountOutcome> GetAnswerTypeDataCountOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetAnswerTypeDataCountRequest&, GetAnswerTypeDataCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAnswerTypeDataCountAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAppKnowledgeCountResponse> GetAppKnowledgeCountOutcome;
                typedef std::future<GetAppKnowledgeCountOutcome> GetAppKnowledgeCountOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetAppKnowledgeCountRequest&, GetAppKnowledgeCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAppKnowledgeCountAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAppSecretResponse> GetAppSecretOutcome;
                typedef std::future<GetAppSecretOutcome> GetAppSecretOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetAppSecretRequest&, GetAppSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAppSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDocPreviewResponse> GetDocPreviewOutcome;
                typedef std::future<GetDocPreviewOutcome> GetDocPreviewOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetDocPreviewRequest&, GetDocPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDocPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLikeDataCountResponse> GetLikeDataCountOutcome;
                typedef std::future<GetLikeDataCountOutcome> GetLikeDataCountOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetLikeDataCountRequest&, GetLikeDataCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLikeDataCountAsyncHandler;
                typedef Outcome<Core::Error, Model::GetMsgRecordResponse> GetMsgRecordOutcome;
                typedef std::future<GetMsgRecordOutcome> GetMsgRecordOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetMsgRecordRequest&, GetMsgRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMsgRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskStatusResponse> GetTaskStatusOutcome;
                typedef std::future<GetTaskStatusOutcome> GetTaskStatusOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetTaskStatusRequest&, GetTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetVarListResponse> GetVarListOutcome;
                typedef std::future<GetVarListOutcome> GetVarListOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetVarListRequest&, GetVarListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetVarListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWsTokenResponse> GetWsTokenOutcome;
                typedef std::future<GetWsTokenOutcome> GetWsTokenOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetWsTokenRequest&, GetWsTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWsTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::GroupDocResponse> GroupDocOutcome;
                typedef std::future<GroupDocOutcome> GroupDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GroupDocRequest&, GroupDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GroupDocAsyncHandler;
                typedef Outcome<Core::Error, Model::GroupQAResponse> GroupQAOutcome;
                typedef std::future<GroupQAOutcome> GroupQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GroupQARequest&, GroupQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GroupQAAsyncHandler;
                typedef Outcome<Core::Error, Model::IgnoreUnsatisfiedReplyResponse> IgnoreUnsatisfiedReplyOutcome;
                typedef std::future<IgnoreUnsatisfiedReplyOutcome> IgnoreUnsatisfiedReplyOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::IgnoreUnsatisfiedReplyRequest&, IgnoreUnsatisfiedReplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IgnoreUnsatisfiedReplyAsyncHandler;
                typedef Outcome<Core::Error, Model::IsTransferIntentResponse> IsTransferIntentOutcome;
                typedef std::future<IsTransferIntentOutcome> IsTransferIntentOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::IsTransferIntentRequest&, IsTransferIntentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsTransferIntentAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAppResponse> ListAppOutcome;
                typedef std::future<ListAppOutcome> ListAppOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListAppRequest&, ListAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAppKnowledgeDetailResponse> ListAppKnowledgeDetailOutcome;
                typedef std::future<ListAppKnowledgeDetailOutcome> ListAppKnowledgeDetailOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListAppKnowledgeDetailRequest&, ListAppKnowledgeDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAppKnowledgeDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAttributeLabelResponse> ListAttributeLabelOutcome;
                typedef std::future<ListAttributeLabelOutcome> ListAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListAttributeLabelRequest&, ListAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::ListChannelResponse> ListChannelOutcome;
                typedef std::future<ListChannelOutcome> ListChannelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListChannelRequest&, ListChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDocResponse> ListDocOutcome;
                typedef std::future<ListDocOutcome> ListDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListDocRequest&, ListDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDocAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDocCateResponse> ListDocCateOutcome;
                typedef std::future<ListDocCateOutcome> ListDocCateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListDocCateRequest&, ListDocCateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDocCateAsyncHandler;
                typedef Outcome<Core::Error, Model::ListModelResponse> ListModelOutcome;
                typedef std::future<ListModelOutcome> ListModelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListModelRequest&, ListModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListModelAsyncHandler;
                typedef Outcome<Core::Error, Model::ListQAResponse> ListQAOutcome;
                typedef std::future<ListQAOutcome> ListQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListQARequest&, ListQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListQAAsyncHandler;
                typedef Outcome<Core::Error, Model::ListQACateResponse> ListQACateOutcome;
                typedef std::future<ListQACateOutcome> ListQACateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListQACateRequest&, ListQACateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListQACateAsyncHandler;
                typedef Outcome<Core::Error, Model::ListReferShareKnowledgeResponse> ListReferShareKnowledgeOutcome;
                typedef std::future<ListReferShareKnowledgeOutcome> ListReferShareKnowledgeOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListReferShareKnowledgeRequest&, ListReferShareKnowledgeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListReferShareKnowledgeAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRejectedQuestionResponse> ListRejectedQuestionOutcome;
                typedef std::future<ListRejectedQuestionOutcome> ListRejectedQuestionOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListRejectedQuestionRequest&, ListRejectedQuestionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRejectedQuestionAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRejectedQuestionPreviewResponse> ListRejectedQuestionPreviewOutcome;
                typedef std::future<ListRejectedQuestionPreviewOutcome> ListRejectedQuestionPreviewOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListRejectedQuestionPreviewRequest&, ListRejectedQuestionPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRejectedQuestionPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::ListReleaseResponse> ListReleaseOutcome;
                typedef std::future<ListReleaseOutcome> ListReleaseOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListReleaseRequest&, ListReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::ListReleaseConfigPreviewResponse> ListReleaseConfigPreviewOutcome;
                typedef std::future<ListReleaseConfigPreviewOutcome> ListReleaseConfigPreviewOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListReleaseConfigPreviewRequest&, ListReleaseConfigPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListReleaseConfigPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::ListReleaseDocPreviewResponse> ListReleaseDocPreviewOutcome;
                typedef std::future<ListReleaseDocPreviewOutcome> ListReleaseDocPreviewOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListReleaseDocPreviewRequest&, ListReleaseDocPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListReleaseDocPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::ListReleaseQAPreviewResponse> ListReleaseQAPreviewOutcome;
                typedef std::future<ListReleaseQAPreviewOutcome> ListReleaseQAPreviewOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListReleaseQAPreviewRequest&, ListReleaseQAPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListReleaseQAPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSelectDocResponse> ListSelectDocOutcome;
                typedef std::future<ListSelectDocOutcome> ListSelectDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListSelectDocRequest&, ListSelectDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSelectDocAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSharedKnowledgeResponse> ListSharedKnowledgeOutcome;
                typedef std::future<ListSharedKnowledgeOutcome> ListSharedKnowledgeOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListSharedKnowledgeRequest&, ListSharedKnowledgeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSharedKnowledgeAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUnsatisfiedReplyResponse> ListUnsatisfiedReplyOutcome;
                typedef std::future<ListUnsatisfiedReplyOutcome> ListUnsatisfiedReplyOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListUnsatisfiedReplyRequest&, ListUnsatisfiedReplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUnsatisfiedReplyAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUsageCallDetailResponse> ListUsageCallDetailOutcome;
                typedef std::future<ListUsageCallDetailOutcome> ListUsageCallDetailOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListUsageCallDetailRequest&, ListUsageCallDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUsageCallDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ListWorkflowRunsResponse> ListWorkflowRunsOutcome;
                typedef std::future<ListWorkflowRunsOutcome> ListWorkflowRunsOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListWorkflowRunsRequest&, ListWorkflowRunsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkflowRunsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAppResponse> ModifyAppOutcome;
                typedef std::future<ModifyAppOutcome> ModifyAppOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyAppRequest&, ModifyAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAttributeLabelResponse> ModifyAttributeLabelOutcome;
                typedef std::future<ModifyAttributeLabelOutcome> ModifyAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyAttributeLabelRequest&, ModifyAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDocResponse> ModifyDocOutcome;
                typedef std::future<ModifyDocOutcome> ModifyDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyDocRequest&, ModifyDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDocAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDocAttrRangeResponse> ModifyDocAttrRangeOutcome;
                typedef std::future<ModifyDocAttrRangeOutcome> ModifyDocAttrRangeOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyDocAttrRangeRequest&, ModifyDocAttrRangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDocAttrRangeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDocCateResponse> ModifyDocCateOutcome;
                typedef std::future<ModifyDocCateOutcome> ModifyDocCateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyDocCateRequest&, ModifyDocCateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDocCateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyQAResponse> ModifyQAOutcome;
                typedef std::future<ModifyQAOutcome> ModifyQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyQARequest&, ModifyQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQAAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyQAAttrRangeResponse> ModifyQAAttrRangeOutcome;
                typedef std::future<ModifyQAAttrRangeOutcome> ModifyQAAttrRangeOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyQAAttrRangeRequest&, ModifyQAAttrRangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQAAttrRangeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyQACateResponse> ModifyQACateOutcome;
                typedef std::future<ModifyQACateOutcome> ModifyQACateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyQACateRequest&, ModifyQACateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQACateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRejectedQuestionResponse> ModifyRejectedQuestionOutcome;
                typedef std::future<ModifyRejectedQuestionOutcome> ModifyRejectedQuestionOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyRejectedQuestionRequest&, ModifyRejectedQuestionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRejectedQuestionAsyncHandler;
                typedef Outcome<Core::Error, Model::RateMsgRecordResponse> RateMsgRecordOutcome;
                typedef std::future<RateMsgRecordOutcome> RateMsgRecordOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::RateMsgRecordRequest&, RateMsgRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RateMsgRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ReferShareKnowledgeResponse> ReferShareKnowledgeOutcome;
                typedef std::future<ReferShareKnowledgeOutcome> ReferShareKnowledgeOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ReferShareKnowledgeRequest&, ReferShareKnowledgeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReferShareKnowledgeAsyncHandler;
                typedef Outcome<Core::Error, Model::RenameDocResponse> RenameDocOutcome;
                typedef std::future<RenameDocOutcome> RenameDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::RenameDocRequest&, RenameDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenameDocAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryDocAuditResponse> RetryDocAuditOutcome;
                typedef std::future<RetryDocAuditOutcome> RetryDocAuditOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::RetryDocAuditRequest&, RetryDocAuditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryDocAuditAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryDocParseResponse> RetryDocParseOutcome;
                typedef std::future<RetryDocParseOutcome> RetryDocParseOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::RetryDocParseRequest&, RetryDocParseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryDocParseAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryReleaseResponse> RetryReleaseOutcome;
                typedef std::future<RetryReleaseOutcome> RetryReleaseOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::RetryReleaseRequest&, RetryReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::SaveDocResponse> SaveDocOutcome;
                typedef std::future<SaveDocOutcome> SaveDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::SaveDocRequest&, SaveDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SaveDocAsyncHandler;
                typedef Outcome<Core::Error, Model::StopDocParseResponse> StopDocParseOutcome;
                typedef std::future<StopDocParseOutcome> StopDocParseOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::StopDocParseRequest&, StopDocParseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopDocParseAsyncHandler;
                typedef Outcome<Core::Error, Model::StopWorkflowRunResponse> StopWorkflowRunOutcome;
                typedef std::future<StopWorkflowRunOutcome> StopWorkflowRunOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::StopWorkflowRunRequest&, StopWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSharedKnowledgeResponse> UpdateSharedKnowledgeOutcome;
                typedef std::future<UpdateSharedKnowledgeOutcome> UpdateSharedKnowledgeOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::UpdateSharedKnowledgeRequest&, UpdateSharedKnowledgeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSharedKnowledgeAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateVarResponse> UpdateVarOutcome;
                typedef std::future<UpdateVarOutcome> UpdateVarOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::UpdateVarRequest&, UpdateVarOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVarAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadAttributeLabelResponse> UploadAttributeLabelOutcome;
                typedef std::future<UploadAttributeLabelOutcome> UploadAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::UploadAttributeLabelRequest&, UploadAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyQAResponse> VerifyQAOutcome;
                typedef std::future<VerifyQAOutcome> VerifyQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::VerifyQARequest&, VerifyQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyQAAsyncHandler;



                /**
                 *工作流工具节点异步回调
                 * @param req CallbackWorkflowToolNodeRequest
                 * @return CallbackWorkflowToolNodeOutcome
                 */
                CallbackWorkflowToolNodeOutcome CallbackWorkflowToolNode(const Model::CallbackWorkflowToolNodeRequest &request);
                void CallbackWorkflowToolNodeAsync(const Model::CallbackWorkflowToolNodeRequest& request, const CallbackWorkflowToolNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CallbackWorkflowToolNodeOutcomeCallable CallbackWorkflowToolNodeCallable(const Model::CallbackWorkflowToolNodeRequest& request);

                /**
                 *检查属性下的标签名是否存在
                 * @param req CheckAttributeLabelExistRequest
                 * @return CheckAttributeLabelExistOutcome
                 */
                CheckAttributeLabelExistOutcome CheckAttributeLabelExist(const Model::CheckAttributeLabelExistRequest &request);
                void CheckAttributeLabelExistAsync(const Model::CheckAttributeLabelExistRequest& request, const CheckAttributeLabelExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAttributeLabelExistOutcomeCallable CheckAttributeLabelExistCallable(const Model::CheckAttributeLabelExistRequest& request);

                /**
                 *检查属性标签引用
                 * @param req CheckAttributeLabelReferRequest
                 * @return CheckAttributeLabelReferOutcome
                 */
                CheckAttributeLabelReferOutcome CheckAttributeLabelRefer(const Model::CheckAttributeLabelReferRequest &request);
                void CheckAttributeLabelReferAsync(const Model::CheckAttributeLabelReferRequest& request, const CheckAttributeLabelReferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAttributeLabelReferOutcomeCallable CheckAttributeLabelReferCallable(const Model::CheckAttributeLabelReferRequest& request);

                /**
                 *创建知识引擎应用。
                 * @param req CreateAppRequest
                 * @return CreateAppOutcome
                 */
                CreateAppOutcome CreateApp(const Model::CreateAppRequest &request);
                void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request);

                /**
                 *创建标签
                 * @param req CreateAttributeLabelRequest
                 * @return CreateAttributeLabelOutcome
                 */
                CreateAttributeLabelOutcome CreateAttributeLabel(const Model::CreateAttributeLabelRequest &request);
                void CreateAttributeLabelAsync(const Model::CreateAttributeLabelRequest& request, const CreateAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAttributeLabelOutcomeCallable CreateAttributeLabelCallable(const Model::CreateAttributeLabelRequest& request);

                /**
                 *创建Doc分类
                 * @param req CreateDocCateRequest
                 * @return CreateDocCateOutcome
                 */
                CreateDocCateOutcome CreateDocCate(const Model::CreateDocCateRequest &request);
                void CreateDocCateAsync(const Model::CreateDocCateRequest& request, const CreateDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDocCateOutcomeCallable CreateDocCateCallable(const Model::CreateDocCateRequest& request);

                /**
                 *录入问答
知识库相关背景知识介绍
“知识库检索范围”文档：https://cloud.tencent.com/document/product/1759/112704
“标签”文档：https://cloud.tencent.com/document/product/1759/112956
                 * @param req CreateQARequest
                 * @return CreateQAOutcome
                 */
                CreateQAOutcome CreateQA(const Model::CreateQARequest &request);
                void CreateQAAsync(const Model::CreateQARequest& request, const CreateQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQAOutcomeCallable CreateQACallable(const Model::CreateQARequest& request);

                /**
                 *创建QA分类
知识库相关背景知识介绍
“知识库检索范围”文档：https://cloud.tencent.com/document/product/1759/112704
“标签”文档：https://cloud.tencent.com/document/product/1759/112956
单个知识库内支持创建的分类数量上限为 2000 个。
                 * @param req CreateQACateRequest
                 * @return CreateQACateOutcome
                 */
                CreateQACateOutcome CreateQACate(const Model::CreateQACateRequest &request);
                void CreateQACateAsync(const Model::CreateQACateRequest& request, const CreateQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQACateOutcomeCallable CreateQACateCallable(const Model::CreateQACateRequest& request);

                /**
                 *创建拒答问题
                 * @param req CreateRejectedQuestionRequest
                 * @return CreateRejectedQuestionOutcome
                 */
                CreateRejectedQuestionOutcome CreateRejectedQuestion(const Model::CreateRejectedQuestionRequest &request);
                void CreateRejectedQuestionAsync(const Model::CreateRejectedQuestionRequest& request, const CreateRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRejectedQuestionOutcomeCallable CreateRejectedQuestionCallable(const Model::CreateRejectedQuestionRequest& request);

                /**
                 *创建发布
                 * @param req CreateReleaseRequest
                 * @return CreateReleaseOutcome
                 */
                CreateReleaseOutcome CreateRelease(const Model::CreateReleaseRequest &request);
                void CreateReleaseAsync(const Model::CreateReleaseRequest& request, const CreateReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReleaseOutcomeCallable CreateReleaseCallable(const Model::CreateReleaseRequest& request);

                /**
                 *创建共享知识库。
                 * @param req CreateSharedKnowledgeRequest
                 * @return CreateSharedKnowledgeOutcome
                 */
                CreateSharedKnowledgeOutcome CreateSharedKnowledge(const Model::CreateSharedKnowledgeRequest &request);
                void CreateSharedKnowledgeAsync(const Model::CreateSharedKnowledgeRequest& request, const CreateSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSharedKnowledgeOutcomeCallable CreateSharedKnowledgeCallable(const Model::CreateSharedKnowledgeRequest& request);

                /**
                 *创建变量
                 * @param req CreateVarRequest
                 * @return CreateVarOutcome
                 */
                CreateVarOutcome CreateVar(const Model::CreateVarRequest &request);
                void CreateVarAsync(const Model::CreateVarRequest& request, const CreateVarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVarOutcomeCallable CreateVarCallable(const Model::CreateVarRequest& request);

                /**
                 *本接口用来创建工作流的异步运行实例，创建成功后工作流会在后台异步运行，接口返回工作流运行实例ID（WorkflowRunId）等信息。后面可通过调用DescribeWorkflowRun接口查工作流运行的详情。
注意：工作流的异步运行是基于应用的，需要先把对应的应用配置成“单工作流模式”，才能创建成功。
                 * @param req CreateWorkflowRunRequest
                 * @return CreateWorkflowRunOutcome
                 */
                CreateWorkflowRunOutcome CreateWorkflowRun(const Model::CreateWorkflowRunRequest &request);
                void CreateWorkflowRunAsync(const Model::CreateWorkflowRunRequest& request, const CreateWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowRunOutcomeCallable CreateWorkflowRunCallable(const Model::CreateWorkflowRunRequest& request);

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
                 *删除属性标签
                 * @param req DeleteAttributeLabelRequest
                 * @return DeleteAttributeLabelOutcome
                 */
                DeleteAttributeLabelOutcome DeleteAttributeLabel(const Model::DeleteAttributeLabelRequest &request);
                void DeleteAttributeLabelAsync(const Model::DeleteAttributeLabelRequest& request, const DeleteAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAttributeLabelOutcomeCallable DeleteAttributeLabelCallable(const Model::DeleteAttributeLabelRequest& request);

                /**
                 *删除文档
                 * @param req DeleteDocRequest
                 * @return DeleteDocOutcome
                 */
                DeleteDocOutcome DeleteDoc(const Model::DeleteDocRequest &request);
                void DeleteDocAsync(const Model::DeleteDocRequest& request, const DeleteDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDocOutcomeCallable DeleteDocCallable(const Model::DeleteDocRequest& request);

                /**
                 *Doc分类删除
                 * @param req DeleteDocCateRequest
                 * @return DeleteDocCateOutcome
                 */
                DeleteDocCateOutcome DeleteDocCate(const Model::DeleteDocCateRequest &request);
                void DeleteDocCateAsync(const Model::DeleteDocCateRequest& request, const DeleteDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDocCateOutcomeCallable DeleteDocCateCallable(const Model::DeleteDocCateRequest& request);

                /**
                 *删除问答
                 * @param req DeleteQARequest
                 * @return DeleteQAOutcome
                 */
                DeleteQAOutcome DeleteQA(const Model::DeleteQARequest &request);
                void DeleteQAAsync(const Model::DeleteQARequest& request, const DeleteQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQAOutcomeCallable DeleteQACallable(const Model::DeleteQARequest& request);

                /**
                 *分类删除
                 * @param req DeleteQACateRequest
                 * @return DeleteQACateOutcome
                 */
                DeleteQACateOutcome DeleteQACate(const Model::DeleteQACateRequest &request);
                void DeleteQACateAsync(const Model::DeleteQACateRequest& request, const DeleteQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQACateOutcomeCallable DeleteQACateCallable(const Model::DeleteQACateRequest& request);

                /**
                 *删除拒答问题
                 * @param req DeleteRejectedQuestionRequest
                 * @return DeleteRejectedQuestionOutcome
                 */
                DeleteRejectedQuestionOutcome DeleteRejectedQuestion(const Model::DeleteRejectedQuestionRequest &request);
                void DeleteRejectedQuestionAsync(const Model::DeleteRejectedQuestionRequest& request, const DeleteRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRejectedQuestionOutcomeCallable DeleteRejectedQuestionCallable(const Model::DeleteRejectedQuestionRequest& request);

                /**
                 *删除共享知识库。
                 * @param req DeleteSharedKnowledgeRequest
                 * @return DeleteSharedKnowledgeOutcome
                 */
                DeleteSharedKnowledgeOutcome DeleteSharedKnowledge(const Model::DeleteSharedKnowledgeRequest &request);
                void DeleteSharedKnowledgeAsync(const Model::DeleteSharedKnowledgeRequest& request, const DeleteSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSharedKnowledgeOutcomeCallable DeleteSharedKnowledgeCallable(const Model::DeleteSharedKnowledgeRequest& request);

                /**
                 *删除变量
                 * @param req DeleteVarRequest
                 * @return DeleteVarOutcome
                 */
                DeleteVarOutcome DeleteVar(const Model::DeleteVarRequest &request);
                void DeleteVarAsync(const Model::DeleteVarRequest& request, const DeleteVarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVarOutcomeCallable DeleteVarCallable(const Model::DeleteVarRequest& request);

                /**
                 *获取企业下应用详情
                 * @param req DescribeAppRequest
                 * @return DescribeAppOutcome
                 */
                DescribeAppOutcome DescribeApp(const Model::DescribeAppRequest &request);
                void DescribeAppAsync(const Model::DescribeAppRequest& request, const DescribeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppOutcomeCallable DescribeAppCallable(const Model::DescribeAppRequest& request);

                /**
                 *查询指定应用下的Agent列表
                 * @param req DescribeAppAgentListRequest
                 * @return DescribeAppAgentListOutcome
                 */
                DescribeAppAgentListOutcome DescribeAppAgentList(const Model::DescribeAppAgentListRequest &request);
                void DescribeAppAgentListAsync(const Model::DescribeAppAgentListRequest& request, const DescribeAppAgentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppAgentListOutcomeCallable DescribeAppAgentListCallable(const Model::DescribeAppAgentListRequest& request);

                /**
                 *查询属性标签详情
                 * @param req DescribeAttributeLabelRequest
                 * @return DescribeAttributeLabelOutcome
                 */
                DescribeAttributeLabelOutcome DescribeAttributeLabel(const Model::DescribeAttributeLabelRequest &request);
                void DescribeAttributeLabelAsync(const Model::DescribeAttributeLabelRequest& request, const DescribeAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttributeLabelOutcomeCallable DescribeAttributeLabelCallable(const Model::DescribeAttributeLabelRequest& request);

                /**
                 *接口调用折线图
                 * @param req DescribeCallStatsGraphRequest
                 * @return DescribeCallStatsGraphOutcome
                 */
                DescribeCallStatsGraphOutcome DescribeCallStatsGraph(const Model::DescribeCallStatsGraphRequest &request);
                void DescribeCallStatsGraphAsync(const Model::DescribeCallStatsGraphRequest& request, const DescribeCallStatsGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallStatsGraphOutcomeCallable DescribeCallStatsGraphCallable(const Model::DescribeCallStatsGraphRequest& request);

                /**
                 *并发调用响应
                 * @param req DescribeConcurrencyUsageRequest
                 * @return DescribeConcurrencyUsageOutcome
                 */
                DescribeConcurrencyUsageOutcome DescribeConcurrencyUsage(const Model::DescribeConcurrencyUsageRequest &request);
                void DescribeConcurrencyUsageAsync(const Model::DescribeConcurrencyUsageRequest& request, const DescribeConcurrencyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConcurrencyUsageOutcomeCallable DescribeConcurrencyUsageCallable(const Model::DescribeConcurrencyUsageRequest& request);

                /**
                 *并发调用折线图
                 * @param req DescribeConcurrencyUsageGraphRequest
                 * @return DescribeConcurrencyUsageGraphOutcome
                 */
                DescribeConcurrencyUsageGraphOutcome DescribeConcurrencyUsageGraph(const Model::DescribeConcurrencyUsageGraphRequest &request);
                void DescribeConcurrencyUsageGraphAsync(const Model::DescribeConcurrencyUsageGraphRequest& request, const DescribeConcurrencyUsageGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConcurrencyUsageGraphOutcomeCallable DescribeConcurrencyUsageGraphCallable(const Model::DescribeConcurrencyUsageGraphRequest& request);

                /**
                 *文档详情
                 * @param req DescribeDocRequest
                 * @return DescribeDocOutcome
                 */
                DescribeDocOutcome DescribeDoc(const Model::DescribeDocRequest &request);
                void DescribeDocAsync(const Model::DescribeDocRequest& request, const DescribeDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDocOutcomeCallable DescribeDocCallable(const Model::DescribeDocRequest& request);

                /**
                 *查询知识库用量
                 * @param req DescribeKnowledgeUsageRequest
                 * @return DescribeKnowledgeUsageOutcome
                 */
                DescribeKnowledgeUsageOutcome DescribeKnowledgeUsage(const Model::DescribeKnowledgeUsageRequest &request);
                void DescribeKnowledgeUsageAsync(const Model::DescribeKnowledgeUsageRequest& request, const DescribeKnowledgeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKnowledgeUsageOutcomeCallable DescribeKnowledgeUsageCallable(const Model::DescribeKnowledgeUsageRequest& request);

                /**
                 *查询企业知识库容量饼图
                 * @param req DescribeKnowledgeUsagePieGraphRequest
                 * @return DescribeKnowledgeUsagePieGraphOutcome
                 */
                DescribeKnowledgeUsagePieGraphOutcome DescribeKnowledgeUsagePieGraph(const Model::DescribeKnowledgeUsagePieGraphRequest &request);
                void DescribeKnowledgeUsagePieGraphAsync(const Model::DescribeKnowledgeUsagePieGraphRequest& request, const DescribeKnowledgeUsagePieGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKnowledgeUsagePieGraphOutcomeCallable DescribeKnowledgeUsagePieGraphCallable(const Model::DescribeKnowledgeUsagePieGraphRequest& request);

                /**
                 *通过DescribeWorkflowRun接口获取了工作流异步运行的整体内容，其中包含了基本的节点信息，再通过本接口可查看节点的运行详情（包括输入、输出、日志等）。
                 * @param req DescribeNodeRunRequest
                 * @return DescribeNodeRunOutcome
                 */
                DescribeNodeRunOutcome DescribeNodeRun(const Model::DescribeNodeRunRequest &request);
                void DescribeNodeRunAsync(const Model::DescribeNodeRunRequest& request, const DescribeNodeRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodeRunOutcomeCallable DescribeNodeRunCallable(const Model::DescribeNodeRunRequest& request);

                /**
                 *问答详情
                 * @param req DescribeQARequest
                 * @return DescribeQAOutcome
                 */
                DescribeQAOutcome DescribeQA(const Model::DescribeQARequest &request);
                void DescribeQAAsync(const Model::DescribeQARequest& request, const DescribeQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQAOutcomeCallable DescribeQACallable(const Model::DescribeQARequest& request);

                /**
                 *获取来源详情列表
                 * @param req DescribeReferRequest
                 * @return DescribeReferOutcome
                 */
                DescribeReferOutcome DescribeRefer(const Model::DescribeReferRequest &request);
                void DescribeReferAsync(const Model::DescribeReferRequest& request, const DescribeReferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReferOutcomeCallable DescribeReferCallable(const Model::DescribeReferRequest& request);

                /**
                 *发布详情
                 * @param req DescribeReleaseRequest
                 * @return DescribeReleaseOutcome
                 */
                DescribeReleaseOutcome DescribeRelease(const Model::DescribeReleaseRequest &request);
                void DescribeReleaseAsync(const Model::DescribeReleaseRequest& request, const DescribeReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReleaseOutcomeCallable DescribeReleaseCallable(const Model::DescribeReleaseRequest& request);

                /**
                 *拉取发布按钮状态、最后发布时间
                 * @param req DescribeReleaseInfoRequest
                 * @return DescribeReleaseInfoOutcome
                 */
                DescribeReleaseInfoOutcome DescribeReleaseInfo(const Model::DescribeReleaseInfoRequest &request);
                void DescribeReleaseInfoAsync(const Model::DescribeReleaseInfoRequest& request, const DescribeReleaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReleaseInfoOutcomeCallable DescribeReleaseInfoCallable(const Model::DescribeReleaseInfoRequest& request);

                /**
                 *通过appKey获取应用业务ID
                 * @param req DescribeRobotBizIDByAppKeyRequest
                 * @return DescribeRobotBizIDByAppKeyOutcome
                 */
                DescribeRobotBizIDByAppKeyOutcome DescribeRobotBizIDByAppKey(const Model::DescribeRobotBizIDByAppKeyRequest &request);
                void DescribeRobotBizIDByAppKeyAsync(const Model::DescribeRobotBizIDByAppKeyRequest& request, const DescribeRobotBizIDByAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRobotBizIDByAppKeyOutcomeCallable DescribeRobotBizIDByAppKeyCallable(const Model::DescribeRobotBizIDByAppKeyRequest& request);

                /**
                 *查询搜索服务调用折线图
                 * @param req DescribeSearchStatsGraphRequest
                 * @return DescribeSearchStatsGraphOutcome
                 */
                DescribeSearchStatsGraphOutcome DescribeSearchStatsGraph(const Model::DescribeSearchStatsGraphRequest &request);
                void DescribeSearchStatsGraphAsync(const Model::DescribeSearchStatsGraphRequest& request, const DescribeSearchStatsGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSearchStatsGraphOutcomeCallable DescribeSearchStatsGraphCallable(const Model::DescribeSearchStatsGraphRequest& request);

                /**
                 *获取片段详情
                 * @param req DescribeSegmentsRequest
                 * @return DescribeSegmentsOutcome
                 */
                DescribeSegmentsOutcome DescribeSegments(const Model::DescribeSegmentsRequest &request);
                void DescribeSegmentsAsync(const Model::DescribeSegmentsRequest& request, const DescribeSegmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSegmentsOutcomeCallable DescribeSegmentsCallable(const Model::DescribeSegmentsRequest& request);

                /**
                 *查询共享知识库。
                 * @param req DescribeSharedKnowledgeRequest
                 * @return DescribeSharedKnowledgeOutcome
                 */
                DescribeSharedKnowledgeOutcome DescribeSharedKnowledge(const Model::DescribeSharedKnowledgeRequest &request);
                void DescribeSharedKnowledgeAsync(const Model::DescribeSharedKnowledgeRequest& request, const DescribeSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSharedKnowledgeOutcomeCallable DescribeSharedKnowledgeCallable(const Model::DescribeSharedKnowledgeRequest& request);

                /**
                 *获取文件上传临时密钥
                 * @param req DescribeStorageCredentialRequest
                 * @return DescribeStorageCredentialOutcome
                 */
                DescribeStorageCredentialOutcome DescribeStorageCredential(const Model::DescribeStorageCredentialRequest &request);
                void DescribeStorageCredentialAsync(const Model::DescribeStorageCredentialRequest& request, const DescribeStorageCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageCredentialOutcomeCallable DescribeStorageCredentialCallable(const Model::DescribeStorageCredentialRequest& request);

                /**
                 *接口调用token详情
                 * @param req DescribeTokenUsageRequest
                 * @return DescribeTokenUsageOutcome
                 */
                DescribeTokenUsageOutcome DescribeTokenUsage(const Model::DescribeTokenUsageRequest &request);
                void DescribeTokenUsageAsync(const Model::DescribeTokenUsageRequest& request, const DescribeTokenUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenUsageOutcomeCallable DescribeTokenUsageCallable(const Model::DescribeTokenUsageRequest& request);

                /**
                 *接口调用token折线图
                 * @param req DescribeTokenUsageGraphRequest
                 * @return DescribeTokenUsageGraphOutcome
                 */
                DescribeTokenUsageGraphOutcome DescribeTokenUsageGraph(const Model::DescribeTokenUsageGraphRequest &request);
                void DescribeTokenUsageGraphAsync(const Model::DescribeTokenUsageGraphRequest& request, const DescribeTokenUsageGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenUsageGraphOutcomeCallable DescribeTokenUsageGraphCallable(const Model::DescribeTokenUsageGraphRequest& request);

                /**
                 *获取不满意回复上下文
                 * @param req DescribeUnsatisfiedReplyContextRequest
                 * @return DescribeUnsatisfiedReplyContextOutcome
                 */
                DescribeUnsatisfiedReplyContextOutcome DescribeUnsatisfiedReplyContext(const Model::DescribeUnsatisfiedReplyContextRequest &request);
                void DescribeUnsatisfiedReplyContextAsync(const Model::DescribeUnsatisfiedReplyContextRequest& request, const DescribeUnsatisfiedReplyContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnsatisfiedReplyContextOutcomeCallable DescribeUnsatisfiedReplyContextCallable(const Model::DescribeUnsatisfiedReplyContextRequest& request);

                /**
                 *创建了工作流的异步运行实例后，通过本接口可以查询整体的运行详情。
                 * @param req DescribeWorkflowRunRequest
                 * @return DescribeWorkflowRunOutcome
                 */
                DescribeWorkflowRunOutcome DescribeWorkflowRun(const Model::DescribeWorkflowRunRequest &request);
                void DescribeWorkflowRunAsync(const Model::DescribeWorkflowRunRequest& request, const DescribeWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowRunOutcomeCallable DescribeWorkflowRunCallable(const Model::DescribeWorkflowRunRequest& request);

                /**
                 *导出标签
                 * @param req ExportAttributeLabelRequest
                 * @return ExportAttributeLabelOutcome
                 */
                ExportAttributeLabelOutcome ExportAttributeLabel(const Model::ExportAttributeLabelRequest &request);
                void ExportAttributeLabelAsync(const Model::ExportAttributeLabelRequest& request, const ExportAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAttributeLabelOutcomeCallable ExportAttributeLabelCallable(const Model::ExportAttributeLabelRequest& request);

                /**
                 *导出QA列表
知识库相关背景知识介绍
“知识库检索范围”文档：https://cloud.tencent.com/document/product/1759/112704
“标签”文档：https://cloud.tencent.com/document/product/1759/112956
                 * @param req ExportQAListRequest
                 * @return ExportQAListOutcome
                 */
                ExportQAListOutcome ExportQAList(const Model::ExportQAListRequest &request);
                void ExportQAListAsync(const Model::ExportQAListRequest& request, const ExportQAListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportQAListOutcomeCallable ExportQAListCallable(const Model::ExportQAListRequest& request);

                /**
                 *导出不满意回复
知识库相关背景知识介绍
“知识库检索范围”文档：https://cloud.tencent.com/document/product/1759/112704
“标签”文档：https://cloud.tencent.com/document/product/1759/112956
                 * @param req ExportUnsatisfiedReplyRequest
                 * @return ExportUnsatisfiedReplyOutcome
                 */
                ExportUnsatisfiedReplyOutcome ExportUnsatisfiedReply(const Model::ExportUnsatisfiedReplyRequest &request);
                void ExportUnsatisfiedReplyAsync(const Model::ExportUnsatisfiedReplyRequest& request, const ExportUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportUnsatisfiedReplyOutcomeCallable ExportUnsatisfiedReplyCallable(const Model::ExportUnsatisfiedReplyRequest& request);

                /**
                 *文档生成问答
                 * @param req GenerateQARequest
                 * @return GenerateQAOutcome
                 */
                GenerateQAOutcome GenerateQA(const Model::GenerateQARequest &request);
                void GenerateQAAsync(const Model::GenerateQARequest& request, const GenerateQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateQAOutcomeCallable GenerateQACallable(const Model::GenerateQARequest& request);

                /**
                 *回答类型数据统计
                 * @param req GetAnswerTypeDataCountRequest
                 * @return GetAnswerTypeDataCountOutcome
                 */
                GetAnswerTypeDataCountOutcome GetAnswerTypeDataCount(const Model::GetAnswerTypeDataCountRequest &request);
                void GetAnswerTypeDataCountAsync(const Model::GetAnswerTypeDataCountRequest& request, const GetAnswerTypeDataCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAnswerTypeDataCountOutcomeCallable GetAnswerTypeDataCountCallable(const Model::GetAnswerTypeDataCountRequest& request);

                /**
                 *获取模型列表
                 * @param req GetAppKnowledgeCountRequest
                 * @return GetAppKnowledgeCountOutcome
                 */
                GetAppKnowledgeCountOutcome GetAppKnowledgeCount(const Model::GetAppKnowledgeCountRequest &request);
                void GetAppKnowledgeCountAsync(const Model::GetAppKnowledgeCountRequest& request, const GetAppKnowledgeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAppKnowledgeCountOutcomeCallable GetAppKnowledgeCountCallable(const Model::GetAppKnowledgeCountRequest& request);

                /**
                 *获取应用密钥
                 * @param req GetAppSecretRequest
                 * @return GetAppSecretOutcome
                 */
                GetAppSecretOutcome GetAppSecret(const Model::GetAppSecretRequest &request);
                void GetAppSecretAsync(const Model::GetAppSecretRequest& request, const GetAppSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAppSecretOutcomeCallable GetAppSecretCallable(const Model::GetAppSecretRequest& request);

                /**
                 *获取文档预览信息
                 * @param req GetDocPreviewRequest
                 * @return GetDocPreviewOutcome
                 */
                GetDocPreviewOutcome GetDocPreview(const Model::GetDocPreviewRequest &request);
                void GetDocPreviewAsync(const Model::GetDocPreviewRequest& request, const GetDocPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDocPreviewOutcomeCallable GetDocPreviewCallable(const Model::GetDocPreviewRequest& request);

                /**
                 *点赞点踩数据统计
                 * @param req GetLikeDataCountRequest
                 * @return GetLikeDataCountOutcome
                 */
                GetLikeDataCountOutcome GetLikeDataCount(const Model::GetLikeDataCountRequest &request);
                void GetLikeDataCountAsync(const Model::GetLikeDataCountRequest& request, const GetLikeDataCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLikeDataCountOutcomeCallable GetLikeDataCountCallable(const Model::GetLikeDataCountRequest& request);

                /**
                 *获取聊天历史
根据会话session id获取聊天历史（仅保留180天内的历史对话数据）
                 * @param req GetMsgRecordRequest
                 * @return GetMsgRecordOutcome
                 */
                GetMsgRecordOutcome GetMsgRecord(const Model::GetMsgRecordRequest &request);
                void GetMsgRecordAsync(const Model::GetMsgRecordRequest& request, const GetMsgRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMsgRecordOutcomeCallable GetMsgRecordCallable(const Model::GetMsgRecordRequest& request);

                /**
                 *获取任务状态
                 * @param req GetTaskStatusRequest
                 * @return GetTaskStatusOutcome
                 */
                GetTaskStatusOutcome GetTaskStatus(const Model::GetTaskStatusRequest &request);
                void GetTaskStatusAsync(const Model::GetTaskStatusRequest& request, const GetTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskStatusOutcomeCallable GetTaskStatusCallable(const Model::GetTaskStatusRequest& request);

                /**
                 *查询自定义变量列表
                 * @param req GetVarListRequest
                 * @return GetVarListOutcome
                 */
                GetVarListOutcome GetVarList(const Model::GetVarListRequest &request);
                void GetVarListAsync(const Model::GetVarListRequest& request, const GetVarListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetVarListOutcomeCallable GetVarListCallable(const Model::GetVarListRequest& request);

                /**
                 *获取ws token
                 * @param req GetWsTokenRequest
                 * @return GetWsTokenOutcome
                 */
                GetWsTokenOutcome GetWsToken(const Model::GetWsTokenRequest &request);
                void GetWsTokenAsync(const Model::GetWsTokenRequest& request, const GetWsTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWsTokenOutcomeCallable GetWsTokenCallable(const Model::GetWsTokenRequest& request);

                /**
                 *Doc分组
                 * @param req GroupDocRequest
                 * @return GroupDocOutcome
                 */
                GroupDocOutcome GroupDoc(const Model::GroupDocRequest &request);
                void GroupDocAsync(const Model::GroupDocRequest& request, const GroupDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GroupDocOutcomeCallable GroupDocCallable(const Model::GroupDocRequest& request);

                /**
                 *用户将多个问答批量的分类到知识库的具体分类
知识库相关背景知识介绍
“知识库检索范围”文档：https://cloud.tencent.com/document/product/1759/112704
“标签”文档：https://cloud.tencent.com/document/product/1759/112956
                 * @param req GroupQARequest
                 * @return GroupQAOutcome
                 */
                GroupQAOutcome GroupQA(const Model::GroupQARequest &request);
                void GroupQAAsync(const Model::GroupQARequest& request, const GroupQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GroupQAOutcomeCallable GroupQACallable(const Model::GroupQARequest& request);

                /**
                 *忽略不满意回复
                 * @param req IgnoreUnsatisfiedReplyRequest
                 * @return IgnoreUnsatisfiedReplyOutcome
                 */
                IgnoreUnsatisfiedReplyOutcome IgnoreUnsatisfiedReply(const Model::IgnoreUnsatisfiedReplyRequest &request);
                void IgnoreUnsatisfiedReplyAsync(const Model::IgnoreUnsatisfiedReplyRequest& request, const IgnoreUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IgnoreUnsatisfiedReplyOutcomeCallable IgnoreUnsatisfiedReplyCallable(const Model::IgnoreUnsatisfiedReplyRequest& request);

                /**
                 *是否意图转人工
                 * @param req IsTransferIntentRequest
                 * @return IsTransferIntentOutcome
                 */
                IsTransferIntentOutcome IsTransferIntent(const Model::IsTransferIntentRequest &request);
                void IsTransferIntentAsync(const Model::IsTransferIntentRequest& request, const IsTransferIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsTransferIntentOutcomeCallable IsTransferIntentCallable(const Model::IsTransferIntentRequest& request);

                /**
                 *获取企业下应用列表
                 * @param req ListAppRequest
                 * @return ListAppOutcome
                 */
                ListAppOutcome ListApp(const Model::ListAppRequest &request);
                void ListAppAsync(const Model::ListAppRequest& request, const ListAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAppOutcomeCallable ListAppCallable(const Model::ListAppRequest& request);

                /**
                 *列表查询知识库容量详情
                 * @param req ListAppKnowledgeDetailRequest
                 * @return ListAppKnowledgeDetailOutcome
                 */
                ListAppKnowledgeDetailOutcome ListAppKnowledgeDetail(const Model::ListAppKnowledgeDetailRequest &request);
                void ListAppKnowledgeDetailAsync(const Model::ListAppKnowledgeDetailRequest& request, const ListAppKnowledgeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAppKnowledgeDetailOutcomeCallable ListAppKnowledgeDetailCallable(const Model::ListAppKnowledgeDetailRequest& request);

                /**
                 *查询属性标签列表
                 * @param req ListAttributeLabelRequest
                 * @return ListAttributeLabelOutcome
                 */
                ListAttributeLabelOutcome ListAttributeLabel(const Model::ListAttributeLabelRequest &request);
                void ListAttributeLabelAsync(const Model::ListAttributeLabelRequest& request, const ListAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAttributeLabelOutcomeCallable ListAttributeLabelCallable(const Model::ListAttributeLabelRequest& request);

                /**
                 *获取发布渠道列表
                 * @param req ListChannelRequest
                 * @return ListChannelOutcome
                 */
                ListChannelOutcome ListChannel(const Model::ListChannelRequest &request);
                void ListChannelAsync(const Model::ListChannelRequest& request, const ListChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListChannelOutcomeCallable ListChannelCallable(const Model::ListChannelRequest& request);

                /**
                 *文档列表
                 * @param req ListDocRequest
                 * @return ListDocOutcome
                 */
                ListDocOutcome ListDoc(const Model::ListDocRequest &request);
                void ListDocAsync(const Model::ListDocRequest& request, const ListDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDocOutcomeCallable ListDocCallable(const Model::ListDocRequest& request);

                /**
                 *获取Doc分类
                 * @param req ListDocCateRequest
                 * @return ListDocCateOutcome
                 */
                ListDocCateOutcome ListDocCate(const Model::ListDocCateRequest &request);
                void ListDocCateAsync(const Model::ListDocCateRequest& request, const ListDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDocCateOutcomeCallable ListDocCateCallable(const Model::ListDocCateRequest& request);

                /**
                 *获取模型列表
                 * @param req ListModelRequest
                 * @return ListModelOutcome
                 */
                ListModelOutcome ListModel(const Model::ListModelRequest &request);
                void ListModelAsync(const Model::ListModelRequest& request, const ListModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListModelOutcomeCallable ListModelCallable(const Model::ListModelRequest& request);

                /**
                 *问答列表
知识库相关背景知识介绍
“知识库检索范围”文档：https://cloud.tencent.com/document/product/1759/112704
“标签”文档：https://cloud.tencent.com/document/product/1759/112956
                 * @param req ListQARequest
                 * @return ListQAOutcome
                 */
                ListQAOutcome ListQA(const Model::ListQARequest &request);
                void ListQAAsync(const Model::ListQARequest& request, const ListQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListQAOutcomeCallable ListQACallable(const Model::ListQARequest& request);

                /**
                 *获取QA分类
知识库相关背景知识介绍
“知识库检索范围”文档：https://cloud.tencent.com/document/product/1759/112704
“标签”文档：https://cloud.tencent.com/document/product/1759/112956
                 * @param req ListQACateRequest
                 * @return ListQACateOutcome
                 */
                ListQACateOutcome ListQACate(const Model::ListQACateRequest &request);
                void ListQACateAsync(const Model::ListQACateRequest& request, const ListQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListQACateOutcomeCallable ListQACateCallable(const Model::ListQACateRequest& request);

                /**
                 *查看应用引用了哪些共享知识库，可以看到共享知识库的基础信息，包括名称，id等
                 * @param req ListReferShareKnowledgeRequest
                 * @return ListReferShareKnowledgeOutcome
                 */
                ListReferShareKnowledgeOutcome ListReferShareKnowledge(const Model::ListReferShareKnowledgeRequest &request);
                void ListReferShareKnowledgeAsync(const Model::ListReferShareKnowledgeRequest& request, const ListReferShareKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListReferShareKnowledgeOutcomeCallable ListReferShareKnowledgeCallable(const Model::ListReferShareKnowledgeRequest& request);

                /**
                 *获取拒答问题
                 * @param req ListRejectedQuestionRequest
                 * @return ListRejectedQuestionOutcome
                 */
                ListRejectedQuestionOutcome ListRejectedQuestion(const Model::ListRejectedQuestionRequest &request);
                void ListRejectedQuestionAsync(const Model::ListRejectedQuestionRequest& request, const ListRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRejectedQuestionOutcomeCallable ListRejectedQuestionCallable(const Model::ListRejectedQuestionRequest& request);

                /**
                 *发布拒答问题预览
                 * @param req ListRejectedQuestionPreviewRequest
                 * @return ListRejectedQuestionPreviewOutcome
                 */
                ListRejectedQuestionPreviewOutcome ListRejectedQuestionPreview(const Model::ListRejectedQuestionPreviewRequest &request);
                void ListRejectedQuestionPreviewAsync(const Model::ListRejectedQuestionPreviewRequest& request, const ListRejectedQuestionPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRejectedQuestionPreviewOutcomeCallable ListRejectedQuestionPreviewCallable(const Model::ListRejectedQuestionPreviewRequest& request);

                /**
                 *发布列表
                 * @param req ListReleaseRequest
                 * @return ListReleaseOutcome
                 */
                ListReleaseOutcome ListRelease(const Model::ListReleaseRequest &request);
                void ListReleaseAsync(const Model::ListReleaseRequest& request, const ListReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListReleaseOutcomeCallable ListReleaseCallable(const Model::ListReleaseRequest& request);

                /**
                 *发布配置项预览
                 * @param req ListReleaseConfigPreviewRequest
                 * @return ListReleaseConfigPreviewOutcome
                 */
                ListReleaseConfigPreviewOutcome ListReleaseConfigPreview(const Model::ListReleaseConfigPreviewRequest &request);
                void ListReleaseConfigPreviewAsync(const Model::ListReleaseConfigPreviewRequest& request, const ListReleaseConfigPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListReleaseConfigPreviewOutcomeCallable ListReleaseConfigPreviewCallable(const Model::ListReleaseConfigPreviewRequest& request);

                /**
                 *发布文档预览
                 * @param req ListReleaseDocPreviewRequest
                 * @return ListReleaseDocPreviewOutcome
                 */
                ListReleaseDocPreviewOutcome ListReleaseDocPreview(const Model::ListReleaseDocPreviewRequest &request);
                void ListReleaseDocPreviewAsync(const Model::ListReleaseDocPreviewRequest& request, const ListReleaseDocPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListReleaseDocPreviewOutcomeCallable ListReleaseDocPreviewCallable(const Model::ListReleaseDocPreviewRequest& request);

                /**
                 *文档列表
                 * @param req ListReleaseQAPreviewRequest
                 * @return ListReleaseQAPreviewOutcome
                 */
                ListReleaseQAPreviewOutcome ListReleaseQAPreview(const Model::ListReleaseQAPreviewRequest &request);
                void ListReleaseQAPreviewAsync(const Model::ListReleaseQAPreviewRequest& request, const ListReleaseQAPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListReleaseQAPreviewOutcomeCallable ListReleaseQAPreviewCallable(const Model::ListReleaseQAPreviewRequest& request);

                /**
                 *获取文档下拉列表。
                 * @param req ListSelectDocRequest
                 * @return ListSelectDocOutcome
                 */
                ListSelectDocOutcome ListSelectDoc(const Model::ListSelectDocRequest &request);
                void ListSelectDocAsync(const Model::ListSelectDocRequest& request, const ListSelectDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSelectDocOutcomeCallable ListSelectDocCallable(const Model::ListSelectDocRequest& request);

                /**
                 *列举共享知识库。
                 * @param req ListSharedKnowledgeRequest
                 * @return ListSharedKnowledgeOutcome
                 */
                ListSharedKnowledgeOutcome ListSharedKnowledge(const Model::ListSharedKnowledgeRequest &request);
                void ListSharedKnowledgeAsync(const Model::ListSharedKnowledgeRequest& request, const ListSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSharedKnowledgeOutcomeCallable ListSharedKnowledgeCallable(const Model::ListSharedKnowledgeRequest& request);

                /**
                 *查询不满意回复列表
                 * @param req ListUnsatisfiedReplyRequest
                 * @return ListUnsatisfiedReplyOutcome
                 */
                ListUnsatisfiedReplyOutcome ListUnsatisfiedReply(const Model::ListUnsatisfiedReplyRequest &request);
                void ListUnsatisfiedReplyAsync(const Model::ListUnsatisfiedReplyRequest& request, const ListUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUnsatisfiedReplyOutcomeCallable ListUnsatisfiedReplyCallable(const Model::ListUnsatisfiedReplyRequest& request);

                /**
                 *列表查询单次调用明细
                 * @param req ListUsageCallDetailRequest
                 * @return ListUsageCallDetailOutcome
                 */
                ListUsageCallDetailOutcome ListUsageCallDetail(const Model::ListUsageCallDetailRequest &request);
                void ListUsageCallDetailAsync(const Model::ListUsageCallDetailRequest& request, const ListUsageCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUsageCallDetailOutcomeCallable ListUsageCallDetailCallable(const Model::ListUsageCallDetailRequest& request);

                /**
                 *此接口可查询已创建的所有工作流异步运行实例。
                 * @param req ListWorkflowRunsRequest
                 * @return ListWorkflowRunsOutcome
                 */
                ListWorkflowRunsOutcome ListWorkflowRuns(const Model::ListWorkflowRunsRequest &request);
                void ListWorkflowRunsAsync(const Model::ListWorkflowRunsRequest& request, const ListWorkflowRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListWorkflowRunsOutcomeCallable ListWorkflowRunsCallable(const Model::ListWorkflowRunsRequest& request);

                /**
                 *修改应用请求结构体
                 * @param req ModifyAppRequest
                 * @return ModifyAppOutcome
                 */
                ModifyAppOutcome ModifyApp(const Model::ModifyAppRequest &request);
                void ModifyAppAsync(const Model::ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAppOutcomeCallable ModifyAppCallable(const Model::ModifyAppRequest& request);

                /**
                 *编辑属性标签
                 * @param req ModifyAttributeLabelRequest
                 * @return ModifyAttributeLabelOutcome
                 */
                ModifyAttributeLabelOutcome ModifyAttributeLabel(const Model::ModifyAttributeLabelRequest &request);
                void ModifyAttributeLabelAsync(const Model::ModifyAttributeLabelRequest& request, const ModifyAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAttributeLabelOutcomeCallable ModifyAttributeLabelCallable(const Model::ModifyAttributeLabelRequest& request);

                /**
                 *修改文档
                 * @param req ModifyDocRequest
                 * @return ModifyDocOutcome
                 */
                ModifyDocOutcome ModifyDoc(const Model::ModifyDocRequest &request);
                void ModifyDocAsync(const Model::ModifyDocRequest& request, const ModifyDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDocOutcomeCallable ModifyDocCallable(const Model::ModifyDocRequest& request);

                /**
                 *批量修改文档适用范围
                 * @param req ModifyDocAttrRangeRequest
                 * @return ModifyDocAttrRangeOutcome
                 */
                ModifyDocAttrRangeOutcome ModifyDocAttrRange(const Model::ModifyDocAttrRangeRequest &request);
                void ModifyDocAttrRangeAsync(const Model::ModifyDocAttrRangeRequest& request, const ModifyDocAttrRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDocAttrRangeOutcomeCallable ModifyDocAttrRangeCallable(const Model::ModifyDocAttrRangeRequest& request);

                /**
                 *修改Doc分类
                 * @param req ModifyDocCateRequest
                 * @return ModifyDocCateOutcome
                 */
                ModifyDocCateOutcome ModifyDocCate(const Model::ModifyDocCateRequest &request);
                void ModifyDocCateAsync(const Model::ModifyDocCateRequest& request, const ModifyDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDocCateOutcomeCallable ModifyDocCateCallable(const Model::ModifyDocCateRequest& request);

                /**
                 *更新问答
                 * @param req ModifyQARequest
                 * @return ModifyQAOutcome
                 */
                ModifyQAOutcome ModifyQA(const Model::ModifyQARequest &request);
                void ModifyQAAsync(const Model::ModifyQARequest& request, const ModifyQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyQAOutcomeCallable ModifyQACallable(const Model::ModifyQARequest& request);

                /**
                 *批量修改问答适用范围
                 * @param req ModifyQAAttrRangeRequest
                 * @return ModifyQAAttrRangeOutcome
                 */
                ModifyQAAttrRangeOutcome ModifyQAAttrRange(const Model::ModifyQAAttrRangeRequest &request);
                void ModifyQAAttrRangeAsync(const Model::ModifyQAAttrRangeRequest& request, const ModifyQAAttrRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyQAAttrRangeOutcomeCallable ModifyQAAttrRangeCallable(const Model::ModifyQAAttrRangeRequest& request);

                /**
                 *更新QA分类
                 * @param req ModifyQACateRequest
                 * @return ModifyQACateOutcome
                 */
                ModifyQACateOutcome ModifyQACate(const Model::ModifyQACateRequest &request);
                void ModifyQACateAsync(const Model::ModifyQACateRequest& request, const ModifyQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyQACateOutcomeCallable ModifyQACateCallable(const Model::ModifyQACateRequest& request);

                /**
                 *修改拒答问题
                 * @param req ModifyRejectedQuestionRequest
                 * @return ModifyRejectedQuestionOutcome
                 */
                ModifyRejectedQuestionOutcome ModifyRejectedQuestion(const Model::ModifyRejectedQuestionRequest &request);
                void ModifyRejectedQuestionAsync(const Model::ModifyRejectedQuestionRequest& request, const ModifyRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRejectedQuestionOutcomeCallable ModifyRejectedQuestionCallable(const Model::ModifyRejectedQuestionRequest& request);

                /**
                 *点赞点踩消息
                 * @param req RateMsgRecordRequest
                 * @return RateMsgRecordOutcome
                 */
                RateMsgRecordOutcome RateMsgRecord(const Model::RateMsgRecordRequest &request);
                void RateMsgRecordAsync(const Model::RateMsgRecordRequest& request, const RateMsgRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RateMsgRecordOutcomeCallable RateMsgRecordCallable(const Model::RateMsgRecordRequest& request);

                /**
                 *应用引用共享知识库，可以引用一个或多个，每次都是全量覆盖
                 * @param req ReferShareKnowledgeRequest
                 * @return ReferShareKnowledgeOutcome
                 */
                ReferShareKnowledgeOutcome ReferShareKnowledge(const Model::ReferShareKnowledgeRequest &request);
                void ReferShareKnowledgeAsync(const Model::ReferShareKnowledgeRequest& request, const ReferShareKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReferShareKnowledgeOutcomeCallable ReferShareKnowledgeCallable(const Model::ReferShareKnowledgeRequest& request);

                /**
                 *文档重命名
                 * @param req RenameDocRequest
                 * @return RenameDocOutcome
                 */
                RenameDocOutcome RenameDoc(const Model::RenameDocRequest &request);
                void RenameDocAsync(const Model::RenameDocRequest& request, const RenameDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenameDocOutcomeCallable RenameDocCallable(const Model::RenameDocRequest& request);

                /**
                 *文档解析重试
                 * @param req RetryDocAuditRequest
                 * @return RetryDocAuditOutcome
                 */
                RetryDocAuditOutcome RetryDocAudit(const Model::RetryDocAuditRequest &request);
                void RetryDocAuditAsync(const Model::RetryDocAuditRequest& request, const RetryDocAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryDocAuditOutcomeCallable RetryDocAuditCallable(const Model::RetryDocAuditRequest& request);

                /**
                 *文档解析重试
                 * @param req RetryDocParseRequest
                 * @return RetryDocParseOutcome
                 */
                RetryDocParseOutcome RetryDocParse(const Model::RetryDocParseRequest &request);
                void RetryDocParseAsync(const Model::RetryDocParseRequest& request, const RetryDocParseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryDocParseOutcomeCallable RetryDocParseCallable(const Model::RetryDocParseRequest& request);

                /**
                 *发布暂停后重试
                 * @param req RetryReleaseRequest
                 * @return RetryReleaseOutcome
                 */
                RetryReleaseOutcome RetryRelease(const Model::RetryReleaseRequest &request);
                void RetryReleaseAsync(const Model::RetryReleaseRequest& request, const RetryReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryReleaseOutcomeCallable RetryReleaseCallable(const Model::RetryReleaseRequest& request);

                /**
                 *知识库文档问答保存。
将文件存储到应用的知识库内需要三步：
1.获取临时密钥，参考[接口文档](https://cloud.tencent.com/document/product/1759/105050)。获取临时密钥不同参数组合权限不一样，可参考 [智能体开发平台操作 cos 指南](https://cloud.tencent.com/document/product/1759/116238)
2.调用腾讯云提供的 cos 存储接口，将文件存储到智能体开发平台 cos 中：具体可参考[ COS SDK 概览](https://cloud.tencent.com/document/product/436/6474), 注意使用的是临时密钥的方式操作 COS 
3.调用本接口，将文件的基础信息存储到智能体开发平台中。
以上步骤可参考[文档](https://cloud.tencent.com/document/product/1759/108903)，文档最后有[代码demo](https://cloud.tencent.com/document/product/1759/108903#demo)，可作为参考。
                 * @param req SaveDocRequest
                 * @return SaveDocOutcome
                 */
                SaveDocOutcome SaveDoc(const Model::SaveDocRequest &request);
                void SaveDocAsync(const Model::SaveDocRequest& request, const SaveDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SaveDocOutcomeCallable SaveDocCallable(const Model::SaveDocRequest& request);

                /**
                 *终止文档解析
                 * @param req StopDocParseRequest
                 * @return StopDocParseOutcome
                 */
                StopDocParseOutcome StopDocParse(const Model::StopDocParseRequest &request);
                void StopDocParseAsync(const Model::StopDocParseRequest& request, const StopDocParseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopDocParseOutcomeCallable StopDocParseCallable(const Model::StopDocParseRequest& request);

                /**
                 *此接口用来停止正在进行的工作流异步运行实例。
                 * @param req StopWorkflowRunRequest
                 * @return StopWorkflowRunOutcome
                 */
                StopWorkflowRunOutcome StopWorkflowRun(const Model::StopWorkflowRunRequest &request);
                void StopWorkflowRunAsync(const Model::StopWorkflowRunRequest& request, const StopWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopWorkflowRunOutcomeCallable StopWorkflowRunCallable(const Model::StopWorkflowRunRequest& request);

                /**
                 *更新共享知识库。
                 * @param req UpdateSharedKnowledgeRequest
                 * @return UpdateSharedKnowledgeOutcome
                 */
                UpdateSharedKnowledgeOutcome UpdateSharedKnowledge(const Model::UpdateSharedKnowledgeRequest &request);
                void UpdateSharedKnowledgeAsync(const Model::UpdateSharedKnowledgeRequest& request, const UpdateSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSharedKnowledgeOutcomeCallable UpdateSharedKnowledgeCallable(const Model::UpdateSharedKnowledgeRequest& request);

                /**
                 *更新变量
                 * @param req UpdateVarRequest
                 * @return UpdateVarOutcome
                 */
                UpdateVarOutcome UpdateVar(const Model::UpdateVarRequest &request);
                void UpdateVarAsync(const Model::UpdateVarRequest& request, const UpdateVarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateVarOutcomeCallable UpdateVarCallable(const Model::UpdateVarRequest& request);

                /**
                 *上传导入属性标签
                 * @param req UploadAttributeLabelRequest
                 * @return UploadAttributeLabelOutcome
                 */
                UploadAttributeLabelOutcome UploadAttributeLabel(const Model::UploadAttributeLabelRequest &request);
                void UploadAttributeLabelAsync(const Model::UploadAttributeLabelRequest& request, const UploadAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadAttributeLabelOutcomeCallable UploadAttributeLabelCallable(const Model::UploadAttributeLabelRequest& request);

                /**
                 *校验问答
知识库相关背景知识介绍
“知识库检索范围”文档：https://cloud.tencent.com/document/product/1759/112704
“标签”文档：https://cloud.tencent.com/document/product/1759/112956
                 * @param req VerifyQARequest
                 * @return VerifyQAOutcome
                 */
                VerifyQAOutcome VerifyQA(const Model::VerifyQARequest &request);
                void VerifyQAAsync(const Model::VerifyQARequest& request, const VerifyQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyQAOutcomeCallable VerifyQACallable(const Model::VerifyQARequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_LKECLIENT_H_
