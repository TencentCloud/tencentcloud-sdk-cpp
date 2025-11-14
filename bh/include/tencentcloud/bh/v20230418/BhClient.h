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

#ifndef TENCENTCLOUD_BH_V20230418_BHCLIENT_H_
#define TENCENTCLOUD_BH_V20230418_BHCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bh/v20230418/model/AccessDevicesRequest.h>
#include <tencentcloud/bh/v20230418/model/AccessDevicesResponse.h>
#include <tencentcloud/bh/v20230418/model/AddDeviceGroupMembersRequest.h>
#include <tencentcloud/bh/v20230418/model/AddDeviceGroupMembersResponse.h>
#include <tencentcloud/bh/v20230418/model/AddUserGroupMembersRequest.h>
#include <tencentcloud/bh/v20230418/model/AddUserGroupMembersResponse.h>
#include <tencentcloud/bh/v20230418/model/BindDeviceAccountPasswordRequest.h>
#include <tencentcloud/bh/v20230418/model/BindDeviceAccountPasswordResponse.h>
#include <tencentcloud/bh/v20230418/model/BindDeviceAccountPrivateKeyRequest.h>
#include <tencentcloud/bh/v20230418/model/BindDeviceAccountPrivateKeyResponse.h>
#include <tencentcloud/bh/v20230418/model/BindDeviceResourceRequest.h>
#include <tencentcloud/bh/v20230418/model/BindDeviceResourceResponse.h>
#include <tencentcloud/bh/v20230418/model/CheckLDAPConnectionRequest.h>
#include <tencentcloud/bh/v20230418/model/CheckLDAPConnectionResponse.h>
#include <tencentcloud/bh/v20230418/model/CreateAccessWhiteListRuleRequest.h>
#include <tencentcloud/bh/v20230418/model/CreateAccessWhiteListRuleResponse.h>
#include <tencentcloud/bh/v20230418/model/CreateAclRequest.h>
#include <tencentcloud/bh/v20230418/model/CreateAclResponse.h>
#include <tencentcloud/bh/v20230418/model/CreateAssetSyncJobRequest.h>
#include <tencentcloud/bh/v20230418/model/CreateAssetSyncJobResponse.h>
#include <tencentcloud/bh/v20230418/model/CreateChangePwdTaskRequest.h>
#include <tencentcloud/bh/v20230418/model/CreateChangePwdTaskResponse.h>
#include <tencentcloud/bh/v20230418/model/CreateCmdTemplateRequest.h>
#include <tencentcloud/bh/v20230418/model/CreateCmdTemplateResponse.h>
#include <tencentcloud/bh/v20230418/model/CreateDeviceAccountRequest.h>
#include <tencentcloud/bh/v20230418/model/CreateDeviceAccountResponse.h>
#include <tencentcloud/bh/v20230418/model/CreateDeviceGroupRequest.h>
#include <tencentcloud/bh/v20230418/model/CreateDeviceGroupResponse.h>
#include <tencentcloud/bh/v20230418/model/CreateOperationTaskRequest.h>
#include <tencentcloud/bh/v20230418/model/CreateOperationTaskResponse.h>
#include <tencentcloud/bh/v20230418/model/CreateResourceRequest.h>
#include <tencentcloud/bh/v20230418/model/CreateResourceResponse.h>
#include <tencentcloud/bh/v20230418/model/CreateUserRequest.h>
#include <tencentcloud/bh/v20230418/model/CreateUserResponse.h>
#include <tencentcloud/bh/v20230418/model/CreateUserGroupRequest.h>
#include <tencentcloud/bh/v20230418/model/CreateUserGroupResponse.h>
#include <tencentcloud/bh/v20230418/model/DeleteAccessWhiteListRulesRequest.h>
#include <tencentcloud/bh/v20230418/model/DeleteAccessWhiteListRulesResponse.h>
#include <tencentcloud/bh/v20230418/model/DeleteAclsRequest.h>
#include <tencentcloud/bh/v20230418/model/DeleteAclsResponse.h>
#include <tencentcloud/bh/v20230418/model/DeleteChangePwdTaskRequest.h>
#include <tencentcloud/bh/v20230418/model/DeleteChangePwdTaskResponse.h>
#include <tencentcloud/bh/v20230418/model/DeleteCmdTemplatesRequest.h>
#include <tencentcloud/bh/v20230418/model/DeleteCmdTemplatesResponse.h>
#include <tencentcloud/bh/v20230418/model/DeleteDeviceAccountsRequest.h>
#include <tencentcloud/bh/v20230418/model/DeleteDeviceAccountsResponse.h>
#include <tencentcloud/bh/v20230418/model/DeleteDeviceGroupMembersRequest.h>
#include <tencentcloud/bh/v20230418/model/DeleteDeviceGroupMembersResponse.h>
#include <tencentcloud/bh/v20230418/model/DeleteDeviceGroupsRequest.h>
#include <tencentcloud/bh/v20230418/model/DeleteDeviceGroupsResponse.h>
#include <tencentcloud/bh/v20230418/model/DeleteDevicesRequest.h>
#include <tencentcloud/bh/v20230418/model/DeleteDevicesResponse.h>
#include <tencentcloud/bh/v20230418/model/DeleteOperationTasksRequest.h>
#include <tencentcloud/bh/v20230418/model/DeleteOperationTasksResponse.h>
#include <tencentcloud/bh/v20230418/model/DeleteUserGroupMembersRequest.h>
#include <tencentcloud/bh/v20230418/model/DeleteUserGroupMembersResponse.h>
#include <tencentcloud/bh/v20230418/model/DeleteUserGroupsRequest.h>
#include <tencentcloud/bh/v20230418/model/DeleteUserGroupsResponse.h>
#include <tencentcloud/bh/v20230418/model/DeleteUsersRequest.h>
#include <tencentcloud/bh/v20230418/model/DeleteUsersResponse.h>
#include <tencentcloud/bh/v20230418/model/DeployResourceRequest.h>
#include <tencentcloud/bh/v20230418/model/DeployResourceResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeAccessWhiteListRulesRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeAccessWhiteListRulesResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeAclsRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeAclsResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeAssetSyncFlagRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeAssetSyncFlagResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeAssetSyncStatusRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeAssetSyncStatusResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeChangePwdTaskRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeChangePwdTaskResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeChangePwdTaskDetailRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeChangePwdTaskDetailResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeCmdTemplatesRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeCmdTemplatesResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeDeviceAccountsRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeDeviceAccountsResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeDeviceGroupMembersRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeDeviceGroupMembersResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeDeviceGroupsRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeDeviceGroupsResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeDevicesRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeDevicesResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeDomainsRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeDomainsResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeLDAPUnitSetRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeLDAPUnitSetResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeLoginEventRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeLoginEventResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeOperationEventRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeOperationEventResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeOperationTaskRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeOperationTaskResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeResourcesRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeResourcesResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeSecuritySettingRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeSecuritySettingResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeUserGroupMembersRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeUserGroupMembersResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeUserGroupsRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeUserGroupsResponse.h>
#include <tencentcloud/bh/v20230418/model/DescribeUsersRequest.h>
#include <tencentcloud/bh/v20230418/model/DescribeUsersResponse.h>
#include <tencentcloud/bh/v20230418/model/DisableExternalAccessRequest.h>
#include <tencentcloud/bh/v20230418/model/DisableExternalAccessResponse.h>
#include <tencentcloud/bh/v20230418/model/DisableIntranetAccessRequest.h>
#include <tencentcloud/bh/v20230418/model/DisableIntranetAccessResponse.h>
#include <tencentcloud/bh/v20230418/model/EnableExternalAccessRequest.h>
#include <tencentcloud/bh/v20230418/model/EnableExternalAccessResponse.h>
#include <tencentcloud/bh/v20230418/model/EnableIntranetAccessRequest.h>
#include <tencentcloud/bh/v20230418/model/EnableIntranetAccessResponse.h>
#include <tencentcloud/bh/v20230418/model/ImportExternalDeviceRequest.h>
#include <tencentcloud/bh/v20230418/model/ImportExternalDeviceResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyAccessWhiteListAutoStatusRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyAccessWhiteListAutoStatusResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyAccessWhiteListRuleRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyAccessWhiteListRuleResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyAccessWhiteListStatusRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyAccessWhiteListStatusResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyAclRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyAclResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyAssetSyncFlagRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyAssetSyncFlagResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyAuthModeSettingRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyAuthModeSettingResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyChangePwdTaskRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyChangePwdTaskResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyCmdTemplateRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyCmdTemplateResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyDeviceRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyDeviceResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyDeviceGroupRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyDeviceGroupResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyLDAPSettingRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyLDAPSettingResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyOAuthSettingRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyOAuthSettingResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyOperationTaskRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyOperationTaskResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyReconnectionSettingRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyReconnectionSettingResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyResourceRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyResourceResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyUserRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyUserResponse.h>
#include <tencentcloud/bh/v20230418/model/ModifyUserGroupRequest.h>
#include <tencentcloud/bh/v20230418/model/ModifyUserGroupResponse.h>
#include <tencentcloud/bh/v20230418/model/ReplaySessionRequest.h>
#include <tencentcloud/bh/v20230418/model/ReplaySessionResponse.h>
#include <tencentcloud/bh/v20230418/model/ResetDeviceAccountPasswordRequest.h>
#include <tencentcloud/bh/v20230418/model/ResetDeviceAccountPasswordResponse.h>
#include <tencentcloud/bh/v20230418/model/ResetDeviceAccountPrivateKeyRequest.h>
#include <tencentcloud/bh/v20230418/model/ResetDeviceAccountPrivateKeyResponse.h>
#include <tencentcloud/bh/v20230418/model/ResetUserRequest.h>
#include <tencentcloud/bh/v20230418/model/ResetUserResponse.h>
#include <tencentcloud/bh/v20230418/model/RunChangePwdTaskRequest.h>
#include <tencentcloud/bh/v20230418/model/RunChangePwdTaskResponse.h>
#include <tencentcloud/bh/v20230418/model/RunOperationTaskRequest.h>
#include <tencentcloud/bh/v20230418/model/RunOperationTaskResponse.h>
#include <tencentcloud/bh/v20230418/model/SearchAuditLogRequest.h>
#include <tencentcloud/bh/v20230418/model/SearchAuditLogResponse.h>
#include <tencentcloud/bh/v20230418/model/SearchCommandRequest.h>
#include <tencentcloud/bh/v20230418/model/SearchCommandResponse.h>
#include <tencentcloud/bh/v20230418/model/SearchCommandBySidRequest.h>
#include <tencentcloud/bh/v20230418/model/SearchCommandBySidResponse.h>
#include <tencentcloud/bh/v20230418/model/SearchFileRequest.h>
#include <tencentcloud/bh/v20230418/model/SearchFileResponse.h>
#include <tencentcloud/bh/v20230418/model/SearchFileBySidRequest.h>
#include <tencentcloud/bh/v20230418/model/SearchFileBySidResponse.h>
#include <tencentcloud/bh/v20230418/model/SearchSessionRequest.h>
#include <tencentcloud/bh/v20230418/model/SearchSessionResponse.h>
#include <tencentcloud/bh/v20230418/model/SearchSessionCommandRequest.h>
#include <tencentcloud/bh/v20230418/model/SearchSessionCommandResponse.h>
#include <tencentcloud/bh/v20230418/model/SearchSubtaskResultByIdRequest.h>
#include <tencentcloud/bh/v20230418/model/SearchSubtaskResultByIdResponse.h>
#include <tencentcloud/bh/v20230418/model/SearchTaskResultRequest.h>
#include <tencentcloud/bh/v20230418/model/SearchTaskResultResponse.h>
#include <tencentcloud/bh/v20230418/model/SetLDAPSyncFlagRequest.h>
#include <tencentcloud/bh/v20230418/model/SetLDAPSyncFlagResponse.h>
#include <tencentcloud/bh/v20230418/model/UnlockUserRequest.h>
#include <tencentcloud/bh/v20230418/model/UnlockUserResponse.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            class BhClient : public AbstractClient
            {
            public:
                BhClient(const Credential &credential, const std::string &region);
                BhClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AccessDevicesResponse> AccessDevicesOutcome;
                typedef std::future<AccessDevicesOutcome> AccessDevicesOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::AccessDevicesRequest&, AccessDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AccessDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddDeviceGroupMembersResponse> AddDeviceGroupMembersOutcome;
                typedef std::future<AddDeviceGroupMembersOutcome> AddDeviceGroupMembersOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::AddDeviceGroupMembersRequest&, AddDeviceGroupMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDeviceGroupMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::AddUserGroupMembersResponse> AddUserGroupMembersOutcome;
                typedef std::future<AddUserGroupMembersOutcome> AddUserGroupMembersOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::AddUserGroupMembersRequest&, AddUserGroupMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserGroupMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::BindDeviceAccountPasswordResponse> BindDeviceAccountPasswordOutcome;
                typedef std::future<BindDeviceAccountPasswordOutcome> BindDeviceAccountPasswordOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::BindDeviceAccountPasswordRequest&, BindDeviceAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindDeviceAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::BindDeviceAccountPrivateKeyResponse> BindDeviceAccountPrivateKeyOutcome;
                typedef std::future<BindDeviceAccountPrivateKeyOutcome> BindDeviceAccountPrivateKeyOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::BindDeviceAccountPrivateKeyRequest&, BindDeviceAccountPrivateKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindDeviceAccountPrivateKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::BindDeviceResourceResponse> BindDeviceResourceOutcome;
                typedef std::future<BindDeviceResourceOutcome> BindDeviceResourceOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::BindDeviceResourceRequest&, BindDeviceResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindDeviceResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckLDAPConnectionResponse> CheckLDAPConnectionOutcome;
                typedef std::future<CheckLDAPConnectionOutcome> CheckLDAPConnectionOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::CheckLDAPConnectionRequest&, CheckLDAPConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckLDAPConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccessWhiteListRuleResponse> CreateAccessWhiteListRuleOutcome;
                typedef std::future<CreateAccessWhiteListRuleOutcome> CreateAccessWhiteListRuleOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::CreateAccessWhiteListRuleRequest&, CreateAccessWhiteListRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessWhiteListRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAclResponse> CreateAclOutcome;
                typedef std::future<CreateAclOutcome> CreateAclOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::CreateAclRequest&, CreateAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAclAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetSyncJobResponse> CreateAssetSyncJobOutcome;
                typedef std::future<CreateAssetSyncJobOutcome> CreateAssetSyncJobOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::CreateAssetSyncJobRequest&, CreateAssetSyncJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetSyncJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateChangePwdTaskResponse> CreateChangePwdTaskOutcome;
                typedef std::future<CreateChangePwdTaskOutcome> CreateChangePwdTaskOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::CreateChangePwdTaskRequest&, CreateChangePwdTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateChangePwdTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCmdTemplateResponse> CreateCmdTemplateOutcome;
                typedef std::future<CreateCmdTemplateOutcome> CreateCmdTemplateOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::CreateCmdTemplateRequest&, CreateCmdTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCmdTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceAccountResponse> CreateDeviceAccountOutcome;
                typedef std::future<CreateDeviceAccountOutcome> CreateDeviceAccountOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::CreateDeviceAccountRequest&, CreateDeviceAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceGroupResponse> CreateDeviceGroupOutcome;
                typedef std::future<CreateDeviceGroupOutcome> CreateDeviceGroupOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::CreateDeviceGroupRequest&, CreateDeviceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOperationTaskResponse> CreateOperationTaskOutcome;
                typedef std::future<CreateOperationTaskOutcome> CreateOperationTaskOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::CreateOperationTaskRequest&, CreateOperationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOperationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResourceResponse> CreateResourceOutcome;
                typedef std::future<CreateResourceOutcome> CreateResourceOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::CreateResourceRequest&, CreateResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserGroupResponse> CreateUserGroupOutcome;
                typedef std::future<CreateUserGroupOutcome> CreateUserGroupOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::CreateUserGroupRequest&, CreateUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccessWhiteListRulesResponse> DeleteAccessWhiteListRulesOutcome;
                typedef std::future<DeleteAccessWhiteListRulesOutcome> DeleteAccessWhiteListRulesOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DeleteAccessWhiteListRulesRequest&, DeleteAccessWhiteListRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessWhiteListRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAclsResponse> DeleteAclsOutcome;
                typedef std::future<DeleteAclsOutcome> DeleteAclsOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DeleteAclsRequest&, DeleteAclsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAclsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteChangePwdTaskResponse> DeleteChangePwdTaskOutcome;
                typedef std::future<DeleteChangePwdTaskOutcome> DeleteChangePwdTaskOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DeleteChangePwdTaskRequest&, DeleteChangePwdTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteChangePwdTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCmdTemplatesResponse> DeleteCmdTemplatesOutcome;
                typedef std::future<DeleteCmdTemplatesOutcome> DeleteCmdTemplatesOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DeleteCmdTemplatesRequest&, DeleteCmdTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCmdTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceAccountsResponse> DeleteDeviceAccountsOutcome;
                typedef std::future<DeleteDeviceAccountsOutcome> DeleteDeviceAccountsOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DeleteDeviceAccountsRequest&, DeleteDeviceAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceGroupMembersResponse> DeleteDeviceGroupMembersOutcome;
                typedef std::future<DeleteDeviceGroupMembersOutcome> DeleteDeviceGroupMembersOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DeleteDeviceGroupMembersRequest&, DeleteDeviceGroupMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceGroupMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceGroupsResponse> DeleteDeviceGroupsOutcome;
                typedef std::future<DeleteDeviceGroupsOutcome> DeleteDeviceGroupsOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DeleteDeviceGroupsRequest&, DeleteDeviceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDevicesResponse> DeleteDevicesOutcome;
                typedef std::future<DeleteDevicesOutcome> DeleteDevicesOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DeleteDevicesRequest&, DeleteDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOperationTasksResponse> DeleteOperationTasksOutcome;
                typedef std::future<DeleteOperationTasksOutcome> DeleteOperationTasksOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DeleteOperationTasksRequest&, DeleteOperationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOperationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserGroupMembersResponse> DeleteUserGroupMembersOutcome;
                typedef std::future<DeleteUserGroupMembersOutcome> DeleteUserGroupMembersOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DeleteUserGroupMembersRequest&, DeleteUserGroupMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserGroupsResponse> DeleteUserGroupsOutcome;
                typedef std::future<DeleteUserGroupsOutcome> DeleteUserGroupsOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DeleteUserGroupsRequest&, DeleteUserGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUsersResponse> DeleteUsersOutcome;
                typedef std::future<DeleteUsersOutcome> DeleteUsersOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DeleteUsersRequest&, DeleteUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeployResourceResponse> DeployResourceOutcome;
                typedef std::future<DeployResourceOutcome> DeployResourceOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DeployResourceRequest&, DeployResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessWhiteListRulesResponse> DescribeAccessWhiteListRulesOutcome;
                typedef std::future<DescribeAccessWhiteListRulesOutcome> DescribeAccessWhiteListRulesOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeAccessWhiteListRulesRequest&, DescribeAccessWhiteListRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessWhiteListRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAclsResponse> DescribeAclsOutcome;
                typedef std::future<DescribeAclsOutcome> DescribeAclsOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeAclsRequest&, DescribeAclsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAclsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetSyncFlagResponse> DescribeAssetSyncFlagOutcome;
                typedef std::future<DescribeAssetSyncFlagOutcome> DescribeAssetSyncFlagOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeAssetSyncFlagRequest&, DescribeAssetSyncFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSyncFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetSyncStatusResponse> DescribeAssetSyncStatusOutcome;
                typedef std::future<DescribeAssetSyncStatusOutcome> DescribeAssetSyncStatusOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeAssetSyncStatusRequest&, DescribeAssetSyncStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSyncStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChangePwdTaskResponse> DescribeChangePwdTaskOutcome;
                typedef std::future<DescribeChangePwdTaskOutcome> DescribeChangePwdTaskOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeChangePwdTaskRequest&, DescribeChangePwdTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChangePwdTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChangePwdTaskDetailResponse> DescribeChangePwdTaskDetailOutcome;
                typedef std::future<DescribeChangePwdTaskDetailOutcome> DescribeChangePwdTaskDetailOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeChangePwdTaskDetailRequest&, DescribeChangePwdTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChangePwdTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCmdTemplatesResponse> DescribeCmdTemplatesOutcome;
                typedef std::future<DescribeCmdTemplatesOutcome> DescribeCmdTemplatesOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeCmdTemplatesRequest&, DescribeCmdTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCmdTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceAccountsResponse> DescribeDeviceAccountsOutcome;
                typedef std::future<DescribeDeviceAccountsOutcome> DescribeDeviceAccountsOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeDeviceAccountsRequest&, DescribeDeviceAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceGroupMembersResponse> DescribeDeviceGroupMembersOutcome;
                typedef std::future<DescribeDeviceGroupMembersOutcome> DescribeDeviceGroupMembersOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeDeviceGroupMembersRequest&, DescribeDeviceGroupMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceGroupMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceGroupsResponse> DescribeDeviceGroupsOutcome;
                typedef std::future<DescribeDeviceGroupsOutcome> DescribeDeviceGroupsOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeDeviceGroupsRequest&, DescribeDeviceGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicesResponse> DescribeDevicesOutcome;
                typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeDevicesRequest&, DescribeDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainsResponse> DescribeDomainsOutcome;
                typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeDomainsRequest&, DescribeDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLDAPUnitSetResponse> DescribeLDAPUnitSetOutcome;
                typedef std::future<DescribeLDAPUnitSetOutcome> DescribeLDAPUnitSetOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeLDAPUnitSetRequest&, DescribeLDAPUnitSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLDAPUnitSetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginEventResponse> DescribeLoginEventOutcome;
                typedef std::future<DescribeLoginEventOutcome> DescribeLoginEventOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeLoginEventRequest&, DescribeLoginEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOperationEventResponse> DescribeOperationEventOutcome;
                typedef std::future<DescribeOperationEventOutcome> DescribeOperationEventOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeOperationEventRequest&, DescribeOperationEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOperationEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOperationTaskResponse> DescribeOperationTaskOutcome;
                typedef std::future<DescribeOperationTaskOutcome> DescribeOperationTaskOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeOperationTaskRequest&, DescribeOperationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOperationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcesResponse> DescribeResourcesOutcome;
                typedef std::future<DescribeResourcesOutcome> DescribeResourcesOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeResourcesRequest&, DescribeResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecuritySettingResponse> DescribeSecuritySettingOutcome;
                typedef std::future<DescribeSecuritySettingOutcome> DescribeSecuritySettingOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeSecuritySettingRequest&, DescribeSecuritySettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecuritySettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserGroupMembersResponse> DescribeUserGroupMembersOutcome;
                typedef std::future<DescribeUserGroupMembersOutcome> DescribeUserGroupMembersOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeUserGroupMembersRequest&, DescribeUserGroupMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserGroupMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserGroupsResponse> DescribeUserGroupsOutcome;
                typedef std::future<DescribeUserGroupsOutcome> DescribeUserGroupsOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeUserGroupsRequest&, DescribeUserGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsersResponse> DescribeUsersOutcome;
                typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DescribeUsersRequest&, DescribeUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableExternalAccessResponse> DisableExternalAccessOutcome;
                typedef std::future<DisableExternalAccessOutcome> DisableExternalAccessOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DisableExternalAccessRequest&, DisableExternalAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableExternalAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableIntranetAccessResponse> DisableIntranetAccessOutcome;
                typedef std::future<DisableIntranetAccessOutcome> DisableIntranetAccessOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::DisableIntranetAccessRequest&, DisableIntranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableIntranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableExternalAccessResponse> EnableExternalAccessOutcome;
                typedef std::future<EnableExternalAccessOutcome> EnableExternalAccessOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::EnableExternalAccessRequest&, EnableExternalAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableExternalAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableIntranetAccessResponse> EnableIntranetAccessOutcome;
                typedef std::future<EnableIntranetAccessOutcome> EnableIntranetAccessOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::EnableIntranetAccessRequest&, EnableIntranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableIntranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportExternalDeviceResponse> ImportExternalDeviceOutcome;
                typedef std::future<ImportExternalDeviceOutcome> ImportExternalDeviceOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ImportExternalDeviceRequest&, ImportExternalDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportExternalDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccessWhiteListAutoStatusResponse> ModifyAccessWhiteListAutoStatusOutcome;
                typedef std::future<ModifyAccessWhiteListAutoStatusOutcome> ModifyAccessWhiteListAutoStatusOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyAccessWhiteListAutoStatusRequest&, ModifyAccessWhiteListAutoStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessWhiteListAutoStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccessWhiteListRuleResponse> ModifyAccessWhiteListRuleOutcome;
                typedef std::future<ModifyAccessWhiteListRuleOutcome> ModifyAccessWhiteListRuleOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyAccessWhiteListRuleRequest&, ModifyAccessWhiteListRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessWhiteListRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccessWhiteListStatusResponse> ModifyAccessWhiteListStatusOutcome;
                typedef std::future<ModifyAccessWhiteListStatusOutcome> ModifyAccessWhiteListStatusOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyAccessWhiteListStatusRequest&, ModifyAccessWhiteListStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessWhiteListStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAclResponse> ModifyAclOutcome;
                typedef std::future<ModifyAclOutcome> ModifyAclOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyAclRequest&, ModifyAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAclAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetSyncFlagResponse> ModifyAssetSyncFlagOutcome;
                typedef std::future<ModifyAssetSyncFlagOutcome> ModifyAssetSyncFlagOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyAssetSyncFlagRequest&, ModifyAssetSyncFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetSyncFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuthModeSettingResponse> ModifyAuthModeSettingOutcome;
                typedef std::future<ModifyAuthModeSettingOutcome> ModifyAuthModeSettingOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyAuthModeSettingRequest&, ModifyAuthModeSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuthModeSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyChangePwdTaskResponse> ModifyChangePwdTaskOutcome;
                typedef std::future<ModifyChangePwdTaskOutcome> ModifyChangePwdTaskOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyChangePwdTaskRequest&, ModifyChangePwdTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyChangePwdTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCmdTemplateResponse> ModifyCmdTemplateOutcome;
                typedef std::future<ModifyCmdTemplateOutcome> ModifyCmdTemplateOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyCmdTemplateRequest&, ModifyCmdTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCmdTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDeviceResponse> ModifyDeviceOutcome;
                typedef std::future<ModifyDeviceOutcome> ModifyDeviceOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyDeviceRequest&, ModifyDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDeviceGroupResponse> ModifyDeviceGroupOutcome;
                typedef std::future<ModifyDeviceGroupOutcome> ModifyDeviceGroupOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyDeviceGroupRequest&, ModifyDeviceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLDAPSettingResponse> ModifyLDAPSettingOutcome;
                typedef std::future<ModifyLDAPSettingOutcome> ModifyLDAPSettingOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyLDAPSettingRequest&, ModifyLDAPSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLDAPSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOAuthSettingResponse> ModifyOAuthSettingOutcome;
                typedef std::future<ModifyOAuthSettingOutcome> ModifyOAuthSettingOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyOAuthSettingRequest&, ModifyOAuthSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOAuthSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOperationTaskResponse> ModifyOperationTaskOutcome;
                typedef std::future<ModifyOperationTaskOutcome> ModifyOperationTaskOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyOperationTaskRequest&, ModifyOperationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOperationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReconnectionSettingResponse> ModifyReconnectionSettingOutcome;
                typedef std::future<ModifyReconnectionSettingOutcome> ModifyReconnectionSettingOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyReconnectionSettingRequest&, ModifyReconnectionSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReconnectionSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourceResponse> ModifyResourceOutcome;
                typedef std::future<ModifyResourceOutcome> ModifyResourceOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyResourceRequest&, ModifyResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserResponse> ModifyUserOutcome;
                typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyUserRequest&, ModifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserGroupResponse> ModifyUserGroupOutcome;
                typedef std::future<ModifyUserGroupOutcome> ModifyUserGroupOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ModifyUserGroupRequest&, ModifyUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaySessionResponse> ReplaySessionOutcome;
                typedef std::future<ReplaySessionOutcome> ReplaySessionOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ReplaySessionRequest&, ReplaySessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaySessionAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetDeviceAccountPasswordResponse> ResetDeviceAccountPasswordOutcome;
                typedef std::future<ResetDeviceAccountPasswordOutcome> ResetDeviceAccountPasswordOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ResetDeviceAccountPasswordRequest&, ResetDeviceAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetDeviceAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetDeviceAccountPrivateKeyResponse> ResetDeviceAccountPrivateKeyOutcome;
                typedef std::future<ResetDeviceAccountPrivateKeyOutcome> ResetDeviceAccountPrivateKeyOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ResetDeviceAccountPrivateKeyRequest&, ResetDeviceAccountPrivateKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetDeviceAccountPrivateKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetUserResponse> ResetUserOutcome;
                typedef std::future<ResetUserOutcome> ResetUserOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::ResetUserRequest&, ResetUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetUserAsyncHandler;
                typedef Outcome<Core::Error, Model::RunChangePwdTaskResponse> RunChangePwdTaskOutcome;
                typedef std::future<RunChangePwdTaskOutcome> RunChangePwdTaskOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::RunChangePwdTaskRequest&, RunChangePwdTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunChangePwdTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::RunOperationTaskResponse> RunOperationTaskOutcome;
                typedef std::future<RunOperationTaskOutcome> RunOperationTaskOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::RunOperationTaskRequest&, RunOperationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunOperationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchAuditLogResponse> SearchAuditLogOutcome;
                typedef std::future<SearchAuditLogOutcome> SearchAuditLogOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::SearchAuditLogRequest&, SearchAuditLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchAuditLogAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchCommandResponse> SearchCommandOutcome;
                typedef std::future<SearchCommandOutcome> SearchCommandOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::SearchCommandRequest&, SearchCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchCommandBySidResponse> SearchCommandBySidOutcome;
                typedef std::future<SearchCommandBySidOutcome> SearchCommandBySidOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::SearchCommandBySidRequest&, SearchCommandBySidOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchCommandBySidAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchFileResponse> SearchFileOutcome;
                typedef std::future<SearchFileOutcome> SearchFileOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::SearchFileRequest&, SearchFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchFileAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchFileBySidResponse> SearchFileBySidOutcome;
                typedef std::future<SearchFileBySidOutcome> SearchFileBySidOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::SearchFileBySidRequest&, SearchFileBySidOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchFileBySidAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchSessionResponse> SearchSessionOutcome;
                typedef std::future<SearchSessionOutcome> SearchSessionOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::SearchSessionRequest&, SearchSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchSessionCommandResponse> SearchSessionCommandOutcome;
                typedef std::future<SearchSessionCommandOutcome> SearchSessionCommandOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::SearchSessionCommandRequest&, SearchSessionCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchSessionCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchSubtaskResultByIdResponse> SearchSubtaskResultByIdOutcome;
                typedef std::future<SearchSubtaskResultByIdOutcome> SearchSubtaskResultByIdOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::SearchSubtaskResultByIdRequest&, SearchSubtaskResultByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchSubtaskResultByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchTaskResultResponse> SearchTaskResultOutcome;
                typedef std::future<SearchTaskResultOutcome> SearchTaskResultOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::SearchTaskResultRequest&, SearchTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLDAPSyncFlagResponse> SetLDAPSyncFlagOutcome;
                typedef std::future<SetLDAPSyncFlagOutcome> SetLDAPSyncFlagOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::SetLDAPSyncFlagRequest&, SetLDAPSyncFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLDAPSyncFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::UnlockUserResponse> UnlockUserOutcome;
                typedef std::future<UnlockUserOutcome> UnlockUserOutcomeCallable;
                typedef std::function<void(const BhClient*, const Model::UnlockUserRequest&, UnlockUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnlockUserAsyncHandler;



                /**
                 *外部客户访问资产
                 * @param req AccessDevicesRequest
                 * @return AccessDevicesOutcome
                 */
                AccessDevicesOutcome AccessDevices(const Model::AccessDevicesRequest &request);
                void AccessDevicesAsync(const Model::AccessDevicesRequest& request, const AccessDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AccessDevicesOutcomeCallable AccessDevicesCallable(const Model::AccessDevicesRequest& request);

                /**
                 *添加资产组成员
                 * @param req AddDeviceGroupMembersRequest
                 * @return AddDeviceGroupMembersOutcome
                 */
                AddDeviceGroupMembersOutcome AddDeviceGroupMembers(const Model::AddDeviceGroupMembersRequest &request);
                void AddDeviceGroupMembersAsync(const Model::AddDeviceGroupMembersRequest& request, const AddDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDeviceGroupMembersOutcomeCallable AddDeviceGroupMembersCallable(const Model::AddDeviceGroupMembersRequest& request);

                /**
                 *添加用户组成员
                 * @param req AddUserGroupMembersRequest
                 * @return AddUserGroupMembersOutcome
                 */
                AddUserGroupMembersOutcome AddUserGroupMembers(const Model::AddUserGroupMembersRequest &request);
                void AddUserGroupMembersAsync(const Model::AddUserGroupMembersRequest& request, const AddUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserGroupMembersOutcomeCallable AddUserGroupMembersCallable(const Model::AddUserGroupMembersRequest& request);

                /**
                 *绑定主机账号密码
                 * @param req BindDeviceAccountPasswordRequest
                 * @return BindDeviceAccountPasswordOutcome
                 */
                BindDeviceAccountPasswordOutcome BindDeviceAccountPassword(const Model::BindDeviceAccountPasswordRequest &request);
                void BindDeviceAccountPasswordAsync(const Model::BindDeviceAccountPasswordRequest& request, const BindDeviceAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindDeviceAccountPasswordOutcomeCallable BindDeviceAccountPasswordCallable(const Model::BindDeviceAccountPasswordRequest& request);

                /**
                 *绑定主机账号私钥
                 * @param req BindDeviceAccountPrivateKeyRequest
                 * @return BindDeviceAccountPrivateKeyOutcome
                 */
                BindDeviceAccountPrivateKeyOutcome BindDeviceAccountPrivateKey(const Model::BindDeviceAccountPrivateKeyRequest &request);
                void BindDeviceAccountPrivateKeyAsync(const Model::BindDeviceAccountPrivateKeyRequest& request, const BindDeviceAccountPrivateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindDeviceAccountPrivateKeyOutcomeCallable BindDeviceAccountPrivateKeyCallable(const Model::BindDeviceAccountPrivateKeyRequest& request);

                /**
                 *修改资产绑定的堡垒机服务
                 * @param req BindDeviceResourceRequest
                 * @return BindDeviceResourceOutcome
                 */
                BindDeviceResourceOutcome BindDeviceResource(const Model::BindDeviceResourceRequest &request);
                void BindDeviceResourceAsync(const Model::BindDeviceResourceRequest& request, const BindDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindDeviceResourceOutcomeCallable BindDeviceResourceCallable(const Model::BindDeviceResourceRequest& request);

                /**
                 *测试LDAP连接
                 * @param req CheckLDAPConnectionRequest
                 * @return CheckLDAPConnectionOutcome
                 */
                CheckLDAPConnectionOutcome CheckLDAPConnection(const Model::CheckLDAPConnectionRequest &request);
                void CheckLDAPConnectionAsync(const Model::CheckLDAPConnectionRequest& request, const CheckLDAPConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckLDAPConnectionOutcomeCallable CheckLDAPConnectionCallable(const Model::CheckLDAPConnectionRequest& request);

                /**
                 *添加访问白名单规则
                 * @param req CreateAccessWhiteListRuleRequest
                 * @return CreateAccessWhiteListRuleOutcome
                 */
                CreateAccessWhiteListRuleOutcome CreateAccessWhiteListRule(const Model::CreateAccessWhiteListRuleRequest &request);
                void CreateAccessWhiteListRuleAsync(const Model::CreateAccessWhiteListRuleRequest& request, const CreateAccessWhiteListRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccessWhiteListRuleOutcomeCallable CreateAccessWhiteListRuleCallable(const Model::CreateAccessWhiteListRuleRequest& request);

                /**
                 *新建访问权限
                 * @param req CreateAclRequest
                 * @return CreateAclOutcome
                 */
                CreateAclOutcome CreateAcl(const Model::CreateAclRequest &request);
                void CreateAclAsync(const Model::CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAclOutcomeCallable CreateAclCallable(const Model::CreateAclRequest& request);

                /**
                 *创建手工资产同步任务
                 * @param req CreateAssetSyncJobRequest
                 * @return CreateAssetSyncJobOutcome
                 */
                CreateAssetSyncJobOutcome CreateAssetSyncJob(const Model::CreateAssetSyncJobRequest &request);
                void CreateAssetSyncJobAsync(const Model::CreateAssetSyncJobRequest& request, const CreateAssetSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetSyncJobOutcomeCallable CreateAssetSyncJobCallable(const Model::CreateAssetSyncJobRequest& request);

                /**
                 *创建修改密码任务
                 * @param req CreateChangePwdTaskRequest
                 * @return CreateChangePwdTaskOutcome
                 */
                CreateChangePwdTaskOutcome CreateChangePwdTask(const Model::CreateChangePwdTaskRequest &request);
                void CreateChangePwdTaskAsync(const Model::CreateChangePwdTaskRequest& request, const CreateChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateChangePwdTaskOutcomeCallable CreateChangePwdTaskCallable(const Model::CreateChangePwdTaskRequest& request);

                /**
                 *新建高危命令模板
                 * @param req CreateCmdTemplateRequest
                 * @return CreateCmdTemplateOutcome
                 */
                CreateCmdTemplateOutcome CreateCmdTemplate(const Model::CreateCmdTemplateRequest &request);
                void CreateCmdTemplateAsync(const Model::CreateCmdTemplateRequest& request, const CreateCmdTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCmdTemplateOutcomeCallable CreateCmdTemplateCallable(const Model::CreateCmdTemplateRequest& request);

                /**
                 *新建主机账号
                 * @param req CreateDeviceAccountRequest
                 * @return CreateDeviceAccountOutcome
                 */
                CreateDeviceAccountOutcome CreateDeviceAccount(const Model::CreateDeviceAccountRequest &request);
                void CreateDeviceAccountAsync(const Model::CreateDeviceAccountRequest& request, const CreateDeviceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceAccountOutcomeCallable CreateDeviceAccountCallable(const Model::CreateDeviceAccountRequest& request);

                /**
                 *新建资产组
                 * @param req CreateDeviceGroupRequest
                 * @return CreateDeviceGroupOutcome
                 */
                CreateDeviceGroupOutcome CreateDeviceGroup(const Model::CreateDeviceGroupRequest &request);
                void CreateDeviceGroupAsync(const Model::CreateDeviceGroupRequest& request, const CreateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceGroupOutcomeCallable CreateDeviceGroupCallable(const Model::CreateDeviceGroupRequest& request);

                /**
                 *创建运维任务
                 * @param req CreateOperationTaskRequest
                 * @return CreateOperationTaskOutcome
                 */
                CreateOperationTaskOutcome CreateOperationTask(const Model::CreateOperationTaskRequest &request);
                void CreateOperationTaskAsync(const Model::CreateOperationTaskRequest& request, const CreateOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOperationTaskOutcomeCallable CreateOperationTaskCallable(const Model::CreateOperationTaskRequest& request);

                /**
                 *创建堡垒机实例
                 * @param req CreateResourceRequest
                 * @return CreateResourceOutcome
                 */
                CreateResourceOutcome CreateResource(const Model::CreateResourceRequest &request);
                void CreateResourceAsync(const Model::CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResourceOutcomeCallable CreateResourceCallable(const Model::CreateResourceRequest& request);

                /**
                 *新建用户
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *新建用户组
                 * @param req CreateUserGroupRequest
                 * @return CreateUserGroupOutcome
                 */
                CreateUserGroupOutcome CreateUserGroup(const Model::CreateUserGroupRequest &request);
                void CreateUserGroupAsync(const Model::CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserGroupOutcomeCallable CreateUserGroupCallable(const Model::CreateUserGroupRequest& request);

                /**
                 *删除访问白名单规则
                 * @param req DeleteAccessWhiteListRulesRequest
                 * @return DeleteAccessWhiteListRulesOutcome
                 */
                DeleteAccessWhiteListRulesOutcome DeleteAccessWhiteListRules(const Model::DeleteAccessWhiteListRulesRequest &request);
                void DeleteAccessWhiteListRulesAsync(const Model::DeleteAccessWhiteListRulesRequest& request, const DeleteAccessWhiteListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccessWhiteListRulesOutcomeCallable DeleteAccessWhiteListRulesCallable(const Model::DeleteAccessWhiteListRulesRequest& request);

                /**
                 *删除访问权限
                 * @param req DeleteAclsRequest
                 * @return DeleteAclsOutcome
                 */
                DeleteAclsOutcome DeleteAcls(const Model::DeleteAclsRequest &request);
                void DeleteAclsAsync(const Model::DeleteAclsRequest& request, const DeleteAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAclsOutcomeCallable DeleteAclsCallable(const Model::DeleteAclsRequest& request);

                /**
                 *删除改密任务
                 * @param req DeleteChangePwdTaskRequest
                 * @return DeleteChangePwdTaskOutcome
                 */
                DeleteChangePwdTaskOutcome DeleteChangePwdTask(const Model::DeleteChangePwdTaskRequest &request);
                void DeleteChangePwdTaskAsync(const Model::DeleteChangePwdTaskRequest& request, const DeleteChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteChangePwdTaskOutcomeCallable DeleteChangePwdTaskCallable(const Model::DeleteChangePwdTaskRequest& request);

                /**
                 *删除高危命令模板
                 * @param req DeleteCmdTemplatesRequest
                 * @return DeleteCmdTemplatesOutcome
                 */
                DeleteCmdTemplatesOutcome DeleteCmdTemplates(const Model::DeleteCmdTemplatesRequest &request);
                void DeleteCmdTemplatesAsync(const Model::DeleteCmdTemplatesRequest& request, const DeleteCmdTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCmdTemplatesOutcomeCallable DeleteCmdTemplatesCallable(const Model::DeleteCmdTemplatesRequest& request);

                /**
                 *删除主机账号
                 * @param req DeleteDeviceAccountsRequest
                 * @return DeleteDeviceAccountsOutcome
                 */
                DeleteDeviceAccountsOutcome DeleteDeviceAccounts(const Model::DeleteDeviceAccountsRequest &request);
                void DeleteDeviceAccountsAsync(const Model::DeleteDeviceAccountsRequest& request, const DeleteDeviceAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceAccountsOutcomeCallable DeleteDeviceAccountsCallable(const Model::DeleteDeviceAccountsRequest& request);

                /**
                 *删除资产组成员
                 * @param req DeleteDeviceGroupMembersRequest
                 * @return DeleteDeviceGroupMembersOutcome
                 */
                DeleteDeviceGroupMembersOutcome DeleteDeviceGroupMembers(const Model::DeleteDeviceGroupMembersRequest &request);
                void DeleteDeviceGroupMembersAsync(const Model::DeleteDeviceGroupMembersRequest& request, const DeleteDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceGroupMembersOutcomeCallable DeleteDeviceGroupMembersCallable(const Model::DeleteDeviceGroupMembersRequest& request);

                /**
                 *删除资产组
                 * @param req DeleteDeviceGroupsRequest
                 * @return DeleteDeviceGroupsOutcome
                 */
                DeleteDeviceGroupsOutcome DeleteDeviceGroups(const Model::DeleteDeviceGroupsRequest &request);
                void DeleteDeviceGroupsAsync(const Model::DeleteDeviceGroupsRequest& request, const DeleteDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceGroupsOutcomeCallable DeleteDeviceGroupsCallable(const Model::DeleteDeviceGroupsRequest& request);

                /**
                 *删除主机
                 * @param req DeleteDevicesRequest
                 * @return DeleteDevicesOutcome
                 */
                DeleteDevicesOutcome DeleteDevices(const Model::DeleteDevicesRequest &request);
                void DeleteDevicesAsync(const Model::DeleteDevicesRequest& request, const DeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDevicesOutcomeCallable DeleteDevicesCallable(const Model::DeleteDevicesRequest& request);

                /**
                 *删除运维任务
                 * @param req DeleteOperationTasksRequest
                 * @return DeleteOperationTasksOutcome
                 */
                DeleteOperationTasksOutcome DeleteOperationTasks(const Model::DeleteOperationTasksRequest &request);
                void DeleteOperationTasksAsync(const Model::DeleteOperationTasksRequest& request, const DeleteOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOperationTasksOutcomeCallable DeleteOperationTasksCallable(const Model::DeleteOperationTasksRequest& request);

                /**
                 *删除用户组成员
                 * @param req DeleteUserGroupMembersRequest
                 * @return DeleteUserGroupMembersOutcome
                 */
                DeleteUserGroupMembersOutcome DeleteUserGroupMembers(const Model::DeleteUserGroupMembersRequest &request);
                void DeleteUserGroupMembersAsync(const Model::DeleteUserGroupMembersRequest& request, const DeleteUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserGroupMembersOutcomeCallable DeleteUserGroupMembersCallable(const Model::DeleteUserGroupMembersRequest& request);

                /**
                 *删除用户组
                 * @param req DeleteUserGroupsRequest
                 * @return DeleteUserGroupsOutcome
                 */
                DeleteUserGroupsOutcome DeleteUserGroups(const Model::DeleteUserGroupsRequest &request);
                void DeleteUserGroupsAsync(const Model::DeleteUserGroupsRequest& request, const DeleteUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserGroupsOutcomeCallable DeleteUserGroupsCallable(const Model::DeleteUserGroupsRequest& request);

                /**
                 *删除用户
                 * @param req DeleteUsersRequest
                 * @return DeleteUsersOutcome
                 */
                DeleteUsersOutcome DeleteUsers(const Model::DeleteUsersRequest &request);
                void DeleteUsersAsync(const Model::DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUsersOutcomeCallable DeleteUsersCallable(const Model::DeleteUsersRequest& request);

                /**
                 *开通服务，初始化资源，只针对新购资源
                 * @param req DeployResourceRequest
                 * @return DeployResourceOutcome
                 */
                DeployResourceOutcome DeployResource(const Model::DeployResourceRequest &request);
                void DeployResourceAsync(const Model::DeployResourceRequest& request, const DeployResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployResourceOutcomeCallable DeployResourceCallable(const Model::DeployResourceRequest& request);

                /**
                 *查询访问白名单规则列表
                 * @param req DescribeAccessWhiteListRulesRequest
                 * @return DescribeAccessWhiteListRulesOutcome
                 */
                DescribeAccessWhiteListRulesOutcome DescribeAccessWhiteListRules(const Model::DescribeAccessWhiteListRulesRequest &request);
                void DescribeAccessWhiteListRulesAsync(const Model::DescribeAccessWhiteListRulesRequest& request, const DescribeAccessWhiteListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessWhiteListRulesOutcomeCallable DescribeAccessWhiteListRulesCallable(const Model::DescribeAccessWhiteListRulesRequest& request);

                /**
                 *查询访问权限列表
                 * @param req DescribeAclsRequest
                 * @return DescribeAclsOutcome
                 */
                DescribeAclsOutcome DescribeAcls(const Model::DescribeAclsRequest &request);
                void DescribeAclsAsync(const Model::DescribeAclsRequest& request, const DescribeAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAclsOutcomeCallable DescribeAclsCallable(const Model::DescribeAclsRequest& request);

                /**
                 *查询资产自动同步开关
                 * @param req DescribeAssetSyncFlagRequest
                 * @return DescribeAssetSyncFlagOutcome
                 */
                DescribeAssetSyncFlagOutcome DescribeAssetSyncFlag(const Model::DescribeAssetSyncFlagRequest &request);
                void DescribeAssetSyncFlagAsync(const Model::DescribeAssetSyncFlagRequest& request, const DescribeAssetSyncFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetSyncFlagOutcomeCallable DescribeAssetSyncFlagCallable(const Model::DescribeAssetSyncFlagRequest& request);

                /**
                 *查询资产同步状态
                 * @param req DescribeAssetSyncStatusRequest
                 * @return DescribeAssetSyncStatusOutcome
                 */
                DescribeAssetSyncStatusOutcome DescribeAssetSyncStatus(const Model::DescribeAssetSyncStatusRequest &request);
                void DescribeAssetSyncStatusAsync(const Model::DescribeAssetSyncStatusRequest& request, const DescribeAssetSyncStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetSyncStatusOutcomeCallable DescribeAssetSyncStatusCallable(const Model::DescribeAssetSyncStatusRequest& request);

                /**
                 *查询改密任务列表
                 * @param req DescribeChangePwdTaskRequest
                 * @return DescribeChangePwdTaskOutcome
                 */
                DescribeChangePwdTaskOutcome DescribeChangePwdTask(const Model::DescribeChangePwdTaskRequest &request);
                void DescribeChangePwdTaskAsync(const Model::DescribeChangePwdTaskRequest& request, const DescribeChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChangePwdTaskOutcomeCallable DescribeChangePwdTaskCallable(const Model::DescribeChangePwdTaskRequest& request);

                /**
                 *查询改密任务详情
                 * @param req DescribeChangePwdTaskDetailRequest
                 * @return DescribeChangePwdTaskDetailOutcome
                 */
                DescribeChangePwdTaskDetailOutcome DescribeChangePwdTaskDetail(const Model::DescribeChangePwdTaskDetailRequest &request);
                void DescribeChangePwdTaskDetailAsync(const Model::DescribeChangePwdTaskDetailRequest& request, const DescribeChangePwdTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChangePwdTaskDetailOutcomeCallable DescribeChangePwdTaskDetailCallable(const Model::DescribeChangePwdTaskDetailRequest& request);

                /**
                 *查询命令模板列表
                 * @param req DescribeCmdTemplatesRequest
                 * @return DescribeCmdTemplatesOutcome
                 */
                DescribeCmdTemplatesOutcome DescribeCmdTemplates(const Model::DescribeCmdTemplatesRequest &request);
                void DescribeCmdTemplatesAsync(const Model::DescribeCmdTemplatesRequest& request, const DescribeCmdTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCmdTemplatesOutcomeCallable DescribeCmdTemplatesCallable(const Model::DescribeCmdTemplatesRequest& request);

                /**
                 *查询主机账号列表
                 * @param req DescribeDeviceAccountsRequest
                 * @return DescribeDeviceAccountsOutcome
                 */
                DescribeDeviceAccountsOutcome DescribeDeviceAccounts(const Model::DescribeDeviceAccountsRequest &request);
                void DescribeDeviceAccountsAsync(const Model::DescribeDeviceAccountsRequest& request, const DescribeDeviceAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceAccountsOutcomeCallable DescribeDeviceAccountsCallable(const Model::DescribeDeviceAccountsRequest& request);

                /**
                 *查询资产组成员列表
                 * @param req DescribeDeviceGroupMembersRequest
                 * @return DescribeDeviceGroupMembersOutcome
                 */
                DescribeDeviceGroupMembersOutcome DescribeDeviceGroupMembers(const Model::DescribeDeviceGroupMembersRequest &request);
                void DescribeDeviceGroupMembersAsync(const Model::DescribeDeviceGroupMembersRequest& request, const DescribeDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceGroupMembersOutcomeCallable DescribeDeviceGroupMembersCallable(const Model::DescribeDeviceGroupMembersRequest& request);

                /**
                 *查询资产组列表
                 * @param req DescribeDeviceGroupsRequest
                 * @return DescribeDeviceGroupsOutcome
                 */
                DescribeDeviceGroupsOutcome DescribeDeviceGroups(const Model::DescribeDeviceGroupsRequest &request);
                void DescribeDeviceGroupsAsync(const Model::DescribeDeviceGroupsRequest& request, const DescribeDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceGroupsOutcomeCallable DescribeDeviceGroupsCallable(const Model::DescribeDeviceGroupsRequest& request);

                /**
                 *查询资产列表
                 * @param req DescribeDevicesRequest
                 * @return DescribeDevicesOutcome
                 */
                DescribeDevicesOutcome DescribeDevices(const Model::DescribeDevicesRequest &request);
                void DescribeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicesOutcomeCallable DescribeDevicesCallable(const Model::DescribeDevicesRequest& request);

                /**
                 *查询网络域
                 * @param req DescribeDomainsRequest
                 * @return DescribeDomainsOutcome
                 */
                DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest &request);
                void DescribeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsOutcomeCallable DescribeDomainsCallable(const Model::DescribeDomainsRequest& request);

                /**
                 *获取LDAP ou 列表
                 * @param req DescribeLDAPUnitSetRequest
                 * @return DescribeLDAPUnitSetOutcome
                 */
                DescribeLDAPUnitSetOutcome DescribeLDAPUnitSet(const Model::DescribeLDAPUnitSetRequest &request);
                void DescribeLDAPUnitSetAsync(const Model::DescribeLDAPUnitSetRequest& request, const DescribeLDAPUnitSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLDAPUnitSetOutcomeCallable DescribeLDAPUnitSetCallable(const Model::DescribeLDAPUnitSetRequest& request);

                /**
                 *查询登录日志
                 * @param req DescribeLoginEventRequest
                 * @return DescribeLoginEventOutcome
                 */
                DescribeLoginEventOutcome DescribeLoginEvent(const Model::DescribeLoginEventRequest &request);
                void DescribeLoginEventAsync(const Model::DescribeLoginEventRequest& request, const DescribeLoginEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginEventOutcomeCallable DescribeLoginEventCallable(const Model::DescribeLoginEventRequest& request);

                /**
                 *查询操作日志
                 * @param req DescribeOperationEventRequest
                 * @return DescribeOperationEventOutcome
                 */
                DescribeOperationEventOutcome DescribeOperationEvent(const Model::DescribeOperationEventRequest &request);
                void DescribeOperationEventAsync(const Model::DescribeOperationEventRequest& request, const DescribeOperationEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOperationEventOutcomeCallable DescribeOperationEventCallable(const Model::DescribeOperationEventRequest& request);

                /**
                 *获取运维任务列表
                 * @param req DescribeOperationTaskRequest
                 * @return DescribeOperationTaskOutcome
                 */
                DescribeOperationTaskOutcome DescribeOperationTask(const Model::DescribeOperationTaskRequest &request);
                void DescribeOperationTaskAsync(const Model::DescribeOperationTaskRequest& request, const DescribeOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOperationTaskOutcomeCallable DescribeOperationTaskCallable(const Model::DescribeOperationTaskRequest& request);

                /**
                 *查询用户购买的堡垒机服务信息，包括资源ID、授权点数、VPC、过期时间等。
                 * @param req DescribeResourcesRequest
                 * @return DescribeResourcesOutcome
                 */
                DescribeResourcesOutcome DescribeResources(const Model::DescribeResourcesRequest &request);
                void DescribeResourcesAsync(const Model::DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcesOutcomeCallable DescribeResourcesCallable(const Model::DescribeResourcesRequest& request);

                /**
                 *查询安全配置信息
                 * @param req DescribeSecuritySettingRequest
                 * @return DescribeSecuritySettingOutcome
                 */
                DescribeSecuritySettingOutcome DescribeSecuritySetting(const Model::DescribeSecuritySettingRequest &request);
                void DescribeSecuritySettingAsync(const Model::DescribeSecuritySettingRequest& request, const DescribeSecuritySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecuritySettingOutcomeCallable DescribeSecuritySettingCallable(const Model::DescribeSecuritySettingRequest& request);

                /**
                 *查询用户组成员列表
                 * @param req DescribeUserGroupMembersRequest
                 * @return DescribeUserGroupMembersOutcome
                 */
                DescribeUserGroupMembersOutcome DescribeUserGroupMembers(const Model::DescribeUserGroupMembersRequest &request);
                void DescribeUserGroupMembersAsync(const Model::DescribeUserGroupMembersRequest& request, const DescribeUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserGroupMembersOutcomeCallable DescribeUserGroupMembersCallable(const Model::DescribeUserGroupMembersRequest& request);

                /**
                 *查询用户组列表
                 * @param req DescribeUserGroupsRequest
                 * @return DescribeUserGroupsOutcome
                 */
                DescribeUserGroupsOutcome DescribeUserGroups(const Model::DescribeUserGroupsRequest &request);
                void DescribeUserGroupsAsync(const Model::DescribeUserGroupsRequest& request, const DescribeUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserGroupsOutcomeCallable DescribeUserGroupsCallable(const Model::DescribeUserGroupsRequest& request);

                /**
                 *查询用户列表
                 * @param req DescribeUsersRequest
                 * @return DescribeUsersOutcome
                 */
                DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest &request);
                void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request);

                /**
                 *关闭公网访问堡垒机
                 * @param req DisableExternalAccessRequest
                 * @return DisableExternalAccessOutcome
                 */
                DisableExternalAccessOutcome DisableExternalAccess(const Model::DisableExternalAccessRequest &request);
                void DisableExternalAccessAsync(const Model::DisableExternalAccessRequest& request, const DisableExternalAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableExternalAccessOutcomeCallable DisableExternalAccessCallable(const Model::DisableExternalAccessRequest& request);

                /**
                 *关闭内网访问
                 * @param req DisableIntranetAccessRequest
                 * @return DisableIntranetAccessOutcome
                 */
                DisableIntranetAccessOutcome DisableIntranetAccess(const Model::DisableIntranetAccessRequest &request);
                void DisableIntranetAccessAsync(const Model::DisableIntranetAccessRequest& request, const DisableIntranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableIntranetAccessOutcomeCallable DisableIntranetAccessCallable(const Model::DisableIntranetAccessRequest& request);

                /**
                 *开启公网访问堡垒机
                 * @param req EnableExternalAccessRequest
                 * @return EnableExternalAccessOutcome
                 */
                EnableExternalAccessOutcome EnableExternalAccess(const Model::EnableExternalAccessRequest &request);
                void EnableExternalAccessAsync(const Model::EnableExternalAccessRequest& request, const EnableExternalAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableExternalAccessOutcomeCallable EnableExternalAccessCallable(const Model::EnableExternalAccessRequest& request);

                /**
                 *开通内网访问
                 * @param req EnableIntranetAccessRequest
                 * @return EnableIntranetAccessOutcome
                 */
                EnableIntranetAccessOutcome EnableIntranetAccess(const Model::EnableIntranetAccessRequest &request);
                void EnableIntranetAccessAsync(const Model::EnableIntranetAccessRequest& request, const EnableIntranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableIntranetAccessOutcomeCallable EnableIntranetAccessCallable(const Model::EnableIntranetAccessRequest& request);

                /**
                 *导入外部资产信息
                 * @param req ImportExternalDeviceRequest
                 * @return ImportExternalDeviceOutcome
                 */
                ImportExternalDeviceOutcome ImportExternalDevice(const Model::ImportExternalDeviceRequest &request);
                void ImportExternalDeviceAsync(const Model::ImportExternalDeviceRequest& request, const ImportExternalDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportExternalDeviceOutcomeCallable ImportExternalDeviceCallable(const Model::ImportExternalDeviceRequest& request);

                /**
                 *修改访问白名单自动添加IP状态：开启或关闭自动添加IP
                 * @param req ModifyAccessWhiteListAutoStatusRequest
                 * @return ModifyAccessWhiteListAutoStatusOutcome
                 */
                ModifyAccessWhiteListAutoStatusOutcome ModifyAccessWhiteListAutoStatus(const Model::ModifyAccessWhiteListAutoStatusRequest &request);
                void ModifyAccessWhiteListAutoStatusAsync(const Model::ModifyAccessWhiteListAutoStatusRequest& request, const ModifyAccessWhiteListAutoStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccessWhiteListAutoStatusOutcomeCallable ModifyAccessWhiteListAutoStatusCallable(const Model::ModifyAccessWhiteListAutoStatusRequest& request);

                /**
                 *修改访问白名单规则
                 * @param req ModifyAccessWhiteListRuleRequest
                 * @return ModifyAccessWhiteListRuleOutcome
                 */
                ModifyAccessWhiteListRuleOutcome ModifyAccessWhiteListRule(const Model::ModifyAccessWhiteListRuleRequest &request);
                void ModifyAccessWhiteListRuleAsync(const Model::ModifyAccessWhiteListRuleRequest& request, const ModifyAccessWhiteListRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccessWhiteListRuleOutcomeCallable ModifyAccessWhiteListRuleCallable(const Model::ModifyAccessWhiteListRuleRequest& request);

                /**
                 *修改访问白名单状态：开启或关闭放开全部来源IP。
                 * @param req ModifyAccessWhiteListStatusRequest
                 * @return ModifyAccessWhiteListStatusOutcome
                 */
                ModifyAccessWhiteListStatusOutcome ModifyAccessWhiteListStatus(const Model::ModifyAccessWhiteListStatusRequest &request);
                void ModifyAccessWhiteListStatusAsync(const Model::ModifyAccessWhiteListStatusRequest& request, const ModifyAccessWhiteListStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccessWhiteListStatusOutcomeCallable ModifyAccessWhiteListStatusCallable(const Model::ModifyAccessWhiteListStatusRequest& request);

                /**
                 *修改访问权限
                 * @param req ModifyAclRequest
                 * @return ModifyAclOutcome
                 */
                ModifyAclOutcome ModifyAcl(const Model::ModifyAclRequest &request);
                void ModifyAclAsync(const Model::ModifyAclRequest& request, const ModifyAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAclOutcomeCallable ModifyAclCallable(const Model::ModifyAclRequest& request);

                /**
                 *修改资产自动同步开关
                 * @param req ModifyAssetSyncFlagRequest
                 * @return ModifyAssetSyncFlagOutcome
                 */
                ModifyAssetSyncFlagOutcome ModifyAssetSyncFlag(const Model::ModifyAssetSyncFlagRequest &request);
                void ModifyAssetSyncFlagAsync(const Model::ModifyAssetSyncFlagRequest& request, const ModifyAssetSyncFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetSyncFlagOutcomeCallable ModifyAssetSyncFlagCallable(const Model::ModifyAssetSyncFlagRequest& request);

                /**
                 *修改认证方式配置信息
                 * @param req ModifyAuthModeSettingRequest
                 * @return ModifyAuthModeSettingOutcome
                 */
                ModifyAuthModeSettingOutcome ModifyAuthModeSetting(const Model::ModifyAuthModeSettingRequest &request);
                void ModifyAuthModeSettingAsync(const Model::ModifyAuthModeSettingRequest& request, const ModifyAuthModeSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuthModeSettingOutcomeCallable ModifyAuthModeSettingCallable(const Model::ModifyAuthModeSettingRequest& request);

                /**
                 *更新修改密码任务
                 * @param req ModifyChangePwdTaskRequest
                 * @return ModifyChangePwdTaskOutcome
                 */
                ModifyChangePwdTaskOutcome ModifyChangePwdTask(const Model::ModifyChangePwdTaskRequest &request);
                void ModifyChangePwdTaskAsync(const Model::ModifyChangePwdTaskRequest& request, const ModifyChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyChangePwdTaskOutcomeCallable ModifyChangePwdTaskCallable(const Model::ModifyChangePwdTaskRequest& request);

                /**
                 *修改高危命令模板
                 * @param req ModifyCmdTemplateRequest
                 * @return ModifyCmdTemplateOutcome
                 */
                ModifyCmdTemplateOutcome ModifyCmdTemplate(const Model::ModifyCmdTemplateRequest &request);
                void ModifyCmdTemplateAsync(const Model::ModifyCmdTemplateRequest& request, const ModifyCmdTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCmdTemplateOutcomeCallable ModifyCmdTemplateCallable(const Model::ModifyCmdTemplateRequest& request);

                /**
                 *修改资产信息
                 * @param req ModifyDeviceRequest
                 * @return ModifyDeviceOutcome
                 */
                ModifyDeviceOutcome ModifyDevice(const Model::ModifyDeviceRequest &request);
                void ModifyDeviceAsync(const Model::ModifyDeviceRequest& request, const ModifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceOutcomeCallable ModifyDeviceCallable(const Model::ModifyDeviceRequest& request);

                /**
                 *修改资产组
                 * @param req ModifyDeviceGroupRequest
                 * @return ModifyDeviceGroupOutcome
                 */
                ModifyDeviceGroupOutcome ModifyDeviceGroup(const Model::ModifyDeviceGroupRequest &request);
                void ModifyDeviceGroupAsync(const Model::ModifyDeviceGroupRequest& request, const ModifyDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceGroupOutcomeCallable ModifyDeviceGroupCallable(const Model::ModifyDeviceGroupRequest& request);

                /**
                 *修改LDAP配置信息
                 * @param req ModifyLDAPSettingRequest
                 * @return ModifyLDAPSettingOutcome
                 */
                ModifyLDAPSettingOutcome ModifyLDAPSetting(const Model::ModifyLDAPSettingRequest &request);
                void ModifyLDAPSettingAsync(const Model::ModifyLDAPSettingRequest& request, const ModifyLDAPSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLDAPSettingOutcomeCallable ModifyLDAPSettingCallable(const Model::ModifyLDAPSettingRequest& request);

                /**
                 *设置OAuth认证参数
                 * @param req ModifyOAuthSettingRequest
                 * @return ModifyOAuthSettingOutcome
                 */
                ModifyOAuthSettingOutcome ModifyOAuthSetting(const Model::ModifyOAuthSettingRequest &request);
                void ModifyOAuthSettingAsync(const Model::ModifyOAuthSettingRequest& request, const ModifyOAuthSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOAuthSettingOutcomeCallable ModifyOAuthSettingCallable(const Model::ModifyOAuthSettingRequest& request);

                /**
                 *修改运维任务
                 * @param req ModifyOperationTaskRequest
                 * @return ModifyOperationTaskOutcome
                 */
                ModifyOperationTaskOutcome ModifyOperationTask(const Model::ModifyOperationTaskRequest &request);
                void ModifyOperationTaskAsync(const Model::ModifyOperationTaskRequest& request, const ModifyOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOperationTaskOutcomeCallable ModifyOperationTaskCallable(const Model::ModifyOperationTaskRequest& request);

                /**
                 *修改运维资产连接重连次数
                 * @param req ModifyReconnectionSettingRequest
                 * @return ModifyReconnectionSettingOutcome
                 */
                ModifyReconnectionSettingOutcome ModifyReconnectionSetting(const Model::ModifyReconnectionSettingRequest &request);
                void ModifyReconnectionSettingAsync(const Model::ModifyReconnectionSettingRequest& request, const ModifyReconnectionSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReconnectionSettingOutcomeCallable ModifyReconnectionSettingCallable(const Model::ModifyReconnectionSettingRequest& request);

                /**
                 *资源变配
                 * @param req ModifyResourceRequest
                 * @return ModifyResourceOutcome
                 */
                ModifyResourceOutcome ModifyResource(const Model::ModifyResourceRequest &request);
                void ModifyResourceAsync(const Model::ModifyResourceRequest& request, const ModifyResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceOutcomeCallable ModifyResourceCallable(const Model::ModifyResourceRequest& request);

                /**
                 *修改用户信息
                 * @param req ModifyUserRequest
                 * @return ModifyUserOutcome
                 */
                ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest &request);
                void ModifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserOutcomeCallable ModifyUserCallable(const Model::ModifyUserRequest& request);

                /**
                 *修改用户组
                 * @param req ModifyUserGroupRequest
                 * @return ModifyUserGroupOutcome
                 */
                ModifyUserGroupOutcome ModifyUserGroup(const Model::ModifyUserGroupRequest &request);
                void ModifyUserGroupAsync(const Model::ModifyUserGroupRequest& request, const ModifyUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserGroupOutcomeCallable ModifyUserGroupCallable(const Model::ModifyUserGroupRequest& request);

                /**
                 *会话回放
                 * @param req ReplaySessionRequest
                 * @return ReplaySessionOutcome
                 */
                ReplaySessionOutcome ReplaySession(const Model::ReplaySessionRequest &request);
                void ReplaySessionAsync(const Model::ReplaySessionRequest& request, const ReplaySessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaySessionOutcomeCallable ReplaySessionCallable(const Model::ReplaySessionRequest& request);

                /**
                 *清除设备账号绑定密码
                 * @param req ResetDeviceAccountPasswordRequest
                 * @return ResetDeviceAccountPasswordOutcome
                 */
                ResetDeviceAccountPasswordOutcome ResetDeviceAccountPassword(const Model::ResetDeviceAccountPasswordRequest &request);
                void ResetDeviceAccountPasswordAsync(const Model::ResetDeviceAccountPasswordRequest& request, const ResetDeviceAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetDeviceAccountPasswordOutcomeCallable ResetDeviceAccountPasswordCallable(const Model::ResetDeviceAccountPasswordRequest& request);

                /**
                 *清除设备账号绑定的密钥
                 * @param req ResetDeviceAccountPrivateKeyRequest
                 * @return ResetDeviceAccountPrivateKeyOutcome
                 */
                ResetDeviceAccountPrivateKeyOutcome ResetDeviceAccountPrivateKey(const Model::ResetDeviceAccountPrivateKeyRequest &request);
                void ResetDeviceAccountPrivateKeyAsync(const Model::ResetDeviceAccountPrivateKeyRequest& request, const ResetDeviceAccountPrivateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetDeviceAccountPrivateKeyOutcomeCallable ResetDeviceAccountPrivateKeyCallable(const Model::ResetDeviceAccountPrivateKeyRequest& request);

                /**
                 *重置用户
                 * @param req ResetUserRequest
                 * @return ResetUserOutcome
                 */
                ResetUserOutcome ResetUser(const Model::ResetUserRequest &request);
                void ResetUserAsync(const Model::ResetUserRequest& request, const ResetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetUserOutcomeCallable ResetUserCallable(const Model::ResetUserRequest& request);

                /**
                 *执行改密任务
                 * @param req RunChangePwdTaskRequest
                 * @return RunChangePwdTaskOutcome
                 */
                RunChangePwdTaskOutcome RunChangePwdTask(const Model::RunChangePwdTaskRequest &request);
                void RunChangePwdTaskAsync(const Model::RunChangePwdTaskRequest& request, const RunChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunChangePwdTaskOutcomeCallable RunChangePwdTaskCallable(const Model::RunChangePwdTaskRequest& request);

                /**
                 *执行运维任务
                 * @param req RunOperationTaskRequest
                 * @return RunOperationTaskOutcome
                 */
                RunOperationTaskOutcome RunOperationTask(const Model::RunOperationTaskRequest &request);
                void RunOperationTaskAsync(const Model::RunOperationTaskRequest& request, const RunOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunOperationTaskOutcomeCallable RunOperationTaskCallable(const Model::RunOperationTaskRequest& request);

                /**
                 *搜索审计日志
                 * @param req SearchAuditLogRequest
                 * @return SearchAuditLogOutcome
                 */
                SearchAuditLogOutcome SearchAuditLog(const Model::SearchAuditLogRequest &request);
                void SearchAuditLogAsync(const Model::SearchAuditLogRequest& request, const SearchAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchAuditLogOutcomeCallable SearchAuditLogCallable(const Model::SearchAuditLogRequest& request);

                /**
                 *命令执行检索
                 * @param req SearchCommandRequest
                 * @return SearchCommandOutcome
                 */
                SearchCommandOutcome SearchCommand(const Model::SearchCommandRequest &request);
                void SearchCommandAsync(const Model::SearchCommandRequest& request, const SearchCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchCommandOutcomeCallable SearchCommandCallable(const Model::SearchCommandRequest& request);

                /**
                 *根据会话Id搜索Command
                 * @param req SearchCommandBySidRequest
                 * @return SearchCommandBySidOutcome
                 */
                SearchCommandBySidOutcome SearchCommandBySid(const Model::SearchCommandBySidRequest &request);
                void SearchCommandBySidAsync(const Model::SearchCommandBySidRequest& request, const SearchCommandBySidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchCommandBySidOutcomeCallable SearchCommandBySidCallable(const Model::SearchCommandBySidRequest& request);

                /**
                 *文件传输检索
                 * @param req SearchFileRequest
                 * @return SearchFileOutcome
                 */
                SearchFileOutcome SearchFile(const Model::SearchFileRequest &request);
                void SearchFileAsync(const Model::SearchFileRequest& request, const SearchFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchFileOutcomeCallable SearchFileCallable(const Model::SearchFileRequest& request);

                /**
                 *搜索文件传输会话下文件操作列表
                 * @param req SearchFileBySidRequest
                 * @return SearchFileBySidOutcome
                 */
                SearchFileBySidOutcome SearchFileBySid(const Model::SearchFileBySidRequest &request);
                void SearchFileBySidAsync(const Model::SearchFileBySidRequest& request, const SearchFileBySidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchFileBySidOutcomeCallable SearchFileBySidCallable(const Model::SearchFileBySidRequest& request);

                /**
                 *搜索会话
                 * @param req SearchSessionRequest
                 * @return SearchSessionOutcome
                 */
                SearchSessionOutcome SearchSession(const Model::SearchSessionRequest &request);
                void SearchSessionAsync(const Model::SearchSessionRequest& request, const SearchSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchSessionOutcomeCallable SearchSessionCallable(const Model::SearchSessionRequest& request);

                /**
                 *命令检索
                 * @param req SearchSessionCommandRequest
                 * @return SearchSessionCommandOutcome
                 */
                SearchSessionCommandOutcome SearchSessionCommand(const Model::SearchSessionCommandRequest &request);
                void SearchSessionCommandAsync(const Model::SearchSessionCommandRequest& request, const SearchSessionCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchSessionCommandOutcomeCallable SearchSessionCommandCallable(const Model::SearchSessionCommandRequest& request);

                /**
                 *查询运维子任务执行结果
                 * @param req SearchSubtaskResultByIdRequest
                 * @return SearchSubtaskResultByIdOutcome
                 */
                SearchSubtaskResultByIdOutcome SearchSubtaskResultById(const Model::SearchSubtaskResultByIdRequest &request);
                void SearchSubtaskResultByIdAsync(const Model::SearchSubtaskResultByIdRequest& request, const SearchSubtaskResultByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchSubtaskResultByIdOutcomeCallable SearchSubtaskResultByIdCallable(const Model::SearchSubtaskResultByIdRequest& request);

                /**
                 *搜索运维任务执行结果
                 * @param req SearchTaskResultRequest
                 * @return SearchTaskResultOutcome
                 */
                SearchTaskResultOutcome SearchTaskResult(const Model::SearchTaskResultRequest &request);
                void SearchTaskResultAsync(const Model::SearchTaskResultRequest& request, const SearchTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchTaskResultOutcomeCallable SearchTaskResultCallable(const Model::SearchTaskResultRequest& request);

                /**
                 *设置LDAP 立即同步标记
                 * @param req SetLDAPSyncFlagRequest
                 * @return SetLDAPSyncFlagOutcome
                 */
                SetLDAPSyncFlagOutcome SetLDAPSyncFlag(const Model::SetLDAPSyncFlagRequest &request);
                void SetLDAPSyncFlagAsync(const Model::SetLDAPSyncFlagRequest& request, const SetLDAPSyncFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLDAPSyncFlagOutcomeCallable SetLDAPSyncFlagCallable(const Model::SetLDAPSyncFlagRequest& request);

                /**
                 *解锁用户
                 * @param req UnlockUserRequest
                 * @return UnlockUserOutcome
                 */
                UnlockUserOutcome UnlockUser(const Model::UnlockUserRequest &request);
                void UnlockUserAsync(const Model::UnlockUserRequest& request, const UnlockUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnlockUserOutcomeCallable UnlockUserCallable(const Model::UnlockUserRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_BHCLIENT_H_
