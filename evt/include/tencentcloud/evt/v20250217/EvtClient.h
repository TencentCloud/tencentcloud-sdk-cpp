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

#ifndef TENCENTCLOUD_EVT_V20250217_EVTCLIENT_H_
#define TENCENTCLOUD_EVT_V20250217_EVTCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/evt/v20250217/model/CompleteApprovalRequest.h>
#include <tencentcloud/evt/v20250217/model/CompleteApprovalResponse.h>
#include <tencentcloud/evt/v20250217/model/CreateRoleUserRequest.h>
#include <tencentcloud/evt/v20250217/model/CreateRoleUserResponse.h>


namespace TencentCloud
{
    namespace Evt
    {
        namespace V20250217
        {
            class EvtClient : public AbstractClient
            {
            public:
                EvtClient(const Credential &credential, const std::string &region);
                EvtClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CompleteApprovalResponse> CompleteApprovalOutcome;
                typedef std::future<CompleteApprovalOutcome> CompleteApprovalOutcomeCallable;
                typedef std::function<void(const EvtClient*, const Model::CompleteApprovalRequest&, CompleteApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoleUserResponse> CreateRoleUserOutcome;
                typedef std::future<CreateRoleUserOutcome> CreateRoleUserOutcomeCallable;
                typedef std::function<void(const EvtClient*, const Model::CreateRoleUserRequest&, CreateRoleUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleUserAsyncHandler;



                /**
                 *执行审批
                 * @param req CompleteApprovalRequest
                 * @return CompleteApprovalOutcome
                 */
                CompleteApprovalOutcome CompleteApproval(const Model::CompleteApprovalRequest &request);
                void CompleteApprovalAsync(const Model::CompleteApprovalRequest& request, const CompleteApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompleteApprovalOutcomeCallable CompleteApprovalCallable(const Model::CompleteApprovalRequest& request);

                /**
                 *创建人员
                 * @param req CreateRoleUserRequest
                 * @return CreateRoleUserOutcome
                 */
                CreateRoleUserOutcome CreateRoleUser(const Model::CreateRoleUserRequest &request);
                void CreateRoleUserAsync(const Model::CreateRoleUserRequest& request, const CreateRoleUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoleUserOutcomeCallable CreateRoleUserCallable(const Model::CreateRoleUserRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_EVT_V20250217_EVTCLIENT_H_
