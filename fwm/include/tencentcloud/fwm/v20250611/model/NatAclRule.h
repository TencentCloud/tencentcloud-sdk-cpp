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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_NATACLRULE_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_NATACLRULE_H_

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
                * NAT边界规则
                */
                class NatAclRule : public AbstractModel
                {
                public:
                    NatAclRule();
                    ~NatAclRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源地址内容
                     * @return SourceContent 源地址内容
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置源地址内容
                     * @param _sourceContent 源地址内容
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
                     * 获取源类型：ip/url/template/instance/tag
                     * @return SourceType 源类型：ip/url/template/instance/tag
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置源类型：ip/url/template/instance/tag
                     * @param _sourceType 源类型：ip/url/template/instance/tag
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
                     * 获取目的地址内容
                     * @return TargetContent 目的地址内容
                     * 
                     */
                    std::string GetTargetContent() const;

                    /**
                     * 设置目的地址内容
                     * @param _targetContent 目的地址内容
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
                     * 获取目的类型：ip/url/template/instance/tag
                     * @return TargetType 目的类型：ip/url/template/instance/tag
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置目的类型：ip/url/template/instance/tag
                     * @param _targetType 目的类型：ip/url/template/instance/tag
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
                     * 获取协议：TCP/UDP/ICMP/ANY/HTTP/HTTPS/DNS/FTP等
                     * @return Protocol 协议：TCP/UDP/ICMP/ANY/HTTP/HTTPS/DNS/FTP等
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议：TCP/UDP/ICMP/ANY/HTTP/HTTPS/DNS/FTP等
                     * @param _protocol 协议：TCP/UDP/ICMP/ANY/HTTP/HTTPS/DNS/FTP等
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
                     * 获取动作：accept/drop/log
                     * @return RuleAction 动作：accept/drop/log
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置动作：accept/drop/log
                     * @param _ruleAction 动作：accept/drop/log
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
                     * 获取优先级（从1开始）
                     * @return OrderIndex 优先级（从1开始）
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置优先级（从1开始）
                     * @param _orderIndex 优先级（从1开始）
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
                     * 获取规则生效范围：ALL-全局生效，ap-xxx-地域生效，cfwnat-xxx-NAT防火墙实例生效
                     * @return Scope 规则生效范围：ALL-全局生效，ap-xxx-地域生效，cfwnat-xxx-NAT防火墙实例生效
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置规则生效范围：ALL-全局生效，ap-xxx-地域生效，cfwnat-xxx-NAT防火墙实例生效
                     * @param _scope 规则生效范围：ALL-全局生效，ap-xxx-地域生效，cfwnat-xxx-NAT防火墙实例生效
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
                     * 获取规则方向：1-入站规则，0-出站规则
                     * @return Direction 规则方向：1-入站规则，0-出站规则
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置规则方向：1-入站规则，0-出站规则
                     * @param _direction 规则方向：1-入站规则，0-出站规则
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
                     * 获取规则ID（修改时必填）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 规则ID（修改时必填）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID（修改时必填）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId 规则ID（修改时必填）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取端口（ICMP协议时为空）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 端口（ICMP协议时为空）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口（ICMP协议时为空）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 端口（ICMP协议时为空）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 规则描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取端口模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamTemplateId 端口模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置端口模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramTemplateId 端口模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamTemplateId(const std::string& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取规则归属的成员账号ID（当Scope为cfwnat-xxx或SourceType/DestType为instance/tag时必填）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BelongMemberId 规则归属的成员账号ID（当Scope为cfwnat-xxx或SourceType/DestType为instance/tag时必填）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBelongMemberId() const;

                    /**
                     * 设置规则归属的成员账号ID（当Scope为cfwnat-xxx或SourceType/DestType为instance/tag时必填）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _belongMemberId 规则归属的成员账号ID（当Scope为cfwnat-xxx或SourceType/DestType为instance/tag时必填）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBelongMemberId(const std::string& _belongMemberId);

                    /**
                     * 判断参数 BelongMemberId 是否已赋值
                     * @return BelongMemberId 是否已赋值
                     * 
                     */
                    bool BelongMemberIdHasBeenSet() const;

                private:

                    /**
                     * 源地址内容
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 源类型：ip/url/template/instance/tag
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 目的地址内容
                     */
                    std::string m_targetContent;
                    bool m_targetContentHasBeenSet;

                    /**
                     * 目的类型：ip/url/template/instance/tag
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 协议：TCP/UDP/ICMP/ANY/HTTP/HTTPS/DNS/FTP等
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 动作：accept/drop/log
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 优先级（从1开始）
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 规则生效范围：ALL-全局生效，ap-xxx-地域生效，cfwnat-xxx-NAT防火墙实例生效
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 规则方向：1-入站规则，0-出站规则
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 规则ID（修改时必填）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 端口（ICMP协议时为空）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 端口模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * 规则归属的成员账号ID（当Scope为cfwnat-xxx或SourceType/DestType为instance/tag时必填）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_belongMemberId;
                    bool m_belongMemberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_NATACLRULE_H_
