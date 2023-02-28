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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_LIGHTHOUSECLIENT_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_LIGHTHOUSECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/lighthouse/v20200324/model/ApplyDiskBackupRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ApplyDiskBackupResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ApplyInstanceSnapshotRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ApplyInstanceSnapshotResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/AssociateInstancesKeyPairsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/AssociateInstancesKeyPairsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/AttachCcnRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/AttachCcnResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/AttachDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/AttachDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateBlueprintRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateBlueprintResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateDiskBackupRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateDiskBackupResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateFirewallRulesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateFirewallRulesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateInstanceSnapshotRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateInstanceSnapshotResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateKeyPairRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateKeyPairResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteBlueprintsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteBlueprintsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteDiskBackupsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteDiskBackupsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteFirewallRulesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteFirewallRulesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteKeyPairsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteKeyPairsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteSnapshotsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteSnapshotsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeAllScenesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeAllScenesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBlueprintInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBlueprintInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBlueprintsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBlueprintsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBundleDiscountRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBundleDiscountResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBundlesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBundlesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeCcnAttachedInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeCcnAttachedInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDiskBackupsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDiskBackupsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDiskBackupsDeniedActionsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDiskBackupsDeniedActionsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDiskConfigsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDiskConfigsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDiskDiscountRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDiskDiscountResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDisksDeniedActionsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDisksDeniedActionsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDisksReturnableRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDisksReturnableResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeFirewallRulesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeFirewallRulesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeFirewallRulesTemplateRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeFirewallRulesTemplateResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeGeneralResourceQuotasRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeGeneralResourceQuotasResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstanceLoginKeyPairAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstanceLoginKeyPairAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstanceVncUrlRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstanceVncUrlResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesDeniedActionsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesDeniedActionsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesDiskNumRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesDiskNumResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesReturnableRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesReturnableResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesTrafficPackagesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesTrafficPackagesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeKeyPairsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeKeyPairsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeModifyInstanceBundlesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeModifyInstanceBundlesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeRegionsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeRegionsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeResetInstanceBlueprintsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeResetInstanceBlueprintsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeScenesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeScenesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeSnapshotsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeSnapshotsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeSnapshotsDeniedActionsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeSnapshotsDeniedActionsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeZonesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeZonesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DetachCcnRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DetachCcnResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DetachDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DetachDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DisassociateInstancesKeyPairsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DisassociateInstancesKeyPairsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ImportKeyPairRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ImportKeyPairResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateBlueprintRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateBlueprintResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceRenewDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceRenewDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceRenewInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceRenewInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/IsolateInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/IsolateInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyBlueprintAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyBlueprintAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyDiskBackupsAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyDiskBackupsAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyDisksAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyDisksAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyDisksRenewFlagRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyDisksRenewFlagResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyFirewallRuleDescriptionRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyFirewallRuleDescriptionResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyFirewallRulesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyFirewallRulesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesBundleRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesBundleResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesLoginKeyPairAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesLoginKeyPairAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesRenewFlagRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesRenewFlagResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifySnapshotAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifySnapshotAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/RebootInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/RebootInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/RenewInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/RenewInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ResetAttachCcnRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ResetAttachCcnResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ResetInstanceRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ResetInstanceResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ResetInstancesPasswordRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ResetInstancesPasswordResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/StartInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/StartInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/StopInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/StopInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/TerminateDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/TerminateDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/TerminateInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/TerminateInstancesResponse.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            class LighthouseClient : public AbstractClient
            {
            public:
                LighthouseClient(const Credential &credential, const std::string &region);
                LighthouseClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyDiskBackupResponse> ApplyDiskBackupOutcome;
                typedef std::future<ApplyDiskBackupOutcome> ApplyDiskBackupOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ApplyDiskBackupRequest&, ApplyDiskBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyDiskBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyInstanceSnapshotResponse> ApplyInstanceSnapshotOutcome;
                typedef std::future<ApplyInstanceSnapshotOutcome> ApplyInstanceSnapshotOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ApplyInstanceSnapshotRequest&, ApplyInstanceSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyInstanceSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateInstancesKeyPairsResponse> AssociateInstancesKeyPairsOutcome;
                typedef std::future<AssociateInstancesKeyPairsOutcome> AssociateInstancesKeyPairsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::AssociateInstancesKeyPairsRequest&, AssociateInstancesKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateInstancesKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachCcnResponse> AttachCcnOutcome;
                typedef std::future<AttachCcnOutcome> AttachCcnOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::AttachCcnRequest&, AttachCcnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachCcnAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachDisksResponse> AttachDisksOutcome;
                typedef std::future<AttachDisksOutcome> AttachDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::AttachDisksRequest&, AttachDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBlueprintResponse> CreateBlueprintOutcome;
                typedef std::future<CreateBlueprintOutcome> CreateBlueprintOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateBlueprintRequest&, CreateBlueprintOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBlueprintAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDiskBackupResponse> CreateDiskBackupOutcome;
                typedef std::future<CreateDiskBackupOutcome> CreateDiskBackupOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateDiskBackupRequest&, CreateDiskBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDiskBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFirewallRulesResponse> CreateFirewallRulesOutcome;
                typedef std::future<CreateFirewallRulesOutcome> CreateFirewallRulesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateFirewallRulesRequest&, CreateFirewallRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFirewallRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceSnapshotResponse> CreateInstanceSnapshotOutcome;
                typedef std::future<CreateInstanceSnapshotOutcome> CreateInstanceSnapshotOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateInstanceSnapshotRequest&, CreateInstanceSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstancesResponse> CreateInstancesOutcome;
                typedef std::future<CreateInstancesOutcome> CreateInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateInstancesRequest&, CreateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKeyPairResponse> CreateKeyPairOutcome;
                typedef std::future<CreateKeyPairOutcome> CreateKeyPairOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateKeyPairRequest&, CreateKeyPairOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyPairAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBlueprintsResponse> DeleteBlueprintsOutcome;
                typedef std::future<DeleteBlueprintsOutcome> DeleteBlueprintsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DeleteBlueprintsRequest&, DeleteBlueprintsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBlueprintsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDiskBackupsResponse> DeleteDiskBackupsOutcome;
                typedef std::future<DeleteDiskBackupsOutcome> DeleteDiskBackupsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DeleteDiskBackupsRequest&, DeleteDiskBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDiskBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFirewallRulesResponse> DeleteFirewallRulesOutcome;
                typedef std::future<DeleteFirewallRulesOutcome> DeleteFirewallRulesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DeleteFirewallRulesRequest&, DeleteFirewallRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFirewallRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteKeyPairsResponse> DeleteKeyPairsOutcome;
                typedef std::future<DeleteKeyPairsOutcome> DeleteKeyPairsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DeleteKeyPairsRequest&, DeleteKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotsResponse> DeleteSnapshotsOutcome;
                typedef std::future<DeleteSnapshotsOutcome> DeleteSnapshotsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DeleteSnapshotsRequest&, DeleteSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllScenesResponse> DescribeAllScenesOutcome;
                typedef std::future<DescribeAllScenesOutcome> DescribeAllScenesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeAllScenesRequest&, DescribeAllScenesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllScenesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlueprintInstancesResponse> DescribeBlueprintInstancesOutcome;
                typedef std::future<DescribeBlueprintInstancesOutcome> DescribeBlueprintInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeBlueprintInstancesRequest&, DescribeBlueprintInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlueprintInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlueprintsResponse> DescribeBlueprintsOutcome;
                typedef std::future<DescribeBlueprintsOutcome> DescribeBlueprintsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeBlueprintsRequest&, DescribeBlueprintsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlueprintsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBundleDiscountResponse> DescribeBundleDiscountOutcome;
                typedef std::future<DescribeBundleDiscountOutcome> DescribeBundleDiscountOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeBundleDiscountRequest&, DescribeBundleDiscountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBundleDiscountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBundlesResponse> DescribeBundlesOutcome;
                typedef std::future<DescribeBundlesOutcome> DescribeBundlesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeBundlesRequest&, DescribeBundlesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBundlesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnAttachedInstancesResponse> DescribeCcnAttachedInstancesOutcome;
                typedef std::future<DescribeCcnAttachedInstancesOutcome> DescribeCcnAttachedInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeCcnAttachedInstancesRequest&, DescribeCcnAttachedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnAttachedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiskBackupsResponse> DescribeDiskBackupsOutcome;
                typedef std::future<DescribeDiskBackupsOutcome> DescribeDiskBackupsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeDiskBackupsRequest&, DescribeDiskBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiskBackupsDeniedActionsResponse> DescribeDiskBackupsDeniedActionsOutcome;
                typedef std::future<DescribeDiskBackupsDeniedActionsOutcome> DescribeDiskBackupsDeniedActionsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeDiskBackupsDeniedActionsRequest&, DescribeDiskBackupsDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskBackupsDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiskConfigsResponse> DescribeDiskConfigsOutcome;
                typedef std::future<DescribeDiskConfigsOutcome> DescribeDiskConfigsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeDiskConfigsRequest&, DescribeDiskConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiskDiscountResponse> DescribeDiskDiscountOutcome;
                typedef std::future<DescribeDiskDiscountOutcome> DescribeDiskDiscountOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeDiskDiscountRequest&, DescribeDiskDiscountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskDiscountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisksResponse> DescribeDisksOutcome;
                typedef std::future<DescribeDisksOutcome> DescribeDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeDisksRequest&, DescribeDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisksDeniedActionsResponse> DescribeDisksDeniedActionsOutcome;
                typedef std::future<DescribeDisksDeniedActionsOutcome> DescribeDisksDeniedActionsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeDisksDeniedActionsRequest&, DescribeDisksDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisksReturnableResponse> DescribeDisksReturnableOutcome;
                typedef std::future<DescribeDisksReturnableOutcome> DescribeDisksReturnableOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeDisksReturnableRequest&, DescribeDisksReturnableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksReturnableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirewallRulesResponse> DescribeFirewallRulesOutcome;
                typedef std::future<DescribeFirewallRulesOutcome> DescribeFirewallRulesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeFirewallRulesRequest&, DescribeFirewallRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirewallRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirewallRulesTemplateResponse> DescribeFirewallRulesTemplateOutcome;
                typedef std::future<DescribeFirewallRulesTemplateOutcome> DescribeFirewallRulesTemplateOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeFirewallRulesTemplateRequest&, DescribeFirewallRulesTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirewallRulesTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGeneralResourceQuotasResponse> DescribeGeneralResourceQuotasOutcome;
                typedef std::future<DescribeGeneralResourceQuotasOutcome> DescribeGeneralResourceQuotasOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeGeneralResourceQuotasRequest&, DescribeGeneralResourceQuotasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeneralResourceQuotasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLoginKeyPairAttributeResponse> DescribeInstanceLoginKeyPairAttributeOutcome;
                typedef std::future<DescribeInstanceLoginKeyPairAttributeOutcome> DescribeInstanceLoginKeyPairAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstanceLoginKeyPairAttributeRequest&, DescribeInstanceLoginKeyPairAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLoginKeyPairAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceVncUrlResponse> DescribeInstanceVncUrlOutcome;
                typedef std::future<DescribeInstanceVncUrlOutcome> DescribeInstanceVncUrlOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstanceVncUrlRequest&, DescribeInstanceVncUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceVncUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesDeniedActionsResponse> DescribeInstancesDeniedActionsOutcome;
                typedef std::future<DescribeInstancesDeniedActionsOutcome> DescribeInstancesDeniedActionsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstancesDeniedActionsRequest&, DescribeInstancesDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesDiskNumResponse> DescribeInstancesDiskNumOutcome;
                typedef std::future<DescribeInstancesDiskNumOutcome> DescribeInstancesDiskNumOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstancesDiskNumRequest&, DescribeInstancesDiskNumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesDiskNumAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesReturnableResponse> DescribeInstancesReturnableOutcome;
                typedef std::future<DescribeInstancesReturnableOutcome> DescribeInstancesReturnableOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstancesReturnableRequest&, DescribeInstancesReturnableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesReturnableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesTrafficPackagesResponse> DescribeInstancesTrafficPackagesOutcome;
                typedef std::future<DescribeInstancesTrafficPackagesOutcome> DescribeInstancesTrafficPackagesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstancesTrafficPackagesRequest&, DescribeInstancesTrafficPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesTrafficPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeyPairsResponse> DescribeKeyPairsOutcome;
                typedef std::future<DescribeKeyPairsOutcome> DescribeKeyPairsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeKeyPairsRequest&, DescribeKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModifyInstanceBundlesResponse> DescribeModifyInstanceBundlesOutcome;
                typedef std::future<DescribeModifyInstanceBundlesOutcome> DescribeModifyInstanceBundlesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeModifyInstanceBundlesRequest&, DescribeModifyInstanceBundlesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModifyInstanceBundlesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResetInstanceBlueprintsResponse> DescribeResetInstanceBlueprintsOutcome;
                typedef std::future<DescribeResetInstanceBlueprintsOutcome> DescribeResetInstanceBlueprintsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeResetInstanceBlueprintsRequest&, DescribeResetInstanceBlueprintsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResetInstanceBlueprintsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScenesResponse> DescribeScenesOutcome;
                typedef std::future<DescribeScenesOutcome> DescribeScenesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeScenesRequest&, DescribeScenesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScenesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotsResponse> DescribeSnapshotsOutcome;
                typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeSnapshotsRequest&, DescribeSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotsDeniedActionsResponse> DescribeSnapshotsDeniedActionsOutcome;
                typedef std::future<DescribeSnapshotsDeniedActionsOutcome> DescribeSnapshotsDeniedActionsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeSnapshotsDeniedActionsRequest&, DescribeSnapshotsDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachCcnResponse> DetachCcnOutcome;
                typedef std::future<DetachCcnOutcome> DetachCcnOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DetachCcnRequest&, DetachCcnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachCcnAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachDisksResponse> DetachDisksOutcome;
                typedef std::future<DetachDisksOutcome> DetachDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DetachDisksRequest&, DetachDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateInstancesKeyPairsResponse> DisassociateInstancesKeyPairsOutcome;
                typedef std::future<DisassociateInstancesKeyPairsOutcome> DisassociateInstancesKeyPairsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DisassociateInstancesKeyPairsRequest&, DisassociateInstancesKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateInstancesKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportKeyPairResponse> ImportKeyPairOutcome;
                typedef std::future<ImportKeyPairOutcome> ImportKeyPairOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ImportKeyPairRequest&, ImportKeyPairOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportKeyPairAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateBlueprintResponse> InquirePriceCreateBlueprintOutcome;
                typedef std::future<InquirePriceCreateBlueprintOutcome> InquirePriceCreateBlueprintOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::InquirePriceCreateBlueprintRequest&, InquirePriceCreateBlueprintOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateBlueprintAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateDisksResponse> InquirePriceCreateDisksOutcome;
                typedef std::future<InquirePriceCreateDisksOutcome> InquirePriceCreateDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::InquirePriceCreateDisksRequest&, InquirePriceCreateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateInstancesResponse> InquirePriceCreateInstancesOutcome;
                typedef std::future<InquirePriceCreateInstancesOutcome> InquirePriceCreateInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::InquirePriceCreateInstancesRequest&, InquirePriceCreateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceRenewDisksResponse> InquirePriceRenewDisksOutcome;
                typedef std::future<InquirePriceRenewDisksOutcome> InquirePriceRenewDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::InquirePriceRenewDisksRequest&, InquirePriceRenewDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceRenewDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceRenewInstancesResponse> InquirePriceRenewInstancesOutcome;
                typedef std::future<InquirePriceRenewInstancesOutcome> InquirePriceRenewInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::InquirePriceRenewInstancesRequest&, InquirePriceRenewInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceRenewInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateInstancesResponse> IsolateInstancesOutcome;
                typedef std::future<IsolateInstancesOutcome> IsolateInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::IsolateInstancesRequest&, IsolateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBlueprintAttributeResponse> ModifyBlueprintAttributeOutcome;
                typedef std::future<ModifyBlueprintAttributeOutcome> ModifyBlueprintAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyBlueprintAttributeRequest&, ModifyBlueprintAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlueprintAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDiskBackupsAttributeResponse> ModifyDiskBackupsAttributeOutcome;
                typedef std::future<ModifyDiskBackupsAttributeOutcome> ModifyDiskBackupsAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyDiskBackupsAttributeRequest&, ModifyDiskBackupsAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiskBackupsAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDisksAttributeResponse> ModifyDisksAttributeOutcome;
                typedef std::future<ModifyDisksAttributeOutcome> ModifyDisksAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyDisksAttributeRequest&, ModifyDisksAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDisksAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDisksRenewFlagResponse> ModifyDisksRenewFlagOutcome;
                typedef std::future<ModifyDisksRenewFlagOutcome> ModifyDisksRenewFlagOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyDisksRenewFlagRequest&, ModifyDisksRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDisksRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFirewallRuleDescriptionResponse> ModifyFirewallRuleDescriptionOutcome;
                typedef std::future<ModifyFirewallRuleDescriptionOutcome> ModifyFirewallRuleDescriptionOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyFirewallRuleDescriptionRequest&, ModifyFirewallRuleDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFirewallRuleDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFirewallRulesResponse> ModifyFirewallRulesOutcome;
                typedef std::future<ModifyFirewallRulesOutcome> ModifyFirewallRulesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyFirewallRulesRequest&, ModifyFirewallRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFirewallRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesAttributeResponse> ModifyInstancesAttributeOutcome;
                typedef std::future<ModifyInstancesAttributeOutcome> ModifyInstancesAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyInstancesAttributeRequest&, ModifyInstancesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesBundleResponse> ModifyInstancesBundleOutcome;
                typedef std::future<ModifyInstancesBundleOutcome> ModifyInstancesBundleOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyInstancesBundleRequest&, ModifyInstancesBundleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesBundleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesLoginKeyPairAttributeResponse> ModifyInstancesLoginKeyPairAttributeOutcome;
                typedef std::future<ModifyInstancesLoginKeyPairAttributeOutcome> ModifyInstancesLoginKeyPairAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyInstancesLoginKeyPairAttributeRequest&, ModifyInstancesLoginKeyPairAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesLoginKeyPairAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesRenewFlagResponse> ModifyInstancesRenewFlagOutcome;
                typedef std::future<ModifyInstancesRenewFlagOutcome> ModifyInstancesRenewFlagOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyInstancesRenewFlagRequest&, ModifyInstancesRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotAttributeResponse> ModifySnapshotAttributeOutcome;
                typedef std::future<ModifySnapshotAttributeOutcome> ModifySnapshotAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifySnapshotAttributeRequest&, ModifySnapshotAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::RebootInstancesResponse> RebootInstancesOutcome;
                typedef std::future<RebootInstancesOutcome> RebootInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::RebootInstancesRequest&, RebootInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewInstancesResponse> RenewInstancesOutcome;
                typedef std::future<RenewInstancesOutcome> RenewInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::RenewInstancesRequest&, RenewInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAttachCcnResponse> ResetAttachCcnOutcome;
                typedef std::future<ResetAttachCcnOutcome> ResetAttachCcnOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ResetAttachCcnRequest&, ResetAttachCcnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAttachCcnAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstanceResponse> ResetInstanceOutcome;
                typedef std::future<ResetInstanceOutcome> ResetInstanceOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ResetInstanceRequest&, ResetInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstancesPasswordResponse> ResetInstancesPasswordOutcome;
                typedef std::future<ResetInstancesPasswordOutcome> ResetInstancesPasswordOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ResetInstancesPasswordRequest&, ResetInstancesPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::StartInstancesResponse> StartInstancesOutcome;
                typedef std::future<StartInstancesOutcome> StartInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::StartInstancesRequest&, StartInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StopInstancesResponse> StopInstancesOutcome;
                typedef std::future<StopInstancesOutcome> StopInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::StopInstancesRequest&, StopInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateDisksResponse> TerminateDisksOutcome;
                typedef std::future<TerminateDisksOutcome> TerminateDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::TerminateDisksRequest&, TerminateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateInstancesResponse> TerminateInstancesOutcome;
                typedef std::future<TerminateInstancesOutcome> TerminateInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::TerminateInstancesRequest&, TerminateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstancesAsyncHandler;



                /**
                 *本接口（ApplyDiskBackup）用于回滚指定云硬盘的备份点。
* 仅支持回滚到原云硬盘。
* 用于回滚的云硬盘备份点必须处于 NORMAL 状态。
  云硬盘备份点状态可以通过  [DescribeDiskBackups](https://cloud.tencent.com/document/api/1207/84379) 接口查询。
* 回滚云硬盘备份点时，云硬盘的状态必须为 UNATTACHED或ATTACHED。
  云硬盘状态可通过 [DescribeDisks](https://cloud.tencent.com/document/api/1207/66093) 接口查询。
* 如果云硬盘处于 ATTACHED状态，相关RUNNING 状态的实例会强制关机，然后回滚云硬盘备份点。
                 * @param req ApplyDiskBackupRequest
                 * @return ApplyDiskBackupOutcome
                 */
                ApplyDiskBackupOutcome ApplyDiskBackup(const Model::ApplyDiskBackupRequest &request);
                void ApplyDiskBackupAsync(const Model::ApplyDiskBackupRequest& request, const ApplyDiskBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyDiskBackupOutcomeCallable ApplyDiskBackupCallable(const Model::ApplyDiskBackupRequest& request);

                /**
                 *本接口（ApplyInstanceSnapshot）用于回滚指定实例的系统盘快照。
<li>仅支持回滚到原系统盘。</li>
<li>用于回滚的快照必须处于 NORMAL 状态。快照状态可以通 DescribeSnapshots 接口查询，见输出参数中 SnapshotState 字段解释。</li>
<li>回滚快照时，实例的状态必须为 STOPPED 或 RUNNING，可通过 DescribeInstances 接口查询实例状态。处于 RUNNING 状态的实例会强制关机，然后回滚快照。</li>
                 * @param req ApplyInstanceSnapshotRequest
                 * @return ApplyInstanceSnapshotOutcome
                 */
                ApplyInstanceSnapshotOutcome ApplyInstanceSnapshot(const Model::ApplyInstanceSnapshotRequest &request);
                void ApplyInstanceSnapshotAsync(const Model::ApplyInstanceSnapshotRequest& request, const ApplyInstanceSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyInstanceSnapshotOutcomeCallable ApplyInstanceSnapshotCallable(const Model::ApplyInstanceSnapshotRequest& request);

                /**
                 *本接口（AssociateInstancesKeyPairs）用于绑定用户指定密钥对到实例。
* 只支持 [RUNNING, STOPPED] 状态的 LINUX_UNIX 操作系统的实例。处于 RUNNING 状态的实例会强制关机，然后绑定。
* 将密钥的公钥写入到实例的 SSH 配置当中，用户就可以通过该密钥的私钥来登录实例。
* 如果实例原来绑定过密钥，那么原来的密钥将失效。
* 如果实例原来是通过密码登录，绑定密钥后无法使用密码登录。
* 支持批量操作。每次请求批量实例的上限为 100。如果批量实例存在不允许操作的实例，操作会以特定错误码返回。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
                 * @param req AssociateInstancesKeyPairsRequest
                 * @return AssociateInstancesKeyPairsOutcome
                 */
                AssociateInstancesKeyPairsOutcome AssociateInstancesKeyPairs(const Model::AssociateInstancesKeyPairsRequest &request);
                void AssociateInstancesKeyPairsAsync(const Model::AssociateInstancesKeyPairsRequest& request, const AssociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateInstancesKeyPairsOutcomeCallable AssociateInstancesKeyPairsCallable(const Model::AssociateInstancesKeyPairsRequest& request);

                /**
                 *本接口 (AttachCcn) 用于建立与云联网的关联。
                 * @param req AttachCcnRequest
                 * @return AttachCcnOutcome
                 */
                AttachCcnOutcome AttachCcn(const Model::AttachCcnRequest &request);
                void AttachCcnAsync(const Model::AttachCcnRequest& request, const AttachCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachCcnOutcomeCallable AttachCcnCallable(const Model::AttachCcnRequest& request);

                /**
                 *本接口（AttachDisks）用于挂载一个或多个云硬盘。
                 * @param req AttachDisksRequest
                 * @return AttachDisksOutcome
                 */
                AttachDisksOutcome AttachDisks(const Model::AttachDisksRequest &request);
                void AttachDisksAsync(const Model::AttachDisksRequest& request, const AttachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachDisksOutcomeCallable AttachDisksCallable(const Model::AttachDisksRequest& request);

                /**
                 *本接口 (CreateBlueprint) 用于创建镜像。
                 * @param req CreateBlueprintRequest
                 * @return CreateBlueprintOutcome
                 */
                CreateBlueprintOutcome CreateBlueprint(const Model::CreateBlueprintRequest &request);
                void CreateBlueprintAsync(const Model::CreateBlueprintRequest& request, const CreateBlueprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBlueprintOutcomeCallable CreateBlueprintCallable(const Model::CreateBlueprintRequest& request);

                /**
                 *本接口 ( CreateDiskBackup  ) 用于创建指定云硬盘（当前只支持数据盘）的备份点。
                 * @param req CreateDiskBackupRequest
                 * @return CreateDiskBackupOutcome
                 */
                CreateDiskBackupOutcome CreateDiskBackup(const Model::CreateDiskBackupRequest &request);
                void CreateDiskBackupAsync(const Model::CreateDiskBackupRequest& request, const CreateDiskBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDiskBackupOutcomeCallable CreateDiskBackupCallable(const Model::CreateDiskBackupRequest& request);

                /**
                 *本接口（CreateFirewallRules）用于在实例上添加防火墙规则。


* FirewallVersion 为防火墙版本号，用户每次更新防火墙规则版本会自动加1，防止您更新的规则已过期，不填不考虑冲突。

在 FirewallRules 参数中：
* Protocol 字段支持输入 TCP，UDP，ICMP，ALL。
* Port 字段允许输入 ALL，或者一个单独的端口号，或者用逗号分隔的离散端口号，或者用减号分隔的两个端口号代表的端口范围。当 Port 为范围时，减号分隔的第一个端口号小于第二个端口号。当 Protocol 字段不是 TCP 或 UDP 时，Port 字段只能为空或 ALL。Port 字段长度不得超过 64。
* CidrBlock 字段允许输入符合 cidr 格式标准的任意字符串。租户之间网络隔离规则优先于防火墙中的内网规则。
* Action 字段只允许输入 ACCEPT 或 DROP。
* FirewallRuleDescription 字段长度不得超过 64。
                 * @param req CreateFirewallRulesRequest
                 * @return CreateFirewallRulesOutcome
                 */
                CreateFirewallRulesOutcome CreateFirewallRules(const Model::CreateFirewallRulesRequest &request);
                void CreateFirewallRulesAsync(const Model::CreateFirewallRulesRequest& request, const CreateFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFirewallRulesOutcomeCallable CreateFirewallRulesCallable(const Model::CreateFirewallRulesRequest& request);

                /**
                 *本接口（CreateInstanceSnapshot）用于创建指定实例的系统盘快照。
                 * @param req CreateInstanceSnapshotRequest
                 * @return CreateInstanceSnapshotOutcome
                 */
                CreateInstanceSnapshotOutcome CreateInstanceSnapshot(const Model::CreateInstanceSnapshotRequest &request);
                void CreateInstanceSnapshotAsync(const Model::CreateInstanceSnapshotRequest& request, const CreateInstanceSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceSnapshotOutcomeCallable CreateInstanceSnapshotCallable(const Model::CreateInstanceSnapshotRequest& request);

                /**
                 *本接口(CreateInstances)用于创建一个或多个指定套餐的轻量应用服务器实例。
                 * @param req CreateInstancesRequest
                 * @return CreateInstancesOutcome
                 */
                CreateInstancesOutcome CreateInstances(const Model::CreateInstancesRequest &request);
                void CreateInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstancesOutcomeCallable CreateInstancesCallable(const Model::CreateInstancesRequest& request);

                /**
                 *本接口（CreateKeyPair）用于创建一个密钥对。
                 * @param req CreateKeyPairRequest
                 * @return CreateKeyPairOutcome
                 */
                CreateKeyPairOutcome CreateKeyPair(const Model::CreateKeyPairRequest &request);
                void CreateKeyPairAsync(const Model::CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKeyPairOutcomeCallable CreateKeyPairCallable(const Model::CreateKeyPairRequest& request);

                /**
                 *本接口 (DeleteBlueprints) 用于删除镜像。
                 * @param req DeleteBlueprintsRequest
                 * @return DeleteBlueprintsOutcome
                 */
                DeleteBlueprintsOutcome DeleteBlueprints(const Model::DeleteBlueprintsRequest &request);
                void DeleteBlueprintsAsync(const Model::DeleteBlueprintsRequest& request, const DeleteBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBlueprintsOutcomeCallable DeleteBlueprintsCallable(const Model::DeleteBlueprintsRequest& request);

                /**
                 *本接口（DeleteDiskBackups）用于删除云硬盘备份点。
云硬盘备份点必须处于 NORMAL 状态，云硬盘备份点状态可以通过 [DescribeDiskBackups](https://cloud.tencent.com/document/api/1207/84379)接口查询，见输出参数中 DiskBackupState 字段解释。
                 * @param req DeleteDiskBackupsRequest
                 * @return DeleteDiskBackupsOutcome
                 */
                DeleteDiskBackupsOutcome DeleteDiskBackups(const Model::DeleteDiskBackupsRequest &request);
                void DeleteDiskBackupsAsync(const Model::DeleteDiskBackupsRequest& request, const DeleteDiskBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDiskBackupsOutcomeCallable DeleteDiskBackupsCallable(const Model::DeleteDiskBackupsRequest& request);

                /**
                 *本接口（DeleteFirewallRules）用于删除实例的防火墙规则。

* FirewallVersion 用于指定要操作的防火墙的版本。传入 FirewallVersion 版本号若不等于当前防火墙的最新版本，将返回失败；若不传 FirewallVersion 则直接删除指定的规则。

在 FirewallRules 参数中：
* Protocol 字段支持输入 TCP，UDP，ICMP，ALL。
* Port 字段允许输入 ALL，或者一个单独的端口号，或者用逗号分隔的离散端口号，或者用减号分隔的两个端口号代表的端口范围。当 Port 为范围时，减号分隔的第一个端口号小于第二个端口号。当 Protocol 字段不是 TCP 或 UDP 时，Port 字段只能为空或 ALL。Port 字段长度不得超过 64。
* CidrBlock 字段允许输入符合 cidr 格式标准的任意字符串。租户之间网络隔离规则优先于防火墙中的内网规则。
* Action 字段只允许输入 ACCEPT 或 DROP。
* FirewallRuleDescription 字段长度不得超过 64。
                 * @param req DeleteFirewallRulesRequest
                 * @return DeleteFirewallRulesOutcome
                 */
                DeleteFirewallRulesOutcome DeleteFirewallRules(const Model::DeleteFirewallRulesRequest &request);
                void DeleteFirewallRulesAsync(const Model::DeleteFirewallRulesRequest& request, const DeleteFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFirewallRulesOutcomeCallable DeleteFirewallRulesCallable(const Model::DeleteFirewallRulesRequest& request);

                /**
                 *本接口（DeleteKeyPairs）用于删除密钥对。
                 * @param req DeleteKeyPairsRequest
                 * @return DeleteKeyPairsOutcome
                 */
                DeleteKeyPairsOutcome DeleteKeyPairs(const Model::DeleteKeyPairsRequest &request);
                void DeleteKeyPairsAsync(const Model::DeleteKeyPairsRequest& request, const DeleteKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteKeyPairsOutcomeCallable DeleteKeyPairsCallable(const Model::DeleteKeyPairsRequest& request);

                /**
                 *本接口（DeleteSnapshots）用于删除快照。
快照必须处于 NORMAL 状态，快照状态可以通过 DescribeSnapshots 接口查询，见输出参数中 SnapshotState 字段解释。
                 * @param req DeleteSnapshotsRequest
                 * @return DeleteSnapshotsOutcome
                 */
                DeleteSnapshotsOutcome DeleteSnapshots(const Model::DeleteSnapshotsRequest &request);
                void DeleteSnapshotsAsync(const Model::DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotsOutcomeCallable DeleteSnapshotsCallable(const Model::DeleteSnapshotsRequest& request);

                /**
                 *本接口(DescribeAllScenes)用于查询全地域使用场景列表。
                 * @param req DescribeAllScenesRequest
                 * @return DescribeAllScenesOutcome
                 */
                DescribeAllScenesOutcome DescribeAllScenes(const Model::DescribeAllScenesRequest &request);
                void DescribeAllScenesAsync(const Model::DescribeAllScenesRequest& request, const DescribeAllScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllScenesOutcomeCallable DescribeAllScenesCallable(const Model::DescribeAllScenesRequest& request);

                /**
                 *本接口（DescribeBlueprintInstances）用于查询镜像实例信息。
                 * @param req DescribeBlueprintInstancesRequest
                 * @return DescribeBlueprintInstancesOutcome
                 */
                DescribeBlueprintInstancesOutcome DescribeBlueprintInstances(const Model::DescribeBlueprintInstancesRequest &request);
                void DescribeBlueprintInstancesAsync(const Model::DescribeBlueprintInstancesRequest& request, const DescribeBlueprintInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlueprintInstancesOutcomeCallable DescribeBlueprintInstancesCallable(const Model::DescribeBlueprintInstancesRequest& request);

                /**
                 *本接口（DescribeBlueprints）用于查询镜像信息。
                 * @param req DescribeBlueprintsRequest
                 * @return DescribeBlueprintsOutcome
                 */
                DescribeBlueprintsOutcome DescribeBlueprints(const Model::DescribeBlueprintsRequest &request);
                void DescribeBlueprintsAsync(const Model::DescribeBlueprintsRequest& request, const DescribeBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlueprintsOutcomeCallable DescribeBlueprintsCallable(const Model::DescribeBlueprintsRequest& request);

                /**
                 *本接口（DescribeBundleDiscount）用于查询套餐折扣信息。
                 * @param req DescribeBundleDiscountRequest
                 * @return DescribeBundleDiscountOutcome
                 */
                DescribeBundleDiscountOutcome DescribeBundleDiscount(const Model::DescribeBundleDiscountRequest &request);
                void DescribeBundleDiscountAsync(const Model::DescribeBundleDiscountRequest& request, const DescribeBundleDiscountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBundleDiscountOutcomeCallable DescribeBundleDiscountCallable(const Model::DescribeBundleDiscountRequest& request);

                /**
                 *本接口（DescribeBundles）用于查询套餐信息。
                 * @param req DescribeBundlesRequest
                 * @return DescribeBundlesOutcome
                 */
                DescribeBundlesOutcome DescribeBundles(const Model::DescribeBundlesRequest &request);
                void DescribeBundlesAsync(const Model::DescribeBundlesRequest& request, const DescribeBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBundlesOutcomeCallable DescribeBundlesCallable(const Model::DescribeBundlesRequest& request);

                /**
                 *本接口 (DescribeCcnAttachedInstances) 用于查询云联网关联的实例信息。
                 * @param req DescribeCcnAttachedInstancesRequest
                 * @return DescribeCcnAttachedInstancesOutcome
                 */
                DescribeCcnAttachedInstancesOutcome DescribeCcnAttachedInstances(const Model::DescribeCcnAttachedInstancesRequest &request);
                void DescribeCcnAttachedInstancesAsync(const Model::DescribeCcnAttachedInstancesRequest& request, const DescribeCcnAttachedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnAttachedInstancesOutcomeCallable DescribeCcnAttachedInstancesCallable(const Model::DescribeCcnAttachedInstancesRequest& request);

                /**
                 *本接口（DescribeDiskBackups）用于查询云硬盘备份点的详细信息。
                 * @param req DescribeDiskBackupsRequest
                 * @return DescribeDiskBackupsOutcome
                 */
                DescribeDiskBackupsOutcome DescribeDiskBackups(const Model::DescribeDiskBackupsRequest &request);
                void DescribeDiskBackupsAsync(const Model::DescribeDiskBackupsRequest& request, const DescribeDiskBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskBackupsOutcomeCallable DescribeDiskBackupsCallable(const Model::DescribeDiskBackupsRequest& request);

                /**
                 *本接口（DescribeDiskBackupsDeniedActions）用于查询一个或多个云硬盘备份点的操作限制列表信息。
                 * @param req DescribeDiskBackupsDeniedActionsRequest
                 * @return DescribeDiskBackupsDeniedActionsOutcome
                 */
                DescribeDiskBackupsDeniedActionsOutcome DescribeDiskBackupsDeniedActions(const Model::DescribeDiskBackupsDeniedActionsRequest &request);
                void DescribeDiskBackupsDeniedActionsAsync(const Model::DescribeDiskBackupsDeniedActionsRequest& request, const DescribeDiskBackupsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskBackupsDeniedActionsOutcomeCallable DescribeDiskBackupsDeniedActionsCallable(const Model::DescribeDiskBackupsDeniedActionsRequest& request);

                /**
                 *本接口（DescribeDiskConfigs）用于查询云硬盘配置。
                 * @param req DescribeDiskConfigsRequest
                 * @return DescribeDiskConfigsOutcome
                 */
                DescribeDiskConfigsOutcome DescribeDiskConfigs(const Model::DescribeDiskConfigsRequest &request);
                void DescribeDiskConfigsAsync(const Model::DescribeDiskConfigsRequest& request, const DescribeDiskConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskConfigsOutcomeCallable DescribeDiskConfigsCallable(const Model::DescribeDiskConfigsRequest& request);

                /**
                 *本接口(DescribeDiskDiscount)用于查询云硬盘折扣信息。
                 * @param req DescribeDiskDiscountRequest
                 * @return DescribeDiskDiscountOutcome
                 */
                DescribeDiskDiscountOutcome DescribeDiskDiscount(const Model::DescribeDiskDiscountRequest &request);
                void DescribeDiskDiscountAsync(const Model::DescribeDiskDiscountRequest& request, const DescribeDiskDiscountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskDiscountOutcomeCallable DescribeDiskDiscountCallable(const Model::DescribeDiskDiscountRequest& request);

                /**
                 *本接口（DescribeDisks）用于查询云硬盘信息。
                 * @param req DescribeDisksRequest
                 * @return DescribeDisksOutcome
                 */
                DescribeDisksOutcome DescribeDisks(const Model::DescribeDisksRequest &request);
                void DescribeDisksAsync(const Model::DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisksOutcomeCallable DescribeDisksCallable(const Model::DescribeDisksRequest& request);

                /**
                 *本接口（DescribeDisksDeniedActions）用于查询一个或多个云硬盘的操作限制列表信息。
                 * @param req DescribeDisksDeniedActionsRequest
                 * @return DescribeDisksDeniedActionsOutcome
                 */
                DescribeDisksDeniedActionsOutcome DescribeDisksDeniedActions(const Model::DescribeDisksDeniedActionsRequest &request);
                void DescribeDisksDeniedActionsAsync(const Model::DescribeDisksDeniedActionsRequest& request, const DescribeDisksDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisksDeniedActionsOutcomeCallable DescribeDisksDeniedActionsCallable(const Model::DescribeDisksDeniedActionsRequest& request);

                /**
                 *本接口（DescribeDisksReturnable）用于查询云硬盘是否可退还。
                 * @param req DescribeDisksReturnableRequest
                 * @return DescribeDisksReturnableOutcome
                 */
                DescribeDisksReturnableOutcome DescribeDisksReturnable(const Model::DescribeDisksReturnableRequest &request);
                void DescribeDisksReturnableAsync(const Model::DescribeDisksReturnableRequest& request, const DescribeDisksReturnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisksReturnableOutcomeCallable DescribeDisksReturnableCallable(const Model::DescribeDisksReturnableRequest& request);

                /**
                 *本接口（DescribeFirewallRules）用于查询实例的防火墙规则。
                 * @param req DescribeFirewallRulesRequest
                 * @return DescribeFirewallRulesOutcome
                 */
                DescribeFirewallRulesOutcome DescribeFirewallRules(const Model::DescribeFirewallRulesRequest &request);
                void DescribeFirewallRulesAsync(const Model::DescribeFirewallRulesRequest& request, const DescribeFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirewallRulesOutcomeCallable DescribeFirewallRulesCallable(const Model::DescribeFirewallRulesRequest& request);

                /**
                 *本接口（DescribeFirewallRulesTemplate）用于查询防火墙规则模板。
                 * @param req DescribeFirewallRulesTemplateRequest
                 * @return DescribeFirewallRulesTemplateOutcome
                 */
                DescribeFirewallRulesTemplateOutcome DescribeFirewallRulesTemplate(const Model::DescribeFirewallRulesTemplateRequest &request);
                void DescribeFirewallRulesTemplateAsync(const Model::DescribeFirewallRulesTemplateRequest& request, const DescribeFirewallRulesTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirewallRulesTemplateOutcomeCallable DescribeFirewallRulesTemplateCallable(const Model::DescribeFirewallRulesTemplateRequest& request);

                /**
                 *本接口（DescribeGeneralResourceQuotas）用于查询通用资源配额信息。
                 * @param req DescribeGeneralResourceQuotasRequest
                 * @return DescribeGeneralResourceQuotasOutcome
                 */
                DescribeGeneralResourceQuotasOutcome DescribeGeneralResourceQuotas(const Model::DescribeGeneralResourceQuotasRequest &request);
                void DescribeGeneralResourceQuotasAsync(const Model::DescribeGeneralResourceQuotasRequest& request, const DescribeGeneralResourceQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGeneralResourceQuotasOutcomeCallable DescribeGeneralResourceQuotasCallable(const Model::DescribeGeneralResourceQuotasRequest& request);

                /**
                 *本接口用于查询实例默认登录密钥属性。
                 * @param req DescribeInstanceLoginKeyPairAttributeRequest
                 * @return DescribeInstanceLoginKeyPairAttributeOutcome
                 */
                DescribeInstanceLoginKeyPairAttributeOutcome DescribeInstanceLoginKeyPairAttribute(const Model::DescribeInstanceLoginKeyPairAttributeRequest &request);
                void DescribeInstanceLoginKeyPairAttributeAsync(const Model::DescribeInstanceLoginKeyPairAttributeRequest& request, const DescribeInstanceLoginKeyPairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLoginKeyPairAttributeOutcomeCallable DescribeInstanceLoginKeyPairAttributeCallable(const Model::DescribeInstanceLoginKeyPairAttributeRequest& request);

                /**
                 *本接口 ( DescribeInstanceVncUrl ) 用于查询实例管理终端地址，获取的地址可用于实例的 VNC 登录。

* 处于 `STOPPED` 状态的机器无法使用此功能。
* 管理终端地址的有效期为 15 秒，调用接口成功后如果 15 秒内不使用该链接进行访问，管理终端地址自动失效，您需要重新查询。
* 管理终端地址一旦被访问，将自动失效，您需要重新查询。
* 如果连接断开，每分钟内重新连接的次数不能超过 30 次。
* 参数 `InstanceVncUrl` ：调用接口成功后会返回的 `InstanceVncUrl` 的值。
获取到 `InstanceVncUrl` 后，您需要在链接 `https://img.qcloud.com/qcloud/app/active_vnc/index.html?` 末尾加上参数 `InstanceVncUrl=xxxx`。
 最后组成的 URL 格式如下：

```
https://img.qcloud.com/qcloud/app/active_vnc/index.html?InstanceVncUrl=wss%3A%2F%2Fbjvnc.qcloud.com%3A26789%2Fvnc%3Fs%3DaHpjWnRVMFNhYmxKdDM5MjRHNlVTSVQwajNUSW0wb2tBbmFtREFCTmFrcy8vUUNPMG0wSHZNOUUxRm5PMmUzWmFDcWlOdDJIbUJxSTZDL0RXcHZxYnZZMmRkWWZWcEZia2lyb09XMzdKNmM9
```

                 * @param req DescribeInstanceVncUrlRequest
                 * @return DescribeInstanceVncUrlOutcome
                 */
                DescribeInstanceVncUrlOutcome DescribeInstanceVncUrl(const Model::DescribeInstanceVncUrlRequest &request);
                void DescribeInstanceVncUrlAsync(const Model::DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceVncUrlOutcomeCallable DescribeInstanceVncUrlCallable(const Model::DescribeInstanceVncUrlRequest& request);

                /**
                 *本接口（DescribeInstances）用于查询一个或多个实例的详细信息。

* 可以根据实例 ID、实例名称或者实例的内网 IP 查询实例的详细信息。
* 过滤信息详细请见过滤器 [Filters](https://cloud.tencent.com/document/product/1207/47576#Filter) 。
* 如果参数为空，返回当前用户一定数量（Limit 所指定的数量，默认为 20）的实例。
* 支持查询实例的最新操作（LatestOperation）以及最新操作状态（LatestOperationState）。
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *本接口（DescribeInstancesDeniedActions）用于查询一个或多个实例的操作限制列表信息。
                 * @param req DescribeInstancesDeniedActionsRequest
                 * @return DescribeInstancesDeniedActionsOutcome
                 */
                DescribeInstancesDeniedActionsOutcome DescribeInstancesDeniedActions(const Model::DescribeInstancesDeniedActionsRequest &request);
                void DescribeInstancesDeniedActionsAsync(const Model::DescribeInstancesDeniedActionsRequest& request, const DescribeInstancesDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesDeniedActionsOutcomeCallable DescribeInstancesDeniedActionsCallable(const Model::DescribeInstancesDeniedActionsRequest& request);

                /**
                 *本接口(DescribeInstancesDiskNum)用于查询实例挂载云硬盘数量。
                 * @param req DescribeInstancesDiskNumRequest
                 * @return DescribeInstancesDiskNumOutcome
                 */
                DescribeInstancesDiskNumOutcome DescribeInstancesDiskNum(const Model::DescribeInstancesDiskNumRequest &request);
                void DescribeInstancesDiskNumAsync(const Model::DescribeInstancesDiskNumRequest& request, const DescribeInstancesDiskNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesDiskNumOutcomeCallable DescribeInstancesDiskNumCallable(const Model::DescribeInstancesDiskNumRequest& request);

                /**
                 *本接口（DescribeInstancesReturnable）用于查询实例是否可退还。
                 * @param req DescribeInstancesReturnableRequest
                 * @return DescribeInstancesReturnableOutcome
                 */
                DescribeInstancesReturnableOutcome DescribeInstancesReturnable(const Model::DescribeInstancesReturnableRequest &request);
                void DescribeInstancesReturnableAsync(const Model::DescribeInstancesReturnableRequest& request, const DescribeInstancesReturnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesReturnableOutcomeCallable DescribeInstancesReturnableCallable(const Model::DescribeInstancesReturnableRequest& request);

                /**
                 *本接口（DescribeInstancesTrafficPackages）用于查询一个或多个实例的流量包详情。
                 * @param req DescribeInstancesTrafficPackagesRequest
                 * @return DescribeInstancesTrafficPackagesOutcome
                 */
                DescribeInstancesTrafficPackagesOutcome DescribeInstancesTrafficPackages(const Model::DescribeInstancesTrafficPackagesRequest &request);
                void DescribeInstancesTrafficPackagesAsync(const Model::DescribeInstancesTrafficPackagesRequest& request, const DescribeInstancesTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesTrafficPackagesOutcomeCallable DescribeInstancesTrafficPackagesCallable(const Model::DescribeInstancesTrafficPackagesRequest& request);

                /**
                 *本接口 (DescribeKeyPairs) 用于查询用户密钥对信息。
                 * @param req DescribeKeyPairsRequest
                 * @return DescribeKeyPairsOutcome
                 */
                DescribeKeyPairsOutcome DescribeKeyPairs(const Model::DescribeKeyPairsRequest &request);
                void DescribeKeyPairsAsync(const Model::DescribeKeyPairsRequest& request, const DescribeKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeyPairsOutcomeCallable DescribeKeyPairsCallable(const Model::DescribeKeyPairsRequest& request);

                /**
                 *本接口（DescribeModifyInstanceBundles）用于查询实例可变更套餐列表。
                 * @param req DescribeModifyInstanceBundlesRequest
                 * @return DescribeModifyInstanceBundlesOutcome
                 */
                DescribeModifyInstanceBundlesOutcome DescribeModifyInstanceBundles(const Model::DescribeModifyInstanceBundlesRequest &request);
                void DescribeModifyInstanceBundlesAsync(const Model::DescribeModifyInstanceBundlesRequest& request, const DescribeModifyInstanceBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModifyInstanceBundlesOutcomeCallable DescribeModifyInstanceBundlesCallable(const Model::DescribeModifyInstanceBundlesRequest& request);

                /**
                 *本接口（DescribeRegions）用于查询地域信息。
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *本接口（DescribeResetInstanceBlueprints）查询重置实例的镜像信息。
                 * @param req DescribeResetInstanceBlueprintsRequest
                 * @return DescribeResetInstanceBlueprintsOutcome
                 */
                DescribeResetInstanceBlueprintsOutcome DescribeResetInstanceBlueprints(const Model::DescribeResetInstanceBlueprintsRequest &request);
                void DescribeResetInstanceBlueprintsAsync(const Model::DescribeResetInstanceBlueprintsRequest& request, const DescribeResetInstanceBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResetInstanceBlueprintsOutcomeCallable DescribeResetInstanceBlueprintsCallable(const Model::DescribeResetInstanceBlueprintsRequest& request);

                /**
                 *本接口(DescribeScenes)用于查看使用场景列表。
                 * @param req DescribeScenesRequest
                 * @return DescribeScenesOutcome
                 */
                DescribeScenesOutcome DescribeScenes(const Model::DescribeScenesRequest &request);
                void DescribeScenesAsync(const Model::DescribeScenesRequest& request, const DescribeScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScenesOutcomeCallable DescribeScenesCallable(const Model::DescribeScenesRequest& request);

                /**
                 *本接口（DescribeSnapshots）用于查询快照的详细信息。
                 * @param req DescribeSnapshotsRequest
                 * @return DescribeSnapshotsOutcome
                 */
                DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest &request);
                void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request);

                /**
                 *本接口（DescribeSnapshotsDeniedActions）用于查询一个或多个快照的操作限制列表信息。
                 * @param req DescribeSnapshotsDeniedActionsRequest
                 * @return DescribeSnapshotsDeniedActionsOutcome
                 */
                DescribeSnapshotsDeniedActionsOutcome DescribeSnapshotsDeniedActions(const Model::DescribeSnapshotsDeniedActionsRequest &request);
                void DescribeSnapshotsDeniedActionsAsync(const Model::DescribeSnapshotsDeniedActionsRequest& request, const DescribeSnapshotsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotsDeniedActionsOutcomeCallable DescribeSnapshotsDeniedActionsCallable(const Model::DescribeSnapshotsDeniedActionsRequest& request);

                /**
                 *查询地域下可用区
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *本接口 (AttachCcn) 用于解除与云联网的关联。
                 * @param req DetachCcnRequest
                 * @return DetachCcnOutcome
                 */
                DetachCcnOutcome DetachCcn(const Model::DetachCcnRequest &request);
                void DetachCcnAsync(const Model::DetachCcnRequest& request, const DetachCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachCcnOutcomeCallable DetachCcnCallable(const Model::DetachCcnRequest& request);

                /**
                 *本接口（DetachDisks）用于卸载一个或多个云硬盘。
                 * @param req DetachDisksRequest
                 * @return DetachDisksOutcome
                 */
                DetachDisksOutcome DetachDisks(const Model::DetachDisksRequest &request);
                void DetachDisksAsync(const Model::DetachDisksRequest& request, const DetachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachDisksOutcomeCallable DetachDisksCallable(const Model::DetachDisksRequest& request);

                /**
                 *本接口（DisassociateInstancesKeyPairs）用于解除实例与指定密钥对的绑定关系。

* 只支持 [RUNNING, STOPPED] 状态的 LINUX_UNIX 操作系统的实例。处于 RUNNING 状态的实例会强制关机，然后解绑。
* 解绑密钥后，实例可以通过原来设置的密码登录。
* 如果原来没有设置密码，解绑后将无法使用 SSH 登录。可以调用 ResetInstancesPassword 接口来设置登录密码。
* 支持批量操作。每次请求批量实例的上限为 100。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
                 * @param req DisassociateInstancesKeyPairsRequest
                 * @return DisassociateInstancesKeyPairsOutcome
                 */
                DisassociateInstancesKeyPairsOutcome DisassociateInstancesKeyPairs(const Model::DisassociateInstancesKeyPairsRequest &request);
                void DisassociateInstancesKeyPairsAsync(const Model::DisassociateInstancesKeyPairsRequest& request, const DisassociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateInstancesKeyPairsOutcomeCallable DisassociateInstancesKeyPairsCallable(const Model::DisassociateInstancesKeyPairsRequest& request);

                /**
                 *本接口（ImportKeyPair）用于导入用户指定密钥对。
                 * @param req ImportKeyPairRequest
                 * @return ImportKeyPairOutcome
                 */
                ImportKeyPairOutcome ImportKeyPair(const Model::ImportKeyPairRequest &request);
                void ImportKeyPairAsync(const Model::ImportKeyPairRequest& request, const ImportKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportKeyPairOutcomeCallable ImportKeyPairCallable(const Model::ImportKeyPairRequest& request);

                /**
                 *本接口 (InquirePriceCreateBlueprint) 用于创建镜像询价。
                 * @param req InquirePriceCreateBlueprintRequest
                 * @return InquirePriceCreateBlueprintOutcome
                 */
                InquirePriceCreateBlueprintOutcome InquirePriceCreateBlueprint(const Model::InquirePriceCreateBlueprintRequest &request);
                void InquirePriceCreateBlueprintAsync(const Model::InquirePriceCreateBlueprintRequest& request, const InquirePriceCreateBlueprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateBlueprintOutcomeCallable InquirePriceCreateBlueprintCallable(const Model::InquirePriceCreateBlueprintRequest& request);

                /**
                 *本接口（InquirePriceCreateDisks）用于新购云硬盘询价。
                 * @param req InquirePriceCreateDisksRequest
                 * @return InquirePriceCreateDisksOutcome
                 */
                InquirePriceCreateDisksOutcome InquirePriceCreateDisks(const Model::InquirePriceCreateDisksRequest &request);
                void InquirePriceCreateDisksAsync(const Model::InquirePriceCreateDisksRequest& request, const InquirePriceCreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateDisksOutcomeCallable InquirePriceCreateDisksCallable(const Model::InquirePriceCreateDisksRequest& request);

                /**
                 *本接口（InquiryPriceCreateInstances）用于创建实例询价。
                 * @param req InquirePriceCreateInstancesRequest
                 * @return InquirePriceCreateInstancesOutcome
                 */
                InquirePriceCreateInstancesOutcome InquirePriceCreateInstances(const Model::InquirePriceCreateInstancesRequest &request);
                void InquirePriceCreateInstancesAsync(const Model::InquirePriceCreateInstancesRequest& request, const InquirePriceCreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateInstancesOutcomeCallable InquirePriceCreateInstancesCallable(const Model::InquirePriceCreateInstancesRequest& request);

                /**
                 *本接口（InquirePriceRenewDisks）用于续费云硬盘询价。
                 * @param req InquirePriceRenewDisksRequest
                 * @return InquirePriceRenewDisksOutcome
                 */
                InquirePriceRenewDisksOutcome InquirePriceRenewDisks(const Model::InquirePriceRenewDisksRequest &request);
                void InquirePriceRenewDisksAsync(const Model::InquirePriceRenewDisksRequest& request, const InquirePriceRenewDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceRenewDisksOutcomeCallable InquirePriceRenewDisksCallable(const Model::InquirePriceRenewDisksRequest& request);

                /**
                 *本接口（InquirePriceRenewInstances）用于续费实例询价。
                 * @param req InquirePriceRenewInstancesRequest
                 * @return InquirePriceRenewInstancesOutcome
                 */
                InquirePriceRenewInstancesOutcome InquirePriceRenewInstances(const Model::InquirePriceRenewInstancesRequest &request);
                void InquirePriceRenewInstancesAsync(const Model::InquirePriceRenewInstancesRequest& request, const InquirePriceRenewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceRenewInstancesOutcomeCallable InquirePriceRenewInstancesCallable(const Model::InquirePriceRenewInstancesRequest& request);

                /**
                 *本接口(IsolateInstances)用于退还一个或多个轻量应用服务器实例。
* 只有状态为 RUNNING 或 STOPPED 的实例才可以进行此操作。
* 接口调用成功后，实例会进入SHUTDOWN 状态。
* 支持批量操作。每次请求批量资源（包括实例与数据盘）的上限为 20。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
                 * @param req IsolateInstancesRequest
                 * @return IsolateInstancesOutcome
                 */
                IsolateInstancesOutcome IsolateInstances(const Model::IsolateInstancesRequest &request);
                void IsolateInstancesAsync(const Model::IsolateInstancesRequest& request, const IsolateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateInstancesOutcomeCallable IsolateInstancesCallable(const Model::IsolateInstancesRequest& request);

                /**
                 *本接口 (ModifyBlueprintAttribute) 用于修改镜像属性。
                 * @param req ModifyBlueprintAttributeRequest
                 * @return ModifyBlueprintAttributeOutcome
                 */
                ModifyBlueprintAttributeOutcome ModifyBlueprintAttribute(const Model::ModifyBlueprintAttributeRequest &request);
                void ModifyBlueprintAttributeAsync(const Model::ModifyBlueprintAttributeRequest& request, const ModifyBlueprintAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlueprintAttributeOutcomeCallable ModifyBlueprintAttributeCallable(const Model::ModifyBlueprintAttributeRequest& request);

                /**
                 *本接口 (ModifyDiskBackupsAttribute) 用于修改云硬盘备份点属性。
                 * @param req ModifyDiskBackupsAttributeRequest
                 * @return ModifyDiskBackupsAttributeOutcome
                 */
                ModifyDiskBackupsAttributeOutcome ModifyDiskBackupsAttribute(const Model::ModifyDiskBackupsAttributeRequest &request);
                void ModifyDiskBackupsAttributeAsync(const Model::ModifyDiskBackupsAttributeRequest& request, const ModifyDiskBackupsAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDiskBackupsAttributeOutcomeCallable ModifyDiskBackupsAttributeCallable(const Model::ModifyDiskBackupsAttributeRequest& request);

                /**
                 *本接口(ModifyDisksAttribute)用于修改云硬盘属性。
                 * @param req ModifyDisksAttributeRequest
                 * @return ModifyDisksAttributeOutcome
                 */
                ModifyDisksAttributeOutcome ModifyDisksAttribute(const Model::ModifyDisksAttributeRequest &request);
                void ModifyDisksAttributeAsync(const Model::ModifyDisksAttributeRequest& request, const ModifyDisksAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDisksAttributeOutcomeCallable ModifyDisksAttributeCallable(const Model::ModifyDisksAttributeRequest& request);

                /**
                 *本接口（ModifyDisksRenewFlag）用于修改云硬盘续费标识。
                 * @param req ModifyDisksRenewFlagRequest
                 * @return ModifyDisksRenewFlagOutcome
                 */
                ModifyDisksRenewFlagOutcome ModifyDisksRenewFlag(const Model::ModifyDisksRenewFlagRequest &request);
                void ModifyDisksRenewFlagAsync(const Model::ModifyDisksRenewFlagRequest& request, const ModifyDisksRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDisksRenewFlagOutcomeCallable ModifyDisksRenewFlagCallable(const Model::ModifyDisksRenewFlagRequest& request);

                /**
                 *本接口（ModifyFirewallRuleDescription）用于修改单条防火墙规则描述。

* FirewallVersion 用于指定要操作的防火墙的版本。传入 FirewallVersion 版本号若不等于当前防火墙的最新版本，将返回失败；若不传 FirewallVersion 则直接修改防火墙规则备注。

在 FirewallRule 参数中：
* Protocol 字段支持输入 TCP，UDP，ICMP，ALL。
* Port 字段允许输入 ALL，或者一个单独的端口号，或者用逗号分隔的离散端口号，或者用减号分隔的两个端口号代表的端口范围。当 Port 为范围时，减号分隔的第一个端口号小于第二个端口号。当 Protocol 字段不是 TCP 或 UDP 时，Port 字段只能为空或 ALL。Port 字段长度不得超过 64。
* CidrBlock 字段允许输入符合 cidr 格式标准的任意字符串。租户之间网络隔离规则优先于防火墙中的内网规则。
* Action 字段只允许输入 ACCEPT 或 DROP。
* FirewallRuleDescription 字段长度不得超过 64。
                 * @param req ModifyFirewallRuleDescriptionRequest
                 * @return ModifyFirewallRuleDescriptionOutcome
                 */
                ModifyFirewallRuleDescriptionOutcome ModifyFirewallRuleDescription(const Model::ModifyFirewallRuleDescriptionRequest &request);
                void ModifyFirewallRuleDescriptionAsync(const Model::ModifyFirewallRuleDescriptionRequest& request, const ModifyFirewallRuleDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFirewallRuleDescriptionOutcomeCallable ModifyFirewallRuleDescriptionCallable(const Model::ModifyFirewallRuleDescriptionRequest& request);

                /**
                 *本接口（ModifyFirewallRules）用于重置实例防火墙规则。

本接口先删除当前实例的所有防火墙规则，然后添加新的规则。

* FirewallVersion 用于指定要操作的防火墙的版本。传入 FirewallVersion 版本号若不等于当前防火墙的最新版本，将返回失败；若不传 FirewallVersion 则直接重置防火墙规则。

在 FirewallRules 参数中：
* Protocol 字段支持输入 TCP，UDP，ICMP，ALL。
* Port 字段允许输入 ALL，或者一个单独的端口号，或者用逗号分隔的离散端口号，或者用减号分隔的两个端口号代表的端口范围。当 Port 为范围时，减号分隔的第一个端口号小于第二个端口号。当 Protocol 字段不是 TCP 或 UDP 时，Port 字段只能为空或 ALL。Port 字段长度不得超过 64。
* CidrBlock 字段允许输入符合 cidr 格式标准的任意字符串。租户之间网络隔离规则优先于防火墙中的内网规则。
* Action 字段只允许输入 ACCEPT 或 DROP。
* FirewallRuleDescription 字段长度不得超过 64。
                 * @param req ModifyFirewallRulesRequest
                 * @return ModifyFirewallRulesOutcome
                 */
                ModifyFirewallRulesOutcome ModifyFirewallRules(const Model::ModifyFirewallRulesRequest &request);
                void ModifyFirewallRulesAsync(const Model::ModifyFirewallRulesRequest& request, const ModifyFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFirewallRulesOutcomeCallable ModifyFirewallRulesCallable(const Model::ModifyFirewallRulesRequest& request);

                /**
                 *本接口（ModifyInstancesAttribute）用于修改实例的属性。
* “实例名称”仅为方便用户自己管理之用。
* 支持批量操作。每次请求批量实例的上限为 100。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
                 * @param req ModifyInstancesAttributeRequest
                 * @return ModifyInstancesAttributeOutcome
                 */
                ModifyInstancesAttributeOutcome ModifyInstancesAttribute(const Model::ModifyInstancesAttributeRequest &request);
                void ModifyInstancesAttributeAsync(const Model::ModifyInstancesAttributeRequest& request, const ModifyInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesAttributeOutcomeCallable ModifyInstancesAttributeCallable(const Model::ModifyInstancesAttributeRequest& request);

                /**
                 *本接口(ModifyInstancesBundle)用于变更一个或多个轻量应用服务器实例套餐。
* 只有状态为 RUNNING，STOPPED的实例才可以进行此操作。
* 支持批量操作。每次请求批量实例的上限为 30。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
                 * @param req ModifyInstancesBundleRequest
                 * @return ModifyInstancesBundleOutcome
                 */
                ModifyInstancesBundleOutcome ModifyInstancesBundle(const Model::ModifyInstancesBundleRequest &request);
                void ModifyInstancesBundleAsync(const Model::ModifyInstancesBundleRequest& request, const ModifyInstancesBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesBundleOutcomeCallable ModifyInstancesBundleCallable(const Model::ModifyInstancesBundleRequest& request);

                /**
                 *本接口用于设置实例默认登录密钥对属性。


                 * @param req ModifyInstancesLoginKeyPairAttributeRequest
                 * @return ModifyInstancesLoginKeyPairAttributeOutcome
                 */
                ModifyInstancesLoginKeyPairAttributeOutcome ModifyInstancesLoginKeyPairAttribute(const Model::ModifyInstancesLoginKeyPairAttributeRequest &request);
                void ModifyInstancesLoginKeyPairAttributeAsync(const Model::ModifyInstancesLoginKeyPairAttributeRequest& request, const ModifyInstancesLoginKeyPairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesLoginKeyPairAttributeOutcomeCallable ModifyInstancesLoginKeyPairAttributeCallable(const Model::ModifyInstancesLoginKeyPairAttributeRequest& request);

                /**
                 *本接口 (ModifyInstancesRenewFlag) 用于修改包年包月实例续费标识。

* 实例被标识为自动续费后，每次在实例到期时，会自动续费一个月。
* 支持批量操作。每次请求批量实例的上限为100。
* 实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表操作成功。
                 * @param req ModifyInstancesRenewFlagRequest
                 * @return ModifyInstancesRenewFlagOutcome
                 */
                ModifyInstancesRenewFlagOutcome ModifyInstancesRenewFlag(const Model::ModifyInstancesRenewFlagRequest &request);
                void ModifyInstancesRenewFlagAsync(const Model::ModifyInstancesRenewFlagRequest& request, const ModifyInstancesRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesRenewFlagOutcomeCallable ModifyInstancesRenewFlagCallable(const Model::ModifyInstancesRenewFlagRequest& request);

                /**
                 *本接口（ModifySnapshotAttribute）用于修改指定快照的属性。
<li>“快照名称”仅为方便用户自己管理之用。</li>
                 * @param req ModifySnapshotAttributeRequest
                 * @return ModifySnapshotAttributeOutcome
                 */
                ModifySnapshotAttributeOutcome ModifySnapshotAttribute(const Model::ModifySnapshotAttributeRequest &request);
                void ModifySnapshotAttributeAsync(const Model::ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotAttributeOutcomeCallable ModifySnapshotAttributeCallable(const Model::ModifySnapshotAttributeRequest& request);

                /**
                 *本接口（RebootInstances）用于重启实例。

* 只有状态为 RUNNING 的实例才可以进行此操作。
* 接口调用成功时，实例会进入 REBOOTING 状态；重启实例成功时，实例会进入 RUNNING 状态。
* 支持批量操作，每次请求批量实例的上限为 100。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
                 * @param req RebootInstancesRequest
                 * @return RebootInstancesOutcome
                 */
                RebootInstancesOutcome RebootInstances(const Model::RebootInstancesRequest &request);
                void RebootInstancesAsync(const Model::RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebootInstancesOutcomeCallable RebootInstancesCallable(const Model::RebootInstancesRequest& request);

                /**
                 *本接口(RenewInstances)用于续费一个或多个轻量应用服务器实例。
* 只有状态为 RUNNING，STOPPED 或 SHUTDOWN 的实例才可以进行此操作。
* 支持批量操作。每次请求批量实例的上限为 100。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
                 * @param req RenewInstancesRequest
                 * @return RenewInstancesOutcome
                 */
                RenewInstancesOutcome RenewInstances(const Model::RenewInstancesRequest &request);
                void RenewInstancesAsync(const Model::RenewInstancesRequest& request, const RenewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewInstancesOutcomeCallable RenewInstancesCallable(const Model::RenewInstancesRequest& request);

                /**
                 *本接口 (ResetAttachCcn) 用于关联云联网实例申请过期时，重新申请关联操作。
                 * @param req ResetAttachCcnRequest
                 * @return ResetAttachCcnOutcome
                 */
                ResetAttachCcnOutcome ResetAttachCcn(const Model::ResetAttachCcnRequest &request);
                void ResetAttachCcnAsync(const Model::ResetAttachCcnRequest& request, const ResetAttachCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAttachCcnOutcomeCallable ResetAttachCcnCallable(const Model::ResetAttachCcnRequest& request);

                /**
                 *本接口（ResetInstance）用于重装指定实例上的镜像。

* 如果指定了 BlueprintId 参数，则使用指定的镜像重装；否则按照当前实例使用的镜像进行重装。
* 系统盘将会被格式化，并重置；请确保系统盘中无重要文件。
* 目前不支持实例使用该接口实现 LINUX_UNIX 和 WINDOWS 操作系统切换。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
                 * @param req ResetInstanceRequest
                 * @return ResetInstanceOutcome
                 */
                ResetInstanceOutcome ResetInstance(const Model::ResetInstanceRequest &request);
                void ResetInstanceAsync(const Model::ResetInstanceRequest& request, const ResetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstanceOutcomeCallable ResetInstanceCallable(const Model::ResetInstanceRequest& request);

                /**
                 *本接口（ResetInstancesPassword）用于将实例操作系统的密码重置为用户指定的密码。
* 只修改管理员帐号的密码。实例的操作系统不同，管理员帐号也会不一样（Windows 为 Administrator，Ubuntu 为 ubuntu ，其它系统为 root）。
* 支持批量操作。将多个实例操作系统的密码重置为相同的密码。每次请求批量实例的上限为 100。
* 建议对运行中的实例先手动关机，然后再进行密码重置。如实例处于运行中状态，本接口操作过程中会对实例进行关机操作，尝试正常关机失败后进行强制关机。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
注意：强制关机的效果等同于关闭物理计算机的电源开关。强制关机可能会导致数据丢失或文件系统损坏。
                 * @param req ResetInstancesPasswordRequest
                 * @return ResetInstancesPasswordOutcome
                 */
                ResetInstancesPasswordOutcome ResetInstancesPassword(const Model::ResetInstancesPasswordRequest &request);
                void ResetInstancesPasswordAsync(const Model::ResetInstancesPasswordRequest& request, const ResetInstancesPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesPasswordOutcomeCallable ResetInstancesPasswordCallable(const Model::ResetInstancesPasswordRequest& request);

                /**
                 *本接口（StartInstances）用于启动一个或多个实例。

* 只有状态为 STOPPED 的实例才可以进行此操作。
* 接口调用成功时，实例会进入 STARTING 状态；启动实例成功时，实例会进入 RUNNING 状态。
* 支持批量操作。每次请求批量实例的上限为 100。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
                 * @param req StartInstancesRequest
                 * @return StartInstancesOutcome
                 */
                StartInstancesOutcome StartInstances(const Model::StartInstancesRequest &request);
                void StartInstancesAsync(const Model::StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartInstancesOutcomeCallable StartInstancesCallable(const Model::StartInstancesRequest& request);

                /**
                 *本接口（StopInstances）用于关闭一个或多个实例。
* 只有状态为 RUNNING 的实例才可以进行此操作。
* 接口调用成功时，实例会进入 STOPPING 状态；关闭实例成功时，实例会进入 STOPPED 状态。
* 支持批量操作。每次请求批量实例的上限为 100。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
                 * @param req StopInstancesRequest
                 * @return StopInstancesOutcome
                 */
                StopInstancesOutcome StopInstances(const Model::StopInstancesRequest &request);
                void StopInstancesAsync(const Model::StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopInstancesOutcomeCallable StopInstancesCallable(const Model::StopInstancesRequest& request);

                /**
                 *本接口（TerminateDisks）用于销毁一个或多个云硬盘。
                 * @param req TerminateDisksRequest
                 * @return TerminateDisksOutcome
                 */
                TerminateDisksOutcome TerminateDisks(const Model::TerminateDisksRequest &request);
                void TerminateDisksAsync(const Model::TerminateDisksRequest& request, const TerminateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateDisksOutcomeCallable TerminateDisksCallable(const Model::TerminateDisksRequest& request);

                /**
                 *本接口 (TerminateInstances) 用于销毁实例。

* 处于 SHUTDOWN 状态的实例，可通过本接口销毁，且不可恢复。
* 支持批量操作，每次请求批量实例的上限为100。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态 (LatestOperationState) 为“SUCCESS”，则代表操作成功。
                 * @param req TerminateInstancesRequest
                 * @return TerminateInstancesOutcome
                 */
                TerminateInstancesOutcome TerminateInstances(const Model::TerminateInstancesRequest &request);
                void TerminateInstancesAsync(const Model::TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateInstancesOutcomeCallable TerminateInstancesCallable(const Model::TerminateInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_LIGHTHOUSECLIENT_H_
