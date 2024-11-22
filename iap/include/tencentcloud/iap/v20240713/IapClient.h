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

#ifndef TENCENTCLOUD_IAP_V20240713_IAPCLIENT_H_
#define TENCENTCLOUD_IAP_V20240713_IAPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iap/v20240713/model/CreateIAPUserOIDCConfigRequest.h>
#include <tencentcloud/iap/v20240713/model/CreateIAPUserOIDCConfigResponse.h>
#include <tencentcloud/iap/v20240713/model/DescribeIAPLoginSessionDurationRequest.h>
#include <tencentcloud/iap/v20240713/model/DescribeIAPLoginSessionDurationResponse.h>
#include <tencentcloud/iap/v20240713/model/DescribeIAPUserOIDCConfigRequest.h>
#include <tencentcloud/iap/v20240713/model/DescribeIAPUserOIDCConfigResponse.h>
#include <tencentcloud/iap/v20240713/model/DisableIAPUserSSORequest.h>
#include <tencentcloud/iap/v20240713/model/DisableIAPUserSSOResponse.h>
#include <tencentcloud/iap/v20240713/model/ModifyIAPLoginSessionDurationRequest.h>
#include <tencentcloud/iap/v20240713/model/ModifyIAPLoginSessionDurationResponse.h>
#include <tencentcloud/iap/v20240713/model/UpdateIAPUserOIDCConfigRequest.h>
#include <tencentcloud/iap/v20240713/model/UpdateIAPUserOIDCConfigResponse.h>


namespace TencentCloud
{
    namespace Iap
    {
        namespace V20240713
        {
            class IapClient : public AbstractClient
            {
            public:
                IapClient(const Credential &credential, const std::string &region);
                IapClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateIAPUserOIDCConfigResponse> CreateIAPUserOIDCConfigOutcome;
                typedef std::future<CreateIAPUserOIDCConfigOutcome> CreateIAPUserOIDCConfigOutcomeCallable;
                typedef std::function<void(const IapClient*, const Model::CreateIAPUserOIDCConfigRequest&, CreateIAPUserOIDCConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIAPUserOIDCConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIAPLoginSessionDurationResponse> DescribeIAPLoginSessionDurationOutcome;
                typedef std::future<DescribeIAPLoginSessionDurationOutcome> DescribeIAPLoginSessionDurationOutcomeCallable;
                typedef std::function<void(const IapClient*, const Model::DescribeIAPLoginSessionDurationRequest&, DescribeIAPLoginSessionDurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIAPLoginSessionDurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIAPUserOIDCConfigResponse> DescribeIAPUserOIDCConfigOutcome;
                typedef std::future<DescribeIAPUserOIDCConfigOutcome> DescribeIAPUserOIDCConfigOutcomeCallable;
                typedef std::function<void(const IapClient*, const Model::DescribeIAPUserOIDCConfigRequest&, DescribeIAPUserOIDCConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIAPUserOIDCConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableIAPUserSSOResponse> DisableIAPUserSSOOutcome;
                typedef std::future<DisableIAPUserSSOOutcome> DisableIAPUserSSOOutcomeCallable;
                typedef std::function<void(const IapClient*, const Model::DisableIAPUserSSORequest&, DisableIAPUserSSOOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableIAPUserSSOAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIAPLoginSessionDurationResponse> ModifyIAPLoginSessionDurationOutcome;
                typedef std::future<ModifyIAPLoginSessionDurationOutcome> ModifyIAPLoginSessionDurationOutcomeCallable;
                typedef std::function<void(const IapClient*, const Model::ModifyIAPLoginSessionDurationRequest&, ModifyIAPLoginSessionDurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIAPLoginSessionDurationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateIAPUserOIDCConfigResponse> UpdateIAPUserOIDCConfigOutcome;
                typedef std::future<UpdateIAPUserOIDCConfigOutcome> UpdateIAPUserOIDCConfigOutcomeCallable;
                typedef std::function<void(const IapClient*, const Model::UpdateIAPUserOIDCConfigRequest&, UpdateIAPUserOIDCConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIAPUserOIDCConfigAsyncHandler;



                /**
                 *创建用户OIDC配置。只能创建一个用户OIDC身份提供商，并且创建用户OIDC配置之后会自动关闭用户SAML SSO身份提供商。
                 * @param req CreateIAPUserOIDCConfigRequest
                 * @return CreateIAPUserOIDCConfigOutcome
                 */
                CreateIAPUserOIDCConfigOutcome CreateIAPUserOIDCConfig(const Model::CreateIAPUserOIDCConfigRequest &request);
                void CreateIAPUserOIDCConfigAsync(const Model::CreateIAPUserOIDCConfigRequest& request, const CreateIAPUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIAPUserOIDCConfigOutcomeCallable CreateIAPUserOIDCConfigCallable(const Model::CreateIAPUserOIDCConfigRequest& request);

                /**
                 *查询登录会话时长
                 * @param req DescribeIAPLoginSessionDurationRequest
                 * @return DescribeIAPLoginSessionDurationOutcome
                 */
                DescribeIAPLoginSessionDurationOutcome DescribeIAPLoginSessionDuration(const Model::DescribeIAPLoginSessionDurationRequest &request);
                void DescribeIAPLoginSessionDurationAsync(const Model::DescribeIAPLoginSessionDurationRequest& request, const DescribeIAPLoginSessionDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIAPLoginSessionDurationOutcomeCallable DescribeIAPLoginSessionDurationCallable(const Model::DescribeIAPLoginSessionDurationRequest& request);

                /**
                 *查询用户OIDC配置
                 * @param req DescribeIAPUserOIDCConfigRequest
                 * @return DescribeIAPUserOIDCConfigOutcome
                 */
                DescribeIAPUserOIDCConfigOutcome DescribeIAPUserOIDCConfig(const Model::DescribeIAPUserOIDCConfigRequest &request);
                void DescribeIAPUserOIDCConfigAsync(const Model::DescribeIAPUserOIDCConfigRequest& request, const DescribeIAPUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIAPUserOIDCConfigOutcomeCallable DescribeIAPUserOIDCConfigCallable(const Model::DescribeIAPUserOIDCConfigRequest& request);

                /**
                 *禁用用户SSO
                 * @param req DisableIAPUserSSORequest
                 * @return DisableIAPUserSSOOutcome
                 */
                DisableIAPUserSSOOutcome DisableIAPUserSSO(const Model::DisableIAPUserSSORequest &request);
                void DisableIAPUserSSOAsync(const Model::DisableIAPUserSSORequest& request, const DisableIAPUserSSOAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableIAPUserSSOOutcomeCallable DisableIAPUserSSOCallable(const Model::DisableIAPUserSSORequest& request);

                /**
                 *修改登录会话时长
                 * @param req ModifyIAPLoginSessionDurationRequest
                 * @return ModifyIAPLoginSessionDurationOutcome
                 */
                ModifyIAPLoginSessionDurationOutcome ModifyIAPLoginSessionDuration(const Model::ModifyIAPLoginSessionDurationRequest &request);
                void ModifyIAPLoginSessionDurationAsync(const Model::ModifyIAPLoginSessionDurationRequest& request, const ModifyIAPLoginSessionDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIAPLoginSessionDurationOutcomeCallable ModifyIAPLoginSessionDurationCallable(const Model::ModifyIAPLoginSessionDurationRequest& request);

                /**
                 *修改用户OIDC配置
                 * @param req UpdateIAPUserOIDCConfigRequest
                 * @return UpdateIAPUserOIDCConfigOutcome
                 */
                UpdateIAPUserOIDCConfigOutcome UpdateIAPUserOIDCConfig(const Model::UpdateIAPUserOIDCConfigRequest &request);
                void UpdateIAPUserOIDCConfigAsync(const Model::UpdateIAPUserOIDCConfigRequest& request, const UpdateIAPUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateIAPUserOIDCConfigOutcomeCallable UpdateIAPUserOIDCConfigCallable(const Model::UpdateIAPUserOIDCConfigRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IAP_V20240713_IAPCLIENT_H_
