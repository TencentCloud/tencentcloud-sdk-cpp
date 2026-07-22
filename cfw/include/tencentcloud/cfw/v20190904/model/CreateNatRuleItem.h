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
                * NAT 访问控制规则参数结构。新增和修改使用相同的字段解析；字段组合按 Direction、源和目的类型与内容、Protocol、Port、ParamTemplateId、RuleAction 和 Scope 校验。
                */
                class CreateNatRuleItem : public AbstractModel
                {
                public:
                    CreateNatRuleItem();
                    ~CreateNatRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则方向，JSON 整数：0 表示出站，1 表示入站；其他值被拒绝。方向决定可用的源和目的类型及协议组合。</p>
                     * @return Direction <p>规则方向，JSON 整数：0 表示出站，1 表示入站；其他值被拒绝。方向决定可用的源和目的类型及协议组合。</p>
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置<p>规则方向，JSON 整数：0 表示出站，1 表示入站；其他值被拒绝。方向决定可用的源和目的类型及协议组合。</p>
                     * @param _direction <p>规则方向，JSON 整数：0 表示出站，1 表示入站；其他值被拒绝。方向决定可用的源和目的类型及协议组合。</p>
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
                     * 获取<p>规则序号。入口按 int64 读取后转换为 uint32，转换结果为 0 时归一化为 1；负值不会被单独拒绝，而会按 uint32 转换。写入中间分区时，序号为 1 或不大于当前同方向最大序号会按该位置插入并后移原规则，超过最大序号时通常归一化为末尾序号。新增且 From 不等于 insert_rule 时，如果本批首条规则转换后的序号为 1，则批内后续规则即使超过最大序号也按各自转换后的序号直接插入。</p>
                     * @return OrderIndex <p>规则序号。入口按 int64 读取后转换为 uint32，转换结果为 0 时归一化为 1；负值不会被单独拒绝，而会按 uint32 转换。写入中间分区时，序号为 1 或不大于当前同方向最大序号会按该位置插入并后移原规则，超过最大序号时通常归一化为末尾序号。新增且 From 不等于 insert_rule 时，如果本批首条规则转换后的序号为 1，则批内后续规则即使超过最大序号也按各自转换后的序号直接插入。</p>
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置<p>规则序号。入口按 int64 读取后转换为 uint32，转换结果为 0 时归一化为 1；负值不会被单独拒绝，而会按 uint32 转换。写入中间分区时，序号为 1 或不大于当前同方向最大序号会按该位置插入并后移原规则，超过最大序号时通常归一化为末尾序号。新增且 From 不等于 insert_rule 时，如果本批首条规则转换后的序号为 1，则批内后续规则即使超过最大序号也按各自转换后的序号直接插入。</p>
                     * @param _orderIndex <p>规则序号。入口按 int64 读取后转换为 uint32，转换结果为 0 时归一化为 1；负值不会被单独拒绝，而会按 uint32 转换。写入中间分区时，序号为 1 或不大于当前同方向最大序号会按该位置插入并后移原规则，超过最大序号时通常归一化为末尾序号。新增且 From 不等于 insert_rule 时，如果本批首条规则转换后的序号为 1，则批内后续规则即使超过最大序号也按各自转换后的序号直接插入。</p>
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
                     * 获取<p>目的端口字符串。支持逗号分隔的单端口或以斜杠分隔的起止范围，例如 80、80,443、80/443；-1/-1 表示全部端口。单端口必须是大于 0 的整数；范围只要求两个端点均为整数且起点不大于终点。Protocol 归一化为 ICMP 时忽略该字段并保存为空字符串；FTP 只接受单端口，不接受逗号列表或斜杠范围。</p>
                     * @return Port <p>目的端口字符串。支持逗号分隔的单端口或以斜杠分隔的起止范围，例如 80、80,443、80/443；-1/-1 表示全部端口。单端口必须是大于 0 的整数；范围只要求两个端点均为整数且起点不大于终点。Protocol 归一化为 ICMP 时忽略该字段并保存为空字符串；FTP 只接受单端口，不接受逗号列表或斜杠范围。</p>
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>目的端口字符串。支持逗号分隔的单端口或以斜杠分隔的起止范围，例如 80、80,443、80/443；-1/-1 表示全部端口。单端口必须是大于 0 的整数；范围只要求两个端点均为整数且起点不大于终点。Protocol 归一化为 ICMP 时忽略该字段并保存为空字符串；FTP 只接受单端口，不接受逗号列表或斜杠范围。</p>
                     * @param _port <p>目的端口字符串。支持逗号分隔的单端口或以斜杠分隔的起止范围，例如 80、80,443、80/443；-1/-1 表示全部端口。单端口必须是大于 0 的整数；范围只要求两个端点均为整数且起点不大于终点。Protocol 归一化为 ICMP 时忽略该字段并保存为空字符串；FTP 只接受单端口，不接受逗号列表或斜杠范围。</p>
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
                     * 获取<p>协议，大小写不敏感并归一化为大写。四层值为 TCP、UDP、ICMP、ICMPV6、ANY；应用层值为 HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS、FTP、DNS，其中 domain、tls、ssl 也归一化为 TLS/SSL；ANY 同时可按四层协议和应用协议解析。入站仅允许 ANY、TCP、UDP；domain 目的及解析为域名模板的 template 目的接受上述应用层协议及 ANY，但不接受 FTP；dnsparse 和 domainiptwoverify 目的仅允许 TCP 或 UDP；其他目的不接受 FTP 和 ANY 之外的应用层协议。Protocol=DNS 且目的不是域名模板或单独的 * 时，目的列表只能包含域名，不能包含 IP。</p>
                     * @return Protocol <p>协议，大小写不敏感并归一化为大写。四层值为 TCP、UDP、ICMP、ICMPV6、ANY；应用层值为 HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS、FTP、DNS，其中 domain、tls、ssl 也归一化为 TLS/SSL；ANY 同时可按四层协议和应用协议解析。入站仅允许 ANY、TCP、UDP；domain 目的及解析为域名模板的 template 目的接受上述应用层协议及 ANY，但不接受 FTP；dnsparse 和 domainiptwoverify 目的仅允许 TCP 或 UDP；其他目的不接受 FTP 和 ANY 之外的应用层协议。Protocol=DNS 且目的不是域名模板或单独的 * 时，目的列表只能包含域名，不能包含 IP。</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议，大小写不敏感并归一化为大写。四层值为 TCP、UDP、ICMP、ICMPV6、ANY；应用层值为 HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS、FTP、DNS，其中 domain、tls、ssl 也归一化为 TLS/SSL；ANY 同时可按四层协议和应用协议解析。入站仅允许 ANY、TCP、UDP；domain 目的及解析为域名模板的 template 目的接受上述应用层协议及 ANY，但不接受 FTP；dnsparse 和 domainiptwoverify 目的仅允许 TCP 或 UDP；其他目的不接受 FTP 和 ANY 之外的应用层协议。Protocol=DNS 且目的不是域名模板或单独的 * 时，目的列表只能包含域名，不能包含 IP。</p>
                     * @param _protocol <p>协议，大小写不敏感并归一化为大写。四层值为 TCP、UDP、ICMP、ICMPV6、ANY；应用层值为 HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS、FTP、DNS，其中 domain、tls、ssl 也归一化为 TLS/SSL；ANY 同时可按四层协议和应用协议解析。入站仅允许 ANY、TCP、UDP；domain 目的及解析为域名模板的 template 目的接受上述应用层协议及 ANY，但不接受 FTP；dnsparse 和 domainiptwoverify 目的仅允许 TCP 或 UDP；其他目的不接受 FTP 和 ANY 之外的应用层协议。Protocol=DNS 且目的不是域名模板或单独的 * 时，目的列表只能包含域名，不能包含 IP。</p>
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
                     * 获取<p>流量处理方式，大小写不敏感：accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept、isolateoutaccept 归一化为 accept，isolateindrop、isolateoutdrop 归一化为 drop。</p>
                     * @return RuleAction <p>流量处理方式，大小写不敏感：accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept、isolateoutaccept 归一化为 accept，isolateindrop、isolateoutdrop 归一化为 drop。</p>
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置<p>流量处理方式，大小写不敏感：accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept、isolateoutaccept 归一化为 accept，isolateindrop、isolateoutdrop 归一化为 drop。</p>
                     * @param _ruleAction <p>流量处理方式，大小写不敏感：accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept、isolateoutaccept 归一化为 accept，isolateindrop、isolateoutdrop 归一化为 drop。</p>
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
                     * 获取<p>访问源内容，格式由 SourceType 和 Direction 决定。net/ip 使用合法 IP 或 CIDR 的逗号列表，最多 10 项；location 使用地域 code，空字符串归一化为默认全地域掩码；vendor 使用 tencent、aliyun、aws、huawei、azure 或 all，可用逗号分隔；template 使用当前账号可解析的地址模板标识；instance 和 tag 必须引用当前账号已有对象；group 使用资源组标识，入口不校验其是否存在。</p>
                     * @return SourceContent <p>访问源内容，格式由 SourceType 和 Direction 决定。net/ip 使用合法 IP 或 CIDR 的逗号列表，最多 10 项；location 使用地域 code，空字符串归一化为默认全地域掩码；vendor 使用 tencent、aliyun、aws、huawei、azure 或 all，可用逗号分隔；template 使用当前账号可解析的地址模板标识；instance 和 tag 必须引用当前账号已有对象；group 使用资源组标识，入口不校验其是否存在。</p>
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置<p>访问源内容，格式由 SourceType 和 Direction 决定。net/ip 使用合法 IP 或 CIDR 的逗号列表，最多 10 项；location 使用地域 code，空字符串归一化为默认全地域掩码；vendor 使用 tencent、aliyun、aws、huawei、azure 或 all，可用逗号分隔；template 使用当前账号可解析的地址模板标识；instance 和 tag 必须引用当前账号已有对象；group 使用资源组标识，入口不校验其是否存在。</p>
                     * @param _sourceContent <p>访问源内容，格式由 SourceType 和 Direction 决定。net/ip 使用合法 IP 或 CIDR 的逗号列表，最多 10 项；location 使用地域 code，空字符串归一化为默认全地域掩码；vendor 使用 tencent、aliyun、aws、huawei、azure 或 all，可用逗号分隔；template 使用当前账号可解析的地址模板标识；instance 和 tag 必须引用当前账号已有对象；group 使用资源组标识，入口不校验其是否存在。</p>
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
                     * 获取<p>访问源类型，大小写不敏感。入站支持 net、ip、template、location、vendor；出站支持 net、ip、template、instance、group、tag。ip 和 net 均归一化为 IP 类型；template 会解析为模板的实际类型。</p>
                     * @return SourceType <p>访问源类型，大小写不敏感。入站支持 net、ip、template、location、vendor；出站支持 net、ip、template、instance、group、tag。ip 和 net 均归一化为 IP 类型；template 会解析为模板的实际类型。</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>访问源类型，大小写不敏感。入站支持 net、ip、template、location、vendor；出站支持 net、ip、template、instance、group、tag。ip 和 net 均归一化为 IP 类型；template 会解析为模板的实际类型。</p>
                     * @param _sourceType <p>访问源类型，大小写不敏感。入站支持 net、ip、template、location、vendor；出站支持 net、ip、template、instance、group、tag。ip 和 net 均归一化为 IP 类型；template 会解析为模板的实际类型。</p>
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
                     * 获取<p>访问目的内容，格式由 TargetType 和 Direction 决定。net/ip 使用合法 IP 或 CIDR 的逗号列表；domain 使用合法域名或 IP 的逗号列表，也接受单独的 *，标准泛域名和段内通配域名最多 5 级，段内通配域名还要求对应引擎版本支持；dnsparse 使用单个精确域名、最多 5 级的标准泛域名或相应域名模板，不接受单独的 *、段内通配域名、IP 或逗号列表；domainiptwoverify 使用单个精确域名或不含通配符的相应域名模板，不接受单独的 *、任何通配域名、IP 或逗号列表；location 使用地域 code，空字符串归一化为默认全地域掩码；vendor 使用 tencent、aliyun、aws、huawei、azure 或 all，可用逗号分隔；template 使用当前账号可解析的地址模板标识；instance 和 tag 必须引用当前账号已有对象；group 使用资源组标识，入口不校验其是否存在。解析后的目的内容最长 1023 字节；IP 或 domain 目的最多包含 10 个逗号分隔项。</p>
                     * @return TargetContent <p>访问目的内容，格式由 TargetType 和 Direction 决定。net/ip 使用合法 IP 或 CIDR 的逗号列表；domain 使用合法域名或 IP 的逗号列表，也接受单独的 *，标准泛域名和段内通配域名最多 5 级，段内通配域名还要求对应引擎版本支持；dnsparse 使用单个精确域名、最多 5 级的标准泛域名或相应域名模板，不接受单独的 *、段内通配域名、IP 或逗号列表；domainiptwoverify 使用单个精确域名或不含通配符的相应域名模板，不接受单独的 *、任何通配域名、IP 或逗号列表；location 使用地域 code，空字符串归一化为默认全地域掩码；vendor 使用 tencent、aliyun、aws、huawei、azure 或 all，可用逗号分隔；template 使用当前账号可解析的地址模板标识；instance 和 tag 必须引用当前账号已有对象；group 使用资源组标识，入口不校验其是否存在。解析后的目的内容最长 1023 字节；IP 或 domain 目的最多包含 10 个逗号分隔项。</p>
                     * 
                     */
                    std::string GetTargetContent() const;

                    /**
                     * 设置<p>访问目的内容，格式由 TargetType 和 Direction 决定。net/ip 使用合法 IP 或 CIDR 的逗号列表；domain 使用合法域名或 IP 的逗号列表，也接受单独的 *，标准泛域名和段内通配域名最多 5 级，段内通配域名还要求对应引擎版本支持；dnsparse 使用单个精确域名、最多 5 级的标准泛域名或相应域名模板，不接受单独的 *、段内通配域名、IP 或逗号列表；domainiptwoverify 使用单个精确域名或不含通配符的相应域名模板，不接受单独的 *、任何通配域名、IP 或逗号列表；location 使用地域 code，空字符串归一化为默认全地域掩码；vendor 使用 tencent、aliyun、aws、huawei、azure 或 all，可用逗号分隔；template 使用当前账号可解析的地址模板标识；instance 和 tag 必须引用当前账号已有对象；group 使用资源组标识，入口不校验其是否存在。解析后的目的内容最长 1023 字节；IP 或 domain 目的最多包含 10 个逗号分隔项。</p>
                     * @param _targetContent <p>访问目的内容，格式由 TargetType 和 Direction 决定。net/ip 使用合法 IP 或 CIDR 的逗号列表；domain 使用合法域名或 IP 的逗号列表，也接受单独的 *，标准泛域名和段内通配域名最多 5 级，段内通配域名还要求对应引擎版本支持；dnsparse 使用单个精确域名、最多 5 级的标准泛域名或相应域名模板，不接受单独的 *、段内通配域名、IP 或逗号列表；domainiptwoverify 使用单个精确域名或不含通配符的相应域名模板，不接受单独的 *、任何通配域名、IP 或逗号列表；location 使用地域 code，空字符串归一化为默认全地域掩码；vendor 使用 tencent、aliyun、aws、huawei、azure 或 all，可用逗号分隔；template 使用当前账号可解析的地址模板标识；instance 和 tag 必须引用当前账号已有对象；group 使用资源组标识，入口不校验其是否存在。解析后的目的内容最长 1023 字节；IP 或 domain 目的最多包含 10 个逗号分隔项。</p>
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
                     * 获取<p>访问目的类型，大小写不敏感。入站支持 net、ip、template、instance、group、tag；出站支持 net、ip、template、domain、dnsparse、domainiptwoverify、location、vendor。ip 和 net 均归一化为 IP 类型；template 会解析为模板的实际类型，入站解析为域名模板时被拒绝。dnsparse 和 domainiptwoverify 分别要求对应引擎版本支持；domainiptwoverify 使用域名模板时还要求严格模式域名模板版本支持；domain 目的使用段内通配域名时要求段内通配域名版本支持。</p>
                     * @return TargetType <p>访问目的类型，大小写不敏感。入站支持 net、ip、template、instance、group、tag；出站支持 net、ip、template、domain、dnsparse、domainiptwoverify、location、vendor。ip 和 net 均归一化为 IP 类型；template 会解析为模板的实际类型，入站解析为域名模板时被拒绝。dnsparse 和 domainiptwoverify 分别要求对应引擎版本支持；domainiptwoverify 使用域名模板时还要求严格模式域名模板版本支持；domain 目的使用段内通配域名时要求段内通配域名版本支持。</p>
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>访问目的类型，大小写不敏感。入站支持 net、ip、template、instance、group、tag；出站支持 net、ip、template、domain、dnsparse、domainiptwoverify、location、vendor。ip 和 net 均归一化为 IP 类型；template 会解析为模板的实际类型，入站解析为域名模板时被拒绝。dnsparse 和 domainiptwoverify 分别要求对应引擎版本支持；domainiptwoverify 使用域名模板时还要求严格模式域名模板版本支持；domain 目的使用段内通配域名时要求段内通配域名版本支持。</p>
                     * @param _targetType <p>访问目的类型，大小写不敏感。入站支持 net、ip、template、instance、group、tag；出站支持 net、ip、template、domain、dnsparse、domainiptwoverify、location、vendor。ip 和 net 均归一化为 IP 类型；template 会解析为模板的实际类型，入站解析为域名模板时被拒绝。dnsparse 和 domainiptwoverify 分别要求对应引擎版本支持；domainiptwoverify 使用域名模板时还要求严格模式域名模板版本支持；domain 目的使用段内通配域名时要求段内通配域名版本支持。</p>
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
                     * 获取<p>规则描述。省略或传空字符串时保存为空；入口不裁剪内容，也不执行长度归一化或字符数校验。</p>
                     * @return Description <p>规则描述。省略或传空字符串时保存为空；入口不裁剪内容，也不执行长度归一化或字符数校验。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>规则描述。省略或传空字符串时保存为空；入口不裁剪内容，也不执行长度归一化或字符数校验。</p>
                     * @param _description <p>规则描述。省略或传空字符串时保存为空；入口不裁剪内容，也不执行长度归一化或字符数校验。</p>
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
                     * 获取<p>规则状态。字符串 true 表示启用，false 表示禁用，大小写不敏感。省略或传空字符串时读取当前账号的访问控制规则默认状态；配置不存在或无法解析时默认为启用。</p>
                     * @return Enable <p>规则状态。字符串 true 表示启用，false 表示禁用，大小写不敏感。省略或传空字符串时读取当前账号的访问控制规则默认状态；配置不存在或无法解析时默认为启用。</p>
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置<p>规则状态。字符串 true 表示启用，false 表示禁用，大小写不敏感。省略或传空字符串时读取当前账号的访问控制规则默认状态；配置不存在或无法解析时默认为启用。</p>
                     * @param _enable <p>规则状态。字符串 true 表示启用，false 表示禁用，大小写不敏感。省略或传空字符串时读取当前账号的访问控制规则默认状态；配置不存在或无法解析时默认为启用。</p>
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
                     * 获取<p>规则内部 UUID。新增请求仅在 From=batch_import_cover 时采用正整数值替换自动生成的内部 UUID；其他新增路径和修改请求忽略该字段。</p>
                     * @return InternalUuid <p>规则内部 UUID。新增请求仅在 From=batch_import_cover 时采用正整数值替换自动生成的内部 UUID；其他新增路径和修改请求忽略该字段。</p>
                     * 
                     */
                    int64_t GetInternalUuid() const;

                    /**
                     * 设置<p>规则内部 UUID。新增请求仅在 From=batch_import_cover 时采用正整数值替换自动生成的内部 UUID；其他新增路径和修改请求忽略该字段。</p>
                     * @param _internalUuid <p>规则内部 UUID。新增请求仅在 From=batch_import_cover 时采用正整数值替换自动生成的内部 UUID；其他新增路径和修改请求忽略该字段。</p>
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
                     * 获取<p>端口协议模板 ID。省略或传空字符串时直接使用请求中的 Protocol 和 Port；非空时必须指向当前账号已有的端口协议模板，模板条目会逐项参与协议与目的类型联动校验。使用模板时，入口仍先校验请求中的 Protocol，并在该协议不是 ICMP 时校验请求中的 Port；请求值不要求固定为 ANY 和 -1/-1。</p>
                     * @return ParamTemplateId <p>端口协议模板 ID。省略或传空字符串时直接使用请求中的 Protocol 和 Port；非空时必须指向当前账号已有的端口协议模板，模板条目会逐项参与协议与目的类型联动校验。使用模板时，入口仍先校验请求中的 Protocol，并在该协议不是 ICMP 时校验请求中的 Port；请求值不要求固定为 ANY 和 -1/-1。</p>
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置<p>端口协议模板 ID。省略或传空字符串时直接使用请求中的 Protocol 和 Port；非空时必须指向当前账号已有的端口协议模板，模板条目会逐项参与协议与目的类型联动校验。使用模板时，入口仍先校验请求中的 Protocol，并在该协议不是 ICMP 时校验请求中的 Port；请求值不要求固定为 ANY 和 -1/-1。</p>
                     * @param _paramTemplateId <p>端口协议模板 ID。省略或传空字符串时直接使用请求中的 Protocol 和 Port；非空时必须指向当前账号已有的端口协议模板，模板条目会逐项参与协议与目的类型联动校验。使用模板时，入口仍先校验请求中的 Protocol，并在该协议不是 ICMP 时校验请求中的 Port；请求值不要求固定为 ANY 和 -1/-1。</p>
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
                     * 获取<p>规则生效范围，值中不能含空白字符。ALL 表示全部 NAT 实例；地域 ID（如 ap-guangzhou）表示地域范围；cfwnat- 或 nat- 开头的实例 ID 表示实例范围。非空值必须是已知地域或当前账号已有的 NAT 实例。省略或传空字符串时，有请求 Region 则使用 Region，否则归一化为 ALL。</p>
                     * @return Scope <p>规则生效范围，值中不能含空白字符。ALL 表示全部 NAT 实例；地域 ID（如 ap-guangzhou）表示地域范围；cfwnat- 或 nat- 开头的实例 ID 表示实例范围。非空值必须是已知地域或当前账号已有的 NAT 实例。省略或传空字符串时，有请求 Region 则使用 Region，否则归一化为 ALL。</p>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置<p>规则生效范围，值中不能含空白字符。ALL 表示全部 NAT 实例；地域 ID（如 ap-guangzhou）表示地域范围；cfwnat- 或 nat- 开头的实例 ID 表示实例范围。非空值必须是已知地域或当前账号已有的 NAT 实例。省略或传空字符串时，有请求 Region 则使用 Region，否则归一化为 ALL。</p>
                     * @param _scope <p>规则生效范围，值中不能含空白字符。ALL 表示全部 NAT 实例；地域 ID（如 ap-guangzhou）表示地域范围；cfwnat- 或 nat- 开头的实例 ID 表示实例范围。非空值必须是已知地域或当前账号已有的 NAT 实例。省略或传空字符串时，有请求 Region 则使用 Region，否则归一化为 ALL。</p>
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
                     * 获取<p>规则数据库 ID。普通新增、insert_rule 和 batch_import 忽略该字段；batch_import_cover 新增会采用正整数值作为待写入记录 ID。修改请求使用正整数定位中间分区中的现有规则，先删除该记录再以同一 Uuid 重建并返回该 ID；省略、0 或负值无法定位修改目标。</p>
                     * @return Uuid <p>规则数据库 ID。普通新增、insert_rule 和 batch_import 忽略该字段；batch_import_cover 新增会采用正整数值作为待写入记录 ID。修改请求使用正整数定位中间分区中的现有规则，先删除该记录再以同一 Uuid 重建并返回该 ID；省略、0 或负值无法定位修改目标。</p>
                     * 
                     */
                    int64_t GetUuid() const;

                    /**
                     * 设置<p>规则数据库 ID。普通新增、insert_rule 和 batch_import 忽略该字段；batch_import_cover 新增会采用正整数值作为待写入记录 ID。修改请求使用正整数定位中间分区中的现有规则，先删除该记录再以同一 Uuid 重建并返回该 ID；省略、0 或负值无法定位修改目标。</p>
                     * @param _uuid <p>规则数据库 ID。普通新增、insert_rule 和 batch_import 忽略该字段；batch_import_cover 新增会采用正整数值作为待写入记录 ID。修改请求使用正整数定位中间分区中的现有规则，先删除该记录再以同一 Uuid 重建并返回该 ID；省略、0 或负值无法定位修改目标。</p>
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
                     * <p>规则方向，JSON 整数：0 表示出站，1 表示入站；其他值被拒绝。方向决定可用的源和目的类型及协议组合。</p>
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>规则序号。入口按 int64 读取后转换为 uint32，转换结果为 0 时归一化为 1；负值不会被单独拒绝，而会按 uint32 转换。写入中间分区时，序号为 1 或不大于当前同方向最大序号会按该位置插入并后移原规则，超过最大序号时通常归一化为末尾序号。新增且 From 不等于 insert_rule 时，如果本批首条规则转换后的序号为 1，则批内后续规则即使超过最大序号也按各自转换后的序号直接插入。</p>
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * <p>目的端口字符串。支持逗号分隔的单端口或以斜杠分隔的起止范围，例如 80、80,443、80/443；-1/-1 表示全部端口。单端口必须是大于 0 的整数；范围只要求两个端点均为整数且起点不大于终点。Protocol 归一化为 ICMP 时忽略该字段并保存为空字符串；FTP 只接受单端口，不接受逗号列表或斜杠范围。</p>
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>协议，大小写不敏感并归一化为大写。四层值为 TCP、UDP、ICMP、ICMPV6、ANY；应用层值为 HTTP、HTTPS、HTTP/HTTPS、TLS/SSL、SMTP、SMTPS、SMTP/SMTPS、FTP、DNS，其中 domain、tls、ssl 也归一化为 TLS/SSL；ANY 同时可按四层协议和应用协议解析。入站仅允许 ANY、TCP、UDP；domain 目的及解析为域名模板的 template 目的接受上述应用层协议及 ANY，但不接受 FTP；dnsparse 和 domainiptwoverify 目的仅允许 TCP 或 UDP；其他目的不接受 FTP 和 ANY 之外的应用层协议。Protocol=DNS 且目的不是域名模板或单独的 * 时，目的列表只能包含域名，不能包含 IP。</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>流量处理方式，大小写不敏感：accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept、isolateoutaccept 归一化为 accept，isolateindrop、isolateoutdrop 归一化为 drop。</p>
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * <p>访问源内容，格式由 SourceType 和 Direction 决定。net/ip 使用合法 IP 或 CIDR 的逗号列表，最多 10 项；location 使用地域 code，空字符串归一化为默认全地域掩码；vendor 使用 tencent、aliyun、aws、huawei、azure 或 all，可用逗号分隔；template 使用当前账号可解析的地址模板标识；instance 和 tag 必须引用当前账号已有对象；group 使用资源组标识，入口不校验其是否存在。</p>
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * <p>访问源类型，大小写不敏感。入站支持 net、ip、template、location、vendor；出站支持 net、ip、template、instance、group、tag。ip 和 net 均归一化为 IP 类型；template 会解析为模板的实际类型。</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>访问目的内容，格式由 TargetType 和 Direction 决定。net/ip 使用合法 IP 或 CIDR 的逗号列表；domain 使用合法域名或 IP 的逗号列表，也接受单独的 *，标准泛域名和段内通配域名最多 5 级，段内通配域名还要求对应引擎版本支持；dnsparse 使用单个精确域名、最多 5 级的标准泛域名或相应域名模板，不接受单独的 *、段内通配域名、IP 或逗号列表；domainiptwoverify 使用单个精确域名或不含通配符的相应域名模板，不接受单独的 *、任何通配域名、IP 或逗号列表；location 使用地域 code，空字符串归一化为默认全地域掩码；vendor 使用 tencent、aliyun、aws、huawei、azure 或 all，可用逗号分隔；template 使用当前账号可解析的地址模板标识；instance 和 tag 必须引用当前账号已有对象；group 使用资源组标识，入口不校验其是否存在。解析后的目的内容最长 1023 字节；IP 或 domain 目的最多包含 10 个逗号分隔项。</p>
                     */
                    std::string m_targetContent;
                    bool m_targetContentHasBeenSet;

                    /**
                     * <p>访问目的类型，大小写不敏感。入站支持 net、ip、template、instance、group、tag；出站支持 net、ip、template、domain、dnsparse、domainiptwoverify、location、vendor。ip 和 net 均归一化为 IP 类型；template 会解析为模板的实际类型，入站解析为域名模板时被拒绝。dnsparse 和 domainiptwoverify 分别要求对应引擎版本支持；domainiptwoverify 使用域名模板时还要求严格模式域名模板版本支持；domain 目的使用段内通配域名时要求段内通配域名版本支持。</p>
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>规则描述。省略或传空字符串时保存为空；入口不裁剪内容，也不执行长度归一化或字符数校验。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>规则状态。字符串 true 表示启用，false 表示禁用，大小写不敏感。省略或传空字符串时读取当前账号的访问控制规则默认状态；配置不存在或无法解析时默认为启用。</p>
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>规则内部 UUID。新增请求仅在 From=batch_import_cover 时采用正整数值替换自动生成的内部 UUID；其他新增路径和修改请求忽略该字段。</p>
                     */
                    int64_t m_internalUuid;
                    bool m_internalUuidHasBeenSet;

                    /**
                     * <p>端口协议模板 ID。省略或传空字符串时直接使用请求中的 Protocol 和 Port；非空时必须指向当前账号已有的端口协议模板，模板条目会逐项参与协议与目的类型联动校验。使用模板时，入口仍先校验请求中的 Protocol，并在该协议不是 ICMP 时校验请求中的 Port；请求值不要求固定为 ANY 和 -1/-1。</p>
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>规则生效范围，值中不能含空白字符。ALL 表示全部 NAT 实例；地域 ID（如 ap-guangzhou）表示地域范围；cfwnat- 或 nat- 开头的实例 ID 表示实例范围。非空值必须是已知地域或当前账号已有的 NAT 实例。省略或传空字符串时，有请求 Region 则使用 Region，否则归一化为 ALL。</p>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>规则数据库 ID。普通新增、insert_rule 和 batch_import 忽略该字段；batch_import_cover 新增会采用正整数值作为待写入记录 ID。修改请求使用正整数定位中间分区中的现有规则，先删除该记录再以同一 Uuid 重建并返回该 ID；省略、0 或负值无法定位修改目标。</p>
                     */
                    int64_t m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATRULEITEM_H_
