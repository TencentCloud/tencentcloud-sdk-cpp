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
                     * 获取<p>访问源示例： net：IP/CIDR(192.168.0.2)</p>
                     * @return SourceContent <p>访问源示例： net：IP/CIDR(192.168.0.2)</p>
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置<p>访问源示例： net：IP/CIDR(192.168.0.2)</p>
                     * @param _sourceContent <p>访问源示例： net：IP/CIDR(192.168.0.2)</p>
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
                     * 获取<p>访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag</p>
                     * @return SourceType <p>访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag</p>
                     * @param _sourceType <p>访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag</p>
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
                     * 获取<p>访问目的示例： net：IP/CIDR(192.168.0.2) domain：域名规则，例如*.qq.com</p>
                     * @return TargetContent <p>访问目的示例： net：IP/CIDR(192.168.0.2) domain：域名规则，例如*.qq.com</p>
                     * 
                     */
                    std::string GetTargetContent() const;

                    /**
                     * 设置<p>访问目的示例： net：IP/CIDR(192.168.0.2) domain：域名规则，例如*.qq.com</p>
                     * @param _targetContent <p>访问目的示例： net：IP/CIDR(192.168.0.2) domain：域名规则，例如*.qq.com</p>
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
                     * 获取<p>访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为  ip,net,domain,template,location</p>
                     * @return TargetType <p>访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为  ip,net,domain,template,location</p>
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为  ip,net,domain,template,location</p>
                     * @param _targetType <p>访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为  ip,net,domain,template,location</p>
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
                     * 获取<p>协议，可选的值： TCP UDP ICMP ANY HTTP HTTPS HTTP/HTTPS SMTP SMTPS SMTP/SMTPS FTP DNS</p>
                     * @return Protocol <p>协议，可选的值： TCP UDP ICMP ANY HTTP HTTPS HTTP/HTTPS SMTP SMTPS SMTP/SMTPS FTP DNS</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议，可选的值： TCP UDP ICMP ANY HTTP HTTPS HTTP/HTTPS SMTP SMTPS SMTP/SMTPS FTP DNS</p>
                     * @param _protocol <p>协议，可选的值： TCP UDP ICMP ANY HTTP HTTPS HTTP/HTTPS SMTP SMTPS SMTP/SMTPS FTP DNS</p>
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
                     * 获取<p>访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察</p>
                     * @return RuleAction <p>访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察</p>
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置<p>访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察</p>
                     * @param _ruleAction <p>访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察</p>
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
                     * 获取<p>访问控制策略的端口。取值： -1/-1：全部端口 80：80端口</p>
                     * @return Port <p>访问控制策略的端口。取值： -1/-1：全部端口 80：80端口</p>
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>访问控制策略的端口。取值： -1/-1：全部端口 80：80端口</p>
                     * @param _port <p>访问控制策略的端口。取值： -1/-1：全部端口 80：80端口</p>
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
                     * 获取<p>规则方向：1，入站；0，出站</p>
                     * @return Direction <p>规则方向：1，入站；0，出站</p>
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置<p>规则方向：1，入站；0，出站</p>
                     * @param _direction <p>规则方向：1，入站；0，出站</p>
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取<p>规则序号</p>
                     * @return OrderIndex <p>规则序号</p>
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置<p>规则序号</p>
                     * @param _orderIndex <p>规则序号</p>
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
                     * 获取<p>规则状态，true表示启用，false表示禁用</p>
                     * @return Enable <p>规则状态，true表示启用，false表示禁用</p>
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置<p>规则状态，true表示启用，false表示禁用</p>
                     * @param _enable <p>规则状态，true表示启用，false表示禁用</p>
                     * 
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>规则对应的唯一id，创建规则AddNatAcRule时无需填写；修改规则ModifyNatAcRule时必须填写</p><p>创建规则AddNatAcRule时无需填写；修改规则ModifyNatAcRule时必须填写</p>
                     * @return Uuid <p>规则对应的唯一id，创建规则AddNatAcRule时无需填写；修改规则ModifyNatAcRule时必须填写</p><p>创建规则AddNatAcRule时无需填写；修改规则ModifyNatAcRule时必须填写</p>
                     * 
                     */
                    int64_t GetUuid() const;

                    /**
                     * 设置<p>规则对应的唯一id，创建规则AddNatAcRule时无需填写；修改规则ModifyNatAcRule时必须填写</p><p>创建规则AddNatAcRule时无需填写；修改规则ModifyNatAcRule时必须填写</p>
                     * @param _uuid <p>规则对应的唯一id，创建规则AddNatAcRule时无需填写；修改规则ModifyNatAcRule时必须填写</p><p>创建规则AddNatAcRule时无需填写；修改规则ModifyNatAcRule时必须填写</p>
                     * 
                     */
                    void SetUuid(const int64_t& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>端口协议组ID</p>
                     * @return ParamTemplateId <p>端口协议组ID</p>
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置<p>端口协议组ID</p>
                     * @param _paramTemplateId <p>端口协议组ID</p>
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
                     * 获取<p>内部id</p>
                     * @return InternalUuid <p>内部id</p>
                     * 
                     */
                    int64_t GetInternalUuid() const;

                    /**
                     * 设置<p>内部id</p>
                     * @param _internalUuid <p>内部id</p>
                     * 
                     */
                    void SetInternalUuid(const int64_t& _internalUuid);

                    /**
                     * 判断参数 InternalUuid 是否已赋值
                     * @return InternalUuid 是否已赋值
                     * 
                     */
                    bool InternalUuidHasBeenSet() const;

                    /**
                     * 获取<p>规则生效的范围：ALL，全局生效；ap-guangzhou，生效的地域；cfwnat-xxx，生效基于实例维度</p>
                     * @return Scope <p>规则生效的范围：ALL，全局生效；ap-guangzhou，生效的地域；cfwnat-xxx，生效基于实例维度</p>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置<p>规则生效的范围：ALL，全局生效；ap-guangzhou，生效的地域；cfwnat-xxx，生效基于实例维度</p>
                     * @param _scope <p>规则生效的范围：ALL，全局生效；ap-guangzhou，生效的地域；cfwnat-xxx，生效基于实例维度</p>
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                private:

                    /**
                     * <p>访问源示例： net：IP/CIDR(192.168.0.2)</p>
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * <p>访问源类型：入向规则时类型可以为 ip,net,template,location；出向规则时可以为 ip,net,template,instance,group,tag</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>访问目的示例： net：IP/CIDR(192.168.0.2) domain：域名规则，例如*.qq.com</p>
                     */
                    std::string m_targetContent;
                    bool m_targetContentHasBeenSet;

                    /**
                     * <p>访问目的类型：入向规则时类型可以为ip,net,template,instance,group,tag；出向规则时可以为  ip,net,domain,template,location</p>
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>协议，可选的值： TCP UDP ICMP ANY HTTP HTTPS HTTP/HTTPS SMTP SMTPS SMTP/SMTPS FTP DNS</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>访问控制策略中设置的流量通过云防火墙的方式。取值： accept：放行 drop：拒绝 log：观察</p>
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * <p>访问控制策略的端口。取值： -1/-1：全部端口 80：80端口</p>
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>规则方向：1，入站；0，出站</p>
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>规则序号</p>
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * <p>规则状态，true表示启用，false表示禁用</p>
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>规则对应的唯一id，创建规则AddNatAcRule时无需填写；修改规则ModifyNatAcRule时必须填写</p><p>创建规则AddNatAcRule时无需填写；修改规则ModifyNatAcRule时必须填写</p>
                     */
                    int64_t m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>端口协议组ID</p>
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>内部id</p>
                     */
                    int64_t m_internalUuid;
                    bool m_internalUuidHasBeenSet;

                    /**
                     * <p>规则生效的范围：ALL，全局生效；ap-guangzhou，生效的地域；cfwnat-xxx，生效基于实例维度</p>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATRULEITEM_H_
