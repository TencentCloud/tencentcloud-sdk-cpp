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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_DNSPODCLIENT_H_
#define TENCENTCLOUD_DNSPOD_V20210323_DNSPODCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dnspod/v20210323/model/CheckRecordSnapshotRollbackRequest.h>
#include <tencentcloud/dnspod/v20210323/model/CheckRecordSnapshotRollbackResponse.h>
#include <tencentcloud/dnspod/v20210323/model/CheckSnapshotRollbackRequest.h>
#include <tencentcloud/dnspod/v20210323/model/CheckSnapshotRollbackResponse.h>
#include <tencentcloud/dnspod/v20210323/model/CreateDealRequest.h>
#include <tencentcloud/dnspod/v20210323/model/CreateDealResponse.h>
#include <tencentcloud/dnspod/v20210323/model/CreateDomainRequest.h>
#include <tencentcloud/dnspod/v20210323/model/CreateDomainResponse.h>
#include <tencentcloud/dnspod/v20210323/model/CreateDomainAliasRequest.h>
#include <tencentcloud/dnspod/v20210323/model/CreateDomainAliasResponse.h>
#include <tencentcloud/dnspod/v20210323/model/CreateDomainBatchRequest.h>
#include <tencentcloud/dnspod/v20210323/model/CreateDomainBatchResponse.h>
#include <tencentcloud/dnspod/v20210323/model/CreateDomainGroupRequest.h>
#include <tencentcloud/dnspod/v20210323/model/CreateDomainGroupResponse.h>
#include <tencentcloud/dnspod/v20210323/model/CreateRecordRequest.h>
#include <tencentcloud/dnspod/v20210323/model/CreateRecordResponse.h>
#include <tencentcloud/dnspod/v20210323/model/CreateRecordBatchRequest.h>
#include <tencentcloud/dnspod/v20210323/model/CreateRecordBatchResponse.h>
#include <tencentcloud/dnspod/v20210323/model/CreateRecordGroupRequest.h>
#include <tencentcloud/dnspod/v20210323/model/CreateRecordGroupResponse.h>
#include <tencentcloud/dnspod/v20210323/model/CreateSnapshotRequest.h>
#include <tencentcloud/dnspod/v20210323/model/CreateSnapshotResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteDomainRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteDomainResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteDomainAliasRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteDomainAliasResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteRecordRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteRecordResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteRecordGroupRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteRecordGroupResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteShareDomainRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteShareDomainResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteSnapshotRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteSnapshotResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeBatchTaskRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeBatchTaskResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainAliasListRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainAliasListResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainAnalyticsRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainAnalyticsResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainGroupListRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainGroupListResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainListRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainListResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainLogListRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainLogListResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainPurviewRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainPurviewResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainShareInfoRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeDomainShareInfoResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordGroupListRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordGroupListResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordLineListRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordLineListResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordListRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordListResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordSnapshotRollbackResultRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordSnapshotRollbackResultResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordTypeRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeRecordTypeResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeSnapshotConfigRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeSnapshotConfigResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeSnapshotListRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeSnapshotListResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeSnapshotRollbackResultRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeSnapshotRollbackResultResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeSnapshotRollbackTaskRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeSnapshotRollbackTaskResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeSubdomainAnalyticsRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeSubdomainAnalyticsResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeUserDetailRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeUserDetailResponse.h>
#include <tencentcloud/dnspod/v20210323/model/DownloadSnapshotRequest.h>
#include <tencentcloud/dnspod/v20210323/model/DownloadSnapshotResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDomainLockRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDomainLockResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDomainOwnerRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDomainOwnerResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDomainRemarkRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDomainRemarkResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDomainStatusRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDomainStatusResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDomainUnlockRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDomainUnlockResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDynamicDNSRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyDynamicDNSResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyPackageAutoRenewRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyPackageAutoRenewResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordBatchRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordBatchResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordFieldsRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordFieldsResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordGroupRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordGroupResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordRemarkRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordRemarkResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordStatusRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordStatusResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordToGroupRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyRecordToGroupResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifySnapshotConfigRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifySnapshotConfigResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifySubdomainStatusRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifySubdomainStatusResponse.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyVasAutoRenewStatusRequest.h>
#include <tencentcloud/dnspod/v20210323/model/ModifyVasAutoRenewStatusResponse.h>
#include <tencentcloud/dnspod/v20210323/model/PayOrderWithBalanceRequest.h>
#include <tencentcloud/dnspod/v20210323/model/PayOrderWithBalanceResponse.h>
#include <tencentcloud/dnspod/v20210323/model/RollbackRecordSnapshotRequest.h>
#include <tencentcloud/dnspod/v20210323/model/RollbackRecordSnapshotResponse.h>
#include <tencentcloud/dnspod/v20210323/model/RollbackSnapshotRequest.h>
#include <tencentcloud/dnspod/v20210323/model/RollbackSnapshotResponse.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            class DnspodClient : public AbstractClient
            {
            public:
                DnspodClient(const Credential &credential, const std::string &region);
                DnspodClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CheckRecordSnapshotRollbackResponse> CheckRecordSnapshotRollbackOutcome;
                typedef std::future<CheckRecordSnapshotRollbackOutcome> CheckRecordSnapshotRollbackOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::CheckRecordSnapshotRollbackRequest&, CheckRecordSnapshotRollbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckRecordSnapshotRollbackAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckSnapshotRollbackResponse> CheckSnapshotRollbackOutcome;
                typedef std::future<CheckSnapshotRollbackOutcome> CheckSnapshotRollbackOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::CheckSnapshotRollbackRequest&, CheckSnapshotRollbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckSnapshotRollbackAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDealResponse> CreateDealOutcome;
                typedef std::future<CreateDealOutcome> CreateDealOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::CreateDealRequest&, CreateDealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDealAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainResponse> CreateDomainOutcome;
                typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::CreateDomainRequest&, CreateDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainAliasResponse> CreateDomainAliasOutcome;
                typedef std::future<CreateDomainAliasOutcome> CreateDomainAliasOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::CreateDomainAliasRequest&, CreateDomainAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainBatchResponse> CreateDomainBatchOutcome;
                typedef std::future<CreateDomainBatchOutcome> CreateDomainBatchOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::CreateDomainBatchRequest&, CreateDomainBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainGroupResponse> CreateDomainGroupOutcome;
                typedef std::future<CreateDomainGroupOutcome> CreateDomainGroupOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::CreateDomainGroupRequest&, CreateDomainGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRecordResponse> CreateRecordOutcome;
                typedef std::future<CreateRecordOutcome> CreateRecordOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::CreateRecordRequest&, CreateRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRecordBatchResponse> CreateRecordBatchOutcome;
                typedef std::future<CreateRecordBatchOutcome> CreateRecordBatchOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::CreateRecordBatchRequest&, CreateRecordBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRecordGroupResponse> CreateRecordGroupOutcome;
                typedef std::future<CreateRecordGroupOutcome> CreateRecordGroupOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::CreateRecordGroupRequest&, CreateRecordGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotResponse> CreateSnapshotOutcome;
                typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::CreateSnapshotRequest&, CreateSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainResponse> DeleteDomainOutcome;
                typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DeleteDomainRequest&, DeleteDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainAliasResponse> DeleteDomainAliasOutcome;
                typedef std::future<DeleteDomainAliasOutcome> DeleteDomainAliasOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DeleteDomainAliasRequest&, DeleteDomainAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordResponse> DeleteRecordOutcome;
                typedef std::future<DeleteRecordOutcome> DeleteRecordOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DeleteRecordRequest&, DeleteRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordGroupResponse> DeleteRecordGroupOutcome;
                typedef std::future<DeleteRecordGroupOutcome> DeleteRecordGroupOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DeleteRecordGroupRequest&, DeleteRecordGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteShareDomainResponse> DeleteShareDomainOutcome;
                typedef std::future<DeleteShareDomainOutcome> DeleteShareDomainOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DeleteShareDomainRequest&, DeleteShareDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteShareDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotResponse> DeleteSnapshotOutcome;
                typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DeleteSnapshotRequest&, DeleteSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchTaskResponse> DescribeBatchTaskOutcome;
                typedef std::future<DescribeBatchTaskOutcome> DescribeBatchTaskOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeBatchTaskRequest&, DescribeBatchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainResponse> DescribeDomainOutcome;
                typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeDomainRequest&, DescribeDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainAliasListResponse> DescribeDomainAliasListOutcome;
                typedef std::future<DescribeDomainAliasListOutcome> DescribeDomainAliasListOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeDomainAliasListRequest&, DescribeDomainAliasListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAliasListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainAnalyticsResponse> DescribeDomainAnalyticsOutcome;
                typedef std::future<DescribeDomainAnalyticsOutcome> DescribeDomainAnalyticsOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeDomainAnalyticsRequest&, DescribeDomainAnalyticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAnalyticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainGroupListResponse> DescribeDomainGroupListOutcome;
                typedef std::future<DescribeDomainGroupListOutcome> DescribeDomainGroupListOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeDomainGroupListRequest&, DescribeDomainGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainListResponse> DescribeDomainListOutcome;
                typedef std::future<DescribeDomainListOutcome> DescribeDomainListOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeDomainListRequest&, DescribeDomainListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainLogListResponse> DescribeDomainLogListOutcome;
                typedef std::future<DescribeDomainLogListOutcome> DescribeDomainLogListOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeDomainLogListRequest&, DescribeDomainLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainPurviewResponse> DescribeDomainPurviewOutcome;
                typedef std::future<DescribeDomainPurviewOutcome> DescribeDomainPurviewOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeDomainPurviewRequest&, DescribeDomainPurviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainPurviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainShareInfoResponse> DescribeDomainShareInfoOutcome;
                typedef std::future<DescribeDomainShareInfoOutcome> DescribeDomainShareInfoOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeDomainShareInfoRequest&, DescribeDomainShareInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainShareInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordResponse> DescribeRecordOutcome;
                typedef std::future<DescribeRecordOutcome> DescribeRecordOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeRecordRequest&, DescribeRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordGroupListResponse> DescribeRecordGroupListOutcome;
                typedef std::future<DescribeRecordGroupListOutcome> DescribeRecordGroupListOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeRecordGroupListRequest&, DescribeRecordGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordLineListResponse> DescribeRecordLineListOutcome;
                typedef std::future<DescribeRecordLineListOutcome> DescribeRecordLineListOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeRecordLineListRequest&, DescribeRecordLineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordLineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordListResponse> DescribeRecordListOutcome;
                typedef std::future<DescribeRecordListOutcome> DescribeRecordListOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeRecordListRequest&, DescribeRecordListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordSnapshotRollbackResultResponse> DescribeRecordSnapshotRollbackResultOutcome;
                typedef std::future<DescribeRecordSnapshotRollbackResultOutcome> DescribeRecordSnapshotRollbackResultOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeRecordSnapshotRollbackResultRequest&, DescribeRecordSnapshotRollbackResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordSnapshotRollbackResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordTypeResponse> DescribeRecordTypeOutcome;
                typedef std::future<DescribeRecordTypeOutcome> DescribeRecordTypeOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeRecordTypeRequest&, DescribeRecordTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotConfigResponse> DescribeSnapshotConfigOutcome;
                typedef std::future<DescribeSnapshotConfigOutcome> DescribeSnapshotConfigOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeSnapshotConfigRequest&, DescribeSnapshotConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotListResponse> DescribeSnapshotListOutcome;
                typedef std::future<DescribeSnapshotListOutcome> DescribeSnapshotListOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeSnapshotListRequest&, DescribeSnapshotListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotRollbackResultResponse> DescribeSnapshotRollbackResultOutcome;
                typedef std::future<DescribeSnapshotRollbackResultOutcome> DescribeSnapshotRollbackResultOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeSnapshotRollbackResultRequest&, DescribeSnapshotRollbackResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotRollbackResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotRollbackTaskResponse> DescribeSnapshotRollbackTaskOutcome;
                typedef std::future<DescribeSnapshotRollbackTaskOutcome> DescribeSnapshotRollbackTaskOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeSnapshotRollbackTaskRequest&, DescribeSnapshotRollbackTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotRollbackTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubdomainAnalyticsResponse> DescribeSubdomainAnalyticsOutcome;
                typedef std::future<DescribeSubdomainAnalyticsOutcome> DescribeSubdomainAnalyticsOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeSubdomainAnalyticsRequest&, DescribeSubdomainAnalyticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubdomainAnalyticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserDetailResponse> DescribeUserDetailOutcome;
                typedef std::future<DescribeUserDetailOutcome> DescribeUserDetailOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DescribeUserDetailRequest&, DescribeUserDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadSnapshotResponse> DownloadSnapshotOutcome;
                typedef std::future<DownloadSnapshotOutcome> DownloadSnapshotOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::DownloadSnapshotRequest&, DownloadSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainLockResponse> ModifyDomainLockOutcome;
                typedef std::future<ModifyDomainLockOutcome> ModifyDomainLockOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyDomainLockRequest&, ModifyDomainLockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainLockAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainOwnerResponse> ModifyDomainOwnerOutcome;
                typedef std::future<ModifyDomainOwnerOutcome> ModifyDomainOwnerOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyDomainOwnerRequest&, ModifyDomainOwnerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainOwnerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainRemarkResponse> ModifyDomainRemarkOutcome;
                typedef std::future<ModifyDomainRemarkOutcome> ModifyDomainRemarkOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyDomainRemarkRequest&, ModifyDomainRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainStatusResponse> ModifyDomainStatusOutcome;
                typedef std::future<ModifyDomainStatusOutcome> ModifyDomainStatusOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyDomainStatusRequest&, ModifyDomainStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainUnlockResponse> ModifyDomainUnlockOutcome;
                typedef std::future<ModifyDomainUnlockOutcome> ModifyDomainUnlockOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyDomainUnlockRequest&, ModifyDomainUnlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainUnlockAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDynamicDNSResponse> ModifyDynamicDNSOutcome;
                typedef std::future<ModifyDynamicDNSOutcome> ModifyDynamicDNSOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyDynamicDNSRequest&, ModifyDynamicDNSOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDynamicDNSAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPackageAutoRenewResponse> ModifyPackageAutoRenewOutcome;
                typedef std::future<ModifyPackageAutoRenewOutcome> ModifyPackageAutoRenewOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyPackageAutoRenewRequest&, ModifyPackageAutoRenewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPackageAutoRenewAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRecordResponse> ModifyRecordOutcome;
                typedef std::future<ModifyRecordOutcome> ModifyRecordOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyRecordRequest&, ModifyRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRecordBatchResponse> ModifyRecordBatchOutcome;
                typedef std::future<ModifyRecordBatchOutcome> ModifyRecordBatchOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyRecordBatchRequest&, ModifyRecordBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRecordBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRecordFieldsResponse> ModifyRecordFieldsOutcome;
                typedef std::future<ModifyRecordFieldsOutcome> ModifyRecordFieldsOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyRecordFieldsRequest&, ModifyRecordFieldsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRecordFieldsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRecordGroupResponse> ModifyRecordGroupOutcome;
                typedef std::future<ModifyRecordGroupOutcome> ModifyRecordGroupOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyRecordGroupRequest&, ModifyRecordGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRecordGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRecordRemarkResponse> ModifyRecordRemarkOutcome;
                typedef std::future<ModifyRecordRemarkOutcome> ModifyRecordRemarkOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyRecordRemarkRequest&, ModifyRecordRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRecordRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRecordStatusResponse> ModifyRecordStatusOutcome;
                typedef std::future<ModifyRecordStatusOutcome> ModifyRecordStatusOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyRecordStatusRequest&, ModifyRecordStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRecordStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRecordToGroupResponse> ModifyRecordToGroupOutcome;
                typedef std::future<ModifyRecordToGroupOutcome> ModifyRecordToGroupOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyRecordToGroupRequest&, ModifyRecordToGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRecordToGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotConfigResponse> ModifySnapshotConfigOutcome;
                typedef std::future<ModifySnapshotConfigOutcome> ModifySnapshotConfigOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifySnapshotConfigRequest&, ModifySnapshotConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubdomainStatusResponse> ModifySubdomainStatusOutcome;
                typedef std::future<ModifySubdomainStatusOutcome> ModifySubdomainStatusOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifySubdomainStatusRequest&, ModifySubdomainStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubdomainStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVasAutoRenewStatusResponse> ModifyVasAutoRenewStatusOutcome;
                typedef std::future<ModifyVasAutoRenewStatusOutcome> ModifyVasAutoRenewStatusOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::ModifyVasAutoRenewStatusRequest&, ModifyVasAutoRenewStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVasAutoRenewStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::PayOrderWithBalanceResponse> PayOrderWithBalanceOutcome;
                typedef std::future<PayOrderWithBalanceOutcome> PayOrderWithBalanceOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::PayOrderWithBalanceRequest&, PayOrderWithBalanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PayOrderWithBalanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackRecordSnapshotResponse> RollbackRecordSnapshotOutcome;
                typedef std::future<RollbackRecordSnapshotOutcome> RollbackRecordSnapshotOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::RollbackRecordSnapshotRequest&, RollbackRecordSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackRecordSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackSnapshotResponse> RollbackSnapshotOutcome;
                typedef std::future<RollbackSnapshotOutcome> RollbackSnapshotOutcomeCallable;
                typedef std::function<void(const DnspodClient*, const Model::RollbackSnapshotRequest&, RollbackSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackSnapshotAsyncHandler;



                /**
                 *回滚前检查单条记录
                 * @param req CheckRecordSnapshotRollbackRequest
                 * @return CheckRecordSnapshotRollbackOutcome
                 */
                CheckRecordSnapshotRollbackOutcome CheckRecordSnapshotRollback(const Model::CheckRecordSnapshotRollbackRequest &request);
                void CheckRecordSnapshotRollbackAsync(const Model::CheckRecordSnapshotRollbackRequest& request, const CheckRecordSnapshotRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckRecordSnapshotRollbackOutcomeCallable CheckRecordSnapshotRollbackCallable(const Model::CheckRecordSnapshotRollbackRequest& request);

                /**
                 *快照回滚前检查
                 * @param req CheckSnapshotRollbackRequest
                 * @return CheckSnapshotRollbackOutcome
                 */
                CheckSnapshotRollbackOutcome CheckSnapshotRollback(const Model::CheckSnapshotRollbackRequest &request);
                void CheckSnapshotRollbackAsync(const Model::CheckSnapshotRollbackRequest& request, const CheckSnapshotRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckSnapshotRollbackOutcomeCallable CheckSnapshotRollbackCallable(const Model::CheckSnapshotRollbackRequest& request);

                /**
                 *DNSPod商品下单
                 * @param req CreateDealRequest
                 * @return CreateDealOutcome
                 */
                CreateDealOutcome CreateDeal(const Model::CreateDealRequest &request);
                void CreateDealAsync(const Model::CreateDealRequest& request, const CreateDealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDealOutcomeCallable CreateDealCallable(const Model::CreateDealRequest& request);

                /**
                 *添加域名
                 * @param req CreateDomainRequest
                 * @return CreateDomainOutcome
                 */
                CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest &request);
                void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request);

                /**
                 *创建域名别名
                 * @param req CreateDomainAliasRequest
                 * @return CreateDomainAliasOutcome
                 */
                CreateDomainAliasOutcome CreateDomainAlias(const Model::CreateDomainAliasRequest &request);
                void CreateDomainAliasAsync(const Model::CreateDomainAliasRequest& request, const CreateDomainAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainAliasOutcomeCallable CreateDomainAliasCallable(const Model::CreateDomainAliasRequest& request);

                /**
                 *批量添加域名
                 * @param req CreateDomainBatchRequest
                 * @return CreateDomainBatchOutcome
                 */
                CreateDomainBatchOutcome CreateDomainBatch(const Model::CreateDomainBatchRequest &request);
                void CreateDomainBatchAsync(const Model::CreateDomainBatchRequest& request, const CreateDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainBatchOutcomeCallable CreateDomainBatchCallable(const Model::CreateDomainBatchRequest& request);

                /**
                 *创建域名分组
                 * @param req CreateDomainGroupRequest
                 * @return CreateDomainGroupOutcome
                 */
                CreateDomainGroupOutcome CreateDomainGroup(const Model::CreateDomainGroupRequest &request);
                void CreateDomainGroupAsync(const Model::CreateDomainGroupRequest& request, const CreateDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainGroupOutcomeCallable CreateDomainGroupCallable(const Model::CreateDomainGroupRequest& request);

                /**
                 *添加记录
                 * @param req CreateRecordRequest
                 * @return CreateRecordOutcome
                 */
                CreateRecordOutcome CreateRecord(const Model::CreateRecordRequest &request);
                void CreateRecordAsync(const Model::CreateRecordRequest& request, const CreateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecordOutcomeCallable CreateRecordCallable(const Model::CreateRecordRequest& request);

                /**
                 *批量添加记录
                 * @param req CreateRecordBatchRequest
                 * @return CreateRecordBatchOutcome
                 */
                CreateRecordBatchOutcome CreateRecordBatch(const Model::CreateRecordBatchRequest &request);
                void CreateRecordBatchAsync(const Model::CreateRecordBatchRequest& request, const CreateRecordBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecordBatchOutcomeCallable CreateRecordBatchCallable(const Model::CreateRecordBatchRequest& request);

                /**
                 *添加记录分组
                 * @param req CreateRecordGroupRequest
                 * @return CreateRecordGroupOutcome
                 */
                CreateRecordGroupOutcome CreateRecordGroup(const Model::CreateRecordGroupRequest &request);
                void CreateRecordGroupAsync(const Model::CreateRecordGroupRequest& request, const CreateRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecordGroupOutcomeCallable CreateRecordGroupCallable(const Model::CreateRecordGroupRequest& request);

                /**
                 *创建快照
                 * @param req CreateSnapshotRequest
                 * @return CreateSnapshotOutcome
                 */
                CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest &request);
                void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request);

                /**
                 *删除域名
                 * @param req DeleteDomainRequest
                 * @return DeleteDomainOutcome
                 */
                DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest &request);
                void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request);

                /**
                 *删除域名别名
                 * @param req DeleteDomainAliasRequest
                 * @return DeleteDomainAliasOutcome
                 */
                DeleteDomainAliasOutcome DeleteDomainAlias(const Model::DeleteDomainAliasRequest &request);
                void DeleteDomainAliasAsync(const Model::DeleteDomainAliasRequest& request, const DeleteDomainAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainAliasOutcomeCallable DeleteDomainAliasCallable(const Model::DeleteDomainAliasRequest& request);

                /**
                 *删除记录
                 * @param req DeleteRecordRequest
                 * @return DeleteRecordOutcome
                 */
                DeleteRecordOutcome DeleteRecord(const Model::DeleteRecordRequest &request);
                void DeleteRecordAsync(const Model::DeleteRecordRequest& request, const DeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordOutcomeCallable DeleteRecordCallable(const Model::DeleteRecordRequest& request);

                /**
                 *删除记录分组
                 * @param req DeleteRecordGroupRequest
                 * @return DeleteRecordGroupOutcome
                 */
                DeleteRecordGroupOutcome DeleteRecordGroup(const Model::DeleteRecordGroupRequest &request);
                void DeleteRecordGroupAsync(const Model::DeleteRecordGroupRequest& request, const DeleteRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordGroupOutcomeCallable DeleteRecordGroupCallable(const Model::DeleteRecordGroupRequest& request);

                /**
                 *删除域名共享
                 * @param req DeleteShareDomainRequest
                 * @return DeleteShareDomainOutcome
                 */
                DeleteShareDomainOutcome DeleteShareDomain(const Model::DeleteShareDomainRequest &request);
                void DeleteShareDomainAsync(const Model::DeleteShareDomainRequest& request, const DeleteShareDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteShareDomainOutcomeCallable DeleteShareDomainCallable(const Model::DeleteShareDomainRequest& request);

                /**
                 *删除快照
                 * @param req DeleteSnapshotRequest
                 * @return DeleteSnapshotOutcome
                 */
                DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest &request);
                void DeleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const Model::DeleteSnapshotRequest& request);

                /**
                 *获取任务详情
                 * @param req DescribeBatchTaskRequest
                 * @return DescribeBatchTaskOutcome
                 */
                DescribeBatchTaskOutcome DescribeBatchTask(const Model::DescribeBatchTaskRequest &request);
                void DescribeBatchTaskAsync(const Model::DescribeBatchTaskRequest& request, const DescribeBatchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchTaskOutcomeCallable DescribeBatchTaskCallable(const Model::DescribeBatchTaskRequest& request);

                /**
                 *获取域名信息
                 * @param req DescribeDomainRequest
                 * @return DescribeDomainOutcome
                 */
                DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest &request);
                void DescribeDomainAsync(const Model::DescribeDomainRequest& request, const DescribeDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainOutcomeCallable DescribeDomainCallable(const Model::DescribeDomainRequest& request);

                /**
                 *获取域名别名列表
                 * @param req DescribeDomainAliasListRequest
                 * @return DescribeDomainAliasListOutcome
                 */
                DescribeDomainAliasListOutcome DescribeDomainAliasList(const Model::DescribeDomainAliasListRequest &request);
                void DescribeDomainAliasListAsync(const Model::DescribeDomainAliasListRequest& request, const DescribeDomainAliasListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainAliasListOutcomeCallable DescribeDomainAliasListCallable(const Model::DescribeDomainAliasListRequest& request);

                /**
                 *统计各个域名的解析量，帮助您了解流量情况、时间段分布。支持查看近 3 个月内的统计情况
                 * @param req DescribeDomainAnalyticsRequest
                 * @return DescribeDomainAnalyticsOutcome
                 */
                DescribeDomainAnalyticsOutcome DescribeDomainAnalytics(const Model::DescribeDomainAnalyticsRequest &request);
                void DescribeDomainAnalyticsAsync(const Model::DescribeDomainAnalyticsRequest& request, const DescribeDomainAnalyticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainAnalyticsOutcomeCallable DescribeDomainAnalyticsCallable(const Model::DescribeDomainAnalyticsRequest& request);

                /**
                 *获取域名分组列表
                 * @param req DescribeDomainGroupListRequest
                 * @return DescribeDomainGroupListOutcome
                 */
                DescribeDomainGroupListOutcome DescribeDomainGroupList(const Model::DescribeDomainGroupListRequest &request);
                void DescribeDomainGroupListAsync(const Model::DescribeDomainGroupListRequest& request, const DescribeDomainGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainGroupListOutcomeCallable DescribeDomainGroupListCallable(const Model::DescribeDomainGroupListRequest& request);

                /**
                 *获取域名列表
                 * @param req DescribeDomainListRequest
                 * @return DescribeDomainListOutcome
                 */
                DescribeDomainListOutcome DescribeDomainList(const Model::DescribeDomainListRequest &request);
                void DescribeDomainListAsync(const Model::DescribeDomainListRequest& request, const DescribeDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainListOutcomeCallable DescribeDomainListCallable(const Model::DescribeDomainListRequest& request);

                /**
                 *获取域名日志
                 * @param req DescribeDomainLogListRequest
                 * @return DescribeDomainLogListOutcome
                 */
                DescribeDomainLogListOutcome DescribeDomainLogList(const Model::DescribeDomainLogListRequest &request);
                void DescribeDomainLogListAsync(const Model::DescribeDomainLogListRequest& request, const DescribeDomainLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainLogListOutcomeCallable DescribeDomainLogListCallable(const Model::DescribeDomainLogListRequest& request);

                /**
                 *获取域名权限
                 * @param req DescribeDomainPurviewRequest
                 * @return DescribeDomainPurviewOutcome
                 */
                DescribeDomainPurviewOutcome DescribeDomainPurview(const Model::DescribeDomainPurviewRequest &request);
                void DescribeDomainPurviewAsync(const Model::DescribeDomainPurviewRequest& request, const DescribeDomainPurviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainPurviewOutcomeCallable DescribeDomainPurviewCallable(const Model::DescribeDomainPurviewRequest& request);

                /**
                 *获取域名共享信息
                 * @param req DescribeDomainShareInfoRequest
                 * @return DescribeDomainShareInfoOutcome
                 */
                DescribeDomainShareInfoOutcome DescribeDomainShareInfo(const Model::DescribeDomainShareInfoRequest &request);
                void DescribeDomainShareInfoAsync(const Model::DescribeDomainShareInfoRequest& request, const DescribeDomainShareInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainShareInfoOutcomeCallable DescribeDomainShareInfoCallable(const Model::DescribeDomainShareInfoRequest& request);

                /**
                 *获取记录信息
                 * @param req DescribeRecordRequest
                 * @return DescribeRecordOutcome
                 */
                DescribeRecordOutcome DescribeRecord(const Model::DescribeRecordRequest &request);
                void DescribeRecordAsync(const Model::DescribeRecordRequest& request, const DescribeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordOutcomeCallable DescribeRecordCallable(const Model::DescribeRecordRequest& request);

                /**
                 *查询解析记录分组列表
                 * @param req DescribeRecordGroupListRequest
                 * @return DescribeRecordGroupListOutcome
                 */
                DescribeRecordGroupListOutcome DescribeRecordGroupList(const Model::DescribeRecordGroupListRequest &request);
                void DescribeRecordGroupListAsync(const Model::DescribeRecordGroupListRequest& request, const DescribeRecordGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordGroupListOutcomeCallable DescribeRecordGroupListCallable(const Model::DescribeRecordGroupListRequest& request);

                /**
                 *获取等级允许的线路
                 * @param req DescribeRecordLineListRequest
                 * @return DescribeRecordLineListOutcome
                 */
                DescribeRecordLineListOutcome DescribeRecordLineList(const Model::DescribeRecordLineListRequest &request);
                void DescribeRecordLineListAsync(const Model::DescribeRecordLineListRequest& request, const DescribeRecordLineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordLineListOutcomeCallable DescribeRecordLineListCallable(const Model::DescribeRecordLineListRequest& request);

                /**
                 *获取某个域名下的解析记录列表
                 * @param req DescribeRecordListRequest
                 * @return DescribeRecordListOutcome
                 */
                DescribeRecordListOutcome DescribeRecordList(const Model::DescribeRecordListRequest &request);
                void DescribeRecordListAsync(const Model::DescribeRecordListRequest& request, const DescribeRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordListOutcomeCallable DescribeRecordListCallable(const Model::DescribeRecordListRequest& request);

                /**
                 *查询解析记录重新回滚的结果
                 * @param req DescribeRecordSnapshotRollbackResultRequest
                 * @return DescribeRecordSnapshotRollbackResultOutcome
                 */
                DescribeRecordSnapshotRollbackResultOutcome DescribeRecordSnapshotRollbackResult(const Model::DescribeRecordSnapshotRollbackResultRequest &request);
                void DescribeRecordSnapshotRollbackResultAsync(const Model::DescribeRecordSnapshotRollbackResultRequest& request, const DescribeRecordSnapshotRollbackResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordSnapshotRollbackResultOutcomeCallable DescribeRecordSnapshotRollbackResultCallable(const Model::DescribeRecordSnapshotRollbackResultRequest& request);

                /**
                 *获取等级允许的记录类型
                 * @param req DescribeRecordTypeRequest
                 * @return DescribeRecordTypeOutcome
                 */
                DescribeRecordTypeOutcome DescribeRecordType(const Model::DescribeRecordTypeRequest &request);
                void DescribeRecordTypeAsync(const Model::DescribeRecordTypeRequest& request, const DescribeRecordTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordTypeOutcomeCallable DescribeRecordTypeCallable(const Model::DescribeRecordTypeRequest& request);

                /**
                 *查询解析快照配置
                 * @param req DescribeSnapshotConfigRequest
                 * @return DescribeSnapshotConfigOutcome
                 */
                DescribeSnapshotConfigOutcome DescribeSnapshotConfig(const Model::DescribeSnapshotConfigRequest &request);
                void DescribeSnapshotConfigAsync(const Model::DescribeSnapshotConfigRequest& request, const DescribeSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotConfigOutcomeCallable DescribeSnapshotConfigCallable(const Model::DescribeSnapshotConfigRequest& request);

                /**
                 *查询快照列表
                 * @param req DescribeSnapshotListRequest
                 * @return DescribeSnapshotListOutcome
                 */
                DescribeSnapshotListOutcome DescribeSnapshotList(const Model::DescribeSnapshotListRequest &request);
                void DescribeSnapshotListAsync(const Model::DescribeSnapshotListRequest& request, const DescribeSnapshotListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotListOutcomeCallable DescribeSnapshotListCallable(const Model::DescribeSnapshotListRequest& request);

                /**
                 *查询快照回滚结果
                 * @param req DescribeSnapshotRollbackResultRequest
                 * @return DescribeSnapshotRollbackResultOutcome
                 */
                DescribeSnapshotRollbackResultOutcome DescribeSnapshotRollbackResult(const Model::DescribeSnapshotRollbackResultRequest &request);
                void DescribeSnapshotRollbackResultAsync(const Model::DescribeSnapshotRollbackResultRequest& request, const DescribeSnapshotRollbackResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotRollbackResultOutcomeCallable DescribeSnapshotRollbackResultCallable(const Model::DescribeSnapshotRollbackResultRequest& request);

                /**
                 *查询最近一次回滚
                 * @param req DescribeSnapshotRollbackTaskRequest
                 * @return DescribeSnapshotRollbackTaskOutcome
                 */
                DescribeSnapshotRollbackTaskOutcome DescribeSnapshotRollbackTask(const Model::DescribeSnapshotRollbackTaskRequest &request);
                void DescribeSnapshotRollbackTaskAsync(const Model::DescribeSnapshotRollbackTaskRequest& request, const DescribeSnapshotRollbackTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotRollbackTaskOutcomeCallable DescribeSnapshotRollbackTaskCallable(const Model::DescribeSnapshotRollbackTaskRequest& request);

                /**
                 *统计子域名的解析量，帮助您了解流量情况、时间段分布。支持查看近 3 个月内的统计情况。仅付费套餐域名可用。
                 * @param req DescribeSubdomainAnalyticsRequest
                 * @return DescribeSubdomainAnalyticsOutcome
                 */
                DescribeSubdomainAnalyticsOutcome DescribeSubdomainAnalytics(const Model::DescribeSubdomainAnalyticsRequest &request);
                void DescribeSubdomainAnalyticsAsync(const Model::DescribeSubdomainAnalyticsRequest& request, const DescribeSubdomainAnalyticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubdomainAnalyticsOutcomeCallable DescribeSubdomainAnalyticsCallable(const Model::DescribeSubdomainAnalyticsRequest& request);

                /**
                 *获取帐户信息
                 * @param req DescribeUserDetailRequest
                 * @return DescribeUserDetailOutcome
                 */
                DescribeUserDetailOutcome DescribeUserDetail(const Model::DescribeUserDetailRequest &request);
                void DescribeUserDetailAsync(const Model::DescribeUserDetailRequest& request, const DescribeUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserDetailOutcomeCallable DescribeUserDetailCallable(const Model::DescribeUserDetailRequest& request);

                /**
                 *下载快照
                 * @param req DownloadSnapshotRequest
                 * @return DownloadSnapshotOutcome
                 */
                DownloadSnapshotOutcome DownloadSnapshot(const Model::DownloadSnapshotRequest &request);
                void DownloadSnapshotAsync(const Model::DownloadSnapshotRequest& request, const DownloadSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadSnapshotOutcomeCallable DownloadSnapshotCallable(const Model::DownloadSnapshotRequest& request);

                /**
                 *锁定域名
                 * @param req ModifyDomainLockRequest
                 * @return ModifyDomainLockOutcome
                 */
                ModifyDomainLockOutcome ModifyDomainLock(const Model::ModifyDomainLockRequest &request);
                void ModifyDomainLockAsync(const Model::ModifyDomainLockRequest& request, const ModifyDomainLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainLockOutcomeCallable ModifyDomainLockCallable(const Model::ModifyDomainLockRequest& request);

                /**
                 *域名过户
                 * @param req ModifyDomainOwnerRequest
                 * @return ModifyDomainOwnerOutcome
                 */
                ModifyDomainOwnerOutcome ModifyDomainOwner(const Model::ModifyDomainOwnerRequest &request);
                void ModifyDomainOwnerAsync(const Model::ModifyDomainOwnerRequest& request, const ModifyDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainOwnerOutcomeCallable ModifyDomainOwnerCallable(const Model::ModifyDomainOwnerRequest& request);

                /**
                 *设置域名备注
                 * @param req ModifyDomainRemarkRequest
                 * @return ModifyDomainRemarkOutcome
                 */
                ModifyDomainRemarkOutcome ModifyDomainRemark(const Model::ModifyDomainRemarkRequest &request);
                void ModifyDomainRemarkAsync(const Model::ModifyDomainRemarkRequest& request, const ModifyDomainRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainRemarkOutcomeCallable ModifyDomainRemarkCallable(const Model::ModifyDomainRemarkRequest& request);

                /**
                 *修改域名状态
                 * @param req ModifyDomainStatusRequest
                 * @return ModifyDomainStatusOutcome
                 */
                ModifyDomainStatusOutcome ModifyDomainStatus(const Model::ModifyDomainStatusRequest &request);
                void ModifyDomainStatusAsync(const Model::ModifyDomainStatusRequest& request, const ModifyDomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainStatusOutcomeCallable ModifyDomainStatusCallable(const Model::ModifyDomainStatusRequest& request);

                /**
                 *域名锁定解锁
                 * @param req ModifyDomainUnlockRequest
                 * @return ModifyDomainUnlockOutcome
                 */
                ModifyDomainUnlockOutcome ModifyDomainUnlock(const Model::ModifyDomainUnlockRequest &request);
                void ModifyDomainUnlockAsync(const Model::ModifyDomainUnlockRequest& request, const ModifyDomainUnlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainUnlockOutcomeCallable ModifyDomainUnlockCallable(const Model::ModifyDomainUnlockRequest& request);

                /**
                 *更新动态 DNS 记录
                 * @param req ModifyDynamicDNSRequest
                 * @return ModifyDynamicDNSOutcome
                 */
                ModifyDynamicDNSOutcome ModifyDynamicDNS(const Model::ModifyDynamicDNSRequest &request);
                void ModifyDynamicDNSAsync(const Model::ModifyDynamicDNSRequest& request, const ModifyDynamicDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDynamicDNSOutcomeCallable ModifyDynamicDNSCallable(const Model::ModifyDynamicDNSRequest& request);

                /**
                 *DNS 解析套餐自动续费设置
                 * @param req ModifyPackageAutoRenewRequest
                 * @return ModifyPackageAutoRenewOutcome
                 */
                ModifyPackageAutoRenewOutcome ModifyPackageAutoRenew(const Model::ModifyPackageAutoRenewRequest &request);
                void ModifyPackageAutoRenewAsync(const Model::ModifyPackageAutoRenewRequest& request, const ModifyPackageAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPackageAutoRenewOutcomeCallable ModifyPackageAutoRenewCallable(const Model::ModifyPackageAutoRenewRequest& request);

                /**
                 *修改记录
                 * @param req ModifyRecordRequest
                 * @return ModifyRecordOutcome
                 */
                ModifyRecordOutcome ModifyRecord(const Model::ModifyRecordRequest &request);
                void ModifyRecordAsync(const Model::ModifyRecordRequest& request, const ModifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRecordOutcomeCallable ModifyRecordCallable(const Model::ModifyRecordRequest& request);

                /**
                 *批量修改记录
                 * @param req ModifyRecordBatchRequest
                 * @return ModifyRecordBatchOutcome
                 */
                ModifyRecordBatchOutcome ModifyRecordBatch(const Model::ModifyRecordBatchRequest &request);
                void ModifyRecordBatchAsync(const Model::ModifyRecordBatchRequest& request, const ModifyRecordBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRecordBatchOutcomeCallable ModifyRecordBatchCallable(const Model::ModifyRecordBatchRequest& request);

                /**
                 *修改记录可选字段
                 * @param req ModifyRecordFieldsRequest
                 * @return ModifyRecordFieldsOutcome
                 */
                ModifyRecordFieldsOutcome ModifyRecordFields(const Model::ModifyRecordFieldsRequest &request);
                void ModifyRecordFieldsAsync(const Model::ModifyRecordFieldsRequest& request, const ModifyRecordFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRecordFieldsOutcomeCallable ModifyRecordFieldsCallable(const Model::ModifyRecordFieldsRequest& request);

                /**
                 *修改记录分组
                 * @param req ModifyRecordGroupRequest
                 * @return ModifyRecordGroupOutcome
                 */
                ModifyRecordGroupOutcome ModifyRecordGroup(const Model::ModifyRecordGroupRequest &request);
                void ModifyRecordGroupAsync(const Model::ModifyRecordGroupRequest& request, const ModifyRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRecordGroupOutcomeCallable ModifyRecordGroupCallable(const Model::ModifyRecordGroupRequest& request);

                /**
                 *设置记录备注
                 * @param req ModifyRecordRemarkRequest
                 * @return ModifyRecordRemarkOutcome
                 */
                ModifyRecordRemarkOutcome ModifyRecordRemark(const Model::ModifyRecordRemarkRequest &request);
                void ModifyRecordRemarkAsync(const Model::ModifyRecordRemarkRequest& request, const ModifyRecordRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRecordRemarkOutcomeCallable ModifyRecordRemarkCallable(const Model::ModifyRecordRemarkRequest& request);

                /**
                 *修改解析记录的状态
                 * @param req ModifyRecordStatusRequest
                 * @return ModifyRecordStatusOutcome
                 */
                ModifyRecordStatusOutcome ModifyRecordStatus(const Model::ModifyRecordStatusRequest &request);
                void ModifyRecordStatusAsync(const Model::ModifyRecordStatusRequest& request, const ModifyRecordStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRecordStatusOutcomeCallable ModifyRecordStatusCallable(const Model::ModifyRecordStatusRequest& request);

                /**
                 *将记录添加到分组
                 * @param req ModifyRecordToGroupRequest
                 * @return ModifyRecordToGroupOutcome
                 */
                ModifyRecordToGroupOutcome ModifyRecordToGroup(const Model::ModifyRecordToGroupRequest &request);
                void ModifyRecordToGroupAsync(const Model::ModifyRecordToGroupRequest& request, const ModifyRecordToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRecordToGroupOutcomeCallable ModifyRecordToGroupCallable(const Model::ModifyRecordToGroupRequest& request);

                /**
                 *修改快照配置
                 * @param req ModifySnapshotConfigRequest
                 * @return ModifySnapshotConfigOutcome
                 */
                ModifySnapshotConfigOutcome ModifySnapshotConfig(const Model::ModifySnapshotConfigRequest &request);
                void ModifySnapshotConfigAsync(const Model::ModifySnapshotConfigRequest& request, const ModifySnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotConfigOutcomeCallable ModifySnapshotConfigCallable(const Model::ModifySnapshotConfigRequest& request);

                /**
                 *暂停子域名的解析记录
                 * @param req ModifySubdomainStatusRequest
                 * @return ModifySubdomainStatusOutcome
                 */
                ModifySubdomainStatusOutcome ModifySubdomainStatus(const Model::ModifySubdomainStatusRequest &request);
                void ModifySubdomainStatusAsync(const Model::ModifySubdomainStatusRequest& request, const ModifySubdomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubdomainStatusOutcomeCallable ModifySubdomainStatusCallable(const Model::ModifySubdomainStatusRequest& request);

                /**
                 *增值服务自动续费设置
                 * @param req ModifyVasAutoRenewStatusRequest
                 * @return ModifyVasAutoRenewStatusOutcome
                 */
                ModifyVasAutoRenewStatusOutcome ModifyVasAutoRenewStatus(const Model::ModifyVasAutoRenewStatusRequest &request);
                void ModifyVasAutoRenewStatusAsync(const Model::ModifyVasAutoRenewStatusRequest& request, const ModifyVasAutoRenewStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVasAutoRenewStatusOutcomeCallable ModifyVasAutoRenewStatusCallable(const Model::ModifyVasAutoRenewStatusRequest& request);

                /**
                 *DNSPod商品余额支付
                 * @param req PayOrderWithBalanceRequest
                 * @return PayOrderWithBalanceOutcome
                 */
                PayOrderWithBalanceOutcome PayOrderWithBalance(const Model::PayOrderWithBalanceRequest &request);
                void PayOrderWithBalanceAsync(const Model::PayOrderWithBalanceRequest& request, const PayOrderWithBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PayOrderWithBalanceOutcomeCallable PayOrderWithBalanceCallable(const Model::PayOrderWithBalanceRequest& request);

                /**
                 *重新回滚指定解析记录快照
                 * @param req RollbackRecordSnapshotRequest
                 * @return RollbackRecordSnapshotOutcome
                 */
                RollbackRecordSnapshotOutcome RollbackRecordSnapshot(const Model::RollbackRecordSnapshotRequest &request);
                void RollbackRecordSnapshotAsync(const Model::RollbackRecordSnapshotRequest& request, const RollbackRecordSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackRecordSnapshotOutcomeCallable RollbackRecordSnapshotCallable(const Model::RollbackRecordSnapshotRequest& request);

                /**
                 *回滚快照
                 * @param req RollbackSnapshotRequest
                 * @return RollbackSnapshotOutcome
                 */
                RollbackSnapshotOutcome RollbackSnapshot(const Model::RollbackSnapshotRequest &request);
                void RollbackSnapshotAsync(const Model::RollbackSnapshotRequest& request, const RollbackSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackSnapshotOutcomeCallable RollbackSnapshotCallable(const Model::RollbackSnapshotRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_DNSPODCLIENT_H_
