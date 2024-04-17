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
#include <tencentcloud/organization/v20210331/model/AddShareUnitRequest.h>
#include <tencentcloud/organization/v20210331/model/AddShareUnitResponse.h>
#include <tencentcloud/organization/v20210331/model/AddShareUnitMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/AddShareUnitMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/AddShareUnitResourcesRequest.h>
#include <tencentcloud/organization/v20210331/model/AddShareUnitResourcesResponse.h>
#include <tencentcloud/organization/v20210331/model/AttachPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/AttachPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/BindOrganizationMemberAuthAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/BindOrganizationMemberAuthAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/CancelOrganizationMemberAuthAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/CancelOrganizationMemberAuthAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/CheckAccountDeleteRequest.h>
#include <tencentcloud/organization/v20210331/model/CheckAccountDeleteResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberAuthIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberAuthIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMembersPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/CreateOrganizationMembersPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/CreatePolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/CreatePolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteAccountRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteAccountResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMemberAuthIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMemberAuthIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationMembersPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationNodesRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteOrganizationNodesResponse.h>
#include <tencentcloud/organization/v20210331/model/DeletePolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/DeletePolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteShareUnitRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteShareUnitResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteShareUnitMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteShareUnitMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/DeleteShareUnitResourcesRequest.h>
#include <tencentcloud/organization/v20210331/model/DeleteShareUnitResourcesResponse.h>
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
#include <tencentcloud/organization/v20210331/model/DescribePolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribePolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribePolicyConfigRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribePolicyConfigResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareAreasRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareAreasResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareUnitMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareUnitMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareUnitResourcesRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareUnitResourcesResponse.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareUnitsRequest.h>
#include <tencentcloud/organization/v20210331/model/DescribeShareUnitsResponse.h>
#include <tencentcloud/organization/v20210331/model/DetachPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/DetachPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/DisablePolicyTypeRequest.h>
#include <tencentcloud/organization/v20210331/model/DisablePolicyTypeResponse.h>
#include <tencentcloud/organization/v20210331/model/EnablePolicyTypeRequest.h>
#include <tencentcloud/organization/v20210331/model/EnablePolicyTypeResponse.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/ListOrganizationIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/ListPoliciesRequest.h>
#include <tencentcloud/organization/v20210331/model/ListPoliciesResponse.h>
#include <tencentcloud/organization/v20210331/model/ListPoliciesForTargetRequest.h>
#include <tencentcloud/organization/v20210331/model/ListPoliciesForTargetResponse.h>
#include <tencentcloud/organization/v20210331/model/ListTargetsForPolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/ListTargetsForPolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/MoveOrganizationNodeMembersRequest.h>
#include <tencentcloud/organization/v20210331/model/MoveOrganizationNodeMembersResponse.h>
#include <tencentcloud/organization/v20210331/model/QuitOrganizationRequest.h>
#include <tencentcloud/organization/v20210331/model/QuitOrganizationResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationIdentityRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationIdentityResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberEmailBindRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberEmailBindResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationNodeRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateOrganizationNodeResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdatePolicyRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdatePolicyResponse.h>
#include <tencentcloud/organization/v20210331/model/UpdateShareUnitRequest.h>
#include <tencentcloud/organization/v20210331/model/UpdateShareUnitResponse.h>


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
                typedef Outcome<Core::Error, Model::AddShareUnitResponse> AddShareUnitOutcome;
                typedef std::future<AddShareUnitOutcome> AddShareUnitOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddShareUnitRequest&, AddShareUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddShareUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::AddShareUnitMembersResponse> AddShareUnitMembersOutcome;
                typedef std::future<AddShareUnitMembersOutcome> AddShareUnitMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddShareUnitMembersRequest&, AddShareUnitMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddShareUnitMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::AddShareUnitResourcesResponse> AddShareUnitResourcesOutcome;
                typedef std::future<AddShareUnitResourcesOutcome> AddShareUnitResourcesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AddShareUnitResourcesRequest&, AddShareUnitResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddShareUnitResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachPolicyResponse> AttachPolicyOutcome;
                typedef std::future<AttachPolicyOutcome> AttachPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::AttachPolicyRequest&, AttachPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::BindOrganizationMemberAuthAccountResponse> BindOrganizationMemberAuthAccountOutcome;
                typedef std::future<BindOrganizationMemberAuthAccountOutcome> BindOrganizationMemberAuthAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::BindOrganizationMemberAuthAccountRequest&, BindOrganizationMemberAuthAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindOrganizationMemberAuthAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelOrganizationMemberAuthAccountResponse> CancelOrganizationMemberAuthAccountOutcome;
                typedef std::future<CancelOrganizationMemberAuthAccountOutcome> CancelOrganizationMemberAuthAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CancelOrganizationMemberAuthAccountRequest&, CancelOrganizationMemberAuthAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelOrganizationMemberAuthAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckAccountDeleteResponse> CheckAccountDeleteOutcome;
                typedef std::future<CheckAccountDeleteOutcome> CheckAccountDeleteOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CheckAccountDeleteRequest&, CheckAccountDeleteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAccountDeleteAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationResponse> CreateOrganizationOutcome;
                typedef std::future<CreateOrganizationOutcome> CreateOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationRequest&, CreateOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationIdentityResponse> CreateOrganizationIdentityOutcome;
                typedef std::future<CreateOrganizationIdentityOutcome> CreateOrganizationIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationIdentityRequest&, CreateOrganizationIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberResponse> CreateOrganizationMemberOutcome;
                typedef std::future<CreateOrganizationMemberOutcome> CreateOrganizationMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberRequest&, CreateOrganizationMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberAuthIdentityResponse> CreateOrganizationMemberAuthIdentityOutcome;
                typedef std::future<CreateOrganizationMemberAuthIdentityOutcome> CreateOrganizationMemberAuthIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberAuthIdentityRequest&, CreateOrganizationMemberAuthIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberAuthIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMemberPolicyResponse> CreateOrganizationMemberPolicyOutcome;
                typedef std::future<CreateOrganizationMemberPolicyOutcome> CreateOrganizationMemberPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMemberPolicyRequest&, CreateOrganizationMemberPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMemberPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationMembersPolicyResponse> CreateOrganizationMembersPolicyOutcome;
                typedef std::future<CreateOrganizationMembersPolicyOutcome> CreateOrganizationMembersPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreateOrganizationMembersPolicyRequest&, CreateOrganizationMembersPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationMembersPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePolicyResponse> CreatePolicyOutcome;
                typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::CreatePolicyRequest&, CreatePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountResponse> DeleteAccountOutcome;
                typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteAccountRequest&, DeleteAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationResponse> DeleteOrganizationOutcome;
                typedef std::future<DeleteOrganizationOutcome> DeleteOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationRequest&, DeleteOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationIdentityResponse> DeleteOrganizationIdentityOutcome;
                typedef std::future<DeleteOrganizationIdentityOutcome> DeleteOrganizationIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteOrganizationIdentityRequest&, DeleteOrganizationIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationIdentityAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeletePolicyResponse> DeletePolicyOutcome;
                typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeletePolicyRequest&, DeletePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteShareUnitResponse> DeleteShareUnitOutcome;
                typedef std::future<DeleteShareUnitOutcome> DeleteShareUnitOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteShareUnitRequest&, DeleteShareUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShareUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteShareUnitMembersResponse> DeleteShareUnitMembersOutcome;
                typedef std::future<DeleteShareUnitMembersOutcome> DeleteShareUnitMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteShareUnitMembersRequest&, DeleteShareUnitMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShareUnitMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteShareUnitResourcesResponse> DeleteShareUnitResourcesOutcome;
                typedef std::future<DeleteShareUnitResourcesOutcome> DeleteShareUnitResourcesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DeleteShareUnitResourcesRequest&, DeleteShareUnitResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShareUnitResourcesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribePolicyResponse> DescribePolicyOutcome;
                typedef std::future<DescribePolicyOutcome> DescribePolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribePolicyRequest&, DescribePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyConfigResponse> DescribePolicyConfigOutcome;
                typedef std::future<DescribePolicyConfigOutcome> DescribePolicyConfigOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribePolicyConfigRequest&, DescribePolicyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShareAreasResponse> DescribeShareAreasOutcome;
                typedef std::future<DescribeShareAreasOutcome> DescribeShareAreasOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeShareAreasRequest&, DescribeShareAreasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShareAreasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShareUnitMembersResponse> DescribeShareUnitMembersOutcome;
                typedef std::future<DescribeShareUnitMembersOutcome> DescribeShareUnitMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeShareUnitMembersRequest&, DescribeShareUnitMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShareUnitMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShareUnitResourcesResponse> DescribeShareUnitResourcesOutcome;
                typedef std::future<DescribeShareUnitResourcesOutcome> DescribeShareUnitResourcesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeShareUnitResourcesRequest&, DescribeShareUnitResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShareUnitResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShareUnitsResponse> DescribeShareUnitsOutcome;
                typedef std::future<DescribeShareUnitsOutcome> DescribeShareUnitsOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DescribeShareUnitsRequest&, DescribeShareUnitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShareUnitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachPolicyResponse> DetachPolicyOutcome;
                typedef std::future<DetachPolicyOutcome> DetachPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DetachPolicyRequest&, DetachPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DisablePolicyTypeResponse> DisablePolicyTypeOutcome;
                typedef std::future<DisablePolicyTypeOutcome> DisablePolicyTypeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::DisablePolicyTypeRequest&, DisablePolicyTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisablePolicyTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::EnablePolicyTypeResponse> EnablePolicyTypeOutcome;
                typedef std::future<EnablePolicyTypeOutcome> EnablePolicyTypeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::EnablePolicyTypeRequest&, EnablePolicyTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnablePolicyTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOrganizationIdentityResponse> ListOrganizationIdentityOutcome;
                typedef std::future<ListOrganizationIdentityOutcome> ListOrganizationIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListOrganizationIdentityRequest&, ListOrganizationIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::ListPoliciesResponse> ListPoliciesOutcome;
                typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListPoliciesRequest&, ListPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListPoliciesForTargetResponse> ListPoliciesForTargetOutcome;
                typedef std::future<ListPoliciesForTargetOutcome> ListPoliciesForTargetOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListPoliciesForTargetRequest&, ListPoliciesForTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesForTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTargetsForPolicyResponse> ListTargetsForPolicyOutcome;
                typedef std::future<ListTargetsForPolicyOutcome> ListTargetsForPolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::ListTargetsForPolicyRequest&, ListTargetsForPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTargetsForPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::MoveOrganizationNodeMembersResponse> MoveOrganizationNodeMembersOutcome;
                typedef std::future<MoveOrganizationNodeMembersOutcome> MoveOrganizationNodeMembersOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::MoveOrganizationNodeMembersRequest&, MoveOrganizationNodeMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MoveOrganizationNodeMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::QuitOrganizationResponse> QuitOrganizationOutcome;
                typedef std::future<QuitOrganizationOutcome> QuitOrganizationOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::QuitOrganizationRequest&, QuitOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QuitOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationIdentityResponse> UpdateOrganizationIdentityOutcome;
                typedef std::future<UpdateOrganizationIdentityOutcome> UpdateOrganizationIdentityOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationIdentityRequest&, UpdateOrganizationIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationMemberResponse> UpdateOrganizationMemberOutcome;
                typedef std::future<UpdateOrganizationMemberOutcome> UpdateOrganizationMemberOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationMemberRequest&, UpdateOrganizationMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationMemberEmailBindResponse> UpdateOrganizationMemberEmailBindOutcome;
                typedef std::future<UpdateOrganizationMemberEmailBindOutcome> UpdateOrganizationMemberEmailBindOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationMemberEmailBindRequest&, UpdateOrganizationMemberEmailBindOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationMemberEmailBindAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOrganizationNodeResponse> UpdateOrganizationNodeOutcome;
                typedef std::future<UpdateOrganizationNodeOutcome> UpdateOrganizationNodeOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateOrganizationNodeRequest&, UpdateOrganizationNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePolicyResponse> UpdatePolicyOutcome;
                typedef std::future<UpdatePolicyOutcome> UpdatePolicyOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdatePolicyRequest&, UpdatePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateShareUnitResponse> UpdateShareUnitOutcome;
                typedef std::future<UpdateShareUnitOutcome> UpdateShareUnitOutcomeCallable;
                typedef std::function<void(const OrganizationClient*, const Model::UpdateShareUnitRequest&, UpdateShareUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateShareUnitAsyncHandler;



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
                 *创建共享单元，只有企业组织管理员可创建。
                 * @param req AddShareUnitRequest
                 * @return AddShareUnitOutcome
                 */
                AddShareUnitOutcome AddShareUnit(const Model::AddShareUnitRequest &request);
                void AddShareUnitAsync(const Model::AddShareUnitRequest& request, const AddShareUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddShareUnitOutcomeCallable AddShareUnitCallable(const Model::AddShareUnitRequest& request);

                /**
                 *添加共享单元成员
                 * @param req AddShareUnitMembersRequest
                 * @return AddShareUnitMembersOutcome
                 */
                AddShareUnitMembersOutcome AddShareUnitMembers(const Model::AddShareUnitMembersRequest &request);
                void AddShareUnitMembersAsync(const Model::AddShareUnitMembersRequest& request, const AddShareUnitMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddShareUnitMembersOutcomeCallable AddShareUnitMembersCallable(const Model::AddShareUnitMembersRequest& request);

                /**
                 *添加共享单元资源
                 * @param req AddShareUnitResourcesRequest
                 * @return AddShareUnitResourcesOutcome
                 */
                AddShareUnitResourcesOutcome AddShareUnitResources(const Model::AddShareUnitResourcesRequest &request);
                void AddShareUnitResourcesAsync(const Model::AddShareUnitResourcesRequest& request, const AddShareUnitResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddShareUnitResourcesOutcomeCallable AddShareUnitResourcesCallable(const Model::AddShareUnitResourcesRequest& request);

                /**
                 *绑定策略
                 * @param req AttachPolicyRequest
                 * @return AttachPolicyOutcome
                 */
                AttachPolicyOutcome AttachPolicy(const Model::AttachPolicyRequest &request);
                void AttachPolicyAsync(const Model::AttachPolicyRequest& request, const AttachPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachPolicyOutcomeCallable AttachPolicyCallable(const Model::AttachPolicyRequest& request);

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
                 *成员账号删除检查
                 * @param req CheckAccountDeleteRequest
                 * @return CheckAccountDeleteOutcome
                 */
                CheckAccountDeleteOutcome CheckAccountDelete(const Model::CheckAccountDeleteRequest &request);
                void CheckAccountDeleteAsync(const Model::CheckAccountDeleteRequest& request, const CheckAccountDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAccountDeleteOutcomeCallable CheckAccountDeleteCallable(const Model::CheckAccountDeleteRequest& request);

                /**
                 *创建企业组织
                 * @param req CreateOrganizationRequest
                 * @return CreateOrganizationOutcome
                 */
                CreateOrganizationOutcome CreateOrganization(const Model::CreateOrganizationRequest &request);
                void CreateOrganizationAsync(const Model::CreateOrganizationRequest& request, const CreateOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationOutcomeCallable CreateOrganizationCallable(const Model::CreateOrganizationRequest& request);

                /**
                 *添加组织身份
                 * @param req CreateOrganizationIdentityRequest
                 * @return CreateOrganizationIdentityOutcome
                 */
                CreateOrganizationIdentityOutcome CreateOrganizationIdentity(const Model::CreateOrganizationIdentityRequest &request);
                void CreateOrganizationIdentityAsync(const Model::CreateOrganizationIdentityRequest& request, const CreateOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationIdentityOutcomeCallable CreateOrganizationIdentityCallable(const Model::CreateOrganizationIdentityRequest& request);

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
                 *创建组织成员访问策略
                 * @param req CreateOrganizationMembersPolicyRequest
                 * @return CreateOrganizationMembersPolicyOutcome
                 */
                CreateOrganizationMembersPolicyOutcome CreateOrganizationMembersPolicy(const Model::CreateOrganizationMembersPolicyRequest &request);
                void CreateOrganizationMembersPolicyAsync(const Model::CreateOrganizationMembersPolicyRequest& request, const CreateOrganizationMembersPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationMembersPolicyOutcomeCallable CreateOrganizationMembersPolicyCallable(const Model::CreateOrganizationMembersPolicyRequest& request);

                /**
                 *创建一个特殊类型的策略，你可以关联到企业组织Root节点、企业单元或者企业的成员账号。
                 * @param req CreatePolicyRequest
                 * @return CreatePolicyOutcome
                 */
                CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest &request);
                void CreatePolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePolicyOutcomeCallable CreatePolicyCallable(const Model::CreatePolicyRequest& request);

                /**
                 *删除成员账号
                 * @param req DeleteAccountRequest
                 * @return DeleteAccountOutcome
                 */
                DeleteAccountOutcome DeleteAccount(const Model::DeleteAccountRequest &request);
                void DeleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountOutcomeCallable DeleteAccountCallable(const Model::DeleteAccountRequest& request);

                /**
                 *删除企业组织
                 * @param req DeleteOrganizationRequest
                 * @return DeleteOrganizationOutcome
                 */
                DeleteOrganizationOutcome DeleteOrganization(const Model::DeleteOrganizationRequest &request);
                void DeleteOrganizationAsync(const Model::DeleteOrganizationRequest& request, const DeleteOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationOutcomeCallable DeleteOrganizationCallable(const Model::DeleteOrganizationRequest& request);

                /**
                 *删除组织身份
                 * @param req DeleteOrganizationIdentityRequest
                 * @return DeleteOrganizationIdentityOutcome
                 */
                DeleteOrganizationIdentityOutcome DeleteOrganizationIdentity(const Model::DeleteOrganizationIdentityRequest &request);
                void DeleteOrganizationIdentityAsync(const Model::DeleteOrganizationIdentityRequest& request, const DeleteOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationIdentityOutcomeCallable DeleteOrganizationIdentityCallable(const Model::DeleteOrganizationIdentityRequest& request);

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
                 *删除策略
                 * @param req DeletePolicyRequest
                 * @return DeletePolicyOutcome
                 */
                DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest &request);
                void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request);

                /**
                 *删除共享单元。
                 * @param req DeleteShareUnitRequest
                 * @return DeleteShareUnitOutcome
                 */
                DeleteShareUnitOutcome DeleteShareUnit(const Model::DeleteShareUnitRequest &request);
                void DeleteShareUnitAsync(const Model::DeleteShareUnitRequest& request, const DeleteShareUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteShareUnitOutcomeCallable DeleteShareUnitCallable(const Model::DeleteShareUnitRequest& request);

                /**
                 *删除共享单元成员
                 * @param req DeleteShareUnitMembersRequest
                 * @return DeleteShareUnitMembersOutcome
                 */
                DeleteShareUnitMembersOutcome DeleteShareUnitMembers(const Model::DeleteShareUnitMembersRequest &request);
                void DeleteShareUnitMembersAsync(const Model::DeleteShareUnitMembersRequest& request, const DeleteShareUnitMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteShareUnitMembersOutcomeCallable DeleteShareUnitMembersCallable(const Model::DeleteShareUnitMembersRequest& request);

                /**
                 *删除共享单元资源
                 * @param req DeleteShareUnitResourcesRequest
                 * @return DeleteShareUnitResourcesOutcome
                 */
                DeleteShareUnitResourcesOutcome DeleteShareUnitResources(const Model::DeleteShareUnitResourcesRequest &request);
                void DeleteShareUnitResourcesAsync(const Model::DeleteShareUnitResourcesRequest& request, const DeleteShareUnitResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteShareUnitResourcesOutcomeCallable DeleteShareUnitResourcesCallable(const Model::DeleteShareUnitResourcesRequest& request);

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
                 *获取组织成员访问授权列表
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
                 *本接口（DescribePolicy）可用于查询查看策略详情。
                 * @param req DescribePolicyRequest
                 * @return DescribePolicyOutcome
                 */
                DescribePolicyOutcome DescribePolicy(const Model::DescribePolicyRequest &request);
                void DescribePolicyAsync(const Model::DescribePolicyRequest& request, const DescribePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyOutcomeCallable DescribePolicyCallable(const Model::DescribePolicyRequest& request);

                /**
                 *本接口（DescribePolicyConfig）可用于查询企业组织策略配置
                 * @param req DescribePolicyConfigRequest
                 * @return DescribePolicyConfigOutcome
                 */
                DescribePolicyConfigOutcome DescribePolicyConfig(const Model::DescribePolicyConfigRequest &request);
                void DescribePolicyConfigAsync(const Model::DescribePolicyConfigRequest& request, const DescribePolicyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyConfigOutcomeCallable DescribePolicyConfigCallable(const Model::DescribePolicyConfigRequest& request);

                /**
                 *获取可共享地域列表
                 * @param req DescribeShareAreasRequest
                 * @return DescribeShareAreasOutcome
                 */
                DescribeShareAreasOutcome DescribeShareAreas(const Model::DescribeShareAreasRequest &request);
                void DescribeShareAreasAsync(const Model::DescribeShareAreasRequest& request, const DescribeShareAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShareAreasOutcomeCallable DescribeShareAreasCallable(const Model::DescribeShareAreasRequest& request);

                /**
                 *获取共享单元成员列表。
                 * @param req DescribeShareUnitMembersRequest
                 * @return DescribeShareUnitMembersOutcome
                 */
                DescribeShareUnitMembersOutcome DescribeShareUnitMembers(const Model::DescribeShareUnitMembersRequest &request);
                void DescribeShareUnitMembersAsync(const Model::DescribeShareUnitMembersRequest& request, const DescribeShareUnitMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShareUnitMembersOutcomeCallable DescribeShareUnitMembersCallable(const Model::DescribeShareUnitMembersRequest& request);

                /**
                 *获取共享单元资源列表。
                 * @param req DescribeShareUnitResourcesRequest
                 * @return DescribeShareUnitResourcesOutcome
                 */
                DescribeShareUnitResourcesOutcome DescribeShareUnitResources(const Model::DescribeShareUnitResourcesRequest &request);
                void DescribeShareUnitResourcesAsync(const Model::DescribeShareUnitResourcesRequest& request, const DescribeShareUnitResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShareUnitResourcesOutcomeCallable DescribeShareUnitResourcesCallable(const Model::DescribeShareUnitResourcesRequest& request);

                /**
                 *获取共享单元列表。
                 * @param req DescribeShareUnitsRequest
                 * @return DescribeShareUnitsOutcome
                 */
                DescribeShareUnitsOutcome DescribeShareUnits(const Model::DescribeShareUnitsRequest &request);
                void DescribeShareUnitsAsync(const Model::DescribeShareUnitsRequest& request, const DescribeShareUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShareUnitsOutcomeCallable DescribeShareUnitsCallable(const Model::DescribeShareUnitsRequest& request);

                /**
                 *解绑策略
                 * @param req DetachPolicyRequest
                 * @return DetachPolicyOutcome
                 */
                DetachPolicyOutcome DetachPolicy(const Model::DetachPolicyRequest &request);
                void DetachPolicyAsync(const Model::DetachPolicyRequest& request, const DetachPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachPolicyOutcomeCallable DetachPolicyCallable(const Model::DetachPolicyRequest& request);

                /**
                 *禁用策略类型
                 * @param req DisablePolicyTypeRequest
                 * @return DisablePolicyTypeOutcome
                 */
                DisablePolicyTypeOutcome DisablePolicyType(const Model::DisablePolicyTypeRequest &request);
                void DisablePolicyTypeAsync(const Model::DisablePolicyTypeRequest& request, const DisablePolicyTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisablePolicyTypeOutcomeCallable DisablePolicyTypeCallable(const Model::DisablePolicyTypeRequest& request);

                /**
                 *启用策略类型
                 * @param req EnablePolicyTypeRequest
                 * @return EnablePolicyTypeOutcome
                 */
                EnablePolicyTypeOutcome EnablePolicyType(const Model::EnablePolicyTypeRequest &request);
                void EnablePolicyTypeAsync(const Model::EnablePolicyTypeRequest& request, const EnablePolicyTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnablePolicyTypeOutcomeCallable EnablePolicyTypeCallable(const Model::EnablePolicyTypeRequest& request);

                /**
                 *获取组织成员访问身份列表
                 * @param req ListOrganizationIdentityRequest
                 * @return ListOrganizationIdentityOutcome
                 */
                ListOrganizationIdentityOutcome ListOrganizationIdentity(const Model::ListOrganizationIdentityRequest &request);
                void ListOrganizationIdentityAsync(const Model::ListOrganizationIdentityRequest& request, const ListOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOrganizationIdentityOutcomeCallable ListOrganizationIdentityCallable(const Model::ListOrganizationIdentityRequest& request);

                /**
                 *本接口（ListPolicies）可用于查询查看策略列表数据
                 * @param req ListPoliciesRequest
                 * @return ListPoliciesOutcome
                 */
                ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest &request);
                void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListPoliciesOutcomeCallable ListPoliciesCallable(const Model::ListPoliciesRequest& request);

                /**
                 *本接口（ListPoliciesForTarget）查询目标关联的策略列表
                 * @param req ListPoliciesForTargetRequest
                 * @return ListPoliciesForTargetOutcome
                 */
                ListPoliciesForTargetOutcome ListPoliciesForTarget(const Model::ListPoliciesForTargetRequest &request);
                void ListPoliciesForTargetAsync(const Model::ListPoliciesForTargetRequest& request, const ListPoliciesForTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListPoliciesForTargetOutcomeCallable ListPoliciesForTargetCallable(const Model::ListPoliciesForTargetRequest& request);

                /**
                 *本接口（ListTargetsForPolicy）查询某个指定策略关联的目标列表
                 * @param req ListTargetsForPolicyRequest
                 * @return ListTargetsForPolicyOutcome
                 */
                ListTargetsForPolicyOutcome ListTargetsForPolicy(const Model::ListTargetsForPolicyRequest &request);
                void ListTargetsForPolicyAsync(const Model::ListTargetsForPolicyRequest& request, const ListTargetsForPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTargetsForPolicyOutcomeCallable ListTargetsForPolicyCallable(const Model::ListTargetsForPolicyRequest& request);

                /**
                 *移动成员到指定企业组织节点
                 * @param req MoveOrganizationNodeMembersRequest
                 * @return MoveOrganizationNodeMembersOutcome
                 */
                MoveOrganizationNodeMembersOutcome MoveOrganizationNodeMembers(const Model::MoveOrganizationNodeMembersRequest &request);
                void MoveOrganizationNodeMembersAsync(const Model::MoveOrganizationNodeMembersRequest& request, const MoveOrganizationNodeMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MoveOrganizationNodeMembersOutcomeCallable MoveOrganizationNodeMembersCallable(const Model::MoveOrganizationNodeMembersRequest& request);

                /**
                 *退出企业组织
                 * @param req QuitOrganizationRequest
                 * @return QuitOrganizationOutcome
                 */
                QuitOrganizationOutcome QuitOrganization(const Model::QuitOrganizationRequest &request);
                void QuitOrganizationAsync(const Model::QuitOrganizationRequest& request, const QuitOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuitOrganizationOutcomeCallable QuitOrganizationCallable(const Model::QuitOrganizationRequest& request);

                /**
                 *更新组织身份
                 * @param req UpdateOrganizationIdentityRequest
                 * @return UpdateOrganizationIdentityOutcome
                 */
                UpdateOrganizationIdentityOutcome UpdateOrganizationIdentity(const Model::UpdateOrganizationIdentityRequest &request);
                void UpdateOrganizationIdentityAsync(const Model::UpdateOrganizationIdentityRequest& request, const UpdateOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOrganizationIdentityOutcomeCallable UpdateOrganizationIdentityCallable(const Model::UpdateOrganizationIdentityRequest& request);

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

                /**
                 *编辑策略
                 * @param req UpdatePolicyRequest
                 * @return UpdatePolicyOutcome
                 */
                UpdatePolicyOutcome UpdatePolicy(const Model::UpdatePolicyRequest &request);
                void UpdatePolicyAsync(const Model::UpdatePolicyRequest& request, const UpdatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePolicyOutcomeCallable UpdatePolicyCallable(const Model::UpdatePolicyRequest& request);

                /**
                 *更新共享单元。
                 * @param req UpdateShareUnitRequest
                 * @return UpdateShareUnitOutcome
                 */
                UpdateShareUnitOutcome UpdateShareUnit(const Model::UpdateShareUnitRequest &request);
                void UpdateShareUnitAsync(const Model::UpdateShareUnitRequest& request, const UpdateShareUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateShareUnitOutcomeCallable UpdateShareUnitCallable(const Model::UpdateShareUnitRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_ORGANIZATIONCLIENT_H_
