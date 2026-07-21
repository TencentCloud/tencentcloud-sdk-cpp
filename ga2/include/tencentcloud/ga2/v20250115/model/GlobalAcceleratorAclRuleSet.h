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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACLRULESET_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACLRULESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Acl规则信息
                */
                class GlobalAcceleratorAclRuleSet : public AbstractModel
                {
                public:
                    GlobalAcceleratorAclRuleSet();
                    ~GlobalAcceleratorAclRuleSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问控制策略ID。
                     * @return GlobalAcceleratorPolicyId 访问控制策略ID。
                     * 
                     */
                    std::string GetGlobalAcceleratorPolicyId() const;

                    /**
                     * 设置访问控制策略ID。
                     * @param _globalAcceleratorPolicyId 访问控制策略ID。
                     * 
                     */
                    void SetGlobalAcceleratorPolicyId(const std::string& _globalAcceleratorPolicyId);

                    /**
                     * 判断参数 GlobalAcceleratorPolicyId 是否已赋值
                     * @return GlobalAcceleratorPolicyId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorPolicyIdHasBeenSet() const;

                    /**
                     * 获取Acl规则ID。
                     * @return GlobalAcceleratorAclRuleId Acl规则ID。
                     * 
                     */
                    std::string GetGlobalAcceleratorAclRuleId() const;

                    /**
                     * 设置Acl规则ID。
                     * @param _globalAcceleratorAclRuleId Acl规则ID。
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
                     * 获取协议。
                     * @return Protocol 协议。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议。
                     * @param _protocol 协议。
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
                     * 获取端口。
                     * @return Port 端口。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口。
                     * @param _port 端口。
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
                     * 获取网段。
                     * @return SourceCidrBlock 网段。
                     * 
                     */
                    std::string GetSourceCidrBlock() const;

                    /**
                     * 设置网段。
                     * @param _sourceCidrBlock 网段。
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
                     * 获取动作。
                     * @return Policy 动作。
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置动作。
                     * @param _policy 动作。
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
                     * 获取描述。
                     * @return Description 描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。
                     * @param _description 描述。
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
                     * 访问控制策略ID。
                     */
                    std::string m_globalAcceleratorPolicyId;
                    bool m_globalAcceleratorPolicyIdHasBeenSet;

                    /**
                     * Acl规则ID。
                     */
                    std::string m_globalAcceleratorAclRuleId;
                    bool m_globalAcceleratorAclRuleIdHasBeenSet;

                    /**
                     * 协议。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 网段。
                     */
                    std::string m_sourceCidrBlock;
                    bool m_sourceCidrBlockHasBeenSet;

                    /**
                     * 动作。
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACLRULESET_H_
