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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORACLRULEREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * ModifyGlobalAcceleratorAclRule请求参数结构体
                */
                class ModifyGlobalAcceleratorAclRuleRequest : public AbstractModel
                {
                public:
                    ModifyGlobalAcceleratorAclRuleRequest();
                    ~ModifyGlobalAcceleratorAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>全球加速实例ID。</p>
                     * @return GlobalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>全球加速实例ID。</p>
                     * @param _globalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>安全策略ID</p>
                     * @return GlobalAcceleratorAclPolicyId <p>安全策略ID</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorAclPolicyId() const;

                    /**
                     * 设置<p>安全策略ID</p>
                     * @param _globalAcceleratorAclPolicyId <p>安全策略ID</p>
                     * 
                     */
                    void SetGlobalAcceleratorAclPolicyId(const std::string& _globalAcceleratorAclPolicyId);

                    /**
                     * 判断参数 GlobalAcceleratorAclPolicyId 是否已赋值
                     * @return GlobalAcceleratorAclPolicyId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorAclPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>Acl规则ID。</p>
                     * @return GlobalAcceleratorAclRuleId <p>Acl规则ID。</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorAclRuleId() const;

                    /**
                     * 设置<p>Acl规则ID。</p>
                     * @param _globalAcceleratorAclRuleId <p>Acl规则ID。</p>
                     * 
                     */
                    void SetGlobalAcceleratorAclRuleId(const std::string& _globalAcceleratorAclRuleId);

                    /**
                     * 判断参数 GlobalAcceleratorAclRuleId 是否已赋值
                     * @return GlobalAcceleratorAclRuleId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorAclRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>协议。</p><p>入参限制：支持选择&#39;TCP&#39;, &#39;UDP&#39;, &#39;ALL&#39;。</p>
                     * @return Protocol <p>协议。</p><p>入参限制：支持选择&#39;TCP&#39;, &#39;UDP&#39;, &#39;ALL&#39;。</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议。</p><p>入参限制：支持选择&#39;TCP&#39;, &#39;UDP&#39;, &#39;ALL&#39;。</p>
                     * @param _protocol <p>协议。</p><p>入参限制：支持选择&#39;TCP&#39;, &#39;UDP&#39;, &#39;ALL&#39;。</p>
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
                     * 获取<p>端口。</p>
                     * @return Port <p>端口。</p>
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>端口。</p>
                     * @param _port <p>端口。</p>
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
                     * 获取<p>网段。</p>
                     * @return SourceCidrBlock <p>网段。</p>
                     * 
                     */
                    std::string GetSourceCidrBlock() const;

                    /**
                     * 设置<p>网段。</p>
                     * @param _sourceCidrBlock <p>网段。</p>
                     * 
                     */
                    void SetSourceCidrBlock(const std::string& _sourceCidrBlock);

                    /**
                     * 判断参数 SourceCidrBlock 是否已赋值
                     * @return SourceCidrBlock 是否已赋值
                     * 
                     */
                    bool SourceCidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>动作。</p><p>入参限制：支持选择&#39;ACCEPT&#39;, &#39;DROP&#39;。</p><p>枚举值：</p><ul><li>ACCEPT： 允许。</li><li>DROP： 拒绝。</li></ul>
                     * @return Policy <p>动作。</p><p>入参限制：支持选择&#39;ACCEPT&#39;, &#39;DROP&#39;。</p><p>枚举值：</p><ul><li>ACCEPT： 允许。</li><li>DROP： 拒绝。</li></ul>
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置<p>动作。</p><p>入参限制：支持选择&#39;ACCEPT&#39;, &#39;DROP&#39;。</p><p>枚举值：</p><ul><li>ACCEPT： 允许。</li><li>DROP： 拒绝。</li></ul>
                     * @param _policy <p>动作。</p><p>入参限制：支持选择&#39;ACCEPT&#39;, &#39;DROP&#39;。</p><p>枚举值：</p><ul><li>ACCEPT： 允许。</li><li>DROP： 拒绝。</li></ul>
                     * 
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取<p>描述信息，最大长度不能超过100个字节。</p>
                     * @return Description <p>描述信息，最大长度不能超过100个字节。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述信息，最大长度不能超过100个字节。</p>
                     * @param _description <p>描述信息，最大长度不能超过100个字节。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>全球加速实例ID。</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>安全策略ID</p>
                     */
                    std::string m_globalAcceleratorAclPolicyId;
                    bool m_globalAcceleratorAclPolicyIdHasBeenSet;

                    /**
                     * <p>Acl规则ID。</p>
                     */
                    std::string m_globalAcceleratorAclRuleId;
                    bool m_globalAcceleratorAclRuleIdHasBeenSet;

                    /**
                     * <p>协议。</p><p>入参限制：支持选择&#39;TCP&#39;, &#39;UDP&#39;, &#39;ALL&#39;。</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>端口。</p>
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>网段。</p>
                     */
                    std::string m_sourceCidrBlock;
                    bool m_sourceCidrBlockHasBeenSet;

                    /**
                     * <p>动作。</p><p>入参限制：支持选择&#39;ACCEPT&#39;, &#39;DROP&#39;。</p><p>枚举值：</p><ul><li>ACCEPT： 允许。</li><li>DROP： 拒绝。</li></ul>
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * <p>描述信息，最大长度不能超过100个字节。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORACLRULEREQUEST_H_
