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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_CLOUDAUDITCLIENT_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_CLOUDAUDITCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cloudaudit/v20190319/model/CreateAuditTrackRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/CreateAuditTrackResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/CreateEventsAuditTrackRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/CreateEventsAuditTrackResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/DeleteAuditTrackRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/DeleteAuditTrackResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/DescribeAuditRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/DescribeAuditResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/DescribeAuditTrackRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/DescribeAuditTrackResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/DescribeAuditTracksRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/DescribeAuditTracksResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/DescribeEventsRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/DescribeEventsResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/GetAttributeKeyRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/GetAttributeKeyResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/InquireAuditCreditRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/InquireAuditCreditResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/ListAuditsRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/ListAuditsResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/ListCmqEnableRegionRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/ListCmqEnableRegionResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/ListCosEnableRegionRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/ListCosEnableRegionResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/ListKeyAliasByRegionRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/ListKeyAliasByRegionResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/LookUpEventsRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/LookUpEventsResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/ModifyAuditTrackRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/ModifyAuditTrackResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/ModifyEventsAuditTrackRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/ModifyEventsAuditTrackResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/StartLoggingRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/StartLoggingResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/StopLoggingRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/StopLoggingResponse.h>
#include <tencentcloud/cloudaudit/v20190319/model/UpdateAuditRequest.h>
#include <tencentcloud/cloudaudit/v20190319/model/UpdateAuditResponse.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            class CloudauditClient : public AbstractClient
            {
            public:
                CloudauditClient(const Credential &credential, const std::string &region);
                CloudauditClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAuditTrackResponse> CreateAuditTrackOutcome;
                typedef std::future<CreateAuditTrackOutcome> CreateAuditTrackOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::CreateAuditTrackRequest&, CreateAuditTrackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditTrackAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEventsAuditTrackResponse> CreateEventsAuditTrackOutcome;
                typedef std::future<CreateEventsAuditTrackOutcome> CreateEventsAuditTrackOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::CreateEventsAuditTrackRequest&, CreateEventsAuditTrackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEventsAuditTrackAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuditTrackResponse> DeleteAuditTrackOutcome;
                typedef std::future<DeleteAuditTrackOutcome> DeleteAuditTrackOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::DeleteAuditTrackRequest&, DeleteAuditTrackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuditTrackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditResponse> DescribeAuditOutcome;
                typedef std::future<DescribeAuditOutcome> DescribeAuditOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::DescribeAuditRequest&, DescribeAuditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditTrackResponse> DescribeAuditTrackOutcome;
                typedef std::future<DescribeAuditTrackOutcome> DescribeAuditTrackOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::DescribeAuditTrackRequest&, DescribeAuditTrackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditTrackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditTracksResponse> DescribeAuditTracksOutcome;
                typedef std::future<DescribeAuditTracksOutcome> DescribeAuditTracksOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::DescribeAuditTracksRequest&, DescribeAuditTracksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditTracksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventsResponse> DescribeEventsOutcome;
                typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::DescribeEventsRequest&, DescribeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAttributeKeyResponse> GetAttributeKeyOutcome;
                typedef std::future<GetAttributeKeyOutcome> GetAttributeKeyOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::GetAttributeKeyRequest&, GetAttributeKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAttributeKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::InquireAuditCreditResponse> InquireAuditCreditOutcome;
                typedef std::future<InquireAuditCreditOutcome> InquireAuditCreditOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::InquireAuditCreditRequest&, InquireAuditCreditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquireAuditCreditAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAuditsResponse> ListAuditsOutcome;
                typedef std::future<ListAuditsOutcome> ListAuditsOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::ListAuditsRequest&, ListAuditsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAuditsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListCmqEnableRegionResponse> ListCmqEnableRegionOutcome;
                typedef std::future<ListCmqEnableRegionOutcome> ListCmqEnableRegionOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::ListCmqEnableRegionRequest&, ListCmqEnableRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListCmqEnableRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::ListCosEnableRegionResponse> ListCosEnableRegionOutcome;
                typedef std::future<ListCosEnableRegionOutcome> ListCosEnableRegionOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::ListCosEnableRegionRequest&, ListCosEnableRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListCosEnableRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::ListKeyAliasByRegionResponse> ListKeyAliasByRegionOutcome;
                typedef std::future<ListKeyAliasByRegionOutcome> ListKeyAliasByRegionOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::ListKeyAliasByRegionRequest&, ListKeyAliasByRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListKeyAliasByRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::LookUpEventsResponse> LookUpEventsOutcome;
                typedef std::future<LookUpEventsOutcome> LookUpEventsOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::LookUpEventsRequest&, LookUpEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LookUpEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuditTrackResponse> ModifyAuditTrackOutcome;
                typedef std::future<ModifyAuditTrackOutcome> ModifyAuditTrackOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::ModifyAuditTrackRequest&, ModifyAuditTrackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditTrackAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEventsAuditTrackResponse> ModifyEventsAuditTrackOutcome;
                typedef std::future<ModifyEventsAuditTrackOutcome> ModifyEventsAuditTrackOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::ModifyEventsAuditTrackRequest&, ModifyEventsAuditTrackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEventsAuditTrackAsyncHandler;
                typedef Outcome<Core::Error, Model::StartLoggingResponse> StartLoggingOutcome;
                typedef std::future<StartLoggingOutcome> StartLoggingOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::StartLoggingRequest&, StartLoggingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartLoggingAsyncHandler;
                typedef Outcome<Core::Error, Model::StopLoggingResponse> StopLoggingOutcome;
                typedef std::future<StopLoggingOutcome> StopLoggingOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::StopLoggingRequest&, StopLoggingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopLoggingAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAuditResponse> UpdateAuditOutcome;
                typedef std::future<UpdateAuditOutcome> UpdateAuditOutcomeCallable;
                typedef std::function<void(const CloudauditClient*, const Model::UpdateAuditRequest&, UpdateAuditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAuditAsyncHandler;



                /**
                 *创建操作审计跟踪集
                 * @param req CreateAuditTrackRequest
                 * @return CreateAuditTrackOutcome
                 */
                CreateAuditTrackOutcome CreateAuditTrack(const Model::CreateAuditTrackRequest &request);
                void CreateAuditTrackAsync(const Model::CreateAuditTrackRequest& request, const CreateAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuditTrackOutcomeCallable CreateAuditTrackCallable(const Model::CreateAuditTrackRequest& request);

                /**
                 *创建操作审计跟踪集
                 * @param req CreateEventsAuditTrackRequest
                 * @return CreateEventsAuditTrackOutcome
                 */
                CreateEventsAuditTrackOutcome CreateEventsAuditTrack(const Model::CreateEventsAuditTrackRequest &request);
                void CreateEventsAuditTrackAsync(const Model::CreateEventsAuditTrackRequest& request, const CreateEventsAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEventsAuditTrackOutcomeCallable CreateEventsAuditTrackCallable(const Model::CreateEventsAuditTrackRequest& request);

                /**
                 *删除操作审计跟踪集
                 * @param req DeleteAuditTrackRequest
                 * @return DeleteAuditTrackOutcome
                 */
                DeleteAuditTrackOutcome DeleteAuditTrack(const Model::DeleteAuditTrackRequest &request);
                void DeleteAuditTrackAsync(const Model::DeleteAuditTrackRequest& request, const DeleteAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAuditTrackOutcomeCallable DeleteAuditTrackCallable(const Model::DeleteAuditTrackRequest& request);

                /**
                 *查询跟踪集详情
                 * @param req DescribeAuditRequest
                 * @return DescribeAuditOutcome
                 */
                DescribeAuditOutcome DescribeAudit(const Model::DescribeAuditRequest &request);
                void DescribeAuditAsync(const Model::DescribeAuditRequest& request, const DescribeAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditOutcomeCallable DescribeAuditCallable(const Model::DescribeAuditRequest& request);

                /**
                 *查询操作审计跟踪集详情
                 * @param req DescribeAuditTrackRequest
                 * @return DescribeAuditTrackOutcome
                 */
                DescribeAuditTrackOutcome DescribeAuditTrack(const Model::DescribeAuditTrackRequest &request);
                void DescribeAuditTrackAsync(const Model::DescribeAuditTrackRequest& request, const DescribeAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditTrackOutcomeCallable DescribeAuditTrackCallable(const Model::DescribeAuditTrackRequest& request);

                /**
                 *查询操作审计跟踪集列表
                 * @param req DescribeAuditTracksRequest
                 * @return DescribeAuditTracksOutcome
                 */
                DescribeAuditTracksOutcome DescribeAuditTracks(const Model::DescribeAuditTracksRequest &request);
                void DescribeAuditTracksAsync(const Model::DescribeAuditTracksRequest& request, const DescribeAuditTracksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditTracksOutcomeCallable DescribeAuditTracksCallable(const Model::DescribeAuditTracksRequest& request);

                /**
                 *查询操作审计日志
                 * @param req DescribeEventsRequest
                 * @return DescribeEventsOutcome
                 */
                DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest &request);
                void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request);

                /**
                 *查询AttributeKey的有效取值范围
                 * @param req GetAttributeKeyRequest
                 * @return GetAttributeKeyOutcome
                 */
                GetAttributeKeyOutcome GetAttributeKey(const Model::GetAttributeKeyRequest &request);
                void GetAttributeKeyAsync(const Model::GetAttributeKeyRequest& request, const GetAttributeKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAttributeKeyOutcomeCallable GetAttributeKeyCallable(const Model::GetAttributeKeyRequest& request);

                /**
                 *查询用户可创建跟踪集的数量
                 * @param req InquireAuditCreditRequest
                 * @return InquireAuditCreditOutcome
                 */
                InquireAuditCreditOutcome InquireAuditCredit(const Model::InquireAuditCreditRequest &request);
                void InquireAuditCreditAsync(const Model::InquireAuditCreditRequest& request, const InquireAuditCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquireAuditCreditOutcomeCallable InquireAuditCreditCallable(const Model::InquireAuditCreditRequest& request);

                /**
                 *查询跟踪集概要
                 * @param req ListAuditsRequest
                 * @return ListAuditsOutcome
                 */
                ListAuditsOutcome ListAudits(const Model::ListAuditsRequest &request);
                void ListAuditsAsync(const Model::ListAuditsRequest& request, const ListAuditsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAuditsOutcomeCallable ListAuditsCallable(const Model::ListAuditsRequest& request);

                /**
                 *查询操作审计支持的cmq的可用区
                 * @param req ListCmqEnableRegionRequest
                 * @return ListCmqEnableRegionOutcome
                 */
                ListCmqEnableRegionOutcome ListCmqEnableRegion(const Model::ListCmqEnableRegionRequest &request);
                void ListCmqEnableRegionAsync(const Model::ListCmqEnableRegionRequest& request, const ListCmqEnableRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListCmqEnableRegionOutcomeCallable ListCmqEnableRegionCallable(const Model::ListCmqEnableRegionRequest& request);

                /**
                 *查询操作审计支持的cos可用区
                 * @param req ListCosEnableRegionRequest
                 * @return ListCosEnableRegionOutcome
                 */
                ListCosEnableRegionOutcome ListCosEnableRegion(const Model::ListCosEnableRegionRequest &request);
                void ListCosEnableRegionAsync(const Model::ListCosEnableRegionRequest& request, const ListCosEnableRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListCosEnableRegionOutcomeCallable ListCosEnableRegionCallable(const Model::ListCosEnableRegionRequest& request);

                /**
                 *根据地域获取KMS密钥别名
                 * @param req ListKeyAliasByRegionRequest
                 * @return ListKeyAliasByRegionOutcome
                 */
                ListKeyAliasByRegionOutcome ListKeyAliasByRegion(const Model::ListKeyAliasByRegionRequest &request);
                void ListKeyAliasByRegionAsync(const Model::ListKeyAliasByRegionRequest& request, const ListKeyAliasByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListKeyAliasByRegionOutcomeCallable ListKeyAliasByRegionCallable(const Model::ListKeyAliasByRegionRequest& request);

                /**
                 *用于对操作日志进行检索，便于用户进行查询相关的操作信息。
                 * @param req LookUpEventsRequest
                 * @return LookUpEventsOutcome
                 */
                LookUpEventsOutcome LookUpEvents(const Model::LookUpEventsRequest &request);
                void LookUpEventsAsync(const Model::LookUpEventsRequest& request, const LookUpEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LookUpEventsOutcomeCallable LookUpEventsCallable(const Model::LookUpEventsRequest& request);

                /**
                 *修改操作审计跟踪集
                 * @param req ModifyAuditTrackRequest
                 * @return ModifyAuditTrackOutcome
                 */
                ModifyAuditTrackOutcome ModifyAuditTrack(const Model::ModifyAuditTrackRequest &request);
                void ModifyAuditTrackAsync(const Model::ModifyAuditTrackRequest& request, const ModifyAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuditTrackOutcomeCallable ModifyAuditTrackCallable(const Model::ModifyAuditTrackRequest& request);

                /**
                 *修改操作审计跟踪集
                 * @param req ModifyEventsAuditTrackRequest
                 * @return ModifyEventsAuditTrackOutcome
                 */
                ModifyEventsAuditTrackOutcome ModifyEventsAuditTrack(const Model::ModifyEventsAuditTrackRequest &request);
                void ModifyEventsAuditTrackAsync(const Model::ModifyEventsAuditTrackRequest& request, const ModifyEventsAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEventsAuditTrackOutcomeCallable ModifyEventsAuditTrackCallable(const Model::ModifyEventsAuditTrackRequest& request);

                /**
                 *开启跟踪集
                 * @param req StartLoggingRequest
                 * @return StartLoggingOutcome
                 */
                StartLoggingOutcome StartLogging(const Model::StartLoggingRequest &request);
                void StartLoggingAsync(const Model::StartLoggingRequest& request, const StartLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartLoggingOutcomeCallable StartLoggingCallable(const Model::StartLoggingRequest& request);

                /**
                 *关闭跟踪集
                 * @param req StopLoggingRequest
                 * @return StopLoggingOutcome
                 */
                StopLoggingOutcome StopLogging(const Model::StopLoggingRequest &request);
                void StopLoggingAsync(const Model::StopLoggingRequest& request, const StopLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopLoggingOutcomeCallable StopLoggingCallable(const Model::StopLoggingRequest& request);

                /**
                 *参数要求：
1、如果IsCreateNewBucket的值存在的话，cosRegion和cosBucketName都是必填参数。
2、如果IsEnableCmqNotify的值是1的话，IsCreateNewQueue、CmqRegion和CmqQueueName都是必填参数。
3、如果IsEnableCmqNotify的值是0的话，IsCreateNewQueue、CmqRegion和CmqQueueName都不能传。
4、如果IsEnableKmsEncry的值是1的话，KmsRegion和KeyId属于必填项
                 * @param req UpdateAuditRequest
                 * @return UpdateAuditOutcome
                 */
                UpdateAuditOutcome UpdateAudit(const Model::UpdateAuditRequest &request);
                void UpdateAuditAsync(const Model::UpdateAuditRequest& request, const UpdateAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAuditOutcomeCallable UpdateAuditCallable(const Model::UpdateAuditRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_CLOUDAUDITCLIENT_H_
