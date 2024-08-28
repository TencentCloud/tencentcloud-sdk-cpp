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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_CONTROLCENTERCLIENT_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_CONTROLCENTERCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/controlcenter/v20230110/model/BatchApplyAccountBaselinesRequest.h>
#include <tencentcloud/controlcenter/v20230110/model/BatchApplyAccountBaselinesResponse.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            class ControlcenterClient : public AbstractClient
            {
            public:
                ControlcenterClient(const Credential &credential, const std::string &region);
                ControlcenterClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchApplyAccountBaselinesResponse> BatchApplyAccountBaselinesOutcome;
                typedef std::future<BatchApplyAccountBaselinesOutcome> BatchApplyAccountBaselinesOutcomeCallable;
                typedef std::function<void(const ControlcenterClient*, const Model::BatchApplyAccountBaselinesRequest&, BatchApplyAccountBaselinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchApplyAccountBaselinesAsyncHandler;



                /**
                 *批量对存量账号应用基线
                 * @param req BatchApplyAccountBaselinesRequest
                 * @return BatchApplyAccountBaselinesOutcome
                 */
                BatchApplyAccountBaselinesOutcome BatchApplyAccountBaselines(const Model::BatchApplyAccountBaselinesRequest &request);
                void BatchApplyAccountBaselinesAsync(const Model::BatchApplyAccountBaselinesRequest& request, const BatchApplyAccountBaselinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchApplyAccountBaselinesOutcomeCallable BatchApplyAccountBaselinesCallable(const Model::BatchApplyAccountBaselinesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_CONTROLCENTERCLIENT_H_
