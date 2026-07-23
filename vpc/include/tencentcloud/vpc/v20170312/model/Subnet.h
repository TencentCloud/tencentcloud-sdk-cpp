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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SUBNET_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SUBNET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
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
                     * 获取<p><code>VPC</code>实例<code>ID</code>。</p>
                     * @return VpcId <p><code>VPC</code>实例<code>ID</code>。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p><code>VPC</code>实例<code>ID</code>。</p>
                     * @param _vpcId <p><code>VPC</code>实例<code>ID</code>。</p>
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
                     * 获取<p>子网实例<code>ID</code>，例如：subnet-bthucmmy。</p>
                     * @return SubnetId <p>子网实例<code>ID</code>，例如：subnet-bthucmmy。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网实例<code>ID</code>，例如：subnet-bthucmmy。</p>
                     * @param _subnetId <p>子网实例<code>ID</code>，例如：subnet-bthucmmy。</p>
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
                     * 获取<p>子网名称。</p>
                     * @return SubnetName <p>子网名称。</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>子网名称。</p>
                     * @param _subnetName <p>子网名称。</p>
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
                     * 获取<p>子网的 <code>IPv4</code> <code>CIDR</code>。</p>
                     * @return CidrBlock <p>子网的 <code>IPv4</code> <code>CIDR</code>。</p>
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置<p>子网的 <code>IPv4</code> <code>CIDR</code>。</p>
                     * @param _cidrBlock <p>子网的 <code>IPv4</code> <code>CIDR</code>。</p>
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
                     * 获取<p>是否默认子网。</p>
                     * @return IsDefault <p>是否默认子网。</p>
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置<p>是否默认子网。</p>
                     * @param _isDefault <p>是否默认子网。</p>
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
                     * 获取<p>是否开启广播。</p>
                     * @return EnableBroadcast <p>是否开启广播。</p>
                     * 
                     */
                    bool GetEnableBroadcast() const;

                    /**
                     * 设置<p>是否开启广播。</p>
                     * @param _enableBroadcast <p>是否开启广播。</p>
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
                     * 获取<p>可用区。</p>
                     * @return Zone <p>可用区。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区。</p>
                     * @param _zone <p>可用区。</p>
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
                     * 获取<p>路由表实例ID，例如：rtb-l2h8d7c2。</p>
                     * @return RouteTableId <p>路由表实例ID，例如：rtb-l2h8d7c2。</p>
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置<p>路由表实例ID，例如：rtb-l2h8d7c2。</p>
                     * @param _routeTableId <p>路由表实例ID，例如：rtb-l2h8d7c2。</p>
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
                     * 获取<p>创建时间。</p>
                     * @return CreatedTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createdTime <p>创建时间。</p>
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
                     * 获取<p>可用<code>IPv4</code>数。</p>
                     * @return AvailableIpAddressCount <p>可用<code>IPv4</code>数。</p>
                     * 
                     */
                    uint64_t GetAvailableIpAddressCount() const;

                    /**
                     * 设置<p>可用<code>IPv4</code>数。</p>
                     * @param _availableIpAddressCount <p>可用<code>IPv4</code>数。</p>
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
                     * 获取<p>子网的 <code>IPv6</code> <code>CIDR</code>。</p>
                     * @return Ipv6CidrBlock <p>子网的 <code>IPv6</code> <code>CIDR</code>。</p>
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置<p>子网的 <code>IPv6</code> <code>CIDR</code>。</p>
                     * @param _ipv6CidrBlock <p>子网的 <code>IPv6</code> <code>CIDR</code>。</p>
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
                     * 获取<p>关联<code>ACL</code>ID</p>
                     * @return NetworkAclId <p>关联<code>ACL</code>ID</p>
                     * 
                     */
                    std::string GetNetworkAclId() const;

                    /**
                     * 设置<p>关联<code>ACL</code>ID</p>
                     * @param _networkAclId <p>关联<code>ACL</code>ID</p>
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
                     * 获取<p>是否为 <code>SNAT</code> 地址池子网。</p>
                     * @return IsRemoteVpcSnat <p>是否为 <code>SNAT</code> 地址池子网。</p>
                     * 
                     */
                    bool GetIsRemoteVpcSnat() const;

                    /**
                     * 设置<p>是否为 <code>SNAT</code> 地址池子网。</p>
                     * @param _isRemoteVpcSnat <p>是否为 <code>SNAT</code> 地址池子网。</p>
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
                     * 获取<p>子网<code>IPv4</code>总数。</p>
                     * @return TotalIpAddressCount <p>子网<code>IPv4</code>总数。</p>
                     * 
                     */
                    uint64_t GetTotalIpAddressCount() const;

                    /**
                     * 设置<p>子网<code>IPv4</code>总数。</p>
                     * @param _totalIpAddressCount <p>子网<code>IPv4</code>总数。</p>
                     * 
                     */
                    void SetTotalIpAddressCount(const uint64_t& _totalIpAddressCount);

                    /**
                     * 判断参数 TotalIpAddressCount 是否已赋值
                     * @return TotalIpAddressCount 是否已赋值
                     * 
                     */
                    bool TotalIpAddressCountHasBeenSet() const;

                    /**
                     * 获取<p>标签键值对。</p>
                     * @return TagSet <p>标签键值对。</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>标签键值对。</p>
                     * @param _tagSet <p>标签键值对。</p>
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
                     * 获取<p>CDC实例ID。</p>
                     * @return CdcId <p>CDC实例ID。</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>CDC实例ID。</p>
                     * @param _cdcId <p>CDC实例ID。</p>
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取<p>是否是CDC所属子网。0:否 1:是</p>
                     * @return IsCdcSubnet <p>是否是CDC所属子网。0:否 1:是</p>
                     * 
                     */
                    int64_t GetIsCdcSubnet() const;

                    /**
                     * 设置<p>是否是CDC所属子网。0:否 1:是</p>
                     * @param _isCdcSubnet <p>是否是CDC所属子网。0:否 1:是</p>
                     * 
                     */
                    void SetIsCdcSubnet(const int64_t& _isCdcSubnet);

                    /**
                     * 判断参数 IsCdcSubnet 是否已赋值
                     * @return IsCdcSubnet 是否已赋值
                     * 
                     */
                    bool IsCdcSubnetHasBeenSet() const;

                private:

                    /**
                     * <p><code>VPC</code>实例<code>ID</code>。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网实例<code>ID</code>，例如：subnet-bthucmmy。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>子网名称。</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>子网的 <code>IPv4</code> <code>CIDR</code>。</p>
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p>是否默认子网。</p>
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>是否开启广播。</p>
                     */
                    bool m_enableBroadcast;
                    bool m_enableBroadcastHasBeenSet;

                    /**
                     * <p>可用区。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>路由表实例ID，例如：rtb-l2h8d7c2。</p>
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>可用<code>IPv4</code>数。</p>
                     */
                    uint64_t m_availableIpAddressCount;
                    bool m_availableIpAddressCountHasBeenSet;

                    /**
                     * <p>子网的 <code>IPv6</code> <code>CIDR</code>。</p>
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * <p>关联<code>ACL</code>ID</p>
                     */
                    std::string m_networkAclId;
                    bool m_networkAclIdHasBeenSet;

                    /**
                     * <p>是否为 <code>SNAT</code> 地址池子网。</p>
                     */
                    bool m_isRemoteVpcSnat;
                    bool m_isRemoteVpcSnatHasBeenSet;

                    /**
                     * <p>子网<code>IPv4</code>总数。</p>
                     */
                    uint64_t m_totalIpAddressCount;
                    bool m_totalIpAddressCountHasBeenSet;

                    /**
                     * <p>标签键值对。</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * <p>CDC实例ID。</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * <p>是否是CDC所属子网。0:否 1:是</p>
                     */
                    int64_t m_isCdcSubnet;
                    bool m_isCdcSubnetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SUBNET_H_
