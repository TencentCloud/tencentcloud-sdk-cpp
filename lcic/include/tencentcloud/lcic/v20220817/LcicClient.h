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

#ifndef TENCENTCLOUD_LCIC_V20220817_LCICCLIENT_H_
#define TENCENTCLOUD_LCIC_V20220817_LCICCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/lcic/v20220817/model/BindDocumentToRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/BindDocumentToRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/CreateDocumentRequest.h>
#include <tencentcloud/lcic/v20220817/model/CreateDocumentResponse.h>
#include <tencentcloud/lcic/v20220817/model/CreateRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/CreateRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/CreateSupervisorRequest.h>
#include <tencentcloud/lcic/v20220817/model/CreateSupervisorResponse.h>
#include <tencentcloud/lcic/v20220817/model/DeleteRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeAppDetailRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeAppDetailResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomStatisticsRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomStatisticsResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeUserRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeUserResponse.h>
#include <tencentcloud/lcic/v20220817/model/LoginOriginIdRequest.h>
#include <tencentcloud/lcic/v20220817/model/LoginOriginIdResponse.h>
#include <tencentcloud/lcic/v20220817/model/LoginUserRequest.h>
#include <tencentcloud/lcic/v20220817/model/LoginUserResponse.h>
#include <tencentcloud/lcic/v20220817/model/ModifyAppRequest.h>
#include <tencentcloud/lcic/v20220817/model/ModifyAppResponse.h>
#include <tencentcloud/lcic/v20220817/model/RegisterUserRequest.h>
#include <tencentcloud/lcic/v20220817/model/RegisterUserResponse.h>
#include <tencentcloud/lcic/v20220817/model/SetAppCustomContentRequest.h>
#include <tencentcloud/lcic/v20220817/model/SetAppCustomContentResponse.h>
#include <tencentcloud/lcic/v20220817/model/UnbindDocumentFromRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/UnbindDocumentFromRoomResponse.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            class LcicClient : public AbstractClient
            {
            public:
                LcicClient(const Credential &credential, const std::string &region);
                LcicClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindDocumentToRoomResponse> BindDocumentToRoomOutcome;
                typedef std::future<BindDocumentToRoomOutcome> BindDocumentToRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BindDocumentToRoomRequest&, BindDocumentToRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindDocumentToRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDocumentResponse> CreateDocumentOutcome;
                typedef std::future<CreateDocumentOutcome> CreateDocumentOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::CreateDocumentRequest&, CreateDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoomResponse> CreateRoomOutcome;
                typedef std::future<CreateRoomOutcome> CreateRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::CreateRoomRequest&, CreateRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSupervisorResponse> CreateSupervisorOutcome;
                typedef std::future<CreateSupervisorOutcome> CreateSupervisorOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::CreateSupervisorRequest&, CreateSupervisorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSupervisorAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoomResponse> DeleteRoomOutcome;
                typedef std::future<DeleteRoomOutcome> DeleteRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteRoomRequest&, DeleteRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppDetailResponse> DescribeAppDetailOutcome;
                typedef std::future<DescribeAppDetailOutcome> DescribeAppDetailOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeAppDetailRequest&, DescribeAppDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomResponse> DescribeRoomOutcome;
                typedef std::future<DescribeRoomOutcome> DescribeRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeRoomRequest&, DescribeRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomStatisticsResponse> DescribeRoomStatisticsOutcome;
                typedef std::future<DescribeRoomStatisticsOutcome> DescribeRoomStatisticsOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeRoomStatisticsRequest&, DescribeRoomStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserResponse> DescribeUserOutcome;
                typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeUserRequest&, DescribeUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserAsyncHandler;
                typedef Outcome<Core::Error, Model::LoginOriginIdResponse> LoginOriginIdOutcome;
                typedef std::future<LoginOriginIdOutcome> LoginOriginIdOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::LoginOriginIdRequest&, LoginOriginIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LoginOriginIdAsyncHandler;
                typedef Outcome<Core::Error, Model::LoginUserResponse> LoginUserOutcome;
                typedef std::future<LoginUserOutcome> LoginUserOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::LoginUserRequest&, LoginUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LoginUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAppResponse> ModifyAppOutcome;
                typedef std::future<ModifyAppOutcome> ModifyAppOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::ModifyAppRequest&, ModifyAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterUserResponse> RegisterUserOutcome;
                typedef std::future<RegisterUserOutcome> RegisterUserOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::RegisterUserRequest&, RegisterUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterUserAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAppCustomContentResponse> SetAppCustomContentOutcome;
                typedef std::future<SetAppCustomContentOutcome> SetAppCustomContentOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::SetAppCustomContentRequest&, SetAppCustomContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAppCustomContentAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindDocumentFromRoomResponse> UnbindDocumentFromRoomOutcome;
                typedef std::future<UnbindDocumentFromRoomOutcome> UnbindDocumentFromRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::UnbindDocumentFromRoomRequest&, UnbindDocumentFromRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindDocumentFromRoomAsyncHandler;



                /**
                 *绑定文档到房间
                 * @param req BindDocumentToRoomRequest
                 * @return BindDocumentToRoomOutcome
                 */
                BindDocumentToRoomOutcome BindDocumentToRoom(const Model::BindDocumentToRoomRequest &request);
                void BindDocumentToRoomAsync(const Model::BindDocumentToRoomRequest& request, const BindDocumentToRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindDocumentToRoomOutcomeCallable BindDocumentToRoomCallable(const Model::BindDocumentToRoomRequest& request);

                /**
                 *创建房间内可以使用的文档。
                 * @param req CreateDocumentRequest
                 * @return CreateDocumentOutcome
                 */
                CreateDocumentOutcome CreateDocument(const Model::CreateDocumentRequest &request);
                void CreateDocumentAsync(const Model::CreateDocumentRequest& request, const CreateDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDocumentOutcomeCallable CreateDocumentCallable(const Model::CreateDocumentRequest& request);

                /**
                 *创建房间
                 * @param req CreateRoomRequest
                 * @return CreateRoomOutcome
                 */
                CreateRoomOutcome CreateRoom(const Model::CreateRoomRequest &request);
                void CreateRoomAsync(const Model::CreateRoomRequest& request, const CreateRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoomOutcomeCallable CreateRoomCallable(const Model::CreateRoomRequest& request);

                /**
                 *创建巡课
                 * @param req CreateSupervisorRequest
                 * @return CreateSupervisorOutcome
                 */
                CreateSupervisorOutcome CreateSupervisor(const Model::CreateSupervisorRequest &request);
                void CreateSupervisorAsync(const Model::CreateSupervisorRequest& request, const CreateSupervisorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSupervisorOutcomeCallable CreateSupervisorCallable(const Model::CreateSupervisorRequest& request);

                /**
                 *删除房间
                 * @param req DeleteRoomRequest
                 * @return DeleteRoomOutcome
                 */
                DeleteRoomOutcome DeleteRoom(const Model::DeleteRoomRequest &request);
                void DeleteRoomAsync(const Model::DeleteRoomRequest& request, const DeleteRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoomOutcomeCallable DeleteRoomCallable(const Model::DeleteRoomRequest& request);

                /**
                 *获取应用详情
                 * @param req DescribeAppDetailRequest
                 * @return DescribeAppDetailOutcome
                 */
                DescribeAppDetailOutcome DescribeAppDetail(const Model::DescribeAppDetailRequest &request);
                void DescribeAppDetailAsync(const Model::DescribeAppDetailRequest& request, const DescribeAppDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppDetailOutcomeCallable DescribeAppDetailCallable(const Model::DescribeAppDetailRequest& request);

                /**
                 *获取房间信息
                 * @param req DescribeRoomRequest
                 * @return DescribeRoomOutcome
                 */
                DescribeRoomOutcome DescribeRoom(const Model::DescribeRoomRequest &request);
                void DescribeRoomAsync(const Model::DescribeRoomRequest& request, const DescribeRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomOutcomeCallable DescribeRoomCallable(const Model::DescribeRoomRequest& request);

                /**
                 *获取房间统计信息，仅可在房间结束后调用。
                 * @param req DescribeRoomStatisticsRequest
                 * @return DescribeRoomStatisticsOutcome
                 */
                DescribeRoomStatisticsOutcome DescribeRoomStatistics(const Model::DescribeRoomStatisticsRequest &request);
                void DescribeRoomStatisticsAsync(const Model::DescribeRoomStatisticsRequest& request, const DescribeRoomStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomStatisticsOutcomeCallable DescribeRoomStatisticsCallable(const Model::DescribeRoomStatisticsRequest& request);

                /**
                 *获取用户信息
                 * @param req DescribeUserRequest
                 * @return DescribeUserOutcome
                 */
                DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest &request);
                void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request);

                /**
                 *使用源账号登录，源账号为注册时填入的originId
                 * @param req LoginOriginIdRequest
                 * @return LoginOriginIdOutcome
                 */
                LoginOriginIdOutcome LoginOriginId(const Model::LoginOriginIdRequest &request);
                void LoginOriginIdAsync(const Model::LoginOriginIdRequest& request, const LoginOriginIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LoginOriginIdOutcomeCallable LoginOriginIdCallable(const Model::LoginOriginIdRequest& request);

                /**
                 *登录
                 * @param req LoginUserRequest
                 * @return LoginUserOutcome
                 */
                LoginUserOutcome LoginUser(const Model::LoginUserRequest &request);
                void LoginUserAsync(const Model::LoginUserRequest& request, const LoginUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LoginUserOutcomeCallable LoginUserCallable(const Model::LoginUserRequest& request);

                /**
                 *修改应用
                 * @param req ModifyAppRequest
                 * @return ModifyAppOutcome
                 */
                ModifyAppOutcome ModifyApp(const Model::ModifyAppRequest &request);
                void ModifyAppAsync(const Model::ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAppOutcomeCallable ModifyAppCallable(const Model::ModifyAppRequest& request);

                /**
                 *注册用户
                 * @param req RegisterUserRequest
                 * @return RegisterUserOutcome
                 */
                RegisterUserOutcome RegisterUser(const Model::RegisterUserRequest &request);
                void RegisterUserAsync(const Model::RegisterUserRequest& request, const RegisterUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterUserOutcomeCallable RegisterUserCallable(const Model::RegisterUserRequest& request);

                /**
                 *设置应用的自定义内容，包括应用图标，自定义的代码等。如果已存在，则为更新。更新js、css内容后，要生效也需要调用该接口
                 * @param req SetAppCustomContentRequest
                 * @return SetAppCustomContentOutcome
                 */
                SetAppCustomContentOutcome SetAppCustomContent(const Model::SetAppCustomContentRequest &request);
                void SetAppCustomContentAsync(const Model::SetAppCustomContentRequest& request, const SetAppCustomContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAppCustomContentOutcomeCallable SetAppCustomContentCallable(const Model::SetAppCustomContentRequest& request);

                /**
                 *文档从房间解绑
                 * @param req UnbindDocumentFromRoomRequest
                 * @return UnbindDocumentFromRoomOutcome
                 */
                UnbindDocumentFromRoomOutcome UnbindDocumentFromRoom(const Model::UnbindDocumentFromRoomRequest &request);
                void UnbindDocumentFromRoomAsync(const Model::UnbindDocumentFromRoomRequest& request, const UnbindDocumentFromRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindDocumentFromRoomOutcomeCallable UnbindDocumentFromRoomCallable(const Model::UnbindDocumentFromRoomRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_LCICCLIENT_H_
