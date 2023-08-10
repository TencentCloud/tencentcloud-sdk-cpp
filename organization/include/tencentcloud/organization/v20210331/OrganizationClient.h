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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_ORGANIZATIONCLIENT_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_ORGANIZATIONCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/organization/v20210331/model/AddOrganizationMemberEmailRequest.h>
#include <tencentcloud/organization/v20210331/model/AddOrganizationMemberEmailResponse.h>
#include <tencentcloud/organization/v20210331/model/AddOrganizationNodeRequest.h>
#include <tencentcloud/organization/v20210331/model/AddOrganizationNodeResponse.h>
#include <tencentcloud/organization/v20210331/model/BindOrganizationMemberAuthAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/BindOrganizationMemberAuthAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/CancelOrganizationMemberAuthAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/CancelOrganizationMemberAuthAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberAuthIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberAuthIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMemberAuthIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMemberAuthIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationNodesRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationNodesResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationAuthNodeRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationAuthNodeResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationFinancialByMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationFinancialByMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationFinancialByMonthRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationFinancialByMonthResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationFinancialByProductRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationFinancialByProductResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberAuthAccountsRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberAuthAccountsResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberAuthIdentitiesRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberAuthIdentitiesResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberEmailBindRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberEmailBindResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberPoliciesRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberPoliciesResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationNodesRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeOrganizationNodesResponse.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/MoveOrganizationNodeMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/MoveOrganizationNodeMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberEmailBindRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberEmailBindResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationNodeRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationNodeResponse.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            class OrganizationClient : public AbstractClient
            {
            public:
                OrganizationClient(const Credential &credential, const std::string &region);
                OrganizationClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddOrganizationMemberEmailResponse> AddOrganizationMemberEmailOutcome;
                typedef std::future<AddOrganizationMemberEmailOutcome> AddOrganizationMemberEmailOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddOrganizationMemberEmailRequest&, AddOrganizationMemberEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddOrganizationMemberEmailAsyncHandler;
                typedef Outcome<Core::Error, Model::AddOrganizationNodeResponse> AddOrganizationNodeOutcome;
                typedef std::future<AddOrganizationNodeOutcome> AddOrganizationNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddOrganizationNodeRequest&, AddOrganizationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddOrganizationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::BindOrganizationMemberAuthAccountResponse> BindOrganizationMemberAuthAccountOutcome;
                typedef std::future<BindOrganizationMemberAuthAccountOutcome> BindOrganizationMemberAuthAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::BindOrganizationMemberAuthAccountRequest&, BindOrganizationMemberAuthAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindOrganizationMemberAuthAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelOrganizationMemberAuthAccountResponse> CancelOrganizationMemberAuthAccountOutcome;
                typedef std::future<CancelOrganizationMemberAuthAccountOutcome> CancelOrganizationMemberAuthAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CancelOrganizationMemberAuthAccountRequest&, CancelOrganizationMemberAuthAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelOrganizationMemberAuthAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberResponse> CreateOrganizationMemberOutcome;
                typedef std::future<CreateOrganizationMemberOutcome> CreateOrganizationMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberRequest&, CreateOrganizationMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberAuthIdentityResponse> CreateOrganizationMemberAuthIdentityOutcome;
                typedef std::future<CreateOrganizationMemberAuthIdentityOutcome> CreateOrganizationMemberAuthIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberAuthIdentityRequest&, CreateOrganizationMemberAuthIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberAuthIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberPolicyResponse> CreateOrganizationMemberPolicyOutcome;
                typedef std::future<CreateOrganizationMemberPolicyOutcome> CreateOrganizationMemberPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberPolicyRequest&, CreateOrganizationMemberPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationMemberAuthIdentityResponse> DeleteOrganizationMemberAuthIdentityOutcome;
                typedef std::future<DeleteOrganizationMemberAuthIdentityOutcome> DeleteOrganizationMemberAuthIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationMemberAuthIdentityRequest&, DeleteOrganizationMemberAuthIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationMemberAuthIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationMembersResponse> DeleteOrganizationMembersOutcome;
                typedef std::future<DeleteOrganizationMembersOutcome> DeleteOrganizationMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationMembersRequest&, DeleteOrganizationMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationMembersPolicyResponse> DeleteOrganizationMembersPolicyOutcome;
                typedef std::future<DeleteOrganizationMembersPolicyOutcome> DeleteOrganizationMembersPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationMembersPolicyRequest&, DeleteOrganizationMembersPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationMembersPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationNodesResponse> DeleteOrganizationNodesOutcome;
                typedef std::future<DeleteOrganizationNodesOutcome> DeleteOrganizationNodesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationNodesRequest&, DeleteOrganizationNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationResponse> DescribeOrganizationOutcome;
                typedef std::future<DescribeOrganizationOutcome> DescribeOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationRequest&, DescribeOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationAuthNodeResponse> DescribeOrganizationAuthNodeOutcome;
                typedef std::future<DescribeOrganizationAuthNodeOutcome> DescribeOrganizationAuthNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationAuthNodeRequest&, DescribeOrganizationAuthNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationAuthNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationFinancialByMemberResponse> DescribeOrganizationFinancialByMemberOutcome;
                typedef std::future<DescribeOrganizationFinancialByMemberOutcome> DescribeOrganizationFinancialByMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationFinancialByMemberRequest&, DescribeOrganizationFinancialByMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationFinancialByMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationFinancialByMonthResponse> DescribeOrganizationFinancialByMonthOutcome;
                typedef std::future<DescribeOrganizationFinancialByMonthOutcome> DescribeOrganizationFinancialByMonthOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationFinancialByMonthRequest&, DescribeOrganizationFinancialByMonthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationFinancialByMonthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationFinancialByProductResponse> DescribeOrganizationFinancialByProductOutcome;
                typedef std::future<DescribeOrganizationFinancialByProductOutcome> DescribeOrganizationFinancialByProductOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationFinancialByProductRequest&, DescribeOrganizationFinancialByProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationFinancialByProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMemberAuthAccountsResponse> DescribeOrganizationMemberAuthAccountsOutcome;
                typedef std::future<DescribeOrganizationMemberAuthAccountsOutcome> DescribeOrganizationMemberAuthAccountsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMemberAuthAccountsRequest&, DescribeOrganizationMemberAuthAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMemberAuthAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMemberAuthIdentitiesResponse> DescribeOrganizationMemberAuthIdentitiesOutcome;
                typedef std::future<DescribeOrganizationMemberAuthIdentitiesOutcome> DescribeOrganizationMemberAuthIdentitiesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMemberAuthIdentitiesRequest&, DescribeOrganizationMemberAuthIdentitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMemberAuthIdentitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMemberEmailBindResponse> DescribeOrganizationMemberEmailBindOutcome;
                typedef std::future<DescribeOrganizationMemberEmailBindOutcome> DescribeOrganizationMemberEmailBindOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMemberEmailBindRequest&, DescribeOrganizationMemberEmailBindOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMemberEmailBindAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMemberPoliciesResponse> DescribeOrganizationMemberPoliciesOutcome;
                typedef std::future<DescribeOrganizationMemberPoliciesOutcome> DescribeOrganizationMemberPoliciesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMemberPoliciesRequest&, DescribeOrganizationMemberPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMemberPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationMembersResponse> DescribeOrganizationMembersOutcome;
                typedef std::future<DescribeOrganizationMembersOutcome> DescribeOrganizationMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationMembersRequest&, DescribeOrganizationMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationNodesResponse> DescribeOrganizationNodesOutcome;
                typedef std::future<DescribeOrganizationNodesOutcome> DescribeOrganizationNodesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeOrganizationNodesRequest&, DescribeOrganizationNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrganizationIdentityResponse> ListOrganizationIdentityOutcome;
                typedef std::future<ListOrganizationIdentityOutcome> ListOrganizationIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrganizationIdentityRequest&, ListOrganizationIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::MoveOrganizationNodeMembersResponse> MoveOrganizationNodeMembersOutcome;
                typedef std::future<MoveOrganizationNodeMembersOutcome> MoveOrganizationNodeMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::MoveOrganizationNodeMembersRequest&, MoveOrganizationNodeMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MoveOrganizationNodeMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationMemberResponse> UpdateOrganizationMemberOutcome;
                typedef std::future<UpdateOrganizationMemberOutcome> UpdateOrganizationMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationMemberRequest&, UpdateOrganizationMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationMemberEmailBindResponse> UpdateOrganizationMemberEmailBindOutcome;
                typedef std::future<UpdateOrganizationMemberEmailBindOutcome> UpdateOrganizationMemberEmailBindOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationMemberEmailBindRequest&, UpdateOrganizationMemberEmailBindOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationMemberEmailBindAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationNodeResponse> UpdateOrganizationNodeOutcome;
                typedef std::future<UpdateOrganizationNodeOutcome> UpdateOrganizationNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationNodeRequest&, UpdateOrganizationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationNodeAsyncHandler;



                /**
                 *添加组织成员邮箱
                 * @param req AddOrganizationMemberEmailRequest
                 * @return AddOrganizationMemberEmailOutcome
                 */
                AddOrganizationMemberEmailOutcome AddOrganizationMemberEmail(const Model::AddOrganizationMemberEmailRequest &request);
                void AddOrganizationMemberEmailAsync(const Model::AddOrganizationMemberEmailRequest& request, const AddOrganizationMemberEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddOrganizationMemberEmailOutcomeCallable AddOrganizationMemberEmailCallable(const Model::AddOrganizationMemberEmailRequest& request);

                /**
                 *添加企业组织节点
                 * @param req AddOrganizationNodeRequest
                 * @return AddOrganizationNodeOutcome
                 */
                AddOrganizationNodeOutcome AddOrganizationNode(const Model::AddOrganizationNodeRequest &request);
                void AddOrganizationNodeAsync(const Model::AddOrganizationNodeRequest& request, const AddOrganizationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddOrganizationNodeOutcomeCallable AddOrganizationNodeCallable(const Model::AddOrganizationNodeRequest& request);

                /**
                 *绑定组织成员和组织管理员子账号的授权关系
                 * @param req BindOrganizationMemberAuthAccountRequest
                 * @return BindOrganizationMemberAuthAccountOutcome
                 */
                BindOrganizationMemberAuthAccountOutcome BindOrganizationMemberAuthAccount(const Model::BindOrganizationMemberAuthAccountRequest &request);
                void BindOrganizationMemberAuthAccountAsync(const Model::BindOrganizationMemberAuthAccountRequest& request, const BindOrganizationMemberAuthAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindOrganizationMemberAuthAccountOutcomeCallable BindOrganizationMemberAuthAccountCallable(const Model::BindOrganizationMemberAuthAccountRequest& request);

                /**
                 *取消组织成员和组织管理员子账号的授权关系

                 * @param req CancelOrganizationMemberAuthAccountRequest
                 * @return CancelOrganizationMemberAuthAccountOutcome
                 */
                CancelOrganizationMemberAuthAccountOutcome CancelOrganizationMemberAuthAccount(const Model::CancelOrganizationMemberAuthAccountRequest &request);
                void CancelOrganizationMemberAuthAccountAsync(const Model::CancelOrganizationMemberAuthAccountRequest& request, const CancelOrganizationMemberAuthAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelOrganizationMemberAuthAccountOutcomeCallable CancelOrganizationMemberAuthAccountCallable(const Model::CancelOrganizationMemberAuthAccountRequest& request);

                /**
                 *创建组织成员
                 * @param req CreateOrganizationMemberRequest
                 * @return CreateOrganizationMemberOutcome
                 */
                CreateOrganizationMemberOutcome CreateOrganizationMember(const Model::CreateOrganizationMemberRequest &request);
                void CreateOrganizationMemberAsync(const Model::CreateOrganizationMemberRequest& request, const CreateOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMemberOutcomeCallable CreateOrganizationMemberCallable(const Model::CreateOrganizationMemberRequest& request);

                /**
                 *添加组织成员访问授权
                 * @param req CreateOrganizationMemberAuthIdentityRequest
                 * @return CreateOrganizationMemberAuthIdentityOutcome
                 */
                CreateOrganizationMemberAuthIdentityOutcome CreateOrganizationMemberAuthIdentity(const Model::CreateOrganizationMemberAuthIdentityRequest &request);
                void CreateOrganizationMemberAuthIdentityAsync(const Model::CreateOrganizationMemberAuthIdentityRequest& request, const CreateOrganizationMemberAuthIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMemberAuthIdentityOutcomeCallable CreateOrganizationMemberAuthIdentityCallable(const Model::CreateOrganizationMemberAuthIdentityRequest& request);

                /**
                 *创建组织成员访问授权策略
                 * @param req CreateOrganizationMemberPolicyRequest
                 * @return CreateOrganizationMemberPolicyOutcome
                 */
                CreateOrganizationMemberPolicyOutcome CreateOrganizationMemberPolicy(const Model::CreateOrganizationMemberPolicyRequest &request);
                void CreateOrganizationMemberPolicyAsync(const Model::CreateOrganizationMemberPolicyRequest& request, const CreateOrganizationMemberPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMemberPolicyOutcomeCallable CreateOrganizationMemberPolicyCallable(const Model::CreateOrganizationMemberPolicyRequest& request);

                /**
                 *删除组织成员访问授权
                 * @param req DeleteOrganizationMemberAuthIdentityRequest
                 * @return DeleteOrganizationMemberAuthIdentityOutcome
                 */
                DeleteOrganizationMemberAuthIdentityOutcome DeleteOrganizationMemberAuthIdentity(const Model::DeleteOrganizationMemberAuthIdentityRequest &request);
                void DeleteOrganizationMemberAuthIdentityAsync(const Model::DeleteOrganizationMemberAuthIdentityRequest& request, const DeleteOrganizationMemberAuthIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationMemberAuthIdentityOutcomeCallable DeleteOrganizationMemberAuthIdentityCallable(const Model::DeleteOrganizationMemberAuthIdentityRequest& request);

                /**
                 *批量删除企业组织成员
                 * @param req DeleteOrganizationMembersRequest
                 * @return DeleteOrganizationMembersOutcome
                 */
                DeleteOrganizationMembersOutcome DeleteOrganizationMembers(const Model::DeleteOrganizationMembersRequest &request);
                void DeleteOrganizationMembersAsync(const Model::DeleteOrganizationMembersRequest& request, const DeleteOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationMembersOutcomeCallable DeleteOrganizationMembersCallable(const Model::DeleteOrganizationMembersRequest& request);

                /**
                 *删除组织成员访问策略
                 * @param req DeleteOrganizationMembersPolicyRequest
                 * @return DeleteOrganizationMembersPolicyOutcome
                 */
                DeleteOrganizationMembersPolicyOutcome DeleteOrganizationMembersPolicy(const Model::DeleteOrganizationMembersPolicyRequest &request);
                void DeleteOrganizationMembersPolicyAsync(const Model::DeleteOrganizationMembersPolicyRequest& request, const DeleteOrganizationMembersPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationMembersPolicyOutcomeCallable DeleteOrganizationMembersPolicyCallable(const Model::DeleteOrganizationMembersPolicyRequest& request);

                /**
                 *批量删除企业组织节点
                 * @param req DeleteOrganizationNodesRequest
                 * @return DeleteOrganizationNodesOutcome
                 */
                DeleteOrganizationNodesOutcome DeleteOrganizationNodes(const Model::DeleteOrganizationNodesRequest &request);
                void DeleteOrganizationNodesAsync(const Model::DeleteOrganizationNodesRequest& request, const DeleteOrganizationNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationNodesOutcomeCallable DeleteOrganizationNodesCallable(const Model::DeleteOrganizationNodesRequest& request);

                /**
                 *获取企业组织信息
                 * @param req DescribeOrganizationRequest
                 * @return DescribeOrganizationOutcome
                 */
                DescribeOrganizationOutcome DescribeOrganization(const Model::DescribeOrganizationRequest &request);
                void DescribeOrganizationAsync(const Model::DescribeOrganizationRequest& request, const DescribeOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationOutcomeCallable DescribeOrganizationCallable(const Model::DescribeOrganizationRequest& request);

                /**
                 *获取已设置管理员的互信主体关系列表
                 * @param req DescribeOrganizationAuthNodeRequest
                 * @return DescribeOrganizationAuthNodeOutcome
                 */
                DescribeOrganizationAuthNodeOutcome DescribeOrganizationAuthNode(const Model::DescribeOrganizationAuthNodeRequest &request);
                void DescribeOrganizationAuthNodeAsync(const Model::DescribeOrganizationAuthNodeRequest& request, const DescribeOrganizationAuthNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationAuthNodeOutcomeCallable DescribeOrganizationAuthNodeCallable(const Model::DescribeOrganizationAuthNodeRequest& request);

                /**
                 *以成员维度获取组织财务信息
                 * @param req DescribeOrganizationFinancialByMemberRequest
                 * @return DescribeOrganizationFinancialByMemberOutcome
                 */
                DescribeOrganizationFinancialByMemberOutcome DescribeOrganizationFinancialByMember(const Model::DescribeOrganizationFinancialByMemberRequest &request);
                void DescribeOrganizationFinancialByMemberAsync(const Model::DescribeOrganizationFinancialByMemberRequest& request, const DescribeOrganizationFinancialByMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationFinancialByMemberOutcomeCallable DescribeOrganizationFinancialByMemberCallable(const Model::DescribeOrganizationFinancialByMemberRequest& request);

                /**
                 *以月维度获取组织财务信息趋势
                 * @param req DescribeOrganizationFinancialByMonthRequest
                 * @return DescribeOrganizationFinancialByMonthOutcome
                 */
                DescribeOrganizationFinancialByMonthOutcome DescribeOrganizationFinancialByMonth(const Model::DescribeOrganizationFinancialByMonthRequest &request);
                void DescribeOrganizationFinancialByMonthAsync(const Model::DescribeOrganizationFinancialByMonthRequest& request, const DescribeOrganizationFinancialByMonthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationFinancialByMonthOutcomeCallable DescribeOrganizationFinancialByMonthCallable(const Model::DescribeOrganizationFinancialByMonthRequest& request);

                /**
                 *以产品维度获取组织财务信息
                 * @param req DescribeOrganizationFinancialByProductRequest
                 * @return DescribeOrganizationFinancialByProductOutcome
                 */
                DescribeOrganizationFinancialByProductOutcome DescribeOrganizationFinancialByProduct(const Model::DescribeOrganizationFinancialByProductRequest &request);
                void DescribeOrganizationFinancialByProductAsync(const Model::DescribeOrganizationFinancialByProductRequest& request, const DescribeOrganizationFinancialByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationFinancialByProductOutcomeCallable DescribeOrganizationFinancialByProductCallable(const Model::DescribeOrganizationFinancialByProductRequest& request);

                /**
                 *获取组织成员被绑定授权关系的子账号列表
                 * @param req DescribeOrganizationMemberAuthAccountsRequest
                 * @return DescribeOrganizationMemberAuthAccountsOutcome
                 */
                DescribeOrganizationMemberAuthAccountsOutcome DescribeOrganizationMemberAuthAccounts(const Model::DescribeOrganizationMemberAuthAccountsRequest &request);
                void DescribeOrganizationMemberAuthAccountsAsync(const Model::DescribeOrganizationMemberAuthAccountsRequest& request, const DescribeOrganizationMemberAuthAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMemberAuthAccountsOutcomeCallable DescribeOrganizationMemberAuthAccountsCallable(const Model::DescribeOrganizationMemberAuthAccountsRequest& request);

                /**
                 *获取组织成员可被管理的身份列表
                 * @param req DescribeOrganizationMemberAuthIdentitiesRequest
                 * @return DescribeOrganizationMemberAuthIdentitiesOutcome
                 */
                DescribeOrganizationMemberAuthIdentitiesOutcome DescribeOrganizationMemberAuthIdentities(const Model::DescribeOrganizationMemberAuthIdentitiesRequest &request);
                void DescribeOrganizationMemberAuthIdentitiesAsync(const Model::DescribeOrganizationMemberAuthIdentitiesRequest& request, const DescribeOrganizationMemberAuthIdentitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMemberAuthIdentitiesOutcomeCallable DescribeOrganizationMemberAuthIdentitiesCallable(const Model::DescribeOrganizationMemberAuthIdentitiesRequest& request);

                /**
                 *查询成员邮箱绑定详细信息
                 * @param req DescribeOrganizationMemberEmailBindRequest
                 * @return DescribeOrganizationMemberEmailBindOutcome
                 */
                DescribeOrganizationMemberEmailBindOutcome DescribeOrganizationMemberEmailBind(const Model::DescribeOrganizationMemberEmailBindRequest &request);
                void DescribeOrganizationMemberEmailBindAsync(const Model::DescribeOrganizationMemberEmailBindRequest& request, const DescribeOrganizationMemberEmailBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMemberEmailBindOutcomeCallable DescribeOrganizationMemberEmailBindCallable(const Model::DescribeOrganizationMemberEmailBindRequest& request);

                /**
                 *获取组织成员的授权策略列表
                 * @param req DescribeOrganizationMemberPoliciesRequest
                 * @return DescribeOrganizationMemberPoliciesOutcome
                 */
                DescribeOrganizationMemberPoliciesOutcome DescribeOrganizationMemberPolicies(const Model::DescribeOrganizationMemberPoliciesRequest &request);
                void DescribeOrganizationMemberPoliciesAsync(const Model::DescribeOrganizationMemberPoliciesRequest& request, const DescribeOrganizationMemberPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMemberPoliciesOutcomeCallable DescribeOrganizationMemberPoliciesCallable(const Model::DescribeOrganizationMemberPoliciesRequest& request);

                /**
                 *获取企业组织成员列表
                 * @param req DescribeOrganizationMembersRequest
                 * @return DescribeOrganizationMembersOutcome
                 */
                DescribeOrganizationMembersOutcome DescribeOrganizationMembers(const Model::DescribeOrganizationMembersRequest &request);
                void DescribeOrganizationMembersAsync(const Model::DescribeOrganizationMembersRequest& request, const DescribeOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationMembersOutcomeCallable DescribeOrganizationMembersCallable(const Model::DescribeOrganizationMembersRequest& request);

                /**
                 *获取组织节点列表
                 * @param req DescribeOrganizationNodesRequest
                 * @return DescribeOrganizationNodesOutcome
                 */
                DescribeOrganizationNodesOutcome DescribeOrganizationNodes(const Model::DescribeOrganizationNodesRequest &request);
                void DescribeOrganizationNodesAsync(const Model::DescribeOrganizationNodesRequest& request, const DescribeOrganizationNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationNodesOutcomeCallable DescribeOrganizationNodesCallable(const Model::DescribeOrganizationNodesRequest& request);

                /**
                 *获取组织成员访问身份列表
                 * @param req ListOrganizationIdentityRequest
                 * @return ListOrganizationIdentityOutcome
                 */
                ListOrganizationIdentityOutcome ListOrganizationIdentity(const Model::ListOrganizationIdentityRequest &request);
                void ListOrganizationIdentityAsync(const Model::ListOrganizationIdentityRequest& request, const ListOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOrganizationIdentityOutcomeCallable ListOrganizationIdentityCallable(const Model::ListOrganizationIdentityRequest& request);

                /**
                 *移动成员到指定企业组织节点
                 * @param req MoveOrganizationNodeMembersRequest
                 * @return MoveOrganizationNodeMembersOutcome
                 */
                MoveOrganizationNodeMembersOutcome MoveOrganizationNodeMembers(const Model::MoveOrganizationNodeMembersRequest &request);
                void MoveOrganizationNodeMembersAsync(const Model::MoveOrganizationNodeMembersRequest& request, const MoveOrganizationNodeMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MoveOrganizationNodeMembersOutcomeCallable MoveOrganizationNodeMembersCallable(const Model::MoveOrganizationNodeMembersRequest& request);

                /**
                 *更新组织成员信息
                 * @param req UpdateOrganizationMemberRequest
                 * @return UpdateOrganizationMemberOutcome
                 */
                UpdateOrganizationMemberOutcome UpdateOrganizationMember(const Model::UpdateOrganizationMemberRequest &request);
                void UpdateOrganizationMemberAsync(const Model::UpdateOrganizationMemberRequest& request, const UpdateOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationMemberOutcomeCallable UpdateOrganizationMemberCallable(const Model::UpdateOrganizationMemberRequest& request);

                /**
                 *修改绑定成员邮箱
                 * @param req UpdateOrganizationMemberEmailBindRequest
                 * @return UpdateOrganizationMemberEmailBindOutcome
                 */
                UpdateOrganizationMemberEmailBindOutcome UpdateOrganizationMemberEmailBind(const Model::UpdateOrganizationMemberEmailBindRequest &request);
                void UpdateOrganizationMemberEmailBindAsync(const Model::UpdateOrganizationMemberEmailBindRequest& request, const UpdateOrganizationMemberEmailBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationMemberEmailBindOutcomeCallable UpdateOrganizationMemberEmailBindCallable(const Model::UpdateOrganizationMemberEmailBindRequest& request);

                /**
                 *更新企业组织节点
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

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_ORGANIZATIONCLIENT_H_
