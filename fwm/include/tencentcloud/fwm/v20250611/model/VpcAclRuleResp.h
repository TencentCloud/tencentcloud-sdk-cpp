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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_VPCACLRULERESP_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_VPCACLRULERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/MemberInfo.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * VPC边界规则响应结构
                */
                class VpcAclRuleResp : public AbstractModel
                {
                public:
                    VpcAclRuleResp();
                    ~VpcAclRuleResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
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
                     * 获取优先级
                     * @return Sequence 优先级
                     * 
                     */
                    int64_t GetSequence() const;

                    /**
                     * 设置优先级
                     * @param _sequence 优先级
                     * 
                     */
                    void SetSequence(const int64_t& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     * 
                     */
                    bool SequenceHasBeenSet() const;

                    /**
                     * 获取IP版本：ipv4或ipv6
                     * @return IpVersion IP版本：ipv4或ipv6
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置IP版本：ipv4或ipv6
                     * @param _ipVersion IP版本：ipv4或ipv6
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
                     * 获取源类型
                     * @return SourceType 源类型
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置源类型
                     * @param _sourceType 源类型
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
                     * 获取源资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceName 源资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置源资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceName 源资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取目的地址内容
                     * @return DestContent 目的地址内容
                     * 
                     */
                    std::string GetDestContent() const;

                    /**
                     * 设置目的地址内容
                     * @param _destContent 目的地址内容
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
                     * @return DestType 目的类型
                     * 
                     */
                    std::string GetDestType() const;

                    /**
                     * 设置目的类型
                     * @param _destType 目的类型
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
                     * 获取目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DestName 目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDestName() const;

                    /**
                     * 设置目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destName 目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDestName(const std::string& _destName);

                    /**
                     * 判断参数 DestName 是否已赋值
                     * @return DestName 是否已赋值
                     * 
                     */
                    bool DestNameHasBeenSet() const;

                    /**
                     * 获取协议
                     * @return Protocol 协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
                     * @param _protocol 协议
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
                     * 获取端口模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamTemplateName 端口模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamTemplateName() const;

                    /**
                     * 设置端口模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramTemplateName 端口模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamTemplateName(const std::string& _paramTemplateName);

                    /**
                     * 判断参数 ParamTemplateName 是否已赋值
                     * @return ParamTemplateName 是否已赋值
                     * 
                     */
                    bool ParamTemplateNameHasBeenSet() const;

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
                     * 获取边界防火墙ID
                     * @return EdgeId 边界防火墙ID
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置边界防火墙ID
                     * @param _edgeId 边界防火墙ID
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取防火墙实例ID
                     * @return FwGroupId 防火墙实例ID
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置防火墙实例ID
                     * @param _fwGroupId 防火墙实例ID
                     * 
                     */
                    void SetFwGroupId(const std::string& _fwGroupId);

                    /**
                     * 判断参数 FwGroupId 是否已赋值
                     * @return FwGroupId 是否已赋值
                     * 
                     */
                    bool FwGroupIdHasBeenSet() const;

                    /**
                     * 获取规则是否失效：0-有效，1-失效
                     * @return Invalid 规则是否失效：0-有效，1-失效
                     * 
                     */
                    int64_t GetInvalid() const;

                    /**
                     * 设置规则是否失效：0-有效，1-失效
                     * @param _invalid 规则是否失效：0-有效，1-失效
                     * 
                     */
                    void SetInvalid(const int64_t& _invalid);

                    /**
                     * 判断参数 Invalid 是否已赋值
                     * @return Invalid 是否已赋值
                     * 
                     */
                    bool InvalidHasBeenSet() const;

                    /**
                     * 获取规则归属的成员账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BelongMember 规则归属的成员账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MemberInfo GetBelongMember() const;

                    /**
                     * 设置规则归属的成员账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _belongMember 规则归属的成员账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBelongMember(const MemberInfo& _belongMember);

                    /**
                     * 判断参数 BelongMember 是否已赋值
                     * @return BelongMember 是否已赋值
                     * 
                     */
                    bool BelongMemberHasBeenSet() const;

                    /**
                     * 获取规则创建时间
                     * @return CreateTime 规则创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置规则创建时间
                     * @param _createTime 规则创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取规则修改时间
                     * @return UpdateTime 规则修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置规则修改时间
                     * @param _updateTime 规则修改时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取域名数
                     * @return DnsParseCnt 域名数
                     * 
                     */
                    int64_t GetDnsParseCnt() const;

                    /**
                     * 设置域名数
                     * @param _dnsParseCnt 域名数
                     * 
                     */
                    void SetDnsParseCnt(const int64_t& _dnsParseCnt);

                    /**
                     * 判断参数 DnsParseCnt 是否已赋值
                     * @return DnsParseCnt 是否已赋值
                     * 
                     */
                    bool DnsParseCntHasBeenSet() const;

                    /**
                     * 获取防火墙组名称
                     * @return FwGroupName 防火墙组名称
                     * 
                     */
                    std::string GetFwGroupName() const;

                    /**
                     * 设置防火墙组名称
                     * @param _fwGroupName 防火墙组名称
                     * 
                     */
                    void SetFwGroupName(const std::string& _fwGroupName);

                    /**
                     * 判断参数 FwGroupName 是否已赋值
                     * @return FwGroupName 是否已赋值
                     * 
                     */
                    bool FwGroupNameHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * IP版本：ipv4或ipv6
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * 源地址内容
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 源类型
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 源资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 目的地址内容
                     */
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * 目的类型
                     */
                    std::string m_destType;
                    bool m_destTypeHasBeenSet;

                    /**
                     * 目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_destName;
                    bool m_destNameHasBeenSet;

                    /**
                     * 协议
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
                     * 端口模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * 端口模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramTemplateName;
                    bool m_paramTemplateNameHasBeenSet;

                    /**
                     * 动作：accept/drop/log
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 边界防火墙ID
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * 防火墙实例ID
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * 规则是否失效：0-有效，1-失效
                     */
                    int64_t m_invalid;
                    bool m_invalidHasBeenSet;

                    /**
                     * 规则归属的成员账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MemberInfo m_belongMember;
                    bool m_belongMemberHasBeenSet;

                    /**
                     * 规则创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 规则修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 域名数
                     */
                    int64_t m_dnsParseCnt;
                    bool m_dnsParseCntHasBeenSet;

                    /**
                     * 防火墙组名称
                     */
                    std::string m_fwGroupName;
                    bool m_fwGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_VPCACLRULERESP_H_
