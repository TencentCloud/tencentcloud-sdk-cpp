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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_VPCRULEITEM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_VPCRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/BetaInfoByACL.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * VPC边界访问控制规则参数结构，供新增和修改共用。修改时整条替换，省略的可写字段不会继承旧值；查询展示字段在新增和修改请求中均忽略。
                */
                class VpcRuleItem : public AbstractModel
                {
                public:
                    VpcRuleItem();
                    ~VpcRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则描述，不超过 100 个字符。新增时按请求值保存；修改时完整替换，不继承旧值。
                     * @return Description 规则描述，不超过 100 个字符。新增时按请求值保存；修改时完整替换，不继承旧值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述，不超过 100 个字符。新增时按请求值保存；修改时完整替换，不继承旧值。
                     * @param _description 规则描述，不超过 100 个字符。新增时按请求值保存；修改时完整替换，不继承旧值。
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
                     * 获取访问目的内容，由 DestType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；domain 接受合法域名的逗号分隔列表或单独的 *，最多 10 项，通配域名最多 5 级，段内通配域名还要求引擎支持对应能力；template 接受当前租户的地址模板标识并归一化为模板 UUID，IP 地址模板必须与 IpVersion 一致，域名地址模板按域名目的校验；dnsparse 接受单个非 IP 域名或当前租户的域名模板，可使用符合级数限制的 *. 前缀泛域名，但不接受单独的 * 或段内通配；domainiptwoverify 接受单个非 IP 精确域名或不含任何通配符的当前租户域名模板；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。归一化后的目的内容超过 1023 字节时请求失败。
                     * @return DestContent 访问目的内容，由 DestType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；domain 接受合法域名的逗号分隔列表或单独的 *，最多 10 项，通配域名最多 5 级，段内通配域名还要求引擎支持对应能力；template 接受当前租户的地址模板标识并归一化为模板 UUID，IP 地址模板必须与 IpVersion 一致，域名地址模板按域名目的校验；dnsparse 接受单个非 IP 域名或当前租户的域名模板，可使用符合级数限制的 *. 前缀泛域名，但不接受单独的 * 或段内通配；domainiptwoverify 接受单个非 IP 精确域名或不含任何通配符的当前租户域名模板；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。归一化后的目的内容超过 1023 字节时请求失败。
                     * 
                     */
                    std::string GetDestContent() const;

                    /**
                     * 设置访问目的内容，由 DestType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；domain 接受合法域名的逗号分隔列表或单独的 *，最多 10 项，通配域名最多 5 级，段内通配域名还要求引擎支持对应能力；template 接受当前租户的地址模板标识并归一化为模板 UUID，IP 地址模板必须与 IpVersion 一致，域名地址模板按域名目的校验；dnsparse 接受单个非 IP 域名或当前租户的域名模板，可使用符合级数限制的 *. 前缀泛域名，但不接受单独的 * 或段内通配；domainiptwoverify 接受单个非 IP 精确域名或不含任何通配符的当前租户域名模板；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。归一化后的目的内容超过 1023 字节时请求失败。
                     * @param _destContent 访问目的内容，由 DestType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；domain 接受合法域名的逗号分隔列表或单独的 *，最多 10 项，通配域名最多 5 级，段内通配域名还要求引擎支持对应能力；template 接受当前租户的地址模板标识并归一化为模板 UUID，IP 地址模板必须与 IpVersion 一致，域名地址模板按域名目的校验；dnsparse 接受单个非 IP 域名或当前租户的域名模板，可使用符合级数限制的 *. 前缀泛域名，但不接受单独的 * 或段内通配；domainiptwoverify 接受单个非 IP 精确域名或不含任何通配符的当前租户域名模板；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。归一化后的目的内容超过 1023 字节时请求失败。
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
                     * 获取访问目的类型，不区分大小写。net、ip 均表示 IP/CIDR，template 表示地址模板，instance 表示资产实例，group 表示资产分组，tag 表示资源标签，domain 表示 FQDN 匹配，dnsparse 表示宽松匹配：Host/SNI 与域名匹配，或目的 IP 属于该域名当前 DNS 解析结果，满足任一条件即命中；domainiptwoverify 表示严格匹配：上述两个条件必须同时满足。url 虽可被通用类型映射识别，但 VPC 目的内容不支持。地址模板和部分域名模式要求当前 VPC 防火墙引擎支持对应能力；类型及模板实际类型共同决定 DestContent 和 Protocol 的校验。
                     * @return DestType 访问目的类型，不区分大小写。net、ip 均表示 IP/CIDR，template 表示地址模板，instance 表示资产实例，group 表示资产分组，tag 表示资源标签，domain 表示 FQDN 匹配，dnsparse 表示宽松匹配：Host/SNI 与域名匹配，或目的 IP 属于该域名当前 DNS 解析结果，满足任一条件即命中；domainiptwoverify 表示严格匹配：上述两个条件必须同时满足。url 虽可被通用类型映射识别，但 VPC 目的内容不支持。地址模板和部分域名模式要求当前 VPC 防火墙引擎支持对应能力；类型及模板实际类型共同决定 DestContent 和 Protocol 的校验。
                     * 
                     */
                    std::string GetDestType() const;

                    /**
                     * 设置访问目的类型，不区分大小写。net、ip 均表示 IP/CIDR，template 表示地址模板，instance 表示资产实例，group 表示资产分组，tag 表示资源标签，domain 表示 FQDN 匹配，dnsparse 表示宽松匹配：Host/SNI 与域名匹配，或目的 IP 属于该域名当前 DNS 解析结果，满足任一条件即命中；domainiptwoverify 表示严格匹配：上述两个条件必须同时满足。url 虽可被通用类型映射识别，但 VPC 目的内容不支持。地址模板和部分域名模式要求当前 VPC 防火墙引擎支持对应能力；类型及模板实际类型共同决定 DestContent 和 Protocol 的校验。
                     * @param _destType 访问目的类型，不区分大小写。net、ip 均表示 IP/CIDR，template 表示地址模板，instance 表示资产实例，group 表示资产分组，tag 表示资源标签，domain 表示 FQDN 匹配，dnsparse 表示宽松匹配：Host/SNI 与域名匹配，或目的 IP 属于该域名当前 DNS 解析结果，满足任一条件即命中；domainiptwoverify 表示严格匹配：上述两个条件必须同时满足。url 虽可被通用类型映射识别，但 VPC 目的内容不支持。地址模板和部分域名模式要求当前 VPC 防火墙引擎支持对应能力；类型及模板实际类型共同决定 DestContent 和 Protocol 的校验。
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
                     * 获取规则生效的 VPC 边范围，不区分大小写。ALL 表示全部 VPC 边，cfws- 前缀表示指定 VPC 边；其它格式无效。ALL 要求当前环境支持 VPC 全局规则。
                     * @return EdgeId 规则生效的 VPC 边范围，不区分大小写。ALL 表示全部 VPC 边，cfws- 前缀表示指定 VPC 边；其它格式无效。ALL 要求当前环境支持 VPC 全局规则。
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置规则生效的 VPC 边范围，不区分大小写。ALL 表示全部 VPC 边，cfws- 前缀表示指定 VPC 边；其它格式无效。ALL 要求当前环境支持 VPC 全局规则。
                     * @param _edgeId 规则生效的 VPC 边范围，不区分大小写。ALL 表示全部 VPC 边，cfws- 前缀表示指定 VPC 边；其它格式无效。ALL 要求当前环境支持 VPC 全局规则。
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
                     * 获取规则状态，不区分大小写：true 表示启用，false 表示禁用。省略或为空时使用账号默认状态；没有可用默认值时启用。
                     * @return Enable 规则状态，不区分大小写：true 表示启用，false 表示禁用。省略或为空时使用账号默认状态；没有可用默认值时启用。
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置规则状态，不区分大小写：true 表示启用，false 表示禁用。省略或为空时使用账号默认状态；没有可用默认值时启用。
                     * @param _enable 规则状态，不区分大小写：true 表示启用，false 表示禁用。省略或为空时使用账号默认状态；没有可用默认值时启用。
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
                     * 获取规则在相同 IpVersion 下的顺序。-1 表示追加到末尾；正序号表示在对应位置插入并顺延后续规则。0、其它负数及超范围值不应使用。批量新增按 Rules 顺序依次处理。
                     * @return OrderIndex 规则在相同 IpVersion 下的顺序。-1 表示追加到末尾；正序号表示在对应位置插入并顺延后续规则。0、其它负数及超范围值不应使用。批量新增按 Rules 顺序依次处理。
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置规则在相同 IpVersion 下的顺序。-1 表示追加到末尾；正序号表示在对应位置插入并顺延后续规则。0、其它负数及超范围值不应使用。批量新增按 Rules 顺序依次处理。
                     * @param _orderIndex 规则在相同 IpVersion 下的顺序。-1 表示追加到末尾；正序号表示在对应位置插入并顺延后续规则。0、其它负数及超范围值不应使用。批量新增按 Rules 顺序依次处理。
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
                     * 获取访问端口。除 ICMP 和 ICMPV6 外，支持逗号分隔的正整数单端口或“起始/结束”范围，且起始值不大于结束值；-1/-1 表示全部端口。ICMP 和 ICMPV6 忽略该字段；FTP 仅支持单个正整数端口。
                     * @return Port 访问端口。除 ICMP 和 ICMPV6 外，支持逗号分隔的正整数单端口或“起始/结束”范围，且起始值不大于结束值；-1/-1 表示全部端口。ICMP 和 ICMPV6 忽略该字段；FTP 仅支持单个正整数端口。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置访问端口。除 ICMP 和 ICMPV6 外，支持逗号分隔的正整数单端口或“起始/结束”范围，且起始值不大于结束值；-1/-1 表示全部端口。ICMP 和 ICMPV6 忽略该字段；FTP 仅支持单个正整数端口。
                     * @param _port 访问端口。除 ICMP 和 ICMPV6 外，支持逗号分隔的正整数单端口或“起始/结束”范围，且起始值不大于结束值；-1/-1 表示全部端口。ICMP 和 ICMPV6 忽略该字段；FTP 仅支持单个正整数端口。
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
                     * 获取协议名称，不区分大小写并归一化。ANY 表示不限定协议，不表示省略 Protocol。IP、instance、tag、group 及 IP 地址模板目的支持 TCP、UDP、ICMP、ICMPV6、ANY 和 FTP，其中 FTP 只接受单端口；domain 及域名地址模板目的支持 ANY、HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS 和 DNS，不支持 FTP，domain、tls、ssl 归一化为 TLS/SSL；dnsparse 和 domainiptwoverify 仅支持 TCP 或 UDP。template 按查询到的实际模板类型应用上述限制；填写 ParamTemplateId 时，组内每个协议端口项还会应用相同的目的类型限制。
                     * @return Protocol 协议名称，不区分大小写并归一化。ANY 表示不限定协议，不表示省略 Protocol。IP、instance、tag、group 及 IP 地址模板目的支持 TCP、UDP、ICMP、ICMPV6、ANY 和 FTP，其中 FTP 只接受单端口；domain 及域名地址模板目的支持 ANY、HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS 和 DNS，不支持 FTP，domain、tls、ssl 归一化为 TLS/SSL；dnsparse 和 domainiptwoverify 仅支持 TCP 或 UDP。template 按查询到的实际模板类型应用上述限制；填写 ParamTemplateId 时，组内每个协议端口项还会应用相同的目的类型限制。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议名称，不区分大小写并归一化。ANY 表示不限定协议，不表示省略 Protocol。IP、instance、tag、group 及 IP 地址模板目的支持 TCP、UDP、ICMP、ICMPV6、ANY 和 FTP，其中 FTP 只接受单端口；domain 及域名地址模板目的支持 ANY、HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS 和 DNS，不支持 FTP，domain、tls、ssl 归一化为 TLS/SSL；dnsparse 和 domainiptwoverify 仅支持 TCP 或 UDP。template 按查询到的实际模板类型应用上述限制；填写 ParamTemplateId 时，组内每个协议端口项还会应用相同的目的类型限制。
                     * @param _protocol 协议名称，不区分大小写并归一化。ANY 表示不限定协议，不表示省略 Protocol。IP、instance、tag、group 及 IP 地址模板目的支持 TCP、UDP、ICMP、ICMPV6、ANY 和 FTP，其中 FTP 只接受单端口；domain 及域名地址模板目的支持 ANY、HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS 和 DNS，不支持 FTP，domain、tls、ssl 归一化为 TLS/SSL；dnsparse 和 domainiptwoverify 仅支持 TCP 或 UDP。template 按查询到的实际模板类型应用上述限制；填写 ParamTemplateId 时，组内每个协议端口项还会应用相同的目的类型限制。
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
                     * 获取流量通过云防火墙时的处理方式，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept 表示放行访问隔离资产的白名单流量，isolateindrop 表示阻断访问隔离资产的其它流量，isolateoutaccept 表示放行隔离资产访问白名单目标，isolateoutdrop 表示阻断隔离资产访问其它目标；其它值返回参数错误。
                     * @return RuleAction 流量通过云防火墙时的处理方式，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept 表示放行访问隔离资产的白名单流量，isolateindrop 表示阻断访问隔离资产的其它流量，isolateoutaccept 表示放行隔离资产访问白名单目标，isolateoutdrop 表示阻断隔离资产访问其它目标；其它值返回参数错误。
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置流量通过云防火墙时的处理方式，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept 表示放行访问隔离资产的白名单流量，isolateindrop 表示阻断访问隔离资产的其它流量，isolateoutaccept 表示放行隔离资产访问白名单目标，isolateoutdrop 表示阻断隔离资产访问其它目标；其它值返回参数错误。
                     * @param _ruleAction 流量通过云防火墙时的处理方式，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept 表示放行访问隔离资产的白名单流量，isolateindrop 表示阻断访问隔离资产的其它流量，isolateoutaccept 表示放行隔离资产访问白名单目标，isolateoutdrop 表示阻断隔离资产访问其它目标；其它值返回参数错误。
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
                     * 获取访问源内容，格式由 SourceType 决定：net/ip 使用最多 10 个逗号分隔的 IP 或 CIDR；template 使用当前账号且匹配 IpVersion 的 IP 地址模板 ID，不支持域名模板；instance、tag 必须属于当前账号，instance 须有对应 IpVersion 的私网地址；group 使用资源组 ID。
                     * @return SourceContent 访问源内容，格式由 SourceType 决定：net/ip 使用最多 10 个逗号分隔的 IP 或 CIDR；template 使用当前账号且匹配 IpVersion 的 IP 地址模板 ID，不支持域名模板；instance、tag 必须属于当前账号，instance 须有对应 IpVersion 的私网地址；group 使用资源组 ID。
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置访问源内容，格式由 SourceType 决定：net/ip 使用最多 10 个逗号分隔的 IP 或 CIDR；template 使用当前账号且匹配 IpVersion 的 IP 地址模板 ID，不支持域名模板；instance、tag 必须属于当前账号，instance 须有对应 IpVersion 的私网地址；group 使用资源组 ID。
                     * @param _sourceContent 访问源内容，格式由 SourceType 决定：net/ip 使用最多 10 个逗号分隔的 IP 或 CIDR；template 使用当前账号且匹配 IpVersion 的 IP 地址模板 ID，不支持域名模板；instance、tag 必须属于当前账号，instance 须有对应 IpVersion 的私网地址；group 使用资源组 ID。
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
                     * 获取访问源类型，不区分大小写：net、ip 均表示 IP/CIDR，template 表示地址模板，instance 表示资产实例，tag 表示资源标签，group 表示资产分组。类型及模板实际类型决定 SourceContent 的格式；template 要求当前环境支持地址模板。
                     * @return SourceType 访问源类型，不区分大小写：net、ip 均表示 IP/CIDR，template 表示地址模板，instance 表示资产实例，tag 表示资源标签，group 表示资产分组。类型及模板实际类型决定 SourceContent 的格式；template 要求当前环境支持地址模板。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置访问源类型，不区分大小写：net、ip 均表示 IP/CIDR，template 表示地址模板，instance 表示资产实例，tag 表示资源标签，group 表示资产分组。类型及模板实际类型决定 SourceContent 的格式；template 要求当前环境支持地址模板。
                     * @param _sourceType 访问源类型，不区分大小写：net、ip 均表示 IP/CIDR，template 表示地址模板，instance 表示资产实例，tag 表示资源标签，group 表示资产分组。类型及模板实际类型决定 SourceContent 的格式；template 要求当前环境支持地址模板。
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
                     * 获取规则关联的 beta 任务详情。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * @return BetaList 规则关联的 beta 任务详情。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * 
                     */
                    std::vector<BetaInfoByACL> GetBetaList() const;

                    /**
                     * 设置规则关联的 beta 任务详情。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * @param _betaList 规则关联的 beta 任务详情。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * 
                     */
                    void SetBetaList(const std::vector<BetaInfoByACL>& _betaList);

                    /**
                     * 判断参数 BetaList 是否已赋值
                     * @return BetaList 是否已赋值
                     * 
                     */
                    bool BetaListHasBeenSet() const;

                    /**
                     * 获取规则创建时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * @return CreateTime 规则创建时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置规则创建时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * @param _createTime 规则创建时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
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
                     * 获取规则删除标记，1 表示已删除，0 表示未删除。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * @return Deleted 规则删除标记，1 表示已删除，0 表示未删除。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * 
                     */
                    int64_t GetDeleted() const;

                    /**
                     * 设置规则删除标记，1 表示已删除，0 表示未删除。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * @param _deleted 规则删除标记，1 表示已删除，0 表示未删除。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * 
                     */
                    void SetDeleted(const int64_t& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取目的实际类型提示，例如区分 IP 地址模板和域名地址模板；新增和修改请求中忽略。
                     * @return DestValueType 目的实际类型提示，例如区分 IP 地址模板和域名地址模板；新增和修改请求中忽略。
                     * 
                     */
                    std::string GetDestValueType() const;

                    /**
                     * 设置目的实际类型提示，例如区分 IP 地址模板和域名地址模板；新增和修改请求中忽略。
                     * @param _destValueType 目的实际类型提示，例如区分 IP 地址模板和域名地址模板；新增和修改请求中忽略。
                     * 
                     */
                    void SetDestValueType(const std::string& _destValueType);

                    /**
                     * 判断参数 DestValueType 是否已赋值
                     * @return DestValueType 是否已赋值
                     * 
                     */
                    bool DestValueTypeHasBeenSet() const;

                    /**
                     * 获取规则命中次数。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * @return DetectedTimes 规则命中次数。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * 
                     */
                    int64_t GetDetectedTimes() const;

                    /**
                     * 设置规则命中次数。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * @param _detectedTimes 规则命中次数。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * 
                     */
                    void SetDetectedTimes(const int64_t& _detectedTimes);

                    /**
                     * 判断参数 DetectedTimes 是否已赋值
                     * @return DetectedTimes 是否已赋值
                     * 
                     */
                    bool DetectedTimesHasBeenSet() const;

                    /**
                     * 获取EdgeId 对应的 VPC 边名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * @return EdgeName EdgeId 对应的 VPC 边名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * 
                     */
                    std::string GetEdgeName() const;

                    /**
                     * 设置EdgeId 对应的 VPC 边名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * @param _edgeName EdgeId 对应的 VPC 边名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * 
                     */
                    void SetEdgeName(const std::string& _edgeName);

                    /**
                     * 判断参数 EdgeName 是否已赋值
                     * @return EdgeName 是否已赋值
                     * 
                     */
                    bool EdgeNameHasBeenSet() const;

                    /**
                     * 获取规则生效的防火墙组或 CCN 范围，不区分大小写。支持 ALL、cfwg- 前缀和 ccn- 前缀；省略、为空或格式无效时按 ALL 处理。
                     * @return FwGroupId 规则生效的防火墙组或 CCN 范围，不区分大小写。支持 ALL、cfwg- 前缀和 ccn- 前缀；省略、为空或格式无效时按 ALL 处理。
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置规则生效的防火墙组或 CCN 范围，不区分大小写。支持 ALL、cfwg- 前缀和 ccn- 前缀；省略、为空或格式无效时按 ALL 处理。
                     * @param _fwGroupId 规则生效的防火墙组或 CCN 范围，不区分大小写。支持 ALL、cfwg- 前缀和 ccn- 前缀；省略、为空或格式无效时按 ALL 处理。
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
                     * 获取防火墙组或 CCN 名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * @return FwGroupName 防火墙组或 CCN 名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * 
                     */
                    std::string GetFwGroupName() const;

                    /**
                     * 设置防火墙组或 CCN 名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * @param _fwGroupName 防火墙组或 CCN 名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * 
                     */
                    void SetFwGroupName(const std::string& _fwGroupName);

                    /**
                     * 判断参数 FwGroupName 是否已赋值
                     * @return FwGroupName 是否已赋值
                     * 
                     */
                    bool FwGroupNameHasBeenSet() const;

                    /**
                     * 获取覆盖导入规则标识。仅 batch_import_cover 接受正整数值；其它新增方式和修改请求中忽略。
                     * @return InternalUuid 覆盖导入规则标识。仅 batch_import_cover 接受正整数值；其它新增方式和修改请求中忽略。
                     * 
                     */
                    int64_t GetInternalUuid() const;

                    /**
                     * 设置覆盖导入规则标识。仅 batch_import_cover 接受正整数值；其它新增方式和修改请求中忽略。
                     * @param _internalUuid 覆盖导入规则标识。仅 batch_import_cover 接受正整数值；其它新增方式和修改请求中忽略。
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
                     * 获取查询结果中的规则有效性标记，0 表示有效，1 表示无效。请求中的该字段不参与新增或修改规则构造。
                     * @return Invalid 查询结果中的规则有效性标记，0 表示有效，1 表示无效。请求中的该字段不参与新增或修改规则构造。
                     * 
                     */
                    int64_t GetInvalid() const;

                    /**
                     * 设置查询结果中的规则有效性标记，0 表示有效，1 表示无效。请求中的该字段不参与新增或修改规则构造。
                     * @param _invalid 查询结果中的规则有效性标记，0 表示有效，1 表示无效。请求中的该字段不参与新增或修改规则构造。
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
                     * 获取IP 版本：0 表示 IPv4，1 表示 IPv6；省略或传入其它整数时按 IPv4 处理。instance 和 IP 地址模板须匹配该版本；直接填写的 net IP/CIDR 也应使用相同版本。
                     * @return IpVersion IP 版本：0 表示 IPv4，1 表示 IPv6；省略或传入其它整数时按 IPv4 处理。instance 和 IP 地址模板须匹配该版本；直接填写的 net IP/CIDR 也应使用相同版本。
                     * 
                     */
                    int64_t GetIpVersion() const;

                    /**
                     * 设置IP 版本：0 表示 IPv4，1 表示 IPv6；省略或传入其它整数时按 IPv4 处理。instance 和 IP 地址模板须匹配该版本；直接填写的 net IP/CIDR 也应使用相同版本。
                     * @param _ipVersion IP 版本：0 表示 IPv4，1 表示 IPv6；省略或传入其它整数时按 IPv4 处理。instance 和 IP 地址模板须匹配该版本；直接填写的 net IP/CIDR 也应使用相同版本。
                     * 
                     */
                    void SetIpVersion(const int64_t& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取端口协议组 ID。省略或为空时使用 Protocol 和 Port；非空时必须是当前账号可用的端口协议组，组内协议端口须满足目的类型限制。Protocol 和非 ICMP/ICMPV6 的 Port 仍须使用有效格式。
                     * @return ParamTemplateId 端口协议组 ID。省略或为空时使用 Protocol 和 Port；非空时必须是当前账号可用的端口协议组，组内协议端口须满足目的类型限制。Protocol 和非 ICMP/ICMPV6 的 Port 仍须使用有效格式。
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置端口协议组 ID。省略或为空时使用 Protocol 和 Port；非空时必须是当前账号可用的端口协议组，组内协议端口须满足目的类型限制。Protocol 和非 ICMP/ICMPV6 的 Port 仍须使用有效格式。
                     * @param _paramTemplateId 端口协议组 ID。省略或为空时使用 Protocol 和 Port；非空时必须是当前账号可用的端口协议组，组内协议端口须满足目的类型限制。Protocol 和非 ICMP/ICMPV6 的 Port 仍须使用有效格式。
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
                     * 获取端口协议组名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * @return ParamTemplateName 端口协议组名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * 
                     */
                    std::string GetParamTemplateName() const;

                    /**
                     * 设置端口协议组名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * @param _paramTemplateName 端口协议组名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
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
                     * 获取规则位置展示值：1 表示最前，2 表示中间，3 表示最后。新增和修改请求中忽略；仅位置为 2 的规则可修改。
                     * @return RulePartition 规则位置展示值：1 表示最前，2 表示中间，3 表示最后。新增和修改请求中忽略；仅位置为 2 的规则可修改。
                     * 
                     */
                    int64_t GetRulePartition() const;

                    /**
                     * 设置规则位置展示值：1 表示最前，2 表示中间，3 表示最后。新增和修改请求中忽略；仅位置为 2 的规则可修改。
                     * @param _rulePartition 规则位置展示值：1 表示最前，2 表示中间，3 表示最后。新增和修改请求中忽略；仅位置为 2 的规则可修改。
                     * 
                     */
                    void SetRulePartition(const int64_t& _rulePartition);

                    /**
                     * 判断参数 RulePartition 是否已赋值
                     * @return RulePartition 是否已赋值
                     * 
                     */
                    bool RulePartitionHasBeenSet() const;

                    /**
                     * 获取访问源名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * @return SourceName 访问源名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置访问源名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * @param _sourceName 访问源名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
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
                     * 获取访问目的名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * @return TargetName 访问目的名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置访问目的名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * @param _targetName 访问目的名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取规则最近更新时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * @return UpdateTime 规则最近更新时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置规则最近更新时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     * @param _updateTime 规则最近更新时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
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
                     * 获取规则 ID。修改时必须提供当前账号已有且可修改的正整数 Uuid，并完整替换该规则。普通新增、insert_rule 和 batch_import 忽略该字段；batch_import_cover 可使用正整数 ID，非正数值由系统分配。
                     * @return Uuid 规则 ID。修改时必须提供当前账号已有且可修改的正整数 Uuid，并完整替换该规则。普通新增、insert_rule 和 batch_import 忽略该字段；batch_import_cover 可使用正整数 ID，非正数值由系统分配。
                     * 
                     */
                    int64_t GetUuid() const;

                    /**
                     * 设置规则 ID。修改时必须提供当前账号已有且可修改的正整数 Uuid，并完整替换该规则。普通新增、insert_rule 和 batch_import 忽略该字段；batch_import_cover 可使用正整数 ID，非正数值由系统分配。
                     * @param _uuid 规则 ID。修改时必须提供当前账号已有且可修改的正整数 Uuid，并完整替换该规则。普通新增、insert_rule 和 batch_import 忽略该字段；batch_import_cover 可使用正整数 ID，非正数值由系统分配。
                     * 
                     */
                    void SetUuid(const int64_t& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * 规则描述，不超过 100 个字符。新增时按请求值保存；修改时完整替换，不继承旧值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 访问目的内容，由 DestType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；domain 接受合法域名的逗号分隔列表或单独的 *，最多 10 项，通配域名最多 5 级，段内通配域名还要求引擎支持对应能力；template 接受当前租户的地址模板标识并归一化为模板 UUID，IP 地址模板必须与 IpVersion 一致，域名地址模板按域名目的校验；dnsparse 接受单个非 IP 域名或当前租户的域名模板，可使用符合级数限制的 *. 前缀泛域名，但不接受单独的 * 或段内通配；domainiptwoverify 接受单个非 IP 精确域名或不含任何通配符的当前租户域名模板；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。归一化后的目的内容超过 1023 字节时请求失败。
                     */
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * 访问目的类型，不区分大小写。net、ip 均表示 IP/CIDR，template 表示地址模板，instance 表示资产实例，group 表示资产分组，tag 表示资源标签，domain 表示 FQDN 匹配，dnsparse 表示宽松匹配：Host/SNI 与域名匹配，或目的 IP 属于该域名当前 DNS 解析结果，满足任一条件即命中；domainiptwoverify 表示严格匹配：上述两个条件必须同时满足。url 虽可被通用类型映射识别，但 VPC 目的内容不支持。地址模板和部分域名模式要求当前 VPC 防火墙引擎支持对应能力；类型及模板实际类型共同决定 DestContent 和 Protocol 的校验。
                     */
                    std::string m_destType;
                    bool m_destTypeHasBeenSet;

                    /**
                     * 规则生效的 VPC 边范围，不区分大小写。ALL 表示全部 VPC 边，cfws- 前缀表示指定 VPC 边；其它格式无效。ALL 要求当前环境支持 VPC 全局规则。
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * 规则状态，不区分大小写：true 表示启用，false 表示禁用。省略或为空时使用账号默认状态；没有可用默认值时启用。
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 规则在相同 IpVersion 下的顺序。-1 表示追加到末尾；正序号表示在对应位置插入并顺延后续规则。0、其它负数及超范围值不应使用。批量新增按 Rules 顺序依次处理。
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 访问端口。除 ICMP 和 ICMPV6 外，支持逗号分隔的正整数单端口或“起始/结束”范围，且起始值不大于结束值；-1/-1 表示全部端口。ICMP 和 ICMPV6 忽略该字段；FTP 仅支持单个正整数端口。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 协议名称，不区分大小写并归一化。ANY 表示不限定协议，不表示省略 Protocol。IP、instance、tag、group 及 IP 地址模板目的支持 TCP、UDP、ICMP、ICMPV6、ANY 和 FTP，其中 FTP 只接受单端口；domain 及域名地址模板目的支持 ANY、HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS 和 DNS，不支持 FTP，domain、tls、ssl 归一化为 TLS/SSL；dnsparse 和 domainiptwoverify 仅支持 TCP 或 UDP。template 按查询到的实际模板类型应用上述限制；填写 ParamTemplateId 时，组内每个协议端口项还会应用相同的目的类型限制。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 流量通过云防火墙时的处理方式，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept 表示放行访问隔离资产的白名单流量，isolateindrop 表示阻断访问隔离资产的其它流量，isolateoutaccept 表示放行隔离资产访问白名单目标，isolateoutdrop 表示阻断隔离资产访问其它目标；其它值返回参数错误。
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 访问源内容，格式由 SourceType 决定：net/ip 使用最多 10 个逗号分隔的 IP 或 CIDR；template 使用当前账号且匹配 IpVersion 的 IP 地址模板 ID，不支持域名模板；instance、tag 必须属于当前账号，instance 须有对应 IpVersion 的私网地址；group 使用资源组 ID。
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 访问源类型，不区分大小写：net、ip 均表示 IP/CIDR，template 表示地址模板，instance 表示资产实例，tag 表示资源标签，group 表示资产分组。类型及模板实际类型决定 SourceContent 的格式；template 要求当前环境支持地址模板。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 规则关联的 beta 任务详情。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     */
                    std::vector<BetaInfoByACL> m_betaList;
                    bool m_betaListHasBeenSet;

                    /**
                     * 规则创建时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 规则删除标记，1 表示已删除，0 表示未删除。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     */
                    int64_t m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * 目的实际类型提示，例如区分 IP 地址模板和域名地址模板；新增和修改请求中忽略。
                     */
                    std::string m_destValueType;
                    bool m_destValueTypeHasBeenSet;

                    /**
                     * 规则命中次数。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     */
                    int64_t m_detectedTimes;
                    bool m_detectedTimesHasBeenSet;

                    /**
                     * EdgeId 对应的 VPC 边名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     */
                    std::string m_edgeName;
                    bool m_edgeNameHasBeenSet;

                    /**
                     * 规则生效的防火墙组或 CCN 范围，不区分大小写。支持 ALL、cfwg- 前缀和 ccn- 前缀；省略、为空或格式无效时按 ALL 处理。
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * 防火墙组或 CCN 名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     */
                    std::string m_fwGroupName;
                    bool m_fwGroupNameHasBeenSet;

                    /**
                     * 覆盖导入规则标识。仅 batch_import_cover 接受正整数值；其它新增方式和修改请求中忽略。
                     */
                    int64_t m_internalUuid;
                    bool m_internalUuidHasBeenSet;

                    /**
                     * 查询结果中的规则有效性标记，0 表示有效，1 表示无效。请求中的该字段不参与新增或修改规则构造。
                     */
                    int64_t m_invalid;
                    bool m_invalidHasBeenSet;

                    /**
                     * IP 版本：0 表示 IPv4，1 表示 IPv6；省略或传入其它整数时按 IPv4 处理。instance 和 IP 地址模板须匹配该版本；直接填写的 net IP/CIDR 也应使用相同版本。
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * 端口协议组 ID。省略或为空时使用 Protocol 和 Port；非空时必须是当前账号可用的端口协议组，组内协议端口须满足目的类型限制。Protocol 和非 ICMP/ICMPV6 的 Port 仍须使用有效格式。
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * 端口协议组名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     */
                    std::string m_paramTemplateName;
                    bool m_paramTemplateNameHasBeenSet;

                    /**
                     * 规则位置展示值：1 表示最前，2 表示中间，3 表示最后。新增和修改请求中忽略；仅位置为 2 的规则可修改。
                     */
                    int64_t m_rulePartition;
                    bool m_rulePartitionHasBeenSet;

                    /**
                     * 访问源名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 访问目的名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * 规则最近更新时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 规则 ID。修改时必须提供当前账号已有且可修改的正整数 Uuid，并完整替换该规则。普通新增、insert_rule 和 batch_import 忽略该字段；batch_import_cover 可使用正整数 ID，非正数值由系统分配。
                     */
                    int64_t m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCRULEITEM_H_
