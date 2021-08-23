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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_ORGANIZATIONCLIENT_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_ORGANIZATIONCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/organization/v20181225/model/AcceptOrganizationInvitationRequest.h>
#include <tencentcloud/organization/v20181225/model/AcceptOrganizationInvitationResponse.h>
#include <tencentcloud/organization/v20181225/model/AddOrganizationNodeRequest.h>
#include <tencentcloud/organization/v20181225/model/AddOrganizationNodeResponse.h>
#include <tencentcloud/organization/v20181225/model/CancelOrganizationInvitationRequest.h>
#include <tencentcloud/organization/v20181225/model/CancelOrganizationInvitationResponse.h>
#include <tencentcloud/organization/v20181225/model/CreateOrganizationRequest.h>
#include <tencentcloud/organization/v20181225/model/CreateOrganizationResponse.h>
#include <tencentcloud/organization/v20181225/model/DeleteOrganizationRequest.h>
#include <tencentcloud/organization/v20181225/model/DeleteOrganizationResponse.h>
#include <tencentcloud/organization/v20181225/model/DeleteOrganizationMemberFromNodeRequest.h>
#include <tencentcloud/organization/v20181225/model/DeleteOrganizationMemberFromNodeResponse.h>
#include <tencentcloud/organization/v20181225/model/DeleteOrganizationMembersRequest.h>
#include <tencentcloud/organization/v20181225/model/DeleteOrganizationMembersResponse.h>
#include <tencentcloud/organization/v20181225/model/DeleteOrganizationNodesRequest.h>
#include <tencentcloud/organization/v20181225/model/DeleteOrganizationNodesResponse.h>
#include <tencentcloud/organization/v20181225/model/DenyOrganizationInvitationRequest.h>
#include <tencentcloud/organization/v20181225/model/DenyOrganizationInvitationResponse.h>
#include <tencentcloud/organization/v20181225/model/GetOrganizationRequest.h>
#include <tencentcloud/organization/v20181225/model/GetOrganizationResponse.h>
#include <tencentcloud/organization/v20181225/model/GetOrganizationMemberRequest.h>
#include <tencentcloud/organization/v20181225/model/GetOrganizationMemberResponse.h>
#include <tencentcloud/organization/v20181225/model/ListOrganizationInvitationsRequest.h>
#include <tencentcloud/organization/v20181225/model/ListOrganizationInvitationsResponse.h>
#include <tencentcloud/organization/v20181225/model/ListOrganizationMembersRequest.h>
#include <tencentcloud/organization/v20181225/model/ListOrganizationMembersResponse.h>
#include <tencentcloud/organization/v20181225/model/ListOrganizationNodeMembersRequest.h>
#include <tencentcloud/organization/v20181225/model/ListOrganizationNodeMembersResponse.h>
#include <tencentcloud/organization/v20181225/model/ListOrganizationNodesRequest.h>
#include <tencentcloud/organization/v20181225/model/ListOrganizationNodesResponse.h>
#include <tencentcloud/organization/v20181225/model/MoveOrganizationMembersToNodeRequest.h>
#include <tencentcloud/organization/v20181225/model/MoveOrganizationMembersToNodeResponse.h>
#include <tencentcloud/organization/v20181225/model/QuitOrganizationRequest.h>
#include <tencentcloud/organization/v20181225/model/QuitOrganizationResponse.h>
#include <tencentcloud/organization/v20181225/model/SendOrganizationInvitationRequest.h>
#include <tencentcloud/organization/v20181225/model/SendOrganizationInvitationResponse.h>
#include <tencentcloud/organization/v20181225/model/UpdateOrganizationMemberRequest.h>
#include <tencentcloud/organization/v20181225/model/UpdateOrganizationMemberResponse.h>
#include <tencentcloud/organization/v20181225/model/UpdateOrganizationNodeRequest.h>
#include <tencentcloud/organization/v20181225/model/UpdateOrganizationNodeResponse.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
        {
            class OrganizationClient : public AbstractClient
            {
            public:
                OrganizationClient(const Credential &credential, const std::string &region);
                OrganizationClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AcceptOrganizationInvitationResponse> AcceptOrganizationInvitationOutcome;
                typedef std::future<AcceptOrganizationInvitationOutcome> AcceptOrganizationInvitationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AcceptOrganizationInvitationRequest&, AcceptOrganizationInvitationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcceptOrganizationInvitationAsyncHandler;
                typedef Outcome<Core::Error, Model::AddOrganizationNodeResponse> AddOrganizationNodeOutcome;
                typedef std::future<AddOrganizationNodeOutcome> AddOrganizationNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddOrganizationNodeRequest&, AddOrganizationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddOrganizationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelOrganizationInvitationResponse> CancelOrganizationInvitationOutcome;
                typedef std::future<CancelOrganizationInvitationOutcome> CancelOrganizationInvitationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CancelOrganizationInvitationRequest&, CancelOrganizationInvitationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelOrganizationInvitationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationResponse> CreateOrganizationOutcome;
                typedef std::future<CreateOrganizationOutcome> CreateOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationRequest&, CreateOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationResponse> DeleteOrganizationOutcome;
                typedef std::future<DeleteOrganizationOutcome> DeleteOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationRequest&, DeleteOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationMemberFromNodeResponse> DeleteOrganizationMemberFromNodeOutcome;
                typedef std::future<DeleteOrganizationMemberFromNodeOutcome> DeleteOrganizationMemberFromNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationMemberFromNodeRequest&, DeleteOrganizationMemberFromNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationMemberFromNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationMembersResponse> DeleteOrganizationMembersOutcome;
                typedef std::future<DeleteOrganizationMembersOutcome> DeleteOrganizationMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationMembersRequest&, DeleteOrganizationMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationNodesResponse> DeleteOrganizationNodesOutcome;
                typedef std::future<DeleteOrganizationNodesOutcome> DeleteOrganizationNodesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationNodesRequest&, DeleteOrganizationNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DenyOrganizationInvitationResponse> DenyOrganizationInvitationOutcome;
                typedef std::future<DenyOrganizationInvitationOutcome> DenyOrganizationInvitationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DenyOrganizationInvitationRequest&, DenyOrganizationInvitationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DenyOrganizationInvitationAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOrganizationResponse> GetOrganizationOutcome;
                typedef std::future<GetOrganizationOutcome> GetOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetOrganizationRequest&, GetOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOrganizationMemberResponse> GetOrganizationMemberOutcome;
                typedef std::future<GetOrganizationMemberOutcome> GetOrganizationMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::GetOrganizationMemberRequest&, GetOrganizationMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOrganizationMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrganizationInvitationsResponse> ListOrganizationInvitationsOutcome;
                typedef std::future<ListOrganizationInvitationsOutcome> ListOrganizationInvitationsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrganizationInvitationsRequest&, ListOrganizationInvitationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationInvitationsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrganizationMembersResponse> ListOrganizationMembersOutcome;
                typedef std::future<ListOrganizationMembersOutcome> ListOrganizationMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrganizationMembersRequest&, ListOrganizationMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrganizationNodeMembersResponse> ListOrganizationNodeMembersOutcome;
                typedef std::future<ListOrganizationNodeMembersOutcome> ListOrganizationNodeMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrganizationNodeMembersRequest&, ListOrganizationNodeMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationNodeMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrganizationNodesResponse> ListOrganizationNodesOutcome;
                typedef std::future<ListOrganizationNodesOutcome> ListOrganizationNodesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrganizationNodesRequest&, ListOrganizationNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::MoveOrganizationMembersToNodeResponse> MoveOrganizationMembersToNodeOutcome;
                typedef std::future<MoveOrganizationMembersToNodeOutcome> MoveOrganizationMembersToNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::MoveOrganizationMembersToNodeRequest&, MoveOrganizationMembersToNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MoveOrganizationMembersToNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::QuitOrganizationResponse> QuitOrganizationOutcome;
                typedef std::future<QuitOrganizationOutcome> QuitOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::QuitOrganizationRequest&, QuitOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QuitOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::SendOrganizationInvitationResponse> SendOrganizationInvitationOutcome;
                typedef std::future<SendOrganizationInvitationOutcome> SendOrganizationInvitationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::SendOrganizationInvitationRequest&, SendOrganizationInvitationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendOrganizationInvitationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationMemberResponse> UpdateOrganizationMemberOutcome;
                typedef std::future<UpdateOrganizationMemberOutcome> UpdateOrganizationMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationMemberRequest&, UpdateOrganizationMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationNodeResponse> UpdateOrganizationNodeOutcome;
                typedef std::future<UpdateOrganizationNodeOutcome> UpdateOrganizationNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationNodeRequest&, UpdateOrganizationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationNodeAsyncHandler;



                /**
                 *接受加入企业组织邀请
                 * @param req AcceptOrganizationInvitationRequest
                 * @return AcceptOrganizationInvitationOutcome
                 */
                AcceptOrganizationInvitationOutcome AcceptOrganizationInvitation(const Model::AcceptOrganizationInvitationRequest &request);
                void AcceptOrganizationInvitationAsync(const Model::AcceptOrganizationInvitationRequest& request, const AcceptOrganizationInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcceptOrganizationInvitationOutcomeCallable AcceptOrganizationInvitationCallable(const Model::AcceptOrganizationInvitationRequest& request);

                /**
                 *添加企业组织单元
                 * @param req AddOrganizationNodeRequest
                 * @return AddOrganizationNodeOutcome
                 */
                AddOrganizationNodeOutcome AddOrganizationNode(const Model::AddOrganizationNodeRequest &request);
                void AddOrganizationNodeAsync(const Model::AddOrganizationNodeRequest& request, const AddOrganizationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddOrganizationNodeOutcomeCallable AddOrganizationNodeCallable(const Model::AddOrganizationNodeRequest& request);

                /**
                 *取消企业组织邀请
                 * @param req CancelOrganizationInvitationRequest
                 * @return CancelOrganizationInvitationOutcome
                 */
                CancelOrganizationInvitationOutcome CancelOrganizationInvitation(const Model::CancelOrganizationInvitationRequest &request);
                void CancelOrganizationInvitationAsync(const Model::CancelOrganizationInvitationRequest& request, const CancelOrganizationInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelOrganizationInvitationOutcomeCallable CancelOrganizationInvitationCallable(const Model::CancelOrganizationInvitationRequest& request);

                /**
                 *创建企业组织
                 * @param req CreateOrganizationRequest
                 * @return CreateOrganizationOutcome
                 */
                CreateOrganizationOutcome CreateOrganization(const Model::CreateOrganizationRequest &request);
                void CreateOrganizationAsync(const Model::CreateOrganizationRequest& request, const CreateOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationOutcomeCallable CreateOrganizationCallable(const Model::CreateOrganizationRequest& request);

                /**
                 *删除企业组织
                 * @param req DeleteOrganizationRequest
                 * @return DeleteOrganizationOutcome
                 */
                DeleteOrganizationOutcome DeleteOrganization(const Model::DeleteOrganizationRequest &request);
                void DeleteOrganizationAsync(const Model::DeleteOrganizationRequest& request, const DeleteOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationOutcomeCallable DeleteOrganizationCallable(const Model::DeleteOrganizationRequest& request);

                /**
                 *删除企业组织成员
                 * @param req DeleteOrganizationMemberFromNodeRequest
                 * @return DeleteOrganizationMemberFromNodeOutcome
                 */
                DeleteOrganizationMemberFromNodeOutcome DeleteOrganizationMemberFromNode(const Model::DeleteOrganizationMemberFromNodeRequest &request);
                void DeleteOrganizationMemberFromNodeAsync(const Model::DeleteOrganizationMemberFromNodeRequest& request, const DeleteOrganizationMemberFromNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationMemberFromNodeOutcomeCallable DeleteOrganizationMemberFromNodeCallable(const Model::DeleteOrganizationMemberFromNodeRequest& request);

                /**
                 *批量删除企业组织成员
                 * @param req DeleteOrganizationMembersRequest
                 * @return DeleteOrganizationMembersOutcome
                 */
                DeleteOrganizationMembersOutcome DeleteOrganizationMembers(const Model::DeleteOrganizationMembersRequest &request);
                void DeleteOrganizationMembersAsync(const Model::DeleteOrganizationMembersRequest& request, const DeleteOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationMembersOutcomeCallable DeleteOrganizationMembersCallable(const Model::DeleteOrganizationMembersRequest& request);

                /**
                 *批量删除企业组织单元
                 * @param req DeleteOrganizationNodesRequest
                 * @return DeleteOrganizationNodesOutcome
                 */
                DeleteOrganizationNodesOutcome DeleteOrganizationNodes(const Model::DeleteOrganizationNodesRequest &request);
                void DeleteOrganizationNodesAsync(const Model::DeleteOrganizationNodesRequest& request, const DeleteOrganizationNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationNodesOutcomeCallable DeleteOrganizationNodesCallable(const Model::DeleteOrganizationNodesRequest& request);

                /**
                 *拒绝企业组织邀请
                 * @param req DenyOrganizationInvitationRequest
                 * @return DenyOrganizationInvitationOutcome
                 */
                DenyOrganizationInvitationOutcome DenyOrganizationInvitation(const Model::DenyOrganizationInvitationRequest &request);
                void DenyOrganizationInvitationAsync(const Model::DenyOrganizationInvitationRequest& request, const DenyOrganizationInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DenyOrganizationInvitationOutcomeCallable DenyOrganizationInvitationCallable(const Model::DenyOrganizationInvitationRequest& request);

                /**
                 *获取企业组织信息
                 * @param req GetOrganizationRequest
                 * @return GetOrganizationOutcome
                 */
                GetOrganizationOutcome GetOrganization(const Model::GetOrganizationRequest &request);
                void GetOrganizationAsync(const Model::GetOrganizationRequest& request, const GetOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOrganizationOutcomeCallable GetOrganizationCallable(const Model::GetOrganizationRequest& request);

                /**
                 *获取企业组织成员
                 * @param req GetOrganizationMemberRequest
                 * @return GetOrganizationMemberOutcome
                 */
                GetOrganizationMemberOutcome GetOrganizationMember(const Model::GetOrganizationMemberRequest &request);
                void GetOrganizationMemberAsync(const Model::GetOrganizationMemberRequest& request, const GetOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOrganizationMemberOutcomeCallable GetOrganizationMemberCallable(const Model::GetOrganizationMemberRequest& request);

                /**
                 *获取邀请信息列表
                 * @param req ListOrganizationInvitationsRequest
                 * @return ListOrganizationInvitationsOutcome
                 */
                ListOrganizationInvitationsOutcome ListOrganizationInvitations(const Model::ListOrganizationInvitationsRequest &request);
                void ListOrganizationInvitationsAsync(const Model::ListOrganizationInvitationsRequest& request, const ListOrganizationInvitationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOrganizationInvitationsOutcomeCallable ListOrganizationInvitationsCallable(const Model::ListOrganizationInvitationsRequest& request);

                /**
                 *获取企业组织成员列表
                 * @param req ListOrganizationMembersRequest
                 * @return ListOrganizationMembersOutcome
                 */
                ListOrganizationMembersOutcome ListOrganizationMembers(const Model::ListOrganizationMembersRequest &request);
                void ListOrganizationMembersAsync(const Model::ListOrganizationMembersRequest& request, const ListOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOrganizationMembersOutcomeCallable ListOrganizationMembersCallable(const Model::ListOrganizationMembersRequest& request);

                /**
                 *获取企业组织单元成员列表
                 * @param req ListOrganizationNodeMembersRequest
                 * @return ListOrganizationNodeMembersOutcome
                 */
                ListOrganizationNodeMembersOutcome ListOrganizationNodeMembers(const Model::ListOrganizationNodeMembersRequest &request);
                void ListOrganizationNodeMembersAsync(const Model::ListOrganizationNodeMembersRequest& request, const ListOrganizationNodeMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOrganizationNodeMembersOutcomeCallable ListOrganizationNodeMembersCallable(const Model::ListOrganizationNodeMembersRequest& request);

                /**
                 *获取企业组织单元列表
                 * @param req ListOrganizationNodesRequest
                 * @return ListOrganizationNodesOutcome
                 */
                ListOrganizationNodesOutcome ListOrganizationNodes(const Model::ListOrganizationNodesRequest &request);
                void ListOrganizationNodesAsync(const Model::ListOrganizationNodesRequest& request, const ListOrganizationNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOrganizationNodesOutcomeCallable ListOrganizationNodesCallable(const Model::ListOrganizationNodesRequest& request);

                /**
                 *移动成员到指定企业组织单元
                 * @param req MoveOrganizationMembersToNodeRequest
                 * @return MoveOrganizationMembersToNodeOutcome
                 */
                MoveOrganizationMembersToNodeOutcome MoveOrganizationMembersToNode(const Model::MoveOrganizationMembersToNodeRequest &request);
                void MoveOrganizationMembersToNodeAsync(const Model::MoveOrganizationMembersToNodeRequest& request, const MoveOrganizationMembersToNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MoveOrganizationMembersToNodeOutcomeCallable MoveOrganizationMembersToNodeCallable(const Model::MoveOrganizationMembersToNodeRequest& request);

                /**
                 *退出企业组织
                 * @param req QuitOrganizationRequest
                 * @return QuitOrganizationOutcome
                 */
                QuitOrganizationOutcome QuitOrganization(const Model::QuitOrganizationRequest &request);
                void QuitOrganizationAsync(const Model::QuitOrganizationRequest& request, const QuitOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuitOrganizationOutcomeCallable QuitOrganizationCallable(const Model::QuitOrganizationRequest& request);

                /**
                 *发送企业组织邀请
                 * @param req SendOrganizationInvitationRequest
                 * @return SendOrganizationInvitationOutcome
                 */
                SendOrganizationInvitationOutcome SendOrganizationInvitation(const Model::SendOrganizationInvitationRequest &request);
                void SendOrganizationInvitationAsync(const Model::SendOrganizationInvitationRequest& request, const SendOrganizationInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendOrganizationInvitationOutcomeCallable SendOrganizationInvitationCallable(const Model::SendOrganizationInvitationRequest& request);

                /**
                 *更新企业成员信息
                 * @param req UpdateOrganizationMemberRequest
                 * @return UpdateOrganizationMemberOutcome
                 */
                UpdateOrganizationMemberOutcome UpdateOrganizationMember(const Model::UpdateOrganizationMemberRequest &request);
                void UpdateOrganizationMemberAsync(const Model::UpdateOrganizationMemberRequest& request, const UpdateOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationMemberOutcomeCallable UpdateOrganizationMemberCallable(const Model::UpdateOrganizationMemberRequest& request);

                /**
                 *更新企业组织单元
                 * @param req UpdateOrganizationNodeRequest
                 * @return UpdateOrganizationNodeOutcome
                 */
                UpdateOrganizationNodeOutcome UpdateOrganizationNode(const Model::UpdateOrganizationNodeRequest &request);
                void UpdateOrganizationNodeAsync(const Model::UpdateOrganizationNodeRequest& request, const UpdateOrganizationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationNodeOutcomeCallable UpdateOrganizationNodeCallable(const Model::UpdateOrganizationNodeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_ORGANIZATIONCLIENT_H_
