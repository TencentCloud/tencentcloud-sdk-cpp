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
#include <tencentcloud/cbs/v20170312/model/ApplySnapshotRequest.h>
#include <tencentcloud/cbs/v20170312/model/ApplySnapshotResponse.h>
#include <tencentcloud/cbs/v20170312/model/AttachDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/AttachDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/BindAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cbs/v20170312/model/BindAutoSnapshotPolicyResponse.h>
#include <tencentcloud/cbs/v20170312/model/CreateAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cbs/v20170312/model/CreateAutoSnapshotPolicyResponse.h>
#include <tencentcloud/cbs/v20170312/model/CreateDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/CreateDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/CreateSnapshotRequest.h>
#include <tencentcloud/cbs/v20170312/model/CreateSnapshotResponse.h>
#include <tencentcloud/cbs/v20170312/model/DeleteAutoSnapshotPoliciesRequest.h>
#include <tencentcloud/cbs/v20170312/model/DeleteAutoSnapshotPoliciesResponse.h>
#include <tencentcloud/cbs/v20170312/model/DeleteSnapshotsRequest.h>
#include <tencentcloud/cbs/v20170312/model/DeleteSnapshotsResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeAutoSnapshotPoliciesRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeAutoSnapshotPoliciesResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskAssociatedAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskAssociatedAutoSnapshotPolicyResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskConfigQuotaRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskConfigQuotaResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskOperationLogsRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskOperationLogsResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeInstancesDiskNumRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeInstancesDiskNumResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotOperationLogsRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotOperationLogsResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotSharePermissionRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotSharePermissionResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotsRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotsResponse.h>
#include <tencentcloud/cbs/v20170312/model/DetachDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/DetachDisksResponse.h>
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

                typedef Outcome<Error, Model::ApplySnapshotResponse> ApplySnapshotOutcome;
                typedef std::future<ApplySnapshotOutcome> ApplySnapshotOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ApplySnapshotRequest&, ApplySnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplySnapshotAsyncHandler;
                typedef Outcome<Error, Model::AttachDisksResponse> AttachDisksOutcome;
                typedef std::future<AttachDisksOutcome> AttachDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::AttachDisksRequest&, AttachDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachDisksAsyncHandler;
                typedef Outcome<Error, Model::BindAutoSnapshotPolicyResponse> BindAutoSnapshotPolicyOutcome;
                typedef std::future<BindAutoSnapshotPolicyOutcome> BindAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::BindAutoSnapshotPolicyRequest&, BindAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindAutoSnapshotPolicyAsyncHandler;
                typedef Outcome<Error, Model::CreateAutoSnapshotPolicyResponse> CreateAutoSnapshotPolicyOutcome;
                typedef std::future<CreateAutoSnapshotPolicyOutcome> CreateAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CreateAutoSnapshotPolicyRequest&, CreateAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoSnapshotPolicyAsyncHandler;
                typedef Outcome<Error, Model::CreateDisksResponse> CreateDisksOutcome;
                typedef std::future<CreateDisksOutcome> CreateDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CreateDisksRequest&, CreateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDisksAsyncHandler;
                typedef Outcome<Error, Model::CreateSnapshotResponse> CreateSnapshotOutcome;
                typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CreateSnapshotRequest&, CreateSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotAsyncHandler;
                typedef Outcome<Error, Model::DeleteAutoSnapshotPoliciesResponse> DeleteAutoSnapshotPoliciesOutcome;
                typedef std::future<DeleteAutoSnapshotPoliciesOutcome> DeleteAutoSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DeleteAutoSnapshotPoliciesRequest&, DeleteAutoSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoSnapshotPoliciesAsyncHandler;
                typedef Outcome<Error, Model::DeleteSnapshotsResponse> DeleteSnapshotsOutcome;
                typedef std::future<DeleteSnapshotsOutcome> DeleteSnapshotsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DeleteSnapshotsRequest&, DeleteSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAutoSnapshotPoliciesResponse> DescribeAutoSnapshotPoliciesOutcome;
                typedef std::future<DescribeAutoSnapshotPoliciesOutcome> DescribeAutoSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeAutoSnapshotPoliciesRequest&, DescribeAutoSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoSnapshotPoliciesAsyncHandler;
                typedef Outcome<Error, Model::DescribeDiskAssociatedAutoSnapshotPolicyResponse> DescribeDiskAssociatedAutoSnapshotPolicyOutcome;
                typedef std::future<DescribeDiskAssociatedAutoSnapshotPolicyOutcome> DescribeDiskAssociatedAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeDiskAssociatedAutoSnapshotPolicyRequest&, DescribeDiskAssociatedAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskAssociatedAutoSnapshotPolicyAsyncHandler;
                typedef Outcome<Error, Model::DescribeDiskConfigQuotaResponse> DescribeDiskConfigQuotaOutcome;
                typedef std::future<DescribeDiskConfigQuotaOutcome> DescribeDiskConfigQuotaOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeDiskConfigQuotaRequest&, DescribeDiskConfigQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskConfigQuotaAsyncHandler;
                typedef Outcome<Error, Model::DescribeDiskOperationLogsResponse> DescribeDiskOperationLogsOutcome;
                typedef std::future<DescribeDiskOperationLogsOutcome> DescribeDiskOperationLogsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeDiskOperationLogsRequest&, DescribeDiskOperationLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskOperationLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDisksResponse> DescribeDisksOutcome;
                typedef std::future<DescribeDisksOutcome> DescribeDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeDisksRequest&, DescribeDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesDiskNumResponse> DescribeInstancesDiskNumOutcome;
                typedef std::future<DescribeInstancesDiskNumOutcome> DescribeInstancesDiskNumOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeInstancesDiskNumRequest&, DescribeInstancesDiskNumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesDiskNumAsyncHandler;
                typedef Outcome<Error, Model::DescribeSnapshotOperationLogsResponse> DescribeSnapshotOperationLogsOutcome;
                typedef std::future<DescribeSnapshotOperationLogsOutcome> DescribeSnapshotOperationLogsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeSnapshotOperationLogsRequest&, DescribeSnapshotOperationLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotOperationLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSnapshotSharePermissionResponse> DescribeSnapshotSharePermissionOutcome;
                typedef std::future<DescribeSnapshotSharePermissionOutcome> DescribeSnapshotSharePermissionOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeSnapshotSharePermissionRequest&, DescribeSnapshotSharePermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotSharePermissionAsyncHandler;
                typedef Outcome<Error, Model::DescribeSnapshotsResponse> DescribeSnapshotsOutcome;
                typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeSnapshotsRequest&, DescribeSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
                typedef Outcome<Error, Model::DetachDisksResponse> DetachDisksOutcome;
                typedef std::future<DetachDisksOutcome> DetachDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DetachDisksRequest&, DetachDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachDisksAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceCreateDisksResponse> InquiryPriceCreateDisksOutcome;
                typedef std::future<InquiryPriceCreateDisksOutcome> InquiryPriceCreateDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InquiryPriceCreateDisksRequest&, InquiryPriceCreateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateDisksAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceRenewDisksResponse> InquiryPriceRenewDisksOutcome;
                typedef std::future<InquiryPriceRenewDisksOutcome> InquiryPriceRenewDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InquiryPriceRenewDisksRequest&, InquiryPriceRenewDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewDisksAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceResizeDiskResponse> InquiryPriceResizeDiskOutcome;
                typedef std::future<InquiryPriceResizeDiskOutcome> InquiryPriceResizeDiskOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InquiryPriceResizeDiskRequest&, InquiryPriceResizeDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResizeDiskAsyncHandler;
                typedef Outcome<Error, Model::ModifyAutoSnapshotPolicyAttributeResponse> ModifyAutoSnapshotPolicyAttributeOutcome;
                typedef std::future<ModifyAutoSnapshotPolicyAttributeOutcome> ModifyAutoSnapshotPolicyAttributeOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifyAutoSnapshotPolicyAttributeRequest&, ModifyAutoSnapshotPolicyAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoSnapshotPolicyAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyDiskAttributesResponse> ModifyDiskAttributesOutcome;
                typedef std::future<ModifyDiskAttributesOutcome> ModifyDiskAttributesOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifyDiskAttributesRequest&, ModifyDiskAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiskAttributesAsyncHandler;
                typedef Outcome<Error, Model::ModifyDisksChargeTypeResponse> ModifyDisksChargeTypeOutcome;
                typedef std::future<ModifyDisksChargeTypeOutcome> ModifyDisksChargeTypeOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifyDisksChargeTypeRequest&, ModifyDisksChargeTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDisksChargeTypeAsyncHandler;
                typedef Outcome<Error, Model::ModifyDisksRenewFlagResponse> ModifyDisksRenewFlagOutcome;
                typedef std::future<ModifyDisksRenewFlagOutcome> ModifyDisksRenewFlagOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifyDisksRenewFlagRequest&, ModifyDisksRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDisksRenewFlagAsyncHandler;
                typedef Outcome<Error, Model::ModifySnapshotAttributeResponse> ModifySnapshotAttributeOutcome;
                typedef std::future<ModifySnapshotAttributeOutcome> ModifySnapshotAttributeOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifySnapshotAttributeRequest&, ModifySnapshotAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifySnapshotsSharePermissionResponse> ModifySnapshotsSharePermissionOutcome;
                typedef std::future<ModifySnapshotsSharePermissionOutcome> ModifySnapshotsSharePermissionOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifySnapshotsSharePermissionRequest&, ModifySnapshotsSharePermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotsSharePermissionAsyncHandler;
                typedef Outcome<Error, Model::RenewDiskResponse> RenewDiskOutcome;
                typedef std::future<RenewDiskOutcome> RenewDiskOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::RenewDiskRequest&, RenewDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDiskAsyncHandler;
                typedef Outcome<Error, Model::ResizeDiskResponse> ResizeDiskOutcome;
                typedef std::future<ResizeDiskOutcome> ResizeDiskOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ResizeDiskRequest&, ResizeDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDiskAsyncHandler;
                typedef Outcome<Error, Model::TerminateDisksResponse> TerminateDisksOutcome;
                typedef std::future<TerminateDisksOutcome> TerminateDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::TerminateDisksRequest&, TerminateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDisksAsyncHandler;
                typedef Outcome<Error, Model::UnbindAutoSnapshotPolicyResponse> UnbindAutoSnapshotPolicyOutcome;
                typedef std::future<UnbindAutoSnapshotPolicyOutcome> UnbindAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::UnbindAutoSnapshotPolicyRequest&, UnbindAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindAutoSnapshotPolicyAsyncHandler;



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
                 *本接口（AttachDisks）用于挂载云硬盘。
 
* 支持批量操作，将多块云盘挂载到同一云主机。如果多个云盘存在不允许挂载的云盘，则操作不执行，以返回特定的错误码返回。
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
                 * @param req CreateSnapshotRequest
                 * @return CreateSnapshotOutcome
                 */
                CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest &request);
                void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request);

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
                 *本接口（DeleteSnapshots）用于删除快照。

* 快照必须处于NORMAL状态，快照状态可以通过[DescribeSnapshots](/document/product/362/15647)接口查询，见输出参数中SnapshotState字段解释。
* 支持批量操作。如果多个快照存在无法删除的快照，则操作不执行，以返回特定的错误码返回。
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
                 *本接口（DescribeDiskConfigQuota）用于查询云硬盘配额。
                 * @param req DescribeDiskConfigQuotaRequest
                 * @return DescribeDiskConfigQuotaOutcome
                 */
                DescribeDiskConfigQuotaOutcome DescribeDiskConfigQuota(const Model::DescribeDiskConfigQuotaRequest &request);
                void DescribeDiskConfigQuotaAsync(const Model::DescribeDiskConfigQuotaRequest& request, const DescribeDiskConfigQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskConfigQuotaOutcomeCallable DescribeDiskConfigQuotaCallable(const Model::DescribeDiskConfigQuotaRequest& request);

                /**
                 *本接口（DescribeDiskOperationLogs）用于查询云盘操作日志列表。

可根据云盘ID过滤。云盘ID形如：disk-a1kmcp13。

                 * @param req DescribeDiskOperationLogsRequest
                 * @return DescribeDiskOperationLogsOutcome
                 */
                DescribeDiskOperationLogsOutcome DescribeDiskOperationLogs(const Model::DescribeDiskOperationLogsRequest &request);
                void DescribeDiskOperationLogsAsync(const Model::DescribeDiskOperationLogsRequest& request, const DescribeDiskOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskOperationLogsOutcomeCallable DescribeDiskOperationLogsCallable(const Model::DescribeDiskOperationLogsRequest& request);

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
                 *本接口（DescribeSnapshotOperationLogs）用于查询快照操作日志列表。

可根据快照ID过滤。快照ID形如：snap-a1kmcp13。

                 * @param req DescribeSnapshotOperationLogsRequest
                 * @return DescribeSnapshotOperationLogsOutcome
                 */
                DescribeSnapshotOperationLogsOutcome DescribeSnapshotOperationLogs(const Model::DescribeSnapshotOperationLogsRequest &request);
                void DescribeSnapshotOperationLogsAsync(const Model::DescribeSnapshotOperationLogsRequest& request, const DescribeSnapshotOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotOperationLogsOutcomeCallable DescribeSnapshotOperationLogsCallable(const Model::DescribeSnapshotOperationLogsRequest& request);

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
                 *本接口（DetachDisks）用于解挂云硬盘。

* 支持批量操作，解挂挂载在同一主机上的多块云盘。如果多块云盘存在不允许解挂载的云盘，则操作不执行，以返回特定的错误码返回。
* 本接口为异步接口，当请求成功返回时，云盘并未立即从主机解挂载，可通过接口[DescribeDisks](/document/product/362/16315)来查询对应云盘的状态，如果云盘的状态由“ATTACHED”变为“UNATTACHED”，则为解挂载成功。
                 * @param req DetachDisksRequest
                 * @return DetachDisksOutcome
                 */
                DetachDisksOutcome DetachDisks(const Model::DetachDisksRequest &request);
                void DetachDisksAsync(const Model::DetachDisksRequest& request, const DetachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachDisksOutcomeCallable DetachDisksCallable(const Model::DetachDisksRequest& request);

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

* 只支持预付费模式的云硬盘扩容询价。
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
                 ** 只支持修改弹性云盘的项目ID。随云主机创建的云硬盘项目ID与云主机联动。可以通过[DescribeDisks](/document/product/362/16315)接口查询，见输出参数中Portable字段解释。
* “云硬盘名称”仅为方便用户自己管理之用，腾讯云并不以此名称作为提交工单或是进行云盘管理操作的依据。
* 支持批量操作，如果传入多个云盘ID，则所有云盘修改为同一属性。如果存在不允许操作的云盘，则操作不执行，以特定错误码返回。
                 * @param req ModifyDiskAttributesRequest
                 * @return ModifyDiskAttributesOutcome
                 */
                ModifyDiskAttributesOutcome ModifyDiskAttributes(const Model::ModifyDiskAttributesRequest &request);
                void ModifyDiskAttributesAsync(const Model::ModifyDiskAttributesRequest& request, const ModifyDiskAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDiskAttributesOutcomeCallable ModifyDiskAttributesCallable(const Model::ModifyDiskAttributesRequest& request);

                /**
                 *接口请求域名： cbs.tencentcloudapi.com 。

本接口 (ModifyDisksChargeType) 用于切换云盘的计费模式。

只支持从 POSTPAID_BY_HOUR 计费模式切换为PREPAID计费模式。
非弹性云盘不支持此接口，请通过修改实例计费模式接口将实例连同非弹性云盘一起转换。
默认接口请求频率限制：10次/秒。

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

* 当前仅支持修改快照名称及将非永久快照修改为永久快照。
* “快照名称”仅为方便用户自己管理之用，腾讯云并不以此名称作为提交工单或是进行快照管理操作的依据。
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

* 只支持扩容弹性云盘。云硬盘类型可以通过[DescribeDisks](/document/product/362/16315)接口查询，见输出参数中Portable字段解释。随云主机创建的云硬盘需通过[ResizeInstanceDisks](/document/product/213/15731)接口扩容。
* 本接口为异步接口，接口成功返回时，云盘并未立即扩容到指定大小，可通过接口[DescribeDisks](/document/product/362/16315)来查询对应云盘的状态，如果云盘的状态为“EXPANDING”，表示正在扩容中，当状态变为“UNATTACHED”，表示扩容完成。 
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
* 支持批量操作，每次请求批量云硬盘的上限为50。如果批量云盘存在不允许操作的，请求会以特定错误码返回。
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
