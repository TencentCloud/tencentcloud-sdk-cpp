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
#include <tencentcloud/evt/v20250217/model/DeleteRoleUserRequest.h>
#include <tencentcloud/evt/v20250217/model/DeleteRoleUserResponse.h>
#include <tencentcloud/evt/v20250217/model/PutEventRequest.h>
#include <tencentcloud/evt/v20250217/model/PutEventResponse.h>
#include <tencentcloud/evt/v20250217/model/PutMessageRequest.h>
#include <tencentcloud/evt/v20250217/model/PutMessageResponse.h>


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
                typedef Outcome<Core::Error, Model::DeleteRoleUserResponse> DeleteRoleUserOutcome;
                typedef std::future<DeleteRoleUserOutcome> DeleteRoleUserOutcomeCallable;
                typedef std::function<void(const EvtClient*, const Model::DeleteRoleUserRequest&, DeleteRoleUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoleUserAsyncHandler;
                typedef Outcome<Core::Error, Model::PutEventResponse> PutEventOutcome;
                typedef std::future<PutEventOutcome> PutEventOutcomeCallable;
                typedef std::function<void(const EvtClient*, const Model::PutEventRequest&, PutEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutEventAsyncHandler;
                typedef Outcome<Core::Error, Model::PutMessageResponse> PutMessageOutcome;
                typedef std::future<PutMessageOutcome> PutMessageOutcomeCallable;
                typedef std::function<void(const EvtClient*, const Model::PutMessageRequest&, PutMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutMessageAsyncHandler;



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

                /**
                 *删除自定义用户
                 * @param req DeleteRoleUserRequest
                 * @return DeleteRoleUserOutcome
                 */
                DeleteRoleUserOutcome DeleteRoleUser(const Model::DeleteRoleUserRequest &request);
                void DeleteRoleUserAsync(const Model::DeleteRoleUserRequest& request, const DeleteRoleUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoleUserOutcomeCallable DeleteRoleUserCallable(const Model::DeleteRoleUserRequest& request);

                /**
                 *推送事件数据
                 * @param req PutEventRequest
                 * @return PutEventOutcome
                 */
                PutEventOutcome PutEvent(const Model::PutEventRequest &request);
                void PutEventAsync(const Model::PutEventRequest& request, const PutEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutEventOutcomeCallable PutEventCallable(const Model::PutEventRequest& request);

                /**
                 *推送事件数据
                 * @param req PutMessageRequest
                 * @return PutMessageOutcome
                 */
                PutMessageOutcome PutMessage(const Model::PutMessageRequest &request);
                void PutMessageAsync(const Model::PutMessageRequest& request, const PutMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutMessageOutcomeCallable PutMessageCallable(const Model::PutMessageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_EVT_V20250217_EVTCLIENT_H_
