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
#include <tencentcloud/tdid/v20210519/model/CheckNewPurchaseRequest.h>
#include <tencentcloud/tdid/v20210519/model/CheckNewPurchaseResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByHostRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByHostResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByPubKeyRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByPubKeyResponse.h>
#include <tencentcloud/tdid/v20210519/model/DeactivateTDidRequest.h>
#include <tencentcloud/tdid/v20210519/model/DeactivateTDidResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialStateRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialStateResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetTDidDocumentRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetTDidDocumentResponse.h>
#include <tencentcloud/tdid/v20210519/model/IssueCredentialRequest.h>
#include <tencentcloud/tdid/v20210519/model/IssueCredentialResponse.h>
#include <tencentcloud/tdid/v20210519/model/UpdateCredentialStateRequest.h>
#include <tencentcloud/tdid/v20210519/model/UpdateCredentialStateResponse.h>
#include <tencentcloud/tdid/v20210519/model/VerifyCredentialsRequest.h>
#include <tencentcloud/tdid/v20210519/model/VerifyCredentialsResponse.h>


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

                typedef Outcome<Core::Error, Model::CheckNewPurchaseResponse> CheckNewPurchaseOutcome;
                typedef std::future<CheckNewPurchaseOutcome> CheckNewPurchaseOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CheckNewPurchaseRequest&, CheckNewPurchaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckNewPurchaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDidByHostResponse> CreateTDidByHostOutcome;
                typedef std::future<CreateTDidByHostOutcome> CreateTDidByHostOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateTDidByHostRequest&, CreateTDidByHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDidByHostAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDidByPubKeyResponse> CreateTDidByPubKeyOutcome;
                typedef std::future<CreateTDidByPubKeyOutcome> CreateTDidByPubKeyOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateTDidByPubKeyRequest&, CreateTDidByPubKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDidByPubKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeactivateTDidResponse> DeactivateTDidOutcome;
                typedef std::future<DeactivateTDidOutcome> DeactivateTDidOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::DeactivateTDidRequest&, DeactivateTDidOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeactivateTDidAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCredentialStateResponse> GetCredentialStateOutcome;
                typedef std::future<GetCredentialStateOutcome> GetCredentialStateOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetCredentialStateRequest&, GetCredentialStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCredentialStateAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTDidDocumentResponse> GetTDidDocumentOutcome;
                typedef std::future<GetTDidDocumentOutcome> GetTDidDocumentOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetTDidDocumentRequest&, GetTDidDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTDidDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::IssueCredentialResponse> IssueCredentialOutcome;
                typedef std::future<IssueCredentialOutcome> IssueCredentialOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::IssueCredentialRequest&, IssueCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IssueCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCredentialStateResponse> UpdateCredentialStateOutcome;
                typedef std::future<UpdateCredentialStateOutcome> UpdateCredentialStateOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::UpdateCredentialStateRequest&, UpdateCredentialStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCredentialStateAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyCredentialsResponse> VerifyCredentialsOutcome;
                typedef std::future<VerifyCredentialsOutcome> VerifyCredentialsOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::VerifyCredentialsRequest&, VerifyCredentialsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyCredentialsAsyncHandler;



                /**
                 *检查用户套餐购买状态
                 * @param req CheckNewPurchaseRequest
                 * @return CheckNewPurchaseOutcome
                 */
                CheckNewPurchaseOutcome CheckNewPurchase(const Model::CheckNewPurchaseRequest &request);
                void CheckNewPurchaseAsync(const Model::CheckNewPurchaseRequest& request, const CheckNewPurchaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckNewPurchaseOutcomeCallable CheckNewPurchaseCallable(const Model::CheckNewPurchaseRequest& request);

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
                 *获取凭证链上状态信息
                 * @param req GetCredentialStateRequest
                 * @return GetCredentialStateOutcome
                 */
                GetCredentialStateOutcome GetCredentialState(const Model::GetCredentialStateRequest &request);
                void GetCredentialStateAsync(const Model::GetCredentialStateRequest& request, const GetCredentialStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCredentialStateOutcomeCallable GetCredentialStateCallable(const Model::GetCredentialStateRequest& request);

                /**
                 *获取DID标识的文档
                 * @param req GetTDidDocumentRequest
                 * @return GetTDidDocumentOutcome
                 */
                GetTDidDocumentOutcome GetTDidDocument(const Model::GetTDidDocumentRequest &request);
                void GetTDidDocumentAsync(const Model::GetTDidDocumentRequest& request, const GetTDidDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTDidDocumentOutcomeCallable GetTDidDocumentCallable(const Model::GetTDidDocumentRequest& request);

                /**
                 *颁发可验证凭证
                 * @param req IssueCredentialRequest
                 * @return IssueCredentialOutcome
                 */
                IssueCredentialOutcome IssueCredential(const Model::IssueCredentialRequest &request);
                void IssueCredentialAsync(const Model::IssueCredentialRequest& request, const IssueCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IssueCredentialOutcomeCallable IssueCredentialCallable(const Model::IssueCredentialRequest& request);

                /**
                 *更新凭证的链上状态
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

            };
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_TDIDCLIENT_H_
