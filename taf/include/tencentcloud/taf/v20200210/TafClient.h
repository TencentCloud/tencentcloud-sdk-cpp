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

#ifndef TENCENTCLOUD_TAF_V20200210_TAFCLIENT_H_
#define TENCENTCLOUD_TAF_V20200210_TAFCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/taf/v20200210/model/DetectFraudKOLRequest.h>
#include <tencentcloud/taf/v20200210/model/DetectFraudKOLResponse.h>
#include <tencentcloud/taf/v20200210/model/EnhanceTaDegreeRequest.h>
#include <tencentcloud/taf/v20200210/model/EnhanceTaDegreeResponse.h>
#include <tencentcloud/taf/v20200210/model/RecognizeCustomizedAudienceRequest.h>
#include <tencentcloud/taf/v20200210/model/RecognizeCustomizedAudienceResponse.h>
#include <tencentcloud/taf/v20200210/model/RecognizeEffectiveFlowRequest.h>
#include <tencentcloud/taf/v20200210/model/RecognizeEffectiveFlowResponse.h>
#include <tencentcloud/taf/v20200210/model/RecognizePreciseTargetAudienceRequest.h>
#include <tencentcloud/taf/v20200210/model/RecognizePreciseTargetAudienceResponse.h>
#include <tencentcloud/taf/v20200210/model/RecognizeTargetAudienceRequest.h>
#include <tencentcloud/taf/v20200210/model/RecognizeTargetAudienceResponse.h>
#include <tencentcloud/taf/v20200210/model/SendTrafficSecuritySmsMessageRequest.h>
#include <tencentcloud/taf/v20200210/model/SendTrafficSecuritySmsMessageResponse.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            class TafClient : public AbstractClient
            {
            public:
                TafClient(const Credential &credential, const std::string &region);
                TafClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DetectFraudKOLResponse> DetectFraudKOLOutcome;
                typedef std::future<DetectFraudKOLOutcome> DetectFraudKOLOutcomeCallable;
                typedef std::function<void(const TafClient*, const Model::DetectFraudKOLRequest&, DetectFraudKOLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectFraudKOLAsyncHandler;
                typedef Outcome<Core::Error, Model::EnhanceTaDegreeResponse> EnhanceTaDegreeOutcome;
                typedef std::future<EnhanceTaDegreeOutcome> EnhanceTaDegreeOutcomeCallable;
                typedef std::function<void(const TafClient*, const Model::EnhanceTaDegreeRequest&, EnhanceTaDegreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnhanceTaDegreeAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeCustomizedAudienceResponse> RecognizeCustomizedAudienceOutcome;
                typedef std::future<RecognizeCustomizedAudienceOutcome> RecognizeCustomizedAudienceOutcomeCallable;
                typedef std::function<void(const TafClient*, const Model::RecognizeCustomizedAudienceRequest&, RecognizeCustomizedAudienceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeCustomizedAudienceAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeEffectiveFlowResponse> RecognizeEffectiveFlowOutcome;
                typedef std::future<RecognizeEffectiveFlowOutcome> RecognizeEffectiveFlowOutcomeCallable;
                typedef std::function<void(const TafClient*, const Model::RecognizeEffectiveFlowRequest&, RecognizeEffectiveFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeEffectiveFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizePreciseTargetAudienceResponse> RecognizePreciseTargetAudienceOutcome;
                typedef std::future<RecognizePreciseTargetAudienceOutcome> RecognizePreciseTargetAudienceOutcomeCallable;
                typedef std::function<void(const TafClient*, const Model::RecognizePreciseTargetAudienceRequest&, RecognizePreciseTargetAudienceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizePreciseTargetAudienceAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeTargetAudienceResponse> RecognizeTargetAudienceOutcome;
                typedef std::future<RecognizeTargetAudienceOutcome> RecognizeTargetAudienceOutcomeCallable;
                typedef std::function<void(const TafClient*, const Model::RecognizeTargetAudienceRequest&, RecognizeTargetAudienceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeTargetAudienceAsyncHandler;
                typedef Outcome<Core::Error, Model::SendTrafficSecuritySmsMessageResponse> SendTrafficSecuritySmsMessageOutcome;
                typedef std::future<SendTrafficSecuritySmsMessageOutcome> SendTrafficSecuritySmsMessageOutcomeCallable;
                typedef std::function<void(const TafClient*, const Model::SendTrafficSecuritySmsMessageRequest&, SendTrafficSecuritySmsMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendTrafficSecuritySmsMessageAsyncHandler;



                /**
                 *DetectFraudKOL
                 * @param req DetectFraudKOLRequest
                 * @return DetectFraudKOLOutcome
                 */
                DetectFraudKOLOutcome DetectFraudKOL(const Model::DetectFraudKOLRequest &request);
                void DetectFraudKOLAsync(const Model::DetectFraudKOLRequest& request, const DetectFraudKOLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectFraudKOLOutcomeCallable DetectFraudKOLCallable(const Model::DetectFraudKOLRequest& request);

                /**
                 *流量反欺诈-虚假TA识别
                 * @param req EnhanceTaDegreeRequest
                 * @return EnhanceTaDegreeOutcome
                 */
                EnhanceTaDegreeOutcome EnhanceTaDegree(const Model::EnhanceTaDegreeRequest &request);
                void EnhanceTaDegreeAsync(const Model::EnhanceTaDegreeRequest& request, const EnhanceTaDegreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnhanceTaDegreeOutcomeCallable EnhanceTaDegreeCallable(const Model::EnhanceTaDegreeRequest& request);

                /**
                 *流量反欺诈-流量验准定制版
                 * @param req RecognizeCustomizedAudienceRequest
                 * @return RecognizeCustomizedAudienceOutcome
                 */
                RecognizeCustomizedAudienceOutcome RecognizeCustomizedAudience(const Model::RecognizeCustomizedAudienceRequest &request);
                void RecognizeCustomizedAudienceAsync(const Model::RecognizeCustomizedAudienceRequest& request, const RecognizeCustomizedAudienceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeCustomizedAudienceOutcomeCallable RecognizeCustomizedAudienceCallable(const Model::RecognizeCustomizedAudienceRequest& request);

                /**
                 *该服务已不再对外提供能力

筛选敏感易骚扰人群
                 * @param req RecognizeEffectiveFlowRequest
                 * @return RecognizeEffectiveFlowOutcome
                 */
                RecognizeEffectiveFlowOutcome RecognizeEffectiveFlow(const Model::RecognizeEffectiveFlowRequest &request);
                void RecognizeEffectiveFlowAsync(const Model::RecognizeEffectiveFlowRequest& request, const RecognizeEffectiveFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeEffectiveFlowOutcomeCallable RecognizeEffectiveFlowCallable(const Model::RecognizeEffectiveFlowRequest& request);

                /**
                 *流量反欺诈-流量验准高级版
                 * @param req RecognizePreciseTargetAudienceRequest
                 * @return RecognizePreciseTargetAudienceOutcome
                 */
                RecognizePreciseTargetAudienceOutcome RecognizePreciseTargetAudience(const Model::RecognizePreciseTargetAudienceRequest &request);
                void RecognizePreciseTargetAudienceAsync(const Model::RecognizePreciseTargetAudienceRequest& request, const RecognizePreciseTargetAudienceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizePreciseTargetAudienceOutcomeCallable RecognizePreciseTargetAudienceCallable(const Model::RecognizePreciseTargetAudienceRequest& request);

                /**
                 *流量反欺诈-流量验准
                 * @param req RecognizeTargetAudienceRequest
                 * @return RecognizeTargetAudienceOutcome
                 */
                RecognizeTargetAudienceOutcome RecognizeTargetAudience(const Model::RecognizeTargetAudienceRequest &request);
                void RecognizeTargetAudienceAsync(const Model::RecognizeTargetAudienceRequest& request, const RecognizeTargetAudienceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeTargetAudienceOutcomeCallable RecognizeTargetAudienceCallable(const Model::RecognizeTargetAudienceRequest& request);

                /**
                 *SendTrafficSecuritySmsMessage
                 * @param req SendTrafficSecuritySmsMessageRequest
                 * @return SendTrafficSecuritySmsMessageOutcome
                 */
                SendTrafficSecuritySmsMessageOutcome SendTrafficSecuritySmsMessage(const Model::SendTrafficSecuritySmsMessageRequest &request);
                void SendTrafficSecuritySmsMessageAsync(const Model::SendTrafficSecuritySmsMessageRequest& request, const SendTrafficSecuritySmsMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendTrafficSecuritySmsMessageOutcomeCallable SendTrafficSecuritySmsMessageCallable(const Model::SendTrafficSecuritySmsMessageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_TAFCLIENT_H_
