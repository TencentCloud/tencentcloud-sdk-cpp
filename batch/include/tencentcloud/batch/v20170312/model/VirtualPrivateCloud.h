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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_VIRTUALPRIVATECLOUD_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_VIRTUALPRIVATECLOUD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述了VPC相关信息，包括子网，IP信息等
                */
                class VirtualPrivateCloud : public AbstractModel
                {
                public:
                    VirtualPrivateCloud();
                    ~VirtualPrivateCloud() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>私有网络ID，形如<code>vpc-xxx</code>。有效的VpcId可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a> ，从接口返回中的<code>VpcId</code>字段获取。若在创建子机时VpcId与SubnetId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     * @return VpcId <p>私有网络ID，形如<code>vpc-xxx</code>。有效的VpcId可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a> ，从接口返回中的<code>VpcId</code>字段获取。若在创建子机时VpcId与SubnetId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID，形如<code>vpc-xxx</code>。有效的VpcId可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a> ，从接口返回中的<code>VpcId</code>字段获取。若在创建子机时VpcId与SubnetId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     * @param _vpcId <p>私有网络ID，形如<code>vpc-xxx</code>。有效的VpcId可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a> ，从接口返回中的<code>VpcId</code>字段获取。若在创建子机时VpcId与SubnetId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
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
                     * 获取<p>私有网络子网ID，形如<code>subnet-xxx</code>。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">控制台</a>查询；也可以调用接口  <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的<code>SubnetId</code>字段获取。若在创建子机时SubnetId与VpcId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     * @return SubnetId <p>私有网络子网ID，形如<code>subnet-xxx</code>。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">控制台</a>查询；也可以调用接口  <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的<code>SubnetId</code>字段获取。若在创建子机时SubnetId与VpcId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>私有网络子网ID，形如<code>subnet-xxx</code>。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">控制台</a>查询；也可以调用接口  <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的<code>SubnetId</code>字段获取。若在创建子机时SubnetId与VpcId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     * @param _subnetId <p>私有网络子网ID，形如<code>subnet-xxx</code>。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">控制台</a>查询；也可以调用接口  <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的<code>SubnetId</code>字段获取。若在创建子机时SubnetId与VpcId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
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
                     * 获取<p>是否用作公网网关。公网网关只有在实例拥有公网IP以及处于私有网络下时才能正常使用。取值范围：<li>true：表示用作公网网关</li><li>false：表示不作为公网网关</li>默认取值：false。</p>
                     * @return AsVpcGateway <p>是否用作公网网关。公网网关只有在实例拥有公网IP以及处于私有网络下时才能正常使用。取值范围：<li>true：表示用作公网网关</li><li>false：表示不作为公网网关</li>默认取值：false。</p>
                     * 
                     */
                    bool GetAsVpcGateway() const;

                    /**
                     * 设置<p>是否用作公网网关。公网网关只有在实例拥有公网IP以及处于私有网络下时才能正常使用。取值范围：<li>true：表示用作公网网关</li><li>false：表示不作为公网网关</li>默认取值：false。</p>
                     * @param _asVpcGateway <p>是否用作公网网关。公网网关只有在实例拥有公网IP以及处于私有网络下时才能正常使用。取值范围：<li>true：表示用作公网网关</li><li>false：表示不作为公网网关</li>默认取值：false。</p>
                     * 
                     */
                    void SetAsVpcGateway(const bool& _asVpcGateway);

                    /**
                     * 判断参数 AsVpcGateway 是否已赋值
                     * @return AsVpcGateway 是否已赋值
                     * 
                     */
                    bool AsVpcGatewayHasBeenSet() const;

                    /**
                     * 获取<p>私有网络子网 IP 数组，在创建实例、修改实例vpc属性操作中可使用此参数。当前仅批量创建多台实例时支持传入相同子网的多个 IP。</p>
                     * @return PrivateIpAddresses <p>私有网络子网 IP 数组，在创建实例、修改实例vpc属性操作中可使用此参数。当前仅批量创建多台实例时支持传入相同子网的多个 IP。</p>
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置<p>私有网络子网 IP 数组，在创建实例、修改实例vpc属性操作中可使用此参数。当前仅批量创建多台实例时支持传入相同子网的多个 IP。</p>
                     * @param _privateIpAddresses <p>私有网络子网 IP 数组，在创建实例、修改实例vpc属性操作中可使用此参数。当前仅批量创建多台实例时支持传入相同子网的多个 IP。</p>
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
                     * 获取<p>为弹性网卡指定随机生成的 IPv6 地址数量。</p>
                     * @return Ipv6AddressCount <p>为弹性网卡指定随机生成的 IPv6 地址数量。</p>
                     * 
                     */
                    uint64_t GetIpv6AddressCount() const;

                    /**
                     * 设置<p>为弹性网卡指定随机生成的 IPv6 地址数量。</p>
                     * @param _ipv6AddressCount <p>为弹性网卡指定随机生成的 IPv6 地址数量。</p>
                     * 
                     */
                    void SetIpv6AddressCount(const uint64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     * 
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                private:

                    /**
                     * <p>私有网络ID，形如<code>vpc-xxx</code>。有效的VpcId可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a> ，从接口返回中的<code>VpcId</code>字段获取。若在创建子机时VpcId与SubnetId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>私有网络子网ID，形如<code>subnet-xxx</code>。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">控制台</a>查询；也可以调用接口  <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的<code>SubnetId</code>字段获取。若在创建子机时SubnetId与VpcId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>是否用作公网网关。公网网关只有在实例拥有公网IP以及处于私有网络下时才能正常使用。取值范围：<li>true：表示用作公网网关</li><li>false：表示不作为公网网关</li>默认取值：false。</p>
                     */
                    bool m_asVpcGateway;
                    bool m_asVpcGatewayHasBeenSet;

                    /**
                     * <p>私有网络子网 IP 数组，在创建实例、修改实例vpc属性操作中可使用此参数。当前仅批量创建多台实例时支持传入相同子网的多个 IP。</p>
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * <p>为弹性网卡指定随机生成的 IPv6 地址数量。</p>
                     */
                    uint64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_VIRTUALPRIVATECLOUD_H_
