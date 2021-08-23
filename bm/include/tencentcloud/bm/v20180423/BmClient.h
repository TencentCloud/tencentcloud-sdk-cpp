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

#ifndef TENCENTCLOUD_BM_V20180423_BMCLIENT_H_
#define TENCENTCLOUD_BM_V20180423_BMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bm/v20180423/model/AttachCamRoleRequest.h>
#include <tencentcloud/bm/v20180423/model/AttachCamRoleResponse.h>
#include <tencentcloud/bm/v20180423/model/BindPsaTagRequest.h>
#include <tencentcloud/bm/v20180423/model/BindPsaTagResponse.h>
#include <tencentcloud/bm/v20180423/model/BuyDevicesRequest.h>
#include <tencentcloud/bm/v20180423/model/BuyDevicesResponse.h>
#include <tencentcloud/bm/v20180423/model/CreateCustomImageRequest.h>
#include <tencentcloud/bm/v20180423/model/CreateCustomImageResponse.h>
#include <tencentcloud/bm/v20180423/model/CreatePsaRegulationRequest.h>
#include <tencentcloud/bm/v20180423/model/CreatePsaRegulationResponse.h>
#include <tencentcloud/bm/v20180423/model/CreateSpotDeviceRequest.h>
#include <tencentcloud/bm/v20180423/model/CreateSpotDeviceResponse.h>
#include <tencentcloud/bm/v20180423/model/CreateUserCmdRequest.h>
#include <tencentcloud/bm/v20180423/model/CreateUserCmdResponse.h>
#include <tencentcloud/bm/v20180423/model/DeleteCustomImagesRequest.h>
#include <tencentcloud/bm/v20180423/model/DeleteCustomImagesResponse.h>
#include <tencentcloud/bm/v20180423/model/DeletePsaRegulationRequest.h>
#include <tencentcloud/bm/v20180423/model/DeletePsaRegulationResponse.h>
#include <tencentcloud/bm/v20180423/model/DeleteUserCmdsRequest.h>
#include <tencentcloud/bm/v20180423/model/DeleteUserCmdsResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeCustomImageProcessRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeCustomImageProcessResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeCustomImagesRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeCustomImagesResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeDeviceClassRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeDeviceClassResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeDeviceClassPartitionRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeDeviceClassPartitionResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeDeviceHardwareInfoRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeDeviceHardwareInfoResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeDeviceInventoryRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeDeviceInventoryResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeDeviceOperationLogRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeDeviceOperationLogResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeDevicePartitionRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeDevicePartitionResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeDevicePositionRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeDevicePositionResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeDevicePriceInfoRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeDevicePriceInfoResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeDevicesRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeDevicesResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeHardwareSpecificationRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeHardwareSpecificationResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeHostedDeviceOutBandInfoRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeHostedDeviceOutBandInfoResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeOperationResultRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeOperationResultResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeOsInfoRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeOsInfoResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribePsaRegulationsRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribePsaRegulationsResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeRegionsRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeRegionsResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeRepairTaskConstantRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeRepairTaskConstantResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeTaskInfoRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeTaskInfoResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeTaskOperationLogRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeTaskOperationLogResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeUserCmdTaskInfoRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeUserCmdTaskInfoResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeUserCmdTasksRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeUserCmdTasksResponse.h>
#include <tencentcloud/bm/v20180423/model/DescribeUserCmdsRequest.h>
#include <tencentcloud/bm/v20180423/model/DescribeUserCmdsResponse.h>
#include <tencentcloud/bm/v20180423/model/DetachCamRoleRequest.h>
#include <tencentcloud/bm/v20180423/model/DetachCamRoleResponse.h>
#include <tencentcloud/bm/v20180423/model/ModifyCustomImageAttributeRequest.h>
#include <tencentcloud/bm/v20180423/model/ModifyCustomImageAttributeResponse.h>
#include <tencentcloud/bm/v20180423/model/ModifyDeviceAliasesRequest.h>
#include <tencentcloud/bm/v20180423/model/ModifyDeviceAliasesResponse.h>
#include <tencentcloud/bm/v20180423/model/ModifyDeviceAutoRenewFlagRequest.h>
#include <tencentcloud/bm/v20180423/model/ModifyDeviceAutoRenewFlagResponse.h>
#include <tencentcloud/bm/v20180423/model/ModifyLanIpRequest.h>
#include <tencentcloud/bm/v20180423/model/ModifyLanIpResponse.h>
#include <tencentcloud/bm/v20180423/model/ModifyPayModePre2PostRequest.h>
#include <tencentcloud/bm/v20180423/model/ModifyPayModePre2PostResponse.h>
#include <tencentcloud/bm/v20180423/model/ModifyPsaRegulationRequest.h>
#include <tencentcloud/bm/v20180423/model/ModifyPsaRegulationResponse.h>
#include <tencentcloud/bm/v20180423/model/ModifyUserCmdRequest.h>
#include <tencentcloud/bm/v20180423/model/ModifyUserCmdResponse.h>
#include <tencentcloud/bm/v20180423/model/OfflineDevicesRequest.h>
#include <tencentcloud/bm/v20180423/model/OfflineDevicesResponse.h>
#include <tencentcloud/bm/v20180423/model/RebootDevicesRequest.h>
#include <tencentcloud/bm/v20180423/model/RebootDevicesResponse.h>
#include <tencentcloud/bm/v20180423/model/RecoverDevicesRequest.h>
#include <tencentcloud/bm/v20180423/model/RecoverDevicesResponse.h>
#include <tencentcloud/bm/v20180423/model/ReloadDeviceOsRequest.h>
#include <tencentcloud/bm/v20180423/model/ReloadDeviceOsResponse.h>
#include <tencentcloud/bm/v20180423/model/RepairTaskControlRequest.h>
#include <tencentcloud/bm/v20180423/model/RepairTaskControlResponse.h>
#include <tencentcloud/bm/v20180423/model/ResetDevicePasswordRequest.h>
#include <tencentcloud/bm/v20180423/model/ResetDevicePasswordResponse.h>
#include <tencentcloud/bm/v20180423/model/ReturnDevicesRequest.h>
#include <tencentcloud/bm/v20180423/model/ReturnDevicesResponse.h>
#include <tencentcloud/bm/v20180423/model/RunUserCmdRequest.h>
#include <tencentcloud/bm/v20180423/model/RunUserCmdResponse.h>
#include <tencentcloud/bm/v20180423/model/SetOutBandVpnAuthPasswordRequest.h>
#include <tencentcloud/bm/v20180423/model/SetOutBandVpnAuthPasswordResponse.h>
#include <tencentcloud/bm/v20180423/model/ShutdownDevicesRequest.h>
#include <tencentcloud/bm/v20180423/model/ShutdownDevicesResponse.h>
#include <tencentcloud/bm/v20180423/model/StartDevicesRequest.h>
#include <tencentcloud/bm/v20180423/model/StartDevicesResponse.h>
#include <tencentcloud/bm/v20180423/model/UnbindPsaTagRequest.h>
#include <tencentcloud/bm/v20180423/model/UnbindPsaTagResponse.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            class BmClient : public AbstractClient
            {
            public:
                BmClient(const Credential &credential, const std::string &region);
                BmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AttachCamRoleResponse> AttachCamRoleOutcome;
                typedef std::future<AttachCamRoleOutcome> AttachCamRoleOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::AttachCamRoleRequest&, AttachCamRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachCamRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::BindPsaTagResponse> BindPsaTagOutcome;
                typedef std::future<BindPsaTagOutcome> BindPsaTagOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::BindPsaTagRequest&, BindPsaTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindPsaTagAsyncHandler;
                typedef Outcome<Core::Error, Model::BuyDevicesResponse> BuyDevicesOutcome;
                typedef std::future<BuyDevicesOutcome> BuyDevicesOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::BuyDevicesRequest&, BuyDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BuyDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomImageResponse> CreateCustomImageOutcome;
                typedef std::future<CreateCustomImageOutcome> CreateCustomImageOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::CreateCustomImageRequest&, CreateCustomImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePsaRegulationResponse> CreatePsaRegulationOutcome;
                typedef std::future<CreatePsaRegulationOutcome> CreatePsaRegulationOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::CreatePsaRegulationRequest&, CreatePsaRegulationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePsaRegulationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSpotDeviceResponse> CreateSpotDeviceOutcome;
                typedef std::future<CreateSpotDeviceOutcome> CreateSpotDeviceOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::CreateSpotDeviceRequest&, CreateSpotDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSpotDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserCmdResponse> CreateUserCmdOutcome;
                typedef std::future<CreateUserCmdOutcome> CreateUserCmdOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::CreateUserCmdRequest&, CreateUserCmdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserCmdAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomImagesResponse> DeleteCustomImagesOutcome;
                typedef std::future<DeleteCustomImagesOutcome> DeleteCustomImagesOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DeleteCustomImagesRequest&, DeleteCustomImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePsaRegulationResponse> DeletePsaRegulationOutcome;
                typedef std::future<DeletePsaRegulationOutcome> DeletePsaRegulationOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DeletePsaRegulationRequest&, DeletePsaRegulationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePsaRegulationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserCmdsResponse> DeleteUserCmdsOutcome;
                typedef std::future<DeleteUserCmdsOutcome> DeleteUserCmdsOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DeleteUserCmdsRequest&, DeleteUserCmdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserCmdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomImageProcessResponse> DescribeCustomImageProcessOutcome;
                typedef std::future<DescribeCustomImageProcessOutcome> DescribeCustomImageProcessOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeCustomImageProcessRequest&, DescribeCustomImageProcessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomImageProcessAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomImagesResponse> DescribeCustomImagesOutcome;
                typedef std::future<DescribeCustomImagesOutcome> DescribeCustomImagesOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeCustomImagesRequest&, DescribeCustomImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceClassResponse> DescribeDeviceClassOutcome;
                typedef std::future<DescribeDeviceClassOutcome> DescribeDeviceClassOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeDeviceClassRequest&, DescribeDeviceClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceClassAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceClassPartitionResponse> DescribeDeviceClassPartitionOutcome;
                typedef std::future<DescribeDeviceClassPartitionOutcome> DescribeDeviceClassPartitionOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeDeviceClassPartitionRequest&, DescribeDeviceClassPartitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceClassPartitionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceHardwareInfoResponse> DescribeDeviceHardwareInfoOutcome;
                typedef std::future<DescribeDeviceHardwareInfoOutcome> DescribeDeviceHardwareInfoOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeDeviceHardwareInfoRequest&, DescribeDeviceHardwareInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceHardwareInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceInventoryResponse> DescribeDeviceInventoryOutcome;
                typedef std::future<DescribeDeviceInventoryOutcome> DescribeDeviceInventoryOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeDeviceInventoryRequest&, DescribeDeviceInventoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceInventoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceOperationLogResponse> DescribeDeviceOperationLogOutcome;
                typedef std::future<DescribeDeviceOperationLogOutcome> DescribeDeviceOperationLogOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeDeviceOperationLogRequest&, DescribeDeviceOperationLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceOperationLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicePartitionResponse> DescribeDevicePartitionOutcome;
                typedef std::future<DescribeDevicePartitionOutcome> DescribeDevicePartitionOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeDevicePartitionRequest&, DescribeDevicePartitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicePartitionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicePositionResponse> DescribeDevicePositionOutcome;
                typedef std::future<DescribeDevicePositionOutcome> DescribeDevicePositionOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeDevicePositionRequest&, DescribeDevicePositionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicePositionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicePriceInfoResponse> DescribeDevicePriceInfoOutcome;
                typedef std::future<DescribeDevicePriceInfoOutcome> DescribeDevicePriceInfoOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeDevicePriceInfoRequest&, DescribeDevicePriceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicePriceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicesResponse> DescribeDevicesOutcome;
                typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeDevicesRequest&, DescribeDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHardwareSpecificationResponse> DescribeHardwareSpecificationOutcome;
                typedef std::future<DescribeHardwareSpecificationOutcome> DescribeHardwareSpecificationOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeHardwareSpecificationRequest&, DescribeHardwareSpecificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHardwareSpecificationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostedDeviceOutBandInfoResponse> DescribeHostedDeviceOutBandInfoOutcome;
                typedef std::future<DescribeHostedDeviceOutBandInfoOutcome> DescribeHostedDeviceOutBandInfoOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeHostedDeviceOutBandInfoRequest&, DescribeHostedDeviceOutBandInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostedDeviceOutBandInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOperationResultResponse> DescribeOperationResultOutcome;
                typedef std::future<DescribeOperationResultOutcome> DescribeOperationResultOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeOperationResultRequest&, DescribeOperationResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOperationResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOsInfoResponse> DescribeOsInfoOutcome;
                typedef std::future<DescribeOsInfoOutcome> DescribeOsInfoOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeOsInfoRequest&, DescribeOsInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOsInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePsaRegulationsResponse> DescribePsaRegulationsOutcome;
                typedef std::future<DescribePsaRegulationsOutcome> DescribePsaRegulationsOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribePsaRegulationsRequest&, DescribePsaRegulationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePsaRegulationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRepairTaskConstantResponse> DescribeRepairTaskConstantOutcome;
                typedef std::future<DescribeRepairTaskConstantOutcome> DescribeRepairTaskConstantOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeRepairTaskConstantRequest&, DescribeRepairTaskConstantOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepairTaskConstantAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInfoResponse> DescribeTaskInfoOutcome;
                typedef std::future<DescribeTaskInfoOutcome> DescribeTaskInfoOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeTaskInfoRequest&, DescribeTaskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskOperationLogResponse> DescribeTaskOperationLogOutcome;
                typedef std::future<DescribeTaskOperationLogOutcome> DescribeTaskOperationLogOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeTaskOperationLogRequest&, DescribeTaskOperationLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskOperationLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserCmdTaskInfoResponse> DescribeUserCmdTaskInfoOutcome;
                typedef std::future<DescribeUserCmdTaskInfoOutcome> DescribeUserCmdTaskInfoOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeUserCmdTaskInfoRequest&, DescribeUserCmdTaskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserCmdTaskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserCmdTasksResponse> DescribeUserCmdTasksOutcome;
                typedef std::future<DescribeUserCmdTasksOutcome> DescribeUserCmdTasksOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeUserCmdTasksRequest&, DescribeUserCmdTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserCmdTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserCmdsResponse> DescribeUserCmdsOutcome;
                typedef std::future<DescribeUserCmdsOutcome> DescribeUserCmdsOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DescribeUserCmdsRequest&, DescribeUserCmdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserCmdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachCamRoleResponse> DetachCamRoleOutcome;
                typedef std::future<DetachCamRoleOutcome> DetachCamRoleOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::DetachCamRoleRequest&, DetachCamRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachCamRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomImageAttributeResponse> ModifyCustomImageAttributeOutcome;
                typedef std::future<ModifyCustomImageAttributeOutcome> ModifyCustomImageAttributeOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::ModifyCustomImageAttributeRequest&, ModifyCustomImageAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomImageAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDeviceAliasesResponse> ModifyDeviceAliasesOutcome;
                typedef std::future<ModifyDeviceAliasesOutcome> ModifyDeviceAliasesOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::ModifyDeviceAliasesRequest&, ModifyDeviceAliasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceAliasesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDeviceAutoRenewFlagResponse> ModifyDeviceAutoRenewFlagOutcome;
                typedef std::future<ModifyDeviceAutoRenewFlagOutcome> ModifyDeviceAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::ModifyDeviceAutoRenewFlagRequest&, ModifyDeviceAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceAutoRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLanIpResponse> ModifyLanIpOutcome;
                typedef std::future<ModifyLanIpOutcome> ModifyLanIpOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::ModifyLanIpRequest&, ModifyLanIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLanIpAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPayModePre2PostResponse> ModifyPayModePre2PostOutcome;
                typedef std::future<ModifyPayModePre2PostOutcome> ModifyPayModePre2PostOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::ModifyPayModePre2PostRequest&, ModifyPayModePre2PostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPayModePre2PostAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPsaRegulationResponse> ModifyPsaRegulationOutcome;
                typedef std::future<ModifyPsaRegulationOutcome> ModifyPsaRegulationOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::ModifyPsaRegulationRequest&, ModifyPsaRegulationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPsaRegulationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserCmdResponse> ModifyUserCmdOutcome;
                typedef std::future<ModifyUserCmdOutcome> ModifyUserCmdOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::ModifyUserCmdRequest&, ModifyUserCmdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserCmdAsyncHandler;
                typedef Outcome<Core::Error, Model::OfflineDevicesResponse> OfflineDevicesOutcome;
                typedef std::future<OfflineDevicesOutcome> OfflineDevicesOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::OfflineDevicesRequest&, OfflineDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OfflineDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::RebootDevicesResponse> RebootDevicesOutcome;
                typedef std::future<RebootDevicesOutcome> RebootDevicesOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::RebootDevicesRequest&, RebootDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebootDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverDevicesResponse> RecoverDevicesOutcome;
                typedef std::future<RecoverDevicesOutcome> RecoverDevicesOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::RecoverDevicesRequest&, RecoverDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReloadDeviceOsResponse> ReloadDeviceOsOutcome;
                typedef std::future<ReloadDeviceOsOutcome> ReloadDeviceOsOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::ReloadDeviceOsRequest&, ReloadDeviceOsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReloadDeviceOsAsyncHandler;
                typedef Outcome<Core::Error, Model::RepairTaskControlResponse> RepairTaskControlOutcome;
                typedef std::future<RepairTaskControlOutcome> RepairTaskControlOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::RepairTaskControlRequest&, RepairTaskControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RepairTaskControlAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetDevicePasswordResponse> ResetDevicePasswordOutcome;
                typedef std::future<ResetDevicePasswordOutcome> ResetDevicePasswordOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::ResetDevicePasswordRequest&, ResetDevicePasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetDevicePasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ReturnDevicesResponse> ReturnDevicesOutcome;
                typedef std::future<ReturnDevicesOutcome> ReturnDevicesOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::ReturnDevicesRequest&, ReturnDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReturnDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::RunUserCmdResponse> RunUserCmdOutcome;
                typedef std::future<RunUserCmdOutcome> RunUserCmdOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::RunUserCmdRequest&, RunUserCmdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunUserCmdAsyncHandler;
                typedef Outcome<Core::Error, Model::SetOutBandVpnAuthPasswordResponse> SetOutBandVpnAuthPasswordOutcome;
                typedef std::future<SetOutBandVpnAuthPasswordOutcome> SetOutBandVpnAuthPasswordOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::SetOutBandVpnAuthPasswordRequest&, SetOutBandVpnAuthPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetOutBandVpnAuthPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ShutdownDevicesResponse> ShutdownDevicesOutcome;
                typedef std::future<ShutdownDevicesOutcome> ShutdownDevicesOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::ShutdownDevicesRequest&, ShutdownDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ShutdownDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::StartDevicesResponse> StartDevicesOutcome;
                typedef std::future<StartDevicesOutcome> StartDevicesOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::StartDevicesRequest&, StartDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindPsaTagResponse> UnbindPsaTagOutcome;
                typedef std::future<UnbindPsaTagOutcome> UnbindPsaTagOutcomeCallable;
                typedef std::function<void(const BmClient*, const Model::UnbindPsaTagRequest&, UnbindPsaTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindPsaTagAsyncHandler;



                /**
                 *服务器绑定CAM角色，该角色授权访问黑石物理服务器服务，为黑石物理服务器提供了访问资源的权限，如请求服务器的临时证书
                 * @param req AttachCamRoleRequest
                 * @return AttachCamRoleOutcome
                 */
                AttachCamRoleOutcome AttachCamRole(const Model::AttachCamRoleRequest &request);
                void AttachCamRoleAsync(const Model::AttachCamRoleRequest& request, const AttachCamRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachCamRoleOutcomeCallable AttachCamRoleCallable(const Model::AttachCamRoleRequest& request);

                /**
                 *为预授权规则绑定标签
                 * @param req BindPsaTagRequest
                 * @return BindPsaTagOutcome
                 */
                BindPsaTagOutcome BindPsaTag(const Model::BindPsaTagRequest &request);
                void BindPsaTagAsync(const Model::BindPsaTagRequest& request, const BindPsaTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindPsaTagOutcomeCallable BindPsaTagCallable(const Model::BindPsaTagRequest& request);

                /**
                 *购买黑石物理机
                 * @param req BuyDevicesRequest
                 * @return BuyDevicesOutcome
                 */
                BuyDevicesOutcome BuyDevices(const Model::BuyDevicesRequest &request);
                void BuyDevicesAsync(const Model::BuyDevicesRequest& request, const BuyDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BuyDevicesOutcomeCallable BuyDevicesCallable(const Model::BuyDevicesRequest& request);

                /**
                 *创建自定义镜像<br>
每个AppId在每个可用区最多保留20个自定义镜像
                 * @param req CreateCustomImageRequest
                 * @return CreateCustomImageOutcome
                 */
                CreateCustomImageOutcome CreateCustomImage(const Model::CreateCustomImageRequest &request);
                void CreateCustomImageAsync(const Model::CreateCustomImageRequest& request, const CreateCustomImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomImageOutcomeCallable CreateCustomImageCallable(const Model::CreateCustomImageRequest& request);

                /**
                 *创建预授权规则
                 * @param req CreatePsaRegulationRequest
                 * @return CreatePsaRegulationOutcome
                 */
                CreatePsaRegulationOutcome CreatePsaRegulation(const Model::CreatePsaRegulationRequest &request);
                void CreatePsaRegulationAsync(const Model::CreatePsaRegulationRequest& request, const CreatePsaRegulationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePsaRegulationOutcomeCallable CreatePsaRegulationCallable(const Model::CreatePsaRegulationRequest& request);

                /**
                 *创建黑石竞价实例
                 * @param req CreateSpotDeviceRequest
                 * @return CreateSpotDeviceOutcome
                 */
                CreateSpotDeviceOutcome CreateSpotDevice(const Model::CreateSpotDeviceRequest &request);
                void CreateSpotDeviceAsync(const Model::CreateSpotDeviceRequest& request, const CreateSpotDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSpotDeviceOutcomeCallable CreateSpotDeviceCallable(const Model::CreateSpotDeviceRequest& request);

                /**
                 *创建自定义脚本
                 * @param req CreateUserCmdRequest
                 * @return CreateUserCmdOutcome
                 */
                CreateUserCmdOutcome CreateUserCmd(const Model::CreateUserCmdRequest &request);
                void CreateUserCmdAsync(const Model::CreateUserCmdRequest& request, const CreateUserCmdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserCmdOutcomeCallable CreateUserCmdCallable(const Model::CreateUserCmdRequest& request);

                /**
                 *删除自定义镜像<br>
正用于部署或重装中的镜像被删除后，镜像文件将保留一段时间，直到部署或重装结束
                 * @param req DeleteCustomImagesRequest
                 * @return DeleteCustomImagesOutcome
                 */
                DeleteCustomImagesOutcome DeleteCustomImages(const Model::DeleteCustomImagesRequest &request);
                void DeleteCustomImagesAsync(const Model::DeleteCustomImagesRequest& request, const DeleteCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomImagesOutcomeCallable DeleteCustomImagesCallable(const Model::DeleteCustomImagesRequest& request);

                /**
                 *删除预授权规则
                 * @param req DeletePsaRegulationRequest
                 * @return DeletePsaRegulationOutcome
                 */
                DeletePsaRegulationOutcome DeletePsaRegulation(const Model::DeletePsaRegulationRequest &request);
                void DeletePsaRegulationAsync(const Model::DeletePsaRegulationRequest& request, const DeletePsaRegulationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePsaRegulationOutcomeCallable DeletePsaRegulationCallable(const Model::DeletePsaRegulationRequest& request);

                /**
                 *删除自定义脚本
                 * @param req DeleteUserCmdsRequest
                 * @return DeleteUserCmdsOutcome
                 */
                DeleteUserCmdsOutcome DeleteUserCmds(const Model::DeleteUserCmdsRequest &request);
                void DeleteUserCmdsAsync(const Model::DeleteUserCmdsRequest& request, const DeleteUserCmdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserCmdsOutcomeCallable DeleteUserCmdsCallable(const Model::DeleteUserCmdsRequest& request);

                /**
                 *查询自定义镜像制作进度
                 * @param req DescribeCustomImageProcessRequest
                 * @return DescribeCustomImageProcessOutcome
                 */
                DescribeCustomImageProcessOutcome DescribeCustomImageProcess(const Model::DescribeCustomImageProcessRequest &request);
                void DescribeCustomImageProcessAsync(const Model::DescribeCustomImageProcessRequest& request, const DescribeCustomImageProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomImageProcessOutcomeCallable DescribeCustomImageProcessCallable(const Model::DescribeCustomImageProcessRequest& request);

                /**
                 *查看自定义镜像列表
                 * @param req DescribeCustomImagesRequest
                 * @return DescribeCustomImagesOutcome
                 */
                DescribeCustomImagesOutcome DescribeCustomImages(const Model::DescribeCustomImagesRequest &request);
                void DescribeCustomImagesAsync(const Model::DescribeCustomImagesRequest& request, const DescribeCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomImagesOutcomeCallable DescribeCustomImagesCallable(const Model::DescribeCustomImagesRequest& request);

                /**
                 *获取设备类型
                 * @param req DescribeDeviceClassRequest
                 * @return DescribeDeviceClassOutcome
                 */
                DescribeDeviceClassOutcome DescribeDeviceClass(const Model::DescribeDeviceClassRequest &request);
                void DescribeDeviceClassAsync(const Model::DescribeDeviceClassRequest& request, const DescribeDeviceClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceClassOutcomeCallable DescribeDeviceClassCallable(const Model::DescribeDeviceClassRequest& request);

                /**
                 *查询机型支持的RAID方式， 并返回系统盘的分区和逻辑盘的列表
                 * @param req DescribeDeviceClassPartitionRequest
                 * @return DescribeDeviceClassPartitionOutcome
                 */
                DescribeDeviceClassPartitionOutcome DescribeDeviceClassPartition(const Model::DescribeDeviceClassPartitionRequest &request);
                void DescribeDeviceClassPartitionAsync(const Model::DescribeDeviceClassPartitionRequest& request, const DescribeDeviceClassPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceClassPartitionOutcomeCallable DescribeDeviceClassPartitionCallable(const Model::DescribeDeviceClassPartitionRequest& request);

                /**
                 *查询设备硬件配置信息，如 CPU 型号，内存大小，磁盘大小和数量
                 * @param req DescribeDeviceHardwareInfoRequest
                 * @return DescribeDeviceHardwareInfoOutcome
                 */
                DescribeDeviceHardwareInfoOutcome DescribeDeviceHardwareInfo(const Model::DescribeDeviceHardwareInfoRequest &request);
                void DescribeDeviceHardwareInfoAsync(const Model::DescribeDeviceHardwareInfoRequest& request, const DescribeDeviceHardwareInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceHardwareInfoOutcomeCallable DescribeDeviceHardwareInfoCallable(const Model::DescribeDeviceHardwareInfoRequest& request);

                /**
                 *查询设备库存
                 * @param req DescribeDeviceInventoryRequest
                 * @return DescribeDeviceInventoryOutcome
                 */
                DescribeDeviceInventoryOutcome DescribeDeviceInventory(const Model::DescribeDeviceInventoryRequest &request);
                void DescribeDeviceInventoryAsync(const Model::DescribeDeviceInventoryRequest& request, const DescribeDeviceInventoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceInventoryOutcomeCallable DescribeDeviceInventoryCallable(const Model::DescribeDeviceInventoryRequest& request);

                /**
                 *查询设备操作日志， 如设备重启，重装，设置密码等操作
                 * @param req DescribeDeviceOperationLogRequest
                 * @return DescribeDeviceOperationLogOutcome
                 */
                DescribeDeviceOperationLogOutcome DescribeDeviceOperationLog(const Model::DescribeDeviceOperationLogRequest &request);
                void DescribeDeviceOperationLogAsync(const Model::DescribeDeviceOperationLogRequest& request, const DescribeDeviceOperationLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceOperationLogOutcomeCallable DescribeDeviceOperationLogCallable(const Model::DescribeDeviceOperationLogRequest& request);

                /**
                 *获取物理机的分区格式
                 * @param req DescribeDevicePartitionRequest
                 * @return DescribeDevicePartitionOutcome
                 */
                DescribeDevicePartitionOutcome DescribeDevicePartition(const Model::DescribeDevicePartitionRequest &request);
                void DescribeDevicePartitionAsync(const Model::DescribeDevicePartitionRequest& request, const DescribeDevicePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicePartitionOutcomeCallable DescribeDevicePartitionCallable(const Model::DescribeDevicePartitionRequest& request);

                /**
                 *查询服务器所在的位置，如机架，上联交换机等信息
                 * @param req DescribeDevicePositionRequest
                 * @return DescribeDevicePositionOutcome
                 */
                DescribeDevicePositionOutcome DescribeDevicePosition(const Model::DescribeDevicePositionRequest &request);
                void DescribeDevicePositionAsync(const Model::DescribeDevicePositionRequest& request, const DescribeDevicePositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicePositionOutcomeCallable DescribeDevicePositionCallable(const Model::DescribeDevicePositionRequest& request);

                /**
                 *查询服务器价格信息，支持设备的批量查找，支持标准机型和弹性机型的混合查找
                 * @param req DescribeDevicePriceInfoRequest
                 * @return DescribeDevicePriceInfoOutcome
                 */
                DescribeDevicePriceInfoOutcome DescribeDevicePriceInfo(const Model::DescribeDevicePriceInfoRequest &request);
                void DescribeDevicePriceInfoAsync(const Model::DescribeDevicePriceInfoRequest& request, const DescribeDevicePriceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicePriceInfoOutcomeCallable DescribeDevicePriceInfoCallable(const Model::DescribeDevicePriceInfoRequest& request);

                /**
                 *查询物理服务器，可以按照实例，业务IP等过滤
                 * @param req DescribeDevicesRequest
                 * @return DescribeDevicesOutcome
                 */
                DescribeDevicesOutcome DescribeDevices(const Model::DescribeDevicesRequest &request);
                void DescribeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicesOutcomeCallable DescribeDevicesCallable(const Model::DescribeDevicesRequest& request);

                /**
                 *查询自定义机型部件信息，包括CpuId对应的型号，DiskTypeId对应的磁盘类型
                 * @param req DescribeHardwareSpecificationRequest
                 * @return DescribeHardwareSpecificationOutcome
                 */
                DescribeHardwareSpecificationOutcome DescribeHardwareSpecification(const Model::DescribeHardwareSpecificationRequest &request);
                void DescribeHardwareSpecificationAsync(const Model::DescribeHardwareSpecificationRequest& request, const DescribeHardwareSpecificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHardwareSpecificationOutcomeCallable DescribeHardwareSpecificationCallable(const Model::DescribeHardwareSpecificationRequest& request);

                /**
                 *查询托管设备带外信息
                 * @param req DescribeHostedDeviceOutBandInfoRequest
                 * @return DescribeHostedDeviceOutBandInfoOutcome
                 */
                DescribeHostedDeviceOutBandInfoOutcome DescribeHostedDeviceOutBandInfo(const Model::DescribeHostedDeviceOutBandInfoRequest &request);
                void DescribeHostedDeviceOutBandInfoAsync(const Model::DescribeHostedDeviceOutBandInfoRequest& request, const DescribeHostedDeviceOutBandInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostedDeviceOutBandInfoOutcomeCallable DescribeHostedDeviceOutBandInfoCallable(const Model::DescribeHostedDeviceOutBandInfoRequest& request);

                /**
                 *获取异步操作状态的完成状态
                 * @param req DescribeOperationResultRequest
                 * @return DescribeOperationResultOutcome
                 */
                DescribeOperationResultOutcome DescribeOperationResult(const Model::DescribeOperationResultRequest &request);
                void DescribeOperationResultAsync(const Model::DescribeOperationResultRequest& request, const DescribeOperationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOperationResultOutcomeCallable DescribeOperationResultCallable(const Model::DescribeOperationResultRequest& request);

                /**
                 *查询指定机型所支持的操作系统
                 * @param req DescribeOsInfoRequest
                 * @return DescribeOsInfoOutcome
                 */
                DescribeOsInfoOutcome DescribeOsInfo(const Model::DescribeOsInfoRequest &request);
                void DescribeOsInfoAsync(const Model::DescribeOsInfoRequest& request, const DescribeOsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOsInfoOutcomeCallable DescribeOsInfoCallable(const Model::DescribeOsInfoRequest& request);

                /**
                 *获取预授权规则列表
                 * @param req DescribePsaRegulationsRequest
                 * @return DescribePsaRegulationsOutcome
                 */
                DescribePsaRegulationsOutcome DescribePsaRegulations(const Model::DescribePsaRegulationsRequest &request);
                void DescribePsaRegulationsAsync(const Model::DescribePsaRegulationsRequest& request, const DescribePsaRegulationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePsaRegulationsOutcomeCallable DescribePsaRegulationsCallable(const Model::DescribePsaRegulationsRequest& request);

                /**
                 *查询地域以及可用区
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *维修任务配置获取
                 * @param req DescribeRepairTaskConstantRequest
                 * @return DescribeRepairTaskConstantOutcome
                 */
                DescribeRepairTaskConstantOutcome DescribeRepairTaskConstant(const Model::DescribeRepairTaskConstantRequest &request);
                void DescribeRepairTaskConstantAsync(const Model::DescribeRepairTaskConstantRequest& request, const DescribeRepairTaskConstantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRepairTaskConstantOutcomeCallable DescribeRepairTaskConstantCallable(const Model::DescribeRepairTaskConstantRequest& request);

                /**
                 *获取用户维修任务列表及详细信息<br>
<br>
TaskStatus（任务状态ID）与状态中文名的对应关系如下：<br>
1：未授权<br>
2：处理中<br>
3：待确认<br>
4：未授权-暂不处理<br>
5：已恢复<br>
6：待确认-未恢复<br>
                 * @param req DescribeTaskInfoRequest
                 * @return DescribeTaskInfoOutcome
                 */
                DescribeTaskInfoOutcome DescribeTaskInfo(const Model::DescribeTaskInfoRequest &request);
                void DescribeTaskInfoAsync(const Model::DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskInfoOutcomeCallable DescribeTaskInfoCallable(const Model::DescribeTaskInfoRequest& request);

                /**
                 *获取维修任务操作日志
                 * @param req DescribeTaskOperationLogRequest
                 * @return DescribeTaskOperationLogOutcome
                 */
                DescribeTaskOperationLogOutcome DescribeTaskOperationLog(const Model::DescribeTaskOperationLogRequest &request);
                void DescribeTaskOperationLogAsync(const Model::DescribeTaskOperationLogRequest& request, const DescribeTaskOperationLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskOperationLogOutcomeCallable DescribeTaskOperationLogCallable(const Model::DescribeTaskOperationLogRequest& request);

                /**
                 *获取自定义脚本任务详细信息
                 * @param req DescribeUserCmdTaskInfoRequest
                 * @return DescribeUserCmdTaskInfoOutcome
                 */
                DescribeUserCmdTaskInfoOutcome DescribeUserCmdTaskInfo(const Model::DescribeUserCmdTaskInfoRequest &request);
                void DescribeUserCmdTaskInfoAsync(const Model::DescribeUserCmdTaskInfoRequest& request, const DescribeUserCmdTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserCmdTaskInfoOutcomeCallable DescribeUserCmdTaskInfoCallable(const Model::DescribeUserCmdTaskInfoRequest& request);

                /**
                 *获取自定义脚本任务列表
                 * @param req DescribeUserCmdTasksRequest
                 * @return DescribeUserCmdTasksOutcome
                 */
                DescribeUserCmdTasksOutcome DescribeUserCmdTasks(const Model::DescribeUserCmdTasksRequest &request);
                void DescribeUserCmdTasksAsync(const Model::DescribeUserCmdTasksRequest& request, const DescribeUserCmdTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserCmdTasksOutcomeCallable DescribeUserCmdTasksCallable(const Model::DescribeUserCmdTasksRequest& request);

                /**
                 *获取自定义脚本信息列表
                 * @param req DescribeUserCmdsRequest
                 * @return DescribeUserCmdsOutcome
                 */
                DescribeUserCmdsOutcome DescribeUserCmds(const Model::DescribeUserCmdsRequest &request);
                void DescribeUserCmdsAsync(const Model::DescribeUserCmdsRequest& request, const DescribeUserCmdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserCmdsOutcomeCallable DescribeUserCmdsCallable(const Model::DescribeUserCmdsRequest& request);

                /**
                 *服务器绑定CAM角色
                 * @param req DetachCamRoleRequest
                 * @return DetachCamRoleOutcome
                 */
                DetachCamRoleOutcome DetachCamRole(const Model::DetachCamRoleRequest &request);
                void DetachCamRoleAsync(const Model::DetachCamRoleRequest& request, const DetachCamRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachCamRoleOutcomeCallable DetachCamRoleCallable(const Model::DetachCamRoleRequest& request);

                /**
                 *用于修改自定义镜像名或描述
                 * @param req ModifyCustomImageAttributeRequest
                 * @return ModifyCustomImageAttributeOutcome
                 */
                ModifyCustomImageAttributeOutcome ModifyCustomImageAttribute(const Model::ModifyCustomImageAttributeRequest &request);
                void ModifyCustomImageAttributeAsync(const Model::ModifyCustomImageAttributeRequest& request, const ModifyCustomImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomImageAttributeOutcomeCallable ModifyCustomImageAttributeCallable(const Model::ModifyCustomImageAttributeRequest& request);

                /**
                 *修改服务器名称
                 * @param req ModifyDeviceAliasesRequest
                 * @return ModifyDeviceAliasesOutcome
                 */
                ModifyDeviceAliasesOutcome ModifyDeviceAliases(const Model::ModifyDeviceAliasesRequest &request);
                void ModifyDeviceAliasesAsync(const Model::ModifyDeviceAliasesRequest& request, const ModifyDeviceAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceAliasesOutcomeCallable ModifyDeviceAliasesCallable(const Model::ModifyDeviceAliasesRequest& request);

                /**
                 *修改物理机服务器自动续费标志
                 * @param req ModifyDeviceAutoRenewFlagRequest
                 * @return ModifyDeviceAutoRenewFlagOutcome
                 */
                ModifyDeviceAutoRenewFlagOutcome ModifyDeviceAutoRenewFlag(const Model::ModifyDeviceAutoRenewFlagRequest &request);
                void ModifyDeviceAutoRenewFlagAsync(const Model::ModifyDeviceAutoRenewFlagRequest& request, const ModifyDeviceAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceAutoRenewFlagOutcomeCallable ModifyDeviceAutoRenewFlagCallable(const Model::ModifyDeviceAutoRenewFlagRequest& request);

                /**
                 *修改物理机内网IP（不重装系统）
                 * @param req ModifyLanIpRequest
                 * @return ModifyLanIpOutcome
                 */
                ModifyLanIpOutcome ModifyLanIp(const Model::ModifyLanIpRequest &request);
                void ModifyLanIpAsync(const Model::ModifyLanIpRequest& request, const ModifyLanIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLanIpOutcomeCallable ModifyLanIpCallable(const Model::ModifyLanIpRequest& request);

                /**
                 *将设备的预付费模式修改为后付费计费模式，支持批量转换。（前提是客户要加入黑石物理机后付费计费的白名单，申请黑石物理机后付费可以联系腾讯云客服）
                 * @param req ModifyPayModePre2PostRequest
                 * @return ModifyPayModePre2PostOutcome
                 */
                ModifyPayModePre2PostOutcome ModifyPayModePre2Post(const Model::ModifyPayModePre2PostRequest &request);
                void ModifyPayModePre2PostAsync(const Model::ModifyPayModePre2PostRequest& request, const ModifyPayModePre2PostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPayModePre2PostOutcomeCallable ModifyPayModePre2PostCallable(const Model::ModifyPayModePre2PostRequest& request);

                /**
                 *允许修改规则信息及关联故障类型
                 * @param req ModifyPsaRegulationRequest
                 * @return ModifyPsaRegulationOutcome
                 */
                ModifyPsaRegulationOutcome ModifyPsaRegulation(const Model::ModifyPsaRegulationRequest &request);
                void ModifyPsaRegulationAsync(const Model::ModifyPsaRegulationRequest& request, const ModifyPsaRegulationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPsaRegulationOutcomeCallable ModifyPsaRegulationCallable(const Model::ModifyPsaRegulationRequest& request);

                /**
                 *修改自定义脚本
                 * @param req ModifyUserCmdRequest
                 * @return ModifyUserCmdOutcome
                 */
                ModifyUserCmdOutcome ModifyUserCmd(const Model::ModifyUserCmdRequest &request);
                void ModifyUserCmdAsync(const Model::ModifyUserCmdRequest& request, const ModifyUserCmdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserCmdOutcomeCallable ModifyUserCmdCallable(const Model::ModifyUserCmdRequest& request);

                /**
                 *销毁黑石物理机实例：可以销毁物理机列表中的竞价实例，或回收站列表中所有计费模式的实例
                 * @param req OfflineDevicesRequest
                 * @return OfflineDevicesOutcome
                 */
                OfflineDevicesOutcome OfflineDevices(const Model::OfflineDevicesRequest &request);
                void OfflineDevicesAsync(const Model::OfflineDevicesRequest& request, const OfflineDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OfflineDevicesOutcomeCallable OfflineDevicesCallable(const Model::OfflineDevicesRequest& request);

                /**
                 *重启机器
                 * @param req RebootDevicesRequest
                 * @return RebootDevicesOutcome
                 */
                RebootDevicesOutcome RebootDevices(const Model::RebootDevicesRequest &request);
                void RebootDevicesAsync(const Model::RebootDevicesRequest& request, const RebootDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebootDevicesOutcomeCallable RebootDevicesCallable(const Model::RebootDevicesRequest& request);

                /**
                 *恢复回收站中的物理机（仅限后付费的物理机）
                 * @param req RecoverDevicesRequest
                 * @return RecoverDevicesOutcome
                 */
                RecoverDevicesOutcome RecoverDevices(const Model::RecoverDevicesRequest &request);
                void RecoverDevicesAsync(const Model::RecoverDevicesRequest& request, const RecoverDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverDevicesOutcomeCallable RecoverDevicesCallable(const Model::RecoverDevicesRequest& request);

                /**
                 *重装操作系统
                 * @param req ReloadDeviceOsRequest
                 * @return ReloadDeviceOsOutcome
                 */
                ReloadDeviceOsOutcome ReloadDeviceOs(const Model::ReloadDeviceOsRequest &request);
                void ReloadDeviceOsAsync(const Model::ReloadDeviceOsRequest& request, const ReloadDeviceOsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReloadDeviceOsOutcomeCallable ReloadDeviceOsCallable(const Model::ReloadDeviceOsRequest& request);

                /**
                 *此接口用于操作维修任务<br>
入参TaskId为维修任务ID<br>
入参Operate表示对维修任务的操作，支持如下取值：<br>
AuthorizeRepair（授权维修）<br>
Ignore（暂不提醒）<br>
ConfirmRecovered（维修完成后，确认故障恢复）<br>
ConfirmUnRecovered（维修完成后，确认故障未恢复，该操作已不推荐用）<br>
NeedRepairAgain（维修完成后，故障未恢复，需要重新维修，推荐用此操作打回）<br>
入参OperateRemark仅在Operate为NeedRepairAgain时有效，表示打回重修原因，建议给出打回的具体原因。<br>
<br>
操作约束（当前任务状态(TaskStatus)->对应可执行的操作）：<br>
未授权(1)->授权维修；暂不处理<br>
暂不处理(4)->授权维修<br>
待确认(3)->确认故障恢复；确认故障未恢复；需要重新维修<br>
未恢复(6)->确认故障恢复<br>
<br>
对于Ping不可达故障的任务，还允许：<br>
未授权->确认故障恢复<br>
暂不处理->确认故障恢复<br>
<br>
处理中与已恢复状态的任务不允许进行操作。<br>
<br>
详细信息请访问：https://cloud.tencent.com/document/product/386/18190
                 * @param req RepairTaskControlRequest
                 * @return RepairTaskControlOutcome
                 */
                RepairTaskControlOutcome RepairTaskControl(const Model::RepairTaskControlRequest &request);
                void RepairTaskControlAsync(const Model::RepairTaskControlRequest& request, const RepairTaskControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RepairTaskControlOutcomeCallable RepairTaskControlCallable(const Model::RepairTaskControlRequest& request);

                /**
                 *重置服务器密码
                 * @param req ResetDevicePasswordRequest
                 * @return ResetDevicePasswordOutcome
                 */
                ResetDevicePasswordOutcome ResetDevicePassword(const Model::ResetDevicePasswordRequest &request);
                void ResetDevicePasswordAsync(const Model::ResetDevicePasswordRequest& request, const ResetDevicePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetDevicePasswordOutcomeCallable ResetDevicePasswordCallable(const Model::ResetDevicePasswordRequest& request);

                /**
                 *退回物理机至回收站，支持批量退还不同计费模式的物理机（包括预付费、后付费、预付费转后付费）
                 * @param req ReturnDevicesRequest
                 * @return ReturnDevicesOutcome
                 */
                ReturnDevicesOutcome ReturnDevices(const Model::ReturnDevicesRequest &request);
                void ReturnDevicesAsync(const Model::ReturnDevicesRequest& request, const ReturnDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReturnDevicesOutcomeCallable ReturnDevicesCallable(const Model::ReturnDevicesRequest& request);

                /**
                 *运行自定义脚本
                 * @param req RunUserCmdRequest
                 * @return RunUserCmdOutcome
                 */
                RunUserCmdOutcome RunUserCmd(const Model::RunUserCmdRequest &request);
                void RunUserCmdAsync(const Model::RunUserCmdRequest& request, const RunUserCmdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunUserCmdOutcomeCallable RunUserCmdCallable(const Model::RunUserCmdRequest& request);

                /**
                 *设置带外VPN认证用户密码
                 * @param req SetOutBandVpnAuthPasswordRequest
                 * @return SetOutBandVpnAuthPasswordOutcome
                 */
                SetOutBandVpnAuthPasswordOutcome SetOutBandVpnAuthPassword(const Model::SetOutBandVpnAuthPasswordRequest &request);
                void SetOutBandVpnAuthPasswordAsync(const Model::SetOutBandVpnAuthPasswordRequest& request, const SetOutBandVpnAuthPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetOutBandVpnAuthPasswordOutcomeCallable SetOutBandVpnAuthPasswordCallable(const Model::SetOutBandVpnAuthPasswordRequest& request);

                /**
                 *关闭服务器
                 * @param req ShutdownDevicesRequest
                 * @return ShutdownDevicesOutcome
                 */
                ShutdownDevicesOutcome ShutdownDevices(const Model::ShutdownDevicesRequest &request);
                void ShutdownDevicesAsync(const Model::ShutdownDevicesRequest& request, const ShutdownDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ShutdownDevicesOutcomeCallable ShutdownDevicesCallable(const Model::ShutdownDevicesRequest& request);

                /**
                 *开启服务器
                 * @param req StartDevicesRequest
                 * @return StartDevicesOutcome
                 */
                StartDevicesOutcome StartDevices(const Model::StartDevicesRequest &request);
                void StartDevicesAsync(const Model::StartDevicesRequest& request, const StartDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartDevicesOutcomeCallable StartDevicesCallable(const Model::StartDevicesRequest& request);

                /**
                 *解除标签与预授权规则的绑定
                 * @param req UnbindPsaTagRequest
                 * @return UnbindPsaTagOutcome
                 */
                UnbindPsaTagOutcome UnbindPsaTag(const Model::UnbindPsaTagRequest &request);
                void UnbindPsaTagAsync(const Model::UnbindPsaTagRequest& request, const UnbindPsaTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindPsaTagOutcomeCallable UnbindPsaTagCallable(const Model::UnbindPsaTagRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_BMCLIENT_H_
