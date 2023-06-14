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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYSUBNETDHCPRELAYREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYSUBNETDHCPRELAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ModifySubnetDHCPRelay请求参数结构体
                */
                class ModifySubnetDHCPRelayRequest : public AbstractModel
                {
                public:
                    ModifySubnetDHCPRelayRequest();
                    ~ModifySubnetDHCPRelayRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
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
                     * 获取是否开启DHCP Relay
                     * @return EnableDHCP 是否开启DHCP Relay
                     * 
                     */
                    bool GetEnableDHCP() const;

                    /**
                     * 设置是否开启DHCP Relay
                     * @param _enableDHCP 是否开启DHCP Relay
                     * 
                     */
                    void SetEnableDHCP(const bool& _enableDHCP);

                    /**
                     * 判断参数 EnableDHCP 是否已赋值
                     * @return EnableDHCP 是否已赋值
                     * 
                     */
                    bool EnableDHCPHasBeenSet() const;

                    /**
                     * 获取DHCP服务器IP
                     * @return ServerIps DHCP服务器IP
                     * 
                     */
                    std::vector<std::string> GetServerIps() const;

                    /**
                     * 设置DHCP服务器IP
                     * @param _serverIps DHCP服务器IP
                     * 
                     */
                    void SetServerIps(const std::vector<std::string>& _serverIps);

                    /**
                     * 判断参数 ServerIps 是否已赋值
                     * @return ServerIps 是否已赋值
                     * 
                     */
                    bool ServerIpsHasBeenSet() const;

                    /**
                     * 获取预留IP个数
                     * @return ReservedIpCount 预留IP个数
                     * 
                     */
                    uint64_t GetReservedIpCount() const;

                    /**
                     * 设置预留IP个数
                     * @param _reservedIpCount 预留IP个数
                     * 
                     */
                    void SetReservedIpCount(const uint64_t& _reservedIpCount);

                    /**
                     * 判断参数 ReservedIpCount 是否已赋值
                     * @return ReservedIpCount 是否已赋值
                     * 
                     */
                    bool ReservedIpCountHasBeenSet() const;

                private:

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 是否开启DHCP Relay
                     */
                    bool m_enableDHCP;
                    bool m_enableDHCPHasBeenSet;

                    /**
                     * DHCP服务器IP
                     */
                    std::vector<std::string> m_serverIps;
                    bool m_serverIpsHasBeenSet;

                    /**
                     * 预留IP个数
                     */
                    uint64_t m_reservedIpCount;
                    bool m_reservedIpCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYSUBNETDHCPRELAYREQUEST_H_
