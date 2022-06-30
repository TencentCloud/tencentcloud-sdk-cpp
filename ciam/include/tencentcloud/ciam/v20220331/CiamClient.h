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

#ifndef TENCENTCLOUD_CIAM_V20220331_CIAMCLIENT_H_
#define TENCENTCLOUD_CIAM_V20220331_CIAMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ciam/v20220331/model/CreateApiImportUserJobRequest.h>
#include <tencentcloud/ciam/v20220331/model/CreateApiImportUserJobResponse.h>
#include <tencentcloud/ciam/v20220331/model/CreateFileExportUserJobRequest.h>
#include <tencentcloud/ciam/v20220331/model/CreateFileExportUserJobResponse.h>
#include <tencentcloud/ciam/v20220331/model/CreateUserRequest.h>
#include <tencentcloud/ciam/v20220331/model/CreateUserResponse.h>
#include <tencentcloud/ciam/v20220331/model/DeleteUsersRequest.h>
#include <tencentcloud/ciam/v20220331/model/DeleteUsersResponse.h>
#include <tencentcloud/ciam/v20220331/model/DescribeUserByIdRequest.h>
#include <tencentcloud/ciam/v20220331/model/DescribeUserByIdResponse.h>
#include <tencentcloud/ciam/v20220331/model/LinkAccountRequest.h>
#include <tencentcloud/ciam/v20220331/model/LinkAccountResponse.h>
#include <tencentcloud/ciam/v20220331/model/ListJobsRequest.h>
#include <tencentcloud/ciam/v20220331/model/ListJobsResponse.h>
#include <tencentcloud/ciam/v20220331/model/ListLogMessageByConditionRequest.h>
#include <tencentcloud/ciam/v20220331/model/ListLogMessageByConditionResponse.h>
#include <tencentcloud/ciam/v20220331/model/ListUserRequest.h>
#include <tencentcloud/ciam/v20220331/model/ListUserResponse.h>
#include <tencentcloud/ciam/v20220331/model/ListUserByPropertyRequest.h>
#include <tencentcloud/ciam/v20220331/model/ListUserByPropertyResponse.h>
#include <tencentcloud/ciam/v20220331/model/ResetPasswordRequest.h>
#include <tencentcloud/ciam/v20220331/model/ResetPasswordResponse.h>
#include <tencentcloud/ciam/v20220331/model/SetPasswordRequest.h>
#include <tencentcloud/ciam/v20220331/model/SetPasswordResponse.h>
#include <tencentcloud/ciam/v20220331/model/UpdateUserRequest.h>
#include <tencentcloud/ciam/v20220331/model/UpdateUserResponse.h>
#include <tencentcloud/ciam/v20220331/model/UpdateUserStatusRequest.h>
#include <tencentcloud/ciam/v20220331/model/UpdateUserStatusResponse.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            class CiamClient : public AbstractClient
            {
            public:
                CiamClient(const Credential &credential, const std::string &region);
                CiamClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateApiImportUserJobResponse> CreateApiImportUserJobOutcome;
                typedef std::future<CreateApiImportUserJobOutcome> CreateApiImportUserJobOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::CreateApiImportUserJobRequest&, CreateApiImportUserJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApiImportUserJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFileExportUserJobResponse> CreateFileExportUserJobOutcome;
                typedef std::future<CreateFileExportUserJobOutcome> CreateFileExportUserJobOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::CreateFileExportUserJobRequest&, CreateFileExportUserJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileExportUserJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUsersResponse> DeleteUsersOutcome;
                typedef std::future<DeleteUsersOutcome> DeleteUsersOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::DeleteUsersRequest&, DeleteUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserByIdResponse> DescribeUserByIdOutcome;
                typedef std::future<DescribeUserByIdOutcome> DescribeUserByIdOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::DescribeUserByIdRequest&, DescribeUserByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::LinkAccountResponse> LinkAccountOutcome;
                typedef std::future<LinkAccountOutcome> LinkAccountOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::LinkAccountRequest&, LinkAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LinkAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::ListJobsResponse> ListJobsOutcome;
                typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::ListJobsRequest&, ListJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListLogMessageByConditionResponse> ListLogMessageByConditionOutcome;
                typedef std::future<ListLogMessageByConditionOutcome> ListLogMessageByConditionOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::ListLogMessageByConditionRequest&, ListLogMessageByConditionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListLogMessageByConditionAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUserResponse> ListUserOutcome;
                typedef std::future<ListUserOutcome> ListUserOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::ListUserRequest&, ListUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUserByPropertyResponse> ListUserByPropertyOutcome;
                typedef std::future<ListUserByPropertyOutcome> ListUserByPropertyOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::ListUserByPropertyRequest&, ListUserByPropertyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUserByPropertyAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetPasswordResponse> ResetPasswordOutcome;
                typedef std::future<ResetPasswordOutcome> ResetPasswordOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::ResetPasswordRequest&, ResetPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::SetPasswordResponse> SetPasswordOutcome;
                typedef std::future<SetPasswordOutcome> SetPasswordOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::SetPasswordRequest&, SetPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserResponse> UpdateUserOutcome;
                typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::UpdateUserRequest&, UpdateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateUserStatusResponse> UpdateUserStatusOutcome;
                typedef std::future<UpdateUserStatusOutcome> UpdateUserStatusOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::UpdateUserStatusRequest&, UpdateUserStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserStatusAsyncHandler;



                /**
                 *新建接口导入用户任务
                 * @param req CreateApiImportUserJobRequest
                 * @return CreateApiImportUserJobOutcome
                 */
                CreateApiImportUserJobOutcome CreateApiImportUserJob(const Model::CreateApiImportUserJobRequest &request);
                void CreateApiImportUserJobAsync(const Model::CreateApiImportUserJobRequest& request, const CreateApiImportUserJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApiImportUserJobOutcomeCallable CreateApiImportUserJobCallable(const Model::CreateApiImportUserJobRequest& request);

                /**
                 *新建文件导出用户任务
                 * @param req CreateFileExportUserJobRequest
                 * @return CreateFileExportUserJobOutcome
                 */
                CreateFileExportUserJobOutcome CreateFileExportUserJob(const Model::CreateFileExportUserJobRequest &request);
                void CreateFileExportUserJobAsync(const Model::CreateFileExportUserJobRequest& request, const CreateFileExportUserJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFileExportUserJobOutcomeCallable CreateFileExportUserJobCallable(const Model::CreateFileExportUserJobRequest& request);

                /**
                 *创建用户
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *批量删除用户
                 * @param req DeleteUsersRequest
                 * @return DeleteUsersOutcome
                 */
                DeleteUsersOutcome DeleteUsers(const Model::DeleteUsersRequest &request);
                void DeleteUsersAsync(const Model::DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUsersOutcomeCallable DeleteUsersCallable(const Model::DeleteUsersRequest& request);

                /**
                 *根据ID查询用户信息
                 * @param req DescribeUserByIdRequest
                 * @return DescribeUserByIdOutcome
                 */
                DescribeUserByIdOutcome DescribeUserById(const Model::DescribeUserByIdRequest &request);
                void DescribeUserByIdAsync(const Model::DescribeUserByIdRequest& request, const DescribeUserByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserByIdOutcomeCallable DescribeUserByIdCallable(const Model::DescribeUserByIdRequest& request);

                /**
                 *账号融合
                 * @param req LinkAccountRequest
                 * @return LinkAccountOutcome
                 */
                LinkAccountOutcome LinkAccount(const Model::LinkAccountRequest &request);
                void LinkAccountAsync(const Model::LinkAccountRequest& request, const LinkAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LinkAccountOutcomeCallable LinkAccountCallable(const Model::LinkAccountRequest& request);

                /**
                 *查询任务详情
                 * @param req ListJobsRequest
                 * @return ListJobsOutcome
                 */
                ListJobsOutcome ListJobs(const Model::ListJobsRequest &request);
                void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request);

                /**
                 *查询日志信息
                 * @param req ListLogMessageByConditionRequest
                 * @return ListLogMessageByConditionOutcome
                 */
                ListLogMessageByConditionOutcome ListLogMessageByCondition(const Model::ListLogMessageByConditionRequest &request);
                void ListLogMessageByConditionAsync(const Model::ListLogMessageByConditionRequest& request, const ListLogMessageByConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListLogMessageByConditionOutcomeCallable ListLogMessageByConditionCallable(const Model::ListLogMessageByConditionRequest& request);

                /**
                 *查询用户列表
                 * @param req ListUserRequest
                 * @return ListUserOutcome
                 */
                ListUserOutcome ListUser(const Model::ListUserRequest &request);
                void ListUserAsync(const Model::ListUserRequest& request, const ListUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUserOutcomeCallable ListUserCallable(const Model::ListUserRequest& request);

                /**
                 *根据属性查询用户列表
                 * @param req ListUserByPropertyRequest
                 * @return ListUserByPropertyOutcome
                 */
                ListUserByPropertyOutcome ListUserByProperty(const Model::ListUserByPropertyRequest &request);
                void ListUserByPropertyAsync(const Model::ListUserByPropertyRequest& request, const ListUserByPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUserByPropertyOutcomeCallable ListUserByPropertyCallable(const Model::ListUserByPropertyRequest& request);

                /**
                 *重置用户密码
                 * @param req ResetPasswordRequest
                 * @return ResetPasswordOutcome
                 */
                ResetPasswordOutcome ResetPassword(const Model::ResetPasswordRequest &request);
                void ResetPasswordAsync(const Model::ResetPasswordRequest& request, const ResetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetPasswordOutcomeCallable ResetPasswordCallable(const Model::ResetPasswordRequest& request);

                /**
                 *设置用户密码
                 * @param req SetPasswordRequest
                 * @return SetPasswordOutcome
                 */
                SetPasswordOutcome SetPassword(const Model::SetPasswordRequest &request);
                void SetPasswordAsync(const Model::SetPasswordRequest& request, const SetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetPasswordOutcomeCallable SetPasswordCallable(const Model::SetPasswordRequest& request);

                /**
                 *更新用户
                 * @param req UpdateUserRequest
                 * @return UpdateUserOutcome
                 */
                UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest &request);
                void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request);

                /**
                 *更新用户状态
                 * @param req UpdateUserStatusRequest
                 * @return UpdateUserStatusOutcome
                 */
                UpdateUserStatusOutcome UpdateUserStatus(const Model::UpdateUserStatusRequest &request);
                void UpdateUserStatusAsync(const Model::UpdateUserStatusRequest& request, const UpdateUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateUserStatusOutcomeCallable UpdateUserStatusCallable(const Model::UpdateUserStatusRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_CIAMCLIENT_H_
