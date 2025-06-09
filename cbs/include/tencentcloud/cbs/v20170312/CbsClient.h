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

#ifndef TENCENTCLOUD_CBS_V20170312_CBSCLIENT_H_
#define TENCENTCLOUD_CBS_V20170312_CBSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cbs/v20170312/model/ApplyDiskBackupRequest.h>
#include <tencentcloud/cbs/v20170312/model/ApplyDiskBackupResponse.h>
#include <tencentcloud/cbs/v20170312/model/ApplySnapshotRequest.h>
#include <tencentcloud/cbs/v20170312/model/ApplySnapshotResponse.h>
#include <tencentcloud/cbs/v20170312/model/ApplySnapshotGroupRequest.h>
#include <tencentcloud/cbs/v20170312/model/ApplySnapshotGroupResponse.h>
#include <tencentcloud/cbs/v20170312/model/AttachDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/AttachDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/BindAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cbs/v20170312/model/BindAutoSnapshotPolicyResponse.h>
#include <tencentcloud/cbs/v20170312/model/CopySnapshotCrossRegionsRequest.h>
#include <tencentcloud/cbs/v20170312/model/CopySnapshotCrossRegionsResponse.h>
#include <tencentcloud/cbs/v20170312/model/CreateAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cbs/v20170312/model/CreateAutoSnapshotPolicyResponse.h>
#include <tencentcloud/cbs/v20170312/model/CreateDiskBackupRequest.h>
#include <tencentcloud/cbs/v20170312/model/CreateDiskBackupResponse.h>
#include <tencentcloud/cbs/v20170312/model/CreateDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/CreateDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/CreateSnapshotRequest.h>
#include <tencentcloud/cbs/v20170312/model/CreateSnapshotResponse.h>
#include <tencentcloud/cbs/v20170312/model/CreateSnapshotGroupRequest.h>
#include <tencentcloud/cbs/v20170312/model/CreateSnapshotGroupResponse.h>
#include <tencentcloud/cbs/v20170312/model/DeleteAutoSnapshotPoliciesRequest.h>
#include <tencentcloud/cbs/v20170312/model/DeleteAutoSnapshotPoliciesResponse.h>
#include <tencentcloud/cbs/v20170312/model/DeleteDiskBackupsRequest.h>
#include <tencentcloud/cbs/v20170312/model/DeleteDiskBackupsResponse.h>
#include <tencentcloud/cbs/v20170312/model/DeleteSnapshotGroupRequest.h>
#include <tencentcloud/cbs/v20170312/model/DeleteSnapshotGroupResponse.h>
#include <tencentcloud/cbs/v20170312/model/DeleteSnapshotsRequest.h>
#include <tencentcloud/cbs/v20170312/model/DeleteSnapshotsResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeAutoSnapshotPoliciesRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeAutoSnapshotPoliciesResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskAssociatedAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskAssociatedAutoSnapshotPolicyResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskBackupsRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskBackupsResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskConfigQuotaRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskConfigQuotaResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskStoragePoolRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskStoragePoolResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeInstancesDiskNumRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeInstancesDiskNumResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotGroupsRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotGroupsResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotOverviewRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotOverviewResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotSharePermissionRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotSharePermissionResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotsRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotsResponse.h>
#include <tencentcloud/cbs/v20170312/model/DetachDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/DetachDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/GetSnapOverviewRequest.h>
#include <tencentcloud/cbs/v20170312/model/GetSnapOverviewResponse.h>
#include <tencentcloud/cbs/v20170312/model/InitializeDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/InitializeDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/InquirePriceModifyDiskBackupQuotaRequest.h>
#include <tencentcloud/cbs/v20170312/model/InquirePriceModifyDiskBackupQuotaResponse.h>
#include <tencentcloud/cbs/v20170312/model/InquirePriceModifyDiskExtraPerformanceRequest.h>
#include <tencentcloud/cbs/v20170312/model/InquirePriceModifyDiskExtraPerformanceResponse.h>
#include <tencentcloud/cbs/v20170312/model/InquiryPriceCreateDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/InquiryPriceCreateDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/InquiryPriceRenewDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/InquiryPriceRenewDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/InquiryPriceResizeDiskRequest.h>
#include <tencentcloud/cbs/v20170312/model/InquiryPriceResizeDiskResponse.h>
#include <tencentcloud/cbs/v20170312/model/ModifyAutoSnapshotPolicyAttributeRequest.h>
#include <tencentcloud/cbs/v20170312/model/ModifyAutoSnapshotPolicyAttributeResponse.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDiskAttributesRequest.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDiskAttributesResponse.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDiskBackupQuotaRequest.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDiskBackupQuotaResponse.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDiskExtraPerformanceRequest.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDiskExtraPerformanceResponse.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDisksChargeTypeRequest.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDisksChargeTypeResponse.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDisksRenewFlagRequest.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDisksRenewFlagResponse.h>
#include <tencentcloud/cbs/v20170312/model/ModifySnapshotAttributeRequest.h>
#include <tencentcloud/cbs/v20170312/model/ModifySnapshotAttributeResponse.h>
#include <tencentcloud/cbs/v20170312/model/ModifySnapshotsSharePermissionRequest.h>
#include <tencentcloud/cbs/v20170312/model/ModifySnapshotsSharePermissionResponse.h>
#include <tencentcloud/cbs/v20170312/model/RenewDiskRequest.h>
#include <tencentcloud/cbs/v20170312/model/RenewDiskResponse.h>
#include <tencentcloud/cbs/v20170312/model/ResizeDiskRequest.h>
#include <tencentcloud/cbs/v20170312/model/ResizeDiskResponse.h>
#include <tencentcloud/cbs/v20170312/model/TerminateDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/TerminateDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/UnbindAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cbs/v20170312/model/UnbindAutoSnapshotPolicyResponse.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            class CbsClient : public AbstractClient
            {
            public:
                CbsClient(const Credential &credential, const std::string &region);
                CbsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyDiskBackupResponse> ApplyDiskBackupOutcome;
                typedef std::future<ApplyDiskBackupOutcome> ApplyDiskBackupOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ApplyDiskBackupRequest&, ApplyDiskBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyDiskBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplySnapshotResponse> ApplySnapshotOutcome;
                typedef std::future<ApplySnapshotOutcome> ApplySnapshotOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ApplySnapshotRequest&, ApplySnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplySnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplySnapshotGroupResponse> ApplySnapshotGroupOutcome;
                typedef std::future<ApplySnapshotGroupOutcome> ApplySnapshotGroupOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ApplySnapshotGroupRequest&, ApplySnapshotGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplySnapshotGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachDisksResponse> AttachDisksOutcome;
                typedef std::future<AttachDisksOutcome> AttachDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::AttachDisksRequest&, AttachDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::BindAutoSnapshotPolicyResponse> BindAutoSnapshotPolicyOutcome;
                typedef std::future<BindAutoSnapshotPolicyOutcome> BindAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::BindAutoSnapshotPolicyRequest&, BindAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindAutoSnapshotPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CopySnapshotCrossRegionsResponse> CopySnapshotCrossRegionsOutcome;
                typedef std::future<CopySnapshotCrossRegionsOutcome> CopySnapshotCrossRegionsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CopySnapshotCrossRegionsRequest&, CopySnapshotCrossRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopySnapshotCrossRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAutoSnapshotPolicyResponse> CreateAutoSnapshotPolicyOutcome;
                typedef std::future<CreateAutoSnapshotPolicyOutcome> CreateAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CreateAutoSnapshotPolicyRequest&, CreateAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoSnapshotPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDiskBackupResponse> CreateDiskBackupOutcome;
                typedef std::future<CreateDiskBackupOutcome> CreateDiskBackupOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CreateDiskBackupRequest&, CreateDiskBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDiskBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDisksResponse> CreateDisksOutcome;
                typedef std::future<CreateDisksOutcome> CreateDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CreateDisksRequest&, CreateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotResponse> CreateSnapshotOutcome;
                typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CreateSnapshotRequest&, CreateSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotGroupResponse> CreateSnapshotGroupOutcome;
                typedef std::future<CreateSnapshotGroupOutcome> CreateSnapshotGroupOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CreateSnapshotGroupRequest&, CreateSnapshotGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAutoSnapshotPoliciesResponse> DeleteAutoSnapshotPoliciesOutcome;
                typedef std::future<DeleteAutoSnapshotPoliciesOutcome> DeleteAutoSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DeleteAutoSnapshotPoliciesRequest&, DeleteAutoSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDiskBackupsResponse> DeleteDiskBackupsOutcome;
                typedef std::future<DeleteDiskBackupsOutcome> DeleteDiskBackupsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DeleteDiskBackupsRequest&, DeleteDiskBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDiskBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotGroupResponse> DeleteSnapshotGroupOutcome;
                typedef std::future<DeleteSnapshotGroupOutcome> DeleteSnapshotGroupOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DeleteSnapshotGroupRequest&, DeleteSnapshotGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotsResponse> DeleteSnapshotsOutcome;
                typedef std::future<DeleteSnapshotsOutcome> DeleteSnapshotsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DeleteSnapshotsRequest&, DeleteSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoSnapshotPoliciesResponse> DescribeAutoSnapshotPoliciesOutcome;
                typedef std::future<DescribeAutoSnapshotPoliciesOutcome> DescribeAutoSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeAutoSnapshotPoliciesRequest&, DescribeAutoSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiskAssociatedAutoSnapshotPolicyResponse> DescribeDiskAssociatedAutoSnapshotPolicyOutcome;
                typedef std::future<DescribeDiskAssociatedAutoSnapshotPolicyOutcome> DescribeDiskAssociatedAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeDiskAssociatedAutoSnapshotPolicyRequest&, DescribeDiskAssociatedAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskAssociatedAutoSnapshotPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiskBackupsResponse> DescribeDiskBackupsOutcome;
                typedef std::future<DescribeDiskBackupsOutcome> DescribeDiskBackupsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeDiskBackupsRequest&, DescribeDiskBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiskConfigQuotaResponse> DescribeDiskConfigQuotaOutcome;
                typedef std::future<DescribeDiskConfigQuotaOutcome> DescribeDiskConfigQuotaOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeDiskConfigQuotaRequest&, DescribeDiskConfigQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskConfigQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiskStoragePoolResponse> DescribeDiskStoragePoolOutcome;
                typedef std::future<DescribeDiskStoragePoolOutcome> DescribeDiskStoragePoolOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeDiskStoragePoolRequest&, DescribeDiskStoragePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskStoragePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisksResponse> DescribeDisksOutcome;
                typedef std::future<DescribeDisksOutcome> DescribeDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeDisksRequest&, DescribeDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesDiskNumResponse> DescribeInstancesDiskNumOutcome;
                typedef std::future<DescribeInstancesDiskNumOutcome> DescribeInstancesDiskNumOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeInstancesDiskNumRequest&, DescribeInstancesDiskNumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesDiskNumAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotGroupsResponse> DescribeSnapshotGroupsOutcome;
                typedef std::future<DescribeSnapshotGroupsOutcome> DescribeSnapshotGroupsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeSnapshotGroupsRequest&, DescribeSnapshotGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotOverviewResponse> DescribeSnapshotOverviewOutcome;
                typedef std::future<DescribeSnapshotOverviewOutcome> DescribeSnapshotOverviewOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeSnapshotOverviewRequest&, DescribeSnapshotOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotSharePermissionResponse> DescribeSnapshotSharePermissionOutcome;
                typedef std::future<DescribeSnapshotSharePermissionOutcome> DescribeSnapshotSharePermissionOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeSnapshotSharePermissionRequest&, DescribeSnapshotSharePermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotSharePermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotsResponse> DescribeSnapshotsOutcome;
                typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeSnapshotsRequest&, DescribeSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachDisksResponse> DetachDisksOutcome;
                typedef std::future<DetachDisksOutcome> DetachDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DetachDisksRequest&, DetachDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSnapOverviewResponse> GetSnapOverviewOutcome;
                typedef std::future<GetSnapOverviewOutcome> GetSnapOverviewOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::GetSnapOverviewRequest&, GetSnapOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSnapOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::InitializeDisksResponse> InitializeDisksOutcome;
                typedef std::future<InitializeDisksOutcome> InitializeDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InitializeDisksRequest&, InitializeDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InitializeDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceModifyDiskBackupQuotaResponse> InquirePriceModifyDiskBackupQuotaOutcome;
                typedef std::future<InquirePriceModifyDiskBackupQuotaOutcome> InquirePriceModifyDiskBackupQuotaOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InquirePriceModifyDiskBackupQuotaRequest&, InquirePriceModifyDiskBackupQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceModifyDiskBackupQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceModifyDiskExtraPerformanceResponse> InquirePriceModifyDiskExtraPerformanceOutcome;
                typedef std::future<InquirePriceModifyDiskExtraPerformanceOutcome> InquirePriceModifyDiskExtraPerformanceOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InquirePriceModifyDiskExtraPerformanceRequest&, InquirePriceModifyDiskExtraPerformanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceModifyDiskExtraPerformanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateDisksResponse> InquiryPriceCreateDisksOutcome;
                typedef std::future<InquiryPriceCreateDisksOutcome> InquiryPriceCreateDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InquiryPriceCreateDisksRequest&, InquiryPriceCreateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewDisksResponse> InquiryPriceRenewDisksOutcome;
                typedef std::future<InquiryPriceRenewDisksOutcome> InquiryPriceRenewDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InquiryPriceRenewDisksRequest&, InquiryPriceRenewDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceResizeDiskResponse> InquiryPriceResizeDiskOutcome;
                typedef std::future<InquiryPriceResizeDiskOutcome> InquiryPriceResizeDiskOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InquiryPriceResizeDiskRequest&, InquiryPriceResizeDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResizeDiskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoSnapshotPolicyAttributeResponse> ModifyAutoSnapshotPolicyAttributeOutcome;
                typedef std::future<ModifyAutoSnapshotPolicyAttributeOutcome> ModifyAutoSnapshotPolicyAttributeOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifyAutoSnapshotPolicyAttributeRequest&, ModifyAutoSnapshotPolicyAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoSnapshotPolicyAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDiskAttributesResponse> ModifyDiskAttributesOutcome;
                typedef std::future<ModifyDiskAttributesOutcome> ModifyDiskAttributesOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifyDiskAttributesRequest&, ModifyDiskAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiskAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDiskBackupQuotaResponse> ModifyDiskBackupQuotaOutcome;
                typedef std::future<ModifyDiskBackupQuotaOutcome> ModifyDiskBackupQuotaOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifyDiskBackupQuotaRequest&, ModifyDiskBackupQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiskBackupQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDiskExtraPerformanceResponse> ModifyDiskExtraPerformanceOutcome;
                typedef std::future<ModifyDiskExtraPerformanceOutcome> ModifyDiskExtraPerformanceOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifyDiskExtraPerformanceRequest&, ModifyDiskExtraPerformanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiskExtraPerformanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDisksChargeTypeResponse> ModifyDisksChargeTypeOutcome;
                typedef std::future<ModifyDisksChargeTypeOutcome> ModifyDisksChargeTypeOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifyDisksChargeTypeRequest&, ModifyDisksChargeTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDisksChargeTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDisksRenewFlagResponse> ModifyDisksRenewFlagOutcome;
                typedef std::future<ModifyDisksRenewFlagOutcome> ModifyDisksRenewFlagOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifyDisksRenewFlagRequest&, ModifyDisksRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDisksRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotAttributeResponse> ModifySnapshotAttributeOutcome;
                typedef std::future<ModifySnapshotAttributeOutcome> ModifySnapshotAttributeOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifySnapshotAttributeRequest&, ModifySnapshotAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotsSharePermissionResponse> ModifySnapshotsSharePermissionOutcome;
                typedef std::future<ModifySnapshotsSharePermissionOutcome> ModifySnapshotsSharePermissionOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifySnapshotsSharePermissionRequest&, ModifySnapshotsSharePermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotsSharePermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewDiskResponse> RenewDiskOutcome;
                typedef std::future<RenewDiskOutcome> RenewDiskOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::RenewDiskRequest&, RenewDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDiskAsyncHandler;
                typedef Outcome<Core::Error, Model::ResizeDiskResponse> ResizeDiskOutcome;
                typedef std::future<ResizeDiskOutcome> ResizeDiskOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ResizeDiskRequest&, ResizeDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDiskAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateDisksResponse> TerminateDisksOutcome;
                typedef std::future<TerminateDisksOutcome> TerminateDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::TerminateDisksRequest&, TerminateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindAutoSnapshotPolicyResponse> UnbindAutoSnapshotPolicyOutcome;
                typedef std::future<UnbindAutoSnapshotPolicyOutcome> UnbindAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::UnbindAutoSnapshotPolicyRequest&, UnbindAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindAutoSnapshotPolicyAsyncHandler;



                /**
                 *本接口（ApplyDiskBackup）用于回滚备份点到原云硬盘。

* 仅支持回滚到原云硬盘上。对于数据盘备份点，如果您需要复制备份点数据到其它云硬盘上，请先使用[CreateSnapshot](/document/product/362/15648) 将备份点转换为快照，然后使用[CreateDisks](/document/product/362/16312) 接口创建新的弹性云硬盘，将快照数据复制到新购云硬盘上。
* 用于回滚的备份点必须处于NORMAL状态。备份点状态可以通过[DescribeDiskBackups](/document/product/362/80278)接口查询，见输出参数中BackupState字段解释。
* 如果是弹性云硬盘，则云硬盘必须处于未挂载状态，云硬盘挂载状态可以通[DescribeDisks](/document/product/362/16315)接口查询，见Attached字段解释；如果是随实例一起购买的非弹性云硬盘，则实例必须处于关机状态，实例状态可以通过[DescribeInstancesStatus](/document/product/213/15738)接口查询。
                 * @param req ApplyDiskBackupRequest
                 * @return ApplyDiskBackupOutcome
                 */
                ApplyDiskBackupOutcome ApplyDiskBackup(const Model::ApplyDiskBackupRequest &request);
                void ApplyDiskBackupAsync(const Model::ApplyDiskBackupRequest& request, const ApplyDiskBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyDiskBackupOutcomeCallable ApplyDiskBackupCallable(const Model::ApplyDiskBackupRequest& request);

                /**
                 *本接口（ApplySnapshot）用于回滚快照到原云硬盘。

* 仅支持回滚到原云硬盘上。对于数据盘快照，如果您需要复制快照数据到其它云硬盘上，请使用[CreateDisks](/document/product/362/16312)接口创建新的弹性云盘，将快照数据复制到新购云盘上。 
* 用于回滚的快照必须处于NORMAL状态。快照状态可以通过[DescribeSnapshots](/document/product/362/15647)接口查询，见输出参数中SnapshotState字段解释。
* 如果是弹性云盘，则云盘必须处于未挂载状态，云硬盘挂载状态可以通过[DescribeDisks](/document/product/362/16315)接口查询，见Attached字段解释；如果是随实例一起购买的非弹性云盘，则实例必须处于关机状态，实例状态可以通过[DescribeInstancesStatus](/document/product/213/15738)接口查询。
                 * @param req ApplySnapshotRequest
                 * @return ApplySnapshotOutcome
                 */
                ApplySnapshotOutcome ApplySnapshot(const Model::ApplySnapshotRequest &request);
                void ApplySnapshotAsync(const Model::ApplySnapshotRequest& request, const ApplySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplySnapshotOutcomeCallable ApplySnapshotCallable(const Model::ApplySnapshotRequest& request);

                /**
                 *本接口（ApplySnapshotGroup）用于回滚快照组，将实例恢复到创建快照组时刻的状态。
* 1.可选择快照组全部或部分盘进行回滚；
* 2.如果回滚的盘中包含已挂载的盘，要求这些盘必须挂载在同一实例上，且要求该实例已关机才能回滚；
* 3.回滚为异步操作，接口返回成功不代表回滚成功，可通过调DescribeSnapshotGroups接口查询快照组的状态。
                 * @param req ApplySnapshotGroupRequest
                 * @return ApplySnapshotGroupOutcome
                 */
                ApplySnapshotGroupOutcome ApplySnapshotGroup(const Model::ApplySnapshotGroupRequest &request);
                void ApplySnapshotGroupAsync(const Model::ApplySnapshotGroupRequest& request, const ApplySnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplySnapshotGroupOutcomeCallable ApplySnapshotGroupCallable(const Model::ApplySnapshotGroupRequest& request);

                /**
                 *本接口（AttachDisks）用于挂载云硬盘。
 
* 支持批量操作，将多块云盘挂载到同一云主机。如果多个云盘中存在不允许挂载的云盘，则操作不执行，返回特定的错误码。
* 本接口为异步接口，当挂载云盘的请求成功返回时，表示后台已发起挂载云盘的操作，可通过接口[DescribeDisks](/document/product/362/16315)来查询对应云盘的状态，如果云盘的状态由“ATTACHING”变为“ATTACHED”，则为挂载成功。
                 * @param req AttachDisksRequest
                 * @return AttachDisksOutcome
                 */
                AttachDisksOutcome AttachDisks(const Model::AttachDisksRequest &request);
                void AttachDisksAsync(const Model::AttachDisksRequest& request, const AttachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachDisksOutcomeCallable AttachDisksCallable(const Model::AttachDisksRequest& request);

                /**
                 *本接口（BindAutoSnapshotPolicy）用于绑定云硬盘到指定的定期快照策略。

* 每个地域下的定期快照策略配额限制请参考文档[定期快照](/document/product/362/8191)。
* 当已绑定定期快照策略的云硬盘处于未使用状态（即弹性云盘未挂载或非弹性云盘的主机处于关机状态）将不会创建定期快照。
                 * @param req BindAutoSnapshotPolicyRequest
                 * @return BindAutoSnapshotPolicyOutcome
                 */
                BindAutoSnapshotPolicyOutcome BindAutoSnapshotPolicy(const Model::BindAutoSnapshotPolicyRequest &request);
                void BindAutoSnapshotPolicyAsync(const Model::BindAutoSnapshotPolicyRequest& request, const BindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindAutoSnapshotPolicyOutcomeCallable BindAutoSnapshotPolicyCallable(const Model::BindAutoSnapshotPolicyRequest& request);

                /**
                 *本接口（CopySnapshotCrossRegions）用于快照跨地域复制。

* 本接口为异步接口，当跨地域复制的请求下发成功后会返回一个新的快照ID，此时快照未立即复制到目标地域，可请求目标地域的[DescribeSnapshots](/document/product/362/15647)接口查询新快照的状态，判断是否复制完成。如果快照的状态为“NORMAL”，表示快照复制完成。
* 本接口实现的快照跨地域复制操作将产生跨地域流量，预计2025年第三季度会针对此功能进行商业化计费；请留意后续站内信公告，避免产生预期外扣费。
                 * @param req CopySnapshotCrossRegionsRequest
                 * @return CopySnapshotCrossRegionsOutcome
                 */
                CopySnapshotCrossRegionsOutcome CopySnapshotCrossRegions(const Model::CopySnapshotCrossRegionsRequest &request);
                void CopySnapshotCrossRegionsAsync(const Model::CopySnapshotCrossRegionsRequest& request, const CopySnapshotCrossRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopySnapshotCrossRegionsOutcomeCallable CopySnapshotCrossRegionsCallable(const Model::CopySnapshotCrossRegionsRequest& request);

                /**
                 *本接口（CreateAutoSnapshotPolicy）用于创建定期快照策略。

* 每个地域可创建的定期快照策略数量限制请参考文档[定期快照](/document/product/362/8191)。
* 每个地域可创建的快照有数量和容量的限制，具体请见腾讯云控制台快照页面提示，如果快照超配额，定期快照创建会失败。
                 * @param req CreateAutoSnapshotPolicyRequest
                 * @return CreateAutoSnapshotPolicyOutcome
                 */
                CreateAutoSnapshotPolicyOutcome CreateAutoSnapshotPolicy(const Model::CreateAutoSnapshotPolicyRequest &request);
                void CreateAutoSnapshotPolicyAsync(const Model::CreateAutoSnapshotPolicyRequest& request, const CreateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAutoSnapshotPolicyOutcomeCallable CreateAutoSnapshotPolicyCallable(const Model::CreateAutoSnapshotPolicyRequest& request);

                /**
                 *为云硬盘创建一个备份点。
                 * @param req CreateDiskBackupRequest
                 * @return CreateDiskBackupOutcome
                 */
                CreateDiskBackupOutcome CreateDiskBackup(const Model::CreateDiskBackupRequest &request);
                void CreateDiskBackupAsync(const Model::CreateDiskBackupRequest& request, const CreateDiskBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDiskBackupOutcomeCallable CreateDiskBackupCallable(const Model::CreateDiskBackupRequest& request);

                /**
                 *本接口（CreateDisks）用于创建云硬盘。

* 预付费云盘的购买会预先扣除本次云盘购买所需金额，在调用本接口前请确保账户余额充足。
* 本接口支持传入数据盘快照来创建云盘，实现将快照数据复制到新购云盘上。
* 本接口为异步接口，当创建请求下发成功后会返回一个新建的云盘ID列表，此时云盘的创建并未立即完成。可以通过调用[DescribeDisks](/document/product/362/16315)接口根据DiskId查询对应云盘，如果能查到云盘，且状态为'UNATTACHED'或'ATTACHED'，则表示创建成功。
                 * @param req CreateDisksRequest
                 * @return CreateDisksOutcome
                 */
                CreateDisksOutcome CreateDisks(const Model::CreateDisksRequest &request);
                void CreateDisksAsync(const Model::CreateDisksRequest& request, const CreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDisksOutcomeCallable CreateDisksCallable(const Model::CreateDisksRequest& request);

                /**
                 *本接口（CreateSnapshot）用于对指定云盘创建快照。

* 只有具有快照能力的云硬盘才能创建快照。云硬盘是否具有快照能力可由[DescribeDisks](/document/product/362/16315)接口查询，见SnapshotAbility字段。
* 可创建快照数量限制见[产品使用限制](https://cloud.tencent.com/doc/product/362/5145)。
* 当前支持将备份点转化为普通快照，转化之后可能会收取快照使用费用，备份点不保留，其占用的备份点配额也将被释放。
                 * @param req CreateSnapshotRequest
                 * @return CreateSnapshotOutcome
                 */
                CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest &request);
                void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request);

                /**
                 *本接口（CreateSnapshotGroup）用于创建快照组。
* 创建快照组的云硬盘列表必须挂载在同一实例上；
* 可选择挂载在实例上的全部或部分盘创建快照组。
                 * @param req CreateSnapshotGroupRequest
                 * @return CreateSnapshotGroupOutcome
                 */
                CreateSnapshotGroupOutcome CreateSnapshotGroup(const Model::CreateSnapshotGroupRequest &request);
                void CreateSnapshotGroupAsync(const Model::CreateSnapshotGroupRequest& request, const CreateSnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotGroupOutcomeCallable CreateSnapshotGroupCallable(const Model::CreateSnapshotGroupRequest& request);

                /**
                 *本接口（DeleteAutoSnapshotPolicies）用于删除定期快照策略。

*  支持批量操作。如果多个定期快照策略存在无法删除的，则操作不执行，以特定错误码返回。
                 * @param req DeleteAutoSnapshotPoliciesRequest
                 * @return DeleteAutoSnapshotPoliciesOutcome
                 */
                DeleteAutoSnapshotPoliciesOutcome DeleteAutoSnapshotPolicies(const Model::DeleteAutoSnapshotPoliciesRequest &request);
                void DeleteAutoSnapshotPoliciesAsync(const Model::DeleteAutoSnapshotPoliciesRequest& request, const DeleteAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAutoSnapshotPoliciesOutcomeCallable DeleteAutoSnapshotPoliciesCallable(const Model::DeleteAutoSnapshotPoliciesRequest& request);

                /**
                 *批量删除指定的云硬盘备份点。
                 * @param req DeleteDiskBackupsRequest
                 * @return DeleteDiskBackupsOutcome
                 */
                DeleteDiskBackupsOutcome DeleteDiskBackups(const Model::DeleteDiskBackupsRequest &request);
                void DeleteDiskBackupsAsync(const Model::DeleteDiskBackupsRequest& request, const DeleteDiskBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDiskBackupsOutcomeCallable DeleteDiskBackupsCallable(const Model::DeleteDiskBackupsRequest& request);

                /**
                 *本接口（DeleteSnapshotGroup）用于删除快照组，一次调用仅支持删除一个快照组。
* 默认会删除快照组内的所有快照；
* 如果快照组内的快照有关联镜像，则删除失败，所有快照均不会删除；如果需要同时删除快照绑定的镜像，可传入参数DeleteBindImages等于true。
                 * @param req DeleteSnapshotGroupRequest
                 * @return DeleteSnapshotGroupOutcome
                 */
                DeleteSnapshotGroupOutcome DeleteSnapshotGroup(const Model::DeleteSnapshotGroupRequest &request);
                void DeleteSnapshotGroupAsync(const Model::DeleteSnapshotGroupRequest& request, const DeleteSnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotGroupOutcomeCallable DeleteSnapshotGroupCallable(const Model::DeleteSnapshotGroupRequest& request);

                /**
                 *本接口（DeleteSnapshots）用于删除快照。

* 快照必须处于NORMAL状态，快照状态可以通过[DescribeSnapshots](/document/product/362/15647)接口查询，见输出参数中SnapshotState字段解释。
* 支持批量操作。如果多个快照存在无法删除的快照，则操作不执行，以特定的错误码返回。
                 * @param req DeleteSnapshotsRequest
                 * @return DeleteSnapshotsOutcome
                 */
                DeleteSnapshotsOutcome DeleteSnapshots(const Model::DeleteSnapshotsRequest &request);
                void DeleteSnapshotsAsync(const Model::DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotsOutcomeCallable DeleteSnapshotsCallable(const Model::DeleteSnapshotsRequest& request);

                /**
                 *本接口（DescribeAutoSnapshotPolicies）用于查询定期快照策略。

* 可以根据定期快照策略ID、名称或者状态等信息来查询定期快照策略的详细信息，不同条件之间为与(AND)的关系，过滤信息详细请见过滤器`Filter`。
* 如果参数为空，返回当前用户一定数量（`Limit`所指定的数量，默认为20）的定期快照策略表。
                 * @param req DescribeAutoSnapshotPoliciesRequest
                 * @return DescribeAutoSnapshotPoliciesOutcome
                 */
                DescribeAutoSnapshotPoliciesOutcome DescribeAutoSnapshotPolicies(const Model::DescribeAutoSnapshotPoliciesRequest &request);
                void DescribeAutoSnapshotPoliciesAsync(const Model::DescribeAutoSnapshotPoliciesRequest& request, const DescribeAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoSnapshotPoliciesOutcomeCallable DescribeAutoSnapshotPoliciesCallable(const Model::DescribeAutoSnapshotPoliciesRequest& request);

                /**
                 *本接口（DescribeDiskAssociatedAutoSnapshotPolicy）用于查询云盘绑定的定期快照策略。
                 * @param req DescribeDiskAssociatedAutoSnapshotPolicyRequest
                 * @return DescribeDiskAssociatedAutoSnapshotPolicyOutcome
                 */
                DescribeDiskAssociatedAutoSnapshotPolicyOutcome DescribeDiskAssociatedAutoSnapshotPolicy(const Model::DescribeDiskAssociatedAutoSnapshotPolicyRequest &request);
                void DescribeDiskAssociatedAutoSnapshotPolicyAsync(const Model::DescribeDiskAssociatedAutoSnapshotPolicyRequest& request, const DescribeDiskAssociatedAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskAssociatedAutoSnapshotPolicyOutcomeCallable DescribeDiskAssociatedAutoSnapshotPolicyCallable(const Model::DescribeDiskAssociatedAutoSnapshotPolicyRequest& request);

                /**
                 *本接口（DescribeDiskBackups）用于查询备份点的详细信息。

根据备份点ID、创建备份点的云硬盘ID、创建备份点的云硬盘类型等对结果进行过滤，不同条件之间为与(AND)的关系，过滤信息详细请见过滤器Filter。
如果参数为空，返回当前用户一定数量（Limit所指定的数量，默认为20）的备份点列表。
                 * @param req DescribeDiskBackupsRequest
                 * @return DescribeDiskBackupsOutcome
                 */
                DescribeDiskBackupsOutcome DescribeDiskBackups(const Model::DescribeDiskBackupsRequest &request);
                void DescribeDiskBackupsAsync(const Model::DescribeDiskBackupsRequest& request, const DescribeDiskBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskBackupsOutcomeCallable DescribeDiskBackupsCallable(const Model::DescribeDiskBackupsRequest& request);

                /**
                 *本接口（DescribeDiskConfigQuota）用于查询云硬盘配额。
                 * @param req DescribeDiskConfigQuotaRequest
                 * @return DescribeDiskConfigQuotaOutcome
                 */
                DescribeDiskConfigQuotaOutcome DescribeDiskConfigQuota(const Model::DescribeDiskConfigQuotaRequest &request);
                void DescribeDiskConfigQuotaAsync(const Model::DescribeDiskConfigQuotaRequest& request, const DescribeDiskConfigQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskConfigQuotaOutcomeCallable DescribeDiskConfigQuotaCallable(const Model::DescribeDiskConfigQuotaRequest& request);

                /**
                 *本接口（DescribeDiskStoragePool）查询用户的云硬盘独享集群列表。

* 可以根据独享集群ID(CdcId)、可用区(zone)等信息来查询和过滤云硬盘独享集群详细信息，不同的过滤条件之间为与(AND)的关系，过滤信息详细请见过滤器`Filter`。
* 如果参数为空，返回当前用户一定数量（`Limit`所指定的数量，默认为20）的云硬盘独享集群列表。
                 * @param req DescribeDiskStoragePoolRequest
                 * @return DescribeDiskStoragePoolOutcome
                 */
                DescribeDiskStoragePoolOutcome DescribeDiskStoragePool(const Model::DescribeDiskStoragePoolRequest &request);
                void DescribeDiskStoragePoolAsync(const Model::DescribeDiskStoragePoolRequest& request, const DescribeDiskStoragePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskStoragePoolOutcomeCallable DescribeDiskStoragePoolCallable(const Model::DescribeDiskStoragePoolRequest& request);

                /**
                 *本接口（DescribeDisks）用于查询云硬盘列表。

* 可以根据云硬盘ID、云硬盘类型或者云硬盘状态等信息来查询云硬盘的详细信息，不同条件之间为与(AND)的关系，过滤信息详细请见过滤器`Filter`。
* 如果参数为空，返回当前用户一定数量（`Limit`所指定的数量，默认为20）的云硬盘列表。
                 * @param req DescribeDisksRequest
                 * @return DescribeDisksOutcome
                 */
                DescribeDisksOutcome DescribeDisks(const Model::DescribeDisksRequest &request);
                void DescribeDisksAsync(const Model::DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisksOutcomeCallable DescribeDisksCallable(const Model::DescribeDisksRequest& request);

                /**
                 *本接口（DescribeInstancesDiskNum）用于查询实例已挂载云硬盘数量。

* 支持批量操作，当传入多个云服务器实例ID，返回结果会分别列出每个云服务器挂载的云硬盘数量。
                 * @param req DescribeInstancesDiskNumRequest
                 * @return DescribeInstancesDiskNumOutcome
                 */
                DescribeInstancesDiskNumOutcome DescribeInstancesDiskNum(const Model::DescribeInstancesDiskNumRequest &request);
                void DescribeInstancesDiskNumAsync(const Model::DescribeInstancesDiskNumRequest& request, const DescribeInstancesDiskNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesDiskNumOutcomeCallable DescribeInstancesDiskNumCallable(const Model::DescribeInstancesDiskNumRequest& request);

                /**
                 *本接口（DescribeSnapshotGroups）用于查询快照组列表。
* 可以根据快照组ID、快照组状态、快照组关联的快照ID等来查询快照组列表，不同条件之间为与(AND)的关系，过滤信息详细请见过滤器`Filter`。
* 如果参数为空，返回当前用户一定数量（`Limit`所指定的数量，默认为20）的快照组列表。
                 * @param req DescribeSnapshotGroupsRequest
                 * @return DescribeSnapshotGroupsOutcome
                 */
                DescribeSnapshotGroupsOutcome DescribeSnapshotGroups(const Model::DescribeSnapshotGroupsRequest &request);
                void DescribeSnapshotGroupsAsync(const Model::DescribeSnapshotGroupsRequest& request, const DescribeSnapshotGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotGroupsOutcomeCallable DescribeSnapshotGroupsCallable(const Model::DescribeSnapshotGroupsRequest& request);

                /**
                 *该接口用于查询用户快照使用概览，包括快照总容量、计费容量等信息。
                 * @param req DescribeSnapshotOverviewRequest
                 * @return DescribeSnapshotOverviewOutcome
                 */
                DescribeSnapshotOverviewOutcome DescribeSnapshotOverview(const Model::DescribeSnapshotOverviewRequest &request);
                void DescribeSnapshotOverviewAsync(const Model::DescribeSnapshotOverviewRequest& request, const DescribeSnapshotOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotOverviewOutcomeCallable DescribeSnapshotOverviewCallable(const Model::DescribeSnapshotOverviewRequest& request);

                /**
                 *本接口（DescribeSnapshotSharePermission）用于查询快照的分享信息。
                 * @param req DescribeSnapshotSharePermissionRequest
                 * @return DescribeSnapshotSharePermissionOutcome
                 */
                DescribeSnapshotSharePermissionOutcome DescribeSnapshotSharePermission(const Model::DescribeSnapshotSharePermissionRequest &request);
                void DescribeSnapshotSharePermissionAsync(const Model::DescribeSnapshotSharePermissionRequest& request, const DescribeSnapshotSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotSharePermissionOutcomeCallable DescribeSnapshotSharePermissionCallable(const Model::DescribeSnapshotSharePermissionRequest& request);

                /**
                 *本接口（DescribeSnapshots）用于查询快照的详细信息。

* 根据快照ID、创建快照的云硬盘ID、创建快照的云硬盘类型等对结果进行过滤，不同条件之间为与(AND)的关系，过滤信息详细请见过滤器`Filter`。
*  如果参数为空，返回当前用户一定数量（`Limit`所指定的数量，默认为20）的快照列表。
                 * @param req DescribeSnapshotsRequest
                 * @return DescribeSnapshotsOutcome
                 */
                DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest &request);
                void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request);

                /**
                 *本接口（DetachDisks）用于卸载云硬盘。

* 支持批量操作，卸载挂载在同一主机上的多块云盘。如果多块云盘中存在不允许卸载的云盘，则操作不执行，返回特定的错误码。
* 本接口为异步接口，当请求成功返回时，云盘并未立即从主机卸载，可通过接口[DescribeDisks](/document/product/362/16315)来查询对应云盘的状态，如果云盘的状态由“ATTACHED”变为“UNATTACHED”，则为卸载成功。
                 * @param req DetachDisksRequest
                 * @return DetachDisksOutcome
                 */
                DetachDisksOutcome DetachDisks(const Model::DetachDisksRequest &request);
                void DetachDisksAsync(const Model::DetachDisksRequest& request, const DetachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachDisksOutcomeCallable DetachDisksCallable(const Model::DetachDisksRequest& request);

                /**
                 *为进一步规范化API命名，该接口决定预下线，新接口命名为：DescribeSnapshotOverview

获取快照概览信息
                 * @param req GetSnapOverviewRequest
                 * @return GetSnapOverviewOutcome
                 */
                GetSnapOverviewOutcome GetSnapOverview(const Model::GetSnapOverviewRequest &request);
                void GetSnapOverviewAsync(const Model::GetSnapOverviewRequest& request, const GetSnapOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSnapOverviewOutcomeCallable GetSnapOverviewCallable(const Model::GetSnapOverviewRequest& request);

                /**
                 *重新初始化云硬盘至云硬盘初始创建时的状态。使用云硬盘的重新初始化功能时需要注意以下4点：
1. 如果云硬盘是由快照创建的，则重新初始化会通过此快照重新回滚此云硬盘，即将云硬盘恢复为与快照一致的状态；
2. 如果云硬盘不是通过快照创建的，则重新初始化会清空此云硬盘的数据；请在重新初始化云硬盘前检查并备份必要的数据；
3. 当前仅未挂载的、非共享属性的数据盘云硬盘支持重新初始化；
4. 当创建此云硬盘的原始快照被删除时，不再支持重新初始化此云硬盘。
                 * @param req InitializeDisksRequest
                 * @return InitializeDisksOutcome
                 */
                InitializeDisksOutcome InitializeDisks(const Model::InitializeDisksRequest &request);
                void InitializeDisksAsync(const Model::InitializeDisksRequest& request, const InitializeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InitializeDisksOutcomeCallable InitializeDisksCallable(const Model::InitializeDisksRequest& request);

                /**
                 *本接口（InquirePricePriceModifyDiskBackupQuota）用于修改云硬盘备份点配额询价。
                 * @param req InquirePriceModifyDiskBackupQuotaRequest
                 * @return InquirePriceModifyDiskBackupQuotaOutcome
                 */
                InquirePriceModifyDiskBackupQuotaOutcome InquirePriceModifyDiskBackupQuota(const Model::InquirePriceModifyDiskBackupQuotaRequest &request);
                void InquirePriceModifyDiskBackupQuotaAsync(const Model::InquirePriceModifyDiskBackupQuotaRequest& request, const InquirePriceModifyDiskBackupQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceModifyDiskBackupQuotaOutcomeCallable InquirePriceModifyDiskBackupQuotaCallable(const Model::InquirePriceModifyDiskBackupQuotaRequest& request);

                /**
                 *本接口（InquirePriceModifyDiskExtraPerformance）用于调整云硬盘额外性能询价。
                 * @param req InquirePriceModifyDiskExtraPerformanceRequest
                 * @return InquirePriceModifyDiskExtraPerformanceOutcome
                 */
                InquirePriceModifyDiskExtraPerformanceOutcome InquirePriceModifyDiskExtraPerformance(const Model::InquirePriceModifyDiskExtraPerformanceRequest &request);
                void InquirePriceModifyDiskExtraPerformanceAsync(const Model::InquirePriceModifyDiskExtraPerformanceRequest& request, const InquirePriceModifyDiskExtraPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceModifyDiskExtraPerformanceOutcomeCallable InquirePriceModifyDiskExtraPerformanceCallable(const Model::InquirePriceModifyDiskExtraPerformanceRequest& request);

                /**
                 *本接口（InquiryPriceCreateDisks）用于创建云硬盘询价。

* 支持查询创建多块云硬盘的价格，此时返回结果为总价格。
                 * @param req InquiryPriceCreateDisksRequest
                 * @return InquiryPriceCreateDisksOutcome
                 */
                InquiryPriceCreateDisksOutcome InquiryPriceCreateDisks(const Model::InquiryPriceCreateDisksRequest &request);
                void InquiryPriceCreateDisksAsync(const Model::InquiryPriceCreateDisksRequest& request, const InquiryPriceCreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateDisksOutcomeCallable InquiryPriceCreateDisksCallable(const Model::InquiryPriceCreateDisksRequest& request);

                /**
                 *本接口（InquiryPriceRenewDisks）用于续费云硬盘询价。

* 只支持查询预付费模式的弹性云盘续费价格。
* 支持与挂载实例一起续费的场景，需要在[DiskChargePrepaid](/document/product/362/15669#DiskChargePrepaid)参数中指定CurInstanceDeadline，此时会按对齐到实例续费后的到期时间来续费询价。
* 支持为多块云盘指定不同的续费时长，此时返回的价格为多块云盘续费的总价格。
                 * @param req InquiryPriceRenewDisksRequest
                 * @return InquiryPriceRenewDisksOutcome
                 */
                InquiryPriceRenewDisksOutcome InquiryPriceRenewDisks(const Model::InquiryPriceRenewDisksRequest &request);
                void InquiryPriceRenewDisksAsync(const Model::InquiryPriceRenewDisksRequest& request, const InquiryPriceRenewDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewDisksOutcomeCallable InquiryPriceRenewDisksCallable(const Model::InquiryPriceRenewDisksRequest& request);

                /**
                 *本接口（InquiryPriceResizeDisk）用于扩容云硬盘询价。
                 * @param req InquiryPriceResizeDiskRequest
                 * @return InquiryPriceResizeDiskOutcome
                 */
                InquiryPriceResizeDiskOutcome InquiryPriceResizeDisk(const Model::InquiryPriceResizeDiskRequest &request);
                void InquiryPriceResizeDiskAsync(const Model::InquiryPriceResizeDiskRequest& request, const InquiryPriceResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceResizeDiskOutcomeCallable InquiryPriceResizeDiskCallable(const Model::InquiryPriceResizeDiskRequest& request);

                /**
                 *本接口（ModifyAutoSnapshotPolicyAttribute）用于修改定期快照策略属性。

* 可通过该接口修改定期快照策略的执行策略、名称、是否激活等属性。
* 修改保留天数时必须保证不与是否永久保留属性冲突，否则整个操作失败，以特定的错误码返回。
                 * @param req ModifyAutoSnapshotPolicyAttributeRequest
                 * @return ModifyAutoSnapshotPolicyAttributeOutcome
                 */
                ModifyAutoSnapshotPolicyAttributeOutcome ModifyAutoSnapshotPolicyAttribute(const Model::ModifyAutoSnapshotPolicyAttributeRequest &request);
                void ModifyAutoSnapshotPolicyAttributeAsync(const Model::ModifyAutoSnapshotPolicyAttributeRequest& request, const ModifyAutoSnapshotPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoSnapshotPolicyAttributeOutcomeCallable ModifyAutoSnapshotPolicyAttributeCallable(const Model::ModifyAutoSnapshotPolicyAttributeRequest& request);

                /**
                 ** 只支持修改弹性云盘的项目ID。随云主机创建的云硬盘项目ID与云主机联动。是否是弹性云盘可以通过[DescribeDisks](/document/product/362/16315)接口查询，见输出参数中Portable字段解释。
* “云硬盘名称”仅为方便用户自己管理之用，腾讯云并不以此名称作为提交工单或是进行云盘管理操作的依据。
* 支持批量操作，如果传入多个云盘ID，则所有云盘修改为同一属性。如果存在不允许操作的云盘，则操作不执行，以特定错误码返回。
                 * @param req ModifyDiskAttributesRequest
                 * @return ModifyDiskAttributesOutcome
                 */
                ModifyDiskAttributesOutcome ModifyDiskAttributes(const Model::ModifyDiskAttributesRequest &request);
                void ModifyDiskAttributesAsync(const Model::ModifyDiskAttributesRequest& request, const ModifyDiskAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDiskAttributesOutcomeCallable ModifyDiskAttributesCallable(const Model::ModifyDiskAttributesRequest& request);

                /**
                 *此接口 (ModifyDiskBackupQuota) 用于修改云硬盘备份点配额。
                 * @param req ModifyDiskBackupQuotaRequest
                 * @return ModifyDiskBackupQuotaOutcome
                 */
                ModifyDiskBackupQuotaOutcome ModifyDiskBackupQuota(const Model::ModifyDiskBackupQuotaRequest &request);
                void ModifyDiskBackupQuotaAsync(const Model::ModifyDiskBackupQuotaRequest& request, const ModifyDiskBackupQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDiskBackupQuotaOutcomeCallable ModifyDiskBackupQuotaCallable(const Model::ModifyDiskBackupQuotaRequest& request);

                /**
                 *本接口（ModifyDiskExtraPerformance）用于调整云硬盘额外的性能。

* 目前仅支持增强型SSD云硬盘(CLOUD_HSSD)和极速型SSD云硬盘（CLOUD_TSSD）。
                 * @param req ModifyDiskExtraPerformanceRequest
                 * @return ModifyDiskExtraPerformanceOutcome
                 */
                ModifyDiskExtraPerformanceOutcome ModifyDiskExtraPerformance(const Model::ModifyDiskExtraPerformanceRequest &request);
                void ModifyDiskExtraPerformanceAsync(const Model::ModifyDiskExtraPerformanceRequest& request, const ModifyDiskExtraPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDiskExtraPerformanceOutcomeCallable ModifyDiskExtraPerformanceCallable(const Model::ModifyDiskExtraPerformanceRequest& request);

                /**
                 *本接口 (ModifyDisksChargeType) 用于切换云硬盘的计费模式。

非弹性云硬盘不支持此接口，请通过修改实例计费模式接口将实例连同非弹性云硬盘一起转换。
                 * @param req ModifyDisksChargeTypeRequest
                 * @return ModifyDisksChargeTypeOutcome
                 */
                ModifyDisksChargeTypeOutcome ModifyDisksChargeType(const Model::ModifyDisksChargeTypeRequest &request);
                void ModifyDisksChargeTypeAsync(const Model::ModifyDisksChargeTypeRequest& request, const ModifyDisksChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDisksChargeTypeOutcomeCallable ModifyDisksChargeTypeCallable(const Model::ModifyDisksChargeTypeRequest& request);

                /**
                 *本接口（ModifyDisksRenewFlag）用于修改云硬盘续费标识，支持批量修改。
                 * @param req ModifyDisksRenewFlagRequest
                 * @return ModifyDisksRenewFlagOutcome
                 */
                ModifyDisksRenewFlagOutcome ModifyDisksRenewFlag(const Model::ModifyDisksRenewFlagRequest &request);
                void ModifyDisksRenewFlagAsync(const Model::ModifyDisksRenewFlagRequest& request, const ModifyDisksRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDisksRenewFlagOutcomeCallable ModifyDisksRenewFlagCallable(const Model::ModifyDisksRenewFlagRequest& request);

                /**
                 *本接口（ModifySnapshotAttribute）用于修改指定快照的属性。

* 本接口支持修改快照名称及到期时间，以及将非永久快照修改为永久快照。
* “快照名称”仅为方便用户管理之用，腾讯云并不以此名称作为提交工单或是进行快照管理操作的依据。
                 * @param req ModifySnapshotAttributeRequest
                 * @return ModifySnapshotAttributeOutcome
                 */
                ModifySnapshotAttributeOutcome ModifySnapshotAttribute(const Model::ModifySnapshotAttributeRequest &request);
                void ModifySnapshotAttributeAsync(const Model::ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotAttributeOutcomeCallable ModifySnapshotAttributeCallable(const Model::ModifySnapshotAttributeRequest& request);

                /**
                 *本接口（ModifySnapshotsSharePermission）用于修改快照分享信息。

分享快照后，被分享账户可以通过该快照创建云硬盘。
* 每个快照最多可分享给50个账户。
* 分享快照无法更改名称，描述，仅可用于创建云硬盘。
* 只支持分享到对方账户相同地域。
* 仅支持分享数据盘快照。
                 * @param req ModifySnapshotsSharePermissionRequest
                 * @return ModifySnapshotsSharePermissionOutcome
                 */
                ModifySnapshotsSharePermissionOutcome ModifySnapshotsSharePermission(const Model::ModifySnapshotsSharePermissionRequest &request);
                void ModifySnapshotsSharePermissionAsync(const Model::ModifySnapshotsSharePermissionRequest& request, const ModifySnapshotsSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotsSharePermissionOutcomeCallable ModifySnapshotsSharePermissionCallable(const Model::ModifySnapshotsSharePermissionRequest& request);

                /**
                 *本接口（RenewDisk）用于续费云硬盘。

* 只支持预付费的云硬盘。云硬盘类型可以通过[DescribeDisks](/document/product/362/16315)接口查询，见输出参数中DiskChargeType字段解释。
* 支持与挂载实例一起续费的场景，需要在[DiskChargePrepaid](/document/product/362/15669#DiskChargePrepaid)参数中指定CurInstanceDeadline，此时会按对齐到子机续费后的到期时间来续费。
                 * @param req RenewDiskRequest
                 * @return RenewDiskOutcome
                 */
                RenewDiskOutcome RenewDisk(const Model::RenewDiskRequest &request);
                void RenewDiskAsync(const Model::RenewDiskRequest& request, const RenewDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDiskOutcomeCallable RenewDiskCallable(const Model::RenewDiskRequest& request);

                /**
                 *本接口（ResizeDisk）用于扩容云硬盘。

* 只支持扩容弹性云盘。云硬盘类型可以通过[DescribeDisks](/document/product/362/16315)接口查询，见输出参数中Portable字段解释。非弹性云硬盘需通过[ResizeInstanceDisks](/document/product/213/15731)接口扩容。
* 本接口为异步接口，接口成功返回时，云盘并未立即扩容到指定大小，可通过接口[DescribeDisks](/document/product/362/16315)来查询对应云盘的状态，如果云盘的状态为“EXPANDING”，表示正在扩容中。
                 * @param req ResizeDiskRequest
                 * @return ResizeDiskOutcome
                 */
                ResizeDiskOutcome ResizeDisk(const Model::ResizeDiskRequest &request);
                void ResizeDiskAsync(const Model::ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResizeDiskOutcomeCallable ResizeDiskCallable(const Model::ResizeDiskRequest& request);

                /**
                 *本接口（TerminateDisks）用于退还云硬盘。

* 不再使用的云盘，可通过本接口主动退还。
* 本接口支持退还预付费云盘和按小时后付费云盘。按小时后付费云盘可直接退还，预付费云盘需符合退还规则。
* 支持批量操作，每次请求批量云硬盘的上限为100。如果批量云盘存在不允许操作的，请求会以特定错误码返回。
                 * @param req TerminateDisksRequest
                 * @return TerminateDisksOutcome
                 */
                TerminateDisksOutcome TerminateDisks(const Model::TerminateDisksRequest &request);
                void TerminateDisksAsync(const Model::TerminateDisksRequest& request, const TerminateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateDisksOutcomeCallable TerminateDisksCallable(const Model::TerminateDisksRequest& request);

                /**
                 *本接口（UnbindAutoSnapshotPolicy）用于解除云硬盘绑定的定期快照策略。

* 支持批量操作，可一次解除多个云盘与同一定期快照策略的绑定。 
* 如果传入的云盘未绑定到当前定期快照策略，接口将自动跳过，仅解绑与当前定期快照策略绑定的云盘。
                 * @param req UnbindAutoSnapshotPolicyRequest
                 * @return UnbindAutoSnapshotPolicyOutcome
                 */
                UnbindAutoSnapshotPolicyOutcome UnbindAutoSnapshotPolicy(const Model::UnbindAutoSnapshotPolicyRequest &request);
                void UnbindAutoSnapshotPolicyAsync(const Model::UnbindAutoSnapshotPolicyRequest& request, const UnbindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindAutoSnapshotPolicyOutcomeCallable UnbindAutoSnapshotPolicyCallable(const Model::UnbindAutoSnapshotPolicyRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_CBSCLIENT_H_
