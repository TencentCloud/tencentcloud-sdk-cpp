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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRANSLATIONACLRULE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRANSLATIONACLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 私网网关转发规则匹配ACL
                */
                class TranslationAclRule : public AbstractModel
                {
                public:
                    TranslationAclRule();
                    ~TranslationAclRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ACL协议类型，可选值:"ALL","TCP","UDP"
                     * @return Protocol ACL协议类型，可选值:"ALL","TCP","UDP"
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置ACL协议类型，可选值:"ALL","TCP","UDP"
                     * @param _protocol ACL协议类型，可选值:"ALL","TCP","UDP"
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
                     * 获取源端口。
                     * @return SourcePort 源端口。
                     * 
                     */
                    std::string GetSourcePort() const;

                    /**
                     * 设置源端口。
                     * @param _sourcePort 源端口。
                     * 
                     */
                    void SetSourcePort(const std::string& _sourcePort);

                    /**
                     * 判断参数 SourcePort 是否已赋值
                     * @return SourcePort 是否已赋值
                     * 
                     */
                    bool SourcePortHasBeenSet() const;

                    /**
                     * 获取源地址。支持`ip`或`cidr`格式"xxx.xxx.xxx.000/xx"
                     * @return SourceCidr 源地址。支持`ip`或`cidr`格式"xxx.xxx.xxx.000/xx"
                     * 
                     */
                    std::string GetSourceCidr() const;

                    /**
                     * 设置源地址。支持`ip`或`cidr`格式"xxx.xxx.xxx.000/xx"
                     * @param _sourceCidr 源地址。支持`ip`或`cidr`格式"xxx.xxx.xxx.000/xx"
                     * 
                     */
                    void SetSourceCidr(const std::string& _sourceCidr);

                    /**
                     * 判断参数 SourceCidr 是否已赋值
                     * @return SourceCidr 是否已赋值
                     * 
                     */
                    bool SourceCidrHasBeenSet() const;

                    /**
                     * 获取目的端口。
                     * @return DestinationPort 目的端口。
                     * 
                     */
                    std::string GetDestinationPort() const;

                    /**
                     * 设置目的端口。
                     * @param _destinationPort 目的端口。
                     * 
                     */
                    void SetDestinationPort(const std::string& _destinationPort);

                    /**
                     * 判断参数 DestinationPort 是否已赋值
                     * @return DestinationPort 是否已赋值
                     * 
                     */
                    bool DestinationPortHasBeenSet() const;

                    /**
                     * 获取目的地址。
                     * @return DestinationCidr 目的地址。
                     * 
                     */
                    std::string GetDestinationCidr() const;

                    /**
                     * 设置目的地址。
                     * @param _destinationCidr 目的地址。
                     * 
                     */
                    void SetDestinationCidr(const std::string& _destinationCidr);

                    /**
                     * 判断参数 DestinationCidr 是否已赋值
                     * @return DestinationCidr 是否已赋值
                     * 
                     */
                    bool DestinationCidrHasBeenSet() const;

                    /**
                     * 获取ACL规则`ID`。
                     * @return AclRuleId ACL规则`ID`。
                     * 
                     */
                    uint64_t GetAclRuleId() const;

                    /**
                     * 设置ACL规则`ID`。
                     * @param _aclRuleId ACL规则`ID`。
                     * 
                     */
                    void SetAclRuleId(const uint64_t& _aclRuleId);

                    /**
                     * 判断参数 AclRuleId 是否已赋值
                     * @return AclRuleId 是否已赋值
                     * 
                     */
                    bool AclRuleIdHasBeenSet() const;

                    /**
                     * 获取是否匹配。
                     * @return Action 是否匹配。
                     * 
                     */
                    uint64_t GetAction() const;

                    /**
                     * 设置是否匹配。
                     * @param _action 是否匹配。
                     * 
                     */
                    void SetAction(const uint64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取ACL规则描述
                     * @return Description ACL规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置ACL规则描述
                     * @param _description ACL规则描述
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
                     * ACL协议类型，可选值:"ALL","TCP","UDP"
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 源端口。
                     */
                    std::string m_sourcePort;
                    bool m_sourcePortHasBeenSet;

                    /**
                     * 源地址。支持`ip`或`cidr`格式"xxx.xxx.xxx.000/xx"
                     */
                    std::string m_sourceCidr;
                    bool m_sourceCidrHasBeenSet;

                    /**
                     * 目的端口。
                     */
                    std::string m_destinationPort;
                    bool m_destinationPortHasBeenSet;

                    /**
                     * 目的地址。
                     */
                    std::string m_destinationCidr;
                    bool m_destinationCidrHasBeenSet;

                    /**
                     * ACL规则`ID`。
                     */
                    uint64_t m_aclRuleId;
                    bool m_aclRuleIdHasBeenSet;

                    /**
                     * 是否匹配。
                     */
                    uint64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * ACL规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRANSLATIONACLRULE_H_
