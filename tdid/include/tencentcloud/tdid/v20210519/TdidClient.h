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
#include <tencentcloud/tdid/v20210519/model/AddLabelRequest.h>
#include <tencentcloud/tdid/v20210519/model/AddLabelResponse.h>
#include <tencentcloud/tdid/v20210519/model/CheckChainRequest.h>
#include <tencentcloud/tdid/v20210519/model/CheckChainResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateCredentialRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateCredentialResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateSelectiveCredentialRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateSelectiveCredentialResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByPrivateKeyRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByPrivateKeyResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByPublicKeyRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByPublicKeyResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetAgencyTDidRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetAgencyTDidResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetAuthorityIssuerRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetAuthorityIssuerResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetConsortiumClusterListRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetConsortiumClusterListResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetConsortiumListRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetConsortiumListResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetCptInfoRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetCptInfoResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialCptRankRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialCptRankResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialStatusRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialStatusResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDidClusterDetailRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDidClusterDetailResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDidClusterListRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDidClusterListResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDidDocumentRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDidDocumentResponse.h>
#include <tencentcloud/tdid/v20210519/model/RegisterCptRequest.h>
#include <tencentcloud/tdid/v20210519/model/RegisterCptResponse.h>
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

                typedef Outcome<Core::Error, Model::AddLabelResponse> AddLabelOutcome;
                typedef std::future<AddLabelOutcome> AddLabelOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::AddLabelRequest&, AddLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckChainResponse> CheckChainOutcome;
                typedef std::future<CheckChainOutcome> CheckChainOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CheckChainRequest&, CheckChainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckChainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCredentialResponse> CreateCredentialOutcome;
                typedef std::future<CreateCredentialOutcome> CreateCredentialOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateCredentialRequest&, CreateCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSelectiveCredentialResponse> CreateSelectiveCredentialOutcome;
                typedef std::future<CreateSelectiveCredentialOutcome> CreateSelectiveCredentialOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateSelectiveCredentialRequest&, CreateSelectiveCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSelectiveCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDidResponse> CreateTDidOutcome;
                typedef std::future<CreateTDidOutcome> CreateTDidOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateTDidRequest&, CreateTDidOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDidAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDidByPrivateKeyResponse> CreateTDidByPrivateKeyOutcome;
                typedef std::future<CreateTDidByPrivateKeyOutcome> CreateTDidByPrivateKeyOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateTDidByPrivateKeyRequest&, CreateTDidByPrivateKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDidByPrivateKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDidByPublicKeyResponse> CreateTDidByPublicKeyOutcome;
                typedef std::future<CreateTDidByPublicKeyOutcome> CreateTDidByPublicKeyOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateTDidByPublicKeyRequest&, CreateTDidByPublicKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDidByPublicKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAgencyTDidResponse> GetAgencyTDidOutcome;
                typedef std::future<GetAgencyTDidOutcome> GetAgencyTDidOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetAgencyTDidRequest&, GetAgencyTDidOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAgencyTDidAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAuthorityIssuerResponse> GetAuthorityIssuerOutcome;
                typedef std::future<GetAuthorityIssuerOutcome> GetAuthorityIssuerOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetAuthorityIssuerRequest&, GetAuthorityIssuerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAuthorityIssuerAsyncHandler;
                typedef Outcome<Core::Error, Model::GetConsortiumClusterListResponse> GetConsortiumClusterListOutcome;
                typedef std::future<GetConsortiumClusterListOutcome> GetConsortiumClusterListOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetConsortiumClusterListRequest&, GetConsortiumClusterListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetConsortiumClusterListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetConsortiumListResponse> GetConsortiumListOutcome;
                typedef std::future<GetConsortiumListOutcome> GetConsortiumListOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetConsortiumListRequest&, GetConsortiumListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetConsortiumListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCptInfoResponse> GetCptInfoOutcome;
                typedef std::future<GetCptInfoOutcome> GetCptInfoOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetCptInfoRequest&, GetCptInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCptInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCredentialCptRankResponse> GetCredentialCptRankOutcome;
                typedef std::future<GetCredentialCptRankOutcome> GetCredentialCptRankOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetCredentialCptRankRequest&, GetCredentialCptRankOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCredentialCptRankAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCredentialStatusResponse> GetCredentialStatusOutcome;
                typedef std::future<GetCredentialStatusOutcome> GetCredentialStatusOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetCredentialStatusRequest&, GetCredentialStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCredentialStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDidClusterDetailResponse> GetDidClusterDetailOutcome;
                typedef std::future<GetDidClusterDetailOutcome> GetDidClusterDetailOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDidClusterDetailRequest&, GetDidClusterDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDidClusterDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDidClusterListResponse> GetDidClusterListOutcome;
                typedef std::future<GetDidClusterListOutcome> GetDidClusterListOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDidClusterListRequest&, GetDidClusterListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDidClusterListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDidDocumentResponse> GetDidDocumentOutcome;
                typedef std::future<GetDidDocumentOutcome> GetDidDocumentOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDidDocumentRequest&, GetDidDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDidDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterCptResponse> RegisterCptOutcome;
                typedef std::future<RegisterCptOutcome> RegisterCptOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::RegisterCptRequest&, RegisterCptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterCptAsyncHandler;
                typedef Outcome<Core::Error, Model::SetCredentialStatusResponse> SetCredentialStatusOutcome;
                typedef std::future<SetCredentialStatusOutcome> SetCredentialStatusOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::SetCredentialStatusRequest&, SetCredentialStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetCredentialStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyCredentialResponse> VerifyCredentialOutcome;
                typedef std::future<VerifyCredentialOutcome> VerifyCredentialOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::VerifyCredentialRequest&, VerifyCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyCredentialAsyncHandler;



                /**
                 *下线已有内测接口，待上线正式版本的接口

DID添加标签

                 * @param req AddLabelRequest
                 * @return AddLabelOutcome
                 */
                AddLabelOutcome AddLabel(const Model::AddLabelRequest &request);
                void AddLabelAsync(const Model::AddLabelRequest& request, const AddLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddLabelOutcomeCallable AddLabelCallable(const Model::AddLabelRequest& request);

                /**
                 *检查区块链信息
                 * @param req CheckChainRequest
                 * @return CheckChainOutcome
                 */
                CheckChainOutcome CheckChain(const Model::CheckChainRequest &request);
                void CheckChainAsync(const Model::CheckChainRequest& request, const CheckChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckChainOutcomeCallable CheckChainCallable(const Model::CheckChainRequest& request);

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
                 *新建DID根据私钥生成Tdid
                 * @param req CreateTDidByPrivateKeyRequest
                 * @return CreateTDidByPrivateKeyOutcome
                 */
                CreateTDidByPrivateKeyOutcome CreateTDidByPrivateKey(const Model::CreateTDidByPrivateKeyRequest &request);
                void CreateTDidByPrivateKeyAsync(const Model::CreateTDidByPrivateKeyRequest& request, const CreateTDidByPrivateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTDidByPrivateKeyOutcomeCallable CreateTDidByPrivateKeyCallable(const Model::CreateTDidByPrivateKeyRequest& request);

                /**
                 * 新建DID根据公钥生成Tdid
                 * @param req CreateTDidByPublicKeyRequest
                 * @return CreateTDidByPublicKeyOutcome
                 */
                CreateTDidByPublicKeyOutcome CreateTDidByPublicKey(const Model::CreateTDidByPublicKeyRequest &request);
                void CreateTDidByPublicKeyAsync(const Model::CreateTDidByPublicKeyRequest& request, const CreateTDidByPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTDidByPublicKeyOutcomeCallable CreateTDidByPublicKeyCallable(const Model::CreateTDidByPublicKeyRequest& request);

                /**
                 *该接口已废弃

本机构DID详情
                 * @param req GetAgencyTDidRequest
                 * @return GetAgencyTDidOutcome
                 */
                GetAgencyTDidOutcome GetAgencyTDid(const Model::GetAgencyTDidRequest &request);
                void GetAgencyTDidAsync(const Model::GetAgencyTDidRequest& request, const GetAgencyTDidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAgencyTDidOutcomeCallable GetAgencyTDidCallable(const Model::GetAgencyTDidRequest& request);

                /**
                 *获取权威机构信息
                 * @param req GetAuthorityIssuerRequest
                 * @return GetAuthorityIssuerOutcome
                 */
                GetAuthorityIssuerOutcome GetAuthorityIssuer(const Model::GetAuthorityIssuerRequest &request);
                void GetAuthorityIssuerAsync(const Model::GetAuthorityIssuerRequest& request, const GetAuthorityIssuerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAuthorityIssuerOutcomeCallable GetAuthorityIssuerCallable(const Model::GetAuthorityIssuerRequest& request);

                /**
                 *下线已有内测接口，待上线正式版本的接口

获取联盟bcos网络列表
                 * @param req GetConsortiumClusterListRequest
                 * @return GetConsortiumClusterListOutcome
                 */
                GetConsortiumClusterListOutcome GetConsortiumClusterList(const Model::GetConsortiumClusterListRequest &request);
                void GetConsortiumClusterListAsync(const Model::GetConsortiumClusterListRequest& request, const GetConsortiumClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetConsortiumClusterListOutcomeCallable GetConsortiumClusterListCallable(const Model::GetConsortiumClusterListRequest& request);

                /**
                 *下线已有内测接口，待上线正式版本的接口

获取联盟列表
                 * @param req GetConsortiumListRequest
                 * @return GetConsortiumListOutcome
                 */
                GetConsortiumListOutcome GetConsortiumList(const Model::GetConsortiumListRequest &request);
                void GetConsortiumListAsync(const Model::GetConsortiumListRequest& request, const GetConsortiumListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetConsortiumListOutcomeCallable GetConsortiumListCallable(const Model::GetConsortiumListRequest& request);

                /**
                 *凭证模版详情
                 * @param req GetCptInfoRequest
                 * @return GetCptInfoOutcome
                 */
                GetCptInfoOutcome GetCptInfo(const Model::GetCptInfoRequest &request);
                void GetCptInfoAsync(const Model::GetCptInfoRequest& request, const GetCptInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCptInfoOutcomeCallable GetCptInfoCallable(const Model::GetCptInfoRequest& request);

                /**
                 *下线已有内测接口，待上线正式版本的接口

凭证颁发按机构排行
                 * @param req GetCredentialCptRankRequest
                 * @return GetCredentialCptRankOutcome
                 */
                GetCredentialCptRankOutcome GetCredentialCptRank(const Model::GetCredentialCptRankRequest &request);
                void GetCredentialCptRankAsync(const Model::GetCredentialCptRankRequest& request, const GetCredentialCptRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCredentialCptRankOutcomeCallable GetCredentialCptRankCallable(const Model::GetCredentialCptRankRequest& request);

                /**
                 *获取凭证链上状态信息
                 * @param req GetCredentialStatusRequest
                 * @return GetCredentialStatusOutcome
                 */
                GetCredentialStatusOutcome GetCredentialStatus(const Model::GetCredentialStatusRequest &request);
                void GetCredentialStatusAsync(const Model::GetCredentialStatusRequest& request, const GetCredentialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCredentialStatusOutcomeCallable GetCredentialStatusCallable(const Model::GetCredentialStatusRequest& request);

                /**
                 *下线已有内测接口，待上线正式版本的接口

获取DID区块链网络详情
                 * @param req GetDidClusterDetailRequest
                 * @return GetDidClusterDetailOutcome
                 */
                GetDidClusterDetailOutcome GetDidClusterDetail(const Model::GetDidClusterDetailRequest &request);
                void GetDidClusterDetailAsync(const Model::GetDidClusterDetailRequest& request, const GetDidClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDidClusterDetailOutcomeCallable GetDidClusterDetailCallable(const Model::GetDidClusterDetailRequest& request);

                /**
                 *下线已有内测接口，待上线正式版本的接口

获取用户的DID网络列表
                 * @param req GetDidClusterListRequest
                 * @return GetDidClusterListOutcome
                 */
                GetDidClusterListOutcome GetDidClusterList(const Model::GetDidClusterListRequest &request);
                void GetDidClusterListAsync(const Model::GetDidClusterListRequest& request, const GetDidClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDidClusterListOutcomeCallable GetDidClusterListCallable(const Model::GetDidClusterListRequest& request);

                /**
                 *查看DID文档

                 * @param req GetDidDocumentRequest
                 * @return GetDidDocumentOutcome
                 */
                GetDidDocumentOutcome GetDidDocument(const Model::GetDidDocumentRequest &request);
                void GetDidDocumentAsync(const Model::GetDidDocumentRequest& request, const GetDidDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDidDocumentOutcomeCallable GetDidDocumentCallable(const Model::GetDidDocumentRequest& request);

                /**
                 *凭证模版新建
                 * @param req RegisterCptRequest
                 * @return RegisterCptOutcome
                 */
                RegisterCptOutcome RegisterCpt(const Model::RegisterCptRequest &request);
                void RegisterCptAsync(const Model::RegisterCptRequest& request, const RegisterCptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterCptOutcomeCallable RegisterCptCallable(const Model::RegisterCptRequest& request);

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
