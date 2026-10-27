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

#ifndef TENCENTCLOUD_CVD_V20201104_CVDCLIENT_H_
#define TENCENTCLOUD_CVD_V20201104_CVDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cvd/v20201104/model/AssociateSecurityGroupRequest.h>
#include <tencentcloud/cvd/v20201104/model/AssociateSecurityGroupResponse.h>
#include <tencentcloud/cvd/v20201104/model/BindInstancesRequest.h>
#include <tencentcloud/cvd/v20201104/model/BindInstancesResponse.h>
#include <tencentcloud/cvd/v20201104/model/CreateCommandTaskRequest.h>
#include <tencentcloud/cvd/v20201104/model/CreateCommandTaskResponse.h>
#include <tencentcloud/cvd/v20201104/model/CreateDataDiskRequest.h>
#include <tencentcloud/cvd/v20201104/model/CreateDataDiskResponse.h>
#include <tencentcloud/cvd/v20201104/model/CreateDomainControlPolicyRequest.h>
#include <tencentcloud/cvd/v20201104/model/CreateDomainControlPolicyResponse.h>
#include <tencentcloud/cvd/v20201104/model/CreateImageRequest.h>
#include <tencentcloud/cvd/v20201104/model/CreateImageResponse.h>
#include <tencentcloud/cvd/v20201104/model/CreateInstancesRequest.h>
#include <tencentcloud/cvd/v20201104/model/CreateInstancesResponse.h>
#include <tencentcloud/cvd/v20201104/model/CreatePolicyRequest.h>
#include <tencentcloud/cvd/v20201104/model/CreatePolicyResponse.h>
#include <tencentcloud/cvd/v20201104/model/DeleteCommandTasksRequest.h>
#include <tencentcloud/cvd/v20201104/model/DeleteCommandTasksResponse.h>
#include <tencentcloud/cvd/v20201104/model/DeleteDomainControlPolicyRequest.h>
#include <tencentcloud/cvd/v20201104/model/DeleteDomainControlPolicyResponse.h>
#include <tencentcloud/cvd/v20201104/model/DeleteImagesRequest.h>
#include <tencentcloud/cvd/v20201104/model/DeleteImagesResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeCommandTasksRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeCommandTasksResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeImagesRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeImagesResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstanceFetchMsgRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstanceFetchMsgResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstanceGraphDataRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstanceGraphDataResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstanceLoginMsgRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstanceLoginMsgResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstanceMonitorDataRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstanceMonitorDataResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstanceRegionDistributionRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstanceRegionDistributionResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstancesRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstancesResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstancesBindStatusRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstancesBindStatusResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstancesStatusRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInstancesStatusResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInvocationDetailRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInvocationDetailResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInvocationsRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeInvocationsResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribePolicyDetailRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribePolicyDetailResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeSecurityGroupsRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeSecurityGroupsResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeSnapshotsRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeSnapshotsResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeUsageRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeUsageResponse.h>
#include <tencentcloud/cvd/v20201104/model/DescribeUsersRequest.h>
#include <tencentcloud/cvd/v20201104/model/DescribeUsersResponse.h>
#include <tencentcloud/cvd/v20201104/model/DisassociateSecurityGroupRequest.h>
#include <tencentcloud/cvd/v20201104/model/DisassociateSecurityGroupResponse.h>
#include <tencentcloud/cvd/v20201104/model/ModifyDiskConfigurationRequest.h>
#include <tencentcloud/cvd/v20201104/model/ModifyDiskConfigurationResponse.h>
#include <tencentcloud/cvd/v20201104/model/ModifyImageAttrsRequest.h>
#include <tencentcloud/cvd/v20201104/model/ModifyImageAttrsResponse.h>
#include <tencentcloud/cvd/v20201104/model/ModifyInstanceBasicAttributeRequest.h>
#include <tencentcloud/cvd/v20201104/model/ModifyInstanceBasicAttributeResponse.h>
#include <tencentcloud/cvd/v20201104/model/ModifyInstancesTypeRequest.h>
#include <tencentcloud/cvd/v20201104/model/ModifyInstancesTypeResponse.h>
#include <tencentcloud/cvd/v20201104/model/ModifyInstancesVpcRequest.h>
#include <tencentcloud/cvd/v20201104/model/ModifyInstancesVpcResponse.h>
#include <tencentcloud/cvd/v20201104/model/RebootInstancesRequest.h>
#include <tencentcloud/cvd/v20201104/model/RebootInstancesResponse.h>
#include <tencentcloud/cvd/v20201104/model/RemoveDataDisksRequest.h>
#include <tencentcloud/cvd/v20201104/model/RemoveDataDisksResponse.h>
#include <tencentcloud/cvd/v20201104/model/RemovePolicyRequest.h>
#include <tencentcloud/cvd/v20201104/model/RemovePolicyResponse.h>
#include <tencentcloud/cvd/v20201104/model/RenewInstancesRequest.h>
#include <tencentcloud/cvd/v20201104/model/RenewInstancesResponse.h>
#include <tencentcloud/cvd/v20201104/model/ResetInstancesRequest.h>
#include <tencentcloud/cvd/v20201104/model/ResetInstancesResponse.h>
#include <tencentcloud/cvd/v20201104/model/RunCommandRequest.h>
#include <tencentcloud/cvd/v20201104/model/RunCommandResponse.h>
#include <tencentcloud/cvd/v20201104/model/StartInstancesRequest.h>
#include <tencentcloud/cvd/v20201104/model/StartInstancesResponse.h>
#include <tencentcloud/cvd/v20201104/model/StopCommandTasksRequest.h>
#include <tencentcloud/cvd/v20201104/model/StopCommandTasksResponse.h>
#include <tencentcloud/cvd/v20201104/model/StopInstancesRequest.h>
#include <tencentcloud/cvd/v20201104/model/StopInstancesResponse.h>
#include <tencentcloud/cvd/v20201104/model/StopInvocationRequest.h>
#include <tencentcloud/cvd/v20201104/model/StopInvocationResponse.h>
#include <tencentcloud/cvd/v20201104/model/StopSessionRequest.h>
#include <tencentcloud/cvd/v20201104/model/StopSessionResponse.h>
#include <tencentcloud/cvd/v20201104/model/TerminateInstancesRequest.h>
#include <tencentcloud/cvd/v20201104/model/TerminateInstancesResponse.h>
#include <tencentcloud/cvd/v20201104/model/UnbindInstancesRequest.h>
#include <tencentcloud/cvd/v20201104/model/UnbindInstancesResponse.h>
#include <tencentcloud/cvd/v20201104/model/UpdatePolicyRequest.h>
#include <tencentcloud/cvd/v20201104/model/UpdatePolicyResponse.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            class CvdClient : public AbstractClient
            {
            public:
                CvdClient(const Credential &credential, const std::string &region);
                CvdClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssociateSecurityGroupResponse> AssociateSecurityGroupOutcome;
                typedef std::future<AssociateSecurityGroupOutcome> AssociateSecurityGroupOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::AssociateSecurityGroupRequest&, AssociateSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::BindInstancesResponse> BindInstancesOutcome;
                typedef std::future<BindInstancesOutcome> BindInstancesOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::BindInstancesRequest&, BindInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCommandTaskResponse> CreateCommandTaskOutcome;
                typedef std::future<CreateCommandTaskOutcome> CreateCommandTaskOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::CreateCommandTaskRequest&, CreateCommandTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommandTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataDiskResponse> CreateDataDiskOutcome;
                typedef std::future<CreateDataDiskOutcome> CreateDataDiskOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::CreateDataDiskRequest&, CreateDataDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataDiskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainControlPolicyResponse> CreateDomainControlPolicyOutcome;
                typedef std::future<CreateDomainControlPolicyOutcome> CreateDomainControlPolicyOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::CreateDomainControlPolicyRequest&, CreateDomainControlPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainControlPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageResponse> CreateImageOutcome;
                typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::CreateImageRequest&, CreateImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstancesResponse> CreateInstancesOutcome;
                typedef std::future<CreateInstancesOutcome> CreateInstancesOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::CreateInstancesRequest&, CreateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePolicyResponse> CreatePolicyOutcome;
                typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::CreatePolicyRequest&, CreatePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCommandTasksResponse> DeleteCommandTasksOutcome;
                typedef std::future<DeleteCommandTasksOutcome> DeleteCommandTasksOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DeleteCommandTasksRequest&, DeleteCommandTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCommandTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainControlPolicyResponse> DeleteDomainControlPolicyOutcome;
                typedef std::future<DeleteDomainControlPolicyOutcome> DeleteDomainControlPolicyOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DeleteDomainControlPolicyRequest&, DeleteDomainControlPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainControlPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImagesResponse> DeleteImagesOutcome;
                typedef std::future<DeleteImagesOutcome> DeleteImagesOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DeleteImagesRequest&, DeleteImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCommandTasksResponse> DescribeCommandTasksOutcome;
                typedef std::future<DescribeCommandTasksOutcome> DescribeCommandTasksOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeCommandTasksRequest&, DescribeCommandTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommandTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImagesResponse> DescribeImagesOutcome;
                typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeImagesRequest&, DescribeImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceFetchMsgResponse> DescribeInstanceFetchMsgOutcome;
                typedef std::future<DescribeInstanceFetchMsgOutcome> DescribeInstanceFetchMsgOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeInstanceFetchMsgRequest&, DescribeInstanceFetchMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceFetchMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceGraphDataResponse> DescribeInstanceGraphDataOutcome;
                typedef std::future<DescribeInstanceGraphDataOutcome> DescribeInstanceGraphDataOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeInstanceGraphDataRequest&, DescribeInstanceGraphDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceGraphDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLoginMsgResponse> DescribeInstanceLoginMsgOutcome;
                typedef std::future<DescribeInstanceLoginMsgOutcome> DescribeInstanceLoginMsgOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeInstanceLoginMsgRequest&, DescribeInstanceLoginMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLoginMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceMonitorDataResponse> DescribeInstanceMonitorDataOutcome;
                typedef std::future<DescribeInstanceMonitorDataOutcome> DescribeInstanceMonitorDataOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeInstanceMonitorDataRequest&, DescribeInstanceMonitorDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceRegionDistributionResponse> DescribeInstanceRegionDistributionOutcome;
                typedef std::future<DescribeInstanceRegionDistributionOutcome> DescribeInstanceRegionDistributionOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeInstanceRegionDistributionRequest&, DescribeInstanceRegionDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceRegionDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesBindStatusResponse> DescribeInstancesBindStatusOutcome;
                typedef std::future<DescribeInstancesBindStatusOutcome> DescribeInstancesBindStatusOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeInstancesBindStatusRequest&, DescribeInstancesBindStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesBindStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesStatusResponse> DescribeInstancesStatusOutcome;
                typedef std::future<DescribeInstancesStatusOutcome> DescribeInstancesStatusOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeInstancesStatusRequest&, DescribeInstancesStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInvocationDetailResponse> DescribeInvocationDetailOutcome;
                typedef std::future<DescribeInvocationDetailOutcome> DescribeInvocationDetailOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeInvocationDetailRequest&, DescribeInvocationDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInvocationsResponse> DescribeInvocationsOutcome;
                typedef std::future<DescribeInvocationsOutcome> DescribeInvocationsOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeInvocationsRequest&, DescribeInvocationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyDetailResponse> DescribePolicyDetailOutcome;
                typedef std::future<DescribePolicyDetailOutcome> DescribePolicyDetailOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribePolicyDetailRequest&, DescribePolicyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupsResponse> DescribeSecurityGroupsOutcome;
                typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeSecurityGroupsRequest&, DescribeSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotsResponse> DescribeSnapshotsOutcome;
                typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeSnapshotsRequest&, DescribeSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsageResponse> DescribeUsageOutcome;
                typedef std::future<DescribeUsageOutcome> DescribeUsageOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeUsageRequest&, DescribeUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsersResponse> DescribeUsersOutcome;
                typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DescribeUsersRequest&, DescribeUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupResponse> DisassociateSecurityGroupOutcome;
                typedef std::future<DisassociateSecurityGroupOutcome> DisassociateSecurityGroupOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::DisassociateSecurityGroupRequest&, DisassociateSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDiskConfigurationResponse> ModifyDiskConfigurationOutcome;
                typedef std::future<ModifyDiskConfigurationOutcome> ModifyDiskConfigurationOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::ModifyDiskConfigurationRequest&, ModifyDiskConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiskConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageAttrsResponse> ModifyImageAttrsOutcome;
                typedef std::future<ModifyImageAttrsOutcome> ModifyImageAttrsOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::ModifyImageAttrsRequest&, ModifyImageAttrsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageAttrsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceBasicAttributeResponse> ModifyInstanceBasicAttributeOutcome;
                typedef std::future<ModifyInstanceBasicAttributeOutcome> ModifyInstanceBasicAttributeOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::ModifyInstanceBasicAttributeRequest&, ModifyInstanceBasicAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceBasicAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesTypeResponse> ModifyInstancesTypeOutcome;
                typedef std::future<ModifyInstancesTypeOutcome> ModifyInstancesTypeOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::ModifyInstancesTypeRequest&, ModifyInstancesTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesVpcResponse> ModifyInstancesVpcOutcome;
                typedef std::future<ModifyInstancesVpcOutcome> ModifyInstancesVpcOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::ModifyInstancesVpcRequest&, ModifyInstancesVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::RebootInstancesResponse> RebootInstancesOutcome;
                typedef std::future<RebootInstancesOutcome> RebootInstancesOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::RebootInstancesRequest&, RebootInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveDataDisksResponse> RemoveDataDisksOutcome;
                typedef std::future<RemoveDataDisksOutcome> RemoveDataDisksOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::RemoveDataDisksRequest&, RemoveDataDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDataDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::RemovePolicyResponse> RemovePolicyOutcome;
                typedef std::future<RemovePolicyOutcome> RemovePolicyOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::RemovePolicyRequest&, RemovePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemovePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewInstancesResponse> RenewInstancesOutcome;
                typedef std::future<RenewInstancesOutcome> RenewInstancesOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::RenewInstancesRequest&, RenewInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstancesResponse> ResetInstancesOutcome;
                typedef std::future<ResetInstancesOutcome> ResetInstancesOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::ResetInstancesRequest&, ResetInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RunCommandResponse> RunCommandOutcome;
                typedef std::future<RunCommandOutcome> RunCommandOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::RunCommandRequest&, RunCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::StartInstancesResponse> StartInstancesOutcome;
                typedef std::future<StartInstancesOutcome> StartInstancesOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::StartInstancesRequest&, StartInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StopCommandTasksResponse> StopCommandTasksOutcome;
                typedef std::future<StopCommandTasksOutcome> StopCommandTasksOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::StopCommandTasksRequest&, StopCommandTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopCommandTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::StopInstancesResponse> StopInstancesOutcome;
                typedef std::future<StopInstancesOutcome> StopInstancesOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::StopInstancesRequest&, StopInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StopInvocationResponse> StopInvocationOutcome;
                typedef std::future<StopInvocationOutcome> StopInvocationOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::StopInvocationRequest&, StopInvocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopInvocationAsyncHandler;
                typedef Outcome<Core::Error, Model::StopSessionResponse> StopSessionOutcome;
                typedef std::future<StopSessionOutcome> StopSessionOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::StopSessionRequest&, StopSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateInstancesResponse> TerminateInstancesOutcome;
                typedef std::future<TerminateInstancesOutcome> TerminateInstancesOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::TerminateInstancesRequest&, TerminateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindInstancesResponse> UnbindInstancesOutcome;
                typedef std::future<UnbindInstancesOutcome> UnbindInstancesOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::UnbindInstancesRequest&, UnbindInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePolicyResponse> UpdatePolicyOutcome;
                typedef std::future<UpdatePolicyOutcome> UpdatePolicyOutcomeCallable;
                typedef std::function<void(const CvdClient*, const Model::UpdatePolicyRequest&, UpdatePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePolicyAsyncHandler;



                /**
                 *安全组批量关联云桌面
                 * @param req AssociateSecurityGroupRequest
                 * @return AssociateSecurityGroupOutcome
                 */
                AssociateSecurityGroupOutcome AssociateSecurityGroup(const Model::AssociateSecurityGroupRequest &request);
                void AssociateSecurityGroupAsync(const Model::AssociateSecurityGroupRequest& request, const AssociateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupOutcomeCallable AssociateSecurityGroupCallable(const Model::AssociateSecurityGroupRequest& request);

                /**
                 *绑定桌面
                 * @param req BindInstancesRequest
                 * @return BindInstancesOutcome
                 */
                BindInstancesOutcome BindInstances(const Model::BindInstancesRequest &request);
                void BindInstancesAsync(const Model::BindInstancesRequest& request, const BindInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindInstancesOutcomeCallable BindInstancesCallable(const Model::BindInstancesRequest& request);

                /**
                 *创建批量脚本任务
                 * @param req CreateCommandTaskRequest
                 * @return CreateCommandTaskOutcome
                 */
                CreateCommandTaskOutcome CreateCommandTask(const Model::CreateCommandTaskRequest &request);
                void CreateCommandTaskAsync(const Model::CreateCommandTaskRequest& request, const CreateCommandTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCommandTaskOutcomeCallable CreateCommandTaskCallable(const Model::CreateCommandTaskRequest& request);

                /**
                 *实例新增数据盘
                 * @param req CreateDataDiskRequest
                 * @return CreateDataDiskOutcome
                 */
                CreateDataDiskOutcome CreateDataDisk(const Model::CreateDataDiskRequest &request);
                void CreateDataDiskAsync(const Model::CreateDataDiskRequest& request, const CreateDataDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataDiskOutcomeCallable CreateDataDiskCallable(const Model::CreateDataDiskRequest& request);

                /**
                 *新建域名访问控制策略
                 * @param req CreateDomainControlPolicyRequest
                 * @return CreateDomainControlPolicyOutcome
                 */
                CreateDomainControlPolicyOutcome CreateDomainControlPolicy(const Model::CreateDomainControlPolicyRequest &request);
                void CreateDomainControlPolicyAsync(const Model::CreateDomainControlPolicyRequest& request, const CreateDomainControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainControlPolicyOutcomeCallable CreateDomainControlPolicyCallable(const Model::CreateDomainControlPolicyRequest& request);

                /**
                 *创建自定义镜像。
                 * @param req CreateImageRequest
                 * @return CreateImageOutcome
                 */
                CreateImageOutcome CreateImage(const Model::CreateImageRequest &request);
                void CreateImageAsync(const Model::CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageOutcomeCallable CreateImageCallable(const Model::CreateImageRequest& request);

                /**
                 *创建云桌面实例
                 * @param req CreateInstancesRequest
                 * @return CreateInstancesOutcome
                 */
                CreateInstancesOutcome CreateInstances(const Model::CreateInstancesRequest &request);
                void CreateInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstancesOutcomeCallable CreateInstancesCallable(const Model::CreateInstancesRequest& request);

                /**
                 *创建策略
                 * @param req CreatePolicyRequest
                 * @return CreatePolicyOutcome
                 */
                CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest &request);
                void CreatePolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePolicyOutcomeCallable CreatePolicyCallable(const Model::CreatePolicyRequest& request);

                /**
                 *删除命令任务
                 * @param req DeleteCommandTasksRequest
                 * @return DeleteCommandTasksOutcome
                 */
                DeleteCommandTasksOutcome DeleteCommandTasks(const Model::DeleteCommandTasksRequest &request);
                void DeleteCommandTasksAsync(const Model::DeleteCommandTasksRequest& request, const DeleteCommandTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCommandTasksOutcomeCallable DeleteCommandTasksCallable(const Model::DeleteCommandTasksRequest& request);

                /**
                 *删除域名访问控制策略
                 * @param req DeleteDomainControlPolicyRequest
                 * @return DeleteDomainControlPolicyOutcome
                 */
                DeleteDomainControlPolicyOutcome DeleteDomainControlPolicy(const Model::DeleteDomainControlPolicyRequest &request);
                void DeleteDomainControlPolicyAsync(const Model::DeleteDomainControlPolicyRequest& request, const DeleteDomainControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainControlPolicyOutcomeCallable DeleteDomainControlPolicyCallable(const Model::DeleteDomainControlPolicyRequest& request);

                /**
                 *用于删除一个或多个自定义镜像。单次最大删除5个。
                 * @param req DeleteImagesRequest
                 * @return DeleteImagesOutcome
                 */
                DeleteImagesOutcome DeleteImages(const Model::DeleteImagesRequest &request);
                void DeleteImagesAsync(const Model::DeleteImagesRequest& request, const DeleteImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImagesOutcomeCallable DeleteImagesCallable(const Model::DeleteImagesRequest& request);

                /**
                 *拉取命令任务详情
                 * @param req DescribeCommandTasksRequest
                 * @return DescribeCommandTasksOutcome
                 */
                DescribeCommandTasksOutcome DescribeCommandTasks(const Model::DescribeCommandTasksRequest &request);
                void DescribeCommandTasksAsync(const Model::DescribeCommandTasksRequest& request, const DescribeCommandTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCommandTasksOutcomeCallable DescribeCommandTasksCallable(const Model::DescribeCommandTasksRequest& request);

                /**
                 *获取云桌面镜像详细信息
                 * @param req DescribeImagesRequest
                 * @return DescribeImagesOutcome
                 */
                DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest &request);
                void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request);

                /**
                 *获取指定实例的登录Fetch信息
                 * @param req DescribeInstanceFetchMsgRequest
                 * @return DescribeInstanceFetchMsgOutcome
                 */
                DescribeInstanceFetchMsgOutcome DescribeInstanceFetchMsg(const Model::DescribeInstanceFetchMsgRequest &request);
                void DescribeInstanceFetchMsgAsync(const Model::DescribeInstanceFetchMsgRequest& request, const DescribeInstanceFetchMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceFetchMsgOutcomeCallable DescribeInstanceFetchMsgCallable(const Model::DescribeInstanceFetchMsgRequest& request);

                /**
                 *获取实例磁盘分区监控数据
                 * @param req DescribeInstanceGraphDataRequest
                 * @return DescribeInstanceGraphDataOutcome
                 */
                DescribeInstanceGraphDataOutcome DescribeInstanceGraphData(const Model::DescribeInstanceGraphDataRequest &request);
                void DescribeInstanceGraphDataAsync(const Model::DescribeInstanceGraphDataRequest& request, const DescribeInstanceGraphDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceGraphDataOutcomeCallable DescribeInstanceGraphDataCallable(const Model::DescribeInstanceGraphDataRequest& request);

                /**
                 *获取指定实例的登录login信息
                 * @param req DescribeInstanceLoginMsgRequest
                 * @return DescribeInstanceLoginMsgOutcome
                 */
                DescribeInstanceLoginMsgOutcome DescribeInstanceLoginMsg(const Model::DescribeInstanceLoginMsgRequest &request);
                void DescribeInstanceLoginMsgAsync(const Model::DescribeInstanceLoginMsgRequest& request, const DescribeInstanceLoginMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLoginMsgOutcomeCallable DescribeInstanceLoginMsgCallable(const Model::DescribeInstanceLoginMsgRequest& request);

                /**
                 *查询实例监控数据
                 * @param req DescribeInstanceMonitorDataRequest
                 * @return DescribeInstanceMonitorDataOutcome
                 */
                DescribeInstanceMonitorDataOutcome DescribeInstanceMonitorData(const Model::DescribeInstanceMonitorDataRequest &request);
                void DescribeInstanceMonitorDataAsync(const Model::DescribeInstanceMonitorDataRequest& request, const DescribeInstanceMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceMonitorDataOutcomeCallable DescribeInstanceMonitorDataCallable(const Model::DescribeInstanceMonitorDataRequest& request);

                /**
                 *获取用户在各个区域云桌面实例个数
                 * @param req DescribeInstanceRegionDistributionRequest
                 * @return DescribeInstanceRegionDistributionOutcome
                 */
                DescribeInstanceRegionDistributionOutcome DescribeInstanceRegionDistribution(const Model::DescribeInstanceRegionDistributionRequest &request);
                void DescribeInstanceRegionDistributionAsync(const Model::DescribeInstanceRegionDistributionRequest& request, const DescribeInstanceRegionDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceRegionDistributionOutcomeCallable DescribeInstanceRegionDistributionCallable(const Model::DescribeInstanceRegionDistributionRequest& request);

                /**
                 *获取云桌面实例详细信息
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *获取桌面实例绑定状态
                 * @param req DescribeInstancesBindStatusRequest
                 * @return DescribeInstancesBindStatusOutcome
                 */
                DescribeInstancesBindStatusOutcome DescribeInstancesBindStatus(const Model::DescribeInstancesBindStatusRequest &request);
                void DescribeInstancesBindStatusAsync(const Model::DescribeInstancesBindStatusRequest& request, const DescribeInstancesBindStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesBindStatusOutcomeCallable DescribeInstancesBindStatusCallable(const Model::DescribeInstancesBindStatusRequest& request);

                /**
                 *获取桌面实例状态
                 * @param req DescribeInstancesStatusRequest
                 * @return DescribeInstancesStatusOutcome
                 */
                DescribeInstancesStatusOutcome DescribeInstancesStatus(const Model::DescribeInstancesStatusRequest &request);
                void DescribeInstancesStatusAsync(const Model::DescribeInstancesStatusRequest& request, const DescribeInstancesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesStatusOutcomeCallable DescribeInstancesStatusCallable(const Model::DescribeInstancesStatusRequest& request);

                /**
                 *查询脚本任务执行的详细情况。
                 * @param req DescribeInvocationDetailRequest
                 * @return DescribeInvocationDetailOutcome
                 */
                DescribeInvocationDetailOutcome DescribeInvocationDetail(const Model::DescribeInvocationDetailRequest &request);
                void DescribeInvocationDetailAsync(const Model::DescribeInvocationDetailRequest& request, const DescribeInvocationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInvocationDetailOutcomeCallable DescribeInvocationDetailCallable(const Model::DescribeInvocationDetailRequest& request);

                /**
                 *查询指定云桌面上的任务列表。
                 * @param req DescribeInvocationsRequest
                 * @return DescribeInvocationsOutcome
                 */
                DescribeInvocationsOutcome DescribeInvocations(const Model::DescribeInvocationsRequest &request);
                void DescribeInvocationsAsync(const Model::DescribeInvocationsRequest& request, const DescribeInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInvocationsOutcomeCallable DescribeInvocationsCallable(const Model::DescribeInvocationsRequest& request);

                /**
                 *拉取租户策略列表 
                 * @param req DescribePolicyDetailRequest
                 * @return DescribePolicyDetailOutcome
                 */
                DescribePolicyDetailOutcome DescribePolicyDetail(const Model::DescribePolicyDetailRequest &request);
                void DescribePolicyDetailAsync(const Model::DescribePolicyDetailRequest& request, const DescribePolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyDetailOutcomeCallable DescribePolicyDetailCallable(const Model::DescribePolicyDetailRequest& request);

                /**
                 *拉取云桌面关联的安全组信息
                 * @param req DescribeSecurityGroupsRequest
                 * @return DescribeSecurityGroupsOutcome
                 */
                DescribeSecurityGroupsOutcome DescribeSecurityGroups(const Model::DescribeSecurityGroupsRequest &request);
                void DescribeSecurityGroupsAsync(const Model::DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupsOutcomeCallable DescribeSecurityGroupsCallable(const Model::DescribeSecurityGroupsRequest& request);

                /**
                 *拉取快照列表
                 * @param req DescribeSnapshotsRequest
                 * @return DescribeSnapshotsOutcome
                 */
                DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest &request);
                void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request);

                /**
                 *拉取实例使用时长详情
                 * @param req DescribeUsageRequest
                 * @return DescribeUsageOutcome
                 */
                DescribeUsageOutcome DescribeUsage(const Model::DescribeUsageRequest &request);
                void DescribeUsageAsync(const Model::DescribeUsageRequest& request, const DescribeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsageOutcomeCallable DescribeUsageCallable(const Model::DescribeUsageRequest& request);

                /**
                 *拉取用户列表
                 * @param req DescribeUsersRequest
                 * @return DescribeUsersOutcome
                 */
                DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest &request);
                void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request);

                /**
                 *安全组批量解关联云桌面
                 * @param req DisassociateSecurityGroupRequest
                 * @return DisassociateSecurityGroupOutcome
                 */
                DisassociateSecurityGroupOutcome DisassociateSecurityGroup(const Model::DisassociateSecurityGroupRequest &request);
                void DisassociateSecurityGroupAsync(const Model::DisassociateSecurityGroupRequest& request, const DisassociateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupOutcomeCallable DisassociateSecurityGroupCallable(const Model::DisassociateSecurityGroupRequest& request);

                /**
                 *实例硬盘扩容
                 * @param req ModifyDiskConfigurationRequest
                 * @return ModifyDiskConfigurationOutcome
                 */
                ModifyDiskConfigurationOutcome ModifyDiskConfiguration(const Model::ModifyDiskConfigurationRequest &request);
                void ModifyDiskConfigurationAsync(const Model::ModifyDiskConfigurationRequest& request, const ModifyDiskConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDiskConfigurationOutcomeCallable ModifyDiskConfigurationCallable(const Model::ModifyDiskConfigurationRequest& request);

                /**
                 *修改镜像属性
                 * @param req ModifyImageAttrsRequest
                 * @return ModifyImageAttrsOutcome
                 */
                ModifyImageAttrsOutcome ModifyImageAttrs(const Model::ModifyImageAttrsRequest &request);
                void ModifyImageAttrsAsync(const Model::ModifyImageAttrsRequest& request, const ModifyImageAttrsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageAttrsOutcomeCallable ModifyImageAttrsCallable(const Model::ModifyImageAttrsRequest& request);

                /**
                 *修改桌面实例属性
                 * @param req ModifyInstanceBasicAttributeRequest
                 * @return ModifyInstanceBasicAttributeOutcome
                 */
                ModifyInstanceBasicAttributeOutcome ModifyInstanceBasicAttribute(const Model::ModifyInstanceBasicAttributeRequest &request);
                void ModifyInstanceBasicAttributeAsync(const Model::ModifyInstanceBasicAttributeRequest& request, const ModifyInstanceBasicAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceBasicAttributeOutcomeCallable ModifyInstanceBasicAttributeCallable(const Model::ModifyInstanceBasicAttributeRequest& request);

                /**
                 *调整实例机型配置
                 * @param req ModifyInstancesTypeRequest
                 * @return ModifyInstancesTypeOutcome
                 */
                ModifyInstancesTypeOutcome ModifyInstancesType(const Model::ModifyInstancesTypeRequest &request);
                void ModifyInstancesTypeAsync(const Model::ModifyInstancesTypeRequest& request, const ModifyInstancesTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesTypeOutcomeCallable ModifyInstancesTypeCallable(const Model::ModifyInstancesTypeRequest& request);

                /**
                 *调整实例私有网络
                 * @param req ModifyInstancesVpcRequest
                 * @return ModifyInstancesVpcOutcome
                 */
                ModifyInstancesVpcOutcome ModifyInstancesVpc(const Model::ModifyInstancesVpcRequest &request);
                void ModifyInstancesVpcAsync(const Model::ModifyInstancesVpcRequest& request, const ModifyInstancesVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesVpcOutcomeCallable ModifyInstancesVpcCallable(const Model::ModifyInstancesVpcRequest& request);

                /**
                 *重启实例
                 * @param req RebootInstancesRequest
                 * @return RebootInstancesOutcome
                 */
                RebootInstancesOutcome RebootInstances(const Model::RebootInstancesRequest &request);
                void RebootInstancesAsync(const Model::RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebootInstancesOutcomeCallable RebootInstancesCallable(const Model::RebootInstancesRequest& request);

                /**
                 *卸载实例数据盘
                 * @param req RemoveDataDisksRequest
                 * @return RemoveDataDisksOutcome
                 */
                RemoveDataDisksOutcome RemoveDataDisks(const Model::RemoveDataDisksRequest &request);
                void RemoveDataDisksAsync(const Model::RemoveDataDisksRequest& request, const RemoveDataDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveDataDisksOutcomeCallable RemoveDataDisksCallable(const Model::RemoveDataDisksRequest& request);

                /**
                 *删除策略
                 * @param req RemovePolicyRequest
                 * @return RemovePolicyOutcome
                 */
                RemovePolicyOutcome RemovePolicy(const Model::RemovePolicyRequest &request);
                void RemovePolicyAsync(const Model::RemovePolicyRequest& request, const RemovePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemovePolicyOutcomeCallable RemovePolicyCallable(const Model::RemovePolicyRequest& request);

                /**
                 *实例续费
                 * @param req RenewInstancesRequest
                 * @return RenewInstancesOutcome
                 */
                RenewInstancesOutcome RenewInstances(const Model::RenewInstancesRequest &request);
                void RenewInstancesAsync(const Model::RenewInstancesRequest& request, const RenewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewInstancesOutcomeCallable RenewInstancesCallable(const Model::RenewInstancesRequest& request);

                /**
                 *实例重置
                 * @param req ResetInstancesRequest
                 * @return ResetInstancesOutcome
                 */
                ResetInstancesOutcome ResetInstances(const Model::ResetInstancesRequest &request);
                void ResetInstancesAsync(const Model::ResetInstancesRequest& request, const ResetInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesOutcomeCallable ResetInstancesCallable(const Model::ResetInstancesRequest& request);

                /**
                 *在指定的云桌面实例上执行脚本任务。
                 * @param req RunCommandRequest
                 * @return RunCommandOutcome
                 */
                RunCommandOutcome RunCommand(const Model::RunCommandRequest &request);
                void RunCommandAsync(const Model::RunCommandRequest& request, const RunCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunCommandOutcomeCallable RunCommandCallable(const Model::RunCommandRequest& request);

                /**
                 *开启实例
                 * @param req StartInstancesRequest
                 * @return StartInstancesOutcome
                 */
                StartInstancesOutcome StartInstances(const Model::StartInstancesRequest &request);
                void StartInstancesAsync(const Model::StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartInstancesOutcomeCallable StartInstancesCallable(const Model::StartInstancesRequest& request);

                /**
                 *停止命令任务
                 * @param req StopCommandTasksRequest
                 * @return StopCommandTasksOutcome
                 */
                StopCommandTasksOutcome StopCommandTasks(const Model::StopCommandTasksRequest &request);
                void StopCommandTasksAsync(const Model::StopCommandTasksRequest& request, const StopCommandTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopCommandTasksOutcomeCallable StopCommandTasksCallable(const Model::StopCommandTasksRequest& request);

                /**
                 *关闭实例
                 * @param req StopInstancesRequest
                 * @return StopInstancesOutcome
                 */
                StopInstancesOutcome StopInstances(const Model::StopInstancesRequest &request);
                void StopInstancesAsync(const Model::StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopInstancesOutcomeCallable StopInstancesCallable(const Model::StopInstancesRequest& request);

                /**
                 *停止脚本任务的执行。
                 * @param req StopInvocationRequest
                 * @return StopInvocationOutcome
                 */
                StopInvocationOutcome StopInvocation(const Model::StopInvocationRequest &request);
                void StopInvocationAsync(const Model::StopInvocationRequest& request, const StopInvocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopInvocationOutcomeCallable StopInvocationCallable(const Model::StopInvocationRequest& request);

                /**
                 *注销或者断开机器当前会话
                 * @param req StopSessionRequest
                 * @return StopSessionOutcome
                 */
                StopSessionOutcome StopSession(const Model::StopSessionRequest &request);
                void StopSessionAsync(const Model::StopSessionRequest& request, const StopSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopSessionOutcomeCallable StopSessionCallable(const Model::StopSessionRequest& request);

                /**
                 *主动退还、销毁退还实例。 
<li>包年包月实例首次调用本接口，且参数DestroyImmediately为false时，实例进入隔离期，再次调用本接口，实例将被销毁，且不可恢复。</li>
<li>包年包月实例，如果参数DestroyImmediately为true来调用此接口，则实例将被直接销毁，且不可恢复。</li>
<li>按量计费实例调用本接口将被直接销毁，且不可恢复。</li>
                 * @param req TerminateInstancesRequest
                 * @return TerminateInstancesOutcome
                 */
                TerminateInstancesOutcome TerminateInstances(const Model::TerminateInstancesRequest &request);
                void TerminateInstancesAsync(const Model::TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateInstancesOutcomeCallable TerminateInstancesCallable(const Model::TerminateInstancesRequest& request);

                /**
                 *解除用户和机器绑定关系
                 * @param req UnbindInstancesRequest
                 * @return UnbindInstancesOutcome
                 */
                UnbindInstancesOutcome UnbindInstances(const Model::UnbindInstancesRequest &request);
                void UnbindInstancesAsync(const Model::UnbindInstancesRequest& request, const UnbindInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindInstancesOutcomeCallable UnbindInstancesCallable(const Model::UnbindInstancesRequest& request);

                /**
                 *更新策略
                 * @param req UpdatePolicyRequest
                 * @return UpdatePolicyOutcome
                 */
                UpdatePolicyOutcome UpdatePolicy(const Model::UpdatePolicyRequest &request);
                void UpdatePolicyAsync(const Model::UpdatePolicyRequest& request, const UpdatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePolicyOutcomeCallable UpdatePolicyCallable(const Model::UpdatePolicyRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_CVDCLIENT_H_
