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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEINSTANCEMODEL_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEINSTANCEMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/Placement.h>
#include <tencentcloud/bdrc/v20260330/model/DiskModel.h>
#include <tencentcloud/bdrc/v20260330/model/InstanceChargePrepaid.h>
#include <tencentcloud/bdrc/v20260330/model/VirtualPrivateCloud.h>
#include <tencentcloud/bdrc/v20260330/model/InternetAccessible.h>
#include <tencentcloud/bdrc/v20260330/model/LoginSettings.h>
#include <tencentcloud/bdrc/v20260330/model/EnhancedService.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 创建cvm参数
                */
                class CreateInstanceModel : public AbstractModel
                {
                public:
                    CreateInstanceModel();
                    ~CreateInstanceModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源CVM ID
                     * @return SourceInstanceId 源CVM ID
                     * 
                     */
                    std::string GetSourceInstanceId() const;

                    /**
                     * 设置源CVM ID
                     * @param _sourceInstanceId 源CVM ID
                     * 
                     */
                    void SetSourceInstanceId(const std::string& _sourceInstanceId);

                    /**
                     * 判断参数 SourceInstanceId 是否已赋值
                     * @return SourceInstanceId 是否已赋值
                     * 
                     */
                    bool SourceInstanceIdHasBeenSet() const;

                    /**
                     * 获取实例计费模式
                     * @return InstanceChargeType 实例计费模式
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费模式
                     * @param _instanceChargeType 实例计费模式
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
                     * 获取实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * @return Placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * @param _placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
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
                     * 获取镜像ID
                     * @return ImageId 镜像ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID
                     * @param _imageId 镜像ID
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
                     * 获取指定系统盘规格
                     * @return SystemDisk 指定系统盘规格
                     * 
                     */
                    DiskModel GetSystemDisk() const;

                    /**
                     * 设置指定系统盘规格
                     * @param _systemDisk 指定系统盘规格
                     * 
                     */
                    void SetSystemDisk(const DiskModel& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @return InstanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @param _instanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
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
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
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
                     * 获取指定数据盘规格列表
                     * @return DataDisks 指定数据盘规格列表
                     * 
                     */
                    std::vector<DiskModel> GetDataDisks() const;

                    /**
                     * 设置指定数据盘规格列表
                     * @param _dataDisks 指定数据盘规格列表
                     * 
                     */
                    void SetDataDisks(const std::vector<DiskModel>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取私有网络相关信息配置
                     * @return VirtualPrivateCloud 私有网络相关信息配置
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置私有网络相关信息配置
                     * @param _virtualPrivateCloud 私有网络相关信息配置
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
                     * 获取公网带宽相关信息设置
                     * @return InternetAccessible 公网带宽相关信息设置
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置公网带宽相关信息设置
                     * @param _internetAccessible 公网带宽相关信息设置
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
                     * 获取实例显示名称。不传则新实例名为"未命名"。最大长度不能超60个字节。
                     * @return InstanceName 实例显示名称。不传则新实例名为"未命名"。最大长度不能超60个字节。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例显示名称。不传则新实例名为"未命名"。最大长度不能超60个字节。
                     * @param _instanceName 实例显示名称。不传则新实例名为"未命名"。最大长度不能超60个字节。
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
                     * 获取实例登录设置
                     * @return LoginSettings 实例登录设置
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置实例登录设置
                     * @param _loginSettings 实例登录设置
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
                     * 获取增强服务配置
                     * @return EnhancedService 增强服务配置
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置增强服务配置
                     * @param _enhancedService 增强服务配置
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
                     * 获取竞价实例最高出价
                     * @return SpotPrice 竞价实例最高出价
                     * 
                     */
                    std::string GetSpotPrice() const;

                    /**
                     * 设置竞价实例最高出价
                     * @param _spotPrice 竞价实例最高出价
                     * 
                     */
                    void SetSpotPrice(const std::string& _spotPrice);

                    /**
                     * 判断参数 SpotPrice 是否已赋值
                     * @return SpotPrice 是否已赋值
                     * 
                     */
                    bool SpotPriceHasBeenSet() const;

                    /**
                     * 获取实例主机名
                     * @return HostName 实例主机名
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置实例主机名
                     * @param _hostName 实例主机名
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
                     * 获取提供给实例使用的用户数据
                     * @return UserData 提供给实例使用的用户数据
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置提供给实例使用的用户数据
                     * @param _userData 提供给实例使用的用户数据
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
                     * 获取放置群组ID
                     * @return DisasterRecoverGroupIds 放置群组ID
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置放置群组ID
                     * @param _disasterRecoverGroupIds 放置群组ID
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
                     * 获取关机计费模式，默认关机收费（KEEP_CHARGING / STOP_CHARGING），仅 CreateInstanceCopyPair 场景生效
                     * @return StoppedMode 关机计费模式，默认关机收费（KEEP_CHARGING / STOP_CHARGING），仅 CreateInstanceCopyPair 场景生效
                     * 
                     */
                    std::string GetStoppedMode() const;

                    /**
                     * 设置关机计费模式，默认关机收费（KEEP_CHARGING / STOP_CHARGING），仅 CreateInstanceCopyPair 场景生效
                     * @param _stoppedMode 关机计费模式，默认关机收费（KEEP_CHARGING / STOP_CHARGING），仅 CreateInstanceCopyPair 场景生效
                     * 
                     */
                    void SetStoppedMode(const std::string& _stoppedMode);

                    /**
                     * 判断参数 StoppedMode 是否已赋值
                     * @return StoppedMode 是否已赋值
                     * 
                     */
                    bool StoppedModeHasBeenSet() const;

                    /**
                     * 获取容灾演练使用的复制对ID，仅 CreateInstanceDrillPairs 场景生效
                     * @return CopyPairId 容灾演练使用的复制对ID，仅 CreateInstanceDrillPairs 场景生效
                     * 
                     */
                    std::string GetCopyPairId() const;

                    /**
                     * 设置容灾演练使用的复制对ID，仅 CreateInstanceDrillPairs 场景生效
                     * @param _copyPairId 容灾演练使用的复制对ID，仅 CreateInstanceDrillPairs 场景生效
                     * 
                     */
                    void SetCopyPairId(const std::string& _copyPairId);

                    /**
                     * 判断参数 CopyPairId 是否已赋值
                     * @return CopyPairId 是否已赋值
                     * 
                     */
                    bool CopyPairIdHasBeenSet() const;

                    /**
                     * 获取容灾演练的恢复时间点，仅 CreateInstanceDrillPairs 场景生效
                     * @return RecoveryTime 容灾演练的恢复时间点，仅 CreateInstanceDrillPairs 场景生效
                     * 
                     */
                    std::string GetRecoveryTime() const;

                    /**
                     * 设置容灾演练的恢复时间点，仅 CreateInstanceDrillPairs 场景生效
                     * @param _recoveryTime 容灾演练的恢复时间点，仅 CreateInstanceDrillPairs 场景生效
                     * 
                     */
                    void SetRecoveryTime(const std::string& _recoveryTime);

                    /**
                     * 判断参数 RecoveryTime 是否已赋值
                     * @return RecoveryTime 是否已赋值
                     * 
                     */
                    bool RecoveryTimeHasBeenSet() const;

                private:

                    /**
                     * 源CVM ID
                     */
                    std::string m_sourceInstanceId;
                    bool m_sourceInstanceIdHasBeenSet;

                    /**
                     * 实例计费模式
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 镜像ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 指定系统盘规格
                     */
                    DiskModel m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 指定数据盘规格列表
                     */
                    std::vector<DiskModel> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * 私有网络相关信息配置
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * 公网带宽相关信息设置
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 实例显示名称。不传则新实例名为"未命名"。最大长度不能超60个字节。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例登录设置
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * 增强服务配置
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * 竞价实例最高出价
                     */
                    std::string m_spotPrice;
                    bool m_spotPriceHasBeenSet;

                    /**
                     * 实例主机名
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 提供给实例使用的用户数据
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 放置群组ID
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * 关机计费模式，默认关机收费（KEEP_CHARGING / STOP_CHARGING），仅 CreateInstanceCopyPair 场景生效
                     */
                    std::string m_stoppedMode;
                    bool m_stoppedModeHasBeenSet;

                    /**
                     * 容灾演练使用的复制对ID，仅 CreateInstanceDrillPairs 场景生效
                     */
                    std::string m_copyPairId;
                    bool m_copyPairIdHasBeenSet;

                    /**
                     * 容灾演练的恢复时间点，仅 CreateInstanceDrillPairs 场景生效
                     */
                    std::string m_recoveryTime;
                    bool m_recoveryTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEINSTANCEMODEL_H_
