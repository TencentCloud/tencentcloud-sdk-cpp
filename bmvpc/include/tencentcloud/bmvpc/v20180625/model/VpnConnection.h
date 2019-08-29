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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_VPNCONNECTION_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_VPNCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmvpc/v20180625/model/SecurityPolicyDatabase.h>
#include <tencentcloud/bmvpc/v20180625/model/IKEOptionsSpecification.h>
#include <tencentcloud/bmvpc/v20180625/model/IPSECOptionsSpecification.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * VPN通道对象。
                */
                class VpnConnection : public AbstractModel
                {
                public:
                    VpnConnection();
                    ~VpnConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通道实例ID。
                     * @return VpnConnectionId 通道实例ID。
                     */
                    std::string GetVpnConnectionId() const;

                    /**
                     * 设置通道实例ID。
                     * @param VpnConnectionId 通道实例ID。
                     */
                    void SetVpnConnectionId(const std::string& _vpnConnectionId);

                    /**
                     * 判断参数 VpnConnectionId 是否已赋值
                     * @return VpnConnectionId 是否已赋值
                     */
                    bool VpnConnectionIdHasBeenSet() const;

                    /**
                     * 获取通道名称。
                     * @return VpnConnectionName 通道名称。
                     */
                    std::string GetVpnConnectionName() const;

                    /**
                     * 设置通道名称。
                     * @param VpnConnectionName 通道名称。
                     */
                    void SetVpnConnectionName(const std::string& _vpnConnectionName);

                    /**
                     * 判断参数 VpnConnectionName 是否已赋值
                     * @return VpnConnectionName 是否已赋值
                     */
                    bool VpnConnectionNameHasBeenSet() const;

                    /**
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param VpcId VPC实例ID。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPN网关实例ID。
                     * @return VpnGatewayId VPN网关实例ID。
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置VPN网关实例ID。
                     * @param VpnGatewayId VPN网关实例ID。
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     */
                    bool VpnGatewayIdHasBeenSet() const;

                    /**
                     * 获取对端网关实例ID。
                     * @return CustomerGatewayId 对端网关实例ID。
                     */
                    std::string GetCustomerGatewayId() const;

                    /**
                     * 设置对端网关实例ID。
                     * @param CustomerGatewayId 对端网关实例ID。
                     */
                    void SetCustomerGatewayId(const std::string& _customerGatewayId);

                    /**
                     * 判断参数 CustomerGatewayId 是否已赋值
                     * @return CustomerGatewayId 是否已赋值
                     */
                    bool CustomerGatewayIdHasBeenSet() const;

                    /**
                     * 获取预共享密钥。
                     * @return PreShareKey 预共享密钥。
                     */
                    std::string GetPreShareKey() const;

                    /**
                     * 设置预共享密钥。
                     * @param PreShareKey 预共享密钥。
                     */
                    void SetPreShareKey(const std::string& _preShareKey);

                    /**
                     * 判断参数 PreShareKey 是否已赋值
                     * @return PreShareKey 是否已赋值
                     */
                    bool PreShareKeyHasBeenSet() const;

                    /**
                     * 获取通道传输协议。
                     * @return VpnProto 通道传输协议。
                     */
                    std::string GetVpnProto() const;

                    /**
                     * 设置通道传输协议。
                     * @param VpnProto 通道传输协议。
                     */
                    void SetVpnProto(const std::string& _vpnProto);

                    /**
                     * 判断参数 VpnProto 是否已赋值
                     * @return VpnProto 是否已赋值
                     */
                    bool VpnProtoHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param CreateTime 创建时间。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取通道的生产状态
                     * @return State 通道的生产状态
                     */
                    std::string GetState() const;

                    /**
                     * 设置通道的生产状态
                     * @param State 通道的生产状态
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取通道连接状态
                     * @return NetStatus 通道连接状态
                     */
                    std::string GetNetStatus() const;

                    /**
                     * 设置通道连接状态
                     * @param NetStatus 通道连接状态
                     */
                    void SetNetStatus(const std::string& _netStatus);

                    /**
                     * 判断参数 NetStatus 是否已赋值
                     * @return NetStatus 是否已赋值
                     */
                    bool NetStatusHasBeenSet() const;

                    /**
                     * 获取SPD。
                     * @return SecurityPolicyDatabaseSet SPD。
                     */
                    std::vector<SecurityPolicyDatabase> GetSecurityPolicyDatabaseSet() const;

                    /**
                     * 设置SPD。
                     * @param SecurityPolicyDatabaseSet SPD。
                     */
                    void SetSecurityPolicyDatabaseSet(const std::vector<SecurityPolicyDatabase>& _securityPolicyDatabaseSet);

                    /**
                     * 判断参数 SecurityPolicyDatabaseSet 是否已赋值
                     * @return SecurityPolicyDatabaseSet 是否已赋值
                     */
                    bool SecurityPolicyDatabaseSetHasBeenSet() const;

                    /**
                     * 获取IKE选项。
                     * @return IKEOptionsSpecification IKE选项。
                     */
                    IKEOptionsSpecification GetIKEOptionsSpecification() const;

                    /**
                     * 设置IKE选项。
                     * @param IKEOptionsSpecification IKE选项。
                     */
                    void SetIKEOptionsSpecification(const IKEOptionsSpecification& _iKEOptionsSpecification);

                    /**
                     * 判断参数 IKEOptionsSpecification 是否已赋值
                     * @return IKEOptionsSpecification 是否已赋值
                     */
                    bool IKEOptionsSpecificationHasBeenSet() const;

                    /**
                     * 获取IPSEC选项。
                     * @return IPSECOptionsSpecification IPSEC选项。
                     */
                    IPSECOptionsSpecification GetIPSECOptionsSpecification() const;

                    /**
                     * 设置IPSEC选项。
                     * @param IPSECOptionsSpecification IPSEC选项。
                     */
                    void SetIPSECOptionsSpecification(const IPSECOptionsSpecification& _iPSECOptionsSpecification);

                    /**
                     * 判断参数 IPSECOptionsSpecification 是否已赋值
                     * @return IPSECOptionsSpecification 是否已赋值
                     */
                    bool IPSECOptionsSpecificationHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param Zone 可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取VPC网段
                     * @return VpcCidrBlock VPC网段
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置VPC网段
                     * @param VpcCidrBlock VPC网段
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取VPC名称
                     * @return VpcName VPC名称
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC名称
                     * @param VpcName VPC名称
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                private:

                    /**
                     * 通道实例ID。
                     */
                    std::string m_vpnConnectionId;
                    bool m_vpnConnectionIdHasBeenSet;

                    /**
                     * 通道名称。
                     */
                    std::string m_vpnConnectionName;
                    bool m_vpnConnectionNameHasBeenSet;

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPN网关实例ID。
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * 对端网关实例ID。
                     */
                    std::string m_customerGatewayId;
                    bool m_customerGatewayIdHasBeenSet;

                    /**
                     * 预共享密钥。
                     */
                    std::string m_preShareKey;
                    bool m_preShareKeyHasBeenSet;

                    /**
                     * 通道传输协议。
                     */
                    std::string m_vpnProto;
                    bool m_vpnProtoHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 通道的生产状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 通道连接状态
                     */
                    std::string m_netStatus;
                    bool m_netStatusHasBeenSet;

                    /**
                     * SPD。
                     */
                    std::vector<SecurityPolicyDatabase> m_securityPolicyDatabaseSet;
                    bool m_securityPolicyDatabaseSetHasBeenSet;

                    /**
                     * IKE选项。
                     */
                    IKEOptionsSpecification m_iKEOptionsSpecification;
                    bool m_iKEOptionsSpecificationHasBeenSet;

                    /**
                     * IPSEC选项。
                     */
                    IPSECOptionsSpecification m_iPSECOptionsSpecification;
                    bool m_iPSECOptionsSpecificationHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_VPNCONNECTION_H_
