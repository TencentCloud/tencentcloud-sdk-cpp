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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SUBNET_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SUBNET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 子网对象
                */
                class Subnet : public AbstractModel
                {
                public:
                    Subnet();
                    ~Subnet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param _vpcId VPC实例ID。
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
                     * 获取子网实例ID，例如：subnet-bthucmmy。
                     * @return SubnetId 子网实例ID，例如：subnet-bthucmmy。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例ID，例如：subnet-bthucmmy。
                     * @param _subnetId 子网实例ID，例如：subnet-bthucmmy。
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
                     * 获取子网名称。
                     * @return SubnetName 子网名称。
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称。
                     * @param _subnetName 子网名称。
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取子网的 IPv4 CIDR。
                     * @return CidrBlock 子网的 IPv4 CIDR。
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置子网的 IPv4 CIDR。
                     * @param _cidrBlock 子网的 IPv4 CIDR。
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取是否默认子网。
                     * @return IsDefault 是否默认子网。
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否默认子网。
                     * @param _isDefault 是否默认子网。
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取是否开启广播。
                     * @return EnableBroadcast 是否开启广播。
                     * 
                     */
                    bool GetEnableBroadcast() const;

                    /**
                     * 设置是否开启广播。
                     * @param _enableBroadcast 是否开启广播。
                     * 
                     */
                    void SetEnableBroadcast(const bool& _enableBroadcast);

                    /**
                     * 判断参数 EnableBroadcast 是否已赋值
                     * @return EnableBroadcast 是否已赋值
                     * 
                     */
                    bool EnableBroadcastHasBeenSet() const;

                    /**
                     * 获取路由表实例ID，例如：rtb-l2h8d7c2。
                     * @return RouteTableId 路由表实例ID，例如：rtb-l2h8d7c2。
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置路由表实例ID，例如：rtb-l2h8d7c2。
                     * @param _routeTableId 路由表实例ID，例如：rtb-l2h8d7c2。
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取可用IP数。
                     * @return AvailableIpAddressCount 可用IP数。
                     * 
                     */
                    uint64_t GetAvailableIpAddressCount() const;

                    /**
                     * 设置可用IP数。
                     * @param _availableIpAddressCount 可用IP数。
                     * 
                     */
                    void SetAvailableIpAddressCount(const uint64_t& _availableIpAddressCount);

                    /**
                     * 判断参数 AvailableIpAddressCount 是否已赋值
                     * @return AvailableIpAddressCount 是否已赋值
                     * 
                     */
                    bool AvailableIpAddressCountHasBeenSet() const;

                    /**
                     * 获取子网的 IPv6 CIDR。
                     * @return Ipv6CidrBlock 子网的 IPv6 CIDR。
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置子网的 IPv6 CIDR。
                     * @param _ipv6CidrBlock 子网的 IPv6 CIDR。
                     * 
                     */
                    void SetIpv6CidrBlock(const std::string& _ipv6CidrBlock);

                    /**
                     * 判断参数 Ipv6CidrBlock 是否已赋值
                     * @return Ipv6CidrBlock 是否已赋值
                     * 
                     */
                    bool Ipv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取关联ACLID
                     * @return NetworkAclId 关联ACLID
                     * 
                     */
                    std::string GetNetworkAclId() const;

                    /**
                     * 设置关联ACLID
                     * @param _networkAclId 关联ACLID
                     * 
                     */
                    void SetNetworkAclId(const std::string& _networkAclId);

                    /**
                     * 判断参数 NetworkAclId 是否已赋值
                     * @return NetworkAclId 是否已赋值
                     * 
                     */
                    bool NetworkAclIdHasBeenSet() const;

                    /**
                     * 获取是否为 SNAT 地址池子网。
                     * @return IsRemoteVpcSnat 是否为 SNAT 地址池子网。
                     * 
                     */
                    bool GetIsRemoteVpcSnat() const;

                    /**
                     * 设置是否为 SNAT 地址池子网。
                     * @param _isRemoteVpcSnat 是否为 SNAT 地址池子网。
                     * 
                     */
                    void SetIsRemoteVpcSnat(const bool& _isRemoteVpcSnat);

                    /**
                     * 判断参数 IsRemoteVpcSnat 是否已赋值
                     * @return IsRemoteVpcSnat 是否已赋值
                     * 
                     */
                    bool IsRemoteVpcSnatHasBeenSet() const;

                    /**
                     * 获取标签键值对。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSet 标签键值对。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagSet 标签键值对。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取所在区域
                     * @return Zone 所在区域
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置所在区域
                     * @param _zone 所在区域
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取可用区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneName 可用区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneName 可用区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCount 实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceCount 实例数量
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取VPC的 IPv4 CIDR。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcCidrBlock VPC的 IPv4 CIDR。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置VPC的 IPv4 CIDR。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcCidrBlock VPC的 IPv4 CIDR。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取VPC的 IPv6 CIDR。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcIpv6CidrBlock VPC的 IPv6 CIDR。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcIpv6CidrBlock() const;

                    /**
                     * 设置VPC的 IPv6 CIDR。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcIpv6CidrBlock VPC的 IPv6 CIDR。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcIpv6CidrBlock(const std::string& _vpcIpv6CidrBlock);

                    /**
                     * 判断参数 VpcIpv6CidrBlock 是否已赋值
                     * @return VpcIpv6CidrBlock 是否已赋值
                     * 
                     */
                    bool VpcIpv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取运营商类型。'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ISPType 运营商类型。'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetISPType() const;

                    /**
                     * 设置运营商类型。'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iSPType 运营商类型。'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetISPType(const std::string& _iSPType);

                    /**
                     * 判断参数 ISPType 是否已赋值
                     * @return ISPType 是否已赋值
                     * 
                     */
                    bool ISPTypeHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网实例ID，例如：subnet-bthucmmy。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网名称。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 子网的 IPv4 CIDR。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 是否默认子网。
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 是否开启广播。
                     */
                    bool m_enableBroadcast;
                    bool m_enableBroadcastHasBeenSet;

                    /**
                     * 路由表实例ID，例如：rtb-l2h8d7c2。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 可用IP数。
                     */
                    uint64_t m_availableIpAddressCount;
                    bool m_availableIpAddressCountHasBeenSet;

                    /**
                     * 子网的 IPv6 CIDR。
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * 关联ACLID
                     */
                    std::string m_networkAclId;
                    bool m_networkAclIdHasBeenSet;

                    /**
                     * 是否为 SNAT 地址池子网。
                     */
                    bool m_isRemoteVpcSnat;
                    bool m_isRemoteVpcSnatHasBeenSet;

                    /**
                     * 标签键值对。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 所在区域
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可用区名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * VPC的 IPv4 CIDR。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * VPC的 IPv6 CIDR。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcIpv6CidrBlock;
                    bool m_vpcIpv6CidrBlockHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 运营商类型。'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iSPType;
                    bool m_iSPTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SUBNET_H_
