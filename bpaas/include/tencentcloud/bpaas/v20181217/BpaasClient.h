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

#ifndef TENCENTCLOUD_BPAAS_V20181217_BPAASCLIENT_H_
#define TENCENTCLOUD_BPAAS_V20181217_BPAASCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bpaas/v20181217/model/GetBpaasApproveDetailRequest.h>
#include <tencentcloud/bpaas/v20181217/model/GetBpaasApproveDetailResponse.h>
#include <tencentcloud/bpaas/v20181217/model/OutApproveBpaasApplicationRequest.h>
#include <tencentcloud/bpaas/v20181217/model/OutApproveBpaasApplicationResponse.h>


namespace TencentCloud
{
    namespace Bpaas
    {
        namespace V20181217
        {
            class BpaasClient : public AbstractClient
            {
            public:
                BpaasClient(const Credential &credential, const std::string &region);
                BpaasClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::GetBpaasApproveDetailResponse> GetBpaasApproveDetailOutcome;
                typedef std::future<GetBpaasApproveDetailOutcome> GetBpaasApproveDetailOutcomeCallable;
                typedef std::function<void(const BpaasClient*, const Model::GetBpaasApproveDetailRequest&, GetBpaasApproveDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetBpaasApproveDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::OutApproveBpaasApplicationResponse> OutApproveBpaasApplicationOutcome;
                typedef std::future<OutApproveBpaasApplicationOutcome> OutApproveBpaasApplicationOutcomeCallable;
                typedef std::function<void(const BpaasClient*, const Model::OutApproveBpaasApplicationRequest&, OutApproveBpaasApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OutApproveBpaasApplicationAsyncHandler;



                /**
                 *查看审批详情
                 * @param req GetBpaasApproveDetailRequest
                 * @return GetBpaasApproveDetailOutcome
                 */
                GetBpaasApproveDetailOutcome GetBpaasApproveDetail(const Model::GetBpaasApproveDetailRequest &request);
                void GetBpaasApproveDetailAsync(const Model::GetBpaasApproveDetailRequest& request, const GetBpaasApproveDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetBpaasApproveDetailOutcomeCallable GetBpaasApproveDetailCallable(const Model::GetBpaasApproveDetailRequest& request);

                /**
                 *外部审批申请单
                 * @param req OutApproveBpaasApplicationRequest
                 * @return OutApproveBpaasApplicationOutcome
                 */
                OutApproveBpaasApplicationOutcome OutApproveBpaasApplication(const Model::OutApproveBpaasApplicationRequest &request);
                void OutApproveBpaasApplicationAsync(const Model::OutApproveBpaasApplicationRequest& request, const OutApproveBpaasApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OutApproveBpaasApplicationOutcomeCallable OutApproveBpaasApplicationCallable(const Model::OutApproveBpaasApplicationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BPAAS_V20181217_BPAASCLIENT_H_
