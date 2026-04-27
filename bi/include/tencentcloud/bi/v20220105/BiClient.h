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

#ifndef TENCENTCLOUD_BI_V20220105_BICLIENT_H_
#define TENCENTCLOUD_BI_V20220105_BICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bi/v20220105/model/ApplyEmbedIntervalRequest.h>
#include <tencentcloud/bi/v20220105/model/ApplyEmbedIntervalResponse.h>
#include <tencentcloud/bi/v20220105/model/ClearEmbedTokenRequest.h>
#include <tencentcloud/bi/v20220105/model/ClearEmbedTokenResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateAuthApiKeyRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateAuthApiKeyResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateDatasourceRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateDatasourceResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateDatasourceCloudRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateDatasourceCloudResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateEmbedTokenRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateEmbedTokenResponse.h>
#include <tencentcloud/bi/v20220105/model/CreatePermissionRanksRequest.h>
#include <tencentcloud/bi/v20220105/model/CreatePermissionRanksResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateProjectRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateProjectResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateUserGroupRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateUserGroupResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateUserGroupMemberRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateUserGroupMemberResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateUserRoleRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateUserRoleResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateUserRoleProjectRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateUserRoleProjectResponse.h>
#include <tencentcloud/bi/v20220105/model/DeleteAuthApiKeyRequest.h>
#include <tencentcloud/bi/v20220105/model/DeleteAuthApiKeyResponse.h>
#include <tencentcloud/bi/v20220105/model/DeleteDatasourceRequest.h>
#include <tencentcloud/bi/v20220105/model/DeleteDatasourceResponse.h>
#include <tencentcloud/bi/v20220105/model/DeleteProjectRequest.h>
#include <tencentcloud/bi/v20220105/model/DeleteProjectResponse.h>
#include <tencentcloud/bi/v20220105/model/DeleteUserGroupRequest.h>
#include <tencentcloud/bi/v20220105/model/DeleteUserGroupResponse.h>
#include <tencentcloud/bi/v20220105/model/DeleteUserGroupMemberRequest.h>
#include <tencentcloud/bi/v20220105/model/DeleteUserGroupMemberResponse.h>
#include <tencentcloud/bi/v20220105/model/DeleteUserRoleRequest.h>
#include <tencentcloud/bi/v20220105/model/DeleteUserRoleResponse.h>
#include <tencentcloud/bi/v20220105/model/DeleteUserRoleProjectRequest.h>
#include <tencentcloud/bi/v20220105/model/DeleteUserRoleProjectResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeAuthApiKeyInfoRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeAuthApiKeyInfoResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeAuthApiKeyListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeAuthApiKeyListResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeDatasourceListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeDatasourceListResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribePageWidgetListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribePageWidgetListResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribePermissionRanksInfoRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribePermissionRanksInfoResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribePermissionRoleInfoRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribePermissionRoleInfoResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribePermissionStatusInfoRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribePermissionStatusInfoResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeProjectInfoRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeProjectInfoResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeProjectListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeProjectListResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeResourceUserGroupPageListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeResourceUserGroupPageListResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserGroupInfoRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserGroupInfoResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserGroupMemberListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserGroupMemberListResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserGroupTreeListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserGroupTreeListResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserProjectListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserProjectListResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserRoleListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserRoleListResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserRoleProjectListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserRoleProjectListResponse.h>
#include <tencentcloud/bi/v20220105/model/ExportScreenPageRequest.h>
#include <tencentcloud/bi/v20220105/model/ExportScreenPageResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyAuthApiKeyRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyAuthApiKeyResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyDatasourceRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyDatasourceResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyDatasourceCloudRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyDatasourceCloudResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyProjectRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyProjectResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyResourceUserGroupRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyResourceUserGroupResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyResourceUserGroupResourceRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyResourceUserGroupResourceResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyUserDetailInfoRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyUserDetailInfoResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyUserGroupRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyUserGroupResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyUserRoleRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyUserRoleResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyUserRoleProjectRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyUserRoleProjectResponse.h>
#include <tencentcloud/bi/v20220105/model/QueryUserGroupMemberRequest.h>
#include <tencentcloud/bi/v20220105/model/QueryUserGroupMemberResponse.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            class BiClient : public AbstractClient
            {
            public:
                BiClient(const Credential &credential, const std::string &region);
                BiClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyEmbedIntervalResponse> ApplyEmbedIntervalOutcome;
                typedef std::future<ApplyEmbedIntervalOutcome> ApplyEmbedIntervalOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ApplyEmbedIntervalRequest&, ApplyEmbedIntervalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyEmbedIntervalAsyncHandler;
                typedef Outcome<Core::Error, Model::ClearEmbedTokenResponse> ClearEmbedTokenOutcome;
                typedef std::future<ClearEmbedTokenOutcome> ClearEmbedTokenOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ClearEmbedTokenRequest&, ClearEmbedTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearEmbedTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAuthApiKeyResponse> CreateAuthApiKeyOutcome;
                typedef std::future<CreateAuthApiKeyOutcome> CreateAuthApiKeyOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateAuthApiKeyRequest&, CreateAuthApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuthApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatasourceResponse> CreateDatasourceOutcome;
                typedef std::future<CreateDatasourceOutcome> CreateDatasourceOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateDatasourceRequest&, CreateDatasourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatasourceCloudResponse> CreateDatasourceCloudOutcome;
                typedef std::future<CreateDatasourceCloudOutcome> CreateDatasourceCloudOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateDatasourceCloudRequest&, CreateDatasourceCloudOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasourceCloudAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmbedTokenResponse> CreateEmbedTokenOutcome;
                typedef std::future<CreateEmbedTokenOutcome> CreateEmbedTokenOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateEmbedTokenRequest&, CreateEmbedTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmbedTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePermissionRanksResponse> CreatePermissionRanksOutcome;
                typedef std::future<CreatePermissionRanksOutcome> CreatePermissionRanksOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreatePermissionRanksRequest&, CreatePermissionRanksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePermissionRanksAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserGroupResponse> CreateUserGroupOutcome;
                typedef std::future<CreateUserGroupOutcome> CreateUserGroupOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateUserGroupRequest&, CreateUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserGroupMemberResponse> CreateUserGroupMemberOutcome;
                typedef std::future<CreateUserGroupMemberOutcome> CreateUserGroupMemberOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateUserGroupMemberRequest&, CreateUserGroupMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserGroupMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserRoleResponse> CreateUserRoleOutcome;
                typedef std::future<CreateUserRoleOutcome> CreateUserRoleOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateUserRoleRequest&, CreateUserRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserRoleProjectResponse> CreateUserRoleProjectOutcome;
                typedef std::future<CreateUserRoleProjectOutcome> CreateUserRoleProjectOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateUserRoleProjectRequest&, CreateUserRoleProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserRoleProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuthApiKeyResponse> DeleteAuthApiKeyOutcome;
                typedef std::future<DeleteAuthApiKeyOutcome> DeleteAuthApiKeyOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DeleteAuthApiKeyRequest&, DeleteAuthApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuthApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDatasourceResponse> DeleteDatasourceOutcome;
                typedef std::future<DeleteDatasourceOutcome> DeleteDatasourceOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DeleteDatasourceRequest&, DeleteDatasourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatasourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectResponse> DeleteProjectOutcome;
                typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DeleteProjectRequest&, DeleteProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserGroupResponse> DeleteUserGroupOutcome;
                typedef std::future<DeleteUserGroupOutcome> DeleteUserGroupOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DeleteUserGroupRequest&, DeleteUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserGroupMemberResponse> DeleteUserGroupMemberOutcome;
                typedef std::future<DeleteUserGroupMemberOutcome> DeleteUserGroupMemberOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DeleteUserGroupMemberRequest&, DeleteUserGroupMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserRoleResponse> DeleteUserRoleOutcome;
                typedef std::future<DeleteUserRoleOutcome> DeleteUserRoleOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DeleteUserRoleRequest&, DeleteUserRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserRoleProjectResponse> DeleteUserRoleProjectOutcome;
                typedef std::future<DeleteUserRoleProjectOutcome> DeleteUserRoleProjectOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DeleteUserRoleProjectRequest&, DeleteUserRoleProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserRoleProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuthApiKeyInfoResponse> DescribeAuthApiKeyInfoOutcome;
                typedef std::future<DescribeAuthApiKeyInfoOutcome> DescribeAuthApiKeyInfoOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeAuthApiKeyInfoRequest&, DescribeAuthApiKeyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthApiKeyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuthApiKeyListResponse> DescribeAuthApiKeyListOutcome;
                typedef std::future<DescribeAuthApiKeyListOutcome> DescribeAuthApiKeyListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeAuthApiKeyListRequest&, DescribeAuthApiKeyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthApiKeyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatasourceListResponse> DescribeDatasourceListOutcome;
                typedef std::future<DescribeDatasourceListOutcome> DescribeDatasourceListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeDatasourceListRequest&, DescribeDatasourceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasourceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePageWidgetListResponse> DescribePageWidgetListOutcome;
                typedef std::future<DescribePageWidgetListOutcome> DescribePageWidgetListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribePageWidgetListRequest&, DescribePageWidgetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePageWidgetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePermissionRanksInfoResponse> DescribePermissionRanksInfoOutcome;
                typedef std::future<DescribePermissionRanksInfoOutcome> DescribePermissionRanksInfoOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribePermissionRanksInfoRequest&, DescribePermissionRanksInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePermissionRanksInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePermissionRoleInfoResponse> DescribePermissionRoleInfoOutcome;
                typedef std::future<DescribePermissionRoleInfoOutcome> DescribePermissionRoleInfoOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribePermissionRoleInfoRequest&, DescribePermissionRoleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePermissionRoleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePermissionStatusInfoResponse> DescribePermissionStatusInfoOutcome;
                typedef std::future<DescribePermissionStatusInfoOutcome> DescribePermissionStatusInfoOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribePermissionStatusInfoRequest&, DescribePermissionStatusInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePermissionStatusInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectInfoResponse> DescribeProjectInfoOutcome;
                typedef std::future<DescribeProjectInfoOutcome> DescribeProjectInfoOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeProjectInfoRequest&, DescribeProjectInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectListResponse> DescribeProjectListOutcome;
                typedef std::future<DescribeProjectListOutcome> DescribeProjectListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeProjectListRequest&, DescribeProjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceUserGroupPageListResponse> DescribeResourceUserGroupPageListOutcome;
                typedef std::future<DescribeResourceUserGroupPageListOutcome> DescribeResourceUserGroupPageListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeResourceUserGroupPageListRequest&, DescribeResourceUserGroupPageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUserGroupPageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserGroupInfoResponse> DescribeUserGroupInfoOutcome;
                typedef std::future<DescribeUserGroupInfoOutcome> DescribeUserGroupInfoOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeUserGroupInfoRequest&, DescribeUserGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserGroupMemberListResponse> DescribeUserGroupMemberListOutcome;
                typedef std::future<DescribeUserGroupMemberListOutcome> DescribeUserGroupMemberListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeUserGroupMemberListRequest&, DescribeUserGroupMemberListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserGroupMemberListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserGroupTreeListResponse> DescribeUserGroupTreeListOutcome;
                typedef std::future<DescribeUserGroupTreeListOutcome> DescribeUserGroupTreeListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeUserGroupTreeListRequest&, DescribeUserGroupTreeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserGroupTreeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserProjectListResponse> DescribeUserProjectListOutcome;
                typedef std::future<DescribeUserProjectListOutcome> DescribeUserProjectListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeUserProjectListRequest&, DescribeUserProjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserProjectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserRoleListResponse> DescribeUserRoleListOutcome;
                typedef std::future<DescribeUserRoleListOutcome> DescribeUserRoleListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeUserRoleListRequest&, DescribeUserRoleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserRoleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserRoleProjectListResponse> DescribeUserRoleProjectListOutcome;
                typedef std::future<DescribeUserRoleProjectListOutcome> DescribeUserRoleProjectListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeUserRoleProjectListRequest&, DescribeUserRoleProjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserRoleProjectListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportScreenPageResponse> ExportScreenPageOutcome;
                typedef std::future<ExportScreenPageOutcome> ExportScreenPageOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ExportScreenPageRequest&, ExportScreenPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportScreenPageAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuthApiKeyResponse> ModifyAuthApiKeyOutcome;
                typedef std::future<ModifyAuthApiKeyOutcome> ModifyAuthApiKeyOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyAuthApiKeyRequest&, ModifyAuthApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuthApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatasourceResponse> ModifyDatasourceOutcome;
                typedef std::future<ModifyDatasourceOutcome> ModifyDatasourceOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyDatasourceRequest&, ModifyDatasourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatasourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatasourceCloudResponse> ModifyDatasourceCloudOutcome;
                typedef std::future<ModifyDatasourceCloudOutcome> ModifyDatasourceCloudOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyDatasourceCloudRequest&, ModifyDatasourceCloudOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatasourceCloudAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProjectResponse> ModifyProjectOutcome;
                typedef std::future<ModifyProjectOutcome> ModifyProjectOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyProjectRequest&, ModifyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourceUserGroupResponse> ModifyResourceUserGroupOutcome;
                typedef std::future<ModifyResourceUserGroupOutcome> ModifyResourceUserGroupOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyResourceUserGroupRequest&, ModifyResourceUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourceUserGroupResourceResponse> ModifyResourceUserGroupResourceOutcome;
                typedef std::future<ModifyResourceUserGroupResourceOutcome> ModifyResourceUserGroupResourceOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyResourceUserGroupResourceRequest&, ModifyResourceUserGroupResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceUserGroupResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserDetailInfoResponse> ModifyUserDetailInfoOutcome;
                typedef std::future<ModifyUserDetailInfoOutcome> ModifyUserDetailInfoOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyUserDetailInfoRequest&, ModifyUserDetailInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserDetailInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserGroupResponse> ModifyUserGroupOutcome;
                typedef std::future<ModifyUserGroupOutcome> ModifyUserGroupOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyUserGroupRequest&, ModifyUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserRoleResponse> ModifyUserRoleOutcome;
                typedef std::future<ModifyUserRoleOutcome> ModifyUserRoleOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyUserRoleRequest&, ModifyUserRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserRoleProjectResponse> ModifyUserRoleProjectOutcome;
                typedef std::future<ModifyUserRoleProjectOutcome> ModifyUserRoleProjectOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyUserRoleProjectRequest&, ModifyUserRoleProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserRoleProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryUserGroupMemberResponse> QueryUserGroupMemberOutcome;
                typedef std::future<QueryUserGroupMemberOutcome> QueryUserGroupMemberOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::QueryUserGroupMemberRequest&, QueryUserGroupMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserGroupMemberAsyncHandler;



                /**
                 *申请延长Token可用时间接口-强鉴权
                 * @param req ApplyEmbedIntervalRequest
                 * @return ApplyEmbedIntervalOutcome
                 */
                ApplyEmbedIntervalOutcome ApplyEmbedInterval(const Model::ApplyEmbedIntervalRequest &request);
                void ApplyEmbedIntervalAsync(const Model::ApplyEmbedIntervalRequest& request, const ApplyEmbedIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyEmbedIntervalOutcomeCallable ApplyEmbedIntervalCallable(const Model::ApplyEmbedIntervalRequest& request);

                /**
                 *强鉴权token 清理，只有企业管理员才能调用该接口
                 * @param req ClearEmbedTokenRequest
                 * @return ClearEmbedTokenOutcome
                 */
                ClearEmbedTokenOutcome ClearEmbedToken(const Model::ClearEmbedTokenRequest &request);
                void ClearEmbedTokenAsync(const Model::ClearEmbedTokenRequest& request, const ClearEmbedTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearEmbedTokenOutcomeCallable ClearEmbedTokenCallable(const Model::ClearEmbedTokenRequest& request);

                /**
                 *创建ApiKey
                 * @param req CreateAuthApiKeyRequest
                 * @return CreateAuthApiKeyOutcome
                 */
                CreateAuthApiKeyOutcome CreateAuthApiKey(const Model::CreateAuthApiKeyRequest &request);
                void CreateAuthApiKeyAsync(const Model::CreateAuthApiKeyRequest& request, const CreateAuthApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuthApiKeyOutcomeCallable CreateAuthApiKeyCallable(const Model::CreateAuthApiKeyRequest& request);

                /**
                 *创建数据源
                 * @param req CreateDatasourceRequest
                 * @return CreateDatasourceOutcome
                 */
                CreateDatasourceOutcome CreateDatasource(const Model::CreateDatasourceRequest &request);
                void CreateDatasourceAsync(const Model::CreateDatasourceRequest& request, const CreateDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatasourceOutcomeCallable CreateDatasourceCallable(const Model::CreateDatasourceRequest& request);

                /**
                 *创建云数据库
                 * @param req CreateDatasourceCloudRequest
                 * @return CreateDatasourceCloudOutcome
                 */
                CreateDatasourceCloudOutcome CreateDatasourceCloud(const Model::CreateDatasourceCloudRequest &request);
                void CreateDatasourceCloudAsync(const Model::CreateDatasourceCloudRequest& request, const CreateDatasourceCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatasourceCloudOutcomeCallable CreateDatasourceCloudCallable(const Model::CreateDatasourceCloudRequest& request);

                /**
                 *创建嵌出报表-强鉴权
                 * @param req CreateEmbedTokenRequest
                 * @return CreateEmbedTokenOutcome
                 */
                CreateEmbedTokenOutcome CreateEmbedToken(const Model::CreateEmbedTokenRequest &request);
                void CreateEmbedTokenAsync(const Model::CreateEmbedTokenRequest& request, const CreateEmbedTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmbedTokenOutcomeCallable CreateEmbedTokenCallable(const Model::CreateEmbedTokenRequest& request);

                /**
                 *创建行列权限
                 * @param req CreatePermissionRanksRequest
                 * @return CreatePermissionRanksOutcome
                 */
                CreatePermissionRanksOutcome CreatePermissionRanks(const Model::CreatePermissionRanksRequest &request);
                void CreatePermissionRanksAsync(const Model::CreatePermissionRanksRequest& request, const CreatePermissionRanksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePermissionRanksOutcomeCallable CreatePermissionRanksCallable(const Model::CreatePermissionRanksRequest& request);

                /**
                 *创建项目
                 * @param req CreateProjectRequest
                 * @return CreateProjectOutcome
                 */
                CreateProjectOutcome CreateProject(const Model::CreateProjectRequest &request);
                void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request);

                /**
                 *CreateUserGroup
                 * @param req CreateUserGroupRequest
                 * @return CreateUserGroupOutcome
                 */
                CreateUserGroupOutcome CreateUserGroup(const Model::CreateUserGroupRequest &request);
                void CreateUserGroupAsync(const Model::CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserGroupOutcomeCallable CreateUserGroupCallable(const Model::CreateUserGroupRequest& request);

                /**
                 *CreateUserGroupMember
                 * @param req CreateUserGroupMemberRequest
                 * @return CreateUserGroupMemberOutcome
                 */
                CreateUserGroupMemberOutcome CreateUserGroupMember(const Model::CreateUserGroupMemberRequest &request);
                void CreateUserGroupMemberAsync(const Model::CreateUserGroupMemberRequest& request, const CreateUserGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserGroupMemberOutcomeCallable CreateUserGroupMemberCallable(const Model::CreateUserGroupMemberRequest& request);

                /**
                 *创建用户角色
                 * @param req CreateUserRoleRequest
                 * @return CreateUserRoleOutcome
                 */
                CreateUserRoleOutcome CreateUserRole(const Model::CreateUserRoleRequest &request);
                void CreateUserRoleAsync(const Model::CreateUserRoleRequest& request, const CreateUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserRoleOutcomeCallable CreateUserRoleCallable(const Model::CreateUserRoleRequest& request);

                /**
                 *项目内-创建用户角色
                 * @param req CreateUserRoleProjectRequest
                 * @return CreateUserRoleProjectOutcome
                 */
                CreateUserRoleProjectOutcome CreateUserRoleProject(const Model::CreateUserRoleProjectRequest &request);
                void CreateUserRoleProjectAsync(const Model::CreateUserRoleProjectRequest& request, const CreateUserRoleProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserRoleProjectOutcomeCallable CreateUserRoleProjectCallable(const Model::CreateUserRoleProjectRequest& request);

                /**
                 *删除ApiKey
                 * @param req DeleteAuthApiKeyRequest
                 * @return DeleteAuthApiKeyOutcome
                 */
                DeleteAuthApiKeyOutcome DeleteAuthApiKey(const Model::DeleteAuthApiKeyRequest &request);
                void DeleteAuthApiKeyAsync(const Model::DeleteAuthApiKeyRequest& request, const DeleteAuthApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAuthApiKeyOutcomeCallable DeleteAuthApiKeyCallable(const Model::DeleteAuthApiKeyRequest& request);

                /**
                 *删除数据源
                 * @param req DeleteDatasourceRequest
                 * @return DeleteDatasourceOutcome
                 */
                DeleteDatasourceOutcome DeleteDatasource(const Model::DeleteDatasourceRequest &request);
                void DeleteDatasourceAsync(const Model::DeleteDatasourceRequest& request, const DeleteDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDatasourceOutcomeCallable DeleteDatasourceCallable(const Model::DeleteDatasourceRequest& request);

                /**
                 *删除项目
                 * @param req DeleteProjectRequest
                 * @return DeleteProjectOutcome
                 */
                DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest &request);
                void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request);

                /**
                 *DeleteUserGroup
                 * @param req DeleteUserGroupRequest
                 * @return DeleteUserGroupOutcome
                 */
                DeleteUserGroupOutcome DeleteUserGroup(const Model::DeleteUserGroupRequest &request);
                void DeleteUserGroupAsync(const Model::DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserGroupOutcomeCallable DeleteUserGroupCallable(const Model::DeleteUserGroupRequest& request);

                /**
                 *DeleteUserGroupMember
                 * @param req DeleteUserGroupMemberRequest
                 * @return DeleteUserGroupMemberOutcome
                 */
                DeleteUserGroupMemberOutcome DeleteUserGroupMember(const Model::DeleteUserGroupMemberRequest &request);
                void DeleteUserGroupMemberAsync(const Model::DeleteUserGroupMemberRequest& request, const DeleteUserGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserGroupMemberOutcomeCallable DeleteUserGroupMemberCallable(const Model::DeleteUserGroupMemberRequest& request);

                /**
                 *删除用户角色，会删除用户
                 * @param req DeleteUserRoleRequest
                 * @return DeleteUserRoleOutcome
                 */
                DeleteUserRoleOutcome DeleteUserRole(const Model::DeleteUserRoleRequest &request);
                void DeleteUserRoleAsync(const Model::DeleteUserRoleRequest& request, const DeleteUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserRoleOutcomeCallable DeleteUserRoleCallable(const Model::DeleteUserRoleRequest& request);

                /**
                 *项目内-删除用户角色
                 * @param req DeleteUserRoleProjectRequest
                 * @return DeleteUserRoleProjectOutcome
                 */
                DeleteUserRoleProjectOutcome DeleteUserRoleProject(const Model::DeleteUserRoleProjectRequest &request);
                void DeleteUserRoleProjectAsync(const Model::DeleteUserRoleProjectRequest& request, const DeleteUserRoleProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserRoleProjectOutcomeCallable DeleteUserRoleProjectCallable(const Model::DeleteUserRoleProjectRequest& request);

                /**
                 *ApiKey信息
                 * @param req DescribeAuthApiKeyInfoRequest
                 * @return DescribeAuthApiKeyInfoOutcome
                 */
                DescribeAuthApiKeyInfoOutcome DescribeAuthApiKeyInfo(const Model::DescribeAuthApiKeyInfoRequest &request);
                void DescribeAuthApiKeyInfoAsync(const Model::DescribeAuthApiKeyInfoRequest& request, const DescribeAuthApiKeyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuthApiKeyInfoOutcomeCallable DescribeAuthApiKeyInfoCallable(const Model::DescribeAuthApiKeyInfoRequest& request);

                /**
                 *ApiKey列表
                 * @param req DescribeAuthApiKeyListRequest
                 * @return DescribeAuthApiKeyListOutcome
                 */
                DescribeAuthApiKeyListOutcome DescribeAuthApiKeyList(const Model::DescribeAuthApiKeyListRequest &request);
                void DescribeAuthApiKeyListAsync(const Model::DescribeAuthApiKeyListRequest& request, const DescribeAuthApiKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuthApiKeyListOutcomeCallable DescribeAuthApiKeyListCallable(const Model::DescribeAuthApiKeyListRequest& request);

                /**
                 *查询数据源列表
                 * @param req DescribeDatasourceListRequest
                 * @return DescribeDatasourceListOutcome
                 */
                DescribeDatasourceListOutcome DescribeDatasourceList(const Model::DescribeDatasourceListRequest &request);
                void DescribeDatasourceListAsync(const Model::DescribeDatasourceListRequest& request, const DescribeDatasourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatasourceListOutcomeCallable DescribeDatasourceListCallable(const Model::DescribeDatasourceListRequest& request);

                /**
                 *查询页面组件信息
                 * @param req DescribePageWidgetListRequest
                 * @return DescribePageWidgetListOutcome
                 */
                DescribePageWidgetListOutcome DescribePageWidgetList(const Model::DescribePageWidgetListRequest &request);
                void DescribePageWidgetListAsync(const Model::DescribePageWidgetListRequest& request, const DescribePageWidgetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePageWidgetListOutcomeCallable DescribePageWidgetListCallable(const Model::DescribePageWidgetListRequest& request);

                /**
                 *根据角色或标签查询行列权限配置
                 * @param req DescribePermissionRanksInfoRequest
                 * @return DescribePermissionRanksInfoOutcome
                 */
                DescribePermissionRanksInfoOutcome DescribePermissionRanksInfo(const Model::DescribePermissionRanksInfoRequest &request);
                void DescribePermissionRanksInfoAsync(const Model::DescribePermissionRanksInfoRequest& request, const DescribePermissionRanksInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePermissionRanksInfoOutcomeCallable DescribePermissionRanksInfoCallable(const Model::DescribePermissionRanksInfoRequest& request);

                /**
                 *行列权限项目内角色列表接口1
                 * @param req DescribePermissionRoleInfoRequest
                 * @return DescribePermissionRoleInfoOutcome
                 */
                DescribePermissionRoleInfoOutcome DescribePermissionRoleInfo(const Model::DescribePermissionRoleInfoRequest &request);
                void DescribePermissionRoleInfoAsync(const Model::DescribePermissionRoleInfoRequest& request, const DescribePermissionRoleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePermissionRoleInfoOutcomeCallable DescribePermissionRoleInfoCallable(const Model::DescribePermissionRoleInfoRequest& request);

                /**
                 *查询行列权限初始状态1
                 * @param req DescribePermissionStatusInfoRequest
                 * @return DescribePermissionStatusInfoOutcome
                 */
                DescribePermissionStatusInfoOutcome DescribePermissionStatusInfo(const Model::DescribePermissionStatusInfoRequest &request);
                void DescribePermissionStatusInfoAsync(const Model::DescribePermissionStatusInfoRequest& request, const DescribePermissionStatusInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePermissionStatusInfoOutcomeCallable DescribePermissionStatusInfoCallable(const Model::DescribePermissionStatusInfoRequest& request);

                /**
                 *项目详情接口
                 * @param req DescribeProjectInfoRequest
                 * @return DescribeProjectInfoOutcome
                 */
                DescribeProjectInfoOutcome DescribeProjectInfo(const Model::DescribeProjectInfoRequest &request);
                void DescribeProjectInfoAsync(const Model::DescribeProjectInfoRequest& request, const DescribeProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectInfoOutcomeCallable DescribeProjectInfoCallable(const Model::DescribeProjectInfoRequest& request);

                /**
                 *项目信息
                 * @param req DescribeProjectListRequest
                 * @return DescribeProjectListOutcome
                 */
                DescribeProjectListOutcome DescribeProjectList(const Model::DescribeProjectListRequest &request);
                void DescribeProjectListAsync(const Model::DescribeProjectListRequest& request, const DescribeProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectListOutcomeCallable DescribeProjectListCallable(const Model::DescribeProjectListRequest& request);

                /**
                 *用户组资源权限查询接口
                 * @param req DescribeResourceUserGroupPageListRequest
                 * @return DescribeResourceUserGroupPageListOutcome
                 */
                DescribeResourceUserGroupPageListOutcome DescribeResourceUserGroupPageList(const Model::DescribeResourceUserGroupPageListRequest &request);
                void DescribeResourceUserGroupPageListAsync(const Model::DescribeResourceUserGroupPageListRequest& request, const DescribeResourceUserGroupPageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceUserGroupPageListOutcomeCallable DescribeResourceUserGroupPageListCallable(const Model::DescribeResourceUserGroupPageListRequest& request);

                /**
                 *DescribeUserGroupInfo
                 * @param req DescribeUserGroupInfoRequest
                 * @return DescribeUserGroupInfoOutcome
                 */
                DescribeUserGroupInfoOutcome DescribeUserGroupInfo(const Model::DescribeUserGroupInfoRequest &request);
                void DescribeUserGroupInfoAsync(const Model::DescribeUserGroupInfoRequest& request, const DescribeUserGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserGroupInfoOutcomeCallable DescribeUserGroupInfoCallable(const Model::DescribeUserGroupInfoRequest& request);

                /**
                 *DescribeUserGroupMemberList
                 * @param req DescribeUserGroupMemberListRequest
                 * @return DescribeUserGroupMemberListOutcome
                 */
                DescribeUserGroupMemberListOutcome DescribeUserGroupMemberList(const Model::DescribeUserGroupMemberListRequest &request);
                void DescribeUserGroupMemberListAsync(const Model::DescribeUserGroupMemberListRequest& request, const DescribeUserGroupMemberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserGroupMemberListOutcomeCallable DescribeUserGroupMemberListCallable(const Model::DescribeUserGroupMemberListRequest& request);

                /**
                 *用户组数查询接口
                 * @param req DescribeUserGroupTreeListRequest
                 * @return DescribeUserGroupTreeListOutcome
                 */
                DescribeUserGroupTreeListOutcome DescribeUserGroupTreeList(const Model::DescribeUserGroupTreeListRequest &request);
                void DescribeUserGroupTreeListAsync(const Model::DescribeUserGroupTreeListRequest& request, const DescribeUserGroupTreeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserGroupTreeListOutcomeCallable DescribeUserGroupTreeListCallable(const Model::DescribeUserGroupTreeListRequest& request);

                /**
                 *项目内-用户接口
                 * @param req DescribeUserProjectListRequest
                 * @return DescribeUserProjectListOutcome
                 */
                DescribeUserProjectListOutcome DescribeUserProjectList(const Model::DescribeUserProjectListRequest &request);
                void DescribeUserProjectListAsync(const Model::DescribeUserProjectListRequest& request, const DescribeUserProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserProjectListOutcomeCallable DescribeUserProjectListCallable(const Model::DescribeUserProjectListRequest& request);

                /**
                 *用户角色列表
                 * @param req DescribeUserRoleListRequest
                 * @return DescribeUserRoleListOutcome
                 */
                DescribeUserRoleListOutcome DescribeUserRoleList(const Model::DescribeUserRoleListRequest &request);
                void DescribeUserRoleListAsync(const Model::DescribeUserRoleListRequest& request, const DescribeUserRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserRoleListOutcomeCallable DescribeUserRoleListCallable(const Model::DescribeUserRoleListRequest& request);

                /**
                 *项目内-用户角色列表
                 * @param req DescribeUserRoleProjectListRequest
                 * @return DescribeUserRoleProjectListOutcome
                 */
                DescribeUserRoleProjectListOutcome DescribeUserRoleProjectList(const Model::DescribeUserRoleProjectListRequest &request);
                void DescribeUserRoleProjectListAsync(const Model::DescribeUserRoleProjectListRequest& request, const DescribeUserRoleProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserRoleProjectListOutcomeCallable DescribeUserRoleProjectListCallable(const Model::DescribeUserRoleProjectListRequest& request);

                /**
                 *页面截图导出
                 * @param req ExportScreenPageRequest
                 * @return ExportScreenPageOutcome
                 */
                ExportScreenPageOutcome ExportScreenPage(const Model::ExportScreenPageRequest &request);
                void ExportScreenPageAsync(const Model::ExportScreenPageRequest& request, const ExportScreenPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportScreenPageOutcomeCallable ExportScreenPageCallable(const Model::ExportScreenPageRequest& request);

                /**
                 *更新ApiKey
                 * @param req ModifyAuthApiKeyRequest
                 * @return ModifyAuthApiKeyOutcome
                 */
                ModifyAuthApiKeyOutcome ModifyAuthApiKey(const Model::ModifyAuthApiKeyRequest &request);
                void ModifyAuthApiKeyAsync(const Model::ModifyAuthApiKeyRequest& request, const ModifyAuthApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuthApiKeyOutcomeCallable ModifyAuthApiKeyCallable(const Model::ModifyAuthApiKeyRequest& request);

                /**
                 *更新数据源
                 * @param req ModifyDatasourceRequest
                 * @return ModifyDatasourceOutcome
                 */
                ModifyDatasourceOutcome ModifyDatasource(const Model::ModifyDatasourceRequest &request);
                void ModifyDatasourceAsync(const Model::ModifyDatasourceRequest& request, const ModifyDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatasourceOutcomeCallable ModifyDatasourceCallable(const Model::ModifyDatasourceRequest& request);

                /**
                 *更新云数据库
                 * @param req ModifyDatasourceCloudRequest
                 * @return ModifyDatasourceCloudOutcome
                 */
                ModifyDatasourceCloudOutcome ModifyDatasourceCloud(const Model::ModifyDatasourceCloudRequest &request);
                void ModifyDatasourceCloudAsync(const Model::ModifyDatasourceCloudRequest& request, const ModifyDatasourceCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatasourceCloudOutcomeCallable ModifyDatasourceCloudCallable(const Model::ModifyDatasourceCloudRequest& request);

                /**
                 *修改项目信息
                 * @param req ModifyProjectRequest
                 * @return ModifyProjectOutcome
                 */
                ModifyProjectOutcome ModifyProject(const Model::ModifyProjectRequest &request);
                void ModifyProjectAsync(const Model::ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProjectOutcomeCallable ModifyProjectCallable(const Model::ModifyProjectRequest& request);

                /**
                 *更新用户组权限
                 * @param req ModifyResourceUserGroupRequest
                 * @return ModifyResourceUserGroupOutcome
                 */
                ModifyResourceUserGroupOutcome ModifyResourceUserGroup(const Model::ModifyResourceUserGroupRequest &request);
                void ModifyResourceUserGroupAsync(const Model::ModifyResourceUserGroupRequest& request, const ModifyResourceUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceUserGroupOutcomeCallable ModifyResourceUserGroupCallable(const Model::ModifyResourceUserGroupRequest& request);

                /**
                 *按资源 - 更新用户组权限
                 * @param req ModifyResourceUserGroupResourceRequest
                 * @return ModifyResourceUserGroupResourceOutcome
                 */
                ModifyResourceUserGroupResourceOutcome ModifyResourceUserGroupResource(const Model::ModifyResourceUserGroupResourceRequest &request);
                void ModifyResourceUserGroupResourceAsync(const Model::ModifyResourceUserGroupResourceRequest& request, const ModifyResourceUserGroupResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceUserGroupResourceOutcomeCallable ModifyResourceUserGroupResourceCallable(const Model::ModifyResourceUserGroupResourceRequest& request);

                /**
                 *修改用户角色信息
                 * @param req ModifyUserDetailInfoRequest
                 * @return ModifyUserDetailInfoOutcome
                 */
                ModifyUserDetailInfoOutcome ModifyUserDetailInfo(const Model::ModifyUserDetailInfoRequest &request);
                void ModifyUserDetailInfoAsync(const Model::ModifyUserDetailInfoRequest& request, const ModifyUserDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserDetailInfoOutcomeCallable ModifyUserDetailInfoCallable(const Model::ModifyUserDetailInfoRequest& request);

                /**
                 *ModifyUserGroup
                 * @param req ModifyUserGroupRequest
                 * @return ModifyUserGroupOutcome
                 */
                ModifyUserGroupOutcome ModifyUserGroup(const Model::ModifyUserGroupRequest &request);
                void ModifyUserGroupAsync(const Model::ModifyUserGroupRequest& request, const ModifyUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserGroupOutcomeCallable ModifyUserGroupCallable(const Model::ModifyUserGroupRequest& request);

                /**
                 *修改用户角色信息
                 * @param req ModifyUserRoleRequest
                 * @return ModifyUserRoleOutcome
                 */
                ModifyUserRoleOutcome ModifyUserRole(const Model::ModifyUserRoleRequest &request);
                void ModifyUserRoleAsync(const Model::ModifyUserRoleRequest& request, const ModifyUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserRoleOutcomeCallable ModifyUserRoleCallable(const Model::ModifyUserRoleRequest& request);

                /**
                 *项目-修改用户角色信息
                 * @param req ModifyUserRoleProjectRequest
                 * @return ModifyUserRoleProjectOutcome
                 */
                ModifyUserRoleProjectOutcome ModifyUserRoleProject(const Model::ModifyUserRoleProjectRequest &request);
                void ModifyUserRoleProjectAsync(const Model::ModifyUserRoleProjectRequest& request, const ModifyUserRoleProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserRoleProjectOutcomeCallable ModifyUserRoleProjectCallable(const Model::ModifyUserRoleProjectRequest& request);

                /**
                 *QueryUserGroupMember
                 * @param req QueryUserGroupMemberRequest
                 * @return QueryUserGroupMemberOutcome
                 */
                QueryUserGroupMemberOutcome QueryUserGroupMember(const Model::QueryUserGroupMemberRequest &request);
                void QueryUserGroupMemberAsync(const Model::QueryUserGroupMemberRequest& request, const QueryUserGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryUserGroupMemberOutcomeCallable QueryUserGroupMemberCallable(const Model::QueryUserGroupMemberRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_BICLIENT_H_
