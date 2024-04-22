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

#ifndef TENCENTCLOUD_LKE_V20231130_LKECLIENT_H_
#define TENCENTCLOUD_LKE_V20231130_LKECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/lke/v20231130/model/CheckAttributeLabelExistRequest.h>
#include <tencentcloud/lke/v20231130/model/CheckAttributeLabelExistResponse.h>
#include <tencentcloud/lke/v20231130/model/CheckAttributeLabelReferRequest.h>
#include <tencentcloud/lke/v20231130/model/CheckAttributeLabelReferResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateAppRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateAppResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateCorpRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateCorpResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateQARequest.h>
#include <tencentcloud/lke/v20231130/model/CreateQAResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateQACateRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateQACateResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateRejectedQuestionRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateRejectedQuestionResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateReleaseRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateReleaseResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteAppRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteAppResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteDocRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteDocResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteQARequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteQAResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteQACateRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteQACateResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteRejectedQuestionRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteRejectedQuestionResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeAppRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeAppResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeCorpRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeCorpResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeDocRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeDocResponse.h>
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
#include <tencentcloud/lke/v20231130/model/DescribeStorageCredentialRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeStorageCredentialResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeUnsatisfiedReplyContextRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeUnsatisfiedReplyContextResponse.h>
#include <tencentcloud/lke/v20231130/model/ExportAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/ExportAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/ExportQAListRequest.h>
#include <tencentcloud/lke/v20231130/model/ExportQAListResponse.h>
#include <tencentcloud/lke/v20231130/model/ExportUnsatisfiedReplyRequest.h>
#include <tencentcloud/lke/v20231130/model/ExportUnsatisfiedReplyResponse.h>
#include <tencentcloud/lke/v20231130/model/GenerateQARequest.h>
#include <tencentcloud/lke/v20231130/model/GenerateQAResponse.h>
#include <tencentcloud/lke/v20231130/model/GetAppKnowledgeCountRequest.h>
#include <tencentcloud/lke/v20231130/model/GetAppKnowledgeCountResponse.h>
#include <tencentcloud/lke/v20231130/model/GetAppSecretRequest.h>
#include <tencentcloud/lke/v20231130/model/GetAppSecretResponse.h>
#include <tencentcloud/lke/v20231130/model/GetDocPreviewRequest.h>
#include <tencentcloud/lke/v20231130/model/GetDocPreviewResponse.h>
#include <tencentcloud/lke/v20231130/model/GetEmbeddingRequest.h>
#include <tencentcloud/lke/v20231130/model/GetEmbeddingResponse.h>
#include <tencentcloud/lke/v20231130/model/GetMsgRecordRequest.h>
#include <tencentcloud/lke/v20231130/model/GetMsgRecordResponse.h>
#include <tencentcloud/lke/v20231130/model/GetTaskStatusRequest.h>
#include <tencentcloud/lke/v20231130/model/GetTaskStatusResponse.h>
#include <tencentcloud/lke/v20231130/model/GetWsTokenRequest.h>
#include <tencentcloud/lke/v20231130/model/GetWsTokenResponse.h>
#include <tencentcloud/lke/v20231130/model/GroupQARequest.h>
#include <tencentcloud/lke/v20231130/model/GroupQAResponse.h>
#include <tencentcloud/lke/v20231130/model/IgnoreUnsatisfiedReplyRequest.h>
#include <tencentcloud/lke/v20231130/model/IgnoreUnsatisfiedReplyResponse.h>
#include <tencentcloud/lke/v20231130/model/IsTransferIntentRequest.h>
#include <tencentcloud/lke/v20231130/model/IsTransferIntentResponse.h>
#include <tencentcloud/lke/v20231130/model/ListAppRequest.h>
#include <tencentcloud/lke/v20231130/model/ListAppResponse.h>
#include <tencentcloud/lke/v20231130/model/ListAppCategoryRequest.h>
#include <tencentcloud/lke/v20231130/model/ListAppCategoryResponse.h>
#include <tencentcloud/lke/v20231130/model/ListAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/ListAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/ListDocRequest.h>
#include <tencentcloud/lke/v20231130/model/ListDocResponse.h>
#include <tencentcloud/lke/v20231130/model/ListModelRequest.h>
#include <tencentcloud/lke/v20231130/model/ListModelResponse.h>
#include <tencentcloud/lke/v20231130/model/ListQARequest.h>
#include <tencentcloud/lke/v20231130/model/ListQAResponse.h>
#include <tencentcloud/lke/v20231130/model/ListQACateRequest.h>
#include <tencentcloud/lke/v20231130/model/ListQACateResponse.h>
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
#include <tencentcloud/lke/v20231130/model/ListUnsatisfiedReplyRequest.h>
#include <tencentcloud/lke/v20231130/model/ListUnsatisfiedReplyResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyAppRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyAppResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocAttrRangeRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocAttrRangeResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyQARequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyQAResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyQAAttrRangeRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyQAAttrRangeResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyQACateRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyQACateResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyRejectedQuestionRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyRejectedQuestionResponse.h>
#include <tencentcloud/lke/v20231130/model/ParseDocRequest.h>
#include <tencentcloud/lke/v20231130/model/ParseDocResponse.h>
#include <tencentcloud/lke/v20231130/model/QueryParseDocResultRequest.h>
#include <tencentcloud/lke/v20231130/model/QueryParseDocResultResponse.h>
#include <tencentcloud/lke/v20231130/model/QueryRewriteRequest.h>
#include <tencentcloud/lke/v20231130/model/QueryRewriteResponse.h>
#include <tencentcloud/lke/v20231130/model/RateMsgRecordRequest.h>
#include <tencentcloud/lke/v20231130/model/RateMsgRecordResponse.h>
#include <tencentcloud/lke/v20231130/model/ResetSessionRequest.h>
#include <tencentcloud/lke/v20231130/model/ResetSessionResponse.h>
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
                typedef Outcome<Core::Error, Model::CreateCorpResponse> CreateCorpOutcome;
                typedef std::future<CreateCorpOutcome> CreateCorpOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateCorpRequest&, CreateCorpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCorpAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteAppResponse> DeleteAppOutcome;
                typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteAppRequest&, DeleteAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAttributeLabelResponse> DeleteAttributeLabelOutcome;
                typedef std::future<DeleteAttributeLabelOutcome> DeleteAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteAttributeLabelRequest&, DeleteAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDocResponse> DeleteDocOutcome;
                typedef std::future<DeleteDocOutcome> DeleteDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteDocRequest&, DeleteDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDocAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQAResponse> DeleteQAOutcome;
                typedef std::future<DeleteQAOutcome> DeleteQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteQARequest&, DeleteQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQAAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQACateResponse> DeleteQACateOutcome;
                typedef std::future<DeleteQACateOutcome> DeleteQACateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteQACateRequest&, DeleteQACateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQACateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRejectedQuestionResponse> DeleteRejectedQuestionOutcome;
                typedef std::future<DeleteRejectedQuestionOutcome> DeleteRejectedQuestionOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteRejectedQuestionRequest&, DeleteRejectedQuestionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRejectedQuestionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppResponse> DescribeAppOutcome;
                typedef std::future<DescribeAppOutcome> DescribeAppOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeAppRequest&, DescribeAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttributeLabelResponse> DescribeAttributeLabelOutcome;
                typedef std::future<DescribeAttributeLabelOutcome> DescribeAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeAttributeLabelRequest&, DescribeAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCorpResponse> DescribeCorpOutcome;
                typedef std::future<DescribeCorpOutcome> DescribeCorpOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeCorpRequest&, DescribeCorpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCorpAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDocResponse> DescribeDocOutcome;
                typedef std::future<DescribeDocOutcome> DescribeDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeDocRequest&, DescribeDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDocAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeStorageCredentialResponse> DescribeStorageCredentialOutcome;
                typedef std::future<DescribeStorageCredentialOutcome> DescribeStorageCredentialOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeStorageCredentialRequest&, DescribeStorageCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnsatisfiedReplyContextResponse> DescribeUnsatisfiedReplyContextOutcome;
                typedef std::future<DescribeUnsatisfiedReplyContextOutcome> DescribeUnsatisfiedReplyContextOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeUnsatisfiedReplyContextRequest&, DescribeUnsatisfiedReplyContextOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnsatisfiedReplyContextAsyncHandler;
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
                typedef Outcome<Core::Error, Model::GetAppKnowledgeCountResponse> GetAppKnowledgeCountOutcome;
                typedef std::future<GetAppKnowledgeCountOutcome> GetAppKnowledgeCountOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetAppKnowledgeCountRequest&, GetAppKnowledgeCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAppKnowledgeCountAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAppSecretResponse> GetAppSecretOutcome;
                typedef std::future<GetAppSecretOutcome> GetAppSecretOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetAppSecretRequest&, GetAppSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAppSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDocPreviewResponse> GetDocPreviewOutcome;
                typedef std::future<GetDocPreviewOutcome> GetDocPreviewOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetDocPreviewRequest&, GetDocPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDocPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::GetEmbeddingResponse> GetEmbeddingOutcome;
                typedef std::future<GetEmbeddingOutcome> GetEmbeddingOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetEmbeddingRequest&, GetEmbeddingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetEmbeddingAsyncHandler;
                typedef Outcome<Core::Error, Model::GetMsgRecordResponse> GetMsgRecordOutcome;
                typedef std::future<GetMsgRecordOutcome> GetMsgRecordOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetMsgRecordRequest&, GetMsgRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMsgRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskStatusResponse> GetTaskStatusOutcome;
                typedef std::future<GetTaskStatusOutcome> GetTaskStatusOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetTaskStatusRequest&, GetTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWsTokenResponse> GetWsTokenOutcome;
                typedef std::future<GetWsTokenOutcome> GetWsTokenOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetWsTokenRequest&, GetWsTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWsTokenAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ListAppCategoryResponse> ListAppCategoryOutcome;
                typedef std::future<ListAppCategoryOutcome> ListAppCategoryOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListAppCategoryRequest&, ListAppCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAppCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAttributeLabelResponse> ListAttributeLabelOutcome;
                typedef std::future<ListAttributeLabelOutcome> ListAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListAttributeLabelRequest&, ListAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDocResponse> ListDocOutcome;
                typedef std::future<ListDocOutcome> ListDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListDocRequest&, ListDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDocAsyncHandler;
                typedef Outcome<Core::Error, Model::ListModelResponse> ListModelOutcome;
                typedef std::future<ListModelOutcome> ListModelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListModelRequest&, ListModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListModelAsyncHandler;
                typedef Outcome<Core::Error, Model::ListQAResponse> ListQAOutcome;
                typedef std::future<ListQAOutcome> ListQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListQARequest&, ListQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListQAAsyncHandler;
                typedef Outcome<Core::Error, Model::ListQACateResponse> ListQACateOutcome;
                typedef std::future<ListQACateOutcome> ListQACateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListQACateRequest&, ListQACateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListQACateAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ListUnsatisfiedReplyResponse> ListUnsatisfiedReplyOutcome;
                typedef std::future<ListUnsatisfiedReplyOutcome> ListUnsatisfiedReplyOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListUnsatisfiedReplyRequest&, ListUnsatisfiedReplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUnsatisfiedReplyAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ParseDocResponse> ParseDocOutcome;
                typedef std::future<ParseDocOutcome> ParseDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ParseDocRequest&, ParseDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseDocAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryParseDocResultResponse> QueryParseDocResultOutcome;
                typedef std::future<QueryParseDocResultOutcome> QueryParseDocResultOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::QueryParseDocResultRequest&, QueryParseDocResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryParseDocResultAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryRewriteResponse> QueryRewriteOutcome;
                typedef std::future<QueryRewriteOutcome> QueryRewriteOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::QueryRewriteRequest&, QueryRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::RateMsgRecordResponse> RateMsgRecordOutcome;
                typedef std::future<RateMsgRecordOutcome> RateMsgRecordOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::RateMsgRecordRequest&, RateMsgRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RateMsgRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetSessionResponse> ResetSessionOutcome;
                typedef std::future<ResetSessionOutcome> ResetSessionOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ResetSessionRequest&, ResetSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetSessionAsyncHandler;
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
                typedef Outcome<Core::Error, Model::UploadAttributeLabelResponse> UploadAttributeLabelOutcome;
                typedef std::future<UploadAttributeLabelOutcome> UploadAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::UploadAttributeLabelRequest&, UploadAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyQAResponse> VerifyQAOutcome;
                typedef std::future<VerifyQAOutcome> VerifyQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::VerifyQARequest&, VerifyQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyQAAsyncHandler;



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
                 *创建只是引擎应用，包括：知识管理应用、知识摘要应用、标签提取应用。
                 * @param req CreateAppRequest
                 * @return CreateAppOutcome
                 */
                CreateAppOutcome CreateApp(const Model::CreateAppRequest &request);
                void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request);

                /**
                 *创建属性
                 * @param req CreateAttributeLabelRequest
                 * @return CreateAttributeLabelOutcome
                 */
                CreateAttributeLabelOutcome CreateAttributeLabel(const Model::CreateAttributeLabelRequest &request);
                void CreateAttributeLabelAsync(const Model::CreateAttributeLabelRequest& request, const CreateAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAttributeLabelOutcomeCallable CreateAttributeLabelCallable(const Model::CreateAttributeLabelRequest& request);

                /**
                 *创建企业
                 * @param req CreateCorpRequest
                 * @return CreateCorpOutcome
                 */
                CreateCorpOutcome CreateCorp(const Model::CreateCorpRequest &request);
                void CreateCorpAsync(const Model::CreateCorpRequest& request, const CreateCorpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCorpOutcomeCallable CreateCorpCallable(const Model::CreateCorpRequest& request);

                /**
                 *录入问答
                 * @param req CreateQARequest
                 * @return CreateQAOutcome
                 */
                CreateQAOutcome CreateQA(const Model::CreateQARequest &request);
                void CreateQAAsync(const Model::CreateQARequest& request, const CreateQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQAOutcomeCallable CreateQACallable(const Model::CreateQARequest& request);

                /**
                 *创建QA分类
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
                 *创建企业
                 * @param req DeleteDocRequest
                 * @return DeleteDocOutcome
                 */
                DeleteDocOutcome DeleteDoc(const Model::DeleteDocRequest &request);
                void DeleteDocAsync(const Model::DeleteDocRequest& request, const DeleteDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDocOutcomeCallable DeleteDocCallable(const Model::DeleteDocRequest& request);

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
                 *获取企业下应用详情
                 * @param req DescribeAppRequest
                 * @return DescribeAppOutcome
                 */
                DescribeAppOutcome DescribeApp(const Model::DescribeAppRequest &request);
                void DescribeAppAsync(const Model::DescribeAppRequest& request, const DescribeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppOutcomeCallable DescribeAppCallable(const Model::DescribeAppRequest& request);

                /**
                 *查询属性标签详情
                 * @param req DescribeAttributeLabelRequest
                 * @return DescribeAttributeLabelOutcome
                 */
                DescribeAttributeLabelOutcome DescribeAttributeLabel(const Model::DescribeAttributeLabelRequest &request);
                void DescribeAttributeLabelAsync(const Model::DescribeAttributeLabelRequest& request, const DescribeAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttributeLabelOutcomeCallable DescribeAttributeLabelCallable(const Model::DescribeAttributeLabelRequest& request);

                /**
                 *企业详情
                 * @param req DescribeCorpRequest
                 * @return DescribeCorpOutcome
                 */
                DescribeCorpOutcome DescribeCorp(const Model::DescribeCorpRequest &request);
                void DescribeCorpAsync(const Model::DescribeCorpRequest& request, const DescribeCorpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCorpOutcomeCallable DescribeCorpCallable(const Model::DescribeCorpRequest& request);

                /**
                 *文档详情
                 * @param req DescribeDocRequest
                 * @return DescribeDocOutcome
                 */
                DescribeDocOutcome DescribeDoc(const Model::DescribeDocRequest &request);
                void DescribeDocAsync(const Model::DescribeDocRequest& request, const DescribeDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDocOutcomeCallable DescribeDocCallable(const Model::DescribeDocRequest& request);

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
                 *通过appKey获取机器人业务ID
                 * @param req DescribeRobotBizIDByAppKeyRequest
                 * @return DescribeRobotBizIDByAppKeyOutcome
                 */
                DescribeRobotBizIDByAppKeyOutcome DescribeRobotBizIDByAppKey(const Model::DescribeRobotBizIDByAppKeyRequest &request);
                void DescribeRobotBizIDByAppKeyAsync(const Model::DescribeRobotBizIDByAppKeyRequest& request, const DescribeRobotBizIDByAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRobotBizIDByAppKeyOutcomeCallable DescribeRobotBizIDByAppKeyCallable(const Model::DescribeRobotBizIDByAppKeyRequest& request);

                /**
                 *获取文件上传临时密钥
                 * @param req DescribeStorageCredentialRequest
                 * @return DescribeStorageCredentialOutcome
                 */
                DescribeStorageCredentialOutcome DescribeStorageCredential(const Model::DescribeStorageCredentialRequest &request);
                void DescribeStorageCredentialAsync(const Model::DescribeStorageCredentialRequest& request, const DescribeStorageCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageCredentialOutcomeCallable DescribeStorageCredentialCallable(const Model::DescribeStorageCredentialRequest& request);

                /**
                 *获取不满意回复上下文
                 * @param req DescribeUnsatisfiedReplyContextRequest
                 * @return DescribeUnsatisfiedReplyContextOutcome
                 */
                DescribeUnsatisfiedReplyContextOutcome DescribeUnsatisfiedReplyContext(const Model::DescribeUnsatisfiedReplyContextRequest &request);
                void DescribeUnsatisfiedReplyContextAsync(const Model::DescribeUnsatisfiedReplyContextRequest& request, const DescribeUnsatisfiedReplyContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnsatisfiedReplyContextOutcomeCallable DescribeUnsatisfiedReplyContextCallable(const Model::DescribeUnsatisfiedReplyContextRequest& request);

                /**
                 *导出属性标签
                 * @param req ExportAttributeLabelRequest
                 * @return ExportAttributeLabelOutcome
                 */
                ExportAttributeLabelOutcome ExportAttributeLabel(const Model::ExportAttributeLabelRequest &request);
                void ExportAttributeLabelAsync(const Model::ExportAttributeLabelRequest& request, const ExportAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAttributeLabelOutcomeCallable ExportAttributeLabelCallable(const Model::ExportAttributeLabelRequest& request);

                /**
                 *导出QA列表
                 * @param req ExportQAListRequest
                 * @return ExportQAListOutcome
                 */
                ExportQAListOutcome ExportQAList(const Model::ExportQAListRequest &request);
                void ExportQAListAsync(const Model::ExportQAListRequest& request, const ExportQAListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportQAListOutcomeCallable ExportQAListCallable(const Model::ExportQAListRequest& request);

                /**
                 *导出不满意回复
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
                 *获取特征向量
本接口有单账号调用上限控制，如您有提高并发限制的需求请 [联系我们](https://cloud.tencent.com/act/event/Online_service) 。
                 * @param req GetEmbeddingRequest
                 * @return GetEmbeddingOutcome
                 */
                GetEmbeddingOutcome GetEmbedding(const Model::GetEmbeddingRequest &request);
                void GetEmbeddingAsync(const Model::GetEmbeddingRequest& request, const GetEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetEmbeddingOutcomeCallable GetEmbeddingCallable(const Model::GetEmbeddingRequest& request);

                /**
                 *获取推荐问题
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
                 *获取ws token
                 * @param req GetWsTokenRequest
                 * @return GetWsTokenOutcome
                 */
                GetWsTokenOutcome GetWsToken(const Model::GetWsTokenRequest &request);
                void GetWsTokenAsync(const Model::GetWsTokenRequest& request, const GetWsTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWsTokenOutcomeCallable GetWsTokenCallable(const Model::GetWsTokenRequest& request);

                /**
                 *QA分组
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
                 *应用类型列表
                 * @param req ListAppCategoryRequest
                 * @return ListAppCategoryOutcome
                 */
                ListAppCategoryOutcome ListAppCategory(const Model::ListAppCategoryRequest &request);
                void ListAppCategoryAsync(const Model::ListAppCategoryRequest& request, const ListAppCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAppCategoryOutcomeCallable ListAppCategoryCallable(const Model::ListAppCategoryRequest& request);

                /**
                 *查询属性标签列表
                 * @param req ListAttributeLabelRequest
                 * @return ListAttributeLabelOutcome
                 */
                ListAttributeLabelOutcome ListAttributeLabel(const Model::ListAttributeLabelRequest &request);
                void ListAttributeLabelAsync(const Model::ListAttributeLabelRequest& request, const ListAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAttributeLabelOutcomeCallable ListAttributeLabelCallable(const Model::ListAttributeLabelRequest& request);

                /**
                 *文档列表
                 * @param req ListDocRequest
                 * @return ListDocOutcome
                 */
                ListDocOutcome ListDoc(const Model::ListDocRequest &request);
                void ListDocAsync(const Model::ListDocRequest& request, const ListDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDocOutcomeCallable ListDocCallable(const Model::ListDocRequest& request);

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
                 * @param req ListQARequest
                 * @return ListQAOutcome
                 */
                ListQAOutcome ListQA(const Model::ListQARequest &request);
                void ListQAAsync(const Model::ListQARequest& request, const ListQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListQAOutcomeCallable ListQACallable(const Model::ListQARequest& request);

                /**
                 *获取QA分类
                 * @param req ListQACateRequest
                 * @return ListQACateOutcome
                 */
                ListQACateOutcome ListQACate(const Model::ListQACateRequest &request);
                void ListQACateAsync(const Model::ListQACateRequest& request, const ListQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListQACateOutcomeCallable ListQACateCallable(const Model::ListQACateRequest& request);

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
                 *获取账户信息
                 * @param req ListSelectDocRequest
                 * @return ListSelectDocOutcome
                 */
                ListSelectDocOutcome ListSelectDoc(const Model::ListSelectDocRequest &request);
                void ListSelectDocAsync(const Model::ListSelectDocRequest& request, const ListSelectDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSelectDocOutcomeCallable ListSelectDocCallable(const Model::ListSelectDocRequest& request);

                /**
                 *查询不满意回复列表
                 * @param req ListUnsatisfiedReplyRequest
                 * @return ListUnsatisfiedReplyOutcome
                 */
                ListUnsatisfiedReplyOutcome ListUnsatisfiedReply(const Model::ListUnsatisfiedReplyRequest &request);
                void ListUnsatisfiedReplyAsync(const Model::ListUnsatisfiedReplyRequest& request, const ListUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUnsatisfiedReplyOutcomeCallable ListUnsatisfiedReplyCallable(const Model::ListUnsatisfiedReplyRequest& request);

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
                 *解析拆分文件
                 * @param req ParseDocRequest
                 * @return ParseDocOutcome
                 */
                ParseDocOutcome ParseDoc(const Model::ParseDocRequest &request);
                void ParseDocAsync(const Model::ParseDocRequest& request, const ParseDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseDocOutcomeCallable ParseDocCallable(const Model::ParseDocRequest& request);

                /**
                 *查询文件解析结果
                 * @param req QueryParseDocResultRequest
                 * @return QueryParseDocResultOutcome
                 */
                QueryParseDocResultOutcome QueryParseDocResult(const Model::QueryParseDocResultRequest &request);
                void QueryParseDocResultAsync(const Model::QueryParseDocResultRequest& request, const QueryParseDocResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryParseDocResultOutcomeCallable QueryParseDocResultCallable(const Model::QueryParseDocResultRequest& request);

                /**
                 *多轮改写
本接口有单账号调用上限控制，如您有提高并发限制的需求请 [联系我们](https://cloud.tencent.com/act/event/Online_service) 。
                 * @param req QueryRewriteRequest
                 * @return QueryRewriteOutcome
                 */
                QueryRewriteOutcome QueryRewrite(const Model::QueryRewriteRequest &request);
                void QueryRewriteAsync(const Model::QueryRewriteRequest& request, const QueryRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryRewriteOutcomeCallable QueryRewriteCallable(const Model::QueryRewriteRequest& request);

                /**
                 *是否意图转人工
                 * @param req RateMsgRecordRequest
                 * @return RateMsgRecordOutcome
                 */
                RateMsgRecordOutcome RateMsgRecord(const Model::RateMsgRecordRequest &request);
                void RateMsgRecordAsync(const Model::RateMsgRecordRequest& request, const RateMsgRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RateMsgRecordOutcomeCallable RateMsgRecordCallable(const Model::RateMsgRecordRequest& request);

                /**
                 *重置会话
                 * @param req ResetSessionRequest
                 * @return ResetSessionOutcome
                 */
                ResetSessionOutcome ResetSession(const Model::ResetSessionRequest &request);
                void ResetSessionAsync(const Model::ResetSessionRequest& request, const ResetSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetSessionOutcomeCallable ResetSessionCallable(const Model::ResetSessionRequest& request);

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
                 *保存文档
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
                 *上传导入属性标签
                 * @param req UploadAttributeLabelRequest
                 * @return UploadAttributeLabelOutcome
                 */
                UploadAttributeLabelOutcome UploadAttributeLabel(const Model::UploadAttributeLabelRequest &request);
                void UploadAttributeLabelAsync(const Model::UploadAttributeLabelRequest& request, const UploadAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadAttributeLabelOutcomeCallable UploadAttributeLabelCallable(const Model::UploadAttributeLabelRequest& request);

                /**
                 *校验问答
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
