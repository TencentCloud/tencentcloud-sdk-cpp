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
#include <tencentcloud/rce/v20260130/model/AssessRiskRequest.h>
#include <tencentcloud/rce/v20260130/model/AssessRiskResponse.h>
#include <tencentcloud/rce/v20260130/model/ReportEventRequest.h>
#include <tencentcloud/rce/v20260130/model/ReportEventResponse.h>


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
                typedef Outcome<Core::Error, Model::AssessRiskResponse> AssessRiskOutcome;
                typedef std::future<AssessRiskOutcome> AssessRiskOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::AssessRiskRequest&, AssessRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssessRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportEventResponse> ReportEventOutcome;
                typedef std::future<ReportEventOutcome> ReportEventOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::ReportEventRequest&, ReportEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportEventAsyncHandler;



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

                /**
                 *事件风险评估。用于实时获取事件的风险信息，您可以在业务的关键事件中获取到我们根据设备风险、环境风险、账号风险、行为风险以及历史上报的事件信息评估出来的风险决策结果、风险评分和风险标签等。
                 * @param req AssessRiskRequest
                 * @return AssessRiskOutcome
                 */
                AssessRiskOutcome AssessRisk(const Model::AssessRiskRequest &request);
                void AssessRiskAsync(const Model::AssessRiskRequest& request, const AssessRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssessRiskOutcomeCallable AssessRiskCallable(const Model::AssessRiskRequest& request);

                /**
                 *事件信息上报。用于上报您业务中无需实时决策的事件，我们会通过引擎计算、机器学习挖掘风险特征用于实时事件风险评估。
                 * @param req ReportEventRequest
                 * @return ReportEventOutcome
                 */
                ReportEventOutcome ReportEvent(const Model::ReportEventRequest &request);
                void ReportEventAsync(const Model::ReportEventRequest& request, const ReportEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportEventOutcomeCallable ReportEventCallable(const Model::ReportEventRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_RCECLIENT_H_
