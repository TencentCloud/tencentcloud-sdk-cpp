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

#ifndef TENCENTCLOUD_TDID_V20210519_TDIDCLIENT_H_
#define TENCENTCLOUD_TDID_V20210519_TDIDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tdid/v20210519/model/CreateDisclosedCredentialRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateDisclosedCredentialResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreatePresentationRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreatePresentationResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByHostRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByHostResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByPubKeyRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByPubKeyResponse.h>
#include <tencentcloud/tdid/v20210519/model/DeactivateTDidRequest.h>
#include <tencentcloud/tdid/v20210519/model/DeactivateTDidResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetAppSummaryRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetAppSummaryResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialStateRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialStateResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetOverSummaryRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetOverSummaryResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetTDidByObjectIdRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetTDidByObjectIdResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetTDidDocumentRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetTDidDocumentResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetTDidPubKeyRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetTDidPubKeyResponse.h>
#include <tencentcloud/tdid/v20210519/model/IssueCredentialRequest.h>
#include <tencentcloud/tdid/v20210519/model/IssueCredentialResponse.h>
#include <tencentcloud/tdid/v20210519/model/QueryAuthorityInfoRequest.h>
#include <tencentcloud/tdid/v20210519/model/QueryAuthorityInfoResponse.h>
#include <tencentcloud/tdid/v20210519/model/QueryCPTRequest.h>
#include <tencentcloud/tdid/v20210519/model/QueryCPTResponse.h>
#include <tencentcloud/tdid/v20210519/model/SetTDidAttributeRequest.h>
#include <tencentcloud/tdid/v20210519/model/SetTDidAttributeResponse.h>
#include <tencentcloud/tdid/v20210519/model/UpdateCredentialStateRequest.h>
#include <tencentcloud/tdid/v20210519/model/UpdateCredentialStateResponse.h>
#include <tencentcloud/tdid/v20210519/model/VerifyCredentialsRequest.h>
#include <tencentcloud/tdid/v20210519/model/VerifyCredentialsResponse.h>
#include <tencentcloud/tdid/v20210519/model/VerifyPresentationRequest.h>
#include <tencentcloud/tdid/v20210519/model/VerifyPresentationResponse.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            class TdidClient : public AbstractClient
            {
            public:
                TdidClient(const Credential &credential, const std::string &region);
                TdidClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateDisclosedCredentialResponse> CreateDisclosedCredentialOutcome;
                typedef std::future<CreateDisclosedCredentialOutcome> CreateDisclosedCredentialOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateDisclosedCredentialRequest&, CreateDisclosedCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDisclosedCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePresentationResponse> CreatePresentationOutcome;
                typedef std::future<CreatePresentationOutcome> CreatePresentationOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreatePresentationRequest&, CreatePresentationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePresentationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDidByHostResponse> CreateTDidByHostOutcome;
                typedef std::future<CreateTDidByHostOutcome> CreateTDidByHostOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateTDidByHostRequest&, CreateTDidByHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDidByHostAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDidByPubKeyResponse> CreateTDidByPubKeyOutcome;
                typedef std::future<CreateTDidByPubKeyOutcome> CreateTDidByPubKeyOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateTDidByPubKeyRequest&, CreateTDidByPubKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDidByPubKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeactivateTDidResponse> DeactivateTDidOutcome;
                typedef std::future<DeactivateTDidOutcome> DeactivateTDidOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::DeactivateTDidRequest&, DeactivateTDidOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeactivateTDidAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAppSummaryResponse> GetAppSummaryOutcome;
                typedef std::future<GetAppSummaryOutcome> GetAppSummaryOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetAppSummaryRequest&, GetAppSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAppSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCredentialStateResponse> GetCredentialStateOutcome;
                typedef std::future<GetCredentialStateOutcome> GetCredentialStateOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetCredentialStateRequest&, GetCredentialStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCredentialStateAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOverSummaryResponse> GetOverSummaryOutcome;
                typedef std::future<GetOverSummaryOutcome> GetOverSummaryOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetOverSummaryRequest&, GetOverSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOverSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTDidByObjectIdResponse> GetTDidByObjectIdOutcome;
                typedef std::future<GetTDidByObjectIdOutcome> GetTDidByObjectIdOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetTDidByObjectIdRequest&, GetTDidByObjectIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTDidByObjectIdAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTDidDocumentResponse> GetTDidDocumentOutcome;
                typedef std::future<GetTDidDocumentOutcome> GetTDidDocumentOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetTDidDocumentRequest&, GetTDidDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTDidDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTDidPubKeyResponse> GetTDidPubKeyOutcome;
                typedef std::future<GetTDidPubKeyOutcome> GetTDidPubKeyOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetTDidPubKeyRequest&, GetTDidPubKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTDidPubKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::IssueCredentialResponse> IssueCredentialOutcome;
                typedef std::future<IssueCredentialOutcome> IssueCredentialOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::IssueCredentialRequest&, IssueCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IssueCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryAuthorityInfoResponse> QueryAuthorityInfoOutcome;
                typedef std::future<QueryAuthorityInfoOutcome> QueryAuthorityInfoOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::QueryAuthorityInfoRequest&, QueryAuthorityInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAuthorityInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCPTResponse> QueryCPTOutcome;
                typedef std::future<QueryCPTOutcome> QueryCPTOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::QueryCPTRequest&, QueryCPTOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCPTAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTDidAttributeResponse> SetTDidAttributeOutcome;
                typedef std::future<SetTDidAttributeOutcome> SetTDidAttributeOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::SetTDidAttributeRequest&, SetTDidAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTDidAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCredentialStateResponse> UpdateCredentialStateOutcome;
                typedef std::future<UpdateCredentialStateOutcome> UpdateCredentialStateOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::UpdateCredentialStateRequest&, UpdateCredentialStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCredentialStateAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyCredentialsResponse> VerifyCredentialsOutcome;
                typedef std::future<VerifyCredentialsOutcome> VerifyCredentialsOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::VerifyCredentialsRequest&, VerifyCredentialsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyCredentialsAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyPresentationResponse> VerifyPresentationOutcome;
                typedef std::future<VerifyPresentationOutcome> VerifyPresentationOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::VerifyPresentationRequest&, VerifyPresentationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyPresentationAsyncHandler;



                /**
                 *根据披露策略创建选择性披露凭证
                 * @param req CreateDisclosedCredentialRequest
                 * @return CreateDisclosedCredentialOutcome
                 */
                CreateDisclosedCredentialOutcome CreateDisclosedCredential(const Model::CreateDisclosedCredentialRequest &request);
                void CreateDisclosedCredentialAsync(const Model::CreateDisclosedCredentialRequest& request, const CreateDisclosedCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDisclosedCredentialOutcomeCallable CreateDisclosedCredentialCallable(const Model::CreateDisclosedCredentialRequest& request);

                /**
                 *创建凭证持有人的可验证表达
                 * @param req CreatePresentationRequest
                 * @return CreatePresentationOutcome
                 */
                CreatePresentationOutcome CreatePresentation(const Model::CreatePresentationRequest &request);
                void CreatePresentationAsync(const Model::CreatePresentationRequest& request, const CreatePresentationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePresentationOutcomeCallable CreatePresentationCallable(const Model::CreatePresentationRequest& request);

                /**
                 *自动生成公私钥对托管在DID平台，并注册DID标识
                 * @param req CreateTDidByHostRequest
                 * @return CreateTDidByHostOutcome
                 */
                CreateTDidByHostOutcome CreateTDidByHost(const Model::CreateTDidByHostRequest &request);
                void CreateTDidByHostAsync(const Model::CreateTDidByHostRequest& request, const CreateTDidByHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTDidByHostOutcomeCallable CreateTDidByHostCallable(const Model::CreateTDidByHostRequest& request);

                /**
                 *使用导入的公钥文件注册DID标识
                 * @param req CreateTDidByPubKeyRequest
                 * @return CreateTDidByPubKeyOutcome
                 */
                CreateTDidByPubKeyOutcome CreateTDidByPubKey(const Model::CreateTDidByPubKeyRequest &request);
                void CreateTDidByPubKeyAsync(const Model::CreateTDidByPubKeyRequest& request, const CreateTDidByPubKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTDidByPubKeyOutcomeCallable CreateTDidByPubKeyCallable(const Model::CreateTDidByPubKeyRequest& request);

                /**
                 *更新DID标识的禁用状态
                 * @param req DeactivateTDidRequest
                 * @return DeactivateTDidOutcome
                 */
                DeactivateTDidOutcome DeactivateTDid(const Model::DeactivateTDidRequest &request);
                void DeactivateTDidAsync(const Model::DeactivateTDidRequest& request, const DeactivateTDidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeactivateTDidOutcomeCallable DeactivateTDidCallable(const Model::DeactivateTDidRequest& request);

                /**
                 *获取某个应用关键指标统计数据
                 * @param req GetAppSummaryRequest
                 * @return GetAppSummaryOutcome
                 */
                GetAppSummaryOutcome GetAppSummary(const Model::GetAppSummaryRequest &request);
                void GetAppSummaryAsync(const Model::GetAppSummaryRequest& request, const GetAppSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAppSummaryOutcomeCallable GetAppSummaryCallable(const Model::GetAppSummaryRequest& request);

                /**
                 *获取凭证链上状态信息
                 * @param req GetCredentialStateRequest
                 * @return GetCredentialStateOutcome
                 */
                GetCredentialStateOutcome GetCredentialState(const Model::GetCredentialStateRequest &request);
                void GetCredentialStateAsync(const Model::GetCredentialStateRequest& request, const GetCredentialStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCredentialStateOutcomeCallable GetCredentialStateCallable(const Model::GetCredentialStateRequest& request);

                /**
                 *获取某个应用关键指标统计数据
                 * @param req GetOverSummaryRequest
                 * @return GetOverSummaryOutcome
                 */
                GetOverSummaryOutcome GetOverSummary(const Model::GetOverSummaryRequest &request);
                void GetOverSummaryAsync(const Model::GetOverSummaryRequest& request, const GetOverSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOverSummaryOutcomeCallable GetOverSummaryCallable(const Model::GetOverSummaryRequest& request);

                /**
                 *通过业务层绑定的对象ID获取DID标识
                 * @param req GetTDidByObjectIdRequest
                 * @return GetTDidByObjectIdOutcome
                 */
                GetTDidByObjectIdOutcome GetTDidByObjectId(const Model::GetTDidByObjectIdRequest &request);
                void GetTDidByObjectIdAsync(const Model::GetTDidByObjectIdRequest& request, const GetTDidByObjectIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTDidByObjectIdOutcomeCallable GetTDidByObjectIdCallable(const Model::GetTDidByObjectIdRequest& request);

                /**
                 *获取DID标识的文档
                 * @param req GetTDidDocumentRequest
                 * @return GetTDidDocumentOutcome
                 */
                GetTDidDocumentOutcome GetTDidDocument(const Model::GetTDidDocumentRequest &request);
                void GetTDidDocumentAsync(const Model::GetTDidDocumentRequest& request, const GetTDidDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTDidDocumentOutcomeCallable GetTDidDocumentCallable(const Model::GetTDidDocumentRequest& request);

                /**
                 *查询DID标识的认证公钥
                 * @param req GetTDidPubKeyRequest
                 * @return GetTDidPubKeyOutcome
                 */
                GetTDidPubKeyOutcome GetTDidPubKey(const Model::GetTDidPubKeyRequest &request);
                void GetTDidPubKeyAsync(const Model::GetTDidPubKeyRequest& request, const GetTDidPubKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTDidPubKeyOutcomeCallable GetTDidPubKeyCallable(const Model::GetTDidPubKeyRequest& request);

                /**
                 *颁发可验证凭证
                 * @param req IssueCredentialRequest
                 * @return IssueCredentialOutcome
                 */
                IssueCredentialOutcome IssueCredential(const Model::IssueCredentialRequest &request);
                void IssueCredentialAsync(const Model::IssueCredentialRequest& request, const IssueCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IssueCredentialOutcomeCallable IssueCredentialCallable(const Model::IssueCredentialRequest& request);

                /**
                 *查询权威机构信息
                 * @param req QueryAuthorityInfoRequest
                 * @return QueryAuthorityInfoOutcome
                 */
                QueryAuthorityInfoOutcome QueryAuthorityInfo(const Model::QueryAuthorityInfoRequest &request);
                void QueryAuthorityInfoAsync(const Model::QueryAuthorityInfoRequest& request, const QueryAuthorityInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryAuthorityInfoOutcomeCallable QueryAuthorityInfoCallable(const Model::QueryAuthorityInfoRequest& request);

                /**
                 *查询凭证模板内容
                 * @param req QueryCPTRequest
                 * @return QueryCPTOutcome
                 */
                QueryCPTOutcome QueryCPT(const Model::QueryCPTRequest &request);
                void QueryCPTAsync(const Model::QueryCPTRequest& request, const QueryCPTAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCPTOutcomeCallable QueryCPTCallable(const Model::QueryCPTRequest& request);

                /**
                 *设置DID文档的自定义属性
                 * @param req SetTDidAttributeRequest
                 * @return SetTDidAttributeOutcome
                 */
                SetTDidAttributeOutcome SetTDidAttribute(const Model::SetTDidAttributeRequest &request);
                void SetTDidAttributeAsync(const Model::SetTDidAttributeRequest& request, const SetTDidAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetTDidAttributeOutcomeCallable SetTDidAttributeCallable(const Model::SetTDidAttributeRequest& request);

                /**
                 *1. 首次更新凭证状态基于不同场景参数有所差异，分以下两种场景：
(1)  颁发凭证的DID是本腾讯云账号创建
(2) 颁发凭证的DID是非本腾讯云账号创建(此调用方式也适用于场景1)
2. 首次更新过凭证状态后，凭证状态已绑定该账号的链上用户，后续更新凭证状态只需参数CredentialStatus即可, OperateCredential和OriginCredential参数均不需要
                 * @param req UpdateCredentialStateRequest
                 * @return UpdateCredentialStateOutcome
                 */
                UpdateCredentialStateOutcome UpdateCredentialState(const Model::UpdateCredentialStateRequest &request);
                void UpdateCredentialStateAsync(const Model::UpdateCredentialStateRequest& request, const UpdateCredentialStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCredentialStateOutcomeCallable UpdateCredentialStateCallable(const Model::UpdateCredentialStateRequest& request);

                /**
                 *验证已签名的可验证凭证
                 * @param req VerifyCredentialsRequest
                 * @return VerifyCredentialsOutcome
                 */
                VerifyCredentialsOutcome VerifyCredentials(const Model::VerifyCredentialsRequest &request);
                void VerifyCredentialsAsync(const Model::VerifyCredentialsRequest& request, const VerifyCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyCredentialsOutcomeCallable VerifyCredentialsCallable(const Model::VerifyCredentialsRequest& request);

                /**
                 *验证可验证表达的内容
                 * @param req VerifyPresentationRequest
                 * @return VerifyPresentationOutcome
                 */
                VerifyPresentationOutcome VerifyPresentation(const Model::VerifyPresentationRequest &request);
                void VerifyPresentationAsync(const Model::VerifyPresentationRequest& request, const VerifyPresentationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyPresentationOutcomeCallable VerifyPresentationCallable(const Model::VerifyPresentationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_TDIDCLIENT_H_
