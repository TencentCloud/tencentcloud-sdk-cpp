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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_VPNGATEWAY_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_VPNGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * VPN网关对象。
                */
                class VpnGateway : public AbstractModel
                {
                public:
                    VpnGateway();
                    ~VpnGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网关实例ID。
                     * @return VpnGatewayId 网关实例ID。
                     * 
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置网关实例ID。
                     * @param _vpnGatewayId 网关实例ID。
                     * 
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     * 
                     */
                    bool VpnGatewayIdHasBeenSet() const;

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
                     * 获取网关实例名称。
                     * @return VpnGatewayName 网关实例名称。
                     * 
                     */
                    std::string GetVpnGatewayName() const;

                    /**
                     * 设置网关实例名称。
                     * @param _vpnGatewayName 网关实例名称。
                     * 
                     */
                    void SetVpnGatewayName(const std::string& _vpnGatewayName);

                    /**
                     * 判断参数 VpnGatewayName 是否已赋值
                     * @return VpnGatewayName 是否已赋值
                     * 
                     */
                    bool VpnGatewayNameHasBeenSet() const;

                    /**
                     * 获取VPC网段
                     * @return VpcCidrBlock VPC网段
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置VPC网段
                     * @param _vpcCidrBlock VPC网段
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
                     * 获取VPC名称
                     * @return VpcName VPC名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC名称
                     * @param _vpcName VPC名称
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
                     * 获取网关出带宽。
                     * @return InternetMaxBandwidthOut 网关出带宽。
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置网关出带宽。
                     * @param _internetMaxBandwidthOut 网关出带宽。
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取网关实例状态
                     * @return State 网关实例状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置网关实例状态
                     * @param _state 网关实例状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取网关公网IP。
                     * @return PublicIpAddress 网关公网IP。
                     * 
                     */
                    std::string GetPublicIpAddress() const;

                    /**
                     * 设置网关公网IP。
                     * @param _publicIpAddress 网关公网IP。
                     * 
                     */
                    void SetPublicIpAddress(const std::string& _publicIpAddress);

                    /**
                     * 判断参数 PublicIpAddress 是否已赋值
                     * @return PublicIpAddress 是否已赋值
                     * 
                     */
                    bool PublicIpAddressHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取可用区，如：ap-guangzhou
                     * @return Zone 可用区，如：ap-guangzhou
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区，如：ap-guangzhou
                     * @param _zone 可用区，如：ap-guangzhou
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
                     * 获取VPN网关的通道数
                     * @return VpnConnNum VPN网关的通道数
                     * 
                     */
                    uint64_t GetVpnConnNum() const;

                    /**
                     * 设置VPN网关的通道数
                     * @param _vpnConnNum VPN网关的通道数
                     * 
                     */
                    void SetVpnConnNum(const uint64_t& _vpnConnNum);

                    /**
                     * 判断参数 VpnConnNum 是否已赋值
                     * @return VpnConnNum 是否已赋值
                     * 
                     */
                    bool VpnConnNumHasBeenSet() const;

                private:

                    /**
                     * 网关实例ID。
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 网关实例名称。
                     */
                    std::string m_vpnGatewayName;
                    bool m_vpnGatewayNameHasBeenSet;

                    /**
                     * VPC网段
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * VPC名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 网关出带宽。
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 网关实例状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 网关公网IP。
                     */
                    std::string m_publicIpAddress;
                    bool m_publicIpAddressHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 可用区，如：ap-guangzhou
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPN网关的通道数
                     */
                    uint64_t m_vpnConnNum;
                    bool m_vpnConnNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_VPNGATEWAY_H_
