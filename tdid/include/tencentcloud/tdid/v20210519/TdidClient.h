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
#include <tencentcloud/tdid/v20210519/model/CreateCredentialRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateCredentialResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateSelectiveCredentialRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateSelectiveCredentialResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByPublicKeyRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByPublicKeyResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetAuthorityIssuerRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetAuthorityIssuerResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDidDocumentRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDidDocumentResponse.h>
#include <tencentcloud/tdid/v20210519/model/SetCredentialStatusRequest.h>
#include <tencentcloud/tdid/v20210519/model/SetCredentialStatusResponse.h>
#include <tencentcloud/tdid/v20210519/model/VerifyCredentialRequest.h>
#include <tencentcloud/tdid/v20210519/model/VerifyCredentialResponse.h>


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

                typedef Outcome<Core::Error, Model::CreateCredentialResponse> CreateCredentialOutcome;
                typedef std::future<CreateCredentialOutcome> CreateCredentialOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateCredentialRequest&, CreateCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSelectiveCredentialResponse> CreateSelectiveCredentialOutcome;
                typedef std::future<CreateSelectiveCredentialOutcome> CreateSelectiveCredentialOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateSelectiveCredentialRequest&, CreateSelectiveCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSelectiveCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDidResponse> CreateTDidOutcome;
                typedef std::future<CreateTDidOutcome> CreateTDidOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateTDidRequest&, CreateTDidOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDidAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDidByPublicKeyResponse> CreateTDidByPublicKeyOutcome;
                typedef std::future<CreateTDidByPublicKeyOutcome> CreateTDidByPublicKeyOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateTDidByPublicKeyRequest&, CreateTDidByPublicKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDidByPublicKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAuthorityIssuerResponse> GetAuthorityIssuerOutcome;
                typedef std::future<GetAuthorityIssuerOutcome> GetAuthorityIssuerOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetAuthorityIssuerRequest&, GetAuthorityIssuerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAuthorityIssuerAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDidDocumentResponse> GetDidDocumentOutcome;
                typedef std::future<GetDidDocumentOutcome> GetDidDocumentOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDidDocumentRequest&, GetDidDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDidDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::SetCredentialStatusResponse> SetCredentialStatusOutcome;
                typedef std::future<SetCredentialStatusOutcome> SetCredentialStatusOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::SetCredentialStatusRequest&, SetCredentialStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetCredentialStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyCredentialResponse> VerifyCredentialOutcome;
                typedef std::future<VerifyCredentialOutcome> VerifyCredentialOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::VerifyCredentialRequest&, VerifyCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyCredentialAsyncHandler;



                /**
                 *创建凭证
                 * @param req CreateCredentialRequest
                 * @return CreateCredentialOutcome
                 */
                CreateCredentialOutcome CreateCredential(const Model::CreateCredentialRequest &request);
                void CreateCredentialAsync(const Model::CreateCredentialRequest& request, const CreateCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCredentialOutcomeCallable CreateCredentialCallable(const Model::CreateCredentialRequest& request);

                /**
                 *创建选择性批露凭证
                 * @param req CreateSelectiveCredentialRequest
                 * @return CreateSelectiveCredentialOutcome
                 */
                CreateSelectiveCredentialOutcome CreateSelectiveCredential(const Model::CreateSelectiveCredentialRequest &request);
                void CreateSelectiveCredentialAsync(const Model::CreateSelectiveCredentialRequest& request, const CreateSelectiveCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSelectiveCredentialOutcomeCallable CreateSelectiveCredentialCallable(const Model::CreateSelectiveCredentialRequest& request);

                /**
                 *创建机构DID
                 * @param req CreateTDidRequest
                 * @return CreateTDidOutcome
                 */
                CreateTDidOutcome CreateTDid(const Model::CreateTDidRequest &request);
                void CreateTDidAsync(const Model::CreateTDidRequest& request, const CreateTDidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTDidOutcomeCallable CreateTDidCallable(const Model::CreateTDidRequest& request);

                /**
                 * 新建DID根据公钥生成Tdid
                 * @param req CreateTDidByPublicKeyRequest
                 * @return CreateTDidByPublicKeyOutcome
                 */
                CreateTDidByPublicKeyOutcome CreateTDidByPublicKey(const Model::CreateTDidByPublicKeyRequest &request);
                void CreateTDidByPublicKeyAsync(const Model::CreateTDidByPublicKeyRequest& request, const CreateTDidByPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTDidByPublicKeyOutcomeCallable CreateTDidByPublicKeyCallable(const Model::CreateTDidByPublicKeyRequest& request);

                /**
                 *获取权威机构信息
                 * @param req GetAuthorityIssuerRequest
                 * @return GetAuthorityIssuerOutcome
                 */
                GetAuthorityIssuerOutcome GetAuthorityIssuer(const Model::GetAuthorityIssuerRequest &request);
                void GetAuthorityIssuerAsync(const Model::GetAuthorityIssuerRequest& request, const GetAuthorityIssuerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAuthorityIssuerOutcomeCallable GetAuthorityIssuerCallable(const Model::GetAuthorityIssuerRequest& request);

                /**
                 *查看DID文档

                 * @param req GetDidDocumentRequest
                 * @return GetDidDocumentOutcome
                 */
                GetDidDocumentOutcome GetDidDocument(const Model::GetDidDocumentRequest &request);
                void GetDidDocumentAsync(const Model::GetDidDocumentRequest& request, const GetDidDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDidDocumentOutcomeCallable GetDidDocumentCallable(const Model::GetDidDocumentRequest& request);

                /**
                 *设置凭证链上状态
                 * @param req SetCredentialStatusRequest
                 * @return SetCredentialStatusOutcome
                 */
                SetCredentialStatusOutcome SetCredentialStatus(const Model::SetCredentialStatusRequest &request);
                void SetCredentialStatusAsync(const Model::SetCredentialStatusRequest& request, const SetCredentialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetCredentialStatusOutcomeCallable SetCredentialStatusCallable(const Model::SetCredentialStatusRequest& request);

                /**
                 *验证凭证
                 * @param req VerifyCredentialRequest
                 * @return VerifyCredentialOutcome
                 */
                VerifyCredentialOutcome VerifyCredential(const Model::VerifyCredentialRequest &request);
                void VerifyCredentialAsync(const Model::VerifyCredentialRequest& request, const VerifyCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyCredentialOutcomeCallable VerifyCredentialCallable(const Model::VerifyCredentialRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_TDIDCLIENT_H_
