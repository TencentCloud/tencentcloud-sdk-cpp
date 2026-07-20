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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWRULESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCfwRules请求参数结构体
                */
                class DescribeCfwRulesRequest : public AbstractModel
                {
                public:
                    DescribeCfwRulesRequest();
                    ~DescribeCfwRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则域。必填。枚举：border 互联网边界；nat NAT 边界；vpc VPC 间；enterprise_sg 企业安全组；intrusion_prevention 入侵防御。RuleType=intrusion_prevention 时还必须传 ListType。</p>
                     * @return RuleType <p>规则域。必填。枚举：border 互联网边界；nat NAT 边界；vpc VPC 间；enterprise_sg 企业安全组；intrusion_prevention 入侵防御。RuleType=intrusion_prevention 时还必须传 ListType。</p>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>规则域。必填。枚举：border 互联网边界；nat NAT 边界；vpc VPC 间；enterprise_sg 企业安全组；intrusion_prevention 入侵防御。RuleType=intrusion_prevention 时还必须传 ListType。</p>
                     * @param _ruleType <p>规则域。必填。枚举：border 互联网边界；nat NAT 边界；vpc VPC 间；enterprise_sg 企业安全组；intrusion_prevention 入侵防御。RuleType=intrusion_prevention 时还必须传 ListType。</p>
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>入侵防御列表类型。仅 RuleType=intrusion_prevention 时使用并必填。blocklist 表示封禁列表，whitelist 表示白名单策略，isolate 表示隔离列表。</p>
                     * @return ListType <p>入侵防御列表类型。仅 RuleType=intrusion_prevention 时使用并必填。blocklist 表示封禁列表，whitelist 表示白名单策略，isolate 表示隔离列表。</p>
                     * 
                     */
                    std::string GetListType() const;

                    /**
                     * 设置<p>入侵防御列表类型。仅 RuleType=intrusion_prevention 时使用并必填。blocklist 表示封禁列表，whitelist 表示白名单策略，isolate 表示隔离列表。</p>
                     * @param _listType <p>入侵防御列表类型。仅 RuleType=intrusion_prevention 时使用并必填。blocklist 表示封禁列表，whitelist 表示白名单策略，isolate 表示隔离列表。</p>
                     * 
                     */
                    void SetListType(const std::string& _listType);

                    /**
                     * 判断参数 ListType 是否已赋值
                     * @return ListType 是否已赋值
                     * 
                     */
                    bool ListTypeHasBeenSet() const;

                    /**
                     * 获取<p>访问方向过滤。可选。0 表示出站，1 表示入站；不传则不过滤。RuleType=intrusion_prevention 时不支持。</p>
                     * @return Direction <p>访问方向过滤。可选。0 表示出站，1 表示入站；不传则不过滤。RuleType=intrusion_prevention 时不支持。</p>
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置<p>访问方向过滤。可选。0 表示出站，1 表示入站；不传则不过滤。RuleType=intrusion_prevention 时不支持。</p>
                     * @param _direction <p>访问方向过滤。可选。0 表示出站，1 表示入站；不传则不过滤。RuleType=intrusion_prevention 时不支持。</p>
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
                     * 获取<p>规则动作过滤。可选。0 表示观察，1 表示阻断，2 表示放行；不传则不过滤。</p>
                     * @return RuleAction <p>规则动作过滤。可选。0 表示观察，1 表示阻断，2 表示放行；不传则不过滤。</p>
                     * 
                     */
                    int64_t GetRuleAction() const;

                    /**
                     * 设置<p>规则动作过滤。可选。0 表示观察，1 表示阻断，2 表示放行；不传则不过滤。</p>
                     * @param _ruleAction <p>规则动作过滤。可选。0 表示观察，1 表示阻断，2 表示放行；不传则不过滤。</p>
                     * 
                     */
                    void SetRuleAction(const int64_t& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取<p>启用状态过滤。可选。默认只返回启用规则；传 false 只查询禁用规则。</p>
                     * @return Enabled <p>启用状态过滤。可选。默认只返回启用规则；传 false 只查询禁用规则。</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>启用状态过滤。可选。默认只返回启用规则；传 false 只查询禁用规则。</p>
                     * @param _enabled <p>启用状态过滤。可选。默认只返回启用规则；传 false 只查询禁用规则。</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>是否同时包含启用和禁用规则。可选。true 表示包含两类；不能和 Enabled 同时使用。</p>
                     * @return IncludeDisabled <p>是否同时包含启用和禁用规则。可选。true 表示包含两类；不能和 Enabled 同时使用。</p>
                     * 
                     */
                    bool GetIncludeDisabled() const;

                    /**
                     * 设置<p>是否同时包含启用和禁用规则。可选。true 表示包含两类；不能和 Enabled 同时使用。</p>
                     * @param _includeDisabled <p>是否同时包含启用和禁用规则。可选。true 表示包含两类；不能和 Enabled 同时使用。</p>
                     * 
                     */
                    void SetIncludeDisabled(const bool& _includeDisabled);

                    /**
                     * 判断参数 IncludeDisabled 是否已赋值
                     * @return IncludeDisabled 是否已赋值
                     * 
                     */
                    bool IncludeDisabledHasBeenSet() const;

                    /**
                     * 获取<p>精确规则 ID 过滤。可选。用于按数值规则标识定位单条规则。</p>
                     * @return RuleId <p>精确规则 ID 过滤。可选。用于按数值规则标识定位单条规则。</p>
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置<p>精确规则 ID 过滤。可选。用于按数值规则标识定位单条规则。</p>
                     * @param _ruleId <p>精确规则 ID 过滤。可选。用于按数值规则标识定位单条规则。</p>
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>精确公开规则标识过滤。可选。推荐在用户提供规则标识时使用。</p>
                     * @return RuleUuid <p>精确公开规则标识过滤。可选。推荐在用户提供规则标识时使用。</p>
                     * 
                     */
                    std::string GetRuleUuid() const;

                    /**
                     * 设置<p>精确公开规则标识过滤。可选。推荐在用户提供规则标识时使用。</p>
                     * @param _ruleUuid <p>精确公开规则标识过滤。可选。推荐在用户提供规则标识时使用。</p>
                     * 
                     */
                    void SetRuleUuid(const std::string& _ruleUuid);

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     * 
                     */
                    bool RuleUuidHasBeenSet() const;

                    /**
                     * 获取<p>协议过滤。可选。例如 TCP、UDP、ICMP、HTTP、HTTPS、ANY；不传则不过滤。</p>
                     * @return Protocol <p>协议过滤。可选。例如 TCP、UDP、ICMP、HTTP、HTTPS、ANY；不传则不过滤。</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议过滤。可选。例如 TCP、UDP、ICMP、HTTP、HTTPS、ANY；不传则不过滤。</p>
                     * @param _protocol <p>协议过滤。可选。例如 TCP、UDP、ICMP、HTTP、HTTPS、ANY；不传则不过滤。</p>
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
                     * 获取<p>源地址或源内容关键字过滤。可选，支持模糊匹配。</p>
                     * @return SrcIp <p>源地址或源内容关键字过滤。可选，支持模糊匹配。</p>
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置<p>源地址或源内容关键字过滤。可选，支持模糊匹配。</p>
                     * @param _srcIp <p>源地址或源内容关键字过滤。可选，支持模糊匹配。</p>
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取<p>目的地址、目的域名或目的内容关键字过滤。可选，支持模糊匹配。</p>
                     * @return DstIp <p>目的地址、目的域名或目的内容关键字过滤。可选，支持模糊匹配。</p>
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置<p>目的地址、目的域名或目的内容关键字过滤。可选，支持模糊匹配。</p>
                     * @param _dstIp <p>目的地址、目的域名或目的内容关键字过滤。可选，支持模糊匹配。</p>
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取<p>规则描述关键字过滤。可选。</p>
                     * @return Description <p>规则描述关键字过滤。可选。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>规则描述关键字过滤。可选。</p>
                     * @param _description <p>规则描述关键字过滤。可选。</p>
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
                     * 获取<p>入侵防御列表关键字搜索。可选，最大 100 字符。blocklist 搜索 ioc/address/comment/rule_source；whitelist 搜索 rule_name/ioc/comment/src_ip/dst_ip；isolate 搜索实例、公网 IP、内网 IP、VPC、地域。</p>
                     * @return Keyword <p>入侵防御列表关键字搜索。可选，最大 100 字符。blocklist 搜索 ioc/address/comment/rule_source；whitelist 搜索 rule_name/ioc/comment/src_ip/dst_ip；isolate 搜索实例、公网 IP、内网 IP、VPC、地域。</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>入侵防御列表关键字搜索。可选，最大 100 字符。blocklist 搜索 ioc/address/comment/rule_source；whitelist 搜索 rule_name/ioc/comment/src_ip/dst_ip；isolate 搜索实例、公网 IP、内网 IP、VPC、地域。</p>
                     * @param _keyword <p>入侵防御列表关键字搜索。可选，最大 100 字符。blocklist 搜索 ioc/address/comment/rule_source；whitelist 搜索 rule_name/ioc/comment/src_ip/dst_ip；isolate 搜索实例、公网 IP、内网 IP、VPC、地域。</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>精确实例 ID 过滤。仅 RuleType=intrusion_prevention 且 ListType=isolate 时使用；写操作前后核验应使用该参数而不是 Keyword。</p>
                     * @return InstanceId <p>精确实例 ID 过滤。仅 RuleType=intrusion_prevention 且 ListType=isolate 时使用；写操作前后核验应使用该参数而不是 Keyword。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>精确实例 ID 过滤。仅 RuleType=intrusion_prevention 且 ListType=isolate 时使用；写操作前后核验应使用该参数而不是 Keyword。</p>
                     * @param _instanceId <p>精确实例 ID 过滤。仅 RuleType=intrusion_prevention 且 ListType=isolate 时使用；写操作前后核验应使用该参数而不是 Keyword。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>是否展开模板、资产组、实例等名称。可选，默认 true；传 false 返回原始标识。</p>
                     * @return ExpandNames <p>是否展开模板、资产组、实例等名称。可选，默认 true；传 false 返回原始标识。</p>
                     * 
                     */
                    bool GetExpandNames() const;

                    /**
                     * 设置<p>是否展开模板、资产组、实例等名称。可选，默认 true；传 false 返回原始标识。</p>
                     * @param _expandNames <p>是否展开模板、资产组、实例等名称。可选，默认 true；传 false 返回原始标识。</p>
                     * 
                     */
                    void SetExpandNames(const bool& _expandNames);

                    /**
                     * 判断参数 ExpandNames 是否已赋值
                     * @return ExpandNames 是否已赋值
                     * 
                     */
                    bool ExpandNamesHasBeenSet() const;

                    /**
                     * 获取<p>单页返回规则数。可选，默认 100，最大 1000。</p>
                     * @return Limit <p>单页返回规则数。可选，默认 100，最大 1000。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单页返回规则数。可选，默认 100，最大 1000。</p>
                     * @param _limit <p>单页返回规则数。可选，默认 100，最大 1000。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移。可选，默认 0。</p>
                     * @return Offset <p>分页偏移。可选，默认 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移。可选，默认 0。</p>
                     * @param _offset <p>分页偏移。可选，默认 0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>规则域。必填。枚举：border 互联网边界；nat NAT 边界；vpc VPC 间；enterprise_sg 企业安全组；intrusion_prevention 入侵防御。RuleType=intrusion_prevention 时还必须传 ListType。</p>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>入侵防御列表类型。仅 RuleType=intrusion_prevention 时使用并必填。blocklist 表示封禁列表，whitelist 表示白名单策略，isolate 表示隔离列表。</p>
                     */
                    std::string m_listType;
                    bool m_listTypeHasBeenSet;

                    /**
                     * <p>访问方向过滤。可选。0 表示出站，1 表示入站；不传则不过滤。RuleType=intrusion_prevention 时不支持。</p>
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>规则动作过滤。可选。0 表示观察，1 表示阻断，2 表示放行；不传则不过滤。</p>
                     */
                    int64_t m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * <p>启用状态过滤。可选。默认只返回启用规则；传 false 只查询禁用规则。</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>是否同时包含启用和禁用规则。可选。true 表示包含两类；不能和 Enabled 同时使用。</p>
                     */
                    bool m_includeDisabled;
                    bool m_includeDisabledHasBeenSet;

                    /**
                     * <p>精确规则 ID 过滤。可选。用于按数值规则标识定位单条规则。</p>
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>精确公开规则标识过滤。可选。推荐在用户提供规则标识时使用。</p>
                     */
                    std::string m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                    /**
                     * <p>协议过滤。可选。例如 TCP、UDP、ICMP、HTTP、HTTPS、ANY；不传则不过滤。</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>源地址或源内容关键字过滤。可选，支持模糊匹配。</p>
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * <p>目的地址、目的域名或目的内容关键字过滤。可选，支持模糊匹配。</p>
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * <p>规则描述关键字过滤。可选。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>入侵防御列表关键字搜索。可选，最大 100 字符。blocklist 搜索 ioc/address/comment/rule_source；whitelist 搜索 rule_name/ioc/comment/src_ip/dst_ip；isolate 搜索实例、公网 IP、内网 IP、VPC、地域。</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>精确实例 ID 过滤。仅 RuleType=intrusion_prevention 且 ListType=isolate 时使用；写操作前后核验应使用该参数而不是 Keyword。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>是否展开模板、资产组、实例等名称。可选，默认 true；传 false 返回原始标识。</p>
                     */
                    bool m_expandNames;
                    bool m_expandNamesHasBeenSet;

                    /**
                     * <p>单页返回规则数。可选，默认 100，最大 1000。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移。可选，默认 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWRULESREQUEST_H_
