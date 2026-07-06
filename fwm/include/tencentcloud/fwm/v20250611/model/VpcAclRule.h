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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_VPCACLRULE_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_VPCACLRULE_H_

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
                * VPC边界规则
                */
                class VpcAclRule : public AbstractModel
                {
                public:
                    VpcAclRule();
                    ~VpcAclRule() = default;
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
                     * 获取目的类型：ip/url/template/instance/tag
                     * @return DestType 目的类型：ip/url/template/instance/tag
                     * 
                     */
                    std::string GetDestType() const;

                    /**
                     * 设置目的类型：ip/url/template/instance/tag
                     * @param _destType 目的类型：ip/url/template/instance/tag
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
                     * 获取边界防火墙ID：ALL表示全局，CFWS-xxx表示指定边界
                     * @return EdgeId 边界防火墙ID：ALL表示全局，CFWS-xxx表示指定边界
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置边界防火墙ID：ALL表示全局，CFWS-xxx表示指定边界
                     * @param _edgeId 边界防火墙ID：ALL表示全局，CFWS-xxx表示指定边界
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
                     * 获取防火墙实例ID（规则生效范围）：ALL-全局生效，ccn-xxx-云联网实例，cfwg-xxx-防火墙组实例
                     * @return FwGroupId 防火墙实例ID（规则生效范围）：ALL-全局生效，ccn-xxx-云联网实例，cfwg-xxx-防火墙组实例
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置防火墙实例ID（规则生效范围）：ALL-全局生效，ccn-xxx-云联网实例，cfwg-xxx-防火墙组实例
                     * @param _fwGroupId 防火墙实例ID（规则生效范围）：ALL-全局生效，ccn-xxx-云联网实例，cfwg-xxx-防火墙组实例
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
                     * 获取规则ID（修改时必填）
                     * @return RuleId 规则ID（修改时必填）
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID（修改时必填）
                     * @param _ruleId 规则ID（修改时必填）
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
                     * @return Port 端口（ICMP协议时为空）
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口（ICMP协议时为空）
                     * @param _port 端口（ICMP协议时为空）
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
                     * @return Description 规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
                     * @param _description 规则描述
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
                     * @return ParamTemplateId 端口模板ID
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置端口模板ID
                     * @param _paramTemplateId 端口模板ID
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
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * 目的类型：ip/url/template/instance/tag
                     */
                    std::string m_destType;
                    bool m_destTypeHasBeenSet;

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
                     * 边界防火墙ID：ALL表示全局，CFWS-xxx表示指定边界
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * 防火墙实例ID（规则生效范围）：ALL-全局生效，ccn-xxx-云联网实例，cfwg-xxx-防火墙组实例
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * 规则ID（修改时必填）
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 端口（ICMP协议时为空）
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 端口模板ID
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

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

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_VPCACLRULE_H_
