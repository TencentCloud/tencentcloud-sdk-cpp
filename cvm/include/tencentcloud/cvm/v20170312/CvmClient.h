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

#ifndef TENCENTCLOUD_CVM_V20170312_CVMCLIENT_H_
#define TENCENTCLOUD_CVM_V20170312_CVMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cvm/v20170312/model/AllocateHostsRequest.h>
#include <tencentcloud/cvm/v20170312/model/AllocateHostsResponse.h>
#include <tencentcloud/cvm/v20170312/model/AssociateInstancesKeyPairsRequest.h>
#include <tencentcloud/cvm/v20170312/model/AssociateInstancesKeyPairsResponse.h>
#include <tencentcloud/cvm/v20170312/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/cvm/v20170312/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/cvm/v20170312/model/ConfigureChcAssistVpcRequest.h>
#include <tencentcloud/cvm/v20170312/model/ConfigureChcAssistVpcResponse.h>
#include <tencentcloud/cvm/v20170312/model/ConfigureChcDeployVpcRequest.h>
#include <tencentcloud/cvm/v20170312/model/ConfigureChcDeployVpcResponse.h>
#include <tencentcloud/cvm/v20170312/model/ConvertOperatingSystemsRequest.h>
#include <tencentcloud/cvm/v20170312/model/ConvertOperatingSystemsResponse.h>
#include <tencentcloud/cvm/v20170312/model/CreateDisasterRecoverGroupRequest.h>
#include <tencentcloud/cvm/v20170312/model/CreateDisasterRecoverGroupResponse.h>
#include <tencentcloud/cvm/v20170312/model/CreateHpcClusterRequest.h>
#include <tencentcloud/cvm/v20170312/model/CreateHpcClusterResponse.h>
#include <tencentcloud/cvm/v20170312/model/CreateImageRequest.h>
#include <tencentcloud/cvm/v20170312/model/CreateImageResponse.h>
#include <tencentcloud/cvm/v20170312/model/CreateKeyPairRequest.h>
#include <tencentcloud/cvm/v20170312/model/CreateKeyPairResponse.h>
#include <tencentcloud/cvm/v20170312/model/CreateLaunchTemplateRequest.h>
#include <tencentcloud/cvm/v20170312/model/CreateLaunchTemplateResponse.h>
#include <tencentcloud/cvm/v20170312/model/CreateLaunchTemplateVersionRequest.h>
#include <tencentcloud/cvm/v20170312/model/CreateLaunchTemplateVersionResponse.h>
#include <tencentcloud/cvm/v20170312/model/DeleteDisasterRecoverGroupsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DeleteDisasterRecoverGroupsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DeleteHpcClustersRequest.h>
#include <tencentcloud/cvm/v20170312/model/DeleteHpcClustersResponse.h>
#include <tencentcloud/cvm/v20170312/model/DeleteImagesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DeleteImagesResponse.h>
#include <tencentcloud/cvm/v20170312/model/DeleteInstancesActionTimerRequest.h>
#include <tencentcloud/cvm/v20170312/model/DeleteInstancesActionTimerResponse.h>
#include <tencentcloud/cvm/v20170312/model/DeleteKeyPairsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DeleteKeyPairsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DeleteLaunchTemplateRequest.h>
#include <tencentcloud/cvm/v20170312/model/DeleteLaunchTemplateResponse.h>
#include <tencentcloud/cvm/v20170312/model/DeleteLaunchTemplateVersionsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DeleteLaunchTemplateVersionsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeAccountQuotaRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeAccountQuotaResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeChcDeniedActionsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeChcDeniedActionsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeChcHostsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeChcHostsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeDisasterRecoverGroupQuotaRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeDisasterRecoverGroupQuotaResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeDisasterRecoverGroupsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeDisasterRecoverGroupsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeHostsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeHostsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeHpcClustersRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeHpcClustersResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImageFromFamilyRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImageFromFamilyResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImageQuotaRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImageQuotaResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImageSharePermissionRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImageSharePermissionResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImagesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImagesResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImportImageOsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImportImageOsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstanceFamilyConfigsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstanceFamilyConfigsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstanceInternetBandwidthConfigsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstanceInternetBandwidthConfigsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstanceTypeConfigsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstanceTypeConfigsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstanceVncUrlRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstanceVncUrlResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesActionTimerRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesActionTimerResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesAttributesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesAttributesResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesModificationRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesModificationResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesOperationLimitRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesOperationLimitResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesStatusRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesStatusResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInternetChargeTypeConfigsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInternetChargeTypeConfigsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeKeyPairsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeKeyPairsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeLaunchTemplateVersionsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeLaunchTemplateVersionsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeLaunchTemplatesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeLaunchTemplatesResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeRegionsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeRegionsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeReservedInstancesConfigInfosRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeReservedInstancesConfigInfosResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeReservedInstancesOfferingsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeReservedInstancesOfferingsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeTaskInfoRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeTaskInfoResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeZoneInstanceConfigInfosRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeZoneInstanceConfigInfosResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeZonesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeZonesResponse.h>
#include <tencentcloud/cvm/v20170312/model/DisassociateInstancesKeyPairsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DisassociateInstancesKeyPairsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/cvm/v20170312/model/EnterRescueModeRequest.h>
#include <tencentcloud/cvm/v20170312/model/EnterRescueModeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ExitRescueModeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ExitRescueModeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ExportImagesRequest.h>
#include <tencentcloud/cvm/v20170312/model/ExportImagesResponse.h>
#include <tencentcloud/cvm/v20170312/model/ImportImageRequest.h>
#include <tencentcloud/cvm/v20170312/model/ImportImageResponse.h>
#include <tencentcloud/cvm/v20170312/model/ImportInstancesActionTimerRequest.h>
#include <tencentcloud/cvm/v20170312/model/ImportInstancesActionTimerResponse.h>
#include <tencentcloud/cvm/v20170312/model/ImportKeyPairRequest.h>
#include <tencentcloud/cvm/v20170312/model/ImportKeyPairResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquirePricePurchaseReservedInstancesOfferingRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquirePricePurchaseReservedInstancesOfferingResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceModifyInstancesChargeTypeRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceModifyInstancesChargeTypeResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceRenewHostsRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceRenewHostsResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceRenewInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceRenewInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResetInstanceRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResetInstanceResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResetInstancesInternetMaxBandwidthRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResetInstancesInternetMaxBandwidthResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResetInstancesTypeRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResetInstancesTypeResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResizeInstanceDisksRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResizeInstanceDisksResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceRunInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceRunInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceTerminateInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceTerminateInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyChcAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyChcAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyDisasterRecoverGroupAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyDisasterRecoverGroupAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyHostsAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyHostsAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyHpcClusterAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyHpcClusterAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyImageAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyImageAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyImageSharePermissionRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyImageSharePermissionResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstanceDiskTypeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstanceDiskTypeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesChargeTypeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesChargeTypeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesDisasterRecoverGroupRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesDisasterRecoverGroupResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesProjectRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesProjectResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesRenewFlagRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesRenewFlagResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesVpcAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesVpcAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyKeyPairAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyKeyPairAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyLaunchTemplateDefaultVersionRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyLaunchTemplateDefaultVersionResponse.h>
#include <tencentcloud/cvm/v20170312/model/ProgramFpgaImageRequest.h>
#include <tencentcloud/cvm/v20170312/model/ProgramFpgaImageResponse.h>
#include <tencentcloud/cvm/v20170312/model/PurchaseReservedInstancesOfferingRequest.h>
#include <tencentcloud/cvm/v20170312/model/PurchaseReservedInstancesOfferingResponse.h>
#include <tencentcloud/cvm/v20170312/model/RebootInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/RebootInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/RemoveChcAssistVpcRequest.h>
#include <tencentcloud/cvm/v20170312/model/RemoveChcAssistVpcResponse.h>
#include <tencentcloud/cvm/v20170312/model/RemoveChcDeployVpcRequest.h>
#include <tencentcloud/cvm/v20170312/model/RemoveChcDeployVpcResponse.h>
#include <tencentcloud/cvm/v20170312/model/RenewHostsRequest.h>
#include <tencentcloud/cvm/v20170312/model/RenewHostsResponse.h>
#include <tencentcloud/cvm/v20170312/model/RenewInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/RenewInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/RepairTaskControlRequest.h>
#include <tencentcloud/cvm/v20170312/model/RepairTaskControlResponse.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstanceRequest.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstanceResponse.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstancesInternetMaxBandwidthRequest.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstancesInternetMaxBandwidthResponse.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstancesPasswordRequest.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstancesPasswordResponse.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstancesTypeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstancesTypeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ResizeInstanceDisksRequest.h>
#include <tencentcloud/cvm/v20170312/model/ResizeInstanceDisksResponse.h>
#include <tencentcloud/cvm/v20170312/model/RunInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/RunInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/StartInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/StartInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/StopInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/StopInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/SyncImagesRequest.h>
#include <tencentcloud/cvm/v20170312/model/SyncImagesResponse.h>
#include <tencentcloud/cvm/v20170312/model/TerminateInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/TerminateInstancesResponse.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            class CvmClient : public AbstractClient
            {
            public:
                CvmClient(const Credential &credential, const std::string &region);
                CvmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AllocateHostsResponse> AllocateHostsOutcome;
                typedef std::future<AllocateHostsOutcome> AllocateHostsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::AllocateHostsRequest&, AllocateHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateInstancesKeyPairsResponse> AssociateInstancesKeyPairsOutcome;
                typedef std::future<AssociateInstancesKeyPairsOutcome> AssociateInstancesKeyPairsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::AssociateInstancesKeyPairsRequest&, AssociateInstancesKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateInstancesKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ConfigureChcAssistVpcResponse> ConfigureChcAssistVpcOutcome;
                typedef std::future<ConfigureChcAssistVpcOutcome> ConfigureChcAssistVpcOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ConfigureChcAssistVpcRequest&, ConfigureChcAssistVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureChcAssistVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::ConfigureChcDeployVpcResponse> ConfigureChcDeployVpcOutcome;
                typedef std::future<ConfigureChcDeployVpcOutcome> ConfigureChcDeployVpcOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ConfigureChcDeployVpcRequest&, ConfigureChcDeployVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureChcDeployVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::ConvertOperatingSystemsResponse> ConvertOperatingSystemsOutcome;
                typedef std::future<ConvertOperatingSystemsOutcome> ConvertOperatingSystemsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ConvertOperatingSystemsRequest&, ConvertOperatingSystemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConvertOperatingSystemsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDisasterRecoverGroupResponse> CreateDisasterRecoverGroupOutcome;
                typedef std::future<CreateDisasterRecoverGroupOutcome> CreateDisasterRecoverGroupOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::CreateDisasterRecoverGroupRequest&, CreateDisasterRecoverGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDisasterRecoverGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHpcClusterResponse> CreateHpcClusterOutcome;
                typedef std::future<CreateHpcClusterOutcome> CreateHpcClusterOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::CreateHpcClusterRequest&, CreateHpcClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHpcClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageResponse> CreateImageOutcome;
                typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::CreateImageRequest&, CreateImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKeyPairResponse> CreateKeyPairOutcome;
                typedef std::future<CreateKeyPairOutcome> CreateKeyPairOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::CreateKeyPairRequest&, CreateKeyPairOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyPairAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLaunchTemplateResponse> CreateLaunchTemplateOutcome;
                typedef std::future<CreateLaunchTemplateOutcome> CreateLaunchTemplateOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::CreateLaunchTemplateRequest&, CreateLaunchTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLaunchTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLaunchTemplateVersionResponse> CreateLaunchTemplateVersionOutcome;
                typedef std::future<CreateLaunchTemplateVersionOutcome> CreateLaunchTemplateVersionOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::CreateLaunchTemplateVersionRequest&, CreateLaunchTemplateVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLaunchTemplateVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDisasterRecoverGroupsResponse> DeleteDisasterRecoverGroupsOutcome;
                typedef std::future<DeleteDisasterRecoverGroupsOutcome> DeleteDisasterRecoverGroupsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DeleteDisasterRecoverGroupsRequest&, DeleteDisasterRecoverGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDisasterRecoverGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHpcClustersResponse> DeleteHpcClustersOutcome;
                typedef std::future<DeleteHpcClustersOutcome> DeleteHpcClustersOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DeleteHpcClustersRequest&, DeleteHpcClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHpcClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImagesResponse> DeleteImagesOutcome;
                typedef std::future<DeleteImagesOutcome> DeleteImagesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DeleteImagesRequest&, DeleteImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstancesActionTimerResponse> DeleteInstancesActionTimerOutcome;
                typedef std::future<DeleteInstancesActionTimerOutcome> DeleteInstancesActionTimerOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DeleteInstancesActionTimerRequest&, DeleteInstancesActionTimerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstancesActionTimerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteKeyPairsResponse> DeleteKeyPairsOutcome;
                typedef std::future<DeleteKeyPairsOutcome> DeleteKeyPairsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DeleteKeyPairsRequest&, DeleteKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLaunchTemplateResponse> DeleteLaunchTemplateOutcome;
                typedef std::future<DeleteLaunchTemplateOutcome> DeleteLaunchTemplateOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DeleteLaunchTemplateRequest&, DeleteLaunchTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLaunchTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLaunchTemplateVersionsResponse> DeleteLaunchTemplateVersionsOutcome;
                typedef std::future<DeleteLaunchTemplateVersionsOutcome> DeleteLaunchTemplateVersionsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DeleteLaunchTemplateVersionsRequest&, DeleteLaunchTemplateVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLaunchTemplateVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountQuotaResponse> DescribeAccountQuotaOutcome;
                typedef std::future<DescribeAccountQuotaOutcome> DescribeAccountQuotaOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeAccountQuotaRequest&, DescribeAccountQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChcDeniedActionsResponse> DescribeChcDeniedActionsOutcome;
                typedef std::future<DescribeChcDeniedActionsOutcome> DescribeChcDeniedActionsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeChcDeniedActionsRequest&, DescribeChcDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChcDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChcHostsResponse> DescribeChcHostsOutcome;
                typedef std::future<DescribeChcHostsOutcome> DescribeChcHostsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeChcHostsRequest&, DescribeChcHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChcHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisasterRecoverGroupQuotaResponse> DescribeDisasterRecoverGroupQuotaOutcome;
                typedef std::future<DescribeDisasterRecoverGroupQuotaOutcome> DescribeDisasterRecoverGroupQuotaOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeDisasterRecoverGroupQuotaRequest&, DescribeDisasterRecoverGroupQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisasterRecoverGroupQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisasterRecoverGroupsResponse> DescribeDisasterRecoverGroupsOutcome;
                typedef std::future<DescribeDisasterRecoverGroupsOutcome> DescribeDisasterRecoverGroupsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeDisasterRecoverGroupsRequest&, DescribeDisasterRecoverGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisasterRecoverGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostsResponse> DescribeHostsOutcome;
                typedef std::future<DescribeHostsOutcome> DescribeHostsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeHostsRequest&, DescribeHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHpcClustersResponse> DescribeHpcClustersOutcome;
                typedef std::future<DescribeHpcClustersOutcome> DescribeHpcClustersOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeHpcClustersRequest&, DescribeHpcClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHpcClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageFromFamilyResponse> DescribeImageFromFamilyOutcome;
                typedef std::future<DescribeImageFromFamilyOutcome> DescribeImageFromFamilyOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeImageFromFamilyRequest&, DescribeImageFromFamilyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageFromFamilyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageQuotaResponse> DescribeImageQuotaOutcome;
                typedef std::future<DescribeImageQuotaOutcome> DescribeImageQuotaOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeImageQuotaRequest&, DescribeImageQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageSharePermissionResponse> DescribeImageSharePermissionOutcome;
                typedef std::future<DescribeImageSharePermissionOutcome> DescribeImageSharePermissionOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeImageSharePermissionRequest&, DescribeImageSharePermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSharePermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImagesResponse> DescribeImagesOutcome;
                typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeImagesRequest&, DescribeImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImportImageOsResponse> DescribeImportImageOsOutcome;
                typedef std::future<DescribeImportImageOsOutcome> DescribeImportImageOsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeImportImageOsRequest&, DescribeImportImageOsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImportImageOsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceFamilyConfigsResponse> DescribeInstanceFamilyConfigsOutcome;
                typedef std::future<DescribeInstanceFamilyConfigsOutcome> DescribeInstanceFamilyConfigsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInstanceFamilyConfigsRequest&, DescribeInstanceFamilyConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceFamilyConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceInternetBandwidthConfigsResponse> DescribeInstanceInternetBandwidthConfigsOutcome;
                typedef std::future<DescribeInstanceInternetBandwidthConfigsOutcome> DescribeInstanceInternetBandwidthConfigsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInstanceInternetBandwidthConfigsRequest&, DescribeInstanceInternetBandwidthConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceInternetBandwidthConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceTypeConfigsResponse> DescribeInstanceTypeConfigsOutcome;
                typedef std::future<DescribeInstanceTypeConfigsOutcome> DescribeInstanceTypeConfigsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInstanceTypeConfigsRequest&, DescribeInstanceTypeConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypeConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceVncUrlResponse> DescribeInstanceVncUrlOutcome;
                typedef std::future<DescribeInstanceVncUrlOutcome> DescribeInstanceVncUrlOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInstanceVncUrlRequest&, DescribeInstanceVncUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceVncUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesActionTimerResponse> DescribeInstancesActionTimerOutcome;
                typedef std::future<DescribeInstancesActionTimerOutcome> DescribeInstancesActionTimerOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInstancesActionTimerRequest&, DescribeInstancesActionTimerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesActionTimerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesAttributesResponse> DescribeInstancesAttributesOutcome;
                typedef std::future<DescribeInstancesAttributesOutcome> DescribeInstancesAttributesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInstancesAttributesRequest&, DescribeInstancesAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesModificationResponse> DescribeInstancesModificationOutcome;
                typedef std::future<DescribeInstancesModificationOutcome> DescribeInstancesModificationOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInstancesModificationRequest&, DescribeInstancesModificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesModificationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesOperationLimitResponse> DescribeInstancesOperationLimitOutcome;
                typedef std::future<DescribeInstancesOperationLimitOutcome> DescribeInstancesOperationLimitOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInstancesOperationLimitRequest&, DescribeInstancesOperationLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesOperationLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesStatusResponse> DescribeInstancesStatusOutcome;
                typedef std::future<DescribeInstancesStatusOutcome> DescribeInstancesStatusOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInstancesStatusRequest&, DescribeInstancesStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInternetChargeTypeConfigsResponse> DescribeInternetChargeTypeConfigsOutcome;
                typedef std::future<DescribeInternetChargeTypeConfigsOutcome> DescribeInternetChargeTypeConfigsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInternetChargeTypeConfigsRequest&, DescribeInternetChargeTypeConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInternetChargeTypeConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeyPairsResponse> DescribeKeyPairsOutcome;
                typedef std::future<DescribeKeyPairsOutcome> DescribeKeyPairsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeKeyPairsRequest&, DescribeKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLaunchTemplateVersionsResponse> DescribeLaunchTemplateVersionsOutcome;
                typedef std::future<DescribeLaunchTemplateVersionsOutcome> DescribeLaunchTemplateVersionsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeLaunchTemplateVersionsRequest&, DescribeLaunchTemplateVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLaunchTemplateVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLaunchTemplatesResponse> DescribeLaunchTemplatesOutcome;
                typedef std::future<DescribeLaunchTemplatesOutcome> DescribeLaunchTemplatesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeLaunchTemplatesRequest&, DescribeLaunchTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLaunchTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReservedInstancesConfigInfosResponse> DescribeReservedInstancesConfigInfosOutcome;
                typedef std::future<DescribeReservedInstancesConfigInfosOutcome> DescribeReservedInstancesConfigInfosOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeReservedInstancesConfigInfosRequest&, DescribeReservedInstancesConfigInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReservedInstancesConfigInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReservedInstancesOfferingsResponse> DescribeReservedInstancesOfferingsOutcome;
                typedef std::future<DescribeReservedInstancesOfferingsOutcome> DescribeReservedInstancesOfferingsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeReservedInstancesOfferingsRequest&, DescribeReservedInstancesOfferingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReservedInstancesOfferingsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInfoResponse> DescribeTaskInfoOutcome;
                typedef std::future<DescribeTaskInfoOutcome> DescribeTaskInfoOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeTaskInfoRequest&, DescribeTaskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneInstanceConfigInfosResponse> DescribeZoneInstanceConfigInfosOutcome;
                typedef std::future<DescribeZoneInstanceConfigInfosOutcome> DescribeZoneInstanceConfigInfosOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeZoneInstanceConfigInfosRequest&, DescribeZoneInstanceConfigInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneInstanceConfigInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateInstancesKeyPairsResponse> DisassociateInstancesKeyPairsOutcome;
                typedef std::future<DisassociateInstancesKeyPairsOutcome> DisassociateInstancesKeyPairsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DisassociateInstancesKeyPairsRequest&, DisassociateInstancesKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateInstancesKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::EnterRescueModeResponse> EnterRescueModeOutcome;
                typedef std::future<EnterRescueModeOutcome> EnterRescueModeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::EnterRescueModeRequest&, EnterRescueModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnterRescueModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ExitRescueModeResponse> ExitRescueModeOutcome;
                typedef std::future<ExitRescueModeOutcome> ExitRescueModeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ExitRescueModeRequest&, ExitRescueModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExitRescueModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportImagesResponse> ExportImagesOutcome;
                typedef std::future<ExportImagesOutcome> ExportImagesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ExportImagesRequest&, ExportImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportImageResponse> ImportImageOutcome;
                typedef std::future<ImportImageOutcome> ImportImageOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ImportImageRequest&, ImportImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportImageAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportInstancesActionTimerResponse> ImportInstancesActionTimerOutcome;
                typedef std::future<ImportInstancesActionTimerOutcome> ImportInstancesActionTimerOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ImportInstancesActionTimerRequest&, ImportInstancesActionTimerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportInstancesActionTimerAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportKeyPairResponse> ImportKeyPairOutcome;
                typedef std::future<ImportKeyPairOutcome> ImportKeyPairOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ImportKeyPairRequest&, ImportKeyPairOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportKeyPairAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePricePurchaseReservedInstancesOfferingResponse> InquirePricePurchaseReservedInstancesOfferingOutcome;
                typedef std::future<InquirePricePurchaseReservedInstancesOfferingOutcome> InquirePricePurchaseReservedInstancesOfferingOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquirePricePurchaseReservedInstancesOfferingRequest&, InquirePricePurchaseReservedInstancesOfferingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePricePurchaseReservedInstancesOfferingAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceModifyInstancesChargeTypeResponse> InquiryPriceModifyInstancesChargeTypeOutcome;
                typedef std::future<InquiryPriceModifyInstancesChargeTypeOutcome> InquiryPriceModifyInstancesChargeTypeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquiryPriceModifyInstancesChargeTypeRequest&, InquiryPriceModifyInstancesChargeTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceModifyInstancesChargeTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewHostsResponse> InquiryPriceRenewHostsOutcome;
                typedef std::future<InquiryPriceRenewHostsOutcome> InquiryPriceRenewHostsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquiryPriceRenewHostsRequest&, InquiryPriceRenewHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewInstancesResponse> InquiryPriceRenewInstancesOutcome;
                typedef std::future<InquiryPriceRenewInstancesOutcome> InquiryPriceRenewInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquiryPriceRenewInstancesRequest&, InquiryPriceRenewInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceResetInstanceResponse> InquiryPriceResetInstanceOutcome;
                typedef std::future<InquiryPriceResetInstanceOutcome> InquiryPriceResetInstanceOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquiryPriceResetInstanceRequest&, InquiryPriceResetInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResetInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceResetInstancesInternetMaxBandwidthResponse> InquiryPriceResetInstancesInternetMaxBandwidthOutcome;
                typedef std::future<InquiryPriceResetInstancesInternetMaxBandwidthOutcome> InquiryPriceResetInstancesInternetMaxBandwidthOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquiryPriceResetInstancesInternetMaxBandwidthRequest&, InquiryPriceResetInstancesInternetMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResetInstancesInternetMaxBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceResetInstancesTypeResponse> InquiryPriceResetInstancesTypeOutcome;
                typedef std::future<InquiryPriceResetInstancesTypeOutcome> InquiryPriceResetInstancesTypeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquiryPriceResetInstancesTypeRequest&, InquiryPriceResetInstancesTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResetInstancesTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceResizeInstanceDisksResponse> InquiryPriceResizeInstanceDisksOutcome;
                typedef std::future<InquiryPriceResizeInstanceDisksOutcome> InquiryPriceResizeInstanceDisksOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquiryPriceResizeInstanceDisksRequest&, InquiryPriceResizeInstanceDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResizeInstanceDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRunInstancesResponse> InquiryPriceRunInstancesOutcome;
                typedef std::future<InquiryPriceRunInstancesOutcome> InquiryPriceRunInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquiryPriceRunInstancesRequest&, InquiryPriceRunInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRunInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceTerminateInstancesResponse> InquiryPriceTerminateInstancesOutcome;
                typedef std::future<InquiryPriceTerminateInstancesOutcome> InquiryPriceTerminateInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquiryPriceTerminateInstancesRequest&, InquiryPriceTerminateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceTerminateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyChcAttributeResponse> ModifyChcAttributeOutcome;
                typedef std::future<ModifyChcAttributeOutcome> ModifyChcAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyChcAttributeRequest&, ModifyChcAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyChcAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDisasterRecoverGroupAttributeResponse> ModifyDisasterRecoverGroupAttributeOutcome;
                typedef std::future<ModifyDisasterRecoverGroupAttributeOutcome> ModifyDisasterRecoverGroupAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyDisasterRecoverGroupAttributeRequest&, ModifyDisasterRecoverGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDisasterRecoverGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostsAttributeResponse> ModifyHostsAttributeOutcome;
                typedef std::future<ModifyHostsAttributeOutcome> ModifyHostsAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyHostsAttributeRequest&, ModifyHostsAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostsAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHpcClusterAttributeResponse> ModifyHpcClusterAttributeOutcome;
                typedef std::future<ModifyHpcClusterAttributeOutcome> ModifyHpcClusterAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyHpcClusterAttributeRequest&, ModifyHpcClusterAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHpcClusterAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageAttributeResponse> ModifyImageAttributeOutcome;
                typedef std::future<ModifyImageAttributeOutcome> ModifyImageAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyImageAttributeRequest&, ModifyImageAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageSharePermissionResponse> ModifyImageSharePermissionOutcome;
                typedef std::future<ModifyImageSharePermissionOutcome> ModifyImageSharePermissionOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyImageSharePermissionRequest&, ModifyImageSharePermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageSharePermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceDiskTypeResponse> ModifyInstanceDiskTypeOutcome;
                typedef std::future<ModifyInstanceDiskTypeOutcome> ModifyInstanceDiskTypeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyInstanceDiskTypeRequest&, ModifyInstanceDiskTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceDiskTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesAttributeResponse> ModifyInstancesAttributeOutcome;
                typedef std::future<ModifyInstancesAttributeOutcome> ModifyInstancesAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyInstancesAttributeRequest&, ModifyInstancesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesChargeTypeResponse> ModifyInstancesChargeTypeOutcome;
                typedef std::future<ModifyInstancesChargeTypeOutcome> ModifyInstancesChargeTypeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyInstancesChargeTypeRequest&, ModifyInstancesChargeTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesChargeTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesDisasterRecoverGroupResponse> ModifyInstancesDisasterRecoverGroupOutcome;
                typedef std::future<ModifyInstancesDisasterRecoverGroupOutcome> ModifyInstancesDisasterRecoverGroupOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyInstancesDisasterRecoverGroupRequest&, ModifyInstancesDisasterRecoverGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesDisasterRecoverGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesProjectResponse> ModifyInstancesProjectOutcome;
                typedef std::future<ModifyInstancesProjectOutcome> ModifyInstancesProjectOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyInstancesProjectRequest&, ModifyInstancesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesRenewFlagResponse> ModifyInstancesRenewFlagOutcome;
                typedef std::future<ModifyInstancesRenewFlagOutcome> ModifyInstancesRenewFlagOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyInstancesRenewFlagRequest&, ModifyInstancesRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesVpcAttributeResponse> ModifyInstancesVpcAttributeOutcome;
                typedef std::future<ModifyInstancesVpcAttributeOutcome> ModifyInstancesVpcAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyInstancesVpcAttributeRequest&, ModifyInstancesVpcAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesVpcAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyKeyPairAttributeResponse> ModifyKeyPairAttributeOutcome;
                typedef std::future<ModifyKeyPairAttributeOutcome> ModifyKeyPairAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyKeyPairAttributeRequest&, ModifyKeyPairAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKeyPairAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLaunchTemplateDefaultVersionResponse> ModifyLaunchTemplateDefaultVersionOutcome;
                typedef std::future<ModifyLaunchTemplateDefaultVersionOutcome> ModifyLaunchTemplateDefaultVersionOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyLaunchTemplateDefaultVersionRequest&, ModifyLaunchTemplateDefaultVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLaunchTemplateDefaultVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::ProgramFpgaImageResponse> ProgramFpgaImageOutcome;
                typedef std::future<ProgramFpgaImageOutcome> ProgramFpgaImageOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ProgramFpgaImageRequest&, ProgramFpgaImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProgramFpgaImageAsyncHandler;
                typedef Outcome<Core::Error, Model::PurchaseReservedInstancesOfferingResponse> PurchaseReservedInstancesOfferingOutcome;
                typedef std::future<PurchaseReservedInstancesOfferingOutcome> PurchaseReservedInstancesOfferingOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::PurchaseReservedInstancesOfferingRequest&, PurchaseReservedInstancesOfferingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurchaseReservedInstancesOfferingAsyncHandler;
                typedef Outcome<Core::Error, Model::RebootInstancesResponse> RebootInstancesOutcome;
                typedef std::future<RebootInstancesOutcome> RebootInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::RebootInstancesRequest&, RebootInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveChcAssistVpcResponse> RemoveChcAssistVpcOutcome;
                typedef std::future<RemoveChcAssistVpcOutcome> RemoveChcAssistVpcOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::RemoveChcAssistVpcRequest&, RemoveChcAssistVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveChcAssistVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveChcDeployVpcResponse> RemoveChcDeployVpcOutcome;
                typedef std::future<RemoveChcDeployVpcOutcome> RemoveChcDeployVpcOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::RemoveChcDeployVpcRequest&, RemoveChcDeployVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveChcDeployVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewHostsResponse> RenewHostsOutcome;
                typedef std::future<RenewHostsOutcome> RenewHostsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::RenewHostsRequest&, RenewHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewInstancesResponse> RenewInstancesOutcome;
                typedef std::future<RenewInstancesOutcome> RenewInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::RenewInstancesRequest&, RenewInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RepairTaskControlResponse> RepairTaskControlOutcome;
                typedef std::future<RepairTaskControlOutcome> RepairTaskControlOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::RepairTaskControlRequest&, RepairTaskControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RepairTaskControlAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstanceResponse> ResetInstanceOutcome;
                typedef std::future<ResetInstanceOutcome> ResetInstanceOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ResetInstanceRequest&, ResetInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstancesInternetMaxBandwidthResponse> ResetInstancesInternetMaxBandwidthOutcome;
                typedef std::future<ResetInstancesInternetMaxBandwidthOutcome> ResetInstancesInternetMaxBandwidthOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ResetInstancesInternetMaxBandwidthRequest&, ResetInstancesInternetMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesInternetMaxBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstancesPasswordResponse> ResetInstancesPasswordOutcome;
                typedef std::future<ResetInstancesPasswordOutcome> ResetInstancesPasswordOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ResetInstancesPasswordRequest&, ResetInstancesPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstancesTypeResponse> ResetInstancesTypeOutcome;
                typedef std::future<ResetInstancesTypeOutcome> ResetInstancesTypeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ResetInstancesTypeRequest&, ResetInstancesTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ResizeInstanceDisksResponse> ResizeInstanceDisksOutcome;
                typedef std::future<ResizeInstanceDisksOutcome> ResizeInstanceDisksOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ResizeInstanceDisksRequest&, ResizeInstanceDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResizeInstanceDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::RunInstancesResponse> RunInstancesOutcome;
                typedef std::future<RunInstancesOutcome> RunInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::RunInstancesRequest&, RunInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StartInstancesResponse> StartInstancesOutcome;
                typedef std::future<StartInstancesOutcome> StartInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::StartInstancesRequest&, StartInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StopInstancesResponse> StopInstancesOutcome;
                typedef std::future<StopInstancesOutcome> StopInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::StopInstancesRequest&, StopInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncImagesResponse> SyncImagesOutcome;
                typedef std::future<SyncImagesOutcome> SyncImagesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::SyncImagesRequest&, SyncImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateInstancesResponse> TerminateInstancesOutcome;
                typedef std::future<TerminateInstancesOutcome> TerminateInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::TerminateInstancesRequest&, TerminateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstancesAsyncHandler;



                /**
                 *本接口 (AllocateHosts) 用于创建一个或多个指定配置的CDH实例。
* 当HostChargeType为PREPAID时，必须指定HostChargePrepaid参数。
                 * @param req AllocateHostsRequest
                 * @return AllocateHostsOutcome
                 */
                AllocateHostsOutcome AllocateHosts(const Model::AllocateHostsRequest &request);
                void AllocateHostsAsync(const Model::AllocateHostsRequest& request, const AllocateHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateHostsOutcomeCallable AllocateHostsCallable(const Model::AllocateHostsRequest& request);

                /**
                 *本接口 (AssociateInstancesKeyPairs) 用于将密钥绑定到实例上。

* 仅支持对 `Linux` 操作系统实例进行绑定操作。
* 非强制关机场景下，仅支持对 [STOPPED](https://cloud.tencent.com/document/product/213/15753#InstanceStatus) 状态实例进行绑定操作。
* 强制关机场景下，先执行强制关机，再绑定密钥；如实例原状态为 [RUNNING](https://cloud.tencent.com/document/product/213/15753#InstanceStatus)，绑定完成后实例会自动开机。
* 将密钥的公钥写入到实例的`SSH`配置当中，用户就可以通过该密钥的私钥来登录实例。
* 如果实例原来绑定过密钥，那么原来的密钥将失效。
* 如果实例原来是通过密码登录，绑定密钥后无法使用密码登录。
* 支持批量操作。每次请求批量实例的上限为100。如果批量实例存在不允许操作的实例，操作会以特定错误码返回。
                 * @param req AssociateInstancesKeyPairsRequest
                 * @return AssociateInstancesKeyPairsOutcome
                 */
                AssociateInstancesKeyPairsOutcome AssociateInstancesKeyPairs(const Model::AssociateInstancesKeyPairsRequest &request);
                void AssociateInstancesKeyPairsAsync(const Model::AssociateInstancesKeyPairsRequest& request, const AssociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateInstancesKeyPairsOutcomeCallable AssociateInstancesKeyPairsCallable(const Model::AssociateInstancesKeyPairsRequest& request);

                /**
                 *本接口 (AssociateSecurityGroups) 用于绑定安全组到指定实例。
* 实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表操作成功。
<dx-alert infotype="explain" title="">
多个安全组绑定至实例后，将以绑定顺序作为优先级顺序依次匹配执行。如需调整安全组优先级，请参见 [调整安全组优先级](https://cloud.tencent.com/document/product/213/42842)。
</dx-alert>
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *配置CHC物理服务器的带外和部署网络。传入带外网络和部署网络信息
                 * @param req ConfigureChcAssistVpcRequest
                 * @return ConfigureChcAssistVpcOutcome
                 */
                ConfigureChcAssistVpcOutcome ConfigureChcAssistVpc(const Model::ConfigureChcAssistVpcRequest &request);
                void ConfigureChcAssistVpcAsync(const Model::ConfigureChcAssistVpcRequest& request, const ConfigureChcAssistVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfigureChcAssistVpcOutcomeCallable ConfigureChcAssistVpcCallable(const Model::ConfigureChcAssistVpcRequest& request);

                /**
                 *配置CHC物理服务器部署网络
                 * @param req ConfigureChcDeployVpcRequest
                 * @return ConfigureChcDeployVpcOutcome
                 */
                ConfigureChcDeployVpcOutcome ConfigureChcDeployVpc(const Model::ConfigureChcDeployVpcRequest &request);
                void ConfigureChcDeployVpcAsync(const Model::ConfigureChcDeployVpcRequest& request, const ConfigureChcDeployVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfigureChcDeployVpcOutcomeCallable ConfigureChcDeployVpcCallable(const Model::ConfigureChcDeployVpcRequest& request);

                /**
                 *本接口(ConvertOperatingSystem)用于转换实例的操作系统，仅支持源操作系统为 CentOS 7、CentOS 8 的实例。
                 * @param req ConvertOperatingSystemsRequest
                 * @return ConvertOperatingSystemsOutcome
                 */
                ConvertOperatingSystemsOutcome ConvertOperatingSystems(const Model::ConvertOperatingSystemsRequest &request);
                void ConvertOperatingSystemsAsync(const Model::ConvertOperatingSystemsRequest& request, const ConvertOperatingSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConvertOperatingSystemsOutcomeCallable ConvertOperatingSystemsCallable(const Model::ConvertOperatingSystemsRequest& request);

                /**
                 *本接口 (CreateDisasterRecoverGroup)用于创建[分散置放群组](https://cloud.tencent.com/document/product/213/15486)。创建好的置放群组，可在[创建实例](https://cloud.tencent.com/document/api/213/15730)时指定。
                 * @param req CreateDisasterRecoverGroupRequest
                 * @return CreateDisasterRecoverGroupOutcome
                 */
                CreateDisasterRecoverGroupOutcome CreateDisasterRecoverGroup(const Model::CreateDisasterRecoverGroupRequest &request);
                void CreateDisasterRecoverGroupAsync(const Model::CreateDisasterRecoverGroupRequest& request, const CreateDisasterRecoverGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDisasterRecoverGroupOutcomeCallable CreateDisasterRecoverGroupCallable(const Model::CreateDisasterRecoverGroupRequest& request);

                /**
                 *创建高性能计算集群
                 * @param req CreateHpcClusterRequest
                 * @return CreateHpcClusterOutcome
                 */
                CreateHpcClusterOutcome CreateHpcCluster(const Model::CreateHpcClusterRequest &request);
                void CreateHpcClusterAsync(const Model::CreateHpcClusterRequest& request, const CreateHpcClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHpcClusterOutcomeCallable CreateHpcClusterCallable(const Model::CreateHpcClusterRequest& request);

                /**
                 *本接口(CreateImage)用于将实例的系统盘制作为新镜像，创建后的镜像可以用于创建实例。
                 * @param req CreateImageRequest
                 * @return CreateImageOutcome
                 */
                CreateImageOutcome CreateImage(const Model::CreateImageRequest &request);
                void CreateImageAsync(const Model::CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageOutcomeCallable CreateImageCallable(const Model::CreateImageRequest& request);

                /**
                 *本接口 (CreateKeyPair) 用于创建一个 `OpenSSH RSA` 密钥对，可以用于登录 `Linux` 实例。

* 开发者只需指定密钥对名称，即可由系统自动创建密钥对，并返回所生成的密钥对的 `ID` 及其公钥、私钥的内容。
* 密钥对名称不能和已经存在的密钥对的名称重复。
* 私钥的内容可以保存到文件中作为 `SSH` 的一种认证方式。
* 腾讯云不会保存用户的私钥，请妥善保管。
                 * @param req CreateKeyPairRequest
                 * @return CreateKeyPairOutcome
                 */
                CreateKeyPairOutcome CreateKeyPair(const Model::CreateKeyPairRequest &request);
                void CreateKeyPairAsync(const Model::CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKeyPairOutcomeCallable CreateKeyPairCallable(const Model::CreateKeyPairRequest& request);

                /**
                 *本接口（CreateLaunchTemplate）用于创建实例启动模板。

实例启动模板是一种配置数据并可用于创建实例，其内容包含创建实例所需的配置，比如实例类型，数据盘和系统盘的类型和大小，以及安全组等信息。

初次创建实例模板后，其模板版本为默认版本1，新版本的创建可使用 [CreateLaunchTemplateVersion](https://cloud.tencent.com/document/product/213/66326) 创建，版本号递增。默认情况下，在[RunInstances](https://cloud.tencent.com/document/product/213/15730) 中指定实例启动模板，若不指定模板版本号，则使用默认版本。
                 * @param req CreateLaunchTemplateRequest
                 * @return CreateLaunchTemplateOutcome
                 */
                CreateLaunchTemplateOutcome CreateLaunchTemplate(const Model::CreateLaunchTemplateRequest &request);
                void CreateLaunchTemplateAsync(const Model::CreateLaunchTemplateRequest& request, const CreateLaunchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLaunchTemplateOutcomeCallable CreateLaunchTemplateCallable(const Model::CreateLaunchTemplateRequest& request);

                /**
                 *本接口（CreateLaunchTemplateVersion）根据指定的实例模板ID以及对应的模板版本号创建新的实例启动模板，若未指定模板版本号则使用默认版本号。每个实例启动模板最多创建30个版本。
* 新实例模板中未显式指定的参数值，使用指定版本号对应参数值覆盖。
                 * @param req CreateLaunchTemplateVersionRequest
                 * @return CreateLaunchTemplateVersionOutcome
                 */
                CreateLaunchTemplateVersionOutcome CreateLaunchTemplateVersion(const Model::CreateLaunchTemplateVersionRequest &request);
                void CreateLaunchTemplateVersionAsync(const Model::CreateLaunchTemplateVersionRequest& request, const CreateLaunchTemplateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLaunchTemplateVersionOutcomeCallable CreateLaunchTemplateVersionCallable(const Model::CreateLaunchTemplateVersionRequest& request);

                /**
                 *本接口 (DeleteDisasterRecoverGroups)用于删除[分散置放群组](https://cloud.tencent.com/document/product/213/15486)。只有空的置放群组才能被删除，非空的群组需要先销毁组内所有云服务器，才能执行删除操作，不然会产生删除置放群组失败的错误。
                 * @param req DeleteDisasterRecoverGroupsRequest
                 * @return DeleteDisasterRecoverGroupsOutcome
                 */
                DeleteDisasterRecoverGroupsOutcome DeleteDisasterRecoverGroups(const Model::DeleteDisasterRecoverGroupsRequest &request);
                void DeleteDisasterRecoverGroupsAsync(const Model::DeleteDisasterRecoverGroupsRequest& request, const DeleteDisasterRecoverGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDisasterRecoverGroupsOutcomeCallable DeleteDisasterRecoverGroupsCallable(const Model::DeleteDisasterRecoverGroupsRequest& request);

                /**
                 *当高性能计算集群为空, 即集群内没有任何设备时候, 可以删除该集群。
                 * @param req DeleteHpcClustersRequest
                 * @return DeleteHpcClustersOutcome
                 */
                DeleteHpcClustersOutcome DeleteHpcClusters(const Model::DeleteHpcClustersRequest &request);
                void DeleteHpcClustersAsync(const Model::DeleteHpcClustersRequest& request, const DeleteHpcClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHpcClustersOutcomeCallable DeleteHpcClustersCallable(const Model::DeleteHpcClustersRequest& request);

                /**
                 *本接口（DeleteImages）用于删除一个或多个镜像。

* 当[镜像状态](https://cloud.tencent.com/document/product/213/15753#Image)为`创建中`和`使用中`时, 不允许删除。镜像状态可以通过[DescribeImages](https://cloud.tencent.com/document/api/213/9418)获取。
* 每个地域最多只支持创建500个自定义镜像，删除镜像可以释放账户的配额。
* 当镜像正在被其它账户分享时，不允许删除。
                 * @param req DeleteImagesRequest
                 * @return DeleteImagesOutcome
                 */
                DeleteImagesOutcome DeleteImages(const Model::DeleteImagesRequest &request);
                void DeleteImagesAsync(const Model::DeleteImagesRequest& request, const DeleteImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImagesOutcomeCallable DeleteImagesCallable(const Model::DeleteImagesRequest& request);

                /**
                 *本接口 (DeleteInstancesActionTimer) 用于删除定时任务。
                 * @param req DeleteInstancesActionTimerRequest
                 * @return DeleteInstancesActionTimerOutcome
                 */
                DeleteInstancesActionTimerOutcome DeleteInstancesActionTimer(const Model::DeleteInstancesActionTimerRequest &request);
                void DeleteInstancesActionTimerAsync(const Model::DeleteInstancesActionTimerRequest& request, const DeleteInstancesActionTimerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstancesActionTimerOutcomeCallable DeleteInstancesActionTimerCallable(const Model::DeleteInstancesActionTimerRequest& request);

                /**
                 *本接口 (DeleteKeyPairs) 用于删除已在腾讯云托管的密钥对。

* 可以同时删除多个密钥对。
* 不能删除已被实例或镜像引用的密钥对，所以需要独立判断是否所有密钥对都被成功删除。
                 * @param req DeleteKeyPairsRequest
                 * @return DeleteKeyPairsOutcome
                 */
                DeleteKeyPairsOutcome DeleteKeyPairs(const Model::DeleteKeyPairsRequest &request);
                void DeleteKeyPairsAsync(const Model::DeleteKeyPairsRequest& request, const DeleteKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteKeyPairsOutcomeCallable DeleteKeyPairsCallable(const Model::DeleteKeyPairsRequest& request);

                /**
                 *本接口（DeleteLaunchTemplate）用于删除一个实例启动模板。
                 * @param req DeleteLaunchTemplateRequest
                 * @return DeleteLaunchTemplateOutcome
                 */
                DeleteLaunchTemplateOutcome DeleteLaunchTemplate(const Model::DeleteLaunchTemplateRequest &request);
                void DeleteLaunchTemplateAsync(const Model::DeleteLaunchTemplateRequest& request, const DeleteLaunchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLaunchTemplateOutcomeCallable DeleteLaunchTemplateCallable(const Model::DeleteLaunchTemplateRequest& request);

                /**
                 *本接口（DeleteLaunchTemplateVersions）用于删除一个或者多个实例启动模板版本。
                 * @param req DeleteLaunchTemplateVersionsRequest
                 * @return DeleteLaunchTemplateVersionsOutcome
                 */
                DeleteLaunchTemplateVersionsOutcome DeleteLaunchTemplateVersions(const Model::DeleteLaunchTemplateVersionsRequest &request);
                void DeleteLaunchTemplateVersionsAsync(const Model::DeleteLaunchTemplateVersionsRequest& request, const DeleteLaunchTemplateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLaunchTemplateVersionsOutcomeCallable DeleteLaunchTemplateVersionsCallable(const Model::DeleteLaunchTemplateVersionsRequest& request);

                /**
                 *本接口(DescribeAccountQuota)用于查询用户配额详情。
                 * @param req DescribeAccountQuotaRequest
                 * @return DescribeAccountQuotaOutcome
                 */
                DescribeAccountQuotaOutcome DescribeAccountQuota(const Model::DescribeAccountQuotaRequest &request);
                void DescribeAccountQuotaAsync(const Model::DescribeAccountQuotaRequest& request, const DescribeAccountQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountQuotaOutcomeCallable DescribeAccountQuotaCallable(const Model::DescribeAccountQuotaRequest& request);

                /**
                 *查询CHC物理服务器禁止做的操作，返回给用户
                 * @param req DescribeChcDeniedActionsRequest
                 * @return DescribeChcDeniedActionsOutcome
                 */
                DescribeChcDeniedActionsOutcome DescribeChcDeniedActions(const Model::DescribeChcDeniedActionsRequest &request);
                void DescribeChcDeniedActionsAsync(const Model::DescribeChcDeniedActionsRequest& request, const DescribeChcDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChcDeniedActionsOutcomeCallable DescribeChcDeniedActionsCallable(const Model::DescribeChcDeniedActionsRequest& request);

                /**
                 *本接口 (DescribeChcHosts) 用于查询一个或多个CHC物理服务器详细信息。

* 可以根据实例`ID`、实例名称或者设备类型等信息来查询实例的详细信息。过滤信息详细请见过滤器`Filter`。
* 如果参数为空，返回当前用户一定数量（`Limit`所指定的数量，默认为20）的实例。
                 * @param req DescribeChcHostsRequest
                 * @return DescribeChcHostsOutcome
                 */
                DescribeChcHostsOutcome DescribeChcHosts(const Model::DescribeChcHostsRequest &request);
                void DescribeChcHostsAsync(const Model::DescribeChcHostsRequest& request, const DescribeChcHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChcHostsOutcomeCallable DescribeChcHostsCallable(const Model::DescribeChcHostsRequest& request);

                /**
                 *本接口 (DescribeDisasterRecoverGroupQuota)用于查询[分散置放群组](https://cloud.tencent.com/document/product/213/15486)配额。
                 * @param req DescribeDisasterRecoverGroupQuotaRequest
                 * @return DescribeDisasterRecoverGroupQuotaOutcome
                 */
                DescribeDisasterRecoverGroupQuotaOutcome DescribeDisasterRecoverGroupQuota(const Model::DescribeDisasterRecoverGroupQuotaRequest &request);
                void DescribeDisasterRecoverGroupQuotaAsync(const Model::DescribeDisasterRecoverGroupQuotaRequest& request, const DescribeDisasterRecoverGroupQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisasterRecoverGroupQuotaOutcomeCallable DescribeDisasterRecoverGroupQuotaCallable(const Model::DescribeDisasterRecoverGroupQuotaRequest& request);

                /**
                 *本接口 (DescribeDisasterRecoverGroups)用于查询[分散置放群组](https://cloud.tencent.com/document/product/213/15486)信息。
                 * @param req DescribeDisasterRecoverGroupsRequest
                 * @return DescribeDisasterRecoverGroupsOutcome
                 */
                DescribeDisasterRecoverGroupsOutcome DescribeDisasterRecoverGroups(const Model::DescribeDisasterRecoverGroupsRequest &request);
                void DescribeDisasterRecoverGroupsAsync(const Model::DescribeDisasterRecoverGroupsRequest& request, const DescribeDisasterRecoverGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisasterRecoverGroupsOutcomeCallable DescribeDisasterRecoverGroupsCallable(const Model::DescribeDisasterRecoverGroupsRequest& request);

                /**
                 *本接口 (DescribeHosts) 用于获取一个或多个CDH实例的详细信息。
                 * @param req DescribeHostsRequest
                 * @return DescribeHostsOutcome
                 */
                DescribeHostsOutcome DescribeHosts(const Model::DescribeHostsRequest &request);
                void DescribeHostsAsync(const Model::DescribeHostsRequest& request, const DescribeHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostsOutcomeCallable DescribeHostsCallable(const Model::DescribeHostsRequest& request);

                /**
                 *查询高性能集群信息
                 * @param req DescribeHpcClustersRequest
                 * @return DescribeHpcClustersOutcome
                 */
                DescribeHpcClustersOutcome DescribeHpcClusters(const Model::DescribeHpcClustersRequest &request);
                void DescribeHpcClustersAsync(const Model::DescribeHpcClustersRequest& request, const DescribeHpcClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHpcClustersOutcomeCallable DescribeHpcClustersCallable(const Model::DescribeHpcClustersRequest& request);

                /**
                 *本接口(DescribeImageFromFamily) 用于查看镜像族内可用镜像信息。
                 * @param req DescribeImageFromFamilyRequest
                 * @return DescribeImageFromFamilyOutcome
                 */
                DescribeImageFromFamilyOutcome DescribeImageFromFamily(const Model::DescribeImageFromFamilyRequest &request);
                void DescribeImageFromFamilyAsync(const Model::DescribeImageFromFamilyRequest& request, const DescribeImageFromFamilyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageFromFamilyOutcomeCallable DescribeImageFromFamilyCallable(const Model::DescribeImageFromFamilyRequest& request);

                /**
                 *本接口(DescribeImageQuota)用于查询用户账号的镜像配额。
                 * @param req DescribeImageQuotaRequest
                 * @return DescribeImageQuotaOutcome
                 */
                DescribeImageQuotaOutcome DescribeImageQuota(const Model::DescribeImageQuotaRequest &request);
                void DescribeImageQuotaAsync(const Model::DescribeImageQuotaRequest& request, const DescribeImageQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageQuotaOutcomeCallable DescribeImageQuotaCallable(const Model::DescribeImageQuotaRequest& request);

                /**
                 *本接口（DescribeImageSharePermission）用于查询镜像分享信息。
                 * @param req DescribeImageSharePermissionRequest
                 * @return DescribeImageSharePermissionOutcome
                 */
                DescribeImageSharePermissionOutcome DescribeImageSharePermission(const Model::DescribeImageSharePermissionRequest &request);
                void DescribeImageSharePermissionAsync(const Model::DescribeImageSharePermissionRequest& request, const DescribeImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageSharePermissionOutcomeCallable DescribeImageSharePermissionCallable(const Model::DescribeImageSharePermissionRequest& request);

                /**
                 *本接口(DescribeImages) 用于查看镜像列表。

* 可以通过指定镜像ID来查询指定镜像的详细信息，或通过设定过滤器来查询满足过滤条件的镜像的详细信息。
* 指定偏移(Offset)和限制(Limit)来选择结果中的一部分，默认返回满足条件的前20个镜像信息。
                 * @param req DescribeImagesRequest
                 * @return DescribeImagesOutcome
                 */
                DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest &request);
                void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request);

                /**
                 *查看可以导入的镜像操作系统信息。
                 * @param req DescribeImportImageOsRequest
                 * @return DescribeImportImageOsOutcome
                 */
                DescribeImportImageOsOutcome DescribeImportImageOs(const Model::DescribeImportImageOsRequest &request);
                void DescribeImportImageOsAsync(const Model::DescribeImportImageOsRequest& request, const DescribeImportImageOsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImportImageOsOutcomeCallable DescribeImportImageOsCallable(const Model::DescribeImportImageOsRequest& request);

                /**
                 *本接口（DescribeInstanceFamilyConfigs）查询当前用户和地域所支持的机型族列表信息。
                 * @param req DescribeInstanceFamilyConfigsRequest
                 * @return DescribeInstanceFamilyConfigsOutcome
                 */
                DescribeInstanceFamilyConfigsOutcome DescribeInstanceFamilyConfigs(const Model::DescribeInstanceFamilyConfigsRequest &request);
                void DescribeInstanceFamilyConfigsAsync(const Model::DescribeInstanceFamilyConfigsRequest& request, const DescribeInstanceFamilyConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceFamilyConfigsOutcomeCallable DescribeInstanceFamilyConfigsCallable(const Model::DescribeInstanceFamilyConfigsRequest& request);

                /**
                 *本接口 (DescribeInstanceInternetBandwidthConfigs) 用于查询实例带宽配置。

* 只支持查询`BANDWIDTH_PREPAID`（ 预付费按带宽结算 ）计费模式的带宽配置。
* 接口返回实例的所有带宽配置信息（包含历史的带宽配置信息）。
                 * @param req DescribeInstanceInternetBandwidthConfigsRequest
                 * @return DescribeInstanceInternetBandwidthConfigsOutcome
                 */
                DescribeInstanceInternetBandwidthConfigsOutcome DescribeInstanceInternetBandwidthConfigs(const Model::DescribeInstanceInternetBandwidthConfigsRequest &request);
                void DescribeInstanceInternetBandwidthConfigsAsync(const Model::DescribeInstanceInternetBandwidthConfigsRequest& request, const DescribeInstanceInternetBandwidthConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceInternetBandwidthConfigsOutcomeCallable DescribeInstanceInternetBandwidthConfigsCallable(const Model::DescribeInstanceInternetBandwidthConfigsRequest& request);

                /**
                 *本接口 (DescribeInstanceTypeConfigs) 用于查询实例机型配置。

* 可以根据`zone`、`instance-family`、`instance-type`来查询实例机型配置。过滤条件详见过滤器[`Filter`](https://cloud.tencent.com/document/api/213/15753#Filter)。
* 如果参数为空，返回指定地域的所有实例机型配置。
                 * @param req DescribeInstanceTypeConfigsRequest
                 * @return DescribeInstanceTypeConfigsOutcome
                 */
                DescribeInstanceTypeConfigsOutcome DescribeInstanceTypeConfigs(const Model::DescribeInstanceTypeConfigsRequest &request);
                void DescribeInstanceTypeConfigsAsync(const Model::DescribeInstanceTypeConfigsRequest& request, const DescribeInstanceTypeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTypeConfigsOutcomeCallable DescribeInstanceTypeConfigsCallable(const Model::DescribeInstanceTypeConfigsRequest& request);

                /**
                 *本接口 ( DescribeInstanceVncUrl ) 用于查询实例管理终端地址，获取的地址可用于实例的 VNC 登录。

* 处于 `STOPPED` 状态的机器无法使用此功能。
* 管理终端地址的有效期为 15 秒，调用接口成功后如果 15 秒内不使用该链接进行访问，管理终端地址自动失效，您需要重新查询。
* 管理终端地址一旦被访问，将自动失效，您需要重新查询。
* 如果连接断开，每分钟内重新连接的次数不能超过 30 次。
获取到 `InstanceVncUrl` 后，您需要在链接 `https://img.qcloud.com/qcloud/app/active_vnc/index.html?` 末尾加上参数 `InstanceVncUrl=xxxx`。

  - 参数 `InstanceVncUrl` ：调用接口成功后会返回的 `InstanceVncUrl` 的值。

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
                 *本接口 (DescribeInstances) 用于查询一个或多个实例的详细信息。

* 可以根据实例`ID`、实例名称或者实例计费模式等信息来查询实例的详细信息。过滤信息详细请见过滤器`Filter`。
* 如果参数为空，返回当前用户一定数量（`Limit`所指定的数量，默认为20）的实例。
* 支持查询实例的最新操作（LatestOperation）以及最新操作状态(LatestOperationState)。
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *本接口 (DescribeInstancesActionTimer) 用于查询定时任务信息。
                 * @param req DescribeInstancesActionTimerRequest
                 * @return DescribeInstancesActionTimerOutcome
                 */
                DescribeInstancesActionTimerOutcome DescribeInstancesActionTimer(const Model::DescribeInstancesActionTimerRequest &request);
                void DescribeInstancesActionTimerAsync(const Model::DescribeInstancesActionTimerRequest& request, const DescribeInstancesActionTimerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesActionTimerOutcomeCallable DescribeInstancesActionTimerCallable(const Model::DescribeInstancesActionTimerRequest& request);

                /**
                 *获取指定实例的属性，目前支持查询实例自定义数据User-Data。
                 * @param req DescribeInstancesAttributesRequest
                 * @return DescribeInstancesAttributesOutcome
                 */
                DescribeInstancesAttributesOutcome DescribeInstancesAttributes(const Model::DescribeInstancesAttributesRequest &request);
                void DescribeInstancesAttributesAsync(const Model::DescribeInstancesAttributesRequest& request, const DescribeInstancesAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesAttributesOutcomeCallable DescribeInstancesAttributesCallable(const Model::DescribeInstancesAttributesRequest& request);

                /**
                 *本接口 (DescribeInstancesModification) 用于查询指定实例支持调整的机型配置。
                 * @param req DescribeInstancesModificationRequest
                 * @return DescribeInstancesModificationOutcome
                 */
                DescribeInstancesModificationOutcome DescribeInstancesModification(const Model::DescribeInstancesModificationRequest &request);
                void DescribeInstancesModificationAsync(const Model::DescribeInstancesModificationRequest& request, const DescribeInstancesModificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesModificationOutcomeCallable DescribeInstancesModificationCallable(const Model::DescribeInstancesModificationRequest& request);

                /**
                 *本接口（DescribeInstancesOperationLimit）用于查询实例操作限制。

* 目前支持调整配置操作限制次数查询。
                 * @param req DescribeInstancesOperationLimitRequest
                 * @return DescribeInstancesOperationLimitOutcome
                 */
                DescribeInstancesOperationLimitOutcome DescribeInstancesOperationLimit(const Model::DescribeInstancesOperationLimitRequest &request);
                void DescribeInstancesOperationLimitAsync(const Model::DescribeInstancesOperationLimitRequest& request, const DescribeInstancesOperationLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOperationLimitOutcomeCallable DescribeInstancesOperationLimitCallable(const Model::DescribeInstancesOperationLimitRequest& request);

                /**
                 *本接口 (DescribeInstancesStatus) 用于查询一个或多个实例的状态。

* 可以根据实例`ID`来查询实例的状态。
* 如果参数为空，返回当前用户一定数量（Limit所指定的数量，默认为20）的实例状态。
                 * @param req DescribeInstancesStatusRequest
                 * @return DescribeInstancesStatusOutcome
                 */
                DescribeInstancesStatusOutcome DescribeInstancesStatus(const Model::DescribeInstancesStatusRequest &request);
                void DescribeInstancesStatusAsync(const Model::DescribeInstancesStatusRequest& request, const DescribeInstancesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesStatusOutcomeCallable DescribeInstancesStatusCallable(const Model::DescribeInstancesStatusRequest& request);

                /**
                 *本接口（DescribeInternetChargeTypeConfigs）用于查询网络的计费类型。
                 * @param req DescribeInternetChargeTypeConfigsRequest
                 * @return DescribeInternetChargeTypeConfigsOutcome
                 */
                DescribeInternetChargeTypeConfigsOutcome DescribeInternetChargeTypeConfigs(const Model::DescribeInternetChargeTypeConfigsRequest &request);
                void DescribeInternetChargeTypeConfigsAsync(const Model::DescribeInternetChargeTypeConfigsRequest& request, const DescribeInternetChargeTypeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInternetChargeTypeConfigsOutcomeCallable DescribeInternetChargeTypeConfigsCallable(const Model::DescribeInternetChargeTypeConfigsRequest& request);

                /**
                 *本接口 (DescribeKeyPairs) 用于查询密钥对信息。

* 密钥对是通过一种算法生成的一对密钥，在生成的密钥对中，一个向外界公开，称为公钥；另一个用户自己保留，称为私钥。密钥对的公钥内容可以通过这个接口查询，但私钥内容系统不保留。
                 * @param req DescribeKeyPairsRequest
                 * @return DescribeKeyPairsOutcome
                 */
                DescribeKeyPairsOutcome DescribeKeyPairs(const Model::DescribeKeyPairsRequest &request);
                void DescribeKeyPairsAsync(const Model::DescribeKeyPairsRequest& request, const DescribeKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeyPairsOutcomeCallable DescribeKeyPairsCallable(const Model::DescribeKeyPairsRequest& request);

                /**
                 *本接口（DescribeLaunchTemplateVersions）用于查询实例模板版本信息。
                 * @param req DescribeLaunchTemplateVersionsRequest
                 * @return DescribeLaunchTemplateVersionsOutcome
                 */
                DescribeLaunchTemplateVersionsOutcome DescribeLaunchTemplateVersions(const Model::DescribeLaunchTemplateVersionsRequest &request);
                void DescribeLaunchTemplateVersionsAsync(const Model::DescribeLaunchTemplateVersionsRequest& request, const DescribeLaunchTemplateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLaunchTemplateVersionsOutcomeCallable DescribeLaunchTemplateVersionsCallable(const Model::DescribeLaunchTemplateVersionsRequest& request);

                /**
                 *本接口（DescribeLaunchTemplates）用于查询一个或者多个实例启动模板。
                 * @param req DescribeLaunchTemplatesRequest
                 * @return DescribeLaunchTemplatesOutcome
                 */
                DescribeLaunchTemplatesOutcome DescribeLaunchTemplates(const Model::DescribeLaunchTemplatesRequest &request);
                void DescribeLaunchTemplatesAsync(const Model::DescribeLaunchTemplatesRequest& request, const DescribeLaunchTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLaunchTemplatesOutcomeCallable DescribeLaunchTemplatesCallable(const Model::DescribeLaunchTemplatesRequest& request);

                /**
                 *本接口(DescribeRegions)用于查询地域信息。因平台策略原因，该接口暂时停止更新，为确保您正常调用，可切换至新链接：https://cloud.tencent.com/document/product/1596/77930。
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *本接口(DescribeReservedInstancesConfigInfos)供用户列出可购买预留实例机型配置。预留实例当前只针对国际站白名单用户开放。
                 * @param req DescribeReservedInstancesConfigInfosRequest
                 * @return DescribeReservedInstancesConfigInfosOutcome
                 */
                DescribeReservedInstancesConfigInfosOutcome DescribeReservedInstancesConfigInfos(const Model::DescribeReservedInstancesConfigInfosRequest &request);
                void DescribeReservedInstancesConfigInfosAsync(const Model::DescribeReservedInstancesConfigInfosRequest& request, const DescribeReservedInstancesConfigInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReservedInstancesConfigInfosOutcomeCallable DescribeReservedInstancesConfigInfosCallable(const Model::DescribeReservedInstancesConfigInfosRequest& request);

                /**
                 *本接口(DescribeReservedInstancesOfferings)供用户列出可购买的预留实例配置，预留实例当前只针对国际站白名单用户开放。
                 * @param req DescribeReservedInstancesOfferingsRequest
                 * @return DescribeReservedInstancesOfferingsOutcome
                 */
                DescribeReservedInstancesOfferingsOutcome DescribeReservedInstancesOfferings(const Model::DescribeReservedInstancesOfferingsRequest &request);
                void DescribeReservedInstancesOfferingsAsync(const Model::DescribeReservedInstancesOfferingsRequest& request, const DescribeReservedInstancesOfferingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReservedInstancesOfferingsOutcomeCallable DescribeReservedInstancesOfferingsCallable(const Model::DescribeReservedInstancesOfferingsRequest& request);

                /**
                 *本接口 (DescribeTaskInfo) 用于查询云服务器维修任务列表及详细信息。

- 可以根据实例ID、实例名称或任务状态等信息来查询维修任务列表。过滤信息详情可参考入参说明。
- 如果参数为空，返回当前用户一定数量（`Limit`所指定的数量，默认为20）的维修任务列表。
                 * @param req DescribeTaskInfoRequest
                 * @return DescribeTaskInfoOutcome
                 */
                DescribeTaskInfoOutcome DescribeTaskInfo(const Model::DescribeTaskInfoRequest &request);
                void DescribeTaskInfoAsync(const Model::DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskInfoOutcomeCallable DescribeTaskInfoCallable(const Model::DescribeTaskInfoRequest& request);

                /**
                 *本接口(DescribeZoneInstanceConfigInfos) 获取可用区的机型信息。
                 * @param req DescribeZoneInstanceConfigInfosRequest
                 * @return DescribeZoneInstanceConfigInfosOutcome
                 */
                DescribeZoneInstanceConfigInfosOutcome DescribeZoneInstanceConfigInfos(const Model::DescribeZoneInstanceConfigInfosRequest &request);
                void DescribeZoneInstanceConfigInfosAsync(const Model::DescribeZoneInstanceConfigInfosRequest& request, const DescribeZoneInstanceConfigInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneInstanceConfigInfosOutcomeCallable DescribeZoneInstanceConfigInfosCallable(const Model::DescribeZoneInstanceConfigInfosRequest& request);

                /**
                 *本接口(DescribeZones)用于查询可用区信息。
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *本接口 (DisassociateInstancesKeyPairs) 用于解除实例的密钥绑定关系。

* 仅支持对 Linux 操作系统实例进行解绑操作。
* 非强制关机场景下，仅支持对 [STOPPED](https://cloud.tencent.com/document/product/213/15753#InstanceStatus) 状态实例进行解绑操作。
* 强制关机场景下，先执行强制关机，再解绑密钥；如实例原状态为 [RUNNING](https://cloud.tencent.com/document/product/213/15753#InstanceStatus)，解绑完成后实例会自动开机。
* 解绑密钥后，实例可以通过原来设置的密码登录。
* 如果原来没有设置密码，解绑后将无法使用 `SSH` 登录。可以调用 [ResetInstancesPassword](https://cloud.tencent.com/document/api/213/15736) 接口来设置登录密码。
* 支持批量操作。每次请求批量实例的上限为100。如果批量实例存在不允许操作的实例，操作会以特定错误码返回。
                 * @param req DisassociateInstancesKeyPairsRequest
                 * @return DisassociateInstancesKeyPairsOutcome
                 */
                DisassociateInstancesKeyPairsOutcome DisassociateInstancesKeyPairs(const Model::DisassociateInstancesKeyPairsRequest &request);
                void DisassociateInstancesKeyPairsAsync(const Model::DisassociateInstancesKeyPairsRequest& request, const DisassociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateInstancesKeyPairsOutcomeCallable DisassociateInstancesKeyPairsCallable(const Model::DisassociateInstancesKeyPairsRequest& request);

                /**
                 *本接口 (DisassociateSecurityGroups) 用于解绑实例的指定安全组。
* 实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表操作成功。
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *本接口（EnterRescueMode）用于进入救援模式。
                 * @param req EnterRescueModeRequest
                 * @return EnterRescueModeOutcome
                 */
                EnterRescueModeOutcome EnterRescueMode(const Model::EnterRescueModeRequest &request);
                void EnterRescueModeAsync(const Model::EnterRescueModeRequest& request, const EnterRescueModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnterRescueModeOutcomeCallable EnterRescueModeCallable(const Model::EnterRescueModeRequest& request);

                /**
                 *本接口（ExitRescueMode）用于退出救援模式。
                 * @param req ExitRescueModeRequest
                 * @return ExitRescueModeOutcome
                 */
                ExitRescueModeOutcome ExitRescueMode(const Model::ExitRescueModeRequest &request);
                void ExitRescueModeAsync(const Model::ExitRescueModeRequest& request, const ExitRescueModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExitRescueModeOutcomeCallable ExitRescueModeCallable(const Model::ExitRescueModeRequest& request);

                /**
                 *提供导出自定义镜像到指定COS存储桶的能力
                 * @param req ExportImagesRequest
                 * @return ExportImagesOutcome
                 */
                ExportImagesOutcome ExportImages(const Model::ExportImagesRequest &request);
                void ExportImagesAsync(const Model::ExportImagesRequest& request, const ExportImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportImagesOutcomeCallable ExportImagesCallable(const Model::ExportImagesRequest& request);

                /**
                 *本接口(ImportImage)用于导入镜像，导入后的镜像可用于创建实例。目前支持RAW、VHD、QCOW2、VMDK镜像格式。
                 * @param req ImportImageRequest
                 * @return ImportImageOutcome
                 */
                ImportImageOutcome ImportImage(const Model::ImportImageRequest &request);
                void ImportImageAsync(const Model::ImportImageRequest& request, const ImportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportImageOutcomeCallable ImportImageCallable(const Model::ImportImageRequest& request);

                /**
                 *本接口（ImportInstancesActionTimer）用于导入定时任务
                 * @param req ImportInstancesActionTimerRequest
                 * @return ImportInstancesActionTimerOutcome
                 */
                ImportInstancesActionTimerOutcome ImportInstancesActionTimer(const Model::ImportInstancesActionTimerRequest &request);
                void ImportInstancesActionTimerAsync(const Model::ImportInstancesActionTimerRequest& request, const ImportInstancesActionTimerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportInstancesActionTimerOutcomeCallable ImportInstancesActionTimerCallable(const Model::ImportInstancesActionTimerRequest& request);

                /**
                 *本接口 (ImportKeyPair) 用于导入密钥对。

* 本接口的功能是将密钥对导入到用户账户，并不会自动绑定到实例。如需绑定可以使用[AssociateInstancesKeyPairs](https://cloud.tencent.com/document/product/213/15698)接口。
* 需指定密钥对名称以及该密钥对的公钥文本。
* 如果用户只有私钥，可以通过 `SSL` 工具将私钥转换成公钥后再导入。
                 * @param req ImportKeyPairRequest
                 * @return ImportKeyPairOutcome
                 */
                ImportKeyPairOutcome ImportKeyPair(const Model::ImportKeyPairRequest &request);
                void ImportKeyPairAsync(const Model::ImportKeyPairRequest& request, const ImportKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportKeyPairOutcomeCallable ImportKeyPairCallable(const Model::ImportKeyPairRequest& request);

                /**
                 *本接口(InquirePricePurchaseReservedInstancesOffering)用于创建预留实例询价。本接口仅允许针对购买限制范围内的预留实例配置进行询价。预留实例当前只针对国际站白名单用户开放。
                 * @param req InquirePricePurchaseReservedInstancesOfferingRequest
                 * @return InquirePricePurchaseReservedInstancesOfferingOutcome
                 */
                InquirePricePurchaseReservedInstancesOfferingOutcome InquirePricePurchaseReservedInstancesOffering(const Model::InquirePricePurchaseReservedInstancesOfferingRequest &request);
                void InquirePricePurchaseReservedInstancesOfferingAsync(const Model::InquirePricePurchaseReservedInstancesOfferingRequest& request, const InquirePricePurchaseReservedInstancesOfferingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePricePurchaseReservedInstancesOfferingOutcomeCallable InquirePricePurchaseReservedInstancesOfferingCallable(const Model::InquirePricePurchaseReservedInstancesOfferingRequest& request);

                /**
                 *本接口 (InquiryPriceModifyInstancesChargeType) 用于切换实例的计费模式询价。


* 关机不收费的实例、`批量计算型BC1`和`批量计算型BS1`机型族的实例、设置定时销毁的实例、竞价实例不支持该操作。
                 * @param req InquiryPriceModifyInstancesChargeTypeRequest
                 * @return InquiryPriceModifyInstancesChargeTypeOutcome
                 */
                InquiryPriceModifyInstancesChargeTypeOutcome InquiryPriceModifyInstancesChargeType(const Model::InquiryPriceModifyInstancesChargeTypeRequest &request);
                void InquiryPriceModifyInstancesChargeTypeAsync(const Model::InquiryPriceModifyInstancesChargeTypeRequest& request, const InquiryPriceModifyInstancesChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceModifyInstancesChargeTypeOutcomeCallable InquiryPriceModifyInstancesChargeTypeCallable(const Model::InquiryPriceModifyInstancesChargeTypeRequest& request);

                /**
                 *本接口 (InquiryPriceRenewHosts) 用于续费包年包月`CDH`实例询价。
* 只支持查询包年包月`CDH`实例的续费价格。
                 * @param req InquiryPriceRenewHostsRequest
                 * @return InquiryPriceRenewHostsOutcome
                 */
                InquiryPriceRenewHostsOutcome InquiryPriceRenewHosts(const Model::InquiryPriceRenewHostsRequest &request);
                void InquiryPriceRenewHostsAsync(const Model::InquiryPriceRenewHostsRequest& request, const InquiryPriceRenewHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewHostsOutcomeCallable InquiryPriceRenewHostsCallable(const Model::InquiryPriceRenewHostsRequest& request);

                /**
                 *本接口 (InquiryPriceRenewInstances) 用于续费包年包月实例询价。

* 只支持查询包年包月实例的续费价格。
                 * @param req InquiryPriceRenewInstancesRequest
                 * @return InquiryPriceRenewInstancesOutcome
                 */
                InquiryPriceRenewInstancesOutcome InquiryPriceRenewInstances(const Model::InquiryPriceRenewInstancesRequest &request);
                void InquiryPriceRenewInstancesAsync(const Model::InquiryPriceRenewInstancesRequest& request, const InquiryPriceRenewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewInstancesOutcomeCallable InquiryPriceRenewInstancesCallable(const Model::InquiryPriceRenewInstancesRequest& request);

                /**
                 *本接口 (InquiryPriceResetInstance) 用于重装实例询价。

* 如果指定了`ImageId`参数，则使用指定的镜像进行重装询价；否则按照当前实例使用的镜像进行重装询价。
* 目前只支持[系统盘类型](https://cloud.tencent.com/document/api/213/15753#SystemDisk)是`CLOUD_BSSD `、`CLOUD_PREMIUM`、`CLOUD_SSD`类型的实例使用该接口实现`Linux`和`Windows`操作系统切换的重装询价。
* 目前不支持境外地域的实例使用该接口实现`Linux`和`Windows`操作系统切换的重装询价。
                 * @param req InquiryPriceResetInstanceRequest
                 * @return InquiryPriceResetInstanceOutcome
                 */
                InquiryPriceResetInstanceOutcome InquiryPriceResetInstance(const Model::InquiryPriceResetInstanceRequest &request);
                void InquiryPriceResetInstanceAsync(const Model::InquiryPriceResetInstanceRequest& request, const InquiryPriceResetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceResetInstanceOutcomeCallable InquiryPriceResetInstanceCallable(const Model::InquiryPriceResetInstanceRequest& request);

                /**
                 *本接口 (InquiryPriceResetInstancesInternetMaxBandwidth) 用于调整实例公网带宽上限询价。

* 不同机型带宽上限范围不一致，具体限制详见[公网带宽上限](https://cloud.tencent.com/document/product/213/12523)。
* 对于`BANDWIDTH_PREPAID`计费方式的带宽，目前不支持调小带宽，且需要输入参数`StartTime`和`EndTime`，指定调整后的带宽的生效时间段。在这种场景下会涉及扣费，请确保账户余额充足。可通过 [DescribeAccountBalance](https://cloud.tencent.com/document/product/555/20253) 接口查询账户余额。
* 对于 `TRAFFIC_POSTPAID_BY_HOUR`、 `BANDWIDTH_POSTPAID_BY_HOUR` 和 `BANDWIDTH_PACKAGE` 计费方式的带宽，使用该接口调整带宽上限是实时生效的，可以在带宽允许的范围内调大或者调小带宽，不支持输入参数 `StartTime` 和 `EndTime` 。
* 接口不支持调整`BANDWIDTH_POSTPAID_BY_MONTH`计费方式的带宽。
* 接口不支持批量调整 `BANDWIDTH_PREPAID` 和 `BANDWIDTH_POSTPAID_BY_HOUR` 计费方式的带宽。
* 接口不支持批量调整混合计费方式的带宽。例如不支持同时调整`TRAFFIC_POSTPAID_BY_HOUR`和`BANDWIDTH_PACKAGE`计费方式的带宽。
                 * @param req InquiryPriceResetInstancesInternetMaxBandwidthRequest
                 * @return InquiryPriceResetInstancesInternetMaxBandwidthOutcome
                 */
                InquiryPriceResetInstancesInternetMaxBandwidthOutcome InquiryPriceResetInstancesInternetMaxBandwidth(const Model::InquiryPriceResetInstancesInternetMaxBandwidthRequest &request);
                void InquiryPriceResetInstancesInternetMaxBandwidthAsync(const Model::InquiryPriceResetInstancesInternetMaxBandwidthRequest& request, const InquiryPriceResetInstancesInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceResetInstancesInternetMaxBandwidthOutcomeCallable InquiryPriceResetInstancesInternetMaxBandwidthCallable(const Model::InquiryPriceResetInstancesInternetMaxBandwidthRequest& request);

                /**
                 *本接口 (InquiryPriceResetInstancesType) 用于调整实例的机型询价。

* 目前只支持[系统盘类型](https://cloud.tencent.com/document/product/213/15753#SystemDisk)是`CLOUD_BSSD`、`CLOUD_PREMIUM`、`CLOUD_SSD`类型的实例使用该接口进行调整机型询价。
* 目前不支持[CDH](https://cloud.tencent.com/document/product/416)实例使用该接口调整机型询价。
                 * @param req InquiryPriceResetInstancesTypeRequest
                 * @return InquiryPriceResetInstancesTypeOutcome
                 */
                InquiryPriceResetInstancesTypeOutcome InquiryPriceResetInstancesType(const Model::InquiryPriceResetInstancesTypeRequest &request);
                void InquiryPriceResetInstancesTypeAsync(const Model::InquiryPriceResetInstancesTypeRequest& request, const InquiryPriceResetInstancesTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceResetInstancesTypeOutcomeCallable InquiryPriceResetInstancesTypeCallable(const Model::InquiryPriceResetInstancesTypeRequest& request);

                /**
                 *本接口 (InquiryPriceResizeInstanceDisks) 用于扩容实例的数据盘询价。

* 目前只支持扩容非弹性数据盘（[DescribeDisks ](https://cloud.tencent.com/document/api/362/16315)接口返回值中的`Portable`为`false`表示非弹性）询价。
* 目前不支持[CDH](https://cloud.tencent.com/document/product/416)实例使用该接口扩容数据盘询价。
* 目前只支持扩容一块数据盘询价。
                 * @param req InquiryPriceResizeInstanceDisksRequest
                 * @return InquiryPriceResizeInstanceDisksOutcome
                 */
                InquiryPriceResizeInstanceDisksOutcome InquiryPriceResizeInstanceDisks(const Model::InquiryPriceResizeInstanceDisksRequest &request);
                void InquiryPriceResizeInstanceDisksAsync(const Model::InquiryPriceResizeInstanceDisksRequest& request, const InquiryPriceResizeInstanceDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceResizeInstanceDisksOutcomeCallable InquiryPriceResizeInstanceDisksCallable(const Model::InquiryPriceResizeInstanceDisksRequest& request);

                /**
                 *本接口(InquiryPriceRunInstances)用于创建实例询价。本接口仅允许针对购买限制范围内的实例配置进行询价, 详见：[创建实例](https://cloud.tencent.com/document/api/213/15730)。
                 * @param req InquiryPriceRunInstancesRequest
                 * @return InquiryPriceRunInstancesOutcome
                 */
                InquiryPriceRunInstancesOutcome InquiryPriceRunInstances(const Model::InquiryPriceRunInstancesRequest &request);
                void InquiryPriceRunInstancesAsync(const Model::InquiryPriceRunInstancesRequest& request, const InquiryPriceRunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRunInstancesOutcomeCallable InquiryPriceRunInstancesCallable(const Model::InquiryPriceRunInstancesRequest& request);

                /**
                 *本接口 (InquiryPriceTerminateInstances) 用于退还实例询价。

* 查询退还实例可以返还的费用。
* 在退还包年包月实例时，使用ReleasePrepaidDataDisks参数，会在返回值中包含退还挂载的包年包月数据盘返还的费用。
* 支持批量操作，每次请求批量实例的上限为100。如果批量实例存在不允许操作的实例，操作会以特定错误码返回。
                 * @param req InquiryPriceTerminateInstancesRequest
                 * @return InquiryPriceTerminateInstancesOutcome
                 */
                InquiryPriceTerminateInstancesOutcome InquiryPriceTerminateInstances(const Model::InquiryPriceTerminateInstancesRequest &request);
                void InquiryPriceTerminateInstancesAsync(const Model::InquiryPriceTerminateInstancesRequest& request, const InquiryPriceTerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceTerminateInstancesOutcomeCallable InquiryPriceTerminateInstancesCallable(const Model::InquiryPriceTerminateInstancesRequest& request);

                /**
                 *修改CHC物理服务器的属性
                 * @param req ModifyChcAttributeRequest
                 * @return ModifyChcAttributeOutcome
                 */
                ModifyChcAttributeOutcome ModifyChcAttribute(const Model::ModifyChcAttributeRequest &request);
                void ModifyChcAttributeAsync(const Model::ModifyChcAttributeRequest& request, const ModifyChcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyChcAttributeOutcomeCallable ModifyChcAttributeCallable(const Model::ModifyChcAttributeRequest& request);

                /**
                 *本接口 (ModifyDisasterRecoverGroupAttribute)用于修改[分散置放群组](https://cloud.tencent.com/document/product/213/15486)属性。
                 * @param req ModifyDisasterRecoverGroupAttributeRequest
                 * @return ModifyDisasterRecoverGroupAttributeOutcome
                 */
                ModifyDisasterRecoverGroupAttributeOutcome ModifyDisasterRecoverGroupAttribute(const Model::ModifyDisasterRecoverGroupAttributeRequest &request);
                void ModifyDisasterRecoverGroupAttributeAsync(const Model::ModifyDisasterRecoverGroupAttributeRequest& request, const ModifyDisasterRecoverGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDisasterRecoverGroupAttributeOutcomeCallable ModifyDisasterRecoverGroupAttributeCallable(const Model::ModifyDisasterRecoverGroupAttributeRequest& request);

                /**
                 *本接口（ModifyHostsAttribute）用于修改CDH实例的属性，如实例名称和续费标记等。参数HostName和RenewFlag必须设置其中一个，但不能同时设置。
                 * @param req ModifyHostsAttributeRequest
                 * @return ModifyHostsAttributeOutcome
                 */
                ModifyHostsAttributeOutcome ModifyHostsAttribute(const Model::ModifyHostsAttributeRequest &request);
                void ModifyHostsAttributeAsync(const Model::ModifyHostsAttributeRequest& request, const ModifyHostsAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostsAttributeOutcomeCallable ModifyHostsAttributeCallable(const Model::ModifyHostsAttributeRequest& request);

                /**
                 *修改高性能计算集群属性。
                 * @param req ModifyHpcClusterAttributeRequest
                 * @return ModifyHpcClusterAttributeOutcome
                 */
                ModifyHpcClusterAttributeOutcome ModifyHpcClusterAttribute(const Model::ModifyHpcClusterAttributeRequest &request);
                void ModifyHpcClusterAttributeAsync(const Model::ModifyHpcClusterAttributeRequest& request, const ModifyHpcClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHpcClusterAttributeOutcomeCallable ModifyHpcClusterAttributeCallable(const Model::ModifyHpcClusterAttributeRequest& request);

                /**
                 *本接口（ModifyImageAttribute）用于修改镜像属性。

* 已分享的镜像无法修改属性。
                 * @param req ModifyImageAttributeRequest
                 * @return ModifyImageAttributeOutcome
                 */
                ModifyImageAttributeOutcome ModifyImageAttribute(const Model::ModifyImageAttributeRequest &request);
                void ModifyImageAttributeAsync(const Model::ModifyImageAttributeRequest& request, const ModifyImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageAttributeOutcomeCallable ModifyImageAttributeCallable(const Model::ModifyImageAttributeRequest& request);

                /**
                 *本接口（ModifyImageSharePermission）用于修改镜像共享信息。

* 共享镜像后，被共享账户可以通过该镜像创建实例。
* 每个自定义镜像最多可共享给500个账户。
* 共享镜像无法更改名称，描述，仅可用于创建实例。
* 只支持共享到对方账户相同地域。
                 * @param req ModifyImageSharePermissionRequest
                 * @return ModifyImageSharePermissionOutcome
                 */
                ModifyImageSharePermissionOutcome ModifyImageSharePermission(const Model::ModifyImageSharePermissionRequest &request);
                void ModifyImageSharePermissionAsync(const Model::ModifyImageSharePermissionRequest& request, const ModifyImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageSharePermissionOutcomeCallable ModifyImageSharePermissionCallable(const Model::ModifyImageSharePermissionRequest& request);

                /**
                 *本接口 (ModifyInstanceDiskType) 用于修改实例硬盘介质类型。

* 只支持实例的本地系统盘、本地数据盘转化成指定云硬盘介质。
* 只支持实例在关机状态下转换成指定云硬盘介质。
* 不支持竞价实例类型。
* 若实例同时存在本地系统盘和本地数据盘，需同时调整系统盘和数据盘的介质类型，不支持单独针对本地系统盘或本地数据盘修改介质类型。
* 修改前请确保账户余额充足。可通过[ DescribeAccountBalance ](https://cloud.tencent.com/document/product/555/20253)接口查询账户余额。
                 * @param req ModifyInstanceDiskTypeRequest
                 * @return ModifyInstanceDiskTypeOutcome
                 */
                ModifyInstanceDiskTypeOutcome ModifyInstanceDiskType(const Model::ModifyInstanceDiskTypeRequest &request);
                void ModifyInstanceDiskTypeAsync(const Model::ModifyInstanceDiskTypeRequest& request, const ModifyInstanceDiskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceDiskTypeOutcomeCallable ModifyInstanceDiskTypeCallable(const Model::ModifyInstanceDiskTypeRequest& request);

                /**
                 *本接口 (ModifyInstancesAttribute) 用于修改实例的属性。

* 每次请求必须指定实例的一种属性用于修改。
* “实例名称”仅为方便用户自己管理之用，腾讯云并不以此名称作为在线支持或是进行实例管理操作的依据。
* 支持批量操作。每次请求批量实例的上限为100。
* 修改关联安全组时，子机原来关联的安全组会被解绑。
* 实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表操作成功。
* 修改主机名后实例会立即重启，重启后新的主机名生效。
                 * @param req ModifyInstancesAttributeRequest
                 * @return ModifyInstancesAttributeOutcome
                 */
                ModifyInstancesAttributeOutcome ModifyInstancesAttribute(const Model::ModifyInstancesAttributeRequest &request);
                void ModifyInstancesAttributeAsync(const Model::ModifyInstancesAttributeRequest& request, const ModifyInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesAttributeOutcomeCallable ModifyInstancesAttributeCallable(const Model::ModifyInstancesAttributeRequest& request);

                /**
                 *本接口 (ModifyInstancesChargeType) 用于切换实例的计费模式。

* 关机不收费的实例、`批量计算型BC1`和`批量计算型BS1`机型族的实例、设置定时销毁的实例不支持该操作。
* 实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表操作成功。
                 * @param req ModifyInstancesChargeTypeRequest
                 * @return ModifyInstancesChargeTypeOutcome
                 */
                ModifyInstancesChargeTypeOutcome ModifyInstancesChargeType(const Model::ModifyInstancesChargeTypeRequest &request);
                void ModifyInstancesChargeTypeAsync(const Model::ModifyInstancesChargeTypeRequest& request, const ModifyInstancesChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesChargeTypeOutcomeCallable ModifyInstancesChargeTypeCallable(const Model::ModifyInstancesChargeTypeRequest& request);

                /**
                 *本接口 (ModifyInstancesDisasterRecoverGroup) 用于调整实例所在置放群组。
* 目前只支持基础网络或私有网络实例。
                 * @param req ModifyInstancesDisasterRecoverGroupRequest
                 * @return ModifyInstancesDisasterRecoverGroupOutcome
                 */
                ModifyInstancesDisasterRecoverGroupOutcome ModifyInstancesDisasterRecoverGroup(const Model::ModifyInstancesDisasterRecoverGroupRequest &request);
                void ModifyInstancesDisasterRecoverGroupAsync(const Model::ModifyInstancesDisasterRecoverGroupRequest& request, const ModifyInstancesDisasterRecoverGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesDisasterRecoverGroupOutcomeCallable ModifyInstancesDisasterRecoverGroupCallable(const Model::ModifyInstancesDisasterRecoverGroupRequest& request);

                /**
                 *本接口 (ModifyInstancesProject) 用于修改实例所属项目。

* 项目为一个虚拟概念，用户可以在一个账户下面建立多个项目，每个项目中管理不同的资源；将多个不同实例分属到不同项目中，后续使用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728)接口查询实例，项目ID可用于过滤结果。
* 绑定负载均衡的实例不支持修改实例所属项目，请先使用[DeregisterInstancesFromLoadBalancer](https://cloud.tencent.com/document/api/214/1258)接口解绑负载均衡。
* 支持批量操作。每次请求批量实例的上限为100。
* 实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表操作成功。
                 * @param req ModifyInstancesProjectRequest
                 * @return ModifyInstancesProjectOutcome
                 */
                ModifyInstancesProjectOutcome ModifyInstancesProject(const Model::ModifyInstancesProjectRequest &request);
                void ModifyInstancesProjectAsync(const Model::ModifyInstancesProjectRequest& request, const ModifyInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesProjectOutcomeCallable ModifyInstancesProjectCallable(const Model::ModifyInstancesProjectRequest& request);

                /**
                 *本接口 (ModifyInstancesRenewFlag) 用于修改包年包月实例续费标识。

* 实例被标识为自动续费后，每次在实例到期时，会自动续费一个月。
* 支持批量操作。每次请求批量实例的上限为100。
* 实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表操作成功。
                 * @param req ModifyInstancesRenewFlagRequest
                 * @return ModifyInstancesRenewFlagOutcome
                 */
                ModifyInstancesRenewFlagOutcome ModifyInstancesRenewFlag(const Model::ModifyInstancesRenewFlagRequest &request);
                void ModifyInstancesRenewFlagAsync(const Model::ModifyInstancesRenewFlagRequest& request, const ModifyInstancesRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesRenewFlagOutcomeCallable ModifyInstancesRenewFlagCallable(const Model::ModifyInstancesRenewFlagRequest& request);

                /**
                 *本接口(ModifyInstancesVpcAttribute)用于修改实例vpc属性，如私有网络IP。
* 此操作默认会关闭实例，完成后再启动。
* 当指定私有网络ID和子网ID（子网必须在实例所在的可用区）与指定实例所在私有网络不一致时，会将实例迁移至指定的私有网络的子网下。执行此操作前请确保指定的实例上没有绑定[弹性网卡](https://cloud.tencent.com/document/product/576)和[负载均衡](https://cloud.tencent.com/document/product/214)。
* 实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表操作成功。
                 * @param req ModifyInstancesVpcAttributeRequest
                 * @return ModifyInstancesVpcAttributeOutcome
                 */
                ModifyInstancesVpcAttributeOutcome ModifyInstancesVpcAttribute(const Model::ModifyInstancesVpcAttributeRequest &request);
                void ModifyInstancesVpcAttributeAsync(const Model::ModifyInstancesVpcAttributeRequest& request, const ModifyInstancesVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesVpcAttributeOutcomeCallable ModifyInstancesVpcAttributeCallable(const Model::ModifyInstancesVpcAttributeRequest& request);

                /**
                 *本接口 (ModifyKeyPairAttribute) 用于修改密钥对属性。

* 修改密钥对ID所指定的密钥对的名称和描述信息。
* 密钥对名称不能和已经存在的密钥对的名称重复。
* 密钥对ID是密钥对的唯一标识，不可修改。
* 密钥对名称和描述信息必须指定其中之一，也支持同时指定。
                 * @param req ModifyKeyPairAttributeRequest
                 * @return ModifyKeyPairAttributeOutcome
                 */
                ModifyKeyPairAttributeOutcome ModifyKeyPairAttribute(const Model::ModifyKeyPairAttributeRequest &request);
                void ModifyKeyPairAttributeAsync(const Model::ModifyKeyPairAttributeRequest& request, const ModifyKeyPairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyKeyPairAttributeOutcomeCallable ModifyKeyPairAttributeCallable(const Model::ModifyKeyPairAttributeRequest& request);

                /**
                 *本接口（ModifyLaunchTemplateDefaultVersion）用于修改实例启动模板默认版本。
                 * @param req ModifyLaunchTemplateDefaultVersionRequest
                 * @return ModifyLaunchTemplateDefaultVersionOutcome
                 */
                ModifyLaunchTemplateDefaultVersionOutcome ModifyLaunchTemplateDefaultVersion(const Model::ModifyLaunchTemplateDefaultVersionRequest &request);
                void ModifyLaunchTemplateDefaultVersionAsync(const Model::ModifyLaunchTemplateDefaultVersionRequest& request, const ModifyLaunchTemplateDefaultVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLaunchTemplateDefaultVersionOutcomeCallable ModifyLaunchTemplateDefaultVersionCallable(const Model::ModifyLaunchTemplateDefaultVersionRequest& request);

                /**
                 *本接口(ProgramFpgaImage)用于在线烧录由客户提供的FPGA镜像文件到指定实例的指定FPGA卡上。
* 只支持对单个实例发起在线烧录FPGA镜像的操作。
* 支持对单个实例的多块FPGA卡同时烧录FPGA镜像，DBDFs参数为空时，默认对指定实例的所有FPGA卡进行烧录。
                 * @param req ProgramFpgaImageRequest
                 * @return ProgramFpgaImageOutcome
                 */
                ProgramFpgaImageOutcome ProgramFpgaImage(const Model::ProgramFpgaImageRequest &request);
                void ProgramFpgaImageAsync(const Model::ProgramFpgaImageRequest& request, const ProgramFpgaImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProgramFpgaImageOutcomeCallable ProgramFpgaImageCallable(const Model::ProgramFpgaImageRequest& request);

                /**
                 *本接口(PurchaseReservedInstancesOffering)用于用户购买一个或者多个指定配置的预留实例，预留实例当前只针对国际站白名单用户开放。
                 * @param req PurchaseReservedInstancesOfferingRequest
                 * @return PurchaseReservedInstancesOfferingOutcome
                 */
                PurchaseReservedInstancesOfferingOutcome PurchaseReservedInstancesOffering(const Model::PurchaseReservedInstancesOfferingRequest &request);
                void PurchaseReservedInstancesOfferingAsync(const Model::PurchaseReservedInstancesOfferingRequest& request, const PurchaseReservedInstancesOfferingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurchaseReservedInstancesOfferingOutcomeCallable PurchaseReservedInstancesOfferingCallable(const Model::PurchaseReservedInstancesOfferingRequest& request);

                /**
                 *本接口 (RebootInstances) 用于重启实例。

* 只有状态为`RUNNING`的实例才可以进行此操作。
* 接口调用成功时，实例会进入`REBOOTING`状态；重启实例成功时，实例会进入`RUNNING`状态。
* 支持强制重启。强制重启的效果等同于关闭物理计算机的电源开关再重新启动。强制重启可能会导致数据丢失或文件系统损坏，请仅在服务器不能正常重启时使用。
* 支持批量操作，每次请求批量实例的上限为100。
* 实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表操作成功。
                 * @param req RebootInstancesRequest
                 * @return RebootInstancesOutcome
                 */
                RebootInstancesOutcome RebootInstances(const Model::RebootInstancesRequest &request);
                void RebootInstancesAsync(const Model::RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebootInstancesOutcomeCallable RebootInstancesCallable(const Model::RebootInstancesRequest& request);

                /**
                 *清理CHC物理服务器的带外网络和部署网络
                 * @param req RemoveChcAssistVpcRequest
                 * @return RemoveChcAssistVpcOutcome
                 */
                RemoveChcAssistVpcOutcome RemoveChcAssistVpc(const Model::RemoveChcAssistVpcRequest &request);
                void RemoveChcAssistVpcAsync(const Model::RemoveChcAssistVpcRequest& request, const RemoveChcAssistVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveChcAssistVpcOutcomeCallable RemoveChcAssistVpcCallable(const Model::RemoveChcAssistVpcRequest& request);

                /**
                 *清理CHC物理服务器的部署网络
                 * @param req RemoveChcDeployVpcRequest
                 * @return RemoveChcDeployVpcOutcome
                 */
                RemoveChcDeployVpcOutcome RemoveChcDeployVpc(const Model::RemoveChcDeployVpcRequest &request);
                void RemoveChcDeployVpcAsync(const Model::RemoveChcDeployVpcRequest& request, const RemoveChcDeployVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveChcDeployVpcOutcomeCallable RemoveChcDeployVpcCallable(const Model::RemoveChcDeployVpcRequest& request);

                /**
                 *本接口 (RenewHosts) 用于续费包年包月CDH实例。

* 只支持操作包年包月实例，否则操作会以特定[错误码](#6.-.E9.94.99.E8.AF.AF.E7.A0.81)返回。
* 续费时请确保账户余额充足。可通过[`DescribeAccountBalance`](https://cloud.tencent.com/document/product/555/20253)接口查询账户余额。
                 * @param req RenewHostsRequest
                 * @return RenewHostsOutcome
                 */
                RenewHostsOutcome RenewHosts(const Model::RenewHostsRequest &request);
                void RenewHostsAsync(const Model::RenewHostsRequest& request, const RenewHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewHostsOutcomeCallable RenewHostsCallable(const Model::RenewHostsRequest& request);

                /**
                 *本接口 (RenewInstances) 用于续费包年包月实例。

* 只支持操作包年包月实例。
* 续费时请确保账户余额充足。可通过[DescribeAccountBalance](https://cloud.tencent.com/document/product/555/20253)接口查询账户余额。
* 实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表操作成功。
                 * @param req RenewInstancesRequest
                 * @return RenewInstancesOutcome
                 */
                RenewInstancesOutcome RenewInstances(const Model::RenewInstancesRequest &request);
                void RenewInstancesAsync(const Model::RenewInstancesRequest& request, const RenewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewInstancesOutcomeCallable RenewInstancesCallable(const Model::RenewInstancesRequest& request);

                /**
                 *本接口（RepairTaskControl）用于对待授权状态的维修任务进行授权操作。

- 仅当任务状态处于`待授权`状态时，可通过此接口对待授权的维修任务进行授权。
- 调用时需指定产品类型、实例ID、维修任务ID、操作类型。
- 可授权立即处理，或提前预约计划维护时间之前的指定时间进行处理（预约时间需晚于当前时间至少5分钟，且在48小时之内）。
- 针对不同类型的维修任务，提供的可选授权处理策略可参见 [维修任务类型与处理策略](https://cloud.tencent.com/document/product/213/67789)。
                 * @param req RepairTaskControlRequest
                 * @return RepairTaskControlOutcome
                 */
                RepairTaskControlOutcome RepairTaskControl(const Model::RepairTaskControlRequest &request);
                void RepairTaskControlAsync(const Model::RepairTaskControlRequest& request, const RepairTaskControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RepairTaskControlOutcomeCallable RepairTaskControlCallable(const Model::RepairTaskControlRequest& request);

                /**
                 *本接口 (ResetInstance) 用于重装指定实例上的操作系统。

* 如果指定了`ImageId`参数，则使用指定的镜像重装；否则按照当前实例使用的镜像进行重装。
* 系统盘将会被格式化，并重置；请确保系统盘中无重要文件。
* 密码不指定将会通过站内信下发随机密码。
* 目前只支持[系统盘类型](https://cloud.tencent.com/document/api/213/9452#SystemDisk)是`CLOUD_BASIC`、`CLOUD_PREMIUM`、`CLOUD_SSD`、`CLOUD_BSSD`类型的实例使用该接口实现操作系统切换。
* 实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表操作成功。
                 * @param req ResetInstanceRequest
                 * @return ResetInstanceOutcome
                 */
                ResetInstanceOutcome ResetInstance(const Model::ResetInstanceRequest &request);
                void ResetInstanceAsync(const Model::ResetInstanceRequest& request, const ResetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstanceOutcomeCallable ResetInstanceCallable(const Model::ResetInstanceRequest& request);

                /**
                 *本接口 (ResetInstancesInternetMaxBandwidth) 用于调整实例公网带宽上限。

* 不同机型带宽上限范围不一致，具体限制详见[公网带宽上限](https://cloud.tencent.com/document/product/213/12523)。
* 对于 `BANDWIDTH_PREPAID` 计费方式的带宽，需要输入参数 `StartTime` 和 `EndTime` ，指定调整后的带宽的生效时间段。在这种场景下目前不支持调小带宽，会涉及扣费，请确保账户余额充足。可通过 [DescribeAccountBalance](https://cloud.tencent.com/document/product/555/20253)接口查询账户余额。
* 对于 `TRAFFIC_POSTPAID_BY_HOUR` 、 `BANDWIDTH_POSTPAID_BY_HOUR` 和 `BANDWIDTH_PACKAGE` 计费方式的带宽，使用该接口调整带宽上限是实时生效的，可以在带宽允许的范围内调大或者调小带宽，不支持输入参数 `StartTime` 和 `EndTime` 。
* 接口不支持调整 `BANDWIDTH_POSTPAID_BY_MONTH` 计费方式的带宽。
* 接口不支持批量调整 `BANDWIDTH_PREPAID` 和 `BANDWIDTH_POSTPAID_BY_HOUR` 计费方式的带宽。
* 接口不支持批量调整混合计费方式的带宽。例如不支持同时调整 `TRAFFIC_POSTPAID_BY_HOUR` 和 `BANDWIDTH_PACKAGE` 计费方式的带宽。
* 实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表操作成功。
                 * @param req ResetInstancesInternetMaxBandwidthRequest
                 * @return ResetInstancesInternetMaxBandwidthOutcome
                 */
                ResetInstancesInternetMaxBandwidthOutcome ResetInstancesInternetMaxBandwidth(const Model::ResetInstancesInternetMaxBandwidthRequest &request);
                void ResetInstancesInternetMaxBandwidthAsync(const Model::ResetInstancesInternetMaxBandwidthRequest& request, const ResetInstancesInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesInternetMaxBandwidthOutcomeCallable ResetInstancesInternetMaxBandwidthCallable(const Model::ResetInstancesInternetMaxBandwidthRequest& request);

                /**
                 *本接口 (ResetInstancesPassword) 用于将实例操作系统的密码重置为用户指定的密码。

*如果是修改系统管理员密码：实例的操作系统不同，管理员账号也会不一样(`Windows`为`Administrator`，`Ubuntu`为`ubuntu`，其它系统为`root`)。
* 重置处于运行中状态的实例密码，需要设置关机参数`ForceStop`为`TRUE`。如果没有显式指定强制关机参数，则只有处于关机状态的实例才允许执行重置密码操作。
* 支持批量操作。将多个实例操作系统的密码重置为相同的密码。每次请求批量实例的上限为100。
* 实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表操作成功。
                 * @param req ResetInstancesPasswordRequest
                 * @return ResetInstancesPasswordOutcome
                 */
                ResetInstancesPasswordOutcome ResetInstancesPassword(const Model::ResetInstancesPasswordRequest &request);
                void ResetInstancesPasswordAsync(const Model::ResetInstancesPasswordRequest& request, const ResetInstancesPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesPasswordOutcomeCallable ResetInstancesPasswordCallable(const Model::ResetInstancesPasswordRequest& request);

                /**
                 *本接口 (ResetInstancesType) 用于调整实例的机型。

* 目前只支持[系统盘类型](/document/api/213/9452#block_device)是CLOUD_BASIC、CLOUD_PREMIUM、CLOUD_SSD、CLOUD_BSSD类型的实例使用该接口进行机型调整。
* 目前不支持[CDH](https://cloud.tencent.com/document/product/416)实例使用该接口调整机型。对于包年包月实例，使用该接口会涉及扣费，请确保账户余额充足。可通过[DescribeAccountBalance](https://cloud.tencent.com/document/product/555/20253)接口查询账户余额。
* 本接口为异步接口，调整实例配置请求发送成功后会返回一个RequestId，此时操作并未立即完成。实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表调整实例配置操作成功。
                 * @param req ResetInstancesTypeRequest
                 * @return ResetInstancesTypeOutcome
                 */
                ResetInstancesTypeOutcome ResetInstancesType(const Model::ResetInstancesTypeRequest &request);
                void ResetInstancesTypeAsync(const Model::ResetInstancesTypeRequest& request, const ResetInstancesTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesTypeOutcomeCallable ResetInstancesTypeCallable(const Model::ResetInstancesTypeRequest& request);

                /**
                 *本接口 (ResizeInstanceDisks) 用于扩容实例的磁盘。

* 目前只支持扩容非弹性盘（[ DescribeDisks ](https://cloud.tencent.com/document/api/362/16315)接口返回值中的`Portable`为`false`表示非弹性）。
* 对于包年包月实例，使用该接口会涉及扣费，请确保账户余额充足。可通过[ DescribeAccountBalance ](https://cloud.tencent.com/document/product/555/20253)接口查询账户余额。
* 目前只支持扩容一块数据盘。
* 默认扩容方式为关机后扩容。
* 实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表操作成功。
* 如果是系统盘，目前只支持扩容，不支持缩容。
*  如果是运行中的实例，必须指定ForceStop或ResizeOnline任意一个参数为true，否则操作失败。
                 * @param req ResizeInstanceDisksRequest
                 * @return ResizeInstanceDisksOutcome
                 */
                ResizeInstanceDisksOutcome ResizeInstanceDisks(const Model::ResizeInstanceDisksRequest &request);
                void ResizeInstanceDisksAsync(const Model::ResizeInstanceDisksRequest& request, const ResizeInstanceDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResizeInstanceDisksOutcomeCallable ResizeInstanceDisksCallable(const Model::ResizeInstanceDisksRequest& request);

                /**
                 *本接口 (RunInstances) 用于创建一个或多个指定配置的实例。
 
* 实例创建成功后将自动开机启动，[实例状态](https://cloud.tencent.com/document/product/213/15753#InstanceStatus)变为“运行中”。
* 预付费实例的购买会预先扣除本次实例购买所需金额，按小时后付费实例购买会预先冻结本次实例购买一小时内所需金额，在调用本接口前请确保账户余额充足。
* 调用本接口创建实例，支持代金券自动抵扣（注意，代金券不可用于抵扣后付费冻结金额），详情请参考[代金券选用规则](https://cloud.tencent.com/document/product/555/7428)。
* 本接口允许购买的实例数量遵循[CVM实例购买限制](https://cloud.tencent.com/document/product/213/2664)，所创建的实例和官网入口创建的实例共用配额。
* 本接口为异步接口，当创建实例请求下发成功后会返回一个实例`ID`列表和一个`RequestId`，此时创建实例操作并未立即完成。在此期间实例的状态将会处于“PENDING”，实例创建结果可以通过调用 [DescribeInstancesStatus](https://cloud.tencent.com/document/product/213/15738)  接口查询，如果实例状态(InstanceState)由“PENDING(创建中)”变为“RUNNING(运行中)”，则代表实例创建成功，“LAUNCH_FAILED”代表实例创建失败。
                 * @param req RunInstancesRequest
                 * @return RunInstancesOutcome
                 */
                RunInstancesOutcome RunInstances(const Model::RunInstancesRequest &request);
                void RunInstancesAsync(const Model::RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunInstancesOutcomeCallable RunInstancesCallable(const Model::RunInstancesRequest& request);

                /**
                 *本接口 (StartInstances) 用于启动一个或多个实例。

* 只有状态为`STOPPED`的实例才可以进行此操作。
* 接口调用成功时，实例会进入`STARTING`状态；启动实例成功时，实例会进入`RUNNING`状态。
* 支持批量操作。每次请求批量实例的上限为100。
* 本接口为异步接口，启动实例请求发送成功后会返回一个RequestId，此时操作并未立即完成。实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表启动实例操作成功。
                 * @param req StartInstancesRequest
                 * @return StartInstancesOutcome
                 */
                StartInstancesOutcome StartInstances(const Model::StartInstancesRequest &request);
                void StartInstancesAsync(const Model::StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartInstancesOutcomeCallable StartInstancesCallable(const Model::StartInstancesRequest& request);

                /**
                 *本接口 (StopInstances) 用于关闭一个或多个实例。

* 只有状态为`RUNNING`的实例才可以进行此操作。
* 接口调用成功时，实例会进入`STOPPING`状态；关闭实例成功时，实例会进入`STOPPED`状态。
* 支持强制关闭。强制关机的效果等同于关闭物理计算机的电源开关。强制关机可能会导致数据丢失或文件系统损坏，请仅在服务器不能正常关机时使用。
* 支持批量操作。每次请求批量实例的上限为100。
* 本接口为异步接口，关闭实例请求发送成功后会返回一个RequestId，此时操作并未立即完成。实例操作结果可以通过调用 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) 接口查询，如果实例的最新操作状态(LatestOperationState)为“SUCCESS”，则代表关闭实例操作成功。
                 * @param req StopInstancesRequest
                 * @return StopInstancesOutcome
                 */
                StopInstancesOutcome StopInstances(const Model::StopInstancesRequest &request);
                void StopInstancesAsync(const Model::StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopInstancesOutcomeCallable StopInstancesCallable(const Model::StopInstancesRequest& request);

                /**
                 *本接口（SyncImages）用于将自定义镜像同步到其它地区。

* 该接口每次调用只支持同步一个镜像。
* 该接口支持自定义镜像向多个地域同步。
* 共享镜像仅支持同步为源地域（单个）的自定义镜像。
* 自定义镜像仅支持同步为源地域（单个）的加密自定义镜像。
* 单个账号在每个地域最多支持存在500个自定义镜像。
                 * @param req SyncImagesRequest
                 * @return SyncImagesOutcome
                 */
                SyncImagesOutcome SyncImages(const Model::SyncImagesRequest &request);
                void SyncImagesAsync(const Model::SyncImagesRequest& request, const SyncImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncImagesOutcomeCallable SyncImagesCallable(const Model::SyncImagesRequest& request);

                /**
                 *本接口 (TerminateInstances) 用于主动退还实例。

* 不再使用的实例，可通过本接口主动退还。
* 按量计费的实例通过本接口可直接退还；包年包月实例如符合[退还规则](https://cloud.tencent.com/document/product/213/9711)，也可通过本接口主动退还。
* 包年包月实例首次调用本接口，实例将被移至回收站，再次调用本接口，实例将被销毁，且不可恢复。按量计费实例调用本接口将被直接销毁。
* 包年包月实例首次调用本接口，入参中包含ReleasePrepaidDataDisks时，包年包月数据盘同时也会被移至回收站。
* 支持批量操作，每次请求批量实例的上限为100。
* 批量操作时，所有实例的付费类型必须一致。
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

#endif // !TENCENTCLOUD_CVM_V20170312_CVMCLIENT_H_
