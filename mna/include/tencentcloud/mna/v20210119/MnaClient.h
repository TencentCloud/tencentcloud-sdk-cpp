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
#include <tencentcloud/mna/v20210119/model/AddHardwareRequest.h>
#include <tencentcloud/mna/v20210119/model/AddHardwareResponse.h>
#include <tencentcloud/mna/v20210119/model/CreateEncryptedKeyRequest.h>
#include <tencentcloud/mna/v20210119/model/CreateEncryptedKeyResponse.h>
#include <tencentcloud/mna/v20210119/model/CreateQosRequest.h>
#include <tencentcloud/mna/v20210119/model/CreateQosResponse.h>
#include <tencentcloud/mna/v20210119/model/DeleteDeviceRequest.h>
#include <tencentcloud/mna/v20210119/model/DeleteDeviceResponse.h>
#include <tencentcloud/mna/v20210119/model/DeleteQosRequest.h>
#include <tencentcloud/mna/v20210119/model/DeleteQosResponse.h>
#include <tencentcloud/mna/v20210119/model/DescribeQosRequest.h>
#include <tencentcloud/mna/v20210119/model/DescribeQosResponse.h>
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
#include <tencentcloud/mna/v20210119/model/GetHardwareListRequest.h>
#include <tencentcloud/mna/v20210119/model/GetHardwareListResponse.h>
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
#include <tencentcloud/mna/v20210119/model/ModifyPackageRenewFlagRequest.h>
#include <tencentcloud/mna/v20210119/model/ModifyPackageRenewFlagResponse.h>
#include <tencentcloud/mna/v20210119/model/OrderFlowPackageRequest.h>
#include <tencentcloud/mna/v20210119/model/OrderFlowPackageResponse.h>
#include <tencentcloud/mna/v20210119/model/UpdateDeviceRequest.h>
#include <tencentcloud/mna/v20210119/model/UpdateDeviceResponse.h>
#include <tencentcloud/mna/v20210119/model/UpdateHardwareRequest.h>
#include <tencentcloud/mna/v20210119/model/UpdateHardwareResponse.h>


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
                typedef Outcome<Core::Error, Model::AddHardwareResponse> AddHardwareOutcome;
                typedef std::future<AddHardwareOutcome> AddHardwareOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::AddHardwareRequest&, AddHardwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddHardwareAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEncryptedKeyResponse> CreateEncryptedKeyOutcome;
                typedef std::future<CreateEncryptedKeyOutcome> CreateEncryptedKeyOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::CreateEncryptedKeyRequest&, CreateEncryptedKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEncryptedKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQosResponse> CreateQosOutcome;
                typedef std::future<CreateQosOutcome> CreateQosOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::CreateQosRequest&, CreateQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQosAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQosResponse> DeleteQosOutcome;
                typedef std::future<DeleteQosOutcome> DeleteQosOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::DeleteQosRequest&, DeleteQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQosResponse> DescribeQosOutcome;
                typedef std::future<DescribeQosOutcome> DescribeQosOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::DescribeQosRequest&, DescribeQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQosAsyncHandler;
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
                typedef Outcome<Core::Error, Model::GetHardwareListResponse> GetHardwareListOutcome;
                typedef std::future<GetHardwareListOutcome> GetHardwareListOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetHardwareListRequest&, GetHardwareListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetHardwareListAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyPackageRenewFlagResponse> ModifyPackageRenewFlagOutcome;
                typedef std::future<ModifyPackageRenewFlagOutcome> ModifyPackageRenewFlagOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::ModifyPackageRenewFlagRequest&, ModifyPackageRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPackageRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::OrderFlowPackageResponse> OrderFlowPackageOutcome;
                typedef std::future<OrderFlowPackageOutcome> OrderFlowPackageOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::OrderFlowPackageRequest&, OrderFlowPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OrderFlowPackageAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDeviceResponse> UpdateDeviceOutcome;
                typedef std::future<UpdateDeviceOutcome> UpdateDeviceOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::UpdateDeviceRequest&, UpdateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateHardwareResponse> UpdateHardwareOutcome;
                typedef std::future<UpdateHardwareOutcome> UpdateHardwareOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::UpdateHardwareRequest&, UpdateHardwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHardwareAsyncHandler;



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
                 *添加硬件设备，生成未激活的硬件设备，可支持批量添加
                 * @param req AddHardwareRequest
                 * @return AddHardwareOutcome
                 */
                AddHardwareOutcome AddHardware(const Model::AddHardwareRequest &request);
                void AddHardwareAsync(const Model::AddHardwareRequest& request, const AddHardwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddHardwareOutcomeCallable AddHardwareCallable(const Model::AddHardwareRequest& request);

                /**
                 *通过此接口设置和更新预置密钥
                 * @param req CreateEncryptedKeyRequest
                 * @return CreateEncryptedKeyOutcome
                 */
                CreateEncryptedKeyOutcome CreateEncryptedKey(const Model::CreateEncryptedKeyRequest &request);
                void CreateEncryptedKeyAsync(const Model::CreateEncryptedKeyRequest& request, const CreateEncryptedKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEncryptedKeyOutcomeCallable CreateEncryptedKeyCallable(const Model::CreateEncryptedKeyRequest& request);

                /**
                 *移动网络发起Qos加速过程
                 * @param req CreateQosRequest
                 * @return CreateQosOutcome
                 */
                CreateQosOutcome CreateQos(const Model::CreateQosRequest &request);
                void CreateQosAsync(const Model::CreateQosRequest& request, const CreateQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQosOutcomeCallable CreateQosCallable(const Model::CreateQosRequest& request);

                /**
                 *删除设备信息
                 * @param req DeleteDeviceRequest
                 * @return DeleteDeviceOutcome
                 */
                DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest &request);
                void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request);

                /**
                 *移动网络停止Qos加速过程
                 * @param req DeleteQosRequest
                 * @return DeleteQosOutcome
                 */
                DeleteQosOutcome DeleteQos(const Model::DeleteQosRequest &request);
                void DeleteQosAsync(const Model::DeleteQosRequest& request, const DeleteQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQosOutcomeCallable DeleteQosCallable(const Model::DeleteQosRequest& request);

                /**
                 *获取Qos加速状态
                 * @param req DescribeQosRequest
                 * @return DescribeQosOutcome
                 */
                DescribeQosOutcome DescribeQos(const Model::DescribeQosRequest &request);
                void DescribeQosAsync(const Model::DescribeQosRequest& request, const DescribeQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQosOutcomeCallable DescribeQosCallable(const Model::DescribeQosRequest& request);

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
                 *获取厂商硬件列表
                 * @param req GetHardwareListRequest
                 * @return GetHardwareListOutcome
                 */
                GetHardwareListOutcome GetHardwareList(const Model::GetHardwareListRequest &request);
                void GetHardwareListAsync(const Model::GetHardwareListRequest& request, const GetHardwareListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetHardwareListOutcomeCallable GetHardwareListCallable(const Model::GetHardwareListRequest& request);

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
                 *更新设备信息
                 * @param req UpdateDeviceRequest
                 * @return UpdateDeviceOutcome
                 */
                UpdateDeviceOutcome UpdateDevice(const Model::UpdateDeviceRequest &request);
                void UpdateDeviceAsync(const Model::UpdateDeviceRequest& request, const UpdateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDeviceOutcomeCallable UpdateDeviceCallable(const Model::UpdateDeviceRequest& request);

                /**
                 *更新硬件信息
                 * @param req UpdateHardwareRequest
                 * @return UpdateHardwareOutcome
                 */
                UpdateHardwareOutcome UpdateHardware(const Model::UpdateHardwareRequest &request);
                void UpdateHardwareAsync(const Model::UpdateHardwareRequest& request, const UpdateHardwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateHardwareOutcomeCallable UpdateHardwareCallable(const Model::UpdateHardwareRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MNACLIENT_H_
