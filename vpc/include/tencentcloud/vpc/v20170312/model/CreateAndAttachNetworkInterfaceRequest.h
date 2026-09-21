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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEANDATTACHNETWORKINTERFACEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEANDATTACHNETWORKINTERFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/PrivateIpAddressSpecification.h>
#include <tencentcloud/vpc/v20170312/model/Ipv6Address.h>
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
                * CreateAndAttachNetworkInterface请求参数结构体
                */
                class CreateAndAttachNetworkInterfaceRequest : public AbstractModel
                {
                public:
                    CreateAndAttachNetworkInterfaceRequest();
                    ~CreateAndAttachNetworkInterfaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口获取。</p>
                     * @return VpcId <p>VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口获取。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口获取。</p>
                     * @param _vpcId <p>VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口获取。</p>
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
                     * 获取<p>弹性网卡名称，最大长度不能超过60个字符。</p>
                     * @return NetworkInterfaceName <p>弹性网卡名称，最大长度不能超过60个字符。</p>
                     * 
                     */
                    std::string GetNetworkInterfaceName() const;

                    /**
                     * 设置<p>弹性网卡名称，最大长度不能超过60个字符。</p>
                     * @param _networkInterfaceName <p>弹性网卡名称，最大长度不能超过60个字符。</p>
                     * 
                     */
                    void SetNetworkInterfaceName(const std::string& _networkInterfaceName);

                    /**
                     * 判断参数 NetworkInterfaceName 是否已赋值
                     * @return NetworkInterfaceName 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceNameHasBeenSet() const;

                    /**
                     * 获取<p>弹性网卡所在的子网实例ID，例如：subnet-0ap8nwca。可通过<a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a>接口获取。</p>
                     * @return SubnetId <p>弹性网卡所在的子网实例ID，例如：subnet-0ap8nwca。可通过<a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a>接口获取。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>弹性网卡所在的子网实例ID，例如：subnet-0ap8nwca。可通过<a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a>接口获取。</p>
                     * @param _subnetId <p>弹性网卡所在的子网实例ID，例如：subnet-0ap8nwca。可通过<a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a>接口获取。</p>
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
                     * 获取<p>云服务器实例ID。可通过<a href="https://cloud.tencent.com/document/product/213/15728">DescribeInstances</a>接口获取。</p>
                     * @return InstanceId <p>云服务器实例ID。可通过<a href="https://cloud.tencent.com/document/product/213/15728">DescribeInstances</a>接口获取。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>云服务器实例ID。可通过<a href="https://cloud.tencent.com/document/product/213/15728">DescribeInstances</a>接口获取。</p>
                     * @param _instanceId <p>云服务器实例ID。可通过<a href="https://cloud.tencent.com/document/product/213/15728">DescribeInstances</a>接口获取。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>指定的内网IP信息，单次最多指定10个。</p>
                     * @return PrivateIpAddresses <p>指定的内网IP信息，单次最多指定10个。</p>
                     * 
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddresses() const;

                    /**
                     * 设置<p>指定的内网IP信息，单次最多指定10个。</p>
                     * @param _privateIpAddresses <p>指定的内网IP信息，单次最多指定10个。</p>
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<PrivateIpAddressSpecification>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取<p>新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。</p>
                     * @return SecondaryPrivateIpAddressCount <p>新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。</p>
                     * 
                     */
                    uint64_t GetSecondaryPrivateIpAddressCount() const;

                    /**
                     * 设置<p>新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。</p>
                     * @param _secondaryPrivateIpAddressCount <p>新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。</p>
                     * 
                     */
                    void SetSecondaryPrivateIpAddressCount(const uint64_t& _secondaryPrivateIpAddressCount);

                    /**
                     * 判断参数 SecondaryPrivateIpAddressCount 是否已赋值
                     * @return SecondaryPrivateIpAddressCount 是否已赋值
                     * 
                     */
                    bool SecondaryPrivateIpAddressCountHasBeenSet() const;

                    /**
                     * 获取<p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。</p>
                     * @return Ipv6Addresses <p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。</p>
                     * 
                     */
                    std::vector<Ipv6Address> GetIpv6Addresses() const;

                    /**
                     * 设置<p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。</p>
                     * @param _ipv6Addresses <p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。</p>
                     * 
                     */
                    void SetIpv6Addresses(const std::vector<Ipv6Address>& _ipv6Addresses);

                    /**
                     * 判断参数 Ipv6Addresses 是否已赋值
                     * @return Ipv6Addresses 是否已赋值
                     * 
                     */
                    bool Ipv6AddressesHasBeenSet() const;

                    /**
                     * 获取<p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。</p><p>取值范围：[1, 10]</p><p>单位：个</p>
                     * @return Ipv6AddressCount <p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。</p><p>取值范围：[1, 10]</p><p>单位：个</p>
                     * 
                     */
                    uint64_t GetIpv6AddressCount() const;

                    /**
                     * 设置<p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。</p><p>取值范围：[1, 10]</p><p>单位：个</p>
                     * @param _ipv6AddressCount <p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。</p><p>取值范围：[1, 10]</p><p>单位：个</p>
                     * 
                     */
                    void SetIpv6AddressCount(const uint64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     * 
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                    /**
                     * 获取<p>IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p>
                     * @return QosLevel <p>IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p>
                     * 
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置<p>IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p>
                     * @param _qosLevel <p>IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p>
                     * 
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     * 
                     */
                    bool QosLevelHasBeenSet() const;

                    /**
                     * 获取<p>指定绑定的安全组，例如：[&#39;sg-1dd51d&#39;]。可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>接口获取。</p>
                     * @return SecurityGroupIds <p>指定绑定的安全组，例如：[&#39;sg-1dd51d&#39;]。可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>接口获取。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>指定绑定的安全组，例如：[&#39;sg-1dd51d&#39;]。可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>接口获取。</p>
                     * @param _securityGroupIds <p>指定绑定的安全组，例如：[&#39;sg-1dd51d&#39;]。可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>接口获取。</p>
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
                     * 获取<p>弹性网卡描述，可任意命名，但不得超过60个字符。</p>
                     * @return NetworkInterfaceDescription <p>弹性网卡描述，可任意命名，但不得超过60个字符。</p>
                     * 
                     */
                    std::string GetNetworkInterfaceDescription() const;

                    /**
                     * 设置<p>弹性网卡描述，可任意命名，但不得超过60个字符。</p>
                     * @param _networkInterfaceDescription <p>弹性网卡描述，可任意命名，但不得超过60个字符。</p>
                     * 
                     */
                    void SetNetworkInterfaceDescription(const std::string& _networkInterfaceDescription);

                    /**
                     * 判断参数 NetworkInterfaceDescription 是否已赋值
                     * @return NetworkInterfaceDescription 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     * @return Tags <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     * @param _tags <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
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
                     * 获取<p>绑定类型：0 标准型 1 扩展型。</p>
                     * @return AttachType <p>绑定类型：0 标准型 1 扩展型。</p>
                     * 
                     */
                    uint64_t GetAttachType() const;

                    /**
                     * 设置<p>绑定类型：0 标准型 1 扩展型。</p>
                     * @param _attachType <p>绑定类型：0 标准型 1 扩展型。</p>
                     * 
                     */
                    void SetAttachType(const uint64_t& _attachType);

                    /**
                     * 判断参数 AttachType 是否已赋值
                     * @return AttachType 是否已赋值
                     * 
                     */
                    bool AttachTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否创建RDMA弹性网卡，true:创建rdma弹性网卡，false:普通弹性网卡。不填默认为false。</p>
                     * @return IsRdma <p>是否创建RDMA弹性网卡，true:创建rdma弹性网卡，false:普通弹性网卡。不填默认为false。</p>
                     * 
                     */
                    bool GetIsRdma() const;

                    /**
                     * 设置<p>是否创建RDMA弹性网卡，true:创建rdma弹性网卡，false:普通弹性网卡。不填默认为false。</p>
                     * @param _isRdma <p>是否创建RDMA弹性网卡，true:创建rdma弹性网卡，false:普通弹性网卡。不填默认为false。</p>
                     * 
                     */
                    void SetIsRdma(const bool& _isRdma);

                    /**
                     * 判断参数 IsRdma 是否已赋值
                     * @return IsRdma 是否已赋值
                     * 
                     */
                    bool IsRdmaHasBeenSet() const;

                    /**
                     * 获取<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * @return ClientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * @param _clientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
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
                     * 获取<p>删除保护。</p>
                     * @return TerminationProtection <p>删除保护。</p>
                     * 
                     */
                    bool GetTerminationProtection() const;

                    /**
                     * 设置<p>删除保护。</p>
                     * @param _terminationProtection <p>删除保护。</p>
                     * 
                     */
                    void SetTerminationProtection(const bool& _terminationProtection);

                    /**
                     * 判断参数 TerminationProtection 是否已赋值
                     * @return TerminationProtection 是否已赋值
                     * 
                     */
                    bool TerminationProtectionHasBeenSet() const;

                    /**
                     * 获取<p>流量保护。</p>
                     * @return TrafficProtection <p>流量保护。</p>
                     * 
                     */
                    bool GetTrafficProtection() const;

                    /**
                     * 设置<p>流量保护。</p>
                     * @param _trafficProtection <p>流量保护。</p>
                     * 
                     */
                    void SetTrafficProtection(const bool& _trafficProtection);

                    /**
                     * 判断参数 TrafficProtection 是否已赋值
                     * @return TrafficProtection 是否已赋值
                     * 
                     */
                    bool TrafficProtectionHasBeenSet() const;

                private:

                    /**
                     * <p>VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口获取。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>弹性网卡名称，最大长度不能超过60个字符。</p>
                     */
                    std::string m_networkInterfaceName;
                    bool m_networkInterfaceNameHasBeenSet;

                    /**
                     * <p>弹性网卡所在的子网实例ID，例如：subnet-0ap8nwca。可通过<a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a>接口获取。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>云服务器实例ID。可通过<a href="https://cloud.tencent.com/document/product/213/15728">DescribeInstances</a>接口获取。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>指定的内网IP信息，单次最多指定10个。</p>
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * <p>新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。</p>
                     */
                    uint64_t m_secondaryPrivateIpAddressCount;
                    bool m_secondaryPrivateIpAddressCountHasBeenSet;

                    /**
                     * <p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。</p>
                     */
                    std::vector<Ipv6Address> m_ipv6Addresses;
                    bool m_ipv6AddressesHasBeenSet;

                    /**
                     * <p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。</p><p>取值范围：[1, 10]</p><p>单位：个</p>
                     */
                    uint64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                    /**
                     * <p>IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p>
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                    /**
                     * <p>指定绑定的安全组，例如：[&#39;sg-1dd51d&#39;]。可通过<a href="https://cloud.tencent.com/document/product/215/15808">DescribeSecurityGroups</a>接口获取。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>弹性网卡描述，可任意命名，但不得超过60个字符。</p>
                     */
                    std::string m_networkInterfaceDescription;
                    bool m_networkInterfaceDescriptionHasBeenSet;

                    /**
                     * <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>绑定类型：0 标准型 1 扩展型。</p>
                     */
                    uint64_t m_attachType;
                    bool m_attachTypeHasBeenSet;

                    /**
                     * <p>是否创建RDMA弹性网卡，true:创建rdma弹性网卡，false:普通弹性网卡。不填默认为false。</p>
                     */
                    bool m_isRdma;
                    bool m_isRdmaHasBeenSet;

                    /**
                     * <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>删除保护。</p>
                     */
                    bool m_terminationProtection;
                    bool m_terminationProtectionHasBeenSet;

                    /**
                     * <p>流量保护。</p>
                     */
                    bool m_trafficProtection;
                    bool m_trafficProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEANDATTACHNETWORKINTERFACEREQUEST_H_
