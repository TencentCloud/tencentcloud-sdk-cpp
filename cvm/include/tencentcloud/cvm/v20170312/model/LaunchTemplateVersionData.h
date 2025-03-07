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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEVERSIONDATA_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEVERSIONDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Placement.h>
#include <tencentcloud/cvm/v20170312/model/SystemDisk.h>
#include <tencentcloud/cvm/v20170312/model/DataDisk.h>
#include <tencentcloud/cvm/v20170312/model/InternetAccessible.h>
#include <tencentcloud/cvm/v20170312/model/VirtualPrivateCloud.h>
#include <tencentcloud/cvm/v20170312/model/LoginSettings.h>
#include <tencentcloud/cvm/v20170312/model/EnhancedService.h>
#include <tencentcloud/cvm/v20170312/model/ActionTimer.h>
#include <tencentcloud/cvm/v20170312/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/cvm/v20170312/model/InstanceChargePrepaid.h>
#include <tencentcloud/cvm/v20170312/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 实例启动模板版本信息
                */
                class LaunchTemplateVersionData : public AbstractModel
                {
                public:
                    LaunchTemplateVersionData();
                    ~LaunchTemplateVersionData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例所在的位置。
                     * @return Placement 实例所在的位置。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置实例所在的位置。
                     * @param _placement 实例所在的位置。
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取实例机型。
                     * @return InstanceType 实例机型。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例机型。
                     * @param _instanceType 实例机型。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例计费模式。取值范围：
<li>`PREPAID`：表示预付费，即包年包月</li>
<li>`POSTPAID_BY_HOUR`：表示后付费，即按量计费</li>
<li>`CDHPAID`：`专用宿主机`付费，即只对`专用宿主机`计费，不对`专用宿主机`上的实例计费。</li>
<li>`SPOTPAID`：表示竞价实例付费。</li>
                     * @return InstanceChargeType 实例计费模式。取值范围：
<li>`PREPAID`：表示预付费，即包年包月</li>
<li>`POSTPAID_BY_HOUR`：表示后付费，即按量计费</li>
<li>`CDHPAID`：`专用宿主机`付费，即只对`专用宿主机`计费，不对`专用宿主机`上的实例计费。</li>
<li>`SPOTPAID`：表示竞价实例付费。</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费模式。取值范围：
<li>`PREPAID`：表示预付费，即包年包月</li>
<li>`POSTPAID_BY_HOUR`：表示后付费，即按量计费</li>
<li>`CDHPAID`：`专用宿主机`付费，即只对`专用宿主机`计费，不对`专用宿主机`上的实例计费。</li>
<li>`SPOTPAID`：表示竞价实例付费。</li>
                     * @param _instanceChargeType 实例计费模式。取值范围：
<li>`PREPAID`：表示预付费，即包年包月</li>
<li>`POSTPAID_BY_HOUR`：表示后付费，即按量计费</li>
<li>`CDHPAID`：`专用宿主机`付费，即只对`专用宿主机`计费，不对`专用宿主机`上的实例计费。</li>
<li>`SPOTPAID`：表示竞价实例付费。</li>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取实例系统盘信息。
                     * @return SystemDisk 实例系统盘信息。
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置实例系统盘信息。
                     * @param _systemDisk 实例系统盘信息。
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取实例数据盘信息。只包含随实例购买的数据盘。
                     * @return DataDisks 实例数据盘信息。只包含随实例购买的数据盘。
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置实例数据盘信息。只包含随实例购买的数据盘。
                     * @param _dataDisks 实例数据盘信息。只包含随实例购买的数据盘。
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取实例带宽信息。
                     * @return InternetAccessible 实例带宽信息。
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置实例带宽信息。
                     * @param _internetAccessible 实例带宽信息。
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取实例所属虚拟私有网络信息。
                     * @return VirtualPrivateCloud 实例所属虚拟私有网络信息。
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置实例所属虚拟私有网络信息。
                     * @param _virtualPrivateCloud 实例所属虚拟私有网络信息。
                     * 
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取生产实例所使用的镜像`ID`。
                     * @return ImageId 生产实例所使用的镜像`ID`。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置生产实例所使用的镜像`ID`。
                     * @param _imageId 生产实例所使用的镜像`ID`。
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。
                     * @return SecurityGroupIds 实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。
                     * @param _securityGroupIds 实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取实例登录设置。目前只返回实例所关联的密钥。
                     * @return LoginSettings 实例登录设置。目前只返回实例所关联的密钥。
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置实例登录设置。目前只返回实例所关联的密钥。
                     * @param _loginSettings 实例登录设置。目前只返回实例所关联的密钥。
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取CAM角色名。
                     * @return CamRoleName CAM角色名。
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置CAM角色名。
                     * @param _camRoleName CAM角色名。
                     * 
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     * 
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取高性能计算集群`ID`。
                     * @return HpcClusterId 高性能计算集群`ID`。
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置高性能计算集群`ID`。
                     * @param _hpcClusterId 高性能计算集群`ID`。
                     * 
                     */
                    void SetHpcClusterId(const std::string& _hpcClusterId);

                    /**
                     * 判断参数 HpcClusterId 是否已赋值
                     * @return HpcClusterId 是否已赋值
                     * 
                     */
                    bool HpcClusterIdHasBeenSet() const;

                    /**
                     * 获取购买实例数量。
                     * @return InstanceCount 购买实例数量。
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置购买实例数量。
                     * @param _instanceCount 购买实例数量。
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取增强服务。
                     * @return EnhancedService 增强服务。
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置增强服务。
                     * @param _enhancedService 增强服务。
                     * 
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     * 
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16KB。
                     * @return UserData 提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16KB。
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16KB。
                     * @param _userData 提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16KB。
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取置放群组ID，仅支持指定一个。
                     * @return DisasterRecoverGroupIds 置放群组ID，仅支持指定一个。
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置置放群组ID，仅支持指定一个。
                     * @param _disasterRecoverGroupIds 置放群组ID，仅支持指定一个。
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取定时任务。通过该参数可以为实例指定定时任务，目前仅支持定时销毁。
                     * @return ActionTimer 定时任务。通过该参数可以为实例指定定时任务，目前仅支持定时销毁。
                     * 
                     */
                    ActionTimer GetActionTimer() const;

                    /**
                     * 设置定时任务。通过该参数可以为实例指定定时任务，目前仅支持定时销毁。
                     * @param _actionTimer 定时任务。通过该参数可以为实例指定定时任务，目前仅支持定时销毁。
                     * 
                     */
                    void SetActionTimer(const ActionTimer& _actionTimer);

                    /**
                     * 判断参数 ActionTimer 是否已赋值
                     * @return ActionTimer 是否已赋值
                     * 
                     */
                    bool ActionTimerHasBeenSet() const;

                    /**
                     * 获取实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
                     * @return InstanceMarketOptions 实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
                     * 
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
                     * @param _instanceMarketOptions 实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
                     * 
                     */
                    void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions);

                    /**
                     * 判断参数 InstanceMarketOptions 是否已赋值
                     * @return InstanceMarketOptions 是否已赋值
                     * 
                     */
                    bool InstanceMarketOptionsHasBeenSet() const;

                    /**
                     * 获取云服务器的主机名。
                     * @return HostName 云服务器的主机名。
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置云服务器的主机名。
                     * @param _hostName 云服务器的主机名。
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。
                     * @return ClientToken 用于保证请求幂等性的字符串。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。
                     * @param _clientToken 用于保证请求幂等性的字符串。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取预付费模式，即包年包月相关参数设置。
                     * @return InstanceChargePrepaid 预付费模式，即包年包月相关参数设置。
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。
                     * @param _instanceChargePrepaid 预付费模式，即包年包月相关参数设置。
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取标签描述列表。通过指定该参数可以同时绑定标签到相应的云服务器、云硬盘实例。
                     * @return TagSpecification 标签描述列表。通过指定该参数可以同时绑定标签到相应的云服务器、云硬盘实例。
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置标签描述列表。通过指定该参数可以同时绑定标签到相应的云服务器、云硬盘实例。
                     * @param _tagSpecification 标签描述列表。通过指定该参数可以同时绑定标签到相应的云服务器、云硬盘实例。
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：

true：表示开启实例保护，不允许通过api接口删除实例
false：表示关闭实例保护，允许通过api接口删除实例

默认取值：false。
                     * @return DisableApiTermination 实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：

true：表示开启实例保护，不允许通过api接口删除实例
false：表示关闭实例保护，允许通过api接口删除实例

默认取值：false。
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：

true：表示开启实例保护，不允许通过api接口删除实例
false：表示关闭实例保护，允许通过api接口删除实例

默认取值：false。
                     * @param _disableApiTermination 实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：

true：表示开启实例保护，不允许通过api接口删除实例
false：表示关闭实例保护，允许通过api接口删除实例

默认取值：false。
                     * 
                     */
                    void SetDisableApiTermination(const bool& _disableApiTermination);

                    /**
                     * 判断参数 DisableApiTermination 是否已赋值
                     * @return DisableApiTermination 是否已赋值
                     * 
                     */
                    bool DisableApiTerminationHasBeenSet() const;

                private:

                    /**
                     * 实例所在的位置。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 实例机型。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例计费模式。取值范围：
<li>`PREPAID`：表示预付费，即包年包月</li>
<li>`POSTPAID_BY_HOUR`：表示后付费，即按量计费</li>
<li>`CDHPAID`：`专用宿主机`付费，即只对`专用宿主机`计费，不对`专用宿主机`上的实例计费。</li>
<li>`SPOTPAID`：表示竞价实例付费。</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 实例系统盘信息。
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 实例数据盘信息。只包含随实例购买的数据盘。
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * 实例带宽信息。
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 实例所属虚拟私有网络信息。
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * 生产实例所使用的镜像`ID`。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 实例登录设置。目前只返回实例所关联的密钥。
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * CAM角色名。
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * 高性能计算集群`ID`。
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * 购买实例数量。
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 增强服务。
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * 提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16KB。
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 置放群组ID，仅支持指定一个。
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * 定时任务。通过该参数可以为实例指定定时任务，目前仅支持定时销毁。
                     */
                    ActionTimer m_actionTimer;
                    bool m_actionTimerHasBeenSet;

                    /**
                     * 实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * 云服务器的主机名。
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * 标签描述列表。通过指定该参数可以同时绑定标签到相应的云服务器、云硬盘实例。
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：

true：表示开启实例保护，不允许通过api接口删除实例
false：表示关闭实例保护，允许通过api接口删除实例

默认取值：false。
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEVERSIONDATA_H_
