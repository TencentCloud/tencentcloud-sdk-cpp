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

#ifndef TENCENTCLOUD_HCM_V20181106_HCMCLIENT_H_
#define TENCENTCLOUD_HCM_V20181106_HCMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/hcm/v20181106/model/EvaluationRequest.h>
#include <tencentcloud/hcm/v20181106/model/EvaluationResponse.h>


namespace TencentCloud
{
    namespace Hcm
    {
        namespace V20181106
        {
            class HcmClient : public AbstractClient
            {
            public:
                HcmClient(const Credential &credential, const std::string &region);
                HcmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::EvaluationResponse> EvaluationOutcome;
                typedef std::future<EvaluationOutcome> EvaluationOutcomeCallable;
                typedef std::function<void(const HcmClient*, const Model::EvaluationRequest&, EvaluationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EvaluationAsyncHandler;



                /**
                 *速算题目批改接口，根据用户上传的图片或图片的URL识别图片中的数学算式，进而给出算式的正确性评估。
                 * @param req EvaluationRequest
                 * @return EvaluationOutcome
                 */
                EvaluationOutcome Evaluation(const Model::EvaluationRequest &request);
                void EvaluationAsync(const Model::EvaluationRequest& request, const EvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EvaluationOutcomeCallable EvaluationCallable(const Model::EvaluationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_HCM_V20181106_HCMCLIENT_H_
