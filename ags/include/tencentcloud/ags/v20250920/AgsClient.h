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

#ifndef TENCENTCLOUD_AGS_V20250920_AGSCLIENT_H_
#define TENCENTCLOUD_AGS_V20250920_AGSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ags/v20250920/model/AcquireDeploymentTokenRequest.h>
#include <tencentcloud/ags/v20250920/model/AcquireDeploymentTokenResponse.h>
#include <tencentcloud/ags/v20250920/model/AcquireSandboxInstanceTokenRequest.h>
#include <tencentcloud/ags/v20250920/model/AcquireSandboxInstanceTokenResponse.h>
#include <tencentcloud/ags/v20250920/model/AppendEventRequest.h>
#include <tencentcloud/ags/v20250920/model/AppendEventResponse.h>
#include <tencentcloud/ags/v20250920/model/ApproveRegistryRecordRequest.h>
#include <tencentcloud/ags/v20250920/model/ApproveRegistryRecordResponse.h>
#include <tencentcloud/ags/v20250920/model/CancelRegistryRecordRequest.h>
#include <tencentcloud/ags/v20250920/model/CancelRegistryRecordResponse.h>
#include <tencentcloud/ags/v20250920/model/CreateAPIKeyRequest.h>
#include <tencentcloud/ags/v20250920/model/CreateAPIKeyResponse.h>
#include <tencentcloud/ags/v20250920/model/CreateDeploymentRequest.h>
#include <tencentcloud/ags/v20250920/model/CreateDeploymentResponse.h>
#include <tencentcloud/ags/v20250920/model/CreatePreCacheImageTaskRequest.h>
#include <tencentcloud/ags/v20250920/model/CreatePreCacheImageTaskResponse.h>
#include <tencentcloud/ags/v20250920/model/CreateRegistryRequest.h>
#include <tencentcloud/ags/v20250920/model/CreateRegistryResponse.h>
#include <tencentcloud/ags/v20250920/model/CreateRegistryRecordRequest.h>
#include <tencentcloud/ags/v20250920/model/CreateRegistryRecordResponse.h>
#include <tencentcloud/ags/v20250920/model/CreateSandboxToolRequest.h>
#include <tencentcloud/ags/v20250920/model/CreateSandboxToolResponse.h>
#include <tencentcloud/ags/v20250920/model/CreateSessionRequest.h>
#include <tencentcloud/ags/v20250920/model/CreateSessionResponse.h>
#include <tencentcloud/ags/v20250920/model/CreateSessionSpaceRequest.h>
#include <tencentcloud/ags/v20250920/model/CreateSessionSpaceResponse.h>
#include <tencentcloud/ags/v20250920/model/DeleteAPIKeyRequest.h>
#include <tencentcloud/ags/v20250920/model/DeleteAPIKeyResponse.h>
#include <tencentcloud/ags/v20250920/model/DeleteDeploymentRequest.h>
#include <tencentcloud/ags/v20250920/model/DeleteDeploymentResponse.h>
#include <tencentcloud/ags/v20250920/model/DeleteRegistryRequest.h>
#include <tencentcloud/ags/v20250920/model/DeleteRegistryResponse.h>
#include <tencentcloud/ags/v20250920/model/DeleteRegistryRecordRequest.h>
#include <tencentcloud/ags/v20250920/model/DeleteRegistryRecordResponse.h>
#include <tencentcloud/ags/v20250920/model/DeleteSandboxToolRequest.h>
#include <tencentcloud/ags/v20250920/model/DeleteSandboxToolResponse.h>
#include <tencentcloud/ags/v20250920/model/DeleteSessionRequest.h>
#include <tencentcloud/ags/v20250920/model/DeleteSessionResponse.h>
#include <tencentcloud/ags/v20250920/model/DeleteSessionSpaceRequest.h>
#include <tencentcloud/ags/v20250920/model/DeleteSessionSpaceResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeAPIKeyListRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeAPIKeyListResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeDeploymentRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeDeploymentResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeDeploymentListRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeDeploymentListResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeEventsRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeEventsResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribePreCacheImageTaskRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribePreCacheImageTaskResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeQuotaOverviewRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeQuotaOverviewResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeRegistryRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeRegistryResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeRegistryAuditLogListRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeRegistryAuditLogListResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeRegistryListRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeRegistryListResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeRegistryRecordRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeRegistryRecordResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeRegistryRecordListRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeRegistryRecordListResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeRegistryRecordVersionListRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeRegistryRecordVersionListResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeSandboxInstanceListRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeSandboxInstanceListResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeSandboxToolListRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeSandboxToolListResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeSessionRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeSessionResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeSessionSpaceRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeSessionSpaceResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeSessionSpacesRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeSessionSpacesResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeSessionsRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeSessionsResponse.h>
#include <tencentcloud/ags/v20250920/model/GetSkillPackageDownloadURLRequest.h>
#include <tencentcloud/ags/v20250920/model/GetSkillPackageDownloadURLResponse.h>
#include <tencentcloud/ags/v20250920/model/GetSkillPackageUploadURLRequest.h>
#include <tencentcloud/ags/v20250920/model/GetSkillPackageUploadURLResponse.h>
#include <tencentcloud/ags/v20250920/model/ModifyDeploymentRequest.h>
#include <tencentcloud/ags/v20250920/model/ModifyDeploymentResponse.h>
#include <tencentcloud/ags/v20250920/model/ModifySessionRequest.h>
#include <tencentcloud/ags/v20250920/model/ModifySessionResponse.h>
#include <tencentcloud/ags/v20250920/model/ModifySessionSpaceRequest.h>
#include <tencentcloud/ags/v20250920/model/ModifySessionSpaceResponse.h>
#include <tencentcloud/ags/v20250920/model/PauseSandboxInstanceRequest.h>
#include <tencentcloud/ags/v20250920/model/PauseSandboxInstanceResponse.h>
#include <tencentcloud/ags/v20250920/model/PreviewRegistryRecordRequest.h>
#include <tencentcloud/ags/v20250920/model/PreviewRegistryRecordResponse.h>
#include <tencentcloud/ags/v20250920/model/RejectRegistryRecordRequest.h>
#include <tencentcloud/ags/v20250920/model/RejectRegistryRecordResponse.h>
#include <tencentcloud/ags/v20250920/model/ResumeSandboxInstanceRequest.h>
#include <tencentcloud/ags/v20250920/model/ResumeSandboxInstanceResponse.h>
#include <tencentcloud/ags/v20250920/model/StartSandboxInstanceRequest.h>
#include <tencentcloud/ags/v20250920/model/StartSandboxInstanceResponse.h>
#include <tencentcloud/ags/v20250920/model/StopSandboxInstanceRequest.h>
#include <tencentcloud/ags/v20250920/model/StopSandboxInstanceResponse.h>
#include <tencentcloud/ags/v20250920/model/SyncRegistryRecordRequest.h>
#include <tencentcloud/ags/v20250920/model/SyncRegistryRecordResponse.h>
#include <tencentcloud/ags/v20250920/model/UpdateRegistryRequest.h>
#include <tencentcloud/ags/v20250920/model/UpdateRegistryResponse.h>
#include <tencentcloud/ags/v20250920/model/UpdateRegistryRecordRequest.h>
#include <tencentcloud/ags/v20250920/model/UpdateRegistryRecordResponse.h>
#include <tencentcloud/ags/v20250920/model/UpdateSandboxInstanceRequest.h>
#include <tencentcloud/ags/v20250920/model/UpdateSandboxInstanceResponse.h>
#include <tencentcloud/ags/v20250920/model/UpdateSandboxToolRequest.h>
#include <tencentcloud/ags/v20250920/model/UpdateSandboxToolResponse.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            class AgsClient : public AbstractClient
            {
            public:
                AgsClient(const Credential &credential, const std::string &region);
                AgsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AcquireDeploymentTokenResponse> AcquireDeploymentTokenOutcome;
                typedef std::future<AcquireDeploymentTokenOutcome> AcquireDeploymentTokenOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::AcquireDeploymentTokenRequest&, AcquireDeploymentTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcquireDeploymentTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::AcquireSandboxInstanceTokenResponse> AcquireSandboxInstanceTokenOutcome;
                typedef std::future<AcquireSandboxInstanceTokenOutcome> AcquireSandboxInstanceTokenOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::AcquireSandboxInstanceTokenRequest&, AcquireSandboxInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcquireSandboxInstanceTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::AppendEventResponse> AppendEventOutcome;
                typedef std::future<AppendEventOutcome> AppendEventOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::AppendEventRequest&, AppendEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AppendEventAsyncHandler;
                typedef Outcome<Core::Error, Model::ApproveRegistryRecordResponse> ApproveRegistryRecordOutcome;
                typedef std::future<ApproveRegistryRecordOutcome> ApproveRegistryRecordOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::ApproveRegistryRecordRequest&, ApproveRegistryRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApproveRegistryRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelRegistryRecordResponse> CancelRegistryRecordOutcome;
                typedef std::future<CancelRegistryRecordOutcome> CancelRegistryRecordOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::CancelRegistryRecordRequest&, CancelRegistryRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelRegistryRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAPIKeyResponse> CreateAPIKeyOutcome;
                typedef std::future<CreateAPIKeyOutcome> CreateAPIKeyOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::CreateAPIKeyRequest&, CreateAPIKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAPIKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeploymentResponse> CreateDeploymentOutcome;
                typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::CreateDeploymentRequest&, CreateDeploymentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeploymentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePreCacheImageTaskResponse> CreatePreCacheImageTaskOutcome;
                typedef std::future<CreatePreCacheImageTaskOutcome> CreatePreCacheImageTaskOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::CreatePreCacheImageTaskRequest&, CreatePreCacheImageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePreCacheImageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRegistryResponse> CreateRegistryOutcome;
                typedef std::future<CreateRegistryOutcome> CreateRegistryOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::CreateRegistryRequest&, CreateRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRegistryRecordResponse> CreateRegistryRecordOutcome;
                typedef std::future<CreateRegistryRecordOutcome> CreateRegistryRecordOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::CreateRegistryRecordRequest&, CreateRegistryRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRegistryRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSandboxToolResponse> CreateSandboxToolOutcome;
                typedef std::future<CreateSandboxToolOutcome> CreateSandboxToolOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::CreateSandboxToolRequest&, CreateSandboxToolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSandboxToolAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSessionResponse> CreateSessionOutcome;
                typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::CreateSessionRequest&, CreateSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSessionSpaceResponse> CreateSessionSpaceOutcome;
                typedef std::future<CreateSessionSpaceOutcome> CreateSessionSpaceOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::CreateSessionSpaceRequest&, CreateSessionSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSessionSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAPIKeyResponse> DeleteAPIKeyOutcome;
                typedef std::future<DeleteAPIKeyOutcome> DeleteAPIKeyOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DeleteAPIKeyRequest&, DeleteAPIKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAPIKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeploymentResponse> DeleteDeploymentOutcome;
                typedef std::future<DeleteDeploymentOutcome> DeleteDeploymentOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DeleteDeploymentRequest&, DeleteDeploymentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeploymentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRegistryResponse> DeleteRegistryOutcome;
                typedef std::future<DeleteRegistryOutcome> DeleteRegistryOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DeleteRegistryRequest&, DeleteRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRegistryRecordResponse> DeleteRegistryRecordOutcome;
                typedef std::future<DeleteRegistryRecordOutcome> DeleteRegistryRecordOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DeleteRegistryRecordRequest&, DeleteRegistryRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRegistryRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSandboxToolResponse> DeleteSandboxToolOutcome;
                typedef std::future<DeleteSandboxToolOutcome> DeleteSandboxToolOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DeleteSandboxToolRequest&, DeleteSandboxToolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSandboxToolAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSessionResponse> DeleteSessionOutcome;
                typedef std::future<DeleteSessionOutcome> DeleteSessionOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DeleteSessionRequest&, DeleteSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSessionSpaceResponse> DeleteSessionSpaceOutcome;
                typedef std::future<DeleteSessionSpaceOutcome> DeleteSessionSpaceOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DeleteSessionSpaceRequest&, DeleteSessionSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSessionSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAPIKeyListResponse> DescribeAPIKeyListOutcome;
                typedef std::future<DescribeAPIKeyListOutcome> DescribeAPIKeyListOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeAPIKeyListRequest&, DescribeAPIKeyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAPIKeyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeploymentResponse> DescribeDeploymentOutcome;
                typedef std::future<DescribeDeploymentOutcome> DescribeDeploymentOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeDeploymentRequest&, DescribeDeploymentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeploymentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeploymentListResponse> DescribeDeploymentListOutcome;
                typedef std::future<DescribeDeploymentListOutcome> DescribeDeploymentListOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeDeploymentListRequest&, DescribeDeploymentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeploymentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventsResponse> DescribeEventsOutcome;
                typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeEventsRequest&, DescribeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePreCacheImageTaskResponse> DescribePreCacheImageTaskOutcome;
                typedef std::future<DescribePreCacheImageTaskOutcome> DescribePreCacheImageTaskOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribePreCacheImageTaskRequest&, DescribePreCacheImageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePreCacheImageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQuotaOverviewResponse> DescribeQuotaOverviewOutcome;
                typedef std::future<DescribeQuotaOverviewOutcome> DescribeQuotaOverviewOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeQuotaOverviewRequest&, DescribeQuotaOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuotaOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegistryResponse> DescribeRegistryOutcome;
                typedef std::future<DescribeRegistryOutcome> DescribeRegistryOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeRegistryRequest&, DescribeRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegistryAuditLogListResponse> DescribeRegistryAuditLogListOutcome;
                typedef std::future<DescribeRegistryAuditLogListOutcome> DescribeRegistryAuditLogListOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeRegistryAuditLogListRequest&, DescribeRegistryAuditLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegistryAuditLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegistryListResponse> DescribeRegistryListOutcome;
                typedef std::future<DescribeRegistryListOutcome> DescribeRegistryListOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeRegistryListRequest&, DescribeRegistryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegistryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegistryRecordResponse> DescribeRegistryRecordOutcome;
                typedef std::future<DescribeRegistryRecordOutcome> DescribeRegistryRecordOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeRegistryRecordRequest&, DescribeRegistryRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegistryRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegistryRecordListResponse> DescribeRegistryRecordListOutcome;
                typedef std::future<DescribeRegistryRecordListOutcome> DescribeRegistryRecordListOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeRegistryRecordListRequest&, DescribeRegistryRecordListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegistryRecordListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegistryRecordVersionListResponse> DescribeRegistryRecordVersionListOutcome;
                typedef std::future<DescribeRegistryRecordVersionListOutcome> DescribeRegistryRecordVersionListOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeRegistryRecordVersionListRequest&, DescribeRegistryRecordVersionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegistryRecordVersionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxInstanceListResponse> DescribeSandboxInstanceListOutcome;
                typedef std::future<DescribeSandboxInstanceListOutcome> DescribeSandboxInstanceListOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeSandboxInstanceListRequest&, DescribeSandboxInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxToolListResponse> DescribeSandboxToolListOutcome;
                typedef std::future<DescribeSandboxToolListOutcome> DescribeSandboxToolListOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeSandboxToolListRequest&, DescribeSandboxToolListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxToolListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSessionResponse> DescribeSessionOutcome;
                typedef std::future<DescribeSessionOutcome> DescribeSessionOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeSessionRequest&, DescribeSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSessionSpaceResponse> DescribeSessionSpaceOutcome;
                typedef std::future<DescribeSessionSpaceOutcome> DescribeSessionSpaceOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeSessionSpaceRequest&, DescribeSessionSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSessionSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSessionSpacesResponse> DescribeSessionSpacesOutcome;
                typedef std::future<DescribeSessionSpacesOutcome> DescribeSessionSpacesOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeSessionSpacesRequest&, DescribeSessionSpacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSessionSpacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSessionsResponse> DescribeSessionsOutcome;
                typedef std::future<DescribeSessionsOutcome> DescribeSessionsOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeSessionsRequest&, DescribeSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSessionsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSkillPackageDownloadURLResponse> GetSkillPackageDownloadURLOutcome;
                typedef std::future<GetSkillPackageDownloadURLOutcome> GetSkillPackageDownloadURLOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::GetSkillPackageDownloadURLRequest&, GetSkillPackageDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSkillPackageDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSkillPackageUploadURLResponse> GetSkillPackageUploadURLOutcome;
                typedef std::future<GetSkillPackageUploadURLOutcome> GetSkillPackageUploadURLOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::GetSkillPackageUploadURLRequest&, GetSkillPackageUploadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSkillPackageUploadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDeploymentResponse> ModifyDeploymentOutcome;
                typedef std::future<ModifyDeploymentOutcome> ModifyDeploymentOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::ModifyDeploymentRequest&, ModifyDeploymentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeploymentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySessionResponse> ModifySessionOutcome;
                typedef std::future<ModifySessionOutcome> ModifySessionOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::ModifySessionRequest&, ModifySessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySessionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySessionSpaceResponse> ModifySessionSpaceOutcome;
                typedef std::future<ModifySessionSpaceOutcome> ModifySessionSpaceOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::ModifySessionSpaceRequest&, ModifySessionSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySessionSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::PauseSandboxInstanceResponse> PauseSandboxInstanceOutcome;
                typedef std::future<PauseSandboxInstanceOutcome> PauseSandboxInstanceOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::PauseSandboxInstanceRequest&, PauseSandboxInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PauseSandboxInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::PreviewRegistryRecordResponse> PreviewRegistryRecordOutcome;
                typedef std::future<PreviewRegistryRecordOutcome> PreviewRegistryRecordOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::PreviewRegistryRecordRequest&, PreviewRegistryRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PreviewRegistryRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::RejectRegistryRecordResponse> RejectRegistryRecordOutcome;
                typedef std::future<RejectRegistryRecordOutcome> RejectRegistryRecordOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::RejectRegistryRecordRequest&, RejectRegistryRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RejectRegistryRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeSandboxInstanceResponse> ResumeSandboxInstanceOutcome;
                typedef std::future<ResumeSandboxInstanceOutcome> ResumeSandboxInstanceOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::ResumeSandboxInstanceRequest&, ResumeSandboxInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeSandboxInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::StartSandboxInstanceResponse> StartSandboxInstanceOutcome;
                typedef std::future<StartSandboxInstanceOutcome> StartSandboxInstanceOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::StartSandboxInstanceRequest&, StartSandboxInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartSandboxInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::StopSandboxInstanceResponse> StopSandboxInstanceOutcome;
                typedef std::future<StopSandboxInstanceOutcome> StopSandboxInstanceOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::StopSandboxInstanceRequest&, StopSandboxInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopSandboxInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncRegistryRecordResponse> SyncRegistryRecordOutcome;
                typedef std::future<SyncRegistryRecordOutcome> SyncRegistryRecordOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::SyncRegistryRecordRequest&, SyncRegistryRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncRegistryRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRegistryResponse> UpdateRegistryOutcome;
                typedef std::future<UpdateRegistryOutcome> UpdateRegistryOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::UpdateRegistryRequest&, UpdateRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRegistryRecordResponse> UpdateRegistryRecordOutcome;
                typedef std::future<UpdateRegistryRecordOutcome> UpdateRegistryRecordOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::UpdateRegistryRecordRequest&, UpdateRegistryRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRegistryRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSandboxInstanceResponse> UpdateSandboxInstanceOutcome;
                typedef std::future<UpdateSandboxInstanceOutcome> UpdateSandboxInstanceOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::UpdateSandboxInstanceRequest&, UpdateSandboxInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSandboxInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSandboxToolResponse> UpdateSandboxToolOutcome;
                typedef std::future<UpdateSandboxToolOutcome> UpdateSandboxToolOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::UpdateSandboxToolRequest&, UpdateSandboxToolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSandboxToolAsyncHandler;



                /**
                 *获取 Deployment 访问 Token
                 * @param req AcquireDeploymentTokenRequest
                 * @return AcquireDeploymentTokenOutcome
                 */
                AcquireDeploymentTokenOutcome AcquireDeploymentToken(const Model::AcquireDeploymentTokenRequest &request);
                void AcquireDeploymentTokenAsync(const Model::AcquireDeploymentTokenRequest& request, const AcquireDeploymentTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcquireDeploymentTokenOutcomeCallable AcquireDeploymentTokenCallable(const Model::AcquireDeploymentTokenRequest& request);

                /**
                 *获取访问沙箱工具时所需要使用的访问Token，创建沙箱实例后需调用此接口获取沙箱实例访问Token。
此Token可用于调用代码沙箱实例执行代码，或浏览器沙箱实例进行浏览器操作等。
                 * @param req AcquireSandboxInstanceTokenRequest
                 * @return AcquireSandboxInstanceTokenOutcome
                 */
                AcquireSandboxInstanceTokenOutcome AcquireSandboxInstanceToken(const Model::AcquireSandboxInstanceTokenRequest &request);
                void AcquireSandboxInstanceTokenAsync(const Model::AcquireSandboxInstanceTokenRequest& request, const AcquireSandboxInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcquireSandboxInstanceTokenOutcomeCallable AcquireSandboxInstanceTokenCallable(const Model::AcquireSandboxInstanceTokenRequest& request);

                /**
                 *追加事件。

向指定会话追加一条事件。
                 * @param req AppendEventRequest
                 * @return AppendEventOutcome
                 */
                AppendEventOutcome AppendEvent(const Model::AppendEventRequest &request);
                void AppendEventAsync(const Model::AppendEventRequest& request, const AppendEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AppendEventOutcomeCallable AppendEventCallable(const Model::AppendEventRequest& request);

                /**
                 *通过 Version 审批：PENDING_APPROVAL → APPROVED。Comment 必填。
                 * @param req ApproveRegistryRecordRequest
                 * @return ApproveRegistryRecordOutcome
                 */
                ApproveRegistryRecordOutcome ApproveRegistryRecord(const Model::ApproveRegistryRecordRequest &request);
                void ApproveRegistryRecordAsync(const Model::ApproveRegistryRecordRequest& request, const ApproveRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApproveRegistryRecordOutcomeCallable ApproveRegistryRecordCallable(const Model::ApproveRegistryRecordRequest& request);

                /**
                 *PREPARING/PENDING_APPROVAL → CANCELED。Comment 必填。
                 * @param req CancelRegistryRecordRequest
                 * @return CancelRegistryRecordOutcome
                 */
                CancelRegistryRecordOutcome CancelRegistryRecord(const Model::CancelRegistryRecordRequest &request);
                void CancelRegistryRecordAsync(const Model::CancelRegistryRecordRequest& request, const CancelRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelRegistryRecordOutcomeCallable CancelRegistryRecordCallable(const Model::CancelRegistryRecordRequest& request);

                /**
                 *创建新的API密钥，用于调用Agent Sandbox接口。相较于腾讯云Secret ID Secret Key支持调用所有接口使用，仅有部分接口支持使用API密钥调用。
                 * @param req CreateAPIKeyRequest
                 * @return CreateAPIKeyOutcome
                 */
                CreateAPIKeyOutcome CreateAPIKey(const Model::CreateAPIKeyRequest &request);
                void CreateAPIKeyAsync(const Model::CreateAPIKeyRequest& request, const CreateAPIKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAPIKeyOutcomeCallable CreateAPIKeyCallable(const Model::CreateAPIKeyRequest& request);

                /**
                 *创建 Deployment
                 * @param req CreateDeploymentRequest
                 * @return CreateDeploymentOutcome
                 */
                CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest &request);
                void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request);

                /**
                 *创建镜像预热任务
                 * @param req CreatePreCacheImageTaskRequest
                 * @return CreatePreCacheImageTaskOutcome
                 */
                CreatePreCacheImageTaskOutcome CreatePreCacheImageTask(const Model::CreatePreCacheImageTaskRequest &request);
                void CreatePreCacheImageTaskAsync(const Model::CreatePreCacheImageTaskRequest& request, const CreatePreCacheImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePreCacheImageTaskOutcomeCallable CreatePreCacheImageTaskCallable(const Model::CreatePreCacheImageTaskRequest& request);

                /**
                 *创建 Agent Registry（注册中心）。
                 * @param req CreateRegistryRequest
                 * @return CreateRegistryOutcome
                 */
                CreateRegistryOutcome CreateRegistry(const Model::CreateRegistryRequest &request);
                void CreateRegistryAsync(const Model::CreateRegistryRequest& request, const CreateRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRegistryOutcomeCallable CreateRegistryCallable(const Model::CreateRegistryRequest& request);

                /**
                 *统一创建 Registry Record（含 revision 1）。请求通过 DescriptorType 与严格内容输入 Union 选择底层类型：MCPSource / AgentSource / SkillSource / CustomDescriptors 四选一，必须与 DescriptorType 对应。不接受 RecordId 或 ChangeLog；同名 Record 返回冲突，不隐式追加 Version。追加 Version 请使用 UpdateRegistryRecord。
                 * @param req CreateRegistryRecordRequest
                 * @return CreateRegistryRecordOutcome
                 */
                CreateRegistryRecordOutcome CreateRegistryRecord(const Model::CreateRegistryRecordRequest &request);
                void CreateRegistryRecordAsync(const Model::CreateRegistryRecordRequest& request, const CreateRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRegistryRecordOutcomeCallable CreateRegistryRecordCallable(const Model::CreateRegistryRecordRequest& request);

                /**
                 *创建沙箱工具
                 * @param req CreateSandboxToolRequest
                 * @return CreateSandboxToolOutcome
                 */
                CreateSandboxToolOutcome CreateSandboxTool(const Model::CreateSandboxToolRequest &request);
                void CreateSandboxToolAsync(const Model::CreateSandboxToolRequest& request, const CreateSandboxToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSandboxToolOutcomeCallable CreateSandboxToolCallable(const Model::CreateSandboxToolRequest& request);

                /**
                 *创建会话。

为指定 Agent 和用户创建会话，创建成功后返回会话信息。
                 * @param req CreateSessionRequest
                 * @return CreateSessionOutcome
                 */
                CreateSessionOutcome CreateSession(const Model::CreateSessionRequest &request);
                void CreateSessionAsync(const Model::CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSessionOutcomeCallable CreateSessionCallable(const Model::CreateSessionRequest& request);

                /**
                 *创建会话空间。
为当前应用在指定地域创建会话空间，创建成功后返回会话空间信息。会话空间用于隔离不同业务场景下的用户、会话、事件及状态数据。
                 * @param req CreateSessionSpaceRequest
                 * @return CreateSessionSpaceOutcome
                 */
                CreateSessionSpaceOutcome CreateSessionSpace(const Model::CreateSessionSpaceRequest &request);
                void CreateSessionSpaceAsync(const Model::CreateSessionSpaceRequest& request, const CreateSessionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSessionSpaceOutcomeCallable CreateSessionSpaceCallable(const Model::CreateSessionSpaceRequest& request);

                /**
                 *删除API密钥。注意区别于腾讯云Secret ID Secret Key，本接口删除的是Agent Sandbox专用API key。
                 * @param req DeleteAPIKeyRequest
                 * @return DeleteAPIKeyOutcome
                 */
                DeleteAPIKeyOutcome DeleteAPIKey(const Model::DeleteAPIKeyRequest &request);
                void DeleteAPIKeyAsync(const Model::DeleteAPIKeyRequest& request, const DeleteAPIKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAPIKeyOutcomeCallable DeleteAPIKeyCallable(const Model::DeleteAPIKeyRequest& request);

                /**
                 *删除 Deployment
                 * @param req DeleteDeploymentRequest
                 * @return DeleteDeploymentOutcome
                 */
                DeleteDeploymentOutcome DeleteDeployment(const Model::DeleteDeploymentRequest &request);
                void DeleteDeploymentAsync(const Model::DeleteDeploymentRequest& request, const DeleteDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeploymentOutcomeCallable DeleteDeploymentCallable(const Model::DeleteDeploymentRequest& request);

                /**
                 *删除 Registry。
                 * @param req DeleteRegistryRequest
                 * @return DeleteRegistryOutcome
                 */
                DeleteRegistryOutcome DeleteRegistry(const Model::DeleteRegistryRequest &request);
                void DeleteRegistryAsync(const Model::DeleteRegistryRequest& request, const DeleteRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRegistryOutcomeCallable DeleteRegistryCallable(const Model::DeleteRegistryRequest& request);

                /**
                 *删除 Registry Record 或指定 Version。省略 VersionId 时对整个 Record 进行软删除；传入 VersionId 时只删除指定 Version（Stable 指向的 Version 不允许删除；仅剩一个 Approved Version 时不允许删除）。取代原 DeleteRegistryRecordVersion。
                 * @param req DeleteRegistryRecordRequest
                 * @return DeleteRegistryRecordOutcome
                 */
                DeleteRegistryRecordOutcome DeleteRegistryRecord(const Model::DeleteRegistryRecordRequest &request);
                void DeleteRegistryRecordAsync(const Model::DeleteRegistryRecordRequest& request, const DeleteRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRegistryRecordOutcomeCallable DeleteRegistryRecordCallable(const Model::DeleteRegistryRecordRequest& request);

                /**
                 *删除沙箱工具
                 * @param req DeleteSandboxToolRequest
                 * @return DeleteSandboxToolOutcome
                 */
                DeleteSandboxToolOutcome DeleteSandboxTool(const Model::DeleteSandboxToolRequest &request);
                void DeleteSandboxToolAsync(const Model::DeleteSandboxToolRequest& request, const DeleteSandboxToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSandboxToolOutcomeCallable DeleteSandboxToolCallable(const Model::DeleteSandboxToolRequest& request);

                /**
                 *删除会话
                 * @param req DeleteSessionRequest
                 * @return DeleteSessionOutcome
                 */
                DeleteSessionOutcome DeleteSession(const Model::DeleteSessionRequest &request);
                void DeleteSessionAsync(const Model::DeleteSessionRequest& request, const DeleteSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSessionOutcomeCallable DeleteSessionCallable(const Model::DeleteSessionRequest& request);

                /**
                 *删除会话空间。
删除指定的会话空间。仅允许删除不包含会话、事件或用户状态数据的非默认会话空间；系统默认会话空间不能删除。删除成功后不再返回会话空间信息。
                 * @param req DeleteSessionSpaceRequest
                 * @return DeleteSessionSpaceOutcome
                 */
                DeleteSessionSpaceOutcome DeleteSessionSpace(const Model::DeleteSessionSpaceRequest &request);
                void DeleteSessionSpaceAsync(const Model::DeleteSessionSpaceRequest& request, const DeleteSessionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSessionSpaceOutcomeCallable DeleteSessionSpaceCallable(const Model::DeleteSessionSpaceRequest& request);

                /**
                 *获取API密钥列表，包含API密钥简略信息，包含名称、创建时间等。
                 * @param req DescribeAPIKeyListRequest
                 * @return DescribeAPIKeyListOutcome
                 */
                DescribeAPIKeyListOutcome DescribeAPIKeyList(const Model::DescribeAPIKeyListRequest &request);
                void DescribeAPIKeyListAsync(const Model::DescribeAPIKeyListRequest& request, const DescribeAPIKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAPIKeyListOutcomeCallable DescribeAPIKeyListCallable(const Model::DescribeAPIKeyListRequest& request);

                /**
                 *查询 Deployment 信息
                 * @param req DescribeDeploymentRequest
                 * @return DescribeDeploymentOutcome
                 */
                DescribeDeploymentOutcome DescribeDeployment(const Model::DescribeDeploymentRequest &request);
                void DescribeDeploymentAsync(const Model::DescribeDeploymentRequest& request, const DescribeDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeploymentOutcomeCallable DescribeDeploymentCallable(const Model::DescribeDeploymentRequest& request);

                /**
                 *查询 Deployment 列表
                 * @param req DescribeDeploymentListRequest
                 * @return DescribeDeploymentListOutcome
                 */
                DescribeDeploymentListOutcome DescribeDeploymentList(const Model::DescribeDeploymentListRequest &request);
                void DescribeDeploymentListAsync(const Model::DescribeDeploymentListRequest& request, const DescribeDeploymentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeploymentListOutcomeCallable DescribeDeploymentListCallable(const Model::DescribeDeploymentListRequest& request);

                /**
                 *查询事件列表。

查询指定会话的事件流，支持按作者和起始时间筛选。
                 * @param req DescribeEventsRequest
                 * @return DescribeEventsOutcome
                 */
                DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest &request);
                void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request);

                /**
                 *查询镜像预热任务信息
                 * @param req DescribePreCacheImageTaskRequest
                 * @return DescribePreCacheImageTaskOutcome
                 */
                DescribePreCacheImageTaskOutcome DescribePreCacheImageTask(const Model::DescribePreCacheImageTaskRequest &request);
                void DescribePreCacheImageTaskAsync(const Model::DescribePreCacheImageTaskRequest& request, const DescribePreCacheImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePreCacheImageTaskOutcomeCallable DescribePreCacheImageTaskCallable(const Model::DescribePreCacheImageTaskRequest& request);

                /**
                 *查询当前调用账号的资源配额和当前总用量，以及账号下各配额组的资源配额和当前用量
                 * @param req DescribeQuotaOverviewRequest
                 * @return DescribeQuotaOverviewOutcome
                 */
                DescribeQuotaOverviewOutcome DescribeQuotaOverview(const Model::DescribeQuotaOverviewRequest &request);
                void DescribeQuotaOverviewAsync(const Model::DescribeQuotaOverviewRequest& request, const DescribeQuotaOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQuotaOverviewOutcomeCallable DescribeQuotaOverviewCallable(const Model::DescribeQuotaOverviewRequest& request);

                /**
                 *按 RegistryId 查询 Registry 详情。
                 * @param req DescribeRegistryRequest
                 * @return DescribeRegistryOutcome
                 */
                DescribeRegistryOutcome DescribeRegistry(const Model::DescribeRegistryRequest &request);
                void DescribeRegistryAsync(const Model::DescribeRegistryRequest& request, const DescribeRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegistryOutcomeCallable DescribeRegistryCallable(const Model::DescribeRegistryRequest& request);

                /**
                 *分页查询指定Registry / Record / Version的审计日志。
                 * @param req DescribeRegistryAuditLogListRequest
                 * @return DescribeRegistryAuditLogListOutcome
                 */
                DescribeRegistryAuditLogListOutcome DescribeRegistryAuditLogList(const Model::DescribeRegistryAuditLogListRequest &request);
                void DescribeRegistryAuditLogListAsync(const Model::DescribeRegistryAuditLogListRequest& request, const DescribeRegistryAuditLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegistryAuditLogListOutcomeCallable DescribeRegistryAuditLogListCallable(const Model::DescribeRegistryAuditLogListRequest& request);

                /**
                 *分页查询当前租户可见的 Registry 列表。
                 * @param req DescribeRegistryListRequest
                 * @return DescribeRegistryListOutcome
                 */
                DescribeRegistryListOutcome DescribeRegistryList(const Model::DescribeRegistryListRequest &request);
                void DescribeRegistryListAsync(const Model::DescribeRegistryListRequest& request, const DescribeRegistryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegistryListOutcomeCallable DescribeRegistryListCallable(const Model::DescribeRegistryListRequest& request);

                /**
                 *查询 Record 详情和其中一个 Version。请求可通过互斥的 VersionId 或 Label 选择 Version；均省略时默认 Label=stable。取代原 DescribeRegistryRecordVersion。
                 * @param req DescribeRegistryRecordRequest
                 * @return DescribeRegistryRecordOutcome
                 */
                DescribeRegistryRecordOutcome DescribeRegistryRecord(const Model::DescribeRegistryRecordRequest &request);
                void DescribeRegistryRecordAsync(const Model::DescribeRegistryRecordRequest& request, const DescribeRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegistryRecordOutcomeCallable DescribeRegistryRecordCallable(const Model::DescribeRegistryRecordRequest& request);

                /**
                 *分页查询 Registry 下的 Record 列表。list 类接口不接入 CAM 转发鉴权；业务侧按 CAM 二次过滤。
                 * @param req DescribeRegistryRecordListRequest
                 * @return DescribeRegistryRecordListOutcome
                 */
                DescribeRegistryRecordListOutcome DescribeRegistryRecordList(const Model::DescribeRegistryRecordListRequest &request);
                void DescribeRegistryRecordListAsync(const Model::DescribeRegistryRecordListRequest& request, const DescribeRegistryRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegistryRecordListOutcomeCallable DescribeRegistryRecordListCallable(const Model::DescribeRegistryRecordListRequest& request);

                /**
                 *分页查询 Record 的 Version 列表。list 类接口不接入 CAM 转发鉴权。
                 * @param req DescribeRegistryRecordVersionListRequest
                 * @return DescribeRegistryRecordVersionListOutcome
                 */
                DescribeRegistryRecordVersionListOutcome DescribeRegistryRecordVersionList(const Model::DescribeRegistryRecordVersionListRequest &request);
                void DescribeRegistryRecordVersionListAsync(const Model::DescribeRegistryRecordVersionListRequest& request, const DescribeRegistryRecordVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegistryRecordVersionListOutcomeCallable DescribeRegistryRecordVersionListCallable(const Model::DescribeRegistryRecordVersionListRequest& request);

                /**
                 *查询沙箱实例列表
                 * @param req DescribeSandboxInstanceListRequest
                 * @return DescribeSandboxInstanceListOutcome
                 */
                DescribeSandboxInstanceListOutcome DescribeSandboxInstanceList(const Model::DescribeSandboxInstanceListRequest &request);
                void DescribeSandboxInstanceListAsync(const Model::DescribeSandboxInstanceListRequest& request, const DescribeSandboxInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxInstanceListOutcomeCallable DescribeSandboxInstanceListCallable(const Model::DescribeSandboxInstanceListRequest& request);

                /**
                 *查询沙箱工具列表
                 * @param req DescribeSandboxToolListRequest
                 * @return DescribeSandboxToolListOutcome
                 */
                DescribeSandboxToolListOutcome DescribeSandboxToolList(const Model::DescribeSandboxToolListRequest &request);
                void DescribeSandboxToolListAsync(const Model::DescribeSandboxToolListRequest& request, const DescribeSandboxToolListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxToolListOutcomeCallable DescribeSandboxToolListCallable(const Model::DescribeSandboxToolListRequest& request);

                /**
                 *查询会话。

查询指定会话的信息。
                 * @param req DescribeSessionRequest
                 * @return DescribeSessionOutcome
                 */
                DescribeSessionOutcome DescribeSession(const Model::DescribeSessionRequest &request);
                void DescribeSessionAsync(const Model::DescribeSessionRequest& request, const DescribeSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSessionOutcomeCallable DescribeSessionCallable(const Model::DescribeSessionRequest& request);

                /**
                 *查询会话空间详情。
查询指定会话空间的详细信息，查询成功后返回会话空间的名称、描述、状态、所属地域及创建时间等信息。
                 * @param req DescribeSessionSpaceRequest
                 * @return DescribeSessionSpaceOutcome
                 */
                DescribeSessionSpaceOutcome DescribeSessionSpace(const Model::DescribeSessionSpaceRequest &request);
                void DescribeSessionSpaceAsync(const Model::DescribeSessionSpaceRequest& request, const DescribeSessionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSessionSpaceOutcomeCallable DescribeSessionSpaceCallable(const Model::DescribeSessionSpaceRequest& request);

                /**
                 *分页查询当前应用和地域下的会话空间。
                 * @param req DescribeSessionSpacesRequest
                 * @return DescribeSessionSpacesOutcome
                 */
                DescribeSessionSpacesOutcome DescribeSessionSpaces(const Model::DescribeSessionSpacesRequest &request);
                void DescribeSessionSpacesAsync(const Model::DescribeSessionSpacesRequest& request, const DescribeSessionSpacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSessionSpacesOutcomeCallable DescribeSessionSpacesCallable(const Model::DescribeSessionSpacesRequest& request);

                /**
                 *查询会话列表
                 * @param req DescribeSessionsRequest
                 * @return DescribeSessionsOutcome
                 */
                DescribeSessionsOutcome DescribeSessions(const Model::DescribeSessionsRequest &request);
                void DescribeSessionsAsync(const Model::DescribeSessionsRequest& request, const DescribeSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSessionsOutcomeCallable DescribeSessionsCallable(const Model::DescribeSessionsRequest& request);

                /**
                 *获取 Skill 包下载 URL。VersionId 与 Label 互斥；均省略时使用 Stable。响应包含 ResolvedVersionId，便于调用方回填。
                 * @param req GetSkillPackageDownloadURLRequest
                 * @return GetSkillPackageDownloadURLOutcome
                 */
                GetSkillPackageDownloadURLOutcome GetSkillPackageDownloadURL(const Model::GetSkillPackageDownloadURLRequest &request);
                void GetSkillPackageDownloadURLAsync(const Model::GetSkillPackageDownloadURLRequest& request, const GetSkillPackageDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSkillPackageDownloadURLOutcomeCallable GetSkillPackageDownloadURLCallable(const Model::GetSkillPackageDownloadURLRequest& request);

                /**
                 *为 FAILED / EXPIRED 的 TAR Skill Version 生成新的上传尝试；VersionId 与 Revision 保持不变。
                 * @param req GetSkillPackageUploadURLRequest
                 * @return GetSkillPackageUploadURLOutcome
                 */
                GetSkillPackageUploadURLOutcome GetSkillPackageUploadURL(const Model::GetSkillPackageUploadURLRequest &request);
                void GetSkillPackageUploadURLAsync(const Model::GetSkillPackageUploadURLRequest& request, const GetSkillPackageUploadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSkillPackageUploadURLOutcomeCallable GetSkillPackageUploadURLCallable(const Model::GetSkillPackageUploadURLRequest& request);

                /**
                 *修改 Deployment
                 * @param req ModifyDeploymentRequest
                 * @return ModifyDeploymentOutcome
                 */
                ModifyDeploymentOutcome ModifyDeployment(const Model::ModifyDeploymentRequest &request);
                void ModifyDeploymentAsync(const Model::ModifyDeploymentRequest& request, const ModifyDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeploymentOutcomeCallable ModifyDeploymentCallable(const Model::ModifyDeploymentRequest& request);

                /**
                 *修改会话信息
                 * @param req ModifySessionRequest
                 * @return ModifySessionOutcome
                 */
                ModifySessionOutcome ModifySession(const Model::ModifySessionRequest &request);
                void ModifySessionAsync(const Model::ModifySessionRequest& request, const ModifySessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySessionOutcomeCallable ModifySessionCallable(const Model::ModifySessionRequest& request);

                /**
                 *修改会话空间。
修改指定会话空间的名称和描述，修改成功后返回更新后的会话空间信息。默认会话空间允许修改名称和描述。
                 * @param req ModifySessionSpaceRequest
                 * @return ModifySessionSpaceOutcome
                 */
                ModifySessionSpaceOutcome ModifySessionSpace(const Model::ModifySessionSpaceRequest &request);
                void ModifySessionSpaceAsync(const Model::ModifySessionSpaceRequest& request, const ModifySessionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySessionSpaceOutcomeCallable ModifySessionSpaceCallable(const Model::ModifySessionSpaceRequest& request);

                /**
                 *暂停沙箱实例
                 * @param req PauseSandboxInstanceRequest
                 * @return PauseSandboxInstanceOutcome
                 */
                PauseSandboxInstanceOutcome PauseSandboxInstance(const Model::PauseSandboxInstanceRequest &request);
                void PauseSandboxInstanceAsync(const Model::PauseSandboxInstanceRequest& request, const PauseSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PauseSandboxInstanceOutcomeCallable PauseSandboxInstanceCallable(const Model::PauseSandboxInstanceRequest& request);

                /**
                 *对 Record 的指定 Version 或 Label 目标发起一次预览调用。VersionId 与 Label 互斥；均省略时使用 Stable。不创建 Version、不修改 Label。
                 * @param req PreviewRegistryRecordRequest
                 * @return PreviewRegistryRecordOutcome
                 */
                PreviewRegistryRecordOutcome PreviewRegistryRecord(const Model::PreviewRegistryRecordRequest &request);
                void PreviewRegistryRecordAsync(const Model::PreviewRegistryRecordRequest& request, const PreviewRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PreviewRegistryRecordOutcomeCallable PreviewRegistryRecordCallable(const Model::PreviewRegistryRecordRequest& request);

                /**
                 *驳回 Version 审批：PENDING_APPROVAL → REJECTED。Comment 必填。
                 * @param req RejectRegistryRecordRequest
                 * @return RejectRegistryRecordOutcome
                 */
                RejectRegistryRecordOutcome RejectRegistryRecord(const Model::RejectRegistryRecordRequest &request);
                void RejectRegistryRecordAsync(const Model::RejectRegistryRecordRequest& request, const RejectRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RejectRegistryRecordOutcomeCallable RejectRegistryRecordCallable(const Model::RejectRegistryRecordRequest& request);

                /**
                 *恢复沙箱实例
                 * @param req ResumeSandboxInstanceRequest
                 * @return ResumeSandboxInstanceOutcome
                 */
                ResumeSandboxInstanceOutcome ResumeSandboxInstance(const Model::ResumeSandboxInstanceRequest &request);
                void ResumeSandboxInstanceAsync(const Model::ResumeSandboxInstanceRequest& request, const ResumeSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeSandboxInstanceOutcomeCallable ResumeSandboxInstanceCallable(const Model::ResumeSandboxInstanceRequest& request);

                /**
                 *启动沙箱实例
                 * @param req StartSandboxInstanceRequest
                 * @return StartSandboxInstanceOutcome
                 */
                StartSandboxInstanceOutcome StartSandboxInstance(const Model::StartSandboxInstanceRequest &request);
                void StartSandboxInstanceAsync(const Model::StartSandboxInstanceRequest& request, const StartSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartSandboxInstanceOutcomeCallable StartSandboxInstanceCallable(const Model::StartSandboxInstanceRequest& request);

                /**
                 *停止沙箱实例
                 * @param req StopSandboxInstanceRequest
                 * @return StopSandboxInstanceOutcome
                 */
                StopSandboxInstanceOutcome StopSandboxInstance(const Model::StopSandboxInstanceRequest &request);
                void StopSandboxInstanceAsync(const Model::StopSandboxInstanceRequest& request, const StopSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopSandboxInstanceOutcomeCallable StopSandboxInstanceCallable(const Model::StopSandboxInstanceRequest& request);

                /**
                 *触发一次从远端拉取描述符 / 元数据的同步。可通过互斥的 VersionId 或 Label 指定来源 Version，均省略时默认使用 Stable。有变化时创建新 Version 并移动 Latest；来源必须 SourceType=URL_IMPORT，否则返回 UnsupportedOperation.SourceType。
                 * @param req SyncRegistryRecordRequest
                 * @return SyncRegistryRecordOutcome
                 */
                SyncRegistryRecordOutcome SyncRegistryRecord(const Model::SyncRegistryRecordRequest &request);
                void SyncRegistryRecordAsync(const Model::SyncRegistryRecordRequest& request, const SyncRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncRegistryRecordOutcomeCallable SyncRegistryRecordCallable(const Model::SyncRegistryRecordRequest& request);

                /**
                 *更新 Registry 的可变元数据。
                 * @param req UpdateRegistryRequest
                 * @return UpdateRegistryOutcome
                 */
                UpdateRegistryOutcome UpdateRegistry(const Model::UpdateRegistryRequest &request);
                void UpdateRegistryAsync(const Model::UpdateRegistryRequest& request, const UpdateRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRegistryOutcomeCallable UpdateRegistryCallable(const Model::UpdateRegistryRequest& request);

                /**
                 *更新 Registry Record。两种互斥模式：①Record 更新模式：不提交任何 Source / CustomDescriptors，可通过 Description、LabelMutations 修改元数据与 Label（至少提交一项）；②Version 创建模式：提交且仅提交一种与现有 DescriptorType 匹配的内容输入，可选 VersionName / ChangeLog，禁止 Description / LabelMutations，服务端在 Record 下创建下一个 Revision。取代原 ChangeRegistryRecordStableVersion / RollbackRegistryRecordVersion / Create*RegistryRecordVersion。
                 * @param req UpdateRegistryRecordRequest
                 * @return UpdateRegistryRecordOutcome
                 */
                UpdateRegistryRecordOutcome UpdateRegistryRecord(const Model::UpdateRegistryRecordRequest &request);
                void UpdateRegistryRecordAsync(const Model::UpdateRegistryRecordRequest& request, const UpdateRegistryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRegistryRecordOutcomeCallable UpdateRegistryRecordCallable(const Model::UpdateRegistryRecordRequest& request);

                /**
                 *更新沙箱实例
                 * @param req UpdateSandboxInstanceRequest
                 * @return UpdateSandboxInstanceOutcome
                 */
                UpdateSandboxInstanceOutcome UpdateSandboxInstance(const Model::UpdateSandboxInstanceRequest &request);
                void UpdateSandboxInstanceAsync(const Model::UpdateSandboxInstanceRequest& request, const UpdateSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSandboxInstanceOutcomeCallable UpdateSandboxInstanceCallable(const Model::UpdateSandboxInstanceRequest& request);

                /**
                 *更新沙箱工具
                 * @param req UpdateSandboxToolRequest
                 * @return UpdateSandboxToolOutcome
                 */
                UpdateSandboxToolOutcome UpdateSandboxTool(const Model::UpdateSandboxToolRequest &request);
                void UpdateSandboxToolAsync(const Model::UpdateSandboxToolRequest& request, const UpdateSandboxToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSandboxToolOutcomeCallable UpdateSandboxToolCallable(const Model::UpdateSandboxToolRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_AGSCLIENT_H_
