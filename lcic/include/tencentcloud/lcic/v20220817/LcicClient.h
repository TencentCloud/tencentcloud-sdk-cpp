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
#include <tencentcloud/lcic/v20220817/model/BatchDescribeDocumentRequest.h>
#include <tencentcloud/lcic/v20220817/model/BatchDescribeDocumentResponse.h>
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
#include <tencentcloud/lcic/v20220817/model/DeleteAppCustomContentRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteAppCustomContentResponse.h>
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
#include <tencentcloud/lcic/v20220817/model/DeleteSupervisorRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteSupervisorResponse.h>
#include <tencentcloud/lcic/v20220817/model/DeleteUserRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteUserResponse.h>
#include <tencentcloud/lcic/v20220817/model/DeleteWhiteBoardSnapshotRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteWhiteBoardSnapshotResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeAnswerListRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeAnswerListResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeAppDetailRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeAppDetailResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeCurrentMemberListRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeCurrentMemberListResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDeveloperRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDeveloperResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDocumentRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDocumentResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDocumentsRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDocumentsResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDocumentsByRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDocumentsByRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupListRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupListResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupMemberListRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupMemberListResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeMarqueeRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeMarqueeResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeQuestionListRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeQuestionListResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRecordRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRecordResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRecordStreamRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRecordStreamResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRecordTaskRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRecordTaskResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomForbiddenUserRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomForbiddenUserResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomStatisticsRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomStatisticsResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeScoreListRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeScoreListResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeSdkAppIdUsersRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeSdkAppIdUsersResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeSupervisorsRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeSupervisorsResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeUserRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeUserResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeWhiteBoardSnapshotRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeWhiteBoardSnapshotResponse.h>
#include <tencentcloud/lcic/v20220817/model/EndRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/EndRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/ForbidSendMsgRequest.h>
#include <tencentcloud/lcic/v20220817/model/ForbidSendMsgResponse.h>
#include <tencentcloud/lcic/v20220817/model/GetRoomEventRequest.h>
#include <tencentcloud/lcic/v20220817/model/GetRoomEventResponse.h>
#include <tencentcloud/lcic/v20220817/model/GetRoomMessageRequest.h>
#include <tencentcloud/lcic/v20220817/model/GetRoomMessageResponse.h>
#include <tencentcloud/lcic/v20220817/model/GetRoomsRequest.h>
#include <tencentcloud/lcic/v20220817/model/GetRoomsResponse.h>
#include <tencentcloud/lcic/v20220817/model/GetWatermarkRequest.h>
#include <tencentcloud/lcic/v20220817/model/GetWatermarkResponse.h>
#include <tencentcloud/lcic/v20220817/model/KickUserFromRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/KickUserFromRoomResponse.h>
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
#include <tencentcloud/lcic/v20220817/model/SendRoomNormalMessageRequest.h>
#include <tencentcloud/lcic/v20220817/model/SendRoomNormalMessageResponse.h>
#include <tencentcloud/lcic/v20220817/model/SendRoomNotificationMessageRequest.h>
#include <tencentcloud/lcic/v20220817/model/SendRoomNotificationMessageResponse.h>
#include <tencentcloud/lcic/v20220817/model/SetAppCustomContentRequest.h>
#include <tencentcloud/lcic/v20220817/model/SetAppCustomContentResponse.h>
#include <tencentcloud/lcic/v20220817/model/SetMarqueeRequest.h>
#include <tencentcloud/lcic/v20220817/model/SetMarqueeResponse.h>
#include <tencentcloud/lcic/v20220817/model/SetWatermarkRequest.h>
#include <tencentcloud/lcic/v20220817/model/SetWatermarkResponse.h>
#include <tencentcloud/lcic/v20220817/model/StartRecordRequest.h>
#include <tencentcloud/lcic/v20220817/model/StartRecordResponse.h>
#include <tencentcloud/lcic/v20220817/model/StartRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/StartRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/StopRecordRequest.h>
#include <tencentcloud/lcic/v20220817/model/StopRecordResponse.h>
#include <tencentcloud/lcic/v20220817/model/UnbindDocumentFromRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/UnbindDocumentFromRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/UnblockKickedUserRequest.h>
#include <tencentcloud/lcic/v20220817/model/UnblockKickedUserResponse.h>


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
                typedef Outcome<Core::Error, Model::BatchDescribeDocumentResponse> BatchDescribeDocumentOutcome;
                typedef std::future<BatchDescribeDocumentOutcome> BatchDescribeDocumentOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BatchDescribeDocumentRequest&, BatchDescribeDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDescribeDocumentAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteAppCustomContentResponse> DeleteAppCustomContentOutcome;
                typedef std::future<DeleteAppCustomContentOutcome> DeleteAppCustomContentOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteAppCustomContentRequest&, DeleteAppCustomContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppCustomContentAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteSupervisorResponse> DeleteSupervisorOutcome;
                typedef std::future<DeleteSupervisorOutcome> DeleteSupervisorOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteSupervisorRequest&, DeleteSupervisorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSupervisorAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWhiteBoardSnapshotResponse> DeleteWhiteBoardSnapshotOutcome;
                typedef std::future<DeleteWhiteBoardSnapshotOutcome> DeleteWhiteBoardSnapshotOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteWhiteBoardSnapshotRequest&, DeleteWhiteBoardSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWhiteBoardSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAnswerListResponse> DescribeAnswerListOutcome;
                typedef std::future<DescribeAnswerListOutcome> DescribeAnswerListOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeAnswerListRequest&, DescribeAnswerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnswerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppDetailResponse> DescribeAppDetailOutcome;
                typedef std::future<DescribeAppDetailOutcome> DescribeAppDetailOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeAppDetailRequest&, DescribeAppDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCurrentMemberListResponse> DescribeCurrentMemberListOutcome;
                typedef std::future<DescribeCurrentMemberListOutcome> DescribeCurrentMemberListOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeCurrentMemberListRequest&, DescribeCurrentMemberListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCurrentMemberListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeveloperResponse> DescribeDeveloperOutcome;
                typedef std::future<DescribeDeveloperOutcome> DescribeDeveloperOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeDeveloperRequest&, DescribeDeveloperOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeveloperAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDocumentResponse> DescribeDocumentOutcome;
                typedef std::future<DescribeDocumentOutcome> DescribeDocumentOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeDocumentRequest&, DescribeDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDocumentsResponse> DescribeDocumentsOutcome;
                typedef std::future<DescribeDocumentsOutcome> DescribeDocumentsOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeDocumentsRequest&, DescribeDocumentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDocumentsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeMarqueeResponse> DescribeMarqueeOutcome;
                typedef std::future<DescribeMarqueeOutcome> DescribeMarqueeOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeMarqueeRequest&, DescribeMarqueeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMarqueeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQuestionListResponse> DescribeQuestionListOutcome;
                typedef std::future<DescribeQuestionListOutcome> DescribeQuestionListOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeQuestionListRequest&, DescribeQuestionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuestionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordResponse> DescribeRecordOutcome;
                typedef std::future<DescribeRecordOutcome> DescribeRecordOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeRecordRequest&, DescribeRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordStreamResponse> DescribeRecordStreamOutcome;
                typedef std::future<DescribeRecordStreamOutcome> DescribeRecordStreamOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeRecordStreamRequest&, DescribeRecordStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordTaskResponse> DescribeRecordTaskOutcome;
                typedef std::future<DescribeRecordTaskOutcome> DescribeRecordTaskOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeRecordTaskRequest&, DescribeRecordTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomResponse> DescribeRoomOutcome;
                typedef std::future<DescribeRoomOutcome> DescribeRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeRoomRequest&, DescribeRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomForbiddenUserResponse> DescribeRoomForbiddenUserOutcome;
                typedef std::future<DescribeRoomForbiddenUserOutcome> DescribeRoomForbiddenUserOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeRoomForbiddenUserRequest&, DescribeRoomForbiddenUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomForbiddenUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomStatisticsResponse> DescribeRoomStatisticsOutcome;
                typedef std::future<DescribeRoomStatisticsOutcome> DescribeRoomStatisticsOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeRoomStatisticsRequest&, DescribeRoomStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScoreListResponse> DescribeScoreListOutcome;
                typedef std::future<DescribeScoreListOutcome> DescribeScoreListOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeScoreListRequest&, DescribeScoreListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScoreListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSdkAppIdUsersResponse> DescribeSdkAppIdUsersOutcome;
                typedef std::future<DescribeSdkAppIdUsersOutcome> DescribeSdkAppIdUsersOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeSdkAppIdUsersRequest&, DescribeSdkAppIdUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSdkAppIdUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSupervisorsResponse> DescribeSupervisorsOutcome;
                typedef std::future<DescribeSupervisorsOutcome> DescribeSupervisorsOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeSupervisorsRequest&, DescribeSupervisorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupervisorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserResponse> DescribeUserOutcome;
                typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeUserRequest&, DescribeUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteBoardSnapshotResponse> DescribeWhiteBoardSnapshotOutcome;
                typedef std::future<DescribeWhiteBoardSnapshotOutcome> DescribeWhiteBoardSnapshotOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeWhiteBoardSnapshotRequest&, DescribeWhiteBoardSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteBoardSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::EndRoomResponse> EndRoomOutcome;
                typedef std::future<EndRoomOutcome> EndRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::EndRoomRequest&, EndRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EndRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::ForbidSendMsgResponse> ForbidSendMsgOutcome;
                typedef std::future<ForbidSendMsgOutcome> ForbidSendMsgOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::ForbidSendMsgRequest&, ForbidSendMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForbidSendMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRoomEventResponse> GetRoomEventOutcome;
                typedef std::future<GetRoomEventOutcome> GetRoomEventOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::GetRoomEventRequest&, GetRoomEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRoomEventAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRoomMessageResponse> GetRoomMessageOutcome;
                typedef std::future<GetRoomMessageOutcome> GetRoomMessageOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::GetRoomMessageRequest&, GetRoomMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRoomMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRoomsResponse> GetRoomsOutcome;
                typedef std::future<GetRoomsOutcome> GetRoomsOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::GetRoomsRequest&, GetRoomsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRoomsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWatermarkResponse> GetWatermarkOutcome;
                typedef std::future<GetWatermarkOutcome> GetWatermarkOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::GetWatermarkRequest&, GetWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::KickUserFromRoomResponse> KickUserFromRoomOutcome;
                typedef std::future<KickUserFromRoomOutcome> KickUserFromRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::KickUserFromRoomRequest&, KickUserFromRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KickUserFromRoomAsyncHandler;
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
                typedef Outcome<Core::Error, Model::SendRoomNormalMessageResponse> SendRoomNormalMessageOutcome;
                typedef std::future<SendRoomNormalMessageOutcome> SendRoomNormalMessageOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::SendRoomNormalMessageRequest&, SendRoomNormalMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendRoomNormalMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::SendRoomNotificationMessageResponse> SendRoomNotificationMessageOutcome;
                typedef std::future<SendRoomNotificationMessageOutcome> SendRoomNotificationMessageOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::SendRoomNotificationMessageRequest&, SendRoomNotificationMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendRoomNotificationMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAppCustomContentResponse> SetAppCustomContentOutcome;
                typedef std::future<SetAppCustomContentOutcome> SetAppCustomContentOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::SetAppCustomContentRequest&, SetAppCustomContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAppCustomContentAsyncHandler;
                typedef Outcome<Core::Error, Model::SetMarqueeResponse> SetMarqueeOutcome;
                typedef std::future<SetMarqueeOutcome> SetMarqueeOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::SetMarqueeRequest&, SetMarqueeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetMarqueeAsyncHandler;
                typedef Outcome<Core::Error, Model::SetWatermarkResponse> SetWatermarkOutcome;
                typedef std::future<SetWatermarkOutcome> SetWatermarkOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::SetWatermarkRequest&, SetWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::StartRecordResponse> StartRecordOutcome;
                typedef std::future<StartRecordOutcome> StartRecordOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::StartRecordRequest&, StartRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::StartRoomResponse> StartRoomOutcome;
                typedef std::future<StartRoomOutcome> StartRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::StartRoomRequest&, StartRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::StopRecordResponse> StopRecordOutcome;
                typedef std::future<StopRecordOutcome> StopRecordOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::StopRecordRequest&, StopRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindDocumentFromRoomResponse> UnbindDocumentFromRoomOutcome;
                typedef std::future<UnbindDocumentFromRoomOutcome> UnbindDocumentFromRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::UnbindDocumentFromRoomRequest&, UnbindDocumentFromRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindDocumentFromRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::UnblockKickedUserResponse> UnblockKickedUserOutcome;
                typedef std::future<UnblockKickedUserOutcome> UnblockKickedUserOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::UnblockKickedUserRequest&, UnblockKickedUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnblockKickedUserAsyncHandler;



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
                 *批量获取文档详情
                 * @param req BatchDescribeDocumentRequest
                 * @return BatchDescribeDocumentOutcome
                 */
                BatchDescribeDocumentOutcome BatchDescribeDocument(const Model::BatchDescribeDocumentRequest &request);
                void BatchDescribeDocumentAsync(const Model::BatchDescribeDocumentRequest& request, const BatchDescribeDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDescribeDocumentOutcomeCallable BatchDescribeDocumentCallable(const Model::BatchDescribeDocumentRequest& request);

                /**
                 *如果批量注册的用户已存在，则会被覆盖。一次最多注册1000个用户。默认请求频率限制：10次/秒
                 * @param req BatchRegisterRequest
                 * @return BatchRegisterOutcome
                 */
                BatchRegisterOutcome BatchRegister(const Model::BatchRegisterRequest &request);
                void BatchRegisterAsync(const Model::BatchRegisterRequest& request, const BatchRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchRegisterOutcomeCallable BatchRegisterCallable(const Model::BatchRegisterRequest& request);

                /**
                 *功能概述
本接口提供教学场景下的课程文档预绑定能力，支持将课件课堂ID进行关联映射，实现课件的自动化预加载。

应用场景建议

绑定时机
推荐在创建课堂预约阶段同步完成文档绑定操作，确保课件资源在课堂开始前完成上传。

接口限制与频控策略

频控维度
开发者账号维度限频
默认频控阈值为20 QPS（每秒请求次数）

最佳实践建议

重试策略
当触发限频错误时，建议采用以下策略：
启用退避重试机制（建议使用指数退避算法）
初始重试间隔不低于500ms
最大重试次数不超过3次
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
                 *创建课堂
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
                 *删除设置自定义元素。如果参数scenes为空则删除所有自定义元素，否则删除指定的scene自定义元素。
                 * @param req DeleteAppCustomContentRequest
                 * @return DeleteAppCustomContentOutcome
                 */
                DeleteAppCustomContentOutcome DeleteAppCustomContent(const Model::DeleteAppCustomContentRequest &request);
                void DeleteAppCustomContentAsync(const Model::DeleteAppCustomContentRequest& request, const DeleteAppCustomContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAppCustomContentOutcomeCallable DeleteAppCustomContentCallable(const Model::DeleteAppCustomContentRequest& request);

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
                 *删除巡课
                 * @param req DeleteSupervisorRequest
                 * @return DeleteSupervisorOutcome
                 */
                DeleteSupervisorOutcome DeleteSupervisor(const Model::DeleteSupervisorRequest &request);
                void DeleteSupervisorAsync(const Model::DeleteSupervisorRequest& request, const DeleteSupervisorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSupervisorOutcomeCallable DeleteSupervisorCallable(const Model::DeleteSupervisorRequest& request);

                /**
                 *删除已注册用户。注：如果该成员已被添加到群组，请先在群组中删除该成员。
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *删除白板板书截图
                 * @param req DeleteWhiteBoardSnapshotRequest
                 * @return DeleteWhiteBoardSnapshotOutcome
                 */
                DeleteWhiteBoardSnapshotOutcome DeleteWhiteBoardSnapshot(const Model::DeleteWhiteBoardSnapshotRequest &request);
                void DeleteWhiteBoardSnapshotAsync(const Model::DeleteWhiteBoardSnapshotRequest& request, const DeleteWhiteBoardSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWhiteBoardSnapshotOutcomeCallable DeleteWhiteBoardSnapshotCallable(const Model::DeleteWhiteBoardSnapshotRequest& request);

                /**
                 *获取房间答题详情
                 * @param req DescribeAnswerListRequest
                 * @return DescribeAnswerListOutcome
                 */
                DescribeAnswerListOutcome DescribeAnswerList(const Model::DescribeAnswerListRequest &request);
                void DescribeAnswerListAsync(const Model::DescribeAnswerListRequest& request, const DescribeAnswerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAnswerListOutcomeCallable DescribeAnswerListCallable(const Model::DescribeAnswerListRequest& request);

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
                 *开发商信息获取
                 * @param req DescribeDeveloperRequest
                 * @return DescribeDeveloperOutcome
                 */
                DescribeDeveloperOutcome DescribeDeveloper(const Model::DescribeDeveloperRequest &request);
                void DescribeDeveloperAsync(const Model::DescribeDeveloperRequest& request, const DescribeDeveloperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeveloperOutcomeCallable DescribeDeveloperCallable(const Model::DescribeDeveloperRequest& request);

                /**
                 *获取文档信息
                 * @param req DescribeDocumentRequest
                 * @return DescribeDocumentOutcome
                 */
                DescribeDocumentOutcome DescribeDocument(const Model::DescribeDocumentRequest &request);
                void DescribeDocumentAsync(const Model::DescribeDocumentRequest& request, const DescribeDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDocumentOutcomeCallable DescribeDocumentCallable(const Model::DescribeDocumentRequest& request);

                /**
                 *有新接口替换

批量获取文档信息（已废弃，替代接口BatchDescribeDocument）
                 * @param req DescribeDocumentsRequest
                 * @return DescribeDocumentsOutcome
                 */
                DescribeDocumentsOutcome DescribeDocuments(const Model::DescribeDocumentsRequest &request);
                void DescribeDocumentsAsync(const Model::DescribeDocumentsRequest& request, const DescribeDocumentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDocumentsOutcomeCallable DescribeDocumentsCallable(const Model::DescribeDocumentsRequest& request);

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
                 *查询跑马灯配置
                 * @param req DescribeMarqueeRequest
                 * @return DescribeMarqueeOutcome
                 */
                DescribeMarqueeOutcome DescribeMarquee(const Model::DescribeMarqueeRequest &request);
                void DescribeMarqueeAsync(const Model::DescribeMarqueeRequest& request, const DescribeMarqueeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMarqueeOutcomeCallable DescribeMarqueeCallable(const Model::DescribeMarqueeRequest& request);

                /**
                 *获取房间提问列表
                 * @param req DescribeQuestionListRequest
                 * @return DescribeQuestionListOutcome
                 */
                DescribeQuestionListOutcome DescribeQuestionList(const Model::DescribeQuestionListRequest &request);
                void DescribeQuestionListAsync(const Model::DescribeQuestionListRequest& request, const DescribeQuestionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQuestionListOutcomeCallable DescribeQuestionListCallable(const Model::DescribeQuestionListRequest& request);

                /**
                 *查询录制信息
                 * @param req DescribeRecordRequest
                 * @return DescribeRecordOutcome
                 */
                DescribeRecordOutcome DescribeRecord(const Model::DescribeRecordRequest &request);
                void DescribeRecordAsync(const Model::DescribeRecordRequest& request, const DescribeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordOutcomeCallable DescribeRecordCallable(const Model::DescribeRecordRequest& request);

                /**
                 *录制流查询
                 * @param req DescribeRecordStreamRequest
                 * @return DescribeRecordStreamOutcome
                 */
                DescribeRecordStreamOutcome DescribeRecordStream(const Model::DescribeRecordStreamRequest &request);
                void DescribeRecordStreamAsync(const Model::DescribeRecordStreamRequest& request, const DescribeRecordStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordStreamOutcomeCallable DescribeRecordStreamCallable(const Model::DescribeRecordStreamRequest& request);

                /**
                 *查询录制任务ID
                 * @param req DescribeRecordTaskRequest
                 * @return DescribeRecordTaskOutcome
                 */
                DescribeRecordTaskOutcome DescribeRecordTask(const Model::DescribeRecordTaskRequest &request);
                void DescribeRecordTaskAsync(const Model::DescribeRecordTaskRequest& request, const DescribeRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordTaskOutcomeCallable DescribeRecordTaskCallable(const Model::DescribeRecordTaskRequest& request);

                /**
                 *获取房间配置信息
                 * @param req DescribeRoomRequest
                 * @return DescribeRoomOutcome
                 */
                DescribeRoomOutcome DescribeRoom(const Model::DescribeRoomRequest &request);
                void DescribeRoomAsync(const Model::DescribeRoomRequest& request, const DescribeRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomOutcomeCallable DescribeRoomCallable(const Model::DescribeRoomRequest& request);

                /**
                 *根据房间ID获取群组中被禁言的用户列表。
                 * @param req DescribeRoomForbiddenUserRequest
                 * @return DescribeRoomForbiddenUserOutcome
                 */
                DescribeRoomForbiddenUserOutcome DescribeRoomForbiddenUser(const Model::DescribeRoomForbiddenUserRequest &request);
                void DescribeRoomForbiddenUserAsync(const Model::DescribeRoomForbiddenUserRequest& request, const DescribeRoomForbiddenUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomForbiddenUserOutcomeCallable DescribeRoomForbiddenUserCallable(const Model::DescribeRoomForbiddenUserRequest& request);

                /**
                 *获取房间统计信息，仅可在房间结束后调用。
                 * @param req DescribeRoomStatisticsRequest
                 * @return DescribeRoomStatisticsOutcome
                 */
                DescribeRoomStatisticsOutcome DescribeRoomStatistics(const Model::DescribeRoomStatisticsRequest &request);
                void DescribeRoomStatisticsAsync(const Model::DescribeRoomStatisticsRequest& request, const DescribeRoomStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomStatisticsOutcomeCallable DescribeRoomStatisticsCallable(const Model::DescribeRoomStatisticsRequest& request);

                /**
                 *获取课堂评分列表
                 * @param req DescribeScoreListRequest
                 * @return DescribeScoreListOutcome
                 */
                DescribeScoreListOutcome DescribeScoreList(const Model::DescribeScoreListRequest &request);
                void DescribeScoreListAsync(const Model::DescribeScoreListRequest& request, const DescribeScoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScoreListOutcomeCallable DescribeScoreListCallable(const Model::DescribeScoreListRequest& request);

                /**
                 *此接口用于获取指定应用ID下用户列表
                 * @param req DescribeSdkAppIdUsersRequest
                 * @return DescribeSdkAppIdUsersOutcome
                 */
                DescribeSdkAppIdUsersOutcome DescribeSdkAppIdUsers(const Model::DescribeSdkAppIdUsersRequest &request);
                void DescribeSdkAppIdUsersAsync(const Model::DescribeSdkAppIdUsersRequest& request, const DescribeSdkAppIdUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSdkAppIdUsersOutcomeCallable DescribeSdkAppIdUsersCallable(const Model::DescribeSdkAppIdUsersRequest& request);

                /**
                 *获取巡课列表
                 * @param req DescribeSupervisorsRequest
                 * @return DescribeSupervisorsOutcome
                 */
                DescribeSupervisorsOutcome DescribeSupervisors(const Model::DescribeSupervisorsRequest &request);
                void DescribeSupervisorsAsync(const Model::DescribeSupervisorsRequest& request, const DescribeSupervisorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSupervisorsOutcomeCallable DescribeSupervisorsCallable(const Model::DescribeSupervisorsRequest& request);

                /**
                 *获取用户信息
                 * @param req DescribeUserRequest
                 * @return DescribeUserOutcome
                 */
                DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest &request);
                void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request);

                /**
                 *查询白板板书截图
                 * @param req DescribeWhiteBoardSnapshotRequest
                 * @return DescribeWhiteBoardSnapshotOutcome
                 */
                DescribeWhiteBoardSnapshotOutcome DescribeWhiteBoardSnapshot(const Model::DescribeWhiteBoardSnapshotRequest &request);
                void DescribeWhiteBoardSnapshotAsync(const Model::DescribeWhiteBoardSnapshotRequest& request, const DescribeWhiteBoardSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteBoardSnapshotOutcomeCallable DescribeWhiteBoardSnapshotCallable(const Model::DescribeWhiteBoardSnapshotRequest& request);

                /**
                 *结束房间的直播
                 * @param req EndRoomRequest
                 * @return EndRoomOutcome
                 */
                EndRoomOutcome EndRoom(const Model::EndRoomRequest &request);
                void EndRoomAsync(const Model::EndRoomRequest& request, const EndRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EndRoomOutcomeCallable EndRoomCallable(const Model::EndRoomRequest& request);

                /**
                 *禁止指定房间中某些用户在一段时间内发言。
取消对某些用户的禁言。
被禁言用户退出房间之后再进入同一房间，禁言仍然有效。
                 * @param req ForbidSendMsgRequest
                 * @return ForbidSendMsgOutcome
                 */
                ForbidSendMsgOutcome ForbidSendMsg(const Model::ForbidSendMsgRequest &request);
                void ForbidSendMsgAsync(const Model::ForbidSendMsgRequest& request, const ForbidSendMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForbidSendMsgOutcomeCallable ForbidSendMsgCallable(const Model::ForbidSendMsgRequest& request);

                /**
                 *获取房间事件,仅在课堂结束1小时内有效。
                 * @param req GetRoomEventRequest
                 * @return GetRoomEventOutcome
                 */
                GetRoomEventOutcome GetRoomEvent(const Model::GetRoomEventRequest &request);
                void GetRoomEventAsync(const Model::GetRoomEventRequest& request, const GetRoomEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRoomEventOutcomeCallable GetRoomEventCallable(const Model::GetRoomEventRequest& request);

                /**
                 *获取房间历史消息(房间历史消息保存7天)
                 * @param req GetRoomMessageRequest
                 * @return GetRoomMessageOutcome
                 */
                GetRoomMessageOutcome GetRoomMessage(const Model::GetRoomMessageRequest &request);
                void GetRoomMessageAsync(const Model::GetRoomMessageRequest& request, const GetRoomMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRoomMessageOutcomeCallable GetRoomMessageCallable(const Model::GetRoomMessageRequest& request);

                /**
                 *获取房间列表
                 * @param req GetRoomsRequest
                 * @return GetRoomsOutcome
                 */
                GetRoomsOutcome GetRooms(const Model::GetRoomsRequest &request);
                void GetRoomsAsync(const Model::GetRoomsRequest& request, const GetRoomsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRoomsOutcomeCallable GetRoomsCallable(const Model::GetRoomsRequest& request);

                /**
                 *获取水印设置
                 * @param req GetWatermarkRequest
                 * @return GetWatermarkOutcome
                 */
                GetWatermarkOutcome GetWatermark(const Model::GetWatermarkRequest &request);
                void GetWatermarkAsync(const Model::GetWatermarkRequest& request, const GetWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWatermarkOutcomeCallable GetWatermarkCallable(const Model::GetWatermarkRequest& request);

                /**
                 *从房间里面踢出用户
                 * @param req KickUserFromRoomRequest
                 * @return KickUserFromRoomOutcome
                 */
                KickUserFromRoomOutcome KickUserFromRoom(const Model::KickUserFromRoomRequest &request);
                void KickUserFromRoomAsync(const Model::KickUserFromRoomRequest& request, const KickUserFromRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KickUserFromRoomOutcomeCallable KickUserFromRoomCallable(const Model::KickUserFromRoomRequest& request);

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
                 *此接口用于修改用户信息，例如头像、昵称（用户名）等。注意，课中的用户信息不会立即同步修改，需待下次上课时，修改后的信息才会更新显示。
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
                 *1、按照指定身份发送消息，目前支持表情消息、图片消息、文本消息。
                 * @param req SendRoomNormalMessageRequest
                 * @return SendRoomNormalMessageOutcome
                 */
                SendRoomNormalMessageOutcome SendRoomNormalMessage(const Model::SendRoomNormalMessageRequest &request);
                void SendRoomNormalMessageAsync(const Model::SendRoomNormalMessageRequest& request, const SendRoomNormalMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendRoomNormalMessageOutcomeCallable SendRoomNormalMessageCallable(const Model::SendRoomNormalMessageRequest& request);

                /**
                 *App 管理员可以通过该接口在群组中发送通知、公告等。目前仅支持文本消息。
                 * @param req SendRoomNotificationMessageRequest
                 * @return SendRoomNotificationMessageOutcome
                 */
                SendRoomNotificationMessageOutcome SendRoomNotificationMessage(const Model::SendRoomNotificationMessageRequest &request);
                void SendRoomNotificationMessageAsync(const Model::SendRoomNotificationMessageRequest& request, const SendRoomNotificationMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendRoomNotificationMessageOutcomeCallable SendRoomNotificationMessageCallable(const Model::SendRoomNotificationMessageRequest& request);

                /**
                 *设置应用的自定义内容，包括应用图标，自定义的代码等。如果已存在，则为更新。更新js、css内容后，要生效也需要调用该接口
                 * @param req SetAppCustomContentRequest
                 * @return SetAppCustomContentOutcome
                 */
                SetAppCustomContentOutcome SetAppCustomContent(const Model::SetAppCustomContentRequest &request);
                void SetAppCustomContentAsync(const Model::SetAppCustomContentRequest& request, const SetAppCustomContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAppCustomContentOutcomeCallable SetAppCustomContentCallable(const Model::SetAppCustomContentRequest& request);

                /**
                 *设置跑马灯参数设置
                 * @param req SetMarqueeRequest
                 * @return SetMarqueeOutcome
                 */
                SetMarqueeOutcome SetMarquee(const Model::SetMarqueeRequest &request);
                void SetMarqueeAsync(const Model::SetMarqueeRequest& request, const SetMarqueeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetMarqueeOutcomeCallable SetMarqueeCallable(const Model::SetMarqueeRequest& request);

                /**
                 *设置水印
                 * @param req SetWatermarkRequest
                 * @return SetWatermarkOutcome
                 */
                SetWatermarkOutcome SetWatermark(const Model::SetWatermarkRequest &request);
                void SetWatermarkAsync(const Model::SetWatermarkRequest& request, const SetWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetWatermarkOutcomeCallable SetWatermarkCallable(const Model::SetWatermarkRequest& request);

                /**
                 *开始录制
                 * @param req StartRecordRequest
                 * @return StartRecordOutcome
                 */
                StartRecordOutcome StartRecord(const Model::StartRecordRequest &request);
                void StartRecordAsync(const Model::StartRecordRequest& request, const StartRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartRecordOutcomeCallable StartRecordCallable(const Model::StartRecordRequest& request);

                /**
                 *开始房间的直播。 说明：开始房间接口调用之前需要有用户进入课堂初始化课堂信息。
                 * @param req StartRoomRequest
                 * @return StartRoomOutcome
                 */
                StartRoomOutcome StartRoom(const Model::StartRoomRequest &request);
                void StartRoomAsync(const Model::StartRoomRequest& request, const StartRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartRoomOutcomeCallable StartRoomCallable(const Model::StartRoomRequest& request);

                /**
                 *停止录制
                 * @param req StopRecordRequest
                 * @return StopRecordOutcome
                 */
                StopRecordOutcome StopRecord(const Model::StopRecordRequest &request);
                void StopRecordAsync(const Model::StopRecordRequest& request, const StopRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopRecordOutcomeCallable StopRecordCallable(const Model::StopRecordRequest& request);

                /**
                 *文档从房间解绑
                 * @param req UnbindDocumentFromRoomRequest
                 * @return UnbindDocumentFromRoomOutcome
                 */
                UnbindDocumentFromRoomOutcome UnbindDocumentFromRoom(const Model::UnbindDocumentFromRoomRequest &request);
                void UnbindDocumentFromRoomAsync(const Model::UnbindDocumentFromRoomRequest& request, const UnbindDocumentFromRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindDocumentFromRoomOutcomeCallable UnbindDocumentFromRoomCallable(const Model::UnbindDocumentFromRoomRequest& request);

                /**
                 *解禁从房间里面踢出的用户
                 * @param req UnblockKickedUserRequest
                 * @return UnblockKickedUserOutcome
                 */
                UnblockKickedUserOutcome UnblockKickedUser(const Model::UnblockKickedUserRequest &request);
                void UnblockKickedUserAsync(const Model::UnblockKickedUserRequest& request, const UnblockKickedUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnblockKickedUserOutcomeCallable UnblockKickedUserCallable(const Model::UnblockKickedUserRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_LCICCLIENT_H_
