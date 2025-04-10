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

#ifndef TENCENTCLOUD_STS_V20180813_STSCLIENT_H_
#define TENCENTCLOUD_STS_V20180813_STSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/sts/v20180813/model/AssumeRoleRequest.h>
#include <tencentcloud/sts/v20180813/model/AssumeRoleResponse.h>
#include <tencentcloud/sts/v20180813/model/AssumeRoleWithSAMLRequest.h>
#include <tencentcloud/sts/v20180813/model/AssumeRoleWithSAMLResponse.h>
#include <tencentcloud/sts/v20180813/model/AssumeRoleWithWebIdentityRequest.h>
#include <tencentcloud/sts/v20180813/model/AssumeRoleWithWebIdentityResponse.h>
#include <tencentcloud/sts/v20180813/model/GetCallerIdentityRequest.h>
#include <tencentcloud/sts/v20180813/model/GetCallerIdentityResponse.h>
#include <tencentcloud/sts/v20180813/model/GetFederationTokenRequest.h>
#include <tencentcloud/sts/v20180813/model/GetFederationTokenResponse.h>
#include <tencentcloud/sts/v20180813/model/GetSessionTokenRequest.h>
#include <tencentcloud/sts/v20180813/model/GetSessionTokenResponse.h>
#include <tencentcloud/sts/v20180813/model/QueryApiKeyRequest.h>
#include <tencentcloud/sts/v20180813/model/QueryApiKeyResponse.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            class StsClient : public AbstractClient
            {
            public:
                StsClient(const Credential &credential, const std::string &region);
                StsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssumeRoleResponse> AssumeRoleOutcome;
                typedef std::future<AssumeRoleOutcome> AssumeRoleOutcomeCallable;
                typedef std::function<void(const StsClient*, const Model::AssumeRoleRequest&, AssumeRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssumeRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::AssumeRoleWithSAMLResponse> AssumeRoleWithSAMLOutcome;
                typedef std::future<AssumeRoleWithSAMLOutcome> AssumeRoleWithSAMLOutcomeCallable;
                typedef std::function<void(const StsClient*, const Model::AssumeRoleWithSAMLRequest&, AssumeRoleWithSAMLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssumeRoleWithSAMLAsyncHandler;
                typedef Outcome<Core::Error, Model::AssumeRoleWithWebIdentityResponse> AssumeRoleWithWebIdentityOutcome;
                typedef std::future<AssumeRoleWithWebIdentityOutcome> AssumeRoleWithWebIdentityOutcomeCallable;
                typedef std::function<void(const StsClient*, const Model::AssumeRoleWithWebIdentityRequest&, AssumeRoleWithWebIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssumeRoleWithWebIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCallerIdentityResponse> GetCallerIdentityOutcome;
                typedef std::future<GetCallerIdentityOutcome> GetCallerIdentityOutcomeCallable;
                typedef std::function<void(const StsClient*, const Model::GetCallerIdentityRequest&, GetCallerIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCallerIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFederationTokenResponse> GetFederationTokenOutcome;
                typedef std::future<GetFederationTokenOutcome> GetFederationTokenOutcomeCallable;
                typedef std::function<void(const StsClient*, const Model::GetFederationTokenRequest&, GetFederationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFederationTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSessionTokenResponse> GetSessionTokenOutcome;
                typedef std::future<GetSessionTokenOutcome> GetSessionTokenOutcomeCallable;
                typedef std::function<void(const StsClient*, const Model::GetSessionTokenRequest&, GetSessionTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSessionTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryApiKeyResponse> QueryApiKeyOutcome;
                typedef std::future<QueryApiKeyOutcome> QueryApiKeyOutcomeCallable;
                typedef std::function<void(const StsClient*, const Model::QueryApiKeyRequest&, QueryApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryApiKeyAsyncHandler;



                /**
                 *申请扮演角色临时访问凭证。

1、角色策略组成

（1）角色信任策略：指定谁可以扮演该角色；

（2）角色权限策略：指定扮演角色后可以执行哪些操作。


2、角色可扮演条件

（1）给用户绑定允许调用AssumeRole的策略 ；

（2）将用户添加为角色信任策略中的主体。
                 * @param req AssumeRoleRequest
                 * @return AssumeRoleOutcome
                 */
                AssumeRoleOutcome AssumeRole(const Model::AssumeRoleRequest &request);
                void AssumeRoleAsync(const Model::AssumeRoleRequest& request, const AssumeRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssumeRoleOutcomeCallable AssumeRoleCallable(const Model::AssumeRoleRequest& request);

                /**
                 *本接口（AssumeRoleWithSAML）用于根据 SAML 断言申请角色临时访问凭证。

注意：当使用签名方法 V3 调用本接口时，请求头无须传入 X-TC-Token, 但 Authorization 需要传入值 SKIP。
                 * @param req AssumeRoleWithSAMLRequest
                 * @return AssumeRoleWithSAMLOutcome
                 */
                AssumeRoleWithSAMLOutcome AssumeRoleWithSAML(const Model::AssumeRoleWithSAMLRequest &request);
                void AssumeRoleWithSAMLAsync(const Model::AssumeRoleWithSAMLRequest& request, const AssumeRoleWithSAMLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssumeRoleWithSAMLOutcomeCallable AssumeRoleWithSAMLCallable(const Model::AssumeRoleWithSAMLRequest& request);

                /**
                 *申请OIDC角色临时访问凭证。

注意：当使用签名方法 V3 调用本接口时，请求头无须传入 X-TC-Token, 但 Authorization 需要传入值 SKIP。
                 * @param req AssumeRoleWithWebIdentityRequest
                 * @return AssumeRoleWithWebIdentityOutcome
                 */
                AssumeRoleWithWebIdentityOutcome AssumeRoleWithWebIdentity(const Model::AssumeRoleWithWebIdentityRequest &request);
                void AssumeRoleWithWebIdentityAsync(const Model::AssumeRoleWithWebIdentityRequest& request, const AssumeRoleWithWebIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssumeRoleWithWebIdentityOutcomeCallable AssumeRoleWithWebIdentityCallable(const Model::AssumeRoleWithWebIdentityRequest& request);

                /**
                 *获取当前调用者的身份信息。

接口支持主账号，子账号长期密钥以及AssumeRole，GetFederationToken生成的临时访问凭证身份获取。
                 * @param req GetCallerIdentityRequest
                 * @return GetCallerIdentityOutcome
                 */
                GetCallerIdentityOutcome GetCallerIdentity(const Model::GetCallerIdentityRequest &request);
                void GetCallerIdentityAsync(const Model::GetCallerIdentityRequest& request, const GetCallerIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCallerIdentityOutcomeCallable GetCallerIdentityCallable(const Model::GetCallerIdentityRequest& request);

                /**
                 ***使用说明**

返回一组临时访问凭证，典型的应用场景是代理应用程序集中申请临时访问凭证，下发给企业网络内其他分布式终端应用，比如终端应用上传文件到COS场景，本接口仅支持永久密钥调用。

**最佳实践**

1. 临时访问凭据在有效期内都可以使用，建议在有效期内重复使用，以避免业务请求速率上升后被限频
2. 授予临时访问凭证权限的CAM策略，建议按权限最小化原则
3. 调用接口的永久密钥，建议不要使用主账号
                 * @param req GetFederationTokenRequest
                 * @return GetFederationTokenOutcome
                 */
                GetFederationTokenOutcome GetFederationToken(const Model::GetFederationTokenRequest &request);
                void GetFederationTokenAsync(const Model::GetFederationTokenRequest& request, const GetFederationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFederationTokenOutcomeCallable GetFederationTokenCallable(const Model::GetFederationTokenRequest& request);

                /**
                 *获取MFA临时证书
                 * @param req GetSessionTokenRequest
                 * @return GetSessionTokenOutcome
                 */
                GetSessionTokenOutcome GetSessionToken(const Model::GetSessionTokenRequest &request);
                void GetSessionTokenAsync(const Model::GetSessionTokenRequest& request, const GetSessionTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSessionTokenOutcomeCallable GetSessionTokenCallable(const Model::GetSessionTokenRequest& request);

                /**
                 *拉取API密钥列表
                 * @param req QueryApiKeyRequest
                 * @return QueryApiKeyOutcome
                 */
                QueryApiKeyOutcome QueryApiKey(const Model::QueryApiKeyRequest &request);
                void QueryApiKeyAsync(const Model::QueryApiKeyRequest& request, const QueryApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryApiKeyOutcomeCallable QueryApiKeyCallable(const Model::QueryApiKeyRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_STSCLIENT_H_
