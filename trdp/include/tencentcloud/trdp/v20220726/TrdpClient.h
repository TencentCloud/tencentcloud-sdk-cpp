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

#ifndef TENCENTCLOUD_TRDP_V20220726_TRDPCLIENT_H_
#define TENCENTCLOUD_TRDP_V20220726_TRDPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/trdp/v20220726/model/EvaluateUserRiskRequest.h>
#include <tencentcloud/trdp/v20220726/model/EvaluateUserRiskResponse.h>


namespace TencentCloud
{
    namespace Trdp
    {
        namespace V20220726
        {
            class TrdpClient : public AbstractClient
            {
            public:
                TrdpClient(const Credential &credential, const std::string &region);
                TrdpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::EvaluateUserRiskResponse> EvaluateUserRiskOutcome;
                typedef std::future<EvaluateUserRiskOutcome> EvaluateUserRiskOutcomeCallable;
                typedef std::function<void(const TrdpClient*, const Model::EvaluateUserRiskRequest&, EvaluateUserRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EvaluateUserRiskAsyncHandler;



                /**
                 *用户风险质量接口
                 * @param req EvaluateUserRiskRequest
                 * @return EvaluateUserRiskOutcome
                 */
                EvaluateUserRiskOutcome EvaluateUserRisk(const Model::EvaluateUserRiskRequest &request);
                void EvaluateUserRiskAsync(const Model::EvaluateUserRiskRequest& request, const EvaluateUserRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EvaluateUserRiskOutcomeCallable EvaluateUserRiskCallable(const Model::EvaluateUserRiskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TRDP_V20220726_TRDPCLIENT_H_
