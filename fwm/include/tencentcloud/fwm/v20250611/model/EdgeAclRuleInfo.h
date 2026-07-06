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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_EDGEACLRULEINFO_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_EDGEACLRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 互联网边界规则
                */
                class EdgeAclRuleInfo : public AbstractModel
                {
                public:
                    EdgeAclRuleInfo();
                    ~EdgeAclRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID，修改规则时必填
                     * @return RuleId 规则ID，修改规则时必填
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID，修改规则时必填
                     * @param _ruleId 规则ID，修改规则时必填
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则执行顺序，数字越小优先级越高，创建规则组时必须从1开始严格递增
                     * @return OrderIndex 规则执行顺序，数字越小优先级越高，创建规则组时必须从1开始严格递增
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置规则执行顺序，数字越小优先级越高，创建规则组时必须从1开始严格递增
                     * @param _orderIndex 规则执行顺序，数字越小优先级越高，创建规则组时必须从1开始严格递增
                     * 
                     */
                    void SetOrderIndex(const int64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取规则方向：0-出站，1-入站
                     * @return Direction 规则方向：0-出站，1-入站
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置规则方向：0-出站，1-入站
                     * @param _direction 规则方向：0-出站，1-入站
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取源地址内容，根据 SourceType 不同有不同的格式：ip 时为 IP/CIDR，domain 时为域名，template 时为模板ID，instance 时为实例ID列表（逗号分隔），tag 时为标签键值对（格式：key:value）
                     * @return SourceContent 源地址内容，根据 SourceType 不同有不同的格式：ip 时为 IP/CIDR，domain 时为域名，template 时为模板ID，instance 时为实例ID列表（逗号分隔），tag 时为标签键值对（格式：key:value）
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置源地址内容，根据 SourceType 不同有不同的格式：ip 时为 IP/CIDR，domain 时为域名，template 时为模板ID，instance 时为实例ID列表（逗号分隔），tag 时为标签键值对（格式：key:value）
                     * @param _sourceContent 源地址内容，根据 SourceType 不同有不同的格式：ip 时为 IP/CIDR，domain 时为域名，template 时为模板ID，instance 时为实例ID列表（逗号分隔），tag 时为标签键值对（格式：key:value）
                     * 
                     */
                    void SetSourceContent(const std::string& _sourceContent);

                    /**
                     * 判断参数 SourceContent 是否已赋值
                     * @return SourceContent 是否已赋值
                     * 
                     */
                    bool SourceContentHasBeenSet() const;

                    /**
                     * 获取源地址类型：ip-IP地址，domain-域名，template-参数模板，instance-实例，tag-标签
                     * @return SourceType 源地址类型：ip-IP地址，domain-域名，template-参数模板，instance-实例，tag-标签
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置源地址类型：ip-IP地址，domain-域名，template-参数模板，instance-实例，tag-标签
                     * @param _sourceType 源地址类型：ip-IP地址，domain-域名，template-参数模板，instance-实例，tag-标签
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取目标地址内容，格式同 SourceContent
                     * @return TargetContent 目标地址内容，格式同 SourceContent
                     * 
                     */
                    std::string GetTargetContent() const;

                    /**
                     * 设置目标地址内容，格式同 SourceContent
                     * @param _targetContent 目标地址内容，格式同 SourceContent
                     * 
                     */
                    void SetTargetContent(const std::string& _targetContent);

                    /**
                     * 判断参数 TargetContent 是否已赋值
                     * @return TargetContent 是否已赋值
                     * 
                     */
                    bool TargetContentHasBeenSet() const;

                    /**
                     * 获取目标地址类型：ip-IP地址，domain-域名，template-参数模板，instance-实例，tag-标签
                     * @return TargetType 目标地址类型：ip-IP地址，domain-域名，template-参数模板，instance-实例，tag-标签
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置目标地址类型：ip-IP地址，domain-域名，template-参数模板，instance-实例，tag-标签
                     * @param _targetType 目标地址类型：ip-IP地址，domain-域名，template-参数模板，instance-实例，tag-标签
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取端口，支持单端口、端口范围和逗号分隔的多端口，如：80、1-65535、80,443,8080
                     * @return Port 端口，支持单端口、端口范围和逗号分隔的多端口，如：80、1-65535、80,443,8080
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口，支持单端口、端口范围和逗号分隔的多端口，如：80、1-65535、80,443,8080
                     * @param _port 端口，支持单端口、端口范围和逗号分隔的多端口，如：80、1-65535、80,443,8080
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
                     * 获取协议类型：TCP、UDP、ICMP、ANY
                     * @return Protocol 协议类型：TCP、UDP、ICMP、ANY
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议类型：TCP、UDP、ICMP、ANY
                     * @param _protocol 协议类型：TCP、UDP、ICMP、ANY
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
                     * 获取规则动作：accept-放行，drop-阻断，log-观察
                     * @return RuleAction 规则动作：accept-放行，drop-阻断，log-观察
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置规则动作：accept-放行，drop-阻断，log-观察
                     * @param _ruleAction 规则动作：accept-放行，drop-阻断，log-观察
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取规则描述，长度0-256字符
                     * @return Description 规则描述，长度0-256字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述，长度0-256字符
                     * @param _description 规则描述，长度0-256字符
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取生效范围：serial，串行；side，旁路；all，全局	
                     * @return Scope 生效范围：serial，串行；side，旁路；all，全局	
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置生效范围：serial，串行；side，旁路；all，全局	
                     * @param _scope 生效范围：serial，串行；side，旁路；all，全局	
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取规则归属的成员账号ID（多账号场景下使用）。当 SourceType 或 TargetType 为 instance 或 tag 时，此参数必填，用于指定实例/标签所属的成员账号
                     * @return BelongMemberId 规则归属的成员账号ID（多账号场景下使用）。当 SourceType 或 TargetType 为 instance 或 tag 时，此参数必填，用于指定实例/标签所属的成员账号
                     * 
                     */
                    std::string GetBelongMemberId() const;

                    /**
                     * 设置规则归属的成员账号ID（多账号场景下使用）。当 SourceType 或 TargetType 为 instance 或 tag 时，此参数必填，用于指定实例/标签所属的成员账号
                     * @param _belongMemberId 规则归属的成员账号ID（多账号场景下使用）。当 SourceType 或 TargetType 为 instance 或 tag 时，此参数必填，用于指定实例/标签所属的成员账号
                     * 
                     */
                    void SetBelongMemberId(const std::string& _belongMemberId);

                    /**
                     * 判断参数 BelongMemberId 是否已赋值
                     * @return BelongMemberId 是否已赋值
                     * 
                     */
                    bool BelongMemberIdHasBeenSet() const;

                    /**
                     * 获取参数模板
                     * @return ParamTemplateId 参数模板
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置参数模板
                     * @param _paramTemplateId 参数模板
                     * 
                     */
                    void SetParamTemplateId(const std::string& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                private:

                    /**
                     * 规则ID，修改规则时必填
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则执行顺序，数字越小优先级越高，创建规则组时必须从1开始严格递增
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 规则方向：0-出站，1-入站
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 源地址内容，根据 SourceType 不同有不同的格式：ip 时为 IP/CIDR，domain 时为域名，template 时为模板ID，instance 时为实例ID列表（逗号分隔），tag 时为标签键值对（格式：key:value）
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 源地址类型：ip-IP地址，domain-域名，template-参数模板，instance-实例，tag-标签
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 目标地址内容，格式同 SourceContent
                     */
                    std::string m_targetContent;
                    bool m_targetContentHasBeenSet;

                    /**
                     * 目标地址类型：ip-IP地址，domain-域名，template-参数模板，instance-实例，tag-标签
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 端口，支持单端口、端口范围和逗号分隔的多端口，如：80、1-65535、80,443,8080
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 协议类型：TCP、UDP、ICMP、ANY
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 规则动作：accept-放行，drop-阻断，log-观察
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 规则描述，长度0-256字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 生效范围：serial，串行；side，旁路；all，全局	
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 规则归属的成员账号ID（多账号场景下使用）。当 SourceType 或 TargetType 为 instance 或 tag 时，此参数必填，用于指定实例/标签所属的成员账号
                     */
                    std::string m_belongMemberId;
                    bool m_belongMemberIdHasBeenSet;

                    /**
                     * 参数模板
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_EDGEACLRULEINFO_H_
