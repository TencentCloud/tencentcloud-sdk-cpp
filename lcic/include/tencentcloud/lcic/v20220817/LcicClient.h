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
#include <tencentcloud/lcic/v20220817/model/AddGroupMemberRequest.h>
#include <tencentcloud/lcic/v20220817/model/AddGroupMemberResponse.h>
#include <tencentcloud/lcic/v20220817/model/BatchAddGroupMemberRequest.h>
#include <tencentcloud/lcic/v20220817/model/BatchAddGroupMemberResponse.h>
#include <tencentcloud/lcic/v20220817/model/BatchCreateGroupWithMembersRequest.h>
#include <tencentcloud/lcic/v20220817/model/BatchCreateGroupWithMembersResponse.h>
#include <tencentcloud/lcic/v20220817/model/BatchCreateRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/BatchCreateRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/BatchDeleteGroupMemberRequest.h>
#include <tencentcloud/lcic/v20220817/model/BatchDeleteGroupMemberResponse.h>
#include <tencentcloud/lcic/v20220817/model/BatchDeleteRecordRequest.h>
#include <tencentcloud/lcic/v20220817/model/BatchDeleteRecordResponse.h>
#include <tencentcloud/lcic/v20220817/model/BatchRegisterRequest.h>
#include <tencentcloud/lcic/v20220817/model/BatchRegisterResponse.h>
#include <tencentcloud/lcic/v20220817/model/BindDocumentToRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/BindDocumentToRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/CreateDocumentRequest.h>
#include <tencentcloud/lcic/v20220817/model/CreateDocumentResponse.h>
#include <tencentcloud/lcic/v20220817/model/CreateGroupWithMembersRequest.h>
#include <tencentcloud/lcic/v20220817/model/CreateGroupWithMembersResponse.h>
#include <tencentcloud/lcic/v20220817/model/CreateGroupWithSubGroupRequest.h>
#include <tencentcloud/lcic/v20220817/model/CreateGroupWithSubGroupResponse.h>
#include <tencentcloud/lcic/v20220817/model/CreateRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/CreateRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/CreateSupervisorRequest.h>
#include <tencentcloud/lcic/v20220817/model/CreateSupervisorResponse.h>
#include <tencentcloud/lcic/v20220817/model/DeleteDocumentRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteDocumentResponse.h>
#include <tencentcloud/lcic/v20220817/model/DeleteGroupRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteGroupResponse.h>
#include <tencentcloud/lcic/v20220817/model/DeleteGroupMemberRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteGroupMemberResponse.h>
#include <tencentcloud/lcic/v20220817/model/DeleteRecordRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteRecordResponse.h>
#include <tencentcloud/lcic/v20220817/model/DeleteRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeAppDetailRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeAppDetailResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeCurrentMemberListRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeCurrentMemberListResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDocumentRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDocumentResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDocumentsByRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDocumentsByRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupListRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupListResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupMemberListRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupMemberListResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomStatisticsRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomStatisticsResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeSdkAppIdUsersRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeSdkAppIdUsersResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeUserRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeUserResponse.h>
#include <tencentcloud/lcic/v20220817/model/GetWatermarkRequest.h>
#include <tencentcloud/lcic/v20220817/model/GetWatermarkResponse.h>
#include <tencentcloud/lcic/v20220817/model/LoginOriginIdRequest.h>
#include <tencentcloud/lcic/v20220817/model/LoginOriginIdResponse.h>
#include <tencentcloud/lcic/v20220817/model/LoginUserRequest.h>
#include <tencentcloud/lcic/v20220817/model/LoginUserResponse.h>
#include <tencentcloud/lcic/v20220817/model/ModifyAppRequest.h>
#include <tencentcloud/lcic/v20220817/model/ModifyAppResponse.h>
#include <tencentcloud/lcic/v20220817/model/ModifyGroupRequest.h>
#include <tencentcloud/lcic/v20220817/model/ModifyGroupResponse.h>
#include <tencentcloud/lcic/v20220817/model/ModifyRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/ModifyRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/ModifyUserProfileRequest.h>
#include <tencentcloud/lcic/v20220817/model/ModifyUserProfileResponse.h>
#include <tencentcloud/lcic/v20220817/model/RegisterUserRequest.h>
#include <tencentcloud/lcic/v20220817/model/RegisterUserResponse.h>
#include <tencentcloud/lcic/v20220817/model/SetAppCustomContentRequest.h>
#include <tencentcloud/lcic/v20220817/model/SetAppCustomContentResponse.h>
#include <tencentcloud/lcic/v20220817/model/SetWatermarkRequest.h>
#include <tencentcloud/lcic/v20220817/model/SetWatermarkResponse.h>
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

                typedef Outcome<Core::Error, Model::AddGroupMemberResponse> AddGroupMemberOutcome;
                typedef std::future<AddGroupMemberOutcome> AddGroupMemberOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::AddGroupMemberRequest&, AddGroupMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddGroupMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchAddGroupMemberResponse> BatchAddGroupMemberOutcome;
                typedef std::future<BatchAddGroupMemberOutcome> BatchAddGroupMemberOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BatchAddGroupMemberRequest&, BatchAddGroupMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchAddGroupMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchCreateGroupWithMembersResponse> BatchCreateGroupWithMembersOutcome;
                typedef std::future<BatchCreateGroupWithMembersOutcome> BatchCreateGroupWithMembersOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BatchCreateGroupWithMembersRequest&, BatchCreateGroupWithMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateGroupWithMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchCreateRoomResponse> BatchCreateRoomOutcome;
                typedef std::future<BatchCreateRoomOutcome> BatchCreateRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BatchCreateRoomRequest&, BatchCreateRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteGroupMemberResponse> BatchDeleteGroupMemberOutcome;
                typedef std::future<BatchDeleteGroupMemberOutcome> BatchDeleteGroupMemberOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BatchDeleteGroupMemberRequest&, BatchDeleteGroupMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteGroupMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteRecordResponse> BatchDeleteRecordOutcome;
                typedef std::future<BatchDeleteRecordOutcome> BatchDeleteRecordOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BatchDeleteRecordRequest&, BatchDeleteRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchRegisterResponse> BatchRegisterOutcome;
                typedef std::future<BatchRegisterOutcome> BatchRegisterOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BatchRegisterRequest&, BatchRegisterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchRegisterAsyncHandler;
                typedef Outcome<Core::Error, Model::BindDocumentToRoomResponse> BindDocumentToRoomOutcome;
                typedef std::future<BindDocumentToRoomOutcome> BindDocumentToRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BindDocumentToRoomRequest&, BindDocumentToRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindDocumentToRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDocumentResponse> CreateDocumentOutcome;
                typedef std::future<CreateDocumentOutcome> CreateDocumentOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::CreateDocumentRequest&, CreateDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGroupWithMembersResponse> CreateGroupWithMembersOutcome;
                typedef std::future<CreateGroupWithMembersOutcome> CreateGroupWithMembersOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::CreateGroupWithMembersRequest&, CreateGroupWithMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupWithMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGroupWithSubGroupResponse> CreateGroupWithSubGroupOutcome;
                typedef std::future<CreateGroupWithSubGroupOutcome> CreateGroupWithSubGroupOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::CreateGroupWithSubGroupRequest&, CreateGroupWithSubGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupWithSubGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoomResponse> CreateRoomOutcome;
                typedef std::future<CreateRoomOutcome> CreateRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::CreateRoomRequest&, CreateRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSupervisorResponse> CreateSupervisorOutcome;
                typedef std::future<CreateSupervisorOutcome> CreateSupervisorOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::CreateSupervisorRequest&, CreateSupervisorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSupervisorAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDocumentResponse> DeleteDocumentOutcome;
                typedef std::future<DeleteDocumentOutcome> DeleteDocumentOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteDocumentRequest&, DeleteDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGroupResponse> DeleteGroupOutcome;
                typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteGroupRequest&, DeleteGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGroupMemberResponse> DeleteGroupMemberOutcome;
                typedef std::future<DeleteGroupMemberOutcome> DeleteGroupMemberOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteGroupMemberRequest&, DeleteGroupMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordResponse> DeleteRecordOutcome;
                typedef std::future<DeleteRecordOutcome> DeleteRecordOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteRecordRequest&, DeleteRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoomResponse> DeleteRoomOutcome;
                typedef std::future<DeleteRoomOutcome> DeleteRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteRoomRequest&, DeleteRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppDetailResponse> DescribeAppDetailOutcome;
                typedef std::future<DescribeAppDetailOutcome> DescribeAppDetailOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeAppDetailRequest&, DescribeAppDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCurrentMemberListResponse> DescribeCurrentMemberListOutcome;
                typedef std::future<DescribeCurrentMemberListOutcome> DescribeCurrentMemberListOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeCurrentMemberListRequest&, DescribeCurrentMemberListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCurrentMemberListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDocumentResponse> DescribeDocumentOutcome;
                typedef std::future<DescribeDocumentOutcome> DescribeDocumentOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeDocumentRequest&, DescribeDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDocumentsByRoomResponse> DescribeDocumentsByRoomOutcome;
                typedef std::future<DescribeDocumentsByRoomOutcome> DescribeDocumentsByRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeDocumentsByRoomRequest&, DescribeDocumentsByRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDocumentsByRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupResponse> DescribeGroupOutcome;
                typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeGroupRequest&, DescribeGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupListResponse> DescribeGroupListOutcome;
                typedef std::future<DescribeGroupListOutcome> DescribeGroupListOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeGroupListRequest&, DescribeGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupMemberListResponse> DescribeGroupMemberListOutcome;
                typedef std::future<DescribeGroupMemberListOutcome> DescribeGroupMemberListOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeGroupMemberListRequest&, DescribeGroupMemberListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupMemberListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomResponse> DescribeRoomOutcome;
                typedef std::future<DescribeRoomOutcome> DescribeRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeRoomRequest&, DescribeRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomStatisticsResponse> DescribeRoomStatisticsOutcome;
                typedef std::future<DescribeRoomStatisticsOutcome> DescribeRoomStatisticsOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeRoomStatisticsRequest&, DescribeRoomStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSdkAppIdUsersResponse> DescribeSdkAppIdUsersOutcome;
                typedef std::future<DescribeSdkAppIdUsersOutcome> DescribeSdkAppIdUsersOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeSdkAppIdUsersRequest&, DescribeSdkAppIdUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSdkAppIdUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserResponse> DescribeUserOutcome;
                typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeUserRequest&, DescribeUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWatermarkResponse> GetWatermarkOutcome;
                typedef std::future<GetWatermarkOutcome> GetWatermarkOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::GetWatermarkRequest&, GetWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::LoginOriginIdResponse> LoginOriginIdOutcome;
                typedef std::future<LoginOriginIdOutcome> LoginOriginIdOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::LoginOriginIdRequest&, LoginOriginIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LoginOriginIdAsyncHandler;
                typedef Outcome<Core::Error, Model::LoginUserResponse> LoginUserOutcome;
                typedef std::future<LoginUserOutcome> LoginUserOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::LoginUserRequest&, LoginUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LoginUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAppResponse> ModifyAppOutcome;
                typedef std::future<ModifyAppOutcome> ModifyAppOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::ModifyAppRequest&, ModifyAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGroupResponse> ModifyGroupOutcome;
                typedef std::future<ModifyGroupOutcome> ModifyGroupOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::ModifyGroupRequest&, ModifyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoomResponse> ModifyRoomOutcome;
                typedef std::future<ModifyRoomOutcome> ModifyRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::ModifyRoomRequest&, ModifyRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserProfileResponse> ModifyUserProfileOutcome;
                typedef std::future<ModifyUserProfileOutcome> ModifyUserProfileOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::ModifyUserProfileRequest&, ModifyUserProfileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserProfileAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterUserResponse> RegisterUserOutcome;
                typedef std::future<RegisterUserOutcome> RegisterUserOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::RegisterUserRequest&, RegisterUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterUserAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAppCustomContentResponse> SetAppCustomContentOutcome;
                typedef std::future<SetAppCustomContentOutcome> SetAppCustomContentOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::SetAppCustomContentRequest&, SetAppCustomContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAppCustomContentAsyncHandler;
                typedef Outcome<Core::Error, Model::SetWatermarkResponse> SetWatermarkOutcome;
                typedef std::future<SetWatermarkOutcome> SetWatermarkOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::SetWatermarkRequest&, SetWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindDocumentFromRoomResponse> UnbindDocumentFromRoomOutcome;
                typedef std::future<UnbindDocumentFromRoomOutcome> UnbindDocumentFromRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::UnbindDocumentFromRoomRequest&, UnbindDocumentFromRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindDocumentFromRoomAsyncHandler;



                /**
                 *此接口用于添加成员列表到指定群组
                 * @param req AddGroupMemberRequest
                 * @return AddGroupMemberOutcome
                 */
                AddGroupMemberOutcome AddGroupMember(const Model::AddGroupMemberRequest &request);
                void AddGroupMemberAsync(const Model::AddGroupMemberRequest& request, const AddGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddGroupMemberOutcomeCallable AddGroupMemberCallable(const Model::AddGroupMemberRequest& request);

                /**
                 *此接口用于批量添加成员列表到指定群组
                 * @param req BatchAddGroupMemberRequest
                 * @return BatchAddGroupMemberOutcome
                 */
                BatchAddGroupMemberOutcome BatchAddGroupMember(const Model::BatchAddGroupMemberRequest &request);
                void BatchAddGroupMemberAsync(const Model::BatchAddGroupMemberRequest& request, const BatchAddGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchAddGroupMemberOutcomeCallable BatchAddGroupMemberCallable(const Model::BatchAddGroupMemberRequest& request);

                /**
                 *此接口用于批量创建群组
                 * @param req BatchCreateGroupWithMembersRequest
                 * @return BatchCreateGroupWithMembersOutcome
                 */
                BatchCreateGroupWithMembersOutcome BatchCreateGroupWithMembers(const Model::BatchCreateGroupWithMembersRequest &request);
                void BatchCreateGroupWithMembersAsync(const Model::BatchCreateGroupWithMembersRequest& request, const BatchCreateGroupWithMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchCreateGroupWithMembersOutcomeCallable BatchCreateGroupWithMembersCallable(const Model::BatchCreateGroupWithMembersRequest& request);

                /**
                 *批量创建房间接口
                 * @param req BatchCreateRoomRequest
                 * @return BatchCreateRoomOutcome
                 */
                BatchCreateRoomOutcome BatchCreateRoom(const Model::BatchCreateRoomRequest &request);
                void BatchCreateRoomAsync(const Model::BatchCreateRoomRequest& request, const BatchCreateRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchCreateRoomOutcomeCallable BatchCreateRoomCallable(const Model::BatchCreateRoomRequest& request);

                /**
                 *此接口用于批量删除成员列表到指定群组列表
                 * @param req BatchDeleteGroupMemberRequest
                 * @return BatchDeleteGroupMemberOutcome
                 */
                BatchDeleteGroupMemberOutcome BatchDeleteGroupMember(const Model::BatchDeleteGroupMemberRequest &request);
                void BatchDeleteGroupMemberAsync(const Model::BatchDeleteGroupMemberRequest& request, const BatchDeleteGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteGroupMemberOutcomeCallable BatchDeleteGroupMemberCallable(const Model::BatchDeleteGroupMemberRequest& request);

                /**
                 *批量删除多个房间的录制文件
                 * @param req BatchDeleteRecordRequest
                 * @return BatchDeleteRecordOutcome
                 */
                BatchDeleteRecordOutcome BatchDeleteRecord(const Model::BatchDeleteRecordRequest &request);
                void BatchDeleteRecordAsync(const Model::BatchDeleteRecordRequest& request, const BatchDeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteRecordOutcomeCallable BatchDeleteRecordCallable(const Model::BatchDeleteRecordRequest& request);

                /**
                 *如果批量注册的用户已存在，则会被覆盖。一次最多注册1000个用户。默认请求频率限制：10次/秒
                 * @param req BatchRegisterRequest
                 * @return BatchRegisterOutcome
                 */
                BatchRegisterOutcome BatchRegister(const Model::BatchRegisterRequest &request);
                void BatchRegisterAsync(const Model::BatchRegisterRequest& request, const BatchRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchRegisterOutcomeCallable BatchRegisterCallable(const Model::BatchRegisterRequest& request);

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
                 *此接口根据成员列表创建群组
                 * @param req CreateGroupWithMembersRequest
                 * @return CreateGroupWithMembersOutcome
                 */
                CreateGroupWithMembersOutcome CreateGroupWithMembers(const Model::CreateGroupWithMembersRequest &request);
                void CreateGroupWithMembersAsync(const Model::CreateGroupWithMembersRequest& request, const CreateGroupWithMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupWithMembersOutcomeCallable CreateGroupWithMembersCallable(const Model::CreateGroupWithMembersRequest& request);

                /**
                 *此接口会聚合子群组创建联合群组
                 * @param req CreateGroupWithSubGroupRequest
                 * @return CreateGroupWithSubGroupOutcome
                 */
                CreateGroupWithSubGroupOutcome CreateGroupWithSubGroup(const Model::CreateGroupWithSubGroupRequest &request);
                void CreateGroupWithSubGroupAsync(const Model::CreateGroupWithSubGroupRequest& request, const CreateGroupWithSubGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupWithSubGroupOutcomeCallable CreateGroupWithSubGroupCallable(const Model::CreateGroupWithSubGroupRequest& request);

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
                 *删除文档
                 * @param req DeleteDocumentRequest
                 * @return DeleteDocumentOutcome
                 */
                DeleteDocumentOutcome DeleteDocument(const Model::DeleteDocumentRequest &request);
                void DeleteDocumentAsync(const Model::DeleteDocumentRequest& request, const DeleteDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDocumentOutcomeCallable DeleteDocumentCallable(const Model::DeleteDocumentRequest& request);

                /**
                 *此接口用于删除指定群组，支持批量操作。
                 * @param req DeleteGroupRequest
                 * @return DeleteGroupOutcome
                 */
                DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest &request);
                void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request);

                /**
                 *此接口用于删除群组中指定成员
                 * @param req DeleteGroupMemberRequest
                 * @return DeleteGroupMemberOutcome
                 */
                DeleteGroupMemberOutcome DeleteGroupMember(const Model::DeleteGroupMemberRequest &request);
                void DeleteGroupMemberAsync(const Model::DeleteGroupMemberRequest& request, const DeleteGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupMemberOutcomeCallable DeleteGroupMemberCallable(const Model::DeleteGroupMemberRequest& request);

                /**
                 *删除指定房间的录制文件
                 * @param req DeleteRecordRequest
                 * @return DeleteRecordOutcome
                 */
                DeleteRecordOutcome DeleteRecord(const Model::DeleteRecordRequest &request);
                void DeleteRecordAsync(const Model::DeleteRecordRequest& request, const DeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordOutcomeCallable DeleteRecordCallable(const Model::DeleteRecordRequest& request);

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
                 *获取当前房间的成员列表，房间结束或过期后无法使用。
                 * @param req DescribeCurrentMemberListRequest
                 * @return DescribeCurrentMemberListOutcome
                 */
                DescribeCurrentMemberListOutcome DescribeCurrentMemberList(const Model::DescribeCurrentMemberListRequest &request);
                void DescribeCurrentMemberListAsync(const Model::DescribeCurrentMemberListRequest& request, const DescribeCurrentMemberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCurrentMemberListOutcomeCallable DescribeCurrentMemberListCallable(const Model::DescribeCurrentMemberListRequest& request);

                /**
                 *获取文档信息
                 * @param req DescribeDocumentRequest
                 * @return DescribeDocumentOutcome
                 */
                DescribeDocumentOutcome DescribeDocument(const Model::DescribeDocumentRequest &request);
                void DescribeDocumentAsync(const Model::DescribeDocumentRequest& request, const DescribeDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDocumentOutcomeCallable DescribeDocumentCallable(const Model::DescribeDocumentRequest& request);

                /**
                 *此接口获取指定房间下课件列表
                 * @param req DescribeDocumentsByRoomRequest
                 * @return DescribeDocumentsByRoomOutcome
                 */
                DescribeDocumentsByRoomOutcome DescribeDocumentsByRoom(const Model::DescribeDocumentsByRoomRequest &request);
                void DescribeDocumentsByRoomAsync(const Model::DescribeDocumentsByRoomRequest& request, const DescribeDocumentsByRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDocumentsByRoomOutcomeCallable DescribeDocumentsByRoomCallable(const Model::DescribeDocumentsByRoomRequest& request);

                /**
                 *此接口用于获取群组详情
                 * @param req DescribeGroupRequest
                 * @return DescribeGroupOutcome
                 */
                DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest &request);
                void DescribeGroupAsync(const Model::DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupOutcomeCallable DescribeGroupCallable(const Model::DescribeGroupRequest& request);

                /**
                 *获取群组列表
                 * @param req DescribeGroupListRequest
                 * @return DescribeGroupListOutcome
                 */
                DescribeGroupListOutcome DescribeGroupList(const Model::DescribeGroupListRequest &request);
                void DescribeGroupListAsync(const Model::DescribeGroupListRequest& request, const DescribeGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupListOutcomeCallable DescribeGroupListCallable(const Model::DescribeGroupListRequest& request);

                /**
                 *此接口用于获取群组成员列表
                 * @param req DescribeGroupMemberListRequest
                 * @return DescribeGroupMemberListOutcome
                 */
                DescribeGroupMemberListOutcome DescribeGroupMemberList(const Model::DescribeGroupMemberListRequest &request);
                void DescribeGroupMemberListAsync(const Model::DescribeGroupMemberListRequest& request, const DescribeGroupMemberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupMemberListOutcomeCallable DescribeGroupMemberListCallable(const Model::DescribeGroupMemberListRequest& request);

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
                 *此接口用于获取指定应用ID下用户列表
                 * @param req DescribeSdkAppIdUsersRequest
                 * @return DescribeSdkAppIdUsersOutcome
                 */
                DescribeSdkAppIdUsersOutcome DescribeSdkAppIdUsers(const Model::DescribeSdkAppIdUsersRequest &request);
                void DescribeSdkAppIdUsersAsync(const Model::DescribeSdkAppIdUsersRequest& request, const DescribeSdkAppIdUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSdkAppIdUsersOutcomeCallable DescribeSdkAppIdUsersCallable(const Model::DescribeSdkAppIdUsersRequest& request);

                /**
                 *获取用户信息
                 * @param req DescribeUserRequest
                 * @return DescribeUserOutcome
                 */
                DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest &request);
                void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request);

                /**
                 *获取水印设置
                 * @param req GetWatermarkRequest
                 * @return GetWatermarkOutcome
                 */
                GetWatermarkOutcome GetWatermark(const Model::GetWatermarkRequest &request);
                void GetWatermarkAsync(const Model::GetWatermarkRequest& request, const GetWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWatermarkOutcomeCallable GetWatermarkCallable(const Model::GetWatermarkRequest& request);

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
                 *此接口修改群组信息
                 * @param req ModifyGroupRequest
                 * @return ModifyGroupOutcome
                 */
                ModifyGroupOutcome ModifyGroup(const Model::ModifyGroupRequest &request);
                void ModifyGroupAsync(const Model::ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGroupOutcomeCallable ModifyGroupCallable(const Model::ModifyGroupRequest& request);

                /**
                 *修改房间
                 * @param req ModifyRoomRequest
                 * @return ModifyRoomOutcome
                 */
                ModifyRoomOutcome ModifyRoom(const Model::ModifyRoomRequest &request);
                void ModifyRoomAsync(const Model::ModifyRoomRequest& request, const ModifyRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoomOutcomeCallable ModifyRoomCallable(const Model::ModifyRoomRequest& request);

                /**
                 *此接口用于修改用户配置，如头像，昵称/用户名等。
                 * @param req ModifyUserProfileRequest
                 * @return ModifyUserProfileOutcome
                 */
                ModifyUserProfileOutcome ModifyUserProfile(const Model::ModifyUserProfileRequest &request);
                void ModifyUserProfileAsync(const Model::ModifyUserProfileRequest& request, const ModifyUserProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserProfileOutcomeCallable ModifyUserProfileCallable(const Model::ModifyUserProfileRequest& request);

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
                 *设置水印
                 * @param req SetWatermarkRequest
                 * @return SetWatermarkOutcome
                 */
                SetWatermarkOutcome SetWatermark(const Model::SetWatermarkRequest &request);
                void SetWatermarkAsync(const Model::SetWatermarkRequest& request, const SetWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetWatermarkOutcomeCallable SetWatermarkCallable(const Model::SetWatermarkRequest& request);

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
