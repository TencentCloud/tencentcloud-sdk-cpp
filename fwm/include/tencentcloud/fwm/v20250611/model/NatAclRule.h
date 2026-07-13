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
                     * 获取<p>源地址内容</p>
                     * @return SourceContent <p>源地址内容</p>
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置<p>源地址内容</p>
                     * @param _sourceContent <p>源地址内容</p>
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
                     * 获取<p>源类型：ip/url/template/instance/tag</p>
                     * @return SourceType <p>源类型：ip/url/template/instance/tag</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>源类型：ip/url/template/instance/tag</p>
                     * @param _sourceType <p>源类型：ip/url/template/instance/tag</p>
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
                     * 获取<p>目的地址内容</p>
                     * @return TargetContent <p>目的地址内容</p>
                     * 
                     */
                    std::string GetTargetContent() const;

                    /**
                     * 设置<p>目的地址内容</p>
                     * @param _targetContent <p>目的地址内容</p>
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
                     * 获取<p>目的类型：ip/url/template/instance/tag</p>
                     * @return TargetType <p>目的类型：ip/url/template/instance/tag</p>
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>目的类型：ip/url/template/instance/tag</p>
                     * @param _targetType <p>目的类型：ip/url/template/instance/tag</p>
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
                     * 获取<p>协议：TCP/UDP/ICMP/ANY/HTTP/HTTPS/DNS/FTP等</p>
                     * @return Protocol <p>协议：TCP/UDP/ICMP/ANY/HTTP/HTTPS/DNS/FTP等</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议：TCP/UDP/ICMP/ANY/HTTP/HTTPS/DNS/FTP等</p>
                     * @param _protocol <p>协议：TCP/UDP/ICMP/ANY/HTTP/HTTPS/DNS/FTP等</p>
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
                     * 获取<p>动作：accept/drop/log</p>
                     * @return RuleAction <p>动作：accept/drop/log</p>
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置<p>动作：accept/drop/log</p>
                     * @param _ruleAction <p>动作：accept/drop/log</p>
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
                     * 获取<p>优先级（从1开始）</p>
                     * @return OrderIndex <p>优先级（从1开始）</p>
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置<p>优先级（从1开始）</p>
                     * @param _orderIndex <p>优先级（从1开始）</p>
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
                     * 获取<p>规则生效范围：ALL-全局生效，ap-xxx-地域生效，cfwnat-xxx-NAT防火墙实例生效</p>
                     * @return Scope <p>规则生效范围：ALL-全局生效，ap-xxx-地域生效，cfwnat-xxx-NAT防火墙实例生效</p>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置<p>规则生效范围：ALL-全局生效，ap-xxx-地域生效，cfwnat-xxx-NAT防火墙实例生效</p>
                     * @param _scope <p>规则生效范围：ALL-全局生效，ap-xxx-地域生效，cfwnat-xxx-NAT防火墙实例生效</p>
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
                     * 获取<p>规则方向：1-入站规则，0-出站规则</p>
                     * @return Direction <p>规则方向：1-入站规则，0-出站规则</p>
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置<p>规则方向：1-入站规则，0-出站规则</p>
                     * @param _direction <p>规则方向：1-入站规则，0-出站规则</p>
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
                     * 获取<p>规则ID（修改时必填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId <p>规则ID（修改时必填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>规则ID（修改时必填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId <p>规则ID（修改时必填）</p>
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
                     * 获取<p>端口（ICMP协议时为空）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port <p>端口（ICMP协议时为空）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>端口（ICMP协议时为空）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port <p>端口（ICMP协议时为空）</p>
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
                     * 获取<p>规则描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>规则描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>规则描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>规则描述</p>
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
                     * 获取<p>端口模板ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamTemplateId <p>端口模板ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置<p>端口模板ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramTemplateId <p>端口模板ID</p>
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
                     * 获取<p>规则归属的成员账号ID(当Scope为cfwnat-xxx或SourceType/DestType为instance/tag时必填)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BelongMemberId <p>规则归属的成员账号ID(当Scope为cfwnat-xxx或SourceType/DestType为instance/tag时必填)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBelongMemberId() const;

                    /**
                     * 设置<p>规则归属的成员账号ID(当Scope为cfwnat-xxx或SourceType/DestType为instance/tag时必填)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _belongMemberId <p>规则归属的成员账号ID(当Scope为cfwnat-xxx或SourceType/DestType为instance/tag时必填)</p>
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
                     * <p>源地址内容</p>
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * <p>源类型：ip/url/template/instance/tag</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>目的地址内容</p>
                     */
                    std::string m_targetContent;
                    bool m_targetContentHasBeenSet;

                    /**
                     * <p>目的类型：ip/url/template/instance/tag</p>
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>协议：TCP/UDP/ICMP/ANY/HTTP/HTTPS/DNS/FTP等</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>动作：accept/drop/log</p>
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * <p>优先级（从1开始）</p>
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * <p>规则生效范围：ALL-全局生效，ap-xxx-地域生效，cfwnat-xxx-NAT防火墙实例生效</p>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>规则方向：1-入站规则，0-出站规则</p>
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>规则ID（修改时必填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>端口（ICMP协议时为空）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>规则描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>端口模板ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>规则归属的成员账号ID(当Scope为cfwnat-xxx或SourceType/DestType为instance/tag时必填)</p>
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
