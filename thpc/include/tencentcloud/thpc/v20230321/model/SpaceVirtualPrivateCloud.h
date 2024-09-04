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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_SPACEVIRTUALPRIVATECLOUD_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_SPACEVIRTUALPRIVATECLOUD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 描述了工作空间VPC相关信息，包括子网，IP信息等
                */
                class SpaceVirtualPrivateCloud : public AbstractModel
                {
                public:
                    SpaceVirtualPrivateCloud();
                    ~SpaceVirtualPrivateCloud() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取私有网络子网ID
                     * @return SubnetId 私有网络子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络子网ID
                     * @param _subnetId 私有网络子网ID
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
                     * 获取是否用作公网网关
                     * @return AsVpcGateway 是否用作公网网关
                     * 
                     */
                    bool GetAsVpcGateway() const;

                    /**
                     * 设置是否用作公网网关
                     * @param _asVpcGateway 是否用作公网网关
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
                     * 获取私有网络子网 IP 数组
                     * @return PrivateIpAddresses 私有网络子网 IP 数组
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置私有网络子网 IP 数组
                     * @param _privateIpAddresses 私有网络子网 IP 数组
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
                     * 获取为弹性网卡指定随机生成
                     * @return Ipv6AddressCount 为弹性网卡指定随机生成
                     * 
                     */
                    uint64_t GetIpv6AddressCount() const;

                    /**
                     * 设置为弹性网卡指定随机生成
                     * @param _ipv6AddressCount 为弹性网卡指定随机生成
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
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 是否用作公网网关
                     */
                    bool m_asVpcGateway;
                    bool m_asVpcGatewayHasBeenSet;

                    /**
                     * 私有网络子网 IP 数组
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 为弹性网卡指定随机生成
                     */
                    uint64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_SPACEVIRTUALPRIVATECLOUD_H_
