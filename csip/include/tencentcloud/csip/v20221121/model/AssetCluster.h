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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCLUSTER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 集群列表

集群防护状态，左边枚举,右边为显示
集群防护状态 
0:未接入
1:未防护 
2:部分防护 
3:防护中 
4:接入异常 
5:接入中 
6:卸载中 
7:卸载异常
                */
                class AssetCluster : public AbstractModel
                {
                public:
                    AssetCluster();
                    ~AssetCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取租户id
                     * @return AppId 租户id
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置租户id
                     * @param _appId 租户id
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取租户uin
                     * @return Uin 租户uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置租户uin
                     * @param _uin 租户uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取租户昵称
                     * @return Nick 租户昵称
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置租户昵称
                     * @param _nick 租户昵称
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取集群id
                     * @return AssetId 集群id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置集群id
                     * @param _assetId 集群id
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
                     * 获取集群名称
                     * @return AssetName 集群名称
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置集群名称
                     * @param _assetName 集群名称
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取集群类型
                     * @return AssetType 集群类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置集群类型
                     * @param _assetType 集群类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取集群创建时间
                     * @return InstanceCreateTime 集群创建时间
                     * 
                     */
                    std::string GetInstanceCreateTime() const;

                    /**
                     * 设置集群创建时间
                     * @param _instanceCreateTime 集群创建时间
                     * 
                     */
                    void SetInstanceCreateTime(const std::string& _instanceCreateTime);

                    /**
                     * 判断参数 InstanceCreateTime 是否已赋值
                     * @return InstanceCreateTime 是否已赋值
                     * 
                     */
                    bool InstanceCreateTimeHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取集群防护状态，左边枚举,右边为显示
集群防护状态 
0:未接入
1:未防护 
2:部分防护 
3:防护中 
4:接入异常 
5:接入中 
6:卸载中 
7:卸载异常
                     * @return ProtectStatus 集群防护状态，左边枚举,右边为显示
集群防护状态 
0:未接入
1:未防护 
2:部分防护 
3:防护中 
4:接入异常 
5:接入中 
6:卸载中 
7:卸载异常
                     * 
                     */
                    int64_t GetProtectStatus() const;

                    /**
                     * 设置集群防护状态，左边枚举,右边为显示
集群防护状态 
0:未接入
1:未防护 
2:部分防护 
3:防护中 
4:接入异常 
5:接入中 
6:卸载中 
7:卸载异常
                     * @param _protectStatus 集群防护状态，左边枚举,右边为显示
集群防护状态 
0:未接入
1:未防护 
2:部分防护 
3:防护中 
4:接入异常 
5:接入中 
6:卸载中 
7:卸载异常
                     * 
                     */
                    void SetProtectStatus(const int64_t& _protectStatus);

                    /**
                     * 判断参数 ProtectStatus 是否已赋值
                     * @return ProtectStatus 是否已赋值
                     * 
                     */
                    bool ProtectStatusHasBeenSet() const;

                    /**
                     * 获取接入信息，不为空表示有接入异常信息
                     * @return ProtectInfo 接入信息，不为空表示有接入异常信息
                     * 
                     */
                    std::string GetProtectInfo() const;

                    /**
                     * 设置接入信息，不为空表示有接入异常信息
                     * @param _protectInfo 接入信息，不为空表示有接入异常信息
                     * 
                     */
                    void SetProtectInfo(const std::string& _protectInfo);

                    /**
                     * 判断参数 ProtectInfo 是否已赋值
                     * @return ProtectInfo 是否已赋值
                     * 
                     */
                    bool ProtectInfoHasBeenSet() const;

                    /**
                     * 获取私有网络id
                     * @return VpcId 私有网络id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络id
                     * @param _vpcId 私有网络id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络名称
                     * @return VpcName 私有网络名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置私有网络名称
                     * @param _vpcName 私有网络名称
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取kubernetes版本
                     * @return KubernetesVersion kubernetes版本
                     * 
                     */
                    std::string GetKubernetesVersion() const;

                    /**
                     * 设置kubernetes版本
                     * @param _kubernetesVersion kubernetes版本
                     * 
                     */
                    void SetKubernetesVersion(const std::string& _kubernetesVersion);

                    /**
                     * 判断参数 KubernetesVersion 是否已赋值
                     * @return KubernetesVersion 是否已赋值
                     * 
                     */
                    bool KubernetesVersionHasBeenSet() const;

                    /**
                     * 获取运行时组件
                     * @return Component 运行时组件
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置运行时组件
                     * @param _component 运行时组件
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取运行时组件版本
                     * @return ComponentVersion 运行时组件版本
                     * 
                     */
                    std::string GetComponentVersion() const;

                    /**
                     * 设置运行时组件版本
                     * @param _componentVersion 运行时组件版本
                     * 
                     */
                    void SetComponentVersion(const std::string& _componentVersion);

                    /**
                     * 判断参数 ComponentVersion 是否已赋值
                     * @return ComponentVersion 是否已赋值
                     * 
                     */
                    bool ComponentVersionHasBeenSet() const;

                    /**
                     * 获取组件状态
                     * @return ComponentStatus 组件状态
                     * 
                     */
                    std::string GetComponentStatus() const;

                    /**
                     * 设置组件状态
                     * @param _componentStatus 组件状态
                     * 
                     */
                    void SetComponentStatus(const std::string& _componentStatus);

                    /**
                     * 判断参数 ComponentStatus 是否已赋值
                     * @return ComponentStatus 是否已赋值
                     * 
                     */
                    bool ComponentStatusHasBeenSet() const;

                    /**
                     * 获取体检时间
                     * @return CheckTime 体检时间
                     * 
                     */
                    std::string GetCheckTime() const;

                    /**
                     * 设置体检时间
                     * @param _checkTime 体检时间
                     * 
                     */
                    void SetCheckTime(const std::string& _checkTime);

                    /**
                     * 判断参数 CheckTime 是否已赋值
                     * @return CheckTime 是否已赋值
                     * 
                     */
                    bool CheckTimeHasBeenSet() const;

                    /**
                     * 获取关联主机数
                     * @return MachineCount 关联主机数
                     * 
                     */
                    int64_t GetMachineCount() const;

                    /**
                     * 设置关联主机数
                     * @param _machineCount 关联主机数
                     * 
                     */
                    void SetMachineCount(const int64_t& _machineCount);

                    /**
                     * 判断参数 MachineCount 是否已赋值
                     * @return MachineCount 是否已赋值
                     * 
                     */
                    bool MachineCountHasBeenSet() const;

                    /**
                     * 获取关联pod数
                     * @return PodCount 关联pod数
                     * 
                     */
                    int64_t GetPodCount() const;

                    /**
                     * 设置关联pod数
                     * @param _podCount 关联pod数
                     * 
                     */
                    void SetPodCount(const int64_t& _podCount);

                    /**
                     * 判断参数 PodCount 是否已赋值
                     * @return PodCount 是否已赋值
                     * 
                     */
                    bool PodCountHasBeenSet() const;

                    /**
                     * 获取关联service数
                     * @return ServiceCount 关联service数
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置关联service数
                     * @param _serviceCount 关联service数
                     * 
                     */
                    void SetServiceCount(const int64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取漏洞风险
                     * @return VulRisk 漏洞风险
                     * 
                     */
                    int64_t GetVulRisk() const;

                    /**
                     * 设置漏洞风险
                     * @param _vulRisk 漏洞风险
                     * 
                     */
                    void SetVulRisk(const int64_t& _vulRisk);

                    /**
                     * 判断参数 VulRisk 是否已赋值
                     * @return VulRisk 是否已赋值
                     * 
                     */
                    bool VulRiskHasBeenSet() const;

                    /**
                     * 获取配置风险
                     * @return CFGRisk 配置风险
                     * 
                     */
                    int64_t GetCFGRisk() const;

                    /**
                     * 设置配置风险
                     * @param _cFGRisk 配置风险
                     * 
                     */
                    void SetCFGRisk(const int64_t& _cFGRisk);

                    /**
                     * 判断参数 CFGRisk 是否已赋值
                     * @return CFGRisk 是否已赋值
                     * 
                     */
                    bool CFGRiskHasBeenSet() const;

                    /**
                     * 获取体检数
                     * @return CheckCount 体检数
                     * 
                     */
                    int64_t GetCheckCount() const;

                    /**
                     * 设置体检数
                     * @param _checkCount 体检数
                     * 
                     */
                    void SetCheckCount(const int64_t& _checkCount);

                    /**
                     * 判断参数 CheckCount 是否已赋值
                     * @return CheckCount 是否已赋值
                     * 
                     */
                    bool CheckCountHasBeenSet() const;

                    /**
                     * 获取是否核心：1:核心，2:非核心
                     * @return IsCore 是否核心：1:核心，2:非核心
                     * 
                     */
                    int64_t GetIsCore() const;

                    /**
                     * 设置是否核心：1:核心，2:非核心
                     * @param _isCore 是否核心：1:核心，2:非核心
                     * 
                     */
                    void SetIsCore(const int64_t& _isCore);

                    /**
                     * 判断参数 IsCore 是否已赋值
                     * @return IsCore 是否已赋值
                     * 
                     */
                    bool IsCoreHasBeenSet() const;

                    /**
                     * 获取是否新资产 1新
                     * @return IsNewAsset 是否新资产 1新
                     * 
                     */
                    uint64_t GetIsNewAsset() const;

                    /**
                     * 设置是否新资产 1新
                     * @param _isNewAsset 是否新资产 1新
                     * 
                     */
                    void SetIsNewAsset(const uint64_t& _isNewAsset);

                    /**
                     * 判断参数 IsNewAsset 是否已赋值
                     * @return IsNewAsset 是否已赋值
                     * 
                     */
                    bool IsNewAssetHasBeenSet() const;

                    /**
                     * 获取云资产类型：0：腾讯云，1：aws，2：azure
                     * @return CloudType 云资产类型：0：腾讯云，1：aws，2：azure
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置云资产类型：0：腾讯云，1：aws，2：azure
                     * @param _cloudType 云资产类型：0：腾讯云，1：aws，2：azure
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                private:

                    /**
                     * 租户id
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 租户uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 租户昵称
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 集群类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 集群创建时间
                     */
                    std::string m_instanceCreateTime;
                    bool m_instanceCreateTimeHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集群防护状态，左边枚举,右边为显示
集群防护状态 
0:未接入
1:未防护 
2:部分防护 
3:防护中 
4:接入异常 
5:接入中 
6:卸载中 
7:卸载异常
                     */
                    int64_t m_protectStatus;
                    bool m_protectStatusHasBeenSet;

                    /**
                     * 接入信息，不为空表示有接入异常信息
                     */
                    std::string m_protectInfo;
                    bool m_protectInfoHasBeenSet;

                    /**
                     * 私有网络id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * kubernetes版本
                     */
                    std::string m_kubernetesVersion;
                    bool m_kubernetesVersionHasBeenSet;

                    /**
                     * 运行时组件
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 运行时组件版本
                     */
                    std::string m_componentVersion;
                    bool m_componentVersionHasBeenSet;

                    /**
                     * 组件状态
                     */
                    std::string m_componentStatus;
                    bool m_componentStatusHasBeenSet;

                    /**
                     * 体检时间
                     */
                    std::string m_checkTime;
                    bool m_checkTimeHasBeenSet;

                    /**
                     * 关联主机数
                     */
                    int64_t m_machineCount;
                    bool m_machineCountHasBeenSet;

                    /**
                     * 关联pod数
                     */
                    int64_t m_podCount;
                    bool m_podCountHasBeenSet;

                    /**
                     * 关联service数
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * 漏洞风险
                     */
                    int64_t m_vulRisk;
                    bool m_vulRiskHasBeenSet;

                    /**
                     * 配置风险
                     */
                    int64_t m_cFGRisk;
                    bool m_cFGRiskHasBeenSet;

                    /**
                     * 体检数
                     */
                    int64_t m_checkCount;
                    bool m_checkCountHasBeenSet;

                    /**
                     * 是否核心：1:核心，2:非核心
                     */
                    int64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * 是否新资产 1新
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                    /**
                     * 云资产类型：0：腾讯云，1：aws，2：azure
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCLUSTER_H_
