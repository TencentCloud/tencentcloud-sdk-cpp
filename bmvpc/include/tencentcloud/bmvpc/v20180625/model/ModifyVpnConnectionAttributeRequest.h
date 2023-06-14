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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYVPNCONNECTIONATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYVPNCONNECTIONATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyVpnConnectionAttribute请求参数结构体
                */
                class ModifyVpnConnectionAttributeRequest : public AbstractModel
                {
                public:
                    ModifyVpnConnectionAttributeRequest();
                    ~ModifyVpnConnectionAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPN通道实例ID。形如：bmvpnx-f49l6u0z。
                     * @return VpnConnectionId VPN通道实例ID。形如：bmvpnx-f49l6u0z。
                     * 
                     */
                    std::string GetVpnConnectionId() const;

                    /**
                     * 设置VPN通道实例ID。形如：bmvpnx-f49l6u0z。
                     * @param _vpnConnectionId VPN通道实例ID。形如：bmvpnx-f49l6u0z。
                     * 
                     */
                    void SetVpnConnectionId(const std::string& _vpnConnectionId);

                    /**
                     * 判断参数 VpnConnectionId 是否已赋值
                     * @return VpnConnectionId 是否已赋值
                     * 
                     */
                    bool VpnConnectionIdHasBeenSet() const;

                    /**
                     * 获取VPC实例ID
                     * @return VpcId VPC实例ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID
                     * @param _vpcId VPC实例ID
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
                     * 获取VPN通道名称，可任意命名，但不得超过60个字符。
                     * @return VpnConnectionName VPN通道名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    std::string GetVpnConnectionName() const;

                    /**
                     * 设置VPN通道名称，可任意命名，但不得超过60个字符。
                     * @param _vpnConnectionName VPN通道名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    void SetVpnConnectionName(const std::string& _vpnConnectionName);

                    /**
                     * 判断参数 VpnConnectionName 是否已赋值
                     * @return VpnConnectionName 是否已赋值
                     * 
                     */
                    bool VpnConnectionNameHasBeenSet() const;

                    /**
                     * 获取预共享密钥。
                     * @return PreShareKey 预共享密钥。
                     * 
                     */
                    std::string GetPreShareKey() const;

                    /**
                     * 设置预共享密钥。
                     * @param _preShareKey 预共享密钥。
                     * 
                     */
                    void SetPreShareKey(const std::string& _preShareKey);

                    /**
                     * 判断参数 PreShareKey 是否已赋值
                     * @return PreShareKey 是否已赋值
                     * 
                     */
                    bool PreShareKeyHasBeenSet() const;

                    /**
                     * 获取SPD策略组，例如：{"10.0.0.5/24":["172.123.10.5/16"]}，10.0.0.5/24是vpc内网段172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。
                     * @return SecurityPolicyDatabases SPD策略组，例如：{"10.0.0.5/24":["172.123.10.5/16"]}，10.0.0.5/24是vpc内网段172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。
                     * 
                     */
                    std::vector<SecurityPolicyDatabase> GetSecurityPolicyDatabases() const;

                    /**
                     * 设置SPD策略组，例如：{"10.0.0.5/24":["172.123.10.5/16"]}，10.0.0.5/24是vpc内网段172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。
                     * @param _securityPolicyDatabases SPD策略组，例如：{"10.0.0.5/24":["172.123.10.5/16"]}，10.0.0.5/24是vpc内网段172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。
                     * 
                     */
                    void SetSecurityPolicyDatabases(const std::vector<SecurityPolicyDatabase>& _securityPolicyDatabases);

                    /**
                     * 判断参数 SecurityPolicyDatabases 是否已赋值
                     * @return SecurityPolicyDatabases 是否已赋值
                     * 
                     */
                    bool SecurityPolicyDatabasesHasBeenSet() const;

                    /**
                     * 获取IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。
                     * @return IKEOptionsSpecification IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。
                     * 
                     */
                    IKEOptionsSpecification GetIKEOptionsSpecification() const;

                    /**
                     * 设置IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。
                     * @param _iKEOptionsSpecification IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。
                     * 
                     */
                    void SetIKEOptionsSpecification(const IKEOptionsSpecification& _iKEOptionsSpecification);

                    /**
                     * 判断参数 IKEOptionsSpecification 是否已赋值
                     * @return IKEOptionsSpecification 是否已赋值
                     * 
                     */
                    bool IKEOptionsSpecificationHasBeenSet() const;

                    /**
                     * 获取IPSec配置，腾讯云提供IPSec安全会话设置。
                     * @return IPSECOptionsSpecification IPSec配置，腾讯云提供IPSec安全会话设置。
                     * 
                     */
                    IPSECOptionsSpecification GetIPSECOptionsSpecification() const;

                    /**
                     * 设置IPSec配置，腾讯云提供IPSec安全会话设置。
                     * @param _iPSECOptionsSpecification IPSec配置，腾讯云提供IPSec安全会话设置。
                     * 
                     */
                    void SetIPSECOptionsSpecification(const IPSECOptionsSpecification& _iPSECOptionsSpecification);

                    /**
                     * 判断参数 IPSECOptionsSpecification 是否已赋值
                     * @return IPSECOptionsSpecification 是否已赋值
                     * 
                     */
                    bool IPSECOptionsSpecificationHasBeenSet() const;

                private:

                    /**
                     * VPN通道实例ID。形如：bmvpnx-f49l6u0z。
                     */
                    std::string m_vpnConnectionId;
                    bool m_vpnConnectionIdHasBeenSet;

                    /**
                     * VPC实例ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPN通道名称，可任意命名，但不得超过60个字符。
                     */
                    std::string m_vpnConnectionName;
                    bool m_vpnConnectionNameHasBeenSet;

                    /**
                     * 预共享密钥。
                     */
                    std::string m_preShareKey;
                    bool m_preShareKeyHasBeenSet;

                    /**
                     * SPD策略组，例如：{"10.0.0.5/24":["172.123.10.5/16"]}，10.0.0.5/24是vpc内网段172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。
                     */
                    std::vector<SecurityPolicyDatabase> m_securityPolicyDatabases;
                    bool m_securityPolicyDatabasesHasBeenSet;

                    /**
                     * IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。
                     */
                    IKEOptionsSpecification m_iKEOptionsSpecification;
                    bool m_iKEOptionsSpecificationHasBeenSet;

                    /**
                     * IPSec配置，腾讯云提供IPSec安全会话设置。
                     */
                    IPSECOptionsSpecification m_iPSECOptionsSpecification;
                    bool m_iPSECOptionsSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYVPNCONNECTIONATTRIBUTEREQUEST_H_
