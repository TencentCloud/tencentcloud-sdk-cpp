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
                * VPC 内网间访问控制规则。新增和修改均根据请求中的源、目的、协议、动作、端口、顺序、状态、生效范围、IP 版本和模板等配置字段重新构造规则；修改是整条替换而不是局部更新。命中信息、名称、时间及其它查询展示字段不参与规则构造。
                */
                class VpcRuleItem : public AbstractModel
                {
                public:
                    VpcRuleItem();
                    ~VpcRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则描述。新增和修改按请求中的字符串保存。</p>
                     * @return Description <p>规则描述。新增和修改按请求中的字符串保存。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>规则描述。新增和修改按请求中的字符串保存。</p>
                     * @param _description <p>规则描述。新增和修改按请求中的字符串保存。</p>
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
                     * 获取<p>访问目的内容，由 DestType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；domain 接受合法域名的逗号分隔列表或单独的 *，最多 10 项，通配域名最多 5 级，段内通配域名还要求引擎支持对应能力；template 接受当前租户的地址模板标识并归一化为模板 UUID，IP 地址模板必须与 IpVersion 一致，域名地址模板按域名目的校验；dnsparse 接受单个非 IP 域名或当前租户的域名模板，可使用符合级数限制的 *. 前缀泛域名，但不接受单独的 * 或段内通配；domainiptwoverify 接受单个非 IP 精确域名或不含任何通配符的当前租户域名模板；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。location 会校验地域代码，但解析出的地域代码未写入 VPC 规则且目的内容保存为空；vendor 会校验厂商名称并将其归一化代码写入目的内容。归一化后的目的内容超过 1023 字节时请求失败。</p>
                     * @return DestContent <p>访问目的内容，由 DestType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；domain 接受合法域名的逗号分隔列表或单独的 *，最多 10 项，通配域名最多 5 级，段内通配域名还要求引擎支持对应能力；template 接受当前租户的地址模板标识并归一化为模板 UUID，IP 地址模板必须与 IpVersion 一致，域名地址模板按域名目的校验；dnsparse 接受单个非 IP 域名或当前租户的域名模板，可使用符合级数限制的 *. 前缀泛域名，但不接受单独的 * 或段内通配；domainiptwoverify 接受单个非 IP 精确域名或不含任何通配符的当前租户域名模板；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。location 会校验地域代码，但解析出的地域代码未写入 VPC 规则且目的内容保存为空；vendor 会校验厂商名称并将其归一化代码写入目的内容。归一化后的目的内容超过 1023 字节时请求失败。</p>
                     * 
                     */
                    std::string GetDestContent() const;

                    /**
                     * 设置<p>访问目的内容，由 DestType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；domain 接受合法域名的逗号分隔列表或单独的 *，最多 10 项，通配域名最多 5 级，段内通配域名还要求引擎支持对应能力；template 接受当前租户的地址模板标识并归一化为模板 UUID，IP 地址模板必须与 IpVersion 一致，域名地址模板按域名目的校验；dnsparse 接受单个非 IP 域名或当前租户的域名模板，可使用符合级数限制的 *. 前缀泛域名，但不接受单独的 * 或段内通配；domainiptwoverify 接受单个非 IP 精确域名或不含任何通配符的当前租户域名模板；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。location 会校验地域代码，但解析出的地域代码未写入 VPC 规则且目的内容保存为空；vendor 会校验厂商名称并将其归一化代码写入目的内容。归一化后的目的内容超过 1023 字节时请求失败。</p>
                     * @param _destContent <p>访问目的内容，由 DestType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；domain 接受合法域名的逗号分隔列表或单独的 *，最多 10 项，通配域名最多 5 级，段内通配域名还要求引擎支持对应能力；template 接受当前租户的地址模板标识并归一化为模板 UUID，IP 地址模板必须与 IpVersion 一致，域名地址模板按域名目的校验；dnsparse 接受单个非 IP 域名或当前租户的域名模板，可使用符合级数限制的 *. 前缀泛域名，但不接受单独的 * 或段内通配；domainiptwoverify 接受单个非 IP 精确域名或不含任何通配符的当前租户域名模板；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。location 会校验地域代码，但解析出的地域代码未写入 VPC 规则且目的内容保存为空；vendor 会校验厂商名称并将其归一化代码写入目的内容。归一化后的目的内容超过 1023 字节时请求失败。</p>
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
                     * 获取<p>访问目的类型，不区分大小写。VPC 规则可用 net（ip 为同义值）、domain、template、dnsparse、domainiptwoverify、instance、tag、group、location 或 vendor；url 虽可被通用类型映射识别，但 VPC 出向内容解析不支持。地址模板、dnsparse、domainiptwoverify、严格模式域名模板和段内通配域名分别要求当前 VPC 防火墙引擎支持对应能力，否则返回 UnsupportedOperation。类型及地址模板查询到的实际类型共同决定 DestContent 和 Protocol 的校验。</p>
                     * @return DestType <p>访问目的类型，不区分大小写。VPC 规则可用 net（ip 为同义值）、domain、template、dnsparse、domainiptwoverify、instance、tag、group、location 或 vendor；url 虽可被通用类型映射识别，但 VPC 出向内容解析不支持。地址模板、dnsparse、domainiptwoverify、严格模式域名模板和段内通配域名分别要求当前 VPC 防火墙引擎支持对应能力，否则返回 UnsupportedOperation。类型及地址模板查询到的实际类型共同决定 DestContent 和 Protocol 的校验。</p>
                     * 
                     */
                    std::string GetDestType() const;

                    /**
                     * 设置<p>访问目的类型，不区分大小写。VPC 规则可用 net（ip 为同义值）、domain、template、dnsparse、domainiptwoverify、instance、tag、group、location 或 vendor；url 虽可被通用类型映射识别，但 VPC 出向内容解析不支持。地址模板、dnsparse、domainiptwoverify、严格模式域名模板和段内通配域名分别要求当前 VPC 防火墙引擎支持对应能力，否则返回 UnsupportedOperation。类型及地址模板查询到的实际类型共同决定 DestContent 和 Protocol 的校验。</p>
                     * @param _destType <p>访问目的类型，不区分大小写。VPC 规则可用 net（ip 为同义值）、domain、template、dnsparse、domainiptwoverify、instance、tag、group、location 或 vendor；url 虽可被通用类型映射识别，但 VPC 出向内容解析不支持。地址模板、dnsparse、domainiptwoverify、严格模式域名模板和段内通配域名分别要求当前 VPC 防火墙引擎支持对应能力，否则返回 UnsupportedOperation。类型及地址模板查询到的实际类型共同决定 DestContent 和 Protocol 的校验。</p>
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
                     * 获取<p>规则生效的 VPC 边范围，不区分大小写。ALL 表示全部 VPC 间，cfws- 前缀表示指定 VPC 边；其它格式返回参数错误。ALL 还要求相关 VPC 防火墙引擎支持全局规则，否则返回 UnsupportedOperation。</p>
                     * @return EdgeId <p>规则生效的 VPC 边范围，不区分大小写。ALL 表示全部 VPC 间，cfws- 前缀表示指定 VPC 边；其它格式返回参数错误。ALL 还要求相关 VPC 防火墙引擎支持全局规则，否则返回 UnsupportedOperation。</p>
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置<p>规则生效的 VPC 边范围，不区分大小写。ALL 表示全部 VPC 间，cfws- 前缀表示指定 VPC 边；其它格式返回参数错误。ALL 还要求相关 VPC 防火墙引擎支持全局规则，否则返回 UnsupportedOperation。</p>
                     * @param _edgeId <p>规则生效的 VPC 边范围，不区分大小写。ALL 表示全部 VPC 间，cfws- 前缀表示指定 VPC 边；其它格式返回参数错误。ALL 还要求相关 VPC 防火墙引擎支持全局规则，否则返回 UnsupportedOperation。</p>
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
                     * 获取<p>规则状态。字符串 true 表示启用，false 表示禁用，大小写不敏感；省略或传空字符串时使用租户通知配置中的默认规则状态，该配置没有可用值时默认启用；其它字符串返回参数错误。</p>
                     * @return Enable <p>规则状态。字符串 true 表示启用，false 表示禁用，大小写不敏感；省略或传空字符串时使用租户通知配置中的默认规则状态，该配置没有可用值时默认启用；其它字符串返回参数错误。</p>
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置<p>规则状态。字符串 true 表示启用，false 表示禁用，大小写不敏感；省略或传空字符串时使用租户通知配置中的默认规则状态，该配置没有可用值时默认启用；其它字符串返回参数错误。</p>
                     * @param _enable <p>规则状态。字符串 true 表示启用，false 表示禁用，大小写不敏感；省略或传空字符串时使用租户通知配置中的默认规则状态，该配置没有可用值时默认启用；其它字符串返回参数错误。</p>
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
                     * 获取<p>规则在相同 IpVersion 的中间分区内的顺序。请求整数先转换为 uint32，0 归一化为 1，负整数及超出 uint32 范围的整数按该转换结果处理；写入时，顺序为 1 或不大于当前最大顺序的规则在该位置插入并将现有规则后移，通常大于当前最大顺序的值归一化为末尾。例外是 AddVpcAcRule 未使用精确值 insert_rule 且首条规则解析后的顺序为 1 时，本批每条规则都保留其解析后顺序并按该值移动现有规则，因此后续规则即使大于当前最大顺序也不会归一化为末尾。</p>
                     * @return OrderIndex <p>规则在相同 IpVersion 的中间分区内的顺序。请求整数先转换为 uint32，0 归一化为 1，负整数及超出 uint32 范围的整数按该转换结果处理；写入时，顺序为 1 或不大于当前最大顺序的规则在该位置插入并将现有规则后移，通常大于当前最大顺序的值归一化为末尾。例外是 AddVpcAcRule 未使用精确值 insert_rule 且首条规则解析后的顺序为 1 时，本批每条规则都保留其解析后顺序并按该值移动现有规则，因此后续规则即使大于当前最大顺序也不会归一化为末尾。</p>
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置<p>规则在相同 IpVersion 的中间分区内的顺序。请求整数先转换为 uint32，0 归一化为 1，负整数及超出 uint32 范围的整数按该转换结果处理；写入时，顺序为 1 或不大于当前最大顺序的规则在该位置插入并将现有规则后移，通常大于当前最大顺序的值归一化为末尾。例外是 AddVpcAcRule 未使用精确值 insert_rule 且首条规则解析后的顺序为 1 时，本批每条规则都保留其解析后顺序并按该值移动现有规则，因此后续规则即使大于当前最大顺序也不会归一化为末尾。</p>
                     * @param _orderIndex <p>规则在相同 IpVersion 的中间分区内的顺序。请求整数先转换为 uint32，0 归一化为 1，负整数及超出 uint32 范围的整数按该转换结果处理；写入时，顺序为 1 或不大于当前最大顺序的规则在该位置插入并将现有规则后移，通常大于当前最大顺序的值归一化为末尾。例外是 AddVpcAcRule 未使用精确值 insert_rule 且首条规则解析后的顺序为 1 时，本批每条规则都保留其解析后顺序并按该值移动现有规则，因此后续规则即使大于当前最大顺序也不会归一化为末尾。</p>
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
                     * 获取<p>访问控制策略的端口。除 ICMP 和 ICMPV6 外，该字段按逗号拆分；每项可以是正整数单端口，或以斜杠分隔且起点不大于终点的两个整数，-1/-1 表示全部端口。ICMP 和 ICMPV6 忽略请求值并保存为空字符串；其它协议的空值或非法格式返回参数错误。FTP 只接受正整数单端口，不接受逗号组合或斜杠区间。</p>
                     * @return Port <p>访问控制策略的端口。除 ICMP 和 ICMPV6 外，该字段按逗号拆分；每项可以是正整数单端口，或以斜杠分隔且起点不大于终点的两个整数，-1/-1 表示全部端口。ICMP 和 ICMPV6 忽略请求值并保存为空字符串；其它协议的空值或非法格式返回参数错误。FTP 只接受正整数单端口，不接受逗号组合或斜杠区间。</p>
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>访问控制策略的端口。除 ICMP 和 ICMPV6 外，该字段按逗号拆分；每项可以是正整数单端口，或以斜杠分隔且起点不大于终点的两个整数，-1/-1 表示全部端口。ICMP 和 ICMPV6 忽略请求值并保存为空字符串；其它协议的空值或非法格式返回参数错误。FTP 只接受正整数单端口，不接受逗号组合或斜杠区间。</p>
                     * @param _port <p>访问控制策略的端口。除 ICMP 和 ICMPV6 外，该字段按逗号拆分；每项可以是正整数单端口，或以斜杠分隔且起点不大于终点的两个整数，-1/-1 表示全部端口。ICMP 和 ICMPV6 忽略请求值并保存为空字符串；其它协议的空值或非法格式返回参数错误。FTP 只接受正整数单端口，不接受逗号组合或斜杠区间。</p>
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
                     * 获取<p>协议名称，不区分大小写并归一化。IP、instance、tag、group、location、vendor 及 IP 地址模板目的支持 TCP、UDP、ICMP、ICMPV6、ANY 和 FTP，其中 FTP 只接受单端口；domain 及域名地址模板目的支持 ANY、HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS 和 DNS，不支持 FTP，domain、tls、ssl 归一化为 TLS/SSL；dnsparse 和 domainiptwoverify 仅支持 TCP 或 UDP。template 按查询到的实际模板类型应用上述限制；填写 ParamTemplateId 时，组内每个协议端口项还会应用相同的目的类型限制。</p>
                     * @return Protocol <p>协议名称，不区分大小写并归一化。IP、instance、tag、group、location、vendor 及 IP 地址模板目的支持 TCP、UDP、ICMP、ICMPV6、ANY 和 FTP，其中 FTP 只接受单端口；domain 及域名地址模板目的支持 ANY、HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS 和 DNS，不支持 FTP，domain、tls、ssl 归一化为 TLS/SSL；dnsparse 和 domainiptwoverify 仅支持 TCP 或 UDP。template 按查询到的实际模板类型应用上述限制；填写 ParamTemplateId 时，组内每个协议端口项还会应用相同的目的类型限制。</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议名称，不区分大小写并归一化。IP、instance、tag、group、location、vendor 及 IP 地址模板目的支持 TCP、UDP、ICMP、ICMPV6、ANY 和 FTP，其中 FTP 只接受单端口；domain 及域名地址模板目的支持 ANY、HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS 和 DNS，不支持 FTP，domain、tls、ssl 归一化为 TLS/SSL；dnsparse 和 domainiptwoverify 仅支持 TCP 或 UDP。template 按查询到的实际模板类型应用上述限制；填写 ParamTemplateId 时，组内每个协议端口项还会应用相同的目的类型限制。</p>
                     * @param _protocol <p>协议名称，不区分大小写并归一化。IP、instance、tag、group、location、vendor 及 IP 地址模板目的支持 TCP、UDP、ICMP、ICMPV6、ANY 和 FTP，其中 FTP 只接受单端口；domain 及域名地址模板目的支持 ANY、HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS 和 DNS，不支持 FTP，domain、tls、ssl 归一化为 TLS/SSL；dnsparse 和 domainiptwoverify 仅支持 TCP 或 UDP。template 按查询到的实际模板类型应用上述限制；填写 ParamTemplateId 时，组内每个协议端口项还会应用相同的目的类型限制。</p>
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
                     * 获取<p>流量通过云防火墙时的处理方式，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept 和 isolateoutaccept 归一化为放行，isolateindrop 和 isolateoutdrop 归一化为拒绝；其它值返回参数错误。</p>
                     * @return RuleAction <p>流量通过云防火墙时的处理方式，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept 和 isolateoutaccept 归一化为放行，isolateindrop 和 isolateoutdrop 归一化为拒绝；其它值返回参数错误。</p>
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置<p>流量通过云防火墙时的处理方式，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept 和 isolateoutaccept 归一化为放行，isolateindrop 和 isolateoutdrop 归一化为拒绝；其它值返回参数错误。</p>
                     * @param _ruleAction <p>流量通过云防火墙时的处理方式，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept 和 isolateoutaccept 归一化为放行，isolateindrop 和 isolateoutdrop 归一化为拒绝；其它值返回参数错误。</p>
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
                     * 获取<p>访问源内容，由 SourceType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；template 接受当前租户的地址模板标识并归一化为模板 UUID，只允许与 IpVersion 一致的 IP 地址模板，域名地址模板不能作为访问源；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。</p>
                     * @return SourceContent <p>访问源内容，由 SourceType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；template 接受当前租户的地址模板标识并归一化为模板 UUID，只允许与 IpVersion 一致的 IP 地址模板，域名地址模板不能作为访问源；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。</p>
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置<p>访问源内容，由 SourceType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；template 接受当前租户的地址模板标识并归一化为模板 UUID，只允许与 IpVersion 一致的 IP 地址模板，域名地址模板不能作为访问源；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。</p>
                     * @param _sourceContent <p>访问源内容，由 SourceType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；template 接受当前租户的地址模板标识并归一化为模板 UUID，只允许与 IpVersion 一致的 IP 地址模板，域名地址模板不能作为访问源；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。</p>
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
                     * 获取<p>访问源类型，不区分大小写。VPC 规则可用 net（ip 为同义值）、template、instance、tag 或 group；url、location 和 vendor 虽可被通用类型映射识别，但 VPC 出向源内容解析不支持。使用 template 要求当前 VPC 防火墙引擎支持地址模板能力。类型及模板查询到的实际类型共同决定 SourceContent 的校验。</p>
                     * @return SourceType <p>访问源类型，不区分大小写。VPC 规则可用 net（ip 为同义值）、template、instance、tag 或 group；url、location 和 vendor 虽可被通用类型映射识别，但 VPC 出向源内容解析不支持。使用 template 要求当前 VPC 防火墙引擎支持地址模板能力。类型及模板查询到的实际类型共同决定 SourceContent 的校验。</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>访问源类型，不区分大小写。VPC 规则可用 net（ip 为同义值）、template、instance、tag 或 group；url、location 和 vendor 虽可被通用类型映射识别，但 VPC 出向源内容解析不支持。使用 template 要求当前 VPC 防火墙引擎支持地址模板能力。类型及模板查询到的实际类型共同决定 SourceContent 的校验。</p>
                     * @param _sourceType <p>访问源类型，不区分大小写。VPC 规则可用 net（ip 为同义值）、template、instance、tag 或 group；url、location 和 vendor 虽可被通用类型映射识别，但 VPC 出向源内容解析不支持。使用 template 要求当前 VPC 防火墙引擎支持地址模板能力。类型及模板查询到的实际类型共同决定 SourceContent 的校验。</p>
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
                     * 获取<p>规则关联的 beta 任务详情。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * @return BetaList <p>规则关联的 beta 任务详情。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * 
                     */
                    std::vector<BetaInfoByACL> GetBetaList() const;

                    /**
                     * 设置<p>规则关联的 beta 任务详情。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * @param _betaList <p>规则关联的 beta 任务详情。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
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
                     * 获取<p>规则创建时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * @return CreateTime <p>规则创建时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>规则创建时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * @param _createTime <p>规则创建时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
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
                     * 获取<p>规则删除标记，1 表示已删除，0 表示未删除。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * @return Deleted <p>规则删除标记，1 表示已删除，0 表示未删除。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * 
                     */
                    int64_t GetDeleted() const;

                    /**
                     * 设置<p>规则删除标记，1 表示已删除，0 表示未删除。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * @param _deleted <p>规则删除标记，1 表示已删除，0 表示未删除。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
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
                     * 获取<p>查询结果中对目的实际类型的补充提示，例如 template 可区分 IP 地址模板和域名地址模板。新增和修改处理程序不读取请求中的该字段；实际目的类型由 DestType、DestContent 和模板查询结果确定。</p>
                     * @return DestValueType <p>查询结果中对目的实际类型的补充提示，例如 template 可区分 IP 地址模板和域名地址模板。新增和修改处理程序不读取请求中的该字段；实际目的类型由 DestType、DestContent 和模板查询结果确定。</p>
                     * 
                     */
                    std::string GetDestValueType() const;

                    /**
                     * 设置<p>查询结果中对目的实际类型的补充提示，例如 template 可区分 IP 地址模板和域名地址模板。新增和修改处理程序不读取请求中的该字段；实际目的类型由 DestType、DestContent 和模板查询结果确定。</p>
                     * @param _destValueType <p>查询结果中对目的实际类型的补充提示，例如 template 可区分 IP 地址模板和域名地址模板。新增和修改处理程序不读取请求中的该字段；实际目的类型由 DestType、DestContent 和模板查询结果确定。</p>
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
                     * 获取<p>规则命中次数。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * @return DetectedTimes <p>规则命中次数。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * 
                     */
                    int64_t GetDetectedTimes() const;

                    /**
                     * 设置<p>规则命中次数。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * @param _detectedTimes <p>规则命中次数。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
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
                     * 获取<p>EdgeId 对应的 VPC 边名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     * @return EdgeName <p>EdgeId 对应的 VPC 边名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     * 
                     */
                    std::string GetEdgeName() const;

                    /**
                     * 设置<p>EdgeId 对应的 VPC 边名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     * @param _edgeName <p>EdgeId 对应的 VPC 边名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
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
                     * 获取<p>规则生效的防火墙组或 CCN 范围，格式比较不区分大小写。ALL 归一化为大写 ALL；cfwg- 前缀和 ccn- 前缀的值保留请求原文；省略、空字符串或其它格式归一化为 ALL，处理程序不因格式无效而返回错误。</p>
                     * @return FwGroupId <p>规则生效的防火墙组或 CCN 范围，格式比较不区分大小写。ALL 归一化为大写 ALL；cfwg- 前缀和 ccn- 前缀的值保留请求原文；省略、空字符串或其它格式归一化为 ALL，处理程序不因格式无效而返回错误。</p>
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置<p>规则生效的防火墙组或 CCN 范围，格式比较不区分大小写。ALL 归一化为大写 ALL；cfwg- 前缀和 ccn- 前缀的值保留请求原文；省略、空字符串或其它格式归一化为 ALL，处理程序不因格式无效而返回错误。</p>
                     * @param _fwGroupId <p>规则生效的防火墙组或 CCN 范围，格式比较不区分大小写。ALL 归一化为大写 ALL；cfwg- 前缀和 ccn- 前缀的值保留请求原文；省略、空字符串或其它格式归一化为 ALL，处理程序不因格式无效而返回错误。</p>
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
                     * 获取<p>防火墙组或 CCN 名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     * @return FwGroupName <p>防火墙组或 CCN 名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     * 
                     */
                    std::string GetFwGroupName() const;

                    /**
                     * 设置<p>防火墙组或 CCN 名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     * @param _fwGroupName <p>防火墙组或 CCN 名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
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
                     * 获取<p>内部规则标识。AddVpcAcRule 的精确 batch_import_cover 分支会采用正整数 InternalUuid 替换自动生成的内部标识；其它新增分支和 ModifyVpcAcRule 不读取请求中的该字段。</p>
                     * @return InternalUuid <p>内部规则标识。AddVpcAcRule 的精确 batch_import_cover 分支会采用正整数 InternalUuid 替换自动生成的内部标识；其它新增分支和 ModifyVpcAcRule 不读取请求中的该字段。</p>
                     * 
                     */
                    int64_t GetInternalUuid() const;

                    /**
                     * 设置<p>内部规则标识。AddVpcAcRule 的精确 batch_import_cover 分支会采用正整数 InternalUuid 替换自动生成的内部标识；其它新增分支和 ModifyVpcAcRule 不读取请求中的该字段。</p>
                     * @param _internalUuid <p>内部规则标识。AddVpcAcRule 的精确 batch_import_cover 分支会采用正整数 InternalUuid 替换自动生成的内部标识；其它新增分支和 ModifyVpcAcRule 不读取请求中的该字段。</p>
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
                     * 获取<p>查询结果中的规则有效性标记，0 表示有效，1 表示无效。请求中的该字段不参与新增或修改规则构造。</p>
                     * @return Invalid <p>查询结果中的规则有效性标记，0 表示有效，1 表示无效。请求中的该字段不参与新增或修改规则构造。</p>
                     * 
                     */
                    int64_t GetInvalid() const;

                    /**
                     * 设置<p>查询结果中的规则有效性标记，0 表示有效，1 表示无效。请求中的该字段不参与新增或修改规则构造。</p>
                     * @param _invalid <p>查询结果中的规则有效性标记，0 表示有效，1 表示无效。请求中的该字段不参与新增或修改规则构造。</p>
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
                     * 获取<p>IP 版本，0 表示 IPv4，1 表示 IPv6。省略或传入 0、1 以外的整数时按 IPv4 处理；instance 必须具有对应版本的私网地址，IP 地址模板必须与解析后的版本一致。处理程序不使用该字段校验直接填写的 net IP/CIDR 版本。</p>
                     * @return IpVersion <p>IP 版本，0 表示 IPv4，1 表示 IPv6。省略或传入 0、1 以外的整数时按 IPv4 处理；instance 必须具有对应版本的私网地址，IP 地址模板必须与解析后的版本一致。处理程序不使用该字段校验直接填写的 net IP/CIDR 版本。</p>
                     * 
                     */
                    int64_t GetIpVersion() const;

                    /**
                     * 设置<p>IP 版本，0 表示 IPv4，1 表示 IPv6。省略或传入 0、1 以外的整数时按 IPv4 处理；instance 必须具有对应版本的私网地址，IP 地址模板必须与解析后的版本一致。处理程序不使用该字段校验直接填写的 net IP/CIDR 版本。</p>
                     * @param _ipVersion <p>IP 版本，0 表示 IPv4，1 表示 IPv6。省略或传入 0、1 以外的整数时按 IPv4 处理；instance 必须具有对应版本的私网地址，IP 地址模板必须与解析后的版本一致。处理程序不使用该字段校验直接填写的 net IP/CIDR 版本。</p>
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
                     * 获取<p>端口协议组 ID。省略或传空字符串时直接使用 Protocol 和 Port；非空时查询当前租户的端口协议组并用组内协议端口项执行目的类型和协议类别校验，模板查询失败时请求失败。无论是否填写该字段，请求中的 Protocol 和非 ICMP/ICMPV6 Port 都会先按普通规则解析，格式无效时请求失败。</p>
                     * @return ParamTemplateId <p>端口协议组 ID。省略或传空字符串时直接使用 Protocol 和 Port；非空时查询当前租户的端口协议组并用组内协议端口项执行目的类型和协议类别校验，模板查询失败时请求失败。无论是否填写该字段，请求中的 Protocol 和非 ICMP/ICMPV6 Port 都会先按普通规则解析，格式无效时请求失败。</p>
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置<p>端口协议组 ID。省略或传空字符串时直接使用 Protocol 和 Port；非空时查询当前租户的端口协议组并用组内协议端口项执行目的类型和协议类别校验，模板查询失败时请求失败。无论是否填写该字段，请求中的 Protocol 和非 ICMP/ICMPV6 Port 都会先按普通规则解析，格式无效时请求失败。</p>
                     * @param _paramTemplateId <p>端口协议组 ID。省略或传空字符串时直接使用 Protocol 和 Port；非空时查询当前租户的端口协议组并用组内协议端口项执行目的类型和协议类别校验，模板查询失败时请求失败。无论是否填写该字段，请求中的 Protocol 和非 ICMP/ICMPV6 Port 都会先按普通规则解析，格式无效时请求失败。</p>
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
                     * 获取<p>端口协议组名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * @return ParamTemplateName <p>端口协议组名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * 
                     */
                    std::string GetParamTemplateName() const;

                    /**
                     * 设置<p>端口协议组名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * @param _paramTemplateName <p>端口协议组名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
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
                     * 获取<p>规则分区展示值，1 表示最前分区，2 表示中间分区，3 表示最后分区。新增和修改处理程序不读取请求中的该字段，写入时固定为中间分区；ModifyVpcAcRule 只能定位并替换中间分区中的现有规则。</p>
                     * @return RulePartition <p>规则分区展示值，1 表示最前分区，2 表示中间分区，3 表示最后分区。新增和修改处理程序不读取请求中的该字段，写入时固定为中间分区；ModifyVpcAcRule 只能定位并替换中间分区中的现有规则。</p>
                     * 
                     */
                    int64_t GetRulePartition() const;

                    /**
                     * 设置<p>规则分区展示值，1 表示最前分区，2 表示中间分区，3 表示最后分区。新增和修改处理程序不读取请求中的该字段，写入时固定为中间分区；ModifyVpcAcRule 只能定位并替换中间分区中的现有规则。</p>
                     * @param _rulePartition <p>规则分区展示值，1 表示最前分区，2 表示中间分区，3 表示最后分区。新增和修改处理程序不读取请求中的该字段，写入时固定为中间分区；ModifyVpcAcRule 只能定位并替换中间分区中的现有规则。</p>
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
                     * 获取<p>访问源名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     * @return SourceName <p>访问源名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置<p>访问源名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     * @param _sourceName <p>访问源名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
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
                     * 获取<p>访问目的名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     * @return TargetName <p>访问目的名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置<p>访问目的名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     * @param _targetName <p>访问目的名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
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
                     * 获取<p>规则最近更新时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * @return UpdateTime <p>规则最近更新时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>规则最近更新时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     * @param _updateTime <p>规则最近更新时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
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
                     * 获取<p>规则数据库 ID。ModifyVpcAcRule 必须传当前租户中间分区内既有规则的正整数 Uuid；处理程序按该 ID 删除原记录并以同一 ID 插入替换后的规则。AddVpcAcRule 的普通新增、insert_rule 和 batch_import 分支忽略该字段；精确 batch_import_cover 分支会采用正整数 Uuid 作为新记录 ID，非正数值仍由数据库生成 ID。</p>
                     * @return Uuid <p>规则数据库 ID。ModifyVpcAcRule 必须传当前租户中间分区内既有规则的正整数 Uuid；处理程序按该 ID 删除原记录并以同一 ID 插入替换后的规则。AddVpcAcRule 的普通新增、insert_rule 和 batch_import 分支忽略该字段；精确 batch_import_cover 分支会采用正整数 Uuid 作为新记录 ID，非正数值仍由数据库生成 ID。</p>
                     * 
                     */
                    int64_t GetUuid() const;

                    /**
                     * 设置<p>规则数据库 ID。ModifyVpcAcRule 必须传当前租户中间分区内既有规则的正整数 Uuid；处理程序按该 ID 删除原记录并以同一 ID 插入替换后的规则。AddVpcAcRule 的普通新增、insert_rule 和 batch_import 分支忽略该字段；精确 batch_import_cover 分支会采用正整数 Uuid 作为新记录 ID，非正数值仍由数据库生成 ID。</p>
                     * @param _uuid <p>规则数据库 ID。ModifyVpcAcRule 必须传当前租户中间分区内既有规则的正整数 Uuid；处理程序按该 ID 删除原记录并以同一 ID 插入替换后的规则。AddVpcAcRule 的普通新增、insert_rule 和 batch_import 分支忽略该字段；精确 batch_import_cover 分支会采用正整数 Uuid 作为新记录 ID，非正数值仍由数据库生成 ID。</p>
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
                     * <p>规则描述。新增和修改按请求中的字符串保存。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>访问目的内容，由 DestType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；domain 接受合法域名的逗号分隔列表或单独的 *，最多 10 项，通配域名最多 5 级，段内通配域名还要求引擎支持对应能力；template 接受当前租户的地址模板标识并归一化为模板 UUID，IP 地址模板必须与 IpVersion 一致，域名地址模板按域名目的校验；dnsparse 接受单个非 IP 域名或当前租户的域名模板，可使用符合级数限制的 *. 前缀泛域名，但不接受单独的 * 或段内通配；domainiptwoverify 接受单个非 IP 精确域名或不含任何通配符的当前租户域名模板；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。location 会校验地域代码，但解析出的地域代码未写入 VPC 规则且目的内容保存为空；vendor 会校验厂商名称并将其归一化代码写入目的内容。归一化后的目的内容超过 1023 字节时请求失败。</p>
                     */
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * <p>访问目的类型，不区分大小写。VPC 规则可用 net（ip 为同义值）、domain、template、dnsparse、domainiptwoverify、instance、tag、group、location 或 vendor；url 虽可被通用类型映射识别，但 VPC 出向内容解析不支持。地址模板、dnsparse、domainiptwoverify、严格模式域名模板和段内通配域名分别要求当前 VPC 防火墙引擎支持对应能力，否则返回 UnsupportedOperation。类型及地址模板查询到的实际类型共同决定 DestContent 和 Protocol 的校验。</p>
                     */
                    std::string m_destType;
                    bool m_destTypeHasBeenSet;

                    /**
                     * <p>规则生效的 VPC 边范围，不区分大小写。ALL 表示全部 VPC 间，cfws- 前缀表示指定 VPC 边；其它格式返回参数错误。ALL 还要求相关 VPC 防火墙引擎支持全局规则，否则返回 UnsupportedOperation。</p>
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * <p>规则状态。字符串 true 表示启用，false 表示禁用，大小写不敏感；省略或传空字符串时使用租户通知配置中的默认规则状态，该配置没有可用值时默认启用；其它字符串返回参数错误。</p>
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>规则在相同 IpVersion 的中间分区内的顺序。请求整数先转换为 uint32，0 归一化为 1，负整数及超出 uint32 范围的整数按该转换结果处理；写入时，顺序为 1 或不大于当前最大顺序的规则在该位置插入并将现有规则后移，通常大于当前最大顺序的值归一化为末尾。例外是 AddVpcAcRule 未使用精确值 insert_rule 且首条规则解析后的顺序为 1 时，本批每条规则都保留其解析后顺序并按该值移动现有规则，因此后续规则即使大于当前最大顺序也不会归一化为末尾。</p>
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * <p>访问控制策略的端口。除 ICMP 和 ICMPV6 外，该字段按逗号拆分；每项可以是正整数单端口，或以斜杠分隔且起点不大于终点的两个整数，-1/-1 表示全部端口。ICMP 和 ICMPV6 忽略请求值并保存为空字符串；其它协议的空值或非法格式返回参数错误。FTP 只接受正整数单端口，不接受逗号组合或斜杠区间。</p>
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>协议名称，不区分大小写并归一化。IP、instance、tag、group、location、vendor 及 IP 地址模板目的支持 TCP、UDP、ICMP、ICMPV6、ANY 和 FTP，其中 FTP 只接受单端口；domain 及域名地址模板目的支持 ANY、HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS 和 DNS，不支持 FTP，domain、tls、ssl 归一化为 TLS/SSL；dnsparse 和 domainiptwoverify 仅支持 TCP 或 UDP。template 按查询到的实际模板类型应用上述限制；填写 ParamTemplateId 时，组内每个协议端口项还会应用相同的目的类型限制。</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>流量通过云防火墙时的处理方式，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept 和 isolateoutaccept 归一化为放行，isolateindrop 和 isolateoutdrop 归一化为拒绝；其它值返回参数错误。</p>
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * <p>访问源内容，由 SourceType 决定格式和校验。net/ip 接受合法 IP 或 CIDR 的逗号分隔列表，最多 10 项；template 接受当前租户的地址模板标识并归一化为模板 UUID，只允许与 IpVersion 一致的 IP 地址模板，域名地址模板不能作为访问源；instance 和 tag 必须在当前租户存在，其中 instance 必须具有 IpVersion 对应的私网地址；group 接受资源组标识。</p>
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * <p>访问源类型，不区分大小写。VPC 规则可用 net（ip 为同义值）、template、instance、tag 或 group；url、location 和 vendor 虽可被通用类型映射识别，但 VPC 出向源内容解析不支持。使用 template 要求当前 VPC 防火墙引擎支持地址模板能力。类型及模板查询到的实际类型共同决定 SourceContent 的校验。</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>规则关联的 beta 任务详情。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     */
                    std::vector<BetaInfoByACL> m_betaList;
                    bool m_betaListHasBeenSet;

                    /**
                     * <p>规则创建时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>规则删除标记，1 表示已删除，0 表示未删除。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     */
                    int64_t m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * <p>查询结果中对目的实际类型的补充提示，例如 template 可区分 IP 地址模板和域名地址模板。新增和修改处理程序不读取请求中的该字段；实际目的类型由 DestType、DestContent 和模板查询结果确定。</p>
                     */
                    std::string m_destValueType;
                    bool m_destValueTypeHasBeenSet;

                    /**
                     * <p>规则命中次数。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     */
                    int64_t m_detectedTimes;
                    bool m_detectedTimesHasBeenSet;

                    /**
                     * <p>EdgeId 对应的 VPC 边名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     */
                    std::string m_edgeName;
                    bool m_edgeNameHasBeenSet;

                    /**
                     * <p>规则生效的防火墙组或 CCN 范围，格式比较不区分大小写。ALL 归一化为大写 ALL；cfwg- 前缀和 ccn- 前缀的值保留请求原文；省略、空字符串或其它格式归一化为 ALL，处理程序不因格式无效而返回错误。</p>
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * <p>防火墙组或 CCN 名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     */
                    std::string m_fwGroupName;
                    bool m_fwGroupNameHasBeenSet;

                    /**
                     * <p>内部规则标识。AddVpcAcRule 的精确 batch_import_cover 分支会采用正整数 InternalUuid 替换自动生成的内部标识；其它新增分支和 ModifyVpcAcRule 不读取请求中的该字段。</p>
                     */
                    int64_t m_internalUuid;
                    bool m_internalUuidHasBeenSet;

                    /**
                     * <p>查询结果中的规则有效性标记，0 表示有效，1 表示无效。请求中的该字段不参与新增或修改规则构造。</p>
                     */
                    int64_t m_invalid;
                    bool m_invalidHasBeenSet;

                    /**
                     * <p>IP 版本，0 表示 IPv4，1 表示 IPv6。省略或传入 0、1 以外的整数时按 IPv4 处理；instance 必须具有对应版本的私网地址，IP 地址模板必须与解析后的版本一致。处理程序不使用该字段校验直接填写的 net IP/CIDR 版本。</p>
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * <p>端口协议组 ID。省略或传空字符串时直接使用 Protocol 和 Port；非空时查询当前租户的端口协议组并用组内协议端口项执行目的类型和协议类别校验，模板查询失败时请求失败。无论是否填写该字段，请求中的 Protocol 和非 ICMP/ICMPV6 Port 都会先按普通规则解析，格式无效时请求失败。</p>
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>端口协议组名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     */
                    std::string m_paramTemplateName;
                    bool m_paramTemplateNameHasBeenSet;

                    /**
                     * <p>规则分区展示值，1 表示最前分区，2 表示中间分区，3 表示最后分区。新增和修改处理程序不读取请求中的该字段，写入时固定为中间分区；ModifyVpcAcRule 只能定位并替换中间分区中的现有规则。</p>
                     */
                    int64_t m_rulePartition;
                    bool m_rulePartitionHasBeenSet;

                    /**
                     * <p>访问源名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * <p>访问目的名称。请求中的该字段不参与新增或修改规则构造，主要用于查询返回和操作记录展示。</p>
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * <p>规则最近更新时间。请求中的该字段不参与新增或修改规则构造，主要用于查询返回。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>规则数据库 ID。ModifyVpcAcRule 必须传当前租户中间分区内既有规则的正整数 Uuid；处理程序按该 ID 删除原记录并以同一 ID 插入替换后的规则。AddVpcAcRule 的普通新增、insert_rule 和 batch_import 分支忽略该字段；精确 batch_import_cover 分支会采用正整数 Uuid 作为新记录 ID，非正数值仍由数据库生成 ID。</p>
                     */
                    int64_t m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCRULEITEM_H_
