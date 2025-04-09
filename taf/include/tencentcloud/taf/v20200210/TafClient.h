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
#include <tencentcloud/taf/v20200210/model/ManagePortraitRiskRequest.h>
#include <tencentcloud/taf/v20200210/model/ManagePortraitRiskResponse.h>


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

                typedef Outcome<Core::Error, Model::ManagePortraitRiskResponse> ManagePortraitRiskOutcome;
                typedef std::future<ManagePortraitRiskOutcome> ManagePortraitRiskOutcomeCallable;
                typedef std::function<void(const TafClient*, const Model::ManagePortraitRiskRequest&, ManagePortraitRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManagePortraitRiskAsyncHandler;



                /**
                 *虚假流量识别
                 * @param req ManagePortraitRiskRequest
                 * @return ManagePortraitRiskOutcome
                 */
                ManagePortraitRiskOutcome ManagePortraitRisk(const Model::ManagePortraitRiskRequest &request);
                void ManagePortraitRiskAsync(const Model::ManagePortraitRiskRequest& request, const ManagePortraitRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManagePortraitRiskOutcomeCallable ManagePortraitRiskCallable(const Model::ManagePortraitRiskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_TAFCLIENT_H_
