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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_VIRTUALPRIVATECLOUD_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_VIRTUALPRIVATECLOUD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 私有网络相关信息配置。
                */
                class VirtualPrivateCloud : public AbstractModel
                {
                public:
                    VirtualPrivateCloud();
                    ~VirtualPrivateCloud() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私有网络ID，形如vpc-xxx。
                     * @return VpcId 私有网络ID，形如vpc-xxx。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，形如vpc-xxx。
                     * @param VpcId 私有网络ID，形如vpc-xxx。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络子网ID，形如subnet-xxx。
                     * @return SubnetId 私有网络子网ID，形如subnet-xxx。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络子网ID，形如subnet-xxx。
                     * @param SubnetId 私有网络子网ID，形如subnet-xxx。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取是否用作公网网关。公网网关只有在实例拥有公网IP以及处于私有网络下时才能正常使用。取值范围：
TRUE：表示用作公网网关
FALSE：表示不用作公网网关

默认取值：FALSE。
                     * @return AsVpcGateway 是否用作公网网关。公网网关只有在实例拥有公网IP以及处于私有网络下时才能正常使用。取值范围：
TRUE：表示用作公网网关
FALSE：表示不用作公网网关

默认取值：FALSE。
                     */
                    bool GetAsVpcGateway() const;

                    /**
                     * 设置是否用作公网网关。公网网关只有在实例拥有公网IP以及处于私有网络下时才能正常使用。取值范围：
TRUE：表示用作公网网关
FALSE：表示不用作公网网关

默认取值：FALSE。
                     * @param AsVpcGateway 是否用作公网网关。公网网关只有在实例拥有公网IP以及处于私有网络下时才能正常使用。取值范围：
TRUE：表示用作公网网关
FALSE：表示不用作公网网关

默认取值：FALSE。
                     */
                    void SetAsVpcGateway(const bool& _asVpcGateway);

                    /**
                     * 判断参数 AsVpcGateway 是否已赋值
                     * @return AsVpcGateway 是否已赋值
                     */
                    bool AsVpcGatewayHasBeenSet() const;

                    /**
                     * 获取私有网络子网 IP 数组，在创建实例、修改实例vpc属性操作中可使用此参数。
                     * @return PrivateIpAddresses 私有网络子网 IP 数组，在创建实例、修改实例vpc属性操作中可使用此参数。
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置私有网络子网 IP 数组，在创建实例、修改实例vpc属性操作中可使用此参数。
                     * @param PrivateIpAddresses 私有网络子网 IP 数组，在创建实例、修改实例vpc属性操作中可使用此参数。
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取为弹性网卡指定随机生成的 IPv6 地址数量。
                     * @return Ipv6AddressCount 为弹性网卡指定随机生成的 IPv6 地址数量。
                     */
                    int64_t GetIpv6AddressCount() const;

                    /**
                     * 设置为弹性网卡指定随机生成的 IPv6 地址数量。
                     * @param Ipv6AddressCount 为弹性网卡指定随机生成的 IPv6 地址数量。
                     */
                    void SetIpv6AddressCount(const int64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                private:

                    /**
                     * 私有网络ID，形如vpc-xxx。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络子网ID，形如subnet-xxx。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 是否用作公网网关。公网网关只有在实例拥有公网IP以及处于私有网络下时才能正常使用。取值范围：
TRUE：表示用作公网网关
FALSE：表示不用作公网网关

默认取值：FALSE。
                     */
                    bool m_asVpcGateway;
                    bool m_asVpcGatewayHasBeenSet;

                    /**
                     * 私有网络子网 IP 数组，在创建实例、修改实例vpc属性操作中可使用此参数。
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 为弹性网卡指定随机生成的 IPv6 地址数量。
                     */
                    int64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_VIRTUALPRIVATECLOUD_H_
