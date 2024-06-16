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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_LOADBALANCER_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_LOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/Tag.h>
#include <tencentcloud/tcm/v20210413/model/ExtensiveClusters.h>
#include <tencentcloud/tcm/v20210413/model/CrossRegionConfig.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 负载均衡配置
                */
                class LoadBalancer : public AbstractModel
                {
                public:
                    LoadBalancer();
                    ~LoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
只读。
                     * @return LoadBalancerType 负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
只读。
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
只读。
                     * @param _loadBalancerType 负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
只读。
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
                     * 获取负载均衡实例所在的子网（仅对内网VPC型LB有意义），只读。
                     * @return SubnetId 负载均衡实例所在的子网（仅对内网VPC型LB有意义），只读。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置负载均衡实例所在的子网（仅对内网VPC型LB有意义），只读。
                     * @param _subnetId 负载均衡实例所在的子网（仅对内网VPC型LB有意义），只读。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取TRAFFIC_POSTPAID_BY_HOUR 按流量按小时后计费 ; BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;只读。
                     * @return InternetChargeType TRAFFIC_POSTPAID_BY_HOUR 按流量按小时后计费 ; BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;只读。
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置TRAFFIC_POSTPAID_BY_HOUR 按流量按小时后计费 ; BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;只读。
                     * @param _internetChargeType TRAFFIC_POSTPAID_BY_HOUR 按流量按小时后计费 ; BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;只读。
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取最大出带宽，单位Mbps，仅对公网属性的LB生效，默认值 10
                     * @return InternetMaxBandwidthOut 最大出带宽，单位Mbps，仅对公网属性的LB生效，默认值 10
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置最大出带宽，单位Mbps，仅对公网属性的LB生效，默认值 10
                     * @param _internetMaxBandwidthOut 最大出带宽，单位Mbps，仅对公网属性的LB生效，默认值 10
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取可用区 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneID 可用区 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneID() const;

                    /**
                     * 设置可用区 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneID 可用区 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneID(const std::string& _zoneID);

                    /**
                     * 判断参数 ZoneID 是否已赋值
                     * @return ZoneID 是否已赋值
                     * 
                     */
                    bool ZoneIDHasBeenSet() const;

                    /**
                     * 获取运营商类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipIsp 运营商类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置运营商类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vipIsp 运营商类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVipIsp(const std::string& _vipIsp);

                    /**
                     * 判断参数 VipIsp 是否已赋值
                     * @return VipIsp 是否已赋值
                     * 
                     */
                    bool VipIspHasBeenSet() const;

                    /**
                     * 获取TGW Group 名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TgwGroupName TGW Group 名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTgwGroupName() const;

                    /**
                     * 设置TGW Group 名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tgwGroupName TGW Group 名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTgwGroupName(const std::string& _tgwGroupName);

                    /**
                     * 判断参数 TgwGroupName 是否已赋值
                     * @return TgwGroupName 是否已赋值
                     * 
                     */
                    bool TgwGroupNameHasBeenSet() const;

                    /**
                     * 获取IP 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressIPVersion IP 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置IP 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addressIPVersion IP 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddressIPVersion(const std::string& _addressIPVersion);

                    /**
                     * 判断参数 AddressIPVersion 是否已赋值
                     * @return AddressIPVersion 是否已赋值
                     * 
                     */
                    bool AddressIPVersionHasBeenSet() const;

                    /**
                     * 获取标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取内网独占集群配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtensiveClusters 内网独占集群配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExtensiveClusters GetExtensiveClusters() const;

                    /**
                     * 设置内网独占集群配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extensiveClusters 内网独占集群配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtensiveClusters(const ExtensiveClusters& _extensiveClusters);

                    /**
                     * 判断参数 ExtensiveClusters 是否已赋值
                     * @return ExtensiveClusters 是否已赋值
                     * 
                     */
                    bool ExtensiveClustersHasBeenSet() const;

                    /**
                     * 获取负载均衡跨地域配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrossRegionConfig 负载均衡跨地域配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CrossRegionConfig GetCrossRegionConfig() const;

                    /**
                     * 设置负载均衡跨地域配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crossRegionConfig 负载均衡跨地域配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCrossRegionConfig(const CrossRegionConfig& _crossRegionConfig);

                    /**
                     * 判断参数 CrossRegionConfig 是否已赋值
                     * @return CrossRegionConfig 是否已赋值
                     * 
                     */
                    bool CrossRegionConfigHasBeenSet() const;

                    /**
                     * 获取设置跨可用区容灾时的主可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterZoneID 设置跨可用区容灾时的主可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMasterZoneID() const;

                    /**
                     * 设置设置跨可用区容灾时的主可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _masterZoneID 设置跨可用区容灾时的主可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMasterZoneID(const std::string& _masterZoneID);

                    /**
                     * 判断参数 MasterZoneID 是否已赋值
                     * @return MasterZoneID 是否已赋值
                     * 
                     */
                    bool MasterZoneIDHasBeenSet() const;

                    /**
                     * 获取设置跨可用区容灾时的备可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlaveZoneID 设置跨可用区容灾时的备可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSlaveZoneID() const;

                    /**
                     * 设置设置跨可用区容灾时的备可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slaveZoneID 设置跨可用区容灾时的备可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlaveZoneID(const std::string& _slaveZoneID);

                    /**
                     * 判断参数 SlaveZoneID 是否已赋值
                     * @return SlaveZoneID 是否已赋值
                     * 
                     */
                    bool SlaveZoneIDHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
只读。
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 负载均衡实例所在的子网（仅对内网VPC型LB有意义），只读。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * TRAFFIC_POSTPAID_BY_HOUR 按流量按小时后计费 ; BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;只读。
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * 最大出带宽，单位Mbps，仅对公网属性的LB生效，默认值 10
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 可用区 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneID;
                    bool m_zoneIDHasBeenSet;

                    /**
                     * 运营商类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                    /**
                     * TGW Group 名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tgwGroupName;
                    bool m_tgwGroupNameHasBeenSet;

                    /**
                     * IP 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 内网独占集群配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtensiveClusters m_extensiveClusters;
                    bool m_extensiveClustersHasBeenSet;

                    /**
                     * 负载均衡跨地域配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CrossRegionConfig m_crossRegionConfig;
                    bool m_crossRegionConfigHasBeenSet;

                    /**
                     * 设置跨可用区容灾时的主可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_masterZoneID;
                    bool m_masterZoneIDHasBeenSet;

                    /**
                     * 设置跨可用区容灾时的备可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_slaveZoneID;
                    bool m_slaveZoneIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_LOADBALANCER_H_
