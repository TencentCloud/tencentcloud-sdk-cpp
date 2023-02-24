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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATRULEITEM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 创建NAT ACL规则参数结构
                */
                class CreateNatRuleItem : public AbstractModel
                {
                public:
                    CreateNatRuleItem();
                    ~CreateNatRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问源示例： net：IP/CIDR(192.168.0.2)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceContent 访问源示例： net：IP/CIDR(192.168.0.2)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置访问源示例： net：IP/CIDR(192.168.0.2)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SourceContent 访问源示例： net：IP/CIDR(192.168.0.2)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSourceContent(const std::string& _sourceContent);

                    /**
                     * 判断参数 SourceContent 是否已赋值
                     * @return SourceContent 是否已赋值
                     */
                    bool SourceContentHasBeenSet() const;

                    /**
                     * 获取访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceType 访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SourceType 访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取访问目的示例： net：IP/CIDR(192.168.0.2) domain：域名规则，例如*.qq.com
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetContent 访问目的示例： net：IP/CIDR(192.168.0.2) domain：域名规则，例如*.qq.com
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetContent() const;

                    /**
                     * 设置访问目的示例： net：IP/CIDR(192.168.0.2) domain：域名规则，例如*.qq.com
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetContent 访问目的示例： net：IP/CIDR(192.168.0.2) domain：域名规则，例如*.qq.com
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetContent(const std::string& _targetContent);

                    /**
                     * 判断参数 TargetContent 是否已赋值
                     * @return TargetContent 是否已赋值
                     */
                    bool TargetContentHasBeenSet() const;

                    /**
                     * 获取访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为  ip,net,domain,template,location
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetType 访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为  ip,net,domain,template,location
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为  ip,net,domain,template,location
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetType 访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为  ip,net,domain,template,location
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取协议，可选的值： TCP UDP ICMP ANY HTTP HTTPS HTTP/HTTPS SMTP SMTPS SMTP/SMTPS FTP DNS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 协议，可选的值： TCP UDP ICMP ANY HTTP HTTPS HTTP/HTTPS SMTP SMTPS SMTP/SMTPS FTP DNS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，可选的值： TCP UDP ICMP ANY HTTP HTTPS HTTP/HTTPS SMTP SMTPS SMTP/SMTPS FTP DNS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Protocol 协议，可选的值： TCP UDP ICMP ANY HTTP HTTPS HTTP/HTTPS SMTP SMTPS SMTP/SMTPS FTP DNS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleAction 访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleAction 访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取访问控制策略的端口。取值： -1/-1：全部端口 80：80端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 访问控制策略的端口。取值： -1/-1：全部端口 80：80端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPort() const;

                    /**
                     * 设置访问控制策略的端口。取值： -1/-1：全部端口 80：80端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Port 访问控制策略的端口。取值： -1/-1：全部端口 80：80端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取规则方向：1，入站；0，出站
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Direction 规则方向：1，入站；0，出站
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置规则方向：1，入站；0，出站
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Direction 规则方向：1，入站；0，出站
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderIndex 规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OrderIndex 规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOrderIndex(const int64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取规则状态，true表示启用，false表示禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable 规则状态，true表示启用，false表示禁用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置规则状态，true表示启用，false表示禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Enable 规则状态，true表示启用，false表示禁用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取规则对应的唯一id，创建规则时无需填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uuid 规则对应的唯一id，创建规则时无需填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetUuid() const;

                    /**
                     * 设置规则对应的唯一id，创建规则时无需填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Uuid 规则对应的唯一id，创建规则时无需填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUuid(const int64_t& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 访问源示例： net：IP/CIDR(192.168.0.2)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 访问目的示例： net：IP/CIDR(192.168.0.2) domain：域名规则，例如*.qq.com
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetContent;
                    bool m_targetContentHasBeenSet;

                    /**
                     * 访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为  ip,net,domain,template,location
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 协议，可选的值： TCP UDP ICMP ANY HTTP HTTPS HTTP/HTTPS SMTP SMTPS SMTP/SMTPS FTP DNS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 访问控制策略的端口。取值： -1/-1：全部端口 80：80端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 规则方向：1，入站；0，出站
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 规则状态，true表示启用，false表示禁用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 规则对应的唯一id，创建规则时无需填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATRULEITEM_H_
