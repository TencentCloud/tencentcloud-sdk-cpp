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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ServiceTemplateSpecification.h>
#include <tencentcloud/vpc/v20170312/model/AddressTemplateSpecification.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 安全组规则对象
                */
                class SecurityGroupPolicy : public AbstractModel
                {
                public:
                    SecurityGroupPolicy();
                    ~SecurityGroupPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全组规则索引号。
                     * @return PolicyIndex 安全组规则索引号。
                     */
                    int64_t GetPolicyIndex() const;

                    /**
                     * 设置安全组规则索引号。
                     * @param PolicyIndex 安全组规则索引号。
                     */
                    void SetPolicyIndex(const int64_t& _policyIndex);

                    /**
                     * 判断参数 PolicyIndex 是否已赋值
                     * @return PolicyIndex 是否已赋值
                     */
                    bool PolicyIndexHasBeenSet() const;

                    /**
                     * 获取协议, 取值: TCP,UDP, ICMP。
                     * @return Protocol 协议, 取值: TCP,UDP, ICMP。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议, 取值: TCP,UDP, ICMP。
                     * @param Protocol 协议, 取值: TCP,UDP, ICMP。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取端口(all, 离散port,  range)。
                     * @return Port 端口(all, 离散port,  range)。
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口(all, 离散port,  range)。
                     * @param Port 端口(all, 离散port,  range)。
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取协议端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。
                     * @return ServiceTemplate 协议端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。
                     */
                    ServiceTemplateSpecification GetServiceTemplate() const;

                    /**
                     * 设置协议端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。
                     * @param ServiceTemplate 协议端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。
                     */
                    void SetServiceTemplate(const ServiceTemplateSpecification& _serviceTemplate);

                    /**
                     * 判断参数 ServiceTemplate 是否已赋值
                     * @return ServiceTemplate 是否已赋值
                     */
                    bool ServiceTemplateHasBeenSet() const;

                    /**
                     * 获取网段或IP(互斥)。
                     * @return CidrBlock 网段或IP(互斥)。
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置网段或IP(互斥)。
                     * @param CidrBlock 网段或IP(互斥)。
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取安全组实例ID，例如：sg-ohuuioma。
                     * @return SecurityGroupId 安全组实例ID，例如：sg-ohuuioma。
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组实例ID，例如：sg-ohuuioma。
                     * @param SecurityGroupId 安全组实例ID，例如：sg-ohuuioma。
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取IP地址ID或者ID地址组ID。
                     * @return AddressTemplate IP地址ID或者ID地址组ID。
                     */
                    AddressTemplateSpecification GetAddressTemplate() const;

                    /**
                     * 设置IP地址ID或者ID地址组ID。
                     * @param AddressTemplate IP地址ID或者ID地址组ID。
                     */
                    void SetAddressTemplate(const AddressTemplateSpecification& _addressTemplate);

                    /**
                     * 判断参数 AddressTemplate 是否已赋值
                     * @return AddressTemplate 是否已赋值
                     */
                    bool AddressTemplateHasBeenSet() const;

                    /**
                     * 获取ACCEPT 或 DROP。
                     * @return Action ACCEPT 或 DROP。
                     */
                    std::string GetAction() const;

                    /**
                     * 设置ACCEPT 或 DROP。
                     * @param Action ACCEPT 或 DROP。
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取安全组规则描述。
                     * @return PolicyDescription 安全组规则描述。
                     */
                    std::string GetPolicyDescription() const;

                    /**
                     * 设置安全组规则描述。
                     * @param PolicyDescription 安全组规则描述。
                     */
                    void SetPolicyDescription(const std::string& _policyDescription);

                    /**
                     * 判断参数 PolicyDescription 是否已赋值
                     * @return PolicyDescription 是否已赋值
                     */
                    bool PolicyDescriptionHasBeenSet() const;

                private:

                    /**
                     * 安全组规则索引号。
                     */
                    int64_t m_policyIndex;
                    bool m_policyIndexHasBeenSet;

                    /**
                     * 协议, 取值: TCP,UDP, ICMP。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口(all, 离散port,  range)。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 协议端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。
                     */
                    ServiceTemplateSpecification m_serviceTemplate;
                    bool m_serviceTemplateHasBeenSet;

                    /**
                     * 网段或IP(互斥)。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

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
                     * ACCEPT 或 DROP。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 安全组规则描述。
                     */
                    std::string m_policyDescription;
                    bool m_policyDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICY_H_
