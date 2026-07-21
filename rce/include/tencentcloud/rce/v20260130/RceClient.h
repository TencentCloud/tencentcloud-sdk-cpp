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

#ifndef TENCENTCLOUD_RCE_V20260130_RCECLIENT_H_
#define TENCENTCLOUD_RCE_V20260130_RCECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/rce/v20260130/model/AssessDeviceRiskPremiumProRequest.h>
#include <tencentcloud/rce/v20260130/model/AssessDeviceRiskPremiumProResponse.h>
#include <tencentcloud/rce/v20260130/model/AssessDeviceRiskProRequest.h>
#include <tencentcloud/rce/v20260130/model/AssessDeviceRiskProResponse.h>
#include <tencentcloud/rce/v20260130/model/AssessEnvironmentRiskRequest.h>
#include <tencentcloud/rce/v20260130/model/AssessEnvironmentRiskResponse.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            class RceClient : public AbstractClient
            {
            public:
                RceClient(const Credential &credential, const std::string &region);
                RceClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssessDeviceRiskPremiumProResponse> AssessDeviceRiskPremiumProOutcome;
                typedef std::future<AssessDeviceRiskPremiumProOutcome> AssessDeviceRiskPremiumProOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::AssessDeviceRiskPremiumProRequest&, AssessDeviceRiskPremiumProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssessDeviceRiskPremiumProAsyncHandler;
                typedef Outcome<Core::Error, Model::AssessDeviceRiskProResponse> AssessDeviceRiskProOutcome;
                typedef std::future<AssessDeviceRiskProOutcome> AssessDeviceRiskProOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::AssessDeviceRiskProRequest&, AssessDeviceRiskProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssessDeviceRiskProAsyncHandler;
                typedef Outcome<Core::Error, Model::AssessEnvironmentRiskResponse> AssessEnvironmentRiskOutcome;
                typedef std::future<AssessEnvironmentRiskOutcome> AssessEnvironmentRiskOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::AssessEnvironmentRiskRequest&, AssessEnvironmentRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssessEnvironmentRiskAsyncHandler;



                /**
                 *设备风险评估-高级版
                 * @param req AssessDeviceRiskPremiumProRequest
                 * @return AssessDeviceRiskPremiumProOutcome
                 */
                AssessDeviceRiskPremiumProOutcome AssessDeviceRiskPremiumPro(const Model::AssessDeviceRiskPremiumProRequest &request);
                void AssessDeviceRiskPremiumProAsync(const Model::AssessDeviceRiskPremiumProRequest& request, const AssessDeviceRiskPremiumProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssessDeviceRiskPremiumProOutcomeCallable AssessDeviceRiskPremiumProCallable(const Model::AssessDeviceRiskPremiumProRequest& request);

                /**
                 *设备风险评估-基础版
                 * @param req AssessDeviceRiskProRequest
                 * @return AssessDeviceRiskProOutcome
                 */
                AssessDeviceRiskProOutcome AssessDeviceRiskPro(const Model::AssessDeviceRiskProRequest &request);
                void AssessDeviceRiskProAsync(const Model::AssessDeviceRiskProRequest& request, const AssessDeviceRiskProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssessDeviceRiskProOutcomeCallable AssessDeviceRiskProCallable(const Model::AssessDeviceRiskProRequest& request);

                /**
                 *环境风险评估
                 * @param req AssessEnvironmentRiskRequest
                 * @return AssessEnvironmentRiskOutcome
                 */
                AssessEnvironmentRiskOutcome AssessEnvironmentRisk(const Model::AssessEnvironmentRiskRequest &request);
                void AssessEnvironmentRiskAsync(const Model::AssessEnvironmentRiskRequest& request, const AssessEnvironmentRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssessEnvironmentRiskOutcomeCallable AssessEnvironmentRiskCallable(const Model::AssessEnvironmentRiskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_RCECLIENT_H_
