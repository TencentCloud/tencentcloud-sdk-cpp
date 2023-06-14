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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_ASSET_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_ASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/Tag.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 资产类型
                */
                class Asset : public AbstractModel
                {
                public:
                    Asset();
                    ~Asset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
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
                     * 获取名字
                     * @return Name 名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字
                     * @param _name 名字
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
                     * 获取区域
                     * @return AssetRegionName 区域
                     * 
                     */
                    std::string GetAssetRegionName() const;

                    /**
                     * 设置区域
                     * @param _assetRegionName 区域
                     * 
                     */
                    void SetAssetRegionName(const std::string& _assetRegionName);

                    /**
                     * 判断参数 AssetRegionName 是否已赋值
                     * @return AssetRegionName 是否已赋值
                     * 
                     */
                    bool AssetRegionNameHasBeenSet() const;

                    /**
                     * 获取所属网络
                     * @return AssetVpcid 所属网络
                     * 
                     */
                    std::string GetAssetVpcid() const;

                    /**
                     * 设置所属网络
                     * @param _assetVpcid 所属网络
                     * 
                     */
                    void SetAssetVpcid(const std::string& _assetVpcid);

                    /**
                     * 判断参数 AssetVpcid 是否已赋值
                     * @return AssetVpcid 是否已赋值
                     * 
                     */
                    bool AssetVpcidHasBeenSet() const;

                    /**
                     * 获取主机类型
                     * @return InstanceType 主机类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置主机类型
                     * @param _instanceType 主机类型
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
                     * 获取主机状态
                     * @return InstanceState 主机状态
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置主机状态
                     * @param _instanceState 主机状态
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取引擎版本
                     * @return EngineVersion 引擎版本
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置引擎版本
                     * @param _engineVersion 引擎版本
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取数据库标识
                     * @return Id 数据库标识
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置数据库标识
                     * @param _id 数据库标识
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tag 标签
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置标签
                     * @param _tag 标签
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取配置风险统计数
                     * @return AssetCspmRiskNum 配置风险统计数
                     * 
                     */
                    int64_t GetAssetCspmRiskNum() const;

                    /**
                     * 设置配置风险统计数
                     * @param _assetCspmRiskNum 配置风险统计数
                     * 
                     */
                    void SetAssetCspmRiskNum(const int64_t& _assetCspmRiskNum);

                    /**
                     * 判断参数 AssetCspmRiskNum 是否已赋值
                     * @return AssetCspmRiskNum 是否已赋值
                     * 
                     */
                    bool AssetCspmRiskNumHasBeenSet() const;

                    /**
                     * 获取主机IP
                     * @return PublicIpAddresses 主机IP
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置主机IP
                     * @param _publicIpAddresses 主机IP
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取资产唯一标识
                     * @return AssetUniqid 资产唯一标识
                     * 
                     */
                    std::string GetAssetUniqid() const;

                    /**
                     * 设置资产唯一标识
                     * @param _assetUniqid 资产唯一标识
                     * 
                     */
                    void SetAssetUniqid(const std::string& _assetUniqid);

                    /**
                     * 判断参数 AssetUniqid 是否已赋值
                     * @return AssetUniqid 是否已赋值
                     * 
                     */
                    bool AssetUniqidHasBeenSet() const;

                    /**
                     * 获取付费类型
                     * @return ChargeType 付费类型
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置付费类型
                     * @param _chargeType 付费类型
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取安全事件统计数
                     * @return AssetEventNum 安全事件统计数
                     * 
                     */
                    int64_t GetAssetEventNum() const;

                    /**
                     * 设置安全事件统计数
                     * @param _assetEventNum 安全事件统计数
                     * 
                     */
                    void SetAssetEventNum(const int64_t& _assetEventNum);

                    /**
                     * 判断参数 AssetEventNum 是否已赋值
                     * @return AssetEventNum 是否已赋值
                     * 
                     */
                    bool AssetEventNumHasBeenSet() const;

                    /**
                     * 获取漏洞统计数
                     * @return AssetVulNum 漏洞统计数
                     * 
                     */
                    int64_t GetAssetVulNum() const;

                    /**
                     * 设置漏洞统计数
                     * @param _assetVulNum 漏洞统计数
                     * 
                     */
                    void SetAssetVulNum(const int64_t& _assetVulNum);

                    /**
                     * 判断参数 AssetVulNum 是否已赋值
                     * @return AssetVulNum 是否已赋值
                     * 
                     */
                    bool AssetVulNumHasBeenSet() const;

                    /**
                     * 获取主机IP内网
                     * @return PrivateIpAddresses 主机IP内网
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置主机IP内网
                     * @param _privateIpAddresses 主机IP内网
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取所属分组
                     * @return GroupName 所属分组
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置所属分组
                     * @param _groupName 所属分组
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaAssetDiscoverTime 发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaAssetDiscoverTime() const;

                    /**
                     * 设置发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaAssetDiscoverTime 发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaAssetDiscoverTime(const std::string& _ssaAssetDiscoverTime);

                    /**
                     * 判断参数 SsaAssetDiscoverTime 是否已赋值
                     * @return SsaAssetDiscoverTime 是否已赋值
                     * 
                     */
                    bool SsaAssetDiscoverTimeHasBeenSet() const;

                    /**
                     * 获取下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaAssetDeleteTime 下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaAssetDeleteTime() const;

                    /**
                     * 设置下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaAssetDeleteTime 下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaAssetDeleteTime(const std::string& _ssaAssetDeleteTime);

                    /**
                     * 判断参数 SsaAssetDeleteTime 是否已赋值
                     * @return SsaAssetDeleteTime 是否已赋值
                     * 
                     */
                    bool SsaAssetDeleteTimeHasBeenSet() const;

                    /**
                     * 获取是否是新增资产
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNew 是否是新增资产
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsNew() const;

                    /**
                     * 设置是否是新增资产
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isNew 是否是新增资产
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsNew(const bool& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

                    /**
                     * 获取所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetSubnetId 所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetSubnetId() const;

                    /**
                     * 设置所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetSubnetId 所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetSubnetId(const std::string& _assetSubnetId);

                    /**
                     * 判断参数 AssetSubnetId 是否已赋值
                     * @return AssetSubnetId 是否已赋值
                     * 
                     */
                    bool AssetSubnetIdHasBeenSet() const;

                    /**
                     * 获取子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetSubnetName 子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetSubnetName() const;

                    /**
                     * 设置子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetSubnetName 子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetSubnetName(const std::string& _assetSubnetName);

                    /**
                     * 判断参数 AssetSubnetName 是否已赋值
                     * @return AssetSubnetName 是否已赋值
                     * 
                     */
                    bool AssetSubnetNameHasBeenSet() const;

                    /**
                     * 获取vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetVpcName vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetVpcName() const;

                    /**
                     * 设置vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetVpcName vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetVpcName(const std::string& _assetVpcName);

                    /**
                     * 判断参数 AssetVpcName 是否已赋值
                     * @return AssetVpcName 是否已赋值
                     * 
                     */
                    bool AssetVpcNameHasBeenSet() const;

                    /**
                     * 获取集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameSpace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameSpace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameSpace(const std::string& _nameSpace);

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     * 
                     */
                    bool NameSpaceHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancerType 负载均衡实例的网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置负载均衡实例的网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadBalancerType 负载均衡实例的网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的vip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancerVips 负载均衡实例的vip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置负载均衡实例的vip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadBalancerVips 负载均衡实例的vip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadBalancerVips(const std::vector<std::string>& _loadBalancerVips);

                    /**
                     * 判断参数 LoadBalancerVips 是否已赋值
                     * @return LoadBalancerVips 是否已赋值
                     * 
                     */
                    bool LoadBalancerVipsHasBeenSet() const;

                    /**
                     * 获取ipv6信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetIpv6 ipv6信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAssetIpv6() const;

                    /**
                     * 设置ipv6信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetIpv6 ipv6信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetIpv6(const std::vector<std::string>& _assetIpv6);

                    /**
                     * 判断参数 AssetIpv6 是否已赋值
                     * @return AssetIpv6 是否已赋值
                     * 
                     */
                    bool AssetIpv6HasBeenSet() const;

                    /**
                     * 获取ssh端口暴露风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SSHRisk ssh端口暴露风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSSHRisk() const;

                    /**
                     * 设置ssh端口暴露风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sSHRisk ssh端口暴露风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSSHRisk(const std::string& _sSHRisk);

                    /**
                     * 判断参数 SSHRisk 是否已赋值
                     * @return SSHRisk 是否已赋值
                     * 
                     */
                    bool SSHRiskHasBeenSet() const;

                    /**
                     * 获取rdp端口暴露风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RDPRisk rdp端口暴露风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRDPRisk() const;

                    /**
                     * 设置rdp端口暴露风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rDPRisk rdp端口暴露风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRDPRisk(const std::string& _rDPRisk);

                    /**
                     * 判断参数 RDPRisk 是否已赋值
                     * @return RDPRisk 是否已赋值
                     * 
                     */
                    bool RDPRiskHasBeenSet() const;

                    /**
                     * 获取资产失陷事件风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventRisk 资产失陷事件风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventRisk() const;

                    /**
                     * 设置资产失陷事件风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventRisk 资产失陷事件风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventRisk(const std::string& _eventRisk);

                    /**
                     * 判断参数 EventRisk 是否已赋值
                     * @return EventRisk 是否已赋值
                     * 
                     */
                    bool EventRiskHasBeenSet() const;

                private:

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_assetRegionName;
                    bool m_assetRegionNameHasBeenSet;

                    /**
                     * 所属网络
                     */
                    std::string m_assetVpcid;
                    bool m_assetVpcidHasBeenSet;

                    /**
                     * 主机类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 主机状态
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 引擎版本
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 数据库标识
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 配置风险统计数
                     */
                    int64_t m_assetCspmRiskNum;
                    bool m_assetCspmRiskNumHasBeenSet;

                    /**
                     * 主机IP
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * 资产唯一标识
                     */
                    std::string m_assetUniqid;
                    bool m_assetUniqidHasBeenSet;

                    /**
                     * 付费类型
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 安全事件统计数
                     */
                    int64_t m_assetEventNum;
                    bool m_assetEventNumHasBeenSet;

                    /**
                     * 漏洞统计数
                     */
                    int64_t m_assetVulNum;
                    bool m_assetVulNumHasBeenSet;

                    /**
                     * 主机IP内网
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 所属分组
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaAssetDiscoverTime;
                    bool m_ssaAssetDiscoverTimeHasBeenSet;

                    /**
                     * 下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaAssetDeleteTime;
                    bool m_ssaAssetDeleteTimeHasBeenSet;

                    /**
                     * 是否是新增资产
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * 所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetSubnetId;
                    bool m_assetSubnetIdHasBeenSet;

                    /**
                     * 子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetSubnetName;
                    bool m_assetSubnetNameHasBeenSet;

                    /**
                     * vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetVpcName;
                    bool m_assetVpcNameHasBeenSet;

                    /**
                     * 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                    /**
                     * 负载均衡实例的网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 负载均衡实例的vip列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * ipv6信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assetIpv6;
                    bool m_assetIpv6HasBeenSet;

                    /**
                     * ssh端口暴露风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sSHRisk;
                    bool m_sSHRiskHasBeenSet;

                    /**
                     * rdp端口暴露风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rDPRisk;
                    bool m_rDPRiskHasBeenSet;

                    /**
                     * 资产失陷事件风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventRisk;
                    bool m_eventRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_ASSET_H_
