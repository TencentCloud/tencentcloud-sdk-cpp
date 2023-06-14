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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_COPYFLEETREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_COPYFLEETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/InboundPermission.h>
#include <tencentcloud/gse/v20191112/model/ResourceCreationLimitPolicy.h>
#include <tencentcloud/gse/v20191112/model/RuntimeConfiguration.h>
#include <tencentcloud/gse/v20191112/model/Tag.h>
#include <tencentcloud/gse/v20191112/model/DiskInfo.h>
#include <tencentcloud/gse/v20191112/model/CcnInfo.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * CopyFleet请求参数结构体
                */
                class CopyFleetRequest : public AbstractModel
                {
                public:
                    CopyFleetRequest();
                    ~CopyFleetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器舰队 Id
                     * @return FleetId 服务器舰队 Id
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务器舰队 Id
                     * @param _fleetId 服务器舰队 Id
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取复制数量，最小值1，最大值为剩余配额，可以根据[获取用户配额](https://cloud.tencent.com/document/product/1165/48732)接口获取。
                     * @return CopyNumber 复制数量，最小值1，最大值为剩余配额，可以根据[获取用户配额](https://cloud.tencent.com/document/product/1165/48732)接口获取。
                     * 
                     */
                    int64_t GetCopyNumber() const;

                    /**
                     * 设置复制数量，最小值1，最大值为剩余配额，可以根据[获取用户配额](https://cloud.tencent.com/document/product/1165/48732)接口获取。
                     * @param _copyNumber 复制数量，最小值1，最大值为剩余配额，可以根据[获取用户配额](https://cloud.tencent.com/document/product/1165/48732)接口获取。
                     * 
                     */
                    void SetCopyNumber(const int64_t& _copyNumber);

                    /**
                     * 判断参数 CopyNumber 是否已赋值
                     * @return CopyNumber 是否已赋值
                     * 
                     */
                    bool CopyNumberHasBeenSet() const;

                    /**
                     * 获取生成包 Id
                     * @return AssetId 生成包 Id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置生成包 Id
                     * @param _assetId 生成包 Id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取描述，最小长度0，最大长度100
                     * @return Description 描述，最小长度0，最大长度100
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述，最小长度0，最大长度100
                     * @param _description 描述，最小长度0，最大长度100
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取网络配置
                     * @return InboundPermissions 网络配置
                     * 
                     */
                    std::vector<InboundPermission> GetInboundPermissions() const;

                    /**
                     * 设置网络配置
                     * @param _inboundPermissions 网络配置
                     * 
                     */
                    void SetInboundPermissions(const std::vector<InboundPermission>& _inboundPermissions);

                    /**
                     * 判断参数 InboundPermissions 是否已赋值
                     * @return InboundPermissions 是否已赋值
                     * 
                     */
                    bool InboundPermissionsHasBeenSet() const;

                    /**
                     * 获取服务器类型，参数根据[获取服务器实例类型列表](https://cloud.tencent.com/document/product/1165/48732)接口获取。
                     * @return InstanceType 服务器类型，参数根据[获取服务器实例类型列表](https://cloud.tencent.com/document/product/1165/48732)接口获取。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置服务器类型，参数根据[获取服务器实例类型列表](https://cloud.tencent.com/document/product/1165/48732)接口获取。
                     * @param _instanceType 服务器类型，参数根据[获取服务器实例类型列表](https://cloud.tencent.com/document/product/1165/48732)接口获取。
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
                     * 获取服务器舰队类型，目前只支持ON_DEMAND类型
                     * @return FleetType 服务器舰队类型，目前只支持ON_DEMAND类型
                     * 
                     */
                    std::string GetFleetType() const;

                    /**
                     * 设置服务器舰队类型，目前只支持ON_DEMAND类型
                     * @param _fleetType 服务器舰队类型，目前只支持ON_DEMAND类型
                     * 
                     */
                    void SetFleetType(const std::string& _fleetType);

                    /**
                     * 判断参数 FleetType 是否已赋值
                     * @return FleetType 是否已赋值
                     * 
                     */
                    bool FleetTypeHasBeenSet() const;

                    /**
                     * 获取服务器舰队名称，最小长度1，最大长度50
                     * @return Name 服务器舰队名称，最小长度1，最大长度50
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务器舰队名称，最小长度1，最大长度50
                     * @param _name 服务器舰队名称，最小长度1，最大长度50
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取保护策略：不保护NoProtection、完全保护FullProtection、时限保护TimeLimitProtection
                     * @return NewGameServerSessionProtectionPolicy 保护策略：不保护NoProtection、完全保护FullProtection、时限保护TimeLimitProtection
                     * 
                     */
                    std::string GetNewGameServerSessionProtectionPolicy() const;

                    /**
                     * 设置保护策略：不保护NoProtection、完全保护FullProtection、时限保护TimeLimitProtection
                     * @param _newGameServerSessionProtectionPolicy 保护策略：不保护NoProtection、完全保护FullProtection、时限保护TimeLimitProtection
                     * 
                     */
                    void SetNewGameServerSessionProtectionPolicy(const std::string& _newGameServerSessionProtectionPolicy);

                    /**
                     * 判断参数 NewGameServerSessionProtectionPolicy 是否已赋值
                     * @return NewGameServerSessionProtectionPolicy 是否已赋值
                     * 
                     */
                    bool NewGameServerSessionProtectionPolicyHasBeenSet() const;

                    /**
                     * 获取资源创建限制策略
                     * @return ResourceCreationLimitPolicy 资源创建限制策略
                     * 
                     */
                    ResourceCreationLimitPolicy GetResourceCreationLimitPolicy() const;

                    /**
                     * 设置资源创建限制策略
                     * @param _resourceCreationLimitPolicy 资源创建限制策略
                     * 
                     */
                    void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& _resourceCreationLimitPolicy);

                    /**
                     * 判断参数 ResourceCreationLimitPolicy 是否已赋值
                     * @return ResourceCreationLimitPolicy 是否已赋值
                     * 
                     */
                    bool ResourceCreationLimitPolicyHasBeenSet() const;

                    /**
                     * 获取进程配置
                     * @return RuntimeConfiguration 进程配置
                     * 
                     */
                    RuntimeConfiguration GetRuntimeConfiguration() const;

                    /**
                     * 设置进程配置
                     * @param _runtimeConfiguration 进程配置
                     * 
                     */
                    void SetRuntimeConfiguration(const RuntimeConfiguration& _runtimeConfiguration);

                    /**
                     * 判断参数 RuntimeConfiguration 是否已赋值
                     * @return RuntimeConfiguration 是否已赋值
                     * 
                     */
                    bool RuntimeConfigurationHasBeenSet() const;

                    /**
                     * 获取时限保护超时时间，默认60分钟，最小值5，最大值1440；当NewGameSessionProtectionPolicy为TimeLimitProtection时参数有效
                     * @return GameServerSessionProtectionTimeLimit 时限保护超时时间，默认60分钟，最小值5，最大值1440；当NewGameSessionProtectionPolicy为TimeLimitProtection时参数有效
                     * 
                     */
                    int64_t GetGameServerSessionProtectionTimeLimit() const;

                    /**
                     * 设置时限保护超时时间，默认60分钟，最小值5，最大值1440；当NewGameSessionProtectionPolicy为TimeLimitProtection时参数有效
                     * @param _gameServerSessionProtectionTimeLimit 时限保护超时时间，默认60分钟，最小值5，最大值1440；当NewGameSessionProtectionPolicy为TimeLimitProtection时参数有效
                     * 
                     */
                    void SetGameServerSessionProtectionTimeLimit(const int64_t& _gameServerSessionProtectionTimeLimit);

                    /**
                     * 判断参数 GameServerSessionProtectionTimeLimit 是否已赋值
                     * @return GameServerSessionProtectionTimeLimit 是否已赋值
                     * 
                     */
                    bool GameServerSessionProtectionTimeLimitHasBeenSet() const;

                    /**
                     * 获取是否选择扩缩容：SCALING_SELECTED 或者 SCALING_UNSELECTED；默认是 SCALING_UNSELECTED
                     * @return SelectedScalingType 是否选择扩缩容：SCALING_SELECTED 或者 SCALING_UNSELECTED；默认是 SCALING_UNSELECTED
                     * 
                     */
                    std::string GetSelectedScalingType() const;

                    /**
                     * 设置是否选择扩缩容：SCALING_SELECTED 或者 SCALING_UNSELECTED；默认是 SCALING_UNSELECTED
                     * @param _selectedScalingType 是否选择扩缩容：SCALING_SELECTED 或者 SCALING_UNSELECTED；默认是 SCALING_UNSELECTED
                     * 
                     */
                    void SetSelectedScalingType(const std::string& _selectedScalingType);

                    /**
                     * 判断参数 SelectedScalingType 是否已赋值
                     * @return SelectedScalingType 是否已赋值
                     * 
                     */
                    bool SelectedScalingTypeHasBeenSet() const;

                    /**
                     * 获取是否选择云联网：CCN_SELECTED_BEFORE_CREATE（创建前关联）， CCN_SELECTED_AFTER_CREATE（创建后关联）或者 CCN_UNSELECTED（不关联）；默认是 CCN_UNSELECTED
                     * @return SelectedCcnType 是否选择云联网：CCN_SELECTED_BEFORE_CREATE（创建前关联）， CCN_SELECTED_AFTER_CREATE（创建后关联）或者 CCN_UNSELECTED（不关联）；默认是 CCN_UNSELECTED
                     * 
                     */
                    std::string GetSelectedCcnType() const;

                    /**
                     * 设置是否选择云联网：CCN_SELECTED_BEFORE_CREATE（创建前关联）， CCN_SELECTED_AFTER_CREATE（创建后关联）或者 CCN_UNSELECTED（不关联）；默认是 CCN_UNSELECTED
                     * @param _selectedCcnType 是否选择云联网：CCN_SELECTED_BEFORE_CREATE（创建前关联）， CCN_SELECTED_AFTER_CREATE（创建后关联）或者 CCN_UNSELECTED（不关联）；默认是 CCN_UNSELECTED
                     * 
                     */
                    void SetSelectedCcnType(const std::string& _selectedCcnType);

                    /**
                     * 判断参数 SelectedCcnType 是否已赋值
                     * @return SelectedCcnType 是否已赋值
                     * 
                     */
                    bool SelectedCcnTypeHasBeenSet() const;

                    /**
                     * 获取标签列表，最大长度50组
                     * @return Tags 标签列表，最大长度50组
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表，最大长度50组
                     * @param _tags 标签列表，最大长度50组
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取系统盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-500GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，50-500GB；容量以1为单位
                     * @return SystemDiskInfo 系统盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-500GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，50-500GB；容量以1为单位
                     * 
                     */
                    DiskInfo GetSystemDiskInfo() const;

                    /**
                     * 设置系统盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-500GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，50-500GB；容量以1为单位
                     * @param _systemDiskInfo 系统盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-500GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，50-500GB；容量以1为单位
                     * 
                     */
                    void SetSystemDiskInfo(const DiskInfo& _systemDiskInfo);

                    /**
                     * 判断参数 SystemDiskInfo 是否已赋值
                     * @return SystemDiskInfo 是否已赋值
                     * 
                     */
                    bool SystemDiskInfoHasBeenSet() const;

                    /**
                     * 获取数据盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-32000GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，10-32000GB；容量以10为单位
                     * @return DataDiskInfo 数据盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-32000GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，10-32000GB；容量以10为单位
                     * 
                     */
                    std::vector<DiskInfo> GetDataDiskInfo() const;

                    /**
                     * 设置数据盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-32000GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，10-32000GB；容量以10为单位
                     * @param _dataDiskInfo 数据盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-32000GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，10-32000GB；容量以10为单位
                     * 
                     */
                    void SetDataDiskInfo(const std::vector<DiskInfo>& _dataDiskInfo);

                    /**
                     * 判断参数 DataDiskInfo 是否已赋值
                     * @return DataDiskInfo 是否已赋值
                     * 
                     */
                    bool DataDiskInfoHasBeenSet() const;

                    /**
                     * 获取是否选择复制定时器策略：TIMER_SELECTED 或者 TIMER_UNSELECTED；默认是 TIMER_UNSELECTED
                     * @return SelectedTimerType 是否选择复制定时器策略：TIMER_SELECTED 或者 TIMER_UNSELECTED；默认是 TIMER_UNSELECTED
                     * 
                     */
                    std::string GetSelectedTimerType() const;

                    /**
                     * 设置是否选择复制定时器策略：TIMER_SELECTED 或者 TIMER_UNSELECTED；默认是 TIMER_UNSELECTED
                     * @param _selectedTimerType 是否选择复制定时器策略：TIMER_SELECTED 或者 TIMER_UNSELECTED；默认是 TIMER_UNSELECTED
                     * 
                     */
                    void SetSelectedTimerType(const std::string& _selectedTimerType);

                    /**
                     * 判断参数 SelectedTimerType 是否已赋值
                     * @return SelectedTimerType 是否已赋值
                     * 
                     */
                    bool SelectedTimerTypeHasBeenSet() const;

                    /**
                     * 获取云联网信息，包含对应的账号信息及所属id
                     * @return CcnInfos 云联网信息，包含对应的账号信息及所属id
                     * 
                     */
                    std::vector<CcnInfo> GetCcnInfos() const;

                    /**
                     * 设置云联网信息，包含对应的账号信息及所属id
                     * @param _ccnInfos 云联网信息，包含对应的账号信息及所属id
                     * 
                     */
                    void SetCcnInfos(const std::vector<CcnInfo>& _ccnInfos);

                    /**
                     * 判断参数 CcnInfos 是否已赋值
                     * @return CcnInfos 是否已赋值
                     * 
                     */
                    bool CcnInfosHasBeenSet() const;

                    /**
                     * 获取fleet公网出带宽最大值，默认100Mbps，范围1-200Mbps
                     * @return InternetMaxBandwidthOut fleet公网出带宽最大值，默认100Mbps，范围1-200Mbps
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置fleet公网出带宽最大值，默认100Mbps，范围1-200Mbps
                     * @param _internetMaxBandwidthOut fleet公网出带宽最大值，默认100Mbps，范围1-200Mbps
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                private:

                    /**
                     * 服务器舰队 Id
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 复制数量，最小值1，最大值为剩余配额，可以根据[获取用户配额](https://cloud.tencent.com/document/product/1165/48732)接口获取。
                     */
                    int64_t m_copyNumber;
                    bool m_copyNumberHasBeenSet;

                    /**
                     * 生成包 Id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 描述，最小长度0，最大长度100
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 网络配置
                     */
                    std::vector<InboundPermission> m_inboundPermissions;
                    bool m_inboundPermissionsHasBeenSet;

                    /**
                     * 服务器类型，参数根据[获取服务器实例类型列表](https://cloud.tencent.com/document/product/1165/48732)接口获取。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 服务器舰队类型，目前只支持ON_DEMAND类型
                     */
                    std::string m_fleetType;
                    bool m_fleetTypeHasBeenSet;

                    /**
                     * 服务器舰队名称，最小长度1，最大长度50
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 保护策略：不保护NoProtection、完全保护FullProtection、时限保护TimeLimitProtection
                     */
                    std::string m_newGameServerSessionProtectionPolicy;
                    bool m_newGameServerSessionProtectionPolicyHasBeenSet;

                    /**
                     * 资源创建限制策略
                     */
                    ResourceCreationLimitPolicy m_resourceCreationLimitPolicy;
                    bool m_resourceCreationLimitPolicyHasBeenSet;

                    /**
                     * 进程配置
                     */
                    RuntimeConfiguration m_runtimeConfiguration;
                    bool m_runtimeConfigurationHasBeenSet;

                    /**
                     * 时限保护超时时间，默认60分钟，最小值5，最大值1440；当NewGameSessionProtectionPolicy为TimeLimitProtection时参数有效
                     */
                    int64_t m_gameServerSessionProtectionTimeLimit;
                    bool m_gameServerSessionProtectionTimeLimitHasBeenSet;

                    /**
                     * 是否选择扩缩容：SCALING_SELECTED 或者 SCALING_UNSELECTED；默认是 SCALING_UNSELECTED
                     */
                    std::string m_selectedScalingType;
                    bool m_selectedScalingTypeHasBeenSet;

                    /**
                     * 是否选择云联网：CCN_SELECTED_BEFORE_CREATE（创建前关联）， CCN_SELECTED_AFTER_CREATE（创建后关联）或者 CCN_UNSELECTED（不关联）；默认是 CCN_UNSELECTED
                     */
                    std::string m_selectedCcnType;
                    bool m_selectedCcnTypeHasBeenSet;

                    /**
                     * 标签列表，最大长度50组
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 系统盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-500GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，50-500GB；容量以1为单位
                     */
                    DiskInfo m_systemDiskInfo;
                    bool m_systemDiskInfoHasBeenSet;

                    /**
                     * 数据盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-32000GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，10-32000GB；容量以10为单位
                     */
                    std::vector<DiskInfo> m_dataDiskInfo;
                    bool m_dataDiskInfoHasBeenSet;

                    /**
                     * 是否选择复制定时器策略：TIMER_SELECTED 或者 TIMER_UNSELECTED；默认是 TIMER_UNSELECTED
                     */
                    std::string m_selectedTimerType;
                    bool m_selectedTimerTypeHasBeenSet;

                    /**
                     * 云联网信息，包含对应的账号信息及所属id
                     */
                    std::vector<CcnInfo> m_ccnInfos;
                    bool m_ccnInfosHasBeenSet;

                    /**
                     * fleet公网出带宽最大值，默认100Mbps，范围1-200Mbps
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_COPYFLEETREQUEST_H_
