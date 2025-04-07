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

#ifndef TENCENTCLOUD_MNA_V20210119_MNACLIENT_H_
#define TENCENTCLOUD_MNA_V20210119_MNACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mna/v20210119/model/ActivateHardwareRequest.h>
#include <tencentcloud/mna/v20210119/model/ActivateHardwareResponse.h>
#include <tencentcloud/mna/v20210119/model/AddDeviceRequest.h>
#include <tencentcloud/mna/v20210119/model/AddDeviceResponse.h>
#include <tencentcloud/mna/v20210119/model/AddGroupRequest.h>
#include <tencentcloud/mna/v20210119/model/AddGroupResponse.h>
#include <tencentcloud/mna/v20210119/model/AddHardwareRequest.h>
#include <tencentcloud/mna/v20210119/model/AddHardwareResponse.h>
#include <tencentcloud/mna/v20210119/model/AddL3ConnRequest.h>
#include <tencentcloud/mna/v20210119/model/AddL3ConnResponse.h>
#include <tencentcloud/mna/v20210119/model/CreateEncryptedKeyRequest.h>
#include <tencentcloud/mna/v20210119/model/CreateEncryptedKeyResponse.h>
#include <tencentcloud/mna/v20210119/model/DeleteDeviceRequest.h>
#include <tencentcloud/mna/v20210119/model/DeleteDeviceResponse.h>
#include <tencentcloud/mna/v20210119/model/DeleteGroupRequest.h>
#include <tencentcloud/mna/v20210119/model/DeleteGroupResponse.h>
#include <tencentcloud/mna/v20210119/model/DeleteL3ConnRequest.h>
#include <tencentcloud/mna/v20210119/model/DeleteL3ConnResponse.h>
#include <tencentcloud/mna/v20210119/model/DownloadActiveDeviceCountRequest.h>
#include <tencentcloud/mna/v20210119/model/DownloadActiveDeviceCountResponse.h>
#include <tencentcloud/mna/v20210119/model/GetActiveDeviceCountRequest.h>
#include <tencentcloud/mna/v20210119/model/GetActiveDeviceCountResponse.h>
#include <tencentcloud/mna/v20210119/model/GetDeviceRequest.h>
#include <tencentcloud/mna/v20210119/model/GetDeviceResponse.h>
#include <tencentcloud/mna/v20210119/model/GetDevicePayModeRequest.h>
#include <tencentcloud/mna/v20210119/model/GetDevicePayModeResponse.h>
#include <tencentcloud/mna/v20210119/model/GetDevicesRequest.h>
#include <tencentcloud/mna/v20210119/model/GetDevicesResponse.h>
#include <tencentcloud/mna/v20210119/model/GetFlowAlarmInfoRequest.h>
#include <tencentcloud/mna/v20210119/model/GetFlowAlarmInfoResponse.h>
#include <tencentcloud/mna/v20210119/model/GetFlowPackagesRequest.h>
#include <tencentcloud/mna/v20210119/model/GetFlowPackagesResponse.h>
#include <tencentcloud/mna/v20210119/model/GetFlowStatisticRequest.h>
#include <tencentcloud/mna/v20210119/model/GetFlowStatisticResponse.h>
#include <tencentcloud/mna/v20210119/model/GetFlowStatisticByGroupRequest.h>
#include <tencentcloud/mna/v20210119/model/GetFlowStatisticByGroupResponse.h>
#include <tencentcloud/mna/v20210119/model/GetFlowStatisticByRegionRequest.h>
#include <tencentcloud/mna/v20210119/model/GetFlowStatisticByRegionResponse.h>
#include <tencentcloud/mna/v20210119/model/GetGroupDetailRequest.h>
#include <tencentcloud/mna/v20210119/model/GetGroupDetailResponse.h>
#include <tencentcloud/mna/v20210119/model/GetGroupListRequest.h>
#include <tencentcloud/mna/v20210119/model/GetGroupListResponse.h>
#include <tencentcloud/mna/v20210119/model/GetHardwareListRequest.h>
#include <tencentcloud/mna/v20210119/model/GetHardwareListResponse.h>
#include <tencentcloud/mna/v20210119/model/GetL3ConnListRequest.h>
#include <tencentcloud/mna/v20210119/model/GetL3ConnListResponse.h>
#include <tencentcloud/mna/v20210119/model/GetMultiFlowStatisticRequest.h>
#include <tencentcloud/mna/v20210119/model/GetMultiFlowStatisticResponse.h>
#include <tencentcloud/mna/v20210119/model/GetNetMonitorRequest.h>
#include <tencentcloud/mna/v20210119/model/GetNetMonitorResponse.h>
#include <tencentcloud/mna/v20210119/model/GetPublicKeyRequest.h>
#include <tencentcloud/mna/v20210119/model/GetPublicKeyResponse.h>
#include <tencentcloud/mna/v20210119/model/GetStatisticDataRequest.h>
#include <tencentcloud/mna/v20210119/model/GetStatisticDataResponse.h>
#include <tencentcloud/mna/v20210119/model/GetVendorHardwareRequest.h>
#include <tencentcloud/mna/v20210119/model/GetVendorHardwareResponse.h>
#include <tencentcloud/mna/v20210119/model/GroupAddDeviceRequest.h>
#include <tencentcloud/mna/v20210119/model/GroupAddDeviceResponse.h>
#include <tencentcloud/mna/v20210119/model/GroupDeleteDeviceRequest.h>
#include <tencentcloud/mna/v20210119/model/GroupDeleteDeviceResponse.h>
#include <tencentcloud/mna/v20210119/model/ModifyPackageRenewFlagRequest.h>
#include <tencentcloud/mna/v20210119/model/ModifyPackageRenewFlagResponse.h>
#include <tencentcloud/mna/v20210119/model/OrderFlowPackageRequest.h>
#include <tencentcloud/mna/v20210119/model/OrderFlowPackageResponse.h>
#include <tencentcloud/mna/v20210119/model/OrderPerLicenseRequest.h>
#include <tencentcloud/mna/v20210119/model/OrderPerLicenseResponse.h>
#include <tencentcloud/mna/v20210119/model/SetNotifyUrlRequest.h>
#include <tencentcloud/mna/v20210119/model/SetNotifyUrlResponse.h>
#include <tencentcloud/mna/v20210119/model/UpdateDeviceRequest.h>
#include <tencentcloud/mna/v20210119/model/UpdateDeviceResponse.h>
#include <tencentcloud/mna/v20210119/model/UpdateGroupRequest.h>
#include <tencentcloud/mna/v20210119/model/UpdateGroupResponse.h>
#include <tencentcloud/mna/v20210119/model/UpdateHardwareRequest.h>
#include <tencentcloud/mna/v20210119/model/UpdateHardwareResponse.h>
#include <tencentcloud/mna/v20210119/model/UpdateL3CidrRequest.h>
#include <tencentcloud/mna/v20210119/model/UpdateL3CidrResponse.h>
#include <tencentcloud/mna/v20210119/model/UpdateL3ConnRequest.h>
#include <tencentcloud/mna/v20210119/model/UpdateL3ConnResponse.h>
#include <tencentcloud/mna/v20210119/model/UpdateL3SwitchRequest.h>
#include <tencentcloud/mna/v20210119/model/UpdateL3SwitchResponse.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            class MnaClient : public AbstractClient
            {
            public:
                MnaClient(const Credential &credential, const std::string &region);
                MnaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ActivateHardwareResponse> ActivateHardwareOutcome;
                typedef std::future<ActivateHardwareOutcome> ActivateHardwareOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::ActivateHardwareRequest&, ActivateHardwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActivateHardwareAsyncHandler;
                typedef Outcome<Core::Error, Model::AddDeviceResponse> AddDeviceOutcome;
                typedef std::future<AddDeviceOutcome> AddDeviceOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::AddDeviceRequest&, AddDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::AddGroupResponse> AddGroupOutcome;
                typedef std::future<AddGroupOutcome> AddGroupOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::AddGroupRequest&, AddGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::AddHardwareResponse> AddHardwareOutcome;
                typedef std::future<AddHardwareOutcome> AddHardwareOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::AddHardwareRequest&, AddHardwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddHardwareAsyncHandler;
                typedef Outcome<Core::Error, Model::AddL3ConnResponse> AddL3ConnOutcome;
                typedef std::future<AddL3ConnOutcome> AddL3ConnOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::AddL3ConnRequest&, AddL3ConnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddL3ConnAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEncryptedKeyResponse> CreateEncryptedKeyOutcome;
                typedef std::future<CreateEncryptedKeyOutcome> CreateEncryptedKeyOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::CreateEncryptedKeyRequest&, CreateEncryptedKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEncryptedKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGroupResponse> DeleteGroupOutcome;
                typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::DeleteGroupRequest&, DeleteGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteL3ConnResponse> DeleteL3ConnOutcome;
                typedef std::future<DeleteL3ConnOutcome> DeleteL3ConnOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::DeleteL3ConnRequest&, DeleteL3ConnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteL3ConnAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadActiveDeviceCountResponse> DownloadActiveDeviceCountOutcome;
                typedef std::future<DownloadActiveDeviceCountOutcome> DownloadActiveDeviceCountOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::DownloadActiveDeviceCountRequest&, DownloadActiveDeviceCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadActiveDeviceCountAsyncHandler;
                typedef Outcome<Core::Error, Model::GetActiveDeviceCountResponse> GetActiveDeviceCountOutcome;
                typedef std::future<GetActiveDeviceCountOutcome> GetActiveDeviceCountOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetActiveDeviceCountRequest&, GetActiveDeviceCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetActiveDeviceCountAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeviceResponse> GetDeviceOutcome;
                typedef std::future<GetDeviceOutcome> GetDeviceOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetDeviceRequest&, GetDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDevicePayModeResponse> GetDevicePayModeOutcome;
                typedef std::future<GetDevicePayModeOutcome> GetDevicePayModeOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetDevicePayModeRequest&, GetDevicePayModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDevicePayModeAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDevicesResponse> GetDevicesOutcome;
                typedef std::future<GetDevicesOutcome> GetDevicesOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetDevicesRequest&, GetDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFlowAlarmInfoResponse> GetFlowAlarmInfoOutcome;
                typedef std::future<GetFlowAlarmInfoOutcome> GetFlowAlarmInfoOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetFlowAlarmInfoRequest&, GetFlowAlarmInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFlowAlarmInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFlowPackagesResponse> GetFlowPackagesOutcome;
                typedef std::future<GetFlowPackagesOutcome> GetFlowPackagesOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetFlowPackagesRequest&, GetFlowPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFlowPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFlowStatisticResponse> GetFlowStatisticOutcome;
                typedef std::future<GetFlowStatisticOutcome> GetFlowStatisticOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetFlowStatisticRequest&, GetFlowStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFlowStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFlowStatisticByGroupResponse> GetFlowStatisticByGroupOutcome;
                typedef std::future<GetFlowStatisticByGroupOutcome> GetFlowStatisticByGroupOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetFlowStatisticByGroupRequest&, GetFlowStatisticByGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFlowStatisticByGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFlowStatisticByRegionResponse> GetFlowStatisticByRegionOutcome;
                typedef std::future<GetFlowStatisticByRegionOutcome> GetFlowStatisticByRegionOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetFlowStatisticByRegionRequest&, GetFlowStatisticByRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFlowStatisticByRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGroupDetailResponse> GetGroupDetailOutcome;
                typedef std::future<GetGroupDetailOutcome> GetGroupDetailOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetGroupDetailRequest&, GetGroupDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGroupListResponse> GetGroupListOutcome;
                typedef std::future<GetGroupListOutcome> GetGroupListOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetGroupListRequest&, GetGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetHardwareListResponse> GetHardwareListOutcome;
                typedef std::future<GetHardwareListOutcome> GetHardwareListOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetHardwareListRequest&, GetHardwareListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetHardwareListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetL3ConnListResponse> GetL3ConnListOutcome;
                typedef std::future<GetL3ConnListOutcome> GetL3ConnListOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetL3ConnListRequest&, GetL3ConnListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetL3ConnListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetMultiFlowStatisticResponse> GetMultiFlowStatisticOutcome;
                typedef std::future<GetMultiFlowStatisticOutcome> GetMultiFlowStatisticOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetMultiFlowStatisticRequest&, GetMultiFlowStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMultiFlowStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::GetNetMonitorResponse> GetNetMonitorOutcome;
                typedef std::future<GetNetMonitorOutcome> GetNetMonitorOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetNetMonitorRequest&, GetNetMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetNetMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPublicKeyResponse> GetPublicKeyOutcome;
                typedef std::future<GetPublicKeyOutcome> GetPublicKeyOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetPublicKeyRequest&, GetPublicKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPublicKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::GetStatisticDataResponse> GetStatisticDataOutcome;
                typedef std::future<GetStatisticDataOutcome> GetStatisticDataOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetStatisticDataRequest&, GetStatisticDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetStatisticDataAsyncHandler;
                typedef Outcome<Core::Error, Model::GetVendorHardwareResponse> GetVendorHardwareOutcome;
                typedef std::future<GetVendorHardwareOutcome> GetVendorHardwareOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetVendorHardwareRequest&, GetVendorHardwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetVendorHardwareAsyncHandler;
                typedef Outcome<Core::Error, Model::GroupAddDeviceResponse> GroupAddDeviceOutcome;
                typedef std::future<GroupAddDeviceOutcome> GroupAddDeviceOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GroupAddDeviceRequest&, GroupAddDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GroupAddDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::GroupDeleteDeviceResponse> GroupDeleteDeviceOutcome;
                typedef std::future<GroupDeleteDeviceOutcome> GroupDeleteDeviceOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GroupDeleteDeviceRequest&, GroupDeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GroupDeleteDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPackageRenewFlagResponse> ModifyPackageRenewFlagOutcome;
                typedef std::future<ModifyPackageRenewFlagOutcome> ModifyPackageRenewFlagOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::ModifyPackageRenewFlagRequest&, ModifyPackageRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPackageRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::OrderFlowPackageResponse> OrderFlowPackageOutcome;
                typedef std::future<OrderFlowPackageOutcome> OrderFlowPackageOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::OrderFlowPackageRequest&, OrderFlowPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OrderFlowPackageAsyncHandler;
                typedef Outcome<Core::Error, Model::OrderPerLicenseResponse> OrderPerLicenseOutcome;
                typedef std::future<OrderPerLicenseOutcome> OrderPerLicenseOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::OrderPerLicenseRequest&, OrderPerLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OrderPerLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::SetNotifyUrlResponse> SetNotifyUrlOutcome;
                typedef std::future<SetNotifyUrlOutcome> SetNotifyUrlOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::SetNotifyUrlRequest&, SetNotifyUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetNotifyUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDeviceResponse> UpdateDeviceOutcome;
                typedef std::future<UpdateDeviceOutcome> UpdateDeviceOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::UpdateDeviceRequest&, UpdateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGroupResponse> UpdateGroupOutcome;
                typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::UpdateGroupRequest&, UpdateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateHardwareResponse> UpdateHardwareOutcome;
                typedef std::future<UpdateHardwareOutcome> UpdateHardwareOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::UpdateHardwareRequest&, UpdateHardwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHardwareAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateL3CidrResponse> UpdateL3CidrOutcome;
                typedef std::future<UpdateL3CidrOutcome> UpdateL3CidrOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::UpdateL3CidrRequest&, UpdateL3CidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateL3CidrAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateL3ConnResponse> UpdateL3ConnOutcome;
                typedef std::future<UpdateL3ConnOutcome> UpdateL3ConnOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::UpdateL3ConnRequest&, UpdateL3ConnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateL3ConnAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateL3SwitchResponse> UpdateL3SwitchOutcome;
                typedef std::future<UpdateL3SwitchOutcome> UpdateL3SwitchOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::UpdateL3SwitchRequest&, UpdateL3SwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateL3SwitchAsyncHandler;



                /**
                 *激活硬件设备
                 * @param req ActivateHardwareRequest
                 * @return ActivateHardwareOutcome
                 */
                ActivateHardwareOutcome ActivateHardware(const Model::ActivateHardwareRequest &request);
                void ActivateHardwareAsync(const Model::ActivateHardwareRequest& request, const ActivateHardwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActivateHardwareOutcomeCallable ActivateHardwareCallable(const Model::ActivateHardwareRequest& request);

                /**
                 *新建设备记录
                 * @param req AddDeviceRequest
                 * @return AddDeviceOutcome
                 */
                AddDeviceOutcome AddDevice(const Model::AddDeviceRequest &request);
                void AddDeviceAsync(const Model::AddDeviceRequest& request, const AddDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDeviceOutcomeCallable AddDeviceCallable(const Model::AddDeviceRequest& request);

                /**
                 *新建分组
                 * @param req AddGroupRequest
                 * @return AddGroupOutcome
                 */
                AddGroupOutcome AddGroup(const Model::AddGroupRequest &request);
                void AddGroupAsync(const Model::AddGroupRequest& request, const AddGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddGroupOutcomeCallable AddGroupCallable(const Model::AddGroupRequest& request);

                /**
                 *添加硬件设备，生成未激活的硬件设备，可支持批量添加
                 * @param req AddHardwareRequest
                 * @return AddHardwareOutcome
                 */
                AddHardwareOutcome AddHardware(const Model::AddHardwareRequest &request);
                void AddHardwareAsync(const Model::AddHardwareRequest& request, const AddHardwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddHardwareOutcomeCallable AddHardwareCallable(const Model::AddHardwareRequest& request);

                /**
                 *新建互通规则
                 * @param req AddL3ConnRequest
                 * @return AddL3ConnOutcome
                 */
                AddL3ConnOutcome AddL3Conn(const Model::AddL3ConnRequest &request);
                void AddL3ConnAsync(const Model::AddL3ConnRequest& request, const AddL3ConnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddL3ConnOutcomeCallable AddL3ConnCallable(const Model::AddL3ConnRequest& request);

                /**
                 *通过此接口设置和更新预置密钥
                 * @param req CreateEncryptedKeyRequest
                 * @return CreateEncryptedKeyOutcome
                 */
                CreateEncryptedKeyOutcome CreateEncryptedKey(const Model::CreateEncryptedKeyRequest &request);
                void CreateEncryptedKeyAsync(const Model::CreateEncryptedKeyRequest& request, const CreateEncryptedKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEncryptedKeyOutcomeCallable CreateEncryptedKeyCallable(const Model::CreateEncryptedKeyRequest& request);

                /**
                 *删除设备信息
                 * @param req DeleteDeviceRequest
                 * @return DeleteDeviceOutcome
                 */
                DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest &request);
                void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request);

                /**
                 *删除分组
                 * @param req DeleteGroupRequest
                 * @return DeleteGroupOutcome
                 */
                DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest &request);
                void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request);

                /**
                 *删除互通规则
                 * @param req DeleteL3ConnRequest
                 * @return DeleteL3ConnOutcome
                 */
                DeleteL3ConnOutcome DeleteL3Conn(const Model::DeleteL3ConnRequest &request);
                void DeleteL3ConnAsync(const Model::DeleteL3ConnRequest& request, const DeleteL3ConnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteL3ConnOutcomeCallable DeleteL3ConnCallable(const Model::DeleteL3ConnRequest& request);

                /**
                 *下载活跃设备数量统计
                 * @param req DownloadActiveDeviceCountRequest
                 * @return DownloadActiveDeviceCountOutcome
                 */
                DownloadActiveDeviceCountOutcome DownloadActiveDeviceCount(const Model::DownloadActiveDeviceCountRequest &request);
                void DownloadActiveDeviceCountAsync(const Model::DownloadActiveDeviceCountRequest& request, const DownloadActiveDeviceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadActiveDeviceCountOutcomeCallable DownloadActiveDeviceCountCallable(const Model::DownloadActiveDeviceCountRequest& request);

                /**
                 *活跃设备数量统计
                 * @param req GetActiveDeviceCountRequest
                 * @return GetActiveDeviceCountOutcome
                 */
                GetActiveDeviceCountOutcome GetActiveDeviceCount(const Model::GetActiveDeviceCountRequest &request);
                void GetActiveDeviceCountAsync(const Model::GetActiveDeviceCountRequest& request, const GetActiveDeviceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetActiveDeviceCountOutcomeCallable GetActiveDeviceCountCallable(const Model::GetActiveDeviceCountRequest& request);

                /**
                 *通过指定设备的ID查找设备详细信息
                 * @param req GetDeviceRequest
                 * @return GetDeviceOutcome
                 */
                GetDeviceOutcome GetDevice(const Model::GetDeviceRequest &request);
                void GetDeviceAsync(const Model::GetDeviceRequest& request, const GetDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeviceOutcomeCallable GetDeviceCallable(const Model::GetDeviceRequest& request);

                /**
                 *获取设备付费模式
                 * @param req GetDevicePayModeRequest
                 * @return GetDevicePayModeOutcome
                 */
                GetDevicePayModeOutcome GetDevicePayMode(const Model::GetDevicePayModeRequest &request);
                void GetDevicePayModeAsync(const Model::GetDevicePayModeRequest& request, const GetDevicePayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDevicePayModeOutcomeCallable GetDevicePayModeCallable(const Model::GetDevicePayModeRequest& request);

                /**
                 *获取设备信息列表
                 * @param req GetDevicesRequest
                 * @return GetDevicesOutcome
                 */
                GetDevicesOutcome GetDevices(const Model::GetDevicesRequest &request);
                void GetDevicesAsync(const Model::GetDevicesRequest& request, const GetDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDevicesOutcomeCallable GetDevicesCallable(const Model::GetDevicesRequest& request);

                /**
                 *根据AppId查询用户设置的流量告警信息，包括阈值，回调url和key
                 * @param req GetFlowAlarmInfoRequest
                 * @return GetFlowAlarmInfoOutcome
                 */
                GetFlowAlarmInfoOutcome GetFlowAlarmInfo(const Model::GetFlowAlarmInfoRequest &request);
                void GetFlowAlarmInfoAsync(const Model::GetFlowAlarmInfoRequest& request, const GetFlowAlarmInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFlowAlarmInfoOutcomeCallable GetFlowAlarmInfoCallable(const Model::GetFlowAlarmInfoRequest& request);

                /**
                 *获取流量包列表
                 * @param req GetFlowPackagesRequest
                 * @return GetFlowPackagesOutcome
                 */
                GetFlowPackagesOutcome GetFlowPackages(const Model::GetFlowPackagesRequest &request);
                void GetFlowPackagesAsync(const Model::GetFlowPackagesRequest& request, const GetFlowPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFlowPackagesOutcomeCallable GetFlowPackagesCallable(const Model::GetFlowPackagesRequest& request);

                /**
                 *获取指定设备Id，指定时间点数据流量使用情况
                 * @param req GetFlowStatisticRequest
                 * @return GetFlowStatisticOutcome
                 */
                GetFlowStatisticOutcome GetFlowStatistic(const Model::GetFlowStatisticRequest &request);
                void GetFlowStatisticAsync(const Model::GetFlowStatisticRequest& request, const GetFlowStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFlowStatisticOutcomeCallable GetFlowStatisticCallable(const Model::GetFlowStatisticRequest& request);

                /**
                 *获取指定分组，指定时间数据流量使用情况
                 * @param req GetFlowStatisticByGroupRequest
                 * @return GetFlowStatisticByGroupOutcome
                 */
                GetFlowStatisticByGroupOutcome GetFlowStatisticByGroup(const Model::GetFlowStatisticByGroupRequest &request);
                void GetFlowStatisticByGroupAsync(const Model::GetFlowStatisticByGroupRequest& request, const GetFlowStatisticByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFlowStatisticByGroupOutcomeCallable GetFlowStatisticByGroupCallable(const Model::GetFlowStatisticByGroupRequest& request);

                /**
                 *获取指定区域，指定时间点数据流量使用情况
                 * @param req GetFlowStatisticByRegionRequest
                 * @return GetFlowStatisticByRegionOutcome
                 */
                GetFlowStatisticByRegionOutcome GetFlowStatisticByRegion(const Model::GetFlowStatisticByRegionRequest &request);
                void GetFlowStatisticByRegionAsync(const Model::GetFlowStatisticByRegionRequest& request, const GetFlowStatisticByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFlowStatisticByRegionOutcomeCallable GetFlowStatisticByRegionCallable(const Model::GetFlowStatisticByRegionRequest& request);

                /**
                 *查看分组详细信息
                 * @param req GetGroupDetailRequest
                 * @return GetGroupDetailOutcome
                 */
                GetGroupDetailOutcome GetGroupDetail(const Model::GetGroupDetailRequest &request);
                void GetGroupDetailAsync(const Model::GetGroupDetailRequest& request, const GetGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGroupDetailOutcomeCallable GetGroupDetailCallable(const Model::GetGroupDetailRequest& request);

                /**
                 *获取分组列表
                 * @param req GetGroupListRequest
                 * @return GetGroupListOutcome
                 */
                GetGroupListOutcome GetGroupList(const Model::GetGroupListRequest &request);
                void GetGroupListAsync(const Model::GetGroupListRequest& request, const GetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGroupListOutcomeCallable GetGroupListCallable(const Model::GetGroupListRequest& request);

                /**
                 *获取厂商硬件列表
                 * @param req GetHardwareListRequest
                 * @return GetHardwareListOutcome
                 */
                GetHardwareListOutcome GetHardwareList(const Model::GetHardwareListRequest &request);
                void GetHardwareListAsync(const Model::GetHardwareListRequest& request, const GetHardwareListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetHardwareListOutcomeCallable GetHardwareListCallable(const Model::GetHardwareListRequest& request);

                /**
                 *获取互通规则列表
                 * @param req GetL3ConnListRequest
                 * @return GetL3ConnListOutcome
                 */
                GetL3ConnListOutcome GetL3ConnList(const Model::GetL3ConnListRequest &request);
                void GetL3ConnListAsync(const Model::GetL3ConnListRequest& request, const GetL3ConnListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetL3ConnListOutcomeCallable GetL3ConnListCallable(const Model::GetL3ConnListRequest& request);

                /**
                 *批量获取设备流量统计曲线
                 * @param req GetMultiFlowStatisticRequest
                 * @return GetMultiFlowStatisticOutcome
                 */
                GetMultiFlowStatisticOutcome GetMultiFlowStatistic(const Model::GetMultiFlowStatisticRequest &request);
                void GetMultiFlowStatisticAsync(const Model::GetMultiFlowStatisticRequest& request, const GetMultiFlowStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMultiFlowStatisticOutcomeCallable GetMultiFlowStatisticCallable(const Model::GetMultiFlowStatisticRequest& request);

                /**
                 *获取单设备的实时流量统计指标
                 * @param req GetNetMonitorRequest
                 * @return GetNetMonitorOutcome
                 */
                GetNetMonitorOutcome GetNetMonitor(const Model::GetNetMonitorRequest &request);
                void GetNetMonitorAsync(const Model::GetNetMonitorRequest& request, const GetNetMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetNetMonitorOutcomeCallable GetNetMonitorCallable(const Model::GetNetMonitorRequest& request);

                /**
                 *获取公钥用于验签
                 * @param req GetPublicKeyRequest
                 * @return GetPublicKeyOutcome
                 */
                GetPublicKeyOutcome GetPublicKey(const Model::GetPublicKeyRequest &request);
                void GetPublicKeyAsync(const Model::GetPublicKeyRequest& request, const GetPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPublicKeyOutcomeCallable GetPublicKeyCallable(const Model::GetPublicKeyRequest& request);

                /**
                 *在用量统计页面下载流量数据
                 * @param req GetStatisticDataRequest
                 * @return GetStatisticDataOutcome
                 */
                GetStatisticDataOutcome GetStatisticData(const Model::GetStatisticDataRequest &request);
                void GetStatisticDataAsync(const Model::GetStatisticDataRequest& request, const GetStatisticDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetStatisticDataOutcomeCallable GetStatisticDataCallable(const Model::GetStatisticDataRequest& request);

                /**
                 *获取厂商硬件设备列表
                 * @param req GetVendorHardwareRequest
                 * @return GetVendorHardwareOutcome
                 */
                GetVendorHardwareOutcome GetVendorHardware(const Model::GetVendorHardwareRequest &request);
                void GetVendorHardwareAsync(const Model::GetVendorHardwareRequest& request, const GetVendorHardwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetVendorHardwareOutcomeCallable GetVendorHardwareCallable(const Model::GetVendorHardwareRequest& request);

                /**
                 *向已存在分组中添加设备
                 * @param req GroupAddDeviceRequest
                 * @return GroupAddDeviceOutcome
                 */
                GroupAddDeviceOutcome GroupAddDevice(const Model::GroupAddDeviceRequest &request);
                void GroupAddDeviceAsync(const Model::GroupAddDeviceRequest& request, const GroupAddDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GroupAddDeviceOutcomeCallable GroupAddDeviceCallable(const Model::GroupAddDeviceRequest& request);

                /**
                 *删除分组中的设备
                 * @param req GroupDeleteDeviceRequest
                 * @return GroupDeleteDeviceOutcome
                 */
                GroupDeleteDeviceOutcome GroupDeleteDevice(const Model::GroupDeleteDeviceRequest &request);
                void GroupDeleteDeviceAsync(const Model::GroupDeleteDeviceRequest& request, const GroupDeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GroupDeleteDeviceOutcomeCallable GroupDeleteDeviceCallable(const Model::GroupDeleteDeviceRequest& request);

                /**
                 *可开启/关闭流量包自动续费，不影响当前周期正在生效的流量包。
                 * @param req ModifyPackageRenewFlagRequest
                 * @return ModifyPackageRenewFlagOutcome
                 */
                ModifyPackageRenewFlagOutcome ModifyPackageRenewFlag(const Model::ModifyPackageRenewFlagRequest &request);
                void ModifyPackageRenewFlagAsync(const Model::ModifyPackageRenewFlagRequest& request, const ModifyPackageRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPackageRenewFlagOutcomeCallable ModifyPackageRenewFlagCallable(const Model::ModifyPackageRenewFlagRequest& request);

                /**
                 *购买预付费流量包
                 * @param req OrderFlowPackageRequest
                 * @return OrderFlowPackageOutcome
                 */
                OrderFlowPackageOutcome OrderFlowPackage(const Model::OrderFlowPackageRequest &request);
                void OrderFlowPackageAsync(const Model::OrderFlowPackageRequest& request, const OrderFlowPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OrderFlowPackageOutcomeCallable OrderFlowPackageCallable(const Model::OrderFlowPackageRequest& request);

                /**
                 *购买一次性授权License
                 * @param req OrderPerLicenseRequest
                 * @return OrderPerLicenseOutcome
                 */
                OrderPerLicenseOutcome OrderPerLicense(const Model::OrderPerLicenseRequest &request);
                void OrderPerLicenseAsync(const Model::OrderPerLicenseRequest& request, const OrderPerLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OrderPerLicenseOutcomeCallable OrderPerLicenseCallable(const Model::OrderPerLicenseRequest& request);

                /**
                 *设置用户流量告警信息接口，通过该接口设置流量包告警阈值以及告警时回调的url和key
                 * @param req SetNotifyUrlRequest
                 * @return SetNotifyUrlOutcome
                 */
                SetNotifyUrlOutcome SetNotifyUrl(const Model::SetNotifyUrlRequest &request);
                void SetNotifyUrlAsync(const Model::SetNotifyUrlRequest& request, const SetNotifyUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetNotifyUrlOutcomeCallable SetNotifyUrlCallable(const Model::SetNotifyUrlRequest& request);

                /**
                 *更新设备信息
                 * @param req UpdateDeviceRequest
                 * @return UpdateDeviceOutcome
                 */
                UpdateDeviceOutcome UpdateDevice(const Model::UpdateDeviceRequest &request);
                void UpdateDeviceAsync(const Model::UpdateDeviceRequest& request, const UpdateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDeviceOutcomeCallable UpdateDeviceCallable(const Model::UpdateDeviceRequest& request);

                /**
                 *更新分组备注
                 * @param req UpdateGroupRequest
                 * @return UpdateGroupOutcome
                 */
                UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest &request);
                void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request);

                /**
                 *更新硬件信息
                 * @param req UpdateHardwareRequest
                 * @return UpdateHardwareOutcome
                 */
                UpdateHardwareOutcome UpdateHardware(const Model::UpdateHardwareRequest &request);
                void UpdateHardwareAsync(const Model::UpdateHardwareRequest& request, const UpdateHardwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateHardwareOutcomeCallable UpdateHardwareCallable(const Model::UpdateHardwareRequest& request);

                /**
                 *更新互通规则CIDR
                 * @param req UpdateL3CidrRequest
                 * @return UpdateL3CidrOutcome
                 */
                UpdateL3CidrOutcome UpdateL3Cidr(const Model::UpdateL3CidrRequest &request);
                void UpdateL3CidrAsync(const Model::UpdateL3CidrRequest& request, const UpdateL3CidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateL3CidrOutcomeCallable UpdateL3CidrCallable(const Model::UpdateL3CidrRequest& request);

                /**
                 *更新互通规则备注
                 * @param req UpdateL3ConnRequest
                 * @return UpdateL3ConnOutcome
                 */
                UpdateL3ConnOutcome UpdateL3Conn(const Model::UpdateL3ConnRequest &request);
                void UpdateL3ConnAsync(const Model::UpdateL3ConnRequest& request, const UpdateL3ConnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateL3ConnOutcomeCallable UpdateL3ConnCallable(const Model::UpdateL3ConnRequest& request);

                /**
                 *更新互通规则开关
                 * @param req UpdateL3SwitchRequest
                 * @return UpdateL3SwitchOutcome
                 */
                UpdateL3SwitchOutcome UpdateL3Switch(const Model::UpdateL3SwitchRequest &request);
                void UpdateL3SwitchAsync(const Model::UpdateL3SwitchRequest& request, const UpdateL3SwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateL3SwitchOutcomeCallable UpdateL3SwitchCallable(const Model::UpdateL3SwitchRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MNACLIENT_H_
