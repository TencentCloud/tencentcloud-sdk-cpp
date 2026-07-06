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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_SECURITYGROUPRISKPOLICY_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_SECURITYGROUPRISKPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/ServiceTemplateSpecification.h>
#include <tencentcloud/fwm/v20250611/model/AddressTemplateSpecification.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 安全组风险规则详情
                */
                class SecurityGroupRiskPolicy : public AbstractModel
                {
                public:
                    SecurityGroupRiskPolicy();
                    ~SecurityGroupRiskPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全组规则索引号
                     * @return PolicyIndex 安全组规则索引号
                     * 
                     */
                    int64_t GetPolicyIndex() const;

                    /**
                     * 设置安全组规则索引号
                     * @param _policyIndex 安全组规则索引号
                     * 
                     */
                    void SetPolicyIndex(const int64_t& _policyIndex);

                    /**
                     * 判断参数 PolicyIndex 是否已赋值
                     * @return PolicyIndex 是否已赋值
                     * 
                     */
                    bool PolicyIndexHasBeenSet() const;

                    /**
                     * 获取 协议, 取值: TCP,UDP,ICMP,ICMPv6,ALL。
                     * @return Protocol  协议, 取值: TCP,UDP,ICMP,ICMPv6,ALL。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置 协议, 取值: TCP,UDP,ICMP,ICMPv6,ALL。
                     * @param _protocol  协议, 取值: TCP,UDP,ICMP,ICMPv6,ALL。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取端口(all, 离散port,  range)。
                     * @return Port 端口(all, 离散port,  range)。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口(all, 离散port,  range)。
                     * @param _port 端口(all, 离散port,  range)。
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。
                     * @return ServiceTemplate 端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。
                     * 
                     */
                    ServiceTemplateSpecification GetServiceTemplate() const;

                    /**
                     * 设置端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。
                     * @param _serviceTemplate 端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。
                     * 
                     */
                    void SetServiceTemplate(const ServiceTemplateSpecification& _serviceTemplate);

                    /**
                     * 判断参数 ServiceTemplate 是否已赋值
                     * @return ServiceTemplate 是否已赋值
                     * 
                     */
                    bool ServiceTemplateHasBeenSet() const;

                    /**
                     * 获取网段或IP(互斥)。
                     * @return CidrBlock 网段或IP(互斥)。
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置网段或IP(互斥)。
                     * @param _cidrBlock 网段或IP(互斥)。
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
                     * 获取网段或IPv6(互斥)。
                     * @return Ipv6CidrBlock 网段或IPv6(互斥)。
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置网段或IPv6(互斥)。
                     * @param _ipv6CidrBlock 网段或IPv6(互斥)。
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
                     * 获取安全组实例ID，例如：sg-ohuuioma。
                     * @return SecurityGroupId 安全组实例ID，例如：sg-ohuuioma。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组实例ID，例如：sg-ohuuioma。
                     * @param _securityGroupId 安全组实例ID，例如：sg-ohuuioma。
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取IP地址ID或者ID地址组ID。
                     * @return AddressTemplate IP地址ID或者ID地址组ID。
                     * 
                     */
                    AddressTemplateSpecification GetAddressTemplate() const;

                    /**
                     * 设置IP地址ID或者ID地址组ID。
                     * @param _addressTemplate IP地址ID或者ID地址组ID。
                     * 
                     */
                    void SetAddressTemplate(const AddressTemplateSpecification& _addressTemplate);

                    /**
                     * 判断参数 AddressTemplate 是否已赋值
                     * @return AddressTemplate 是否已赋值
                     * 
                     */
                    bool AddressTemplateHasBeenSet() const;

                    /**
                     * 获取动作：ACCEPT 或 DROP。
                     * @return Action 动作：ACCEPT 或 DROP。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作：ACCEPT 或 DROP。
                     * @param _action 动作：ACCEPT 或 DROP。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取安全组规则描述。
                     * @return PolicyDescription 安全组规则描述。
                     * 
                     */
                    std::string GetPolicyDescription() const;

                    /**
                     * 设置安全组规则描述。
                     * @param _policyDescription 安全组规则描述。
                     * 
                     */
                    void SetPolicyDescription(const std::string& _policyDescription);

                    /**
                     * 判断参数 PolicyDescription 是否已赋值
                     * @return PolicyDescription 是否已赋值
                     * 
                     */
                    bool PolicyDescriptionHasBeenSet() const;

                    /**
                     * 获取安全组规则当前版本
                     * @return Version 安全组规则当前版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置安全组规则当前版本
                     * @param _version 安全组规则当前版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取规则方向，Egress出站规则，Ingress入站规则
                     * @return Direction 规则方向，Egress出站规则，Ingress入站规则
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置规则方向，Egress出站规则，Ingress入站规则
                     * @param _direction 规则方向，Egress出站规则，Ingress入站规则
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取安全组最近修改时间。
                     * @return ModifyTime 安全组最近修改时间。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置安全组最近修改时间。
                     * @param _modifyTime 安全组最近修改时间。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取安全组所在地域
                     * @return Region 安全组所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置安全组所在地域
                     * @param _region 安全组所在地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 安全组规则索引号
                     */
                    int64_t m_policyIndex;
                    bool m_policyIndexHasBeenSet;

                    /**
                     *  协议, 取值: TCP,UDP,ICMP,ICMPv6,ALL。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口(all, 离散port,  range)。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。
                     */
                    ServiceTemplateSpecification m_serviceTemplate;
                    bool m_serviceTemplateHasBeenSet;

                    /**
                     * 网段或IP(互斥)。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 网段或IPv6(互斥)。
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * 安全组实例ID，例如：sg-ohuuioma。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * IP地址ID或者ID地址组ID。
                     */
                    AddressTemplateSpecification m_addressTemplate;
                    bool m_addressTemplateHasBeenSet;

                    /**
                     * 动作：ACCEPT 或 DROP。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 安全组规则描述。
                     */
                    std::string m_policyDescription;
                    bool m_policyDescriptionHasBeenSet;

                    /**
                     * 安全组规则当前版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 规则方向，Egress出站规则，Ingress入站规则
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 安全组最近修改时间。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 安全组所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_SECURITYGROUPRISKPOLICY_H_
