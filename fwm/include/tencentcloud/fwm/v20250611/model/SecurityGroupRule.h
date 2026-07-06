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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_SECURITYGROUPRULE_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_SECURITYGROUPRULE_H_

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
                * 规则数据结构描述
                */
                class SecurityGroupRule : public AbstractModel
                {
                public:
                    SecurityGroupRule();
                    ~SecurityGroupRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ip类型
                     * @return IpVersion ip类型
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置ip类型
                     * @param _ipVersion ip类型
                     * 
                     */
                    void SetIpVersion(const std::string& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取源地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceContent 源地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置源地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceContent 源地址
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceType 源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceType 源类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取目的地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DestContent 目的地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDestContent() const;

                    /**
                     * 设置目的地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destContent 目的地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDestContent(const std::string& _destContent);

                    /**
                     * 判断参数 DestContent 是否已赋值
                     * @return DestContent 是否已赋值
                     * 
                     */
                    bool DestContentHasBeenSet() const;

                    /**
                     * 获取目的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DestType 目的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDestType() const;

                    /**
                     * 设置目的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destType 目的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDestType(const std::string& _destType);

                    /**
                     * 判断参数 DestType 是否已赋值
                     * @return DestType 是否已赋值
                     * 
                     */
                    bool DestTypeHasBeenSet() const;

                    /**
                     * 获取协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol 协议
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 端口
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
                     * 获取模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceTemplateId 模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceTemplateId 模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceTemplateId(const std::string& _serviceTemplateId);

                    /**
                     * 判断参数 ServiceTemplateId 是否已赋值
                     * @return ServiceTemplateId 是否已赋值
                     * 
                     */
                    bool ServiceTemplateIdHasBeenSet() const;

                    /**
                     * 获取动作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleAction 动作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置动作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleAction 动作
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
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
                     * 获取优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderIndex 优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderIndex 优先级
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取rule id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId rule id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置rule id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId rule id
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
                     * 获取生效范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scope 生效范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置生效范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scope 生效范围
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取端口类型
                     * @return ProtocolPortType 端口类型
                     * 
                     */
                    int64_t GetProtocolPortType() const;

                    /**
                     * 设置端口类型
                     * @param _protocolPortType 端口类型
                     * 
                     */
                    void SetProtocolPortType(const int64_t& _protocolPortType);

                    /**
                     * 判断参数 ProtocolPortType 是否已赋值
                     * @return ProtocolPortType 是否已赋值
                     * 
                     */
                    bool ProtocolPortTypeHasBeenSet() const;

                    /**
                     * 获取规则归属的成员账号ID（当FwGroupId为cfwg-xxx或SourceType/DestType为instance/tag时必填）
                     * @return BelongMemberId 规则归属的成员账号ID（当FwGroupId为cfwg-xxx或SourceType/DestType为instance/tag时必填）
                     * 
                     */
                    std::string GetBelongMemberId() const;

                    /**
                     * 设置规则归属的成员账号ID（当FwGroupId为cfwg-xxx或SourceType/DestType为instance/tag时必填）
                     * @param _belongMemberId 规则归属的成员账号ID（当FwGroupId为cfwg-xxx或SourceType/DestType为instance/tag时必填）
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
                     * ip类型
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * 源地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 目的地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * 目的类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_destType;
                    bool m_destTypeHasBeenSet;

                    /**
                     * 协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                    /**
                     * 动作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * rule id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 生效范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 端口类型
                     */
                    int64_t m_protocolPortType;
                    bool m_protocolPortTypeHasBeenSet;

                    /**
                     * 规则归属的成员账号ID（当FwGroupId为cfwg-xxx或SourceType/DestType为instance/tag时必填）
                     */
                    std::string m_belongMemberId;
                    bool m_belongMemberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_SECURITYGROUPRULE_H_
