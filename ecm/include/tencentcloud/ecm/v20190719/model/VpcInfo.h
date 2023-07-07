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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_VPCINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_VPCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>
#include <tencentcloud/ecm/v20190719/model/AssistantCidr.h>
#include <tencentcloud/ecm/v20190719/model/ISPIPv6CidrBlock.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 私有网络(VPC) 对象。
                */
                class VpcInfo : public AbstractModel
                {
                public:
                    VpcInfo();
                    ~VpcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC名称。
                     * @return VpcName VPC名称。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC名称。
                     * @param _vpcName VPC名称。
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
                     * 获取VPC实例ID，例如：vpc-azd4dt1c。
                     * @return VpcId VPC实例ID，例如：vpc-azd4dt1c。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID，例如：vpc-azd4dt1c。
                     * @param _vpcId VPC实例ID，例如：vpc-azd4dt1c。
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
                     * 获取VPC的IPv4 CIDR。
                     * @return CidrBlock VPC的IPv4 CIDR。
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置VPC的IPv4 CIDR。
                     * @param _cidrBlock VPC的IPv4 CIDR。
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
                     * 获取是否默认VPC。
                     * @return IsDefault 是否默认VPC。
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否默认VPC。
                     * @param _isDefault 是否默认VPC。
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
                     * 获取是否开启组播。
                     * @return EnableMulticast 是否开启组播。
                     * 
                     */
                    bool GetEnableMulticast() const;

                    /**
                     * 设置是否开启组播。
                     * @param _enableMulticast 是否开启组播。
                     * 
                     */
                    void SetEnableMulticast(const bool& _enableMulticast);

                    /**
                     * 判断参数 EnableMulticast 是否已赋值
                     * @return EnableMulticast 是否已赋值
                     * 
                     */
                    bool EnableMulticastHasBeenSet() const;

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
                     * 获取DNS列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DnsServerSet DNS列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDnsServerSet() const;

                    /**
                     * 设置DNS列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dnsServerSet DNS列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDnsServerSet(const std::vector<std::string>& _dnsServerSet);

                    /**
                     * 判断参数 DnsServerSet 是否已赋值
                     * @return DnsServerSet 是否已赋值
                     * 
                     */
                    bool DnsServerSetHasBeenSet() const;

                    /**
                     * 获取DHCP域名选项值。
                     * @return DomainName DHCP域名选项值。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置DHCP域名选项值。
                     * @param _domainName DHCP域名选项值。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取DHCP选项集ID。
                     * @return DhcpOptionsId DHCP选项集ID。
                     * 
                     */
                    std::string GetDhcpOptionsId() const;

                    /**
                     * 设置DHCP选项集ID。
                     * @param _dhcpOptionsId DHCP选项集ID。
                     * 
                     */
                    void SetDhcpOptionsId(const std::string& _dhcpOptionsId);

                    /**
                     * 判断参数 DhcpOptionsId 是否已赋值
                     * @return DhcpOptionsId 是否已赋值
                     * 
                     */
                    bool DhcpOptionsIdHasBeenSet() const;

                    /**
                     * 获取是否开启DHCP。
                     * @return EnableDhcp 是否开启DHCP。
                     * 
                     */
                    bool GetEnableDhcp() const;

                    /**
                     * 设置是否开启DHCP。
                     * @param _enableDhcp 是否开启DHCP。
                     * 
                     */
                    void SetEnableDhcp(const bool& _enableDhcp);

                    /**
                     * 判断参数 EnableDhcp 是否已赋值
                     * @return EnableDhcp 是否已赋值
                     * 
                     */
                    bool EnableDhcpHasBeenSet() const;

                    /**
                     * 获取VPC的IPv6 CIDR。
                     * @return Ipv6CidrBlock VPC的IPv6 CIDR。
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置VPC的IPv6 CIDR。
                     * @param _ipv6CidrBlock VPC的IPv6 CIDR。
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
                     * 获取标签键值对
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSet 标签键值对
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagSet 标签键值对
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
                     * 获取辅助CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssistantCidrSet 辅助CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AssistantCidr> GetAssistantCidrSet() const;

                    /**
                     * 设置辅助CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assistantCidrSet 辅助CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssistantCidrSet(const std::vector<AssistantCidr>& _assistantCidrSet);

                    /**
                     * 判断参数 AssistantCidrSet 是否已赋值
                     * @return AssistantCidrSet 是否已赋值
                     * 
                     */
                    bool AssistantCidrSetHasBeenSet() const;

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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取地域中文名
                     * @return RegionName 地域中文名
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域中文名
                     * @param _regionName 地域中文名
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取包含子网数量
                     * @return SubnetCount 包含子网数量
                     * 
                     */
                    uint64_t GetSubnetCount() const;

                    /**
                     * 设置包含子网数量
                     * @param _subnetCount 包含子网数量
                     * 
                     */
                    void SetSubnetCount(const uint64_t& _subnetCount);

                    /**
                     * 判断参数 SubnetCount 是否已赋值
                     * @return SubnetCount 是否已赋值
                     * 
                     */
                    bool SubnetCountHasBeenSet() const;

                    /**
                     * 获取包含实例数量
                     * @return InstanceCount 包含实例数量
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置包含实例数量
                     * @param _instanceCount 包含实例数量
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
                     * 获取ipv6运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv6ISP ipv6运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpv6ISP() const;

                    /**
                     * 设置ipv6运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipv6ISP ipv6运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpv6ISP(const std::string& _ipv6ISP);

                    /**
                     * 判断参数 Ipv6ISP 是否已赋值
                     * @return Ipv6ISP 是否已赋值
                     * 
                     */
                    bool Ipv6ISPHasBeenSet() const;

                    /**
                     * 获取多运营商IPv6 Cidr Block。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv6CidrBlockSet 多运营商IPv6 Cidr Block。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ISPIPv6CidrBlock> GetIpv6CidrBlockSet() const;

                    /**
                     * 设置多运营商IPv6 Cidr Block。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipv6CidrBlockSet 多运营商IPv6 Cidr Block。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpv6CidrBlockSet(const std::vector<ISPIPv6CidrBlock>& _ipv6CidrBlockSet);

                    /**
                     * 判断参数 Ipv6CidrBlockSet 是否已赋值
                     * @return Ipv6CidrBlockSet 是否已赋值
                     * 
                     */
                    bool Ipv6CidrBlockSetHasBeenSet() const;

                private:

                    /**
                     * VPC名称。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * VPC实例ID，例如：vpc-azd4dt1c。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC的IPv4 CIDR。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 是否默认VPC。
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 是否开启组播。
                     */
                    bool m_enableMulticast;
                    bool m_enableMulticastHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * DNS列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dnsServerSet;
                    bool m_dnsServerSetHasBeenSet;

                    /**
                     * DHCP域名选项值。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * DHCP选项集ID。
                     */
                    std::string m_dhcpOptionsId;
                    bool m_dhcpOptionsIdHasBeenSet;

                    /**
                     * 是否开启DHCP。
                     */
                    bool m_enableDhcp;
                    bool m_enableDhcpHasBeenSet;

                    /**
                     * VPC的IPv6 CIDR。
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * 标签键值对
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 辅助CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssistantCidr> m_assistantCidrSet;
                    bool m_assistantCidrSetHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 地域中文名
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 包含子网数量
                     */
                    uint64_t m_subnetCount;
                    bool m_subnetCountHasBeenSet;

                    /**
                     * 包含实例数量
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * ipv6运营商
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipv6ISP;
                    bool m_ipv6ISPHasBeenSet;

                    /**
                     * 多运营商IPv6 Cidr Block。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ISPIPv6CidrBlock> m_ipv6CidrBlockSet;
                    bool m_ipv6CidrBlockSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_VPCINFO_H_
