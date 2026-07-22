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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATERULEITEM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATERULEITEM_H_

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
                * 互联网边界访问控制规则参数结构，供新增和修改共用。每个对象都会被解析为一条完整的新规则记录；替换现有规则时，请求中省略的字段不会从旧记录自动继承，仅内部 AutoTask 字段由服务端保留。
                */
                class CreateRuleItem : public AbstractModel
                {
                public:
                    CreateRuleItem();
                    ~CreateRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则方向：1 表示入站，0 表示出站；其它整数或省略会校验失败。方向还决定 SourceType、TargetType、Scope 与 Protocol 的可用组合。
                     * @return Direction 规则方向：1 表示入站，0 表示出站；其它整数或省略会校验失败。方向还决定 SourceType、TargetType、Scope 与 Protocol 的可用组合。
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置规则方向：1 表示入站，0 表示出站；其它整数或省略会校验失败。方向还决定 SourceType、TargetType、Scope 与 Protocol 的可用组合。
                     * @param _direction 规则方向：1 表示入站，0 表示出站；其它整数或省略会校验失败。方向还决定 SourceType、TargetType、Scope 与 Protocol 的可用组合。
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
                     * 获取规则在当前方向可操作分区内的序号。Handler 先把 int64 转为 uint32：转换结果 0 归一化为 1；结果不超过当前最大序号时在该位置插入并顺延后续规则，否则追加到末尾。省略或传 -1 会追加；超出 uint32 范围的整数会绕回，调用方不应依赖该转换。当 Rules 含多条规则时，只用首条规则的序号和方向决定整批进入插入或追加分支：追加时整批改写为该方向末尾的连续序号，插入时其余规则保留各自解析后的序号。
                     * @return OrderIndex 规则在当前方向可操作分区内的序号。Handler 先把 int64 转为 uint32：转换结果 0 归一化为 1；结果不超过当前最大序号时在该位置插入并顺延后续规则，否则追加到末尾。省略或传 -1 会追加；超出 uint32 范围的整数会绕回，调用方不应依赖该转换。当 Rules 含多条规则时，只用首条规则的序号和方向决定整批进入插入或追加分支：追加时整批改写为该方向末尾的连续序号，插入时其余规则保留各自解析后的序号。
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置规则在当前方向可操作分区内的序号。Handler 先把 int64 转为 uint32：转换结果 0 归一化为 1；结果不超过当前最大序号时在该位置插入并顺延后续规则，否则追加到末尾。省略或传 -1 会追加；超出 uint32 范围的整数会绕回，调用方不应依赖该转换。当 Rules 含多条规则时，只用首条规则的序号和方向决定整批进入插入或追加分支：追加时整批改写为该方向末尾的连续序号，插入时其余规则保留各自解析后的序号。
                     * @param _orderIndex 规则在当前方向可操作分区内的序号。Handler 先把 int64 转为 uint32：转换结果 0 归一化为 1；结果不超过当前最大序号时在该位置插入并顺延后续规则，否则追加到末尾。省略或传 -1 会追加；超出 uint32 范围的整数会绕回，调用方不应依赖该转换。当 Rules 含多条规则时，只用首条规则的序号和方向决定整批进入插入或追加分支：追加时整批改写为该方向末尾的连续序号，插入时其余规则保留各自解析后的序号。
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
                     * 获取目的端口。Protocol 归一化为 ICMP 时本字段被忽略并保存为空字符串；其它协议必须提供可解析字符串，按逗号分隔为单个正整数或“起始/结束”整数范围，范围起始值不得大于结束值，Handler 未对范围端点设置显式上下界，-1/-1 表示全部端口。FTP 只接受不含逗号和斜杠的单个正整数。domain 或域名模板目的在 side 或 all 范围下不接受除 -1/-1、0/65535 之外的端口范围。
                     * @return Port 目的端口。Protocol 归一化为 ICMP 时本字段被忽略并保存为空字符串；其它协议必须提供可解析字符串，按逗号分隔为单个正整数或“起始/结束”整数范围，范围起始值不得大于结束值，Handler 未对范围端点设置显式上下界，-1/-1 表示全部端口。FTP 只接受不含逗号和斜杠的单个正整数。domain 或域名模板目的在 side 或 all 范围下不接受除 -1/-1、0/65535 之外的端口范围。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置目的端口。Protocol 归一化为 ICMP 时本字段被忽略并保存为空字符串；其它协议必须提供可解析字符串，按逗号分隔为单个正整数或“起始/结束”整数范围，范围起始值不得大于结束值，Handler 未对范围端点设置显式上下界，-1/-1 表示全部端口。FTP 只接受不含逗号和斜杠的单个正整数。domain 或域名模板目的在 side 或 all 范围下不接受除 -1/-1、0/65535 之外的端口范围。
                     * @param _port 目的端口。Protocol 归一化为 ICMP 时本字段被忽略并保存为空字符串；其它协议必须提供可解析字符串，按逗号分隔为单个正整数或“起始/结束”整数范围，范围起始值不得大于结束值，Handler 未对范围端点设置显式上下界，-1/-1 表示全部端口。FTP 只接受不含逗号和斜杠的单个正整数。domain 或域名模板目的在 side 或 all 范围下不接受除 -1/-1、0/65535 之外的端口范围。
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
                     * 获取协议，解析不区分大小写。四层值 TCP、UDP、ICMP、ICMPV6、ANY 归一化为大写；应用层值 HTTP、HTTPS、HTTP/HTTPS、SMTP、SMTPS、SMTP/SMTPS、FTP、DNS、TLS/SSL 及别名 domain、TLS、SSL 归一化为对应标准值。ANY 同时属于可解析的四层协议和应用协议，domain、TLS、SSL 均归一化为 TLS/SSL。domain 或域名模板目的接受上述应用层协议及 ANY，但不接受 FTP 和其它四层协议；dnsparse、domainiptwoverify 仅接受 TCP 或 UDP 且仅支持 serial；其它目的在公有云环境不接受 FTP、ANY 之外的应用层协议。side 或 all 范围下，入站仅接受 TCP，出站仅接受 TCP、HTTP/HTTPS 或 TLS/SSL。DNS 用于非 domain 目的且目的不是 * 时，目的内容还必须是非 IP 的合法域名规则列表。使用协议端口模板时，模板中的每组协议和端口也执行这些联动校验。
                     * @return Protocol 协议，解析不区分大小写。四层值 TCP、UDP、ICMP、ICMPV6、ANY 归一化为大写；应用层值 HTTP、HTTPS、HTTP/HTTPS、SMTP、SMTPS、SMTP/SMTPS、FTP、DNS、TLS/SSL 及别名 domain、TLS、SSL 归一化为对应标准值。ANY 同时属于可解析的四层协议和应用协议，domain、TLS、SSL 均归一化为 TLS/SSL。domain 或域名模板目的接受上述应用层协议及 ANY，但不接受 FTP 和其它四层协议；dnsparse、domainiptwoverify 仅接受 TCP 或 UDP 且仅支持 serial；其它目的在公有云环境不接受 FTP、ANY 之外的应用层协议。side 或 all 范围下，入站仅接受 TCP，出站仅接受 TCP、HTTP/HTTPS 或 TLS/SSL。DNS 用于非 domain 目的且目的不是 * 时，目的内容还必须是非 IP 的合法域名规则列表。使用协议端口模板时，模板中的每组协议和端口也执行这些联动校验。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，解析不区分大小写。四层值 TCP、UDP、ICMP、ICMPV6、ANY 归一化为大写；应用层值 HTTP、HTTPS、HTTP/HTTPS、SMTP、SMTPS、SMTP/SMTPS、FTP、DNS、TLS/SSL 及别名 domain、TLS、SSL 归一化为对应标准值。ANY 同时属于可解析的四层协议和应用协议，domain、TLS、SSL 均归一化为 TLS/SSL。domain 或域名模板目的接受上述应用层协议及 ANY，但不接受 FTP 和其它四层协议；dnsparse、domainiptwoverify 仅接受 TCP 或 UDP 且仅支持 serial；其它目的在公有云环境不接受 FTP、ANY 之外的应用层协议。side 或 all 范围下，入站仅接受 TCP，出站仅接受 TCP、HTTP/HTTPS 或 TLS/SSL。DNS 用于非 domain 目的且目的不是 * 时，目的内容还必须是非 IP 的合法域名规则列表。使用协议端口模板时，模板中的每组协议和端口也执行这些联动校验。
                     * @param _protocol 协议，解析不区分大小写。四层值 TCP、UDP、ICMP、ICMPV6、ANY 归一化为大写；应用层值 HTTP、HTTPS、HTTP/HTTPS、SMTP、SMTPS、SMTP/SMTPS、FTP、DNS、TLS/SSL 及别名 domain、TLS、SSL 归一化为对应标准值。ANY 同时属于可解析的四层协议和应用协议，domain、TLS、SSL 均归一化为 TLS/SSL。domain 或域名模板目的接受上述应用层协议及 ANY，但不接受 FTP 和其它四层协议；dnsparse、domainiptwoverify 仅接受 TCP 或 UDP 且仅支持 serial；其它目的在公有云环境不接受 FTP、ANY 之外的应用层协议。side 或 all 范围下，入站仅接受 TCP，出站仅接受 TCP、HTTP/HTTPS 或 TLS/SSL。DNS 用于非 domain 目的且目的不是 * 时，目的内容还必须是非 IP 的合法域名规则列表。使用协议端口模板时，模板中的每组协议和端口也执行这些联动校验。
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
                     * 获取流量处理动作，解析不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept、isolateoutaccept 归一化为放行，isolateindrop、isolateoutdrop 归一化为拒绝。drop 及其拒绝别名还会校验当前账号是否具备互联网边界阻断能力。
                     * @return RuleAction 流量处理动作，解析不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept、isolateoutaccept 归一化为放行，isolateindrop、isolateoutdrop 归一化为拒绝。drop 及其拒绝别名还会校验当前账号是否具备互联网边界阻断能力。
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置流量处理动作，解析不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept、isolateoutaccept 归一化为放行，isolateindrop、isolateoutdrop 归一化为拒绝。drop 及其拒绝别名还会校验当前账号是否具备互联网边界阻断能力。
                     * @param _ruleAction 流量处理动作，解析不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept、isolateoutaccept 归一化为放行，isolateindrop、isolateoutdrop 归一化为拒绝。drop 及其拒绝别名还会校验当前账号是否具备互联网边界阻断能力。
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
                     * 获取访问源内容。ip 或 net 使用合法 IP/CIDR 列表，普通列表最多 10 项；template 使用当前账号可解析的地址模板标识；Direction=0 时，instance、group、tag 使用相应资源标识，其中 instance 必须能解析到公网 IP，tag 必须存在；Direction=1 时，location 使用地域 code CSV 并须通过当前账号的新地域规则能力校验，vendor 使用 tencent、aliyun、aws、huawei、azure 或 all 的 CSV。location、vendor 保存时会转换为地域或厂商匹配信息。
                     * @return SourceContent 访问源内容。ip 或 net 使用合法 IP/CIDR 列表，普通列表最多 10 项；template 使用当前账号可解析的地址模板标识；Direction=0 时，instance、group、tag 使用相应资源标识，其中 instance 必须能解析到公网 IP，tag 必须存在；Direction=1 时，location 使用地域 code CSV 并须通过当前账号的新地域规则能力校验，vendor 使用 tencent、aliyun、aws、huawei、azure 或 all 的 CSV。location、vendor 保存时会转换为地域或厂商匹配信息。
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置访问源内容。ip 或 net 使用合法 IP/CIDR 列表，普通列表最多 10 项；template 使用当前账号可解析的地址模板标识；Direction=0 时，instance、group、tag 使用相应资源标识，其中 instance 必须能解析到公网 IP，tag 必须存在；Direction=1 时，location 使用地域 code CSV 并须通过当前账号的新地域规则能力校验，vendor 使用 tencent、aliyun、aws、huawei、azure 或 all 的 CSV。location、vendor 保存时会转换为地域或厂商匹配信息。
                     * @param _sourceContent 访问源内容。ip 或 net 使用合法 IP/CIDR 列表，普通列表最多 10 项；template 使用当前账号可解析的地址模板标识；Direction=0 时，instance、group、tag 使用相应资源标识，其中 instance 必须能解析到公网 IP，tag 必须存在；Direction=1 时，location 使用地域 code CSV 并须通过当前账号的新地域规则能力校验，vendor 使用 tencent、aliyun、aws、huawei、azure 或 all 的 CSV。location、vendor 保存时会转换为地域或厂商匹配信息。
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
                     * 获取访问源类型，解析不区分大小写。Direction=1 接受 ip、net、template、location、vendor；Direction=0 接受 ip、net、template、instance、group、tag。ip 与 net 归一化为同一 IP/CIDR 类型；其它已解析但不在对应方向处理分支中的类型会校验失败。
                     * @return SourceType 访问源类型，解析不区分大小写。Direction=1 接受 ip、net、template、location、vendor；Direction=0 接受 ip、net、template、instance、group、tag。ip 与 net 归一化为同一 IP/CIDR 类型；其它已解析但不在对应方向处理分支中的类型会校验失败。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置访问源类型，解析不区分大小写。Direction=1 接受 ip、net、template、location、vendor；Direction=0 接受 ip、net、template、instance、group、tag。ip 与 net 归一化为同一 IP/CIDR 类型；其它已解析但不在对应方向处理分支中的类型会校验失败。
                     * @param _sourceType 访问源类型，解析不区分大小写。Direction=1 接受 ip、net、template、location、vendor；Direction=0 接受 ip、net、template、instance、group、tag。ip 与 net 归一化为同一 IP/CIDR 类型；其它已解析但不在对应方向处理分支中的类型会校验失败。
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
                     * 获取访问目的内容。ip 或 net 使用合法 IP/CIDR 列表；domain 使用后端域名规则校验接受的列表（包括 IP、普通域名和通配域名）或 *；普通 IP/CIDR/domain 列表最多 10 项，通配域名最多 5 级。domain 配合 DNS 协议时例外地不接受 IP。dnsparse 使用单个合法域名、泛域名或当前账号可解析的 mb_ 域名模板，domainiptwoverify 使用单个不含任何通配符的合法域名或此类 mb_ 域名模板；两者都不接受单独的 *、IP、逗号列表或段内通配域名。串行 domain 段内通配和串行 domainiptwoverify 的 mb_ 域名模板分别要求对应集群引擎版本支持。template 使用当前账号可解析的地址模板标识；Direction=1 时，instance、group、tag 使用相应资源标识，其中 instance 必须能解析到公网 IP，tag 必须存在；Direction=0 时，location 使用地域 code CSV 并须通过当前账号的新地域规则能力校验，vendor 使用 tencent、aliyun、aws、huawei、azure 或 all 的 CSV。解析并归一化后的目的内容长度不得超过 1023。
                     * @return TargetContent 访问目的内容。ip 或 net 使用合法 IP/CIDR 列表；domain 使用后端域名规则校验接受的列表（包括 IP、普通域名和通配域名）或 *；普通 IP/CIDR/domain 列表最多 10 项，通配域名最多 5 级。domain 配合 DNS 协议时例外地不接受 IP。dnsparse 使用单个合法域名、泛域名或当前账号可解析的 mb_ 域名模板，domainiptwoverify 使用单个不含任何通配符的合法域名或此类 mb_ 域名模板；两者都不接受单独的 *、IP、逗号列表或段内通配域名。串行 domain 段内通配和串行 domainiptwoverify 的 mb_ 域名模板分别要求对应集群引擎版本支持。template 使用当前账号可解析的地址模板标识；Direction=1 时，instance、group、tag 使用相应资源标识，其中 instance 必须能解析到公网 IP，tag 必须存在；Direction=0 时，location 使用地域 code CSV 并须通过当前账号的新地域规则能力校验，vendor 使用 tencent、aliyun、aws、huawei、azure 或 all 的 CSV。解析并归一化后的目的内容长度不得超过 1023。
                     * 
                     */
                    std::string GetTargetContent() const;

                    /**
                     * 设置访问目的内容。ip 或 net 使用合法 IP/CIDR 列表；domain 使用后端域名规则校验接受的列表（包括 IP、普通域名和通配域名）或 *；普通 IP/CIDR/domain 列表最多 10 项，通配域名最多 5 级。domain 配合 DNS 协议时例外地不接受 IP。dnsparse 使用单个合法域名、泛域名或当前账号可解析的 mb_ 域名模板，domainiptwoverify 使用单个不含任何通配符的合法域名或此类 mb_ 域名模板；两者都不接受单独的 *、IP、逗号列表或段内通配域名。串行 domain 段内通配和串行 domainiptwoverify 的 mb_ 域名模板分别要求对应集群引擎版本支持。template 使用当前账号可解析的地址模板标识；Direction=1 时，instance、group、tag 使用相应资源标识，其中 instance 必须能解析到公网 IP，tag 必须存在；Direction=0 时，location 使用地域 code CSV 并须通过当前账号的新地域规则能力校验，vendor 使用 tencent、aliyun、aws、huawei、azure 或 all 的 CSV。解析并归一化后的目的内容长度不得超过 1023。
                     * @param _targetContent 访问目的内容。ip 或 net 使用合法 IP/CIDR 列表；domain 使用后端域名规则校验接受的列表（包括 IP、普通域名和通配域名）或 *；普通 IP/CIDR/domain 列表最多 10 项，通配域名最多 5 级。domain 配合 DNS 协议时例外地不接受 IP。dnsparse 使用单个合法域名、泛域名或当前账号可解析的 mb_ 域名模板，domainiptwoverify 使用单个不含任何通配符的合法域名或此类 mb_ 域名模板；两者都不接受单独的 *、IP、逗号列表或段内通配域名。串行 domain 段内通配和串行 domainiptwoverify 的 mb_ 域名模板分别要求对应集群引擎版本支持。template 使用当前账号可解析的地址模板标识；Direction=1 时，instance、group、tag 使用相应资源标识，其中 instance 必须能解析到公网 IP，tag 必须存在；Direction=0 时，location 使用地域 code CSV 并须通过当前账号的新地域规则能力校验，vendor 使用 tencent、aliyun、aws、huawei、azure 或 all 的 CSV。解析并归一化后的目的内容长度不得超过 1023。
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
                     * 获取访问目的类型，解析不区分大小写。Direction=1 接受 ip、net、template、domain、instance、group、tag；Direction=0 接受 ip、net、template、domain、dnsparse、domainiptwoverify、location、vendor。ip 与 net 归一化为同一 IP/CIDR 类型；其它已解析但不在对应方向处理分支中的类型会校验失败。
                     * @return TargetType 访问目的类型，解析不区分大小写。Direction=1 接受 ip、net、template、domain、instance、group、tag；Direction=0 接受 ip、net、template、domain、dnsparse、domainiptwoverify、location、vendor。ip 与 net 归一化为同一 IP/CIDR 类型；其它已解析但不在对应方向处理分支中的类型会校验失败。
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置访问目的类型，解析不区分大小写。Direction=1 接受 ip、net、template、domain、instance、group、tag；Direction=0 接受 ip、net、template、domain、dnsparse、domainiptwoverify、location、vendor。ip 与 net 归一化为同一 IP/CIDR 类型；其它已解析但不在对应方向处理分支中的类型会校验失败。
                     * @param _targetType 访问目的类型，解析不区分大小写。Direction=1 接受 ip、net、template、domain、instance、group、tag；Direction=0 接受 ip、net、template、domain、dnsparse、domainiptwoverify、location、vendor。ip 与 net 归一化为同一 IP/CIDR 类型；其它已解析但不在对应方向处理分支中的类型会校验失败。
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
                     * 获取规则描述。省略或传空字符串时保存为空；替换现有规则时不继承旧值。Handler 未对字符数设置显式限制。
                     * @return Description 规则描述。省略或传空字符串时保存为空；替换现有规则时不继承旧值。Handler 未对字符数设置显式限制。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述。省略或传空字符串时保存为空；替换现有规则时不继承旧值。Handler 未对字符数设置显式限制。
                     * @param _description 规则描述。省略或传空字符串时保存为空；替换现有规则时不继承旧值。Handler 未对字符数设置显式限制。
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
                     * 获取启用状态。非空值不区分大小写接受字符串 true 或 false，并归一化为启用或停用；省略或传空字符串时读取当前账号的访问控制默认启用配置，该配置不可用时默认启用。替换现有规则时不继承旧值。
                     * @return Enable 启用状态。非空值不区分大小写接受字符串 true 或 false，并归一化为启用或停用；省略或传空字符串时读取当前账号的访问控制默认启用配置，该配置不可用时默认启用。替换现有规则时不继承旧值。
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置启用状态。非空值不区分大小写接受字符串 true 或 false，并归一化为启用或停用；省略或传空字符串时读取当前账号的访问控制默认启用配置，该配置不可用时默认启用。替换现有规则时不继承旧值。
                     * @param _enable 启用状态。非空值不区分大小写接受字符串 true 或 false，并归一化为启用或停用；省略或传空字符串时读取当前账号的访问控制默认启用配置，该配置不可用时默认启用。替换现有规则时不继承旧值。
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
                     * 获取关联告警或来源事件 ID。省略或传空字符串时保存为空，替换现有规则时不继承旧值；From=batch_import_cover 时，非空值还会作为覆盖导入后规则的内部字符串 UUID 复用。
                     * @return LogId 关联告警或来源事件 ID。省略或传空字符串时保存为空，替换现有规则时不继承旧值；From=batch_import_cover 时，非空值还会作为覆盖导入后规则的内部字符串 UUID 复用。
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置关联告警或来源事件 ID。省略或传空字符串时保存为空，替换现有规则时不继承旧值；From=batch_import_cover 时，非空值还会作为覆盖导入后规则的内部字符串 UUID 复用。
                     * @param _logId 关联告警或来源事件 ID。省略或传空字符串时保存为空，替换现有规则时不继承旧值；From=batch_import_cover 时，非空值还会作为覆盖导入后规则的内部字符串 UUID 复用。
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取协议端口模板 ID。省略或传空字符串表示不使用模板；非空时按当前账号和 ID 加载模板，找不到会失败。受支持输入应指向内容格式为“协议:端口”的协议端口模板；其中格式有效的每组协议和端口都会执行 Direction、TargetType 与 Scope 联动校验，异常模板内容不属于受支持输入。Protocol 和 Port 仍会在加载模板前按各自字段规则解析，原生 Handler 不要求固定填写 ANY、-1/-1 或 serial。
                     * @return ParamTemplateId 协议端口模板 ID。省略或传空字符串表示不使用模板；非空时按当前账号和 ID 加载模板，找不到会失败。受支持输入应指向内容格式为“协议:端口”的协议端口模板；其中格式有效的每组协议和端口都会执行 Direction、TargetType 与 Scope 联动校验，异常模板内容不属于受支持输入。Protocol 和 Port 仍会在加载模板前按各自字段规则解析，原生 Handler 不要求固定填写 ANY、-1/-1 或 serial。
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置协议端口模板 ID。省略或传空字符串表示不使用模板；非空时按当前账号和 ID 加载模板，找不到会失败。受支持输入应指向内容格式为“协议:端口”的协议端口模板；其中格式有效的每组协议和端口都会执行 Direction、TargetType 与 Scope 联动校验，异常模板内容不属于受支持输入。Protocol 和 Port 仍会在加载模板前按各自字段规则解析，原生 Handler 不要求固定填写 ANY、-1/-1 或 serial。
                     * @param _paramTemplateId 协议端口模板 ID。省略或传空字符串表示不使用模板；非空时按当前账号和 ID 加载模板，找不到会失败。受支持输入应指向内容格式为“协议:端口”的协议端口模板；其中格式有效的每组协议和端口都会执行 Direction、TargetType 与 Scope 联动校验，异常模板内容不属于受支持输入。Protocol 和 Port 仍会在加载模板前按各自字段规则解析，原生 Handler 不要求固定填写 ANY、-1/-1 或 serial。
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
                     * 获取规则来源。整数 2 原样保存；省略或传入其它整数均归一化为 0。
                     * @return RuleSource 规则来源。整数 2 原样保存；省略或传入其它整数均归一化为 0。
                     * 
                     */
                    int64_t GetRuleSource() const;

                    /**
                     * 设置规则来源。整数 2 原样保存；省略或传入其它整数均归一化为 0。
                     * @param _ruleSource 规则来源。整数 2 原样保存；省略或传入其它整数均归一化为 0。
                     * 
                     */
                    void SetRuleSource(const int64_t& _ruleSource);

                    /**
                     * 判断参数 RuleSource 是否已赋值
                     * @return RuleSource 是否已赋值
                     * 
                     */
                    bool RuleSourceHasBeenSet() const;

                    /**
                     * 获取生效范围，解析不区分大小写：serial 表示串行，side 表示旁路，all 表示全局；省略、空字符串或其它值会校验失败。国际站环境会将有效输入统一归一化为 serial。协议、端口、目的类型及协议端口模板的联动限制见 Protocol、Port 和 ParamTemplateId。
                     * @return Scope 生效范围，解析不区分大小写：serial 表示串行，side 表示旁路，all 表示全局；省略、空字符串或其它值会校验失败。国际站环境会将有效输入统一归一化为 serial。协议、端口、目的类型及协议端口模板的联动限制见 Protocol、Port 和 ParamTemplateId。
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置生效范围，解析不区分大小写：serial 表示串行，side 表示旁路，all 表示全局；省略、空字符串或其它值会校验失败。国际站环境会将有效输入统一归一化为 serial。协议、端口、目的类型及协议端口模板的联动限制见 Protocol、Port 和 ParamTemplateId。
                     * @param _scope 生效范围，解析不区分大小写：serial 表示串行，side 表示旁路，all 表示全局；省略、空字符串或其它值会校验失败。国际站环境会将有效输入统一归一化为 serial。协议、端口、目的类型及协议端口模板的联动限制见 Protocol、Port 和 ParamTemplateId。
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
                     * 获取规则数值 ID。普通新增、指定位置新增和批量导入会忽略该字段；From=batch_import_cover 时正整数 ID 会作为覆盖导入后的规则 ID 复用；修改时必须提供当前账号可操作分区内已存在的正整数 ID，用于定位并替换原规则，省略、非正整数或不存在的 ID 会导致规则查询失败。
                     * @return Uuid 规则数值 ID。普通新增、指定位置新增和批量导入会忽略该字段；From=batch_import_cover 时正整数 ID 会作为覆盖导入后的规则 ID 复用；修改时必须提供当前账号可操作分区内已存在的正整数 ID，用于定位并替换原规则，省略、非正整数或不存在的 ID 会导致规则查询失败。
                     * 
                     */
                    int64_t GetUuid() const;

                    /**
                     * 设置规则数值 ID。普通新增、指定位置新增和批量导入会忽略该字段；From=batch_import_cover 时正整数 ID 会作为覆盖导入后的规则 ID 复用；修改时必须提供当前账号可操作分区内已存在的正整数 ID，用于定位并替换原规则，省略、非正整数或不存在的 ID 会导致规则查询失败。
                     * @param _uuid 规则数值 ID。普通新增、指定位置新增和批量导入会忽略该字段；From=batch_import_cover 时正整数 ID 会作为覆盖导入后的规则 ID 复用；修改时必须提供当前账号可操作分区内已存在的正整数 ID，用于定位并替换原规则，省略、非正整数或不存在的 ID 会导致规则查询失败。
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
                     * 规则方向：1 表示入站，0 表示出站；其它整数或省略会校验失败。方向还决定 SourceType、TargetType、Scope 与 Protocol 的可用组合。
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 规则在当前方向可操作分区内的序号。Handler 先把 int64 转为 uint32：转换结果 0 归一化为 1；结果不超过当前最大序号时在该位置插入并顺延后续规则，否则追加到末尾。省略或传 -1 会追加；超出 uint32 范围的整数会绕回，调用方不应依赖该转换。当 Rules 含多条规则时，只用首条规则的序号和方向决定整批进入插入或追加分支：追加时整批改写为该方向末尾的连续序号，插入时其余规则保留各自解析后的序号。
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 目的端口。Protocol 归一化为 ICMP 时本字段被忽略并保存为空字符串；其它协议必须提供可解析字符串，按逗号分隔为单个正整数或“起始/结束”整数范围，范围起始值不得大于结束值，Handler 未对范围端点设置显式上下界，-1/-1 表示全部端口。FTP 只接受不含逗号和斜杠的单个正整数。domain 或域名模板目的在 side 或 all 范围下不接受除 -1/-1、0/65535 之外的端口范围。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 协议，解析不区分大小写。四层值 TCP、UDP、ICMP、ICMPV6、ANY 归一化为大写；应用层值 HTTP、HTTPS、HTTP/HTTPS、SMTP、SMTPS、SMTP/SMTPS、FTP、DNS、TLS/SSL 及别名 domain、TLS、SSL 归一化为对应标准值。ANY 同时属于可解析的四层协议和应用协议，domain、TLS、SSL 均归一化为 TLS/SSL。domain 或域名模板目的接受上述应用层协议及 ANY，但不接受 FTP 和其它四层协议；dnsparse、domainiptwoverify 仅接受 TCP 或 UDP 且仅支持 serial；其它目的在公有云环境不接受 FTP、ANY 之外的应用层协议。side 或 all 范围下，入站仅接受 TCP，出站仅接受 TCP、HTTP/HTTPS 或 TLS/SSL。DNS 用于非 domain 目的且目的不是 * 时，目的内容还必须是非 IP 的合法域名规则列表。使用协议端口模板时，模板中的每组协议和端口也执行这些联动校验。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 流量处理动作，解析不区分大小写。accept 表示放行，drop 表示拒绝，log 表示观察；isolateinaccept、isolateoutaccept 归一化为放行，isolateindrop、isolateoutdrop 归一化为拒绝。drop 及其拒绝别名还会校验当前账号是否具备互联网边界阻断能力。
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 访问源内容。ip 或 net 使用合法 IP/CIDR 列表，普通列表最多 10 项；template 使用当前账号可解析的地址模板标识；Direction=0 时，instance、group、tag 使用相应资源标识，其中 instance 必须能解析到公网 IP，tag 必须存在；Direction=1 时，location 使用地域 code CSV 并须通过当前账号的新地域规则能力校验，vendor 使用 tencent、aliyun、aws、huawei、azure 或 all 的 CSV。location、vendor 保存时会转换为地域或厂商匹配信息。
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 访问源类型，解析不区分大小写。Direction=1 接受 ip、net、template、location、vendor；Direction=0 接受 ip、net、template、instance、group、tag。ip 与 net 归一化为同一 IP/CIDR 类型；其它已解析但不在对应方向处理分支中的类型会校验失败。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 访问目的内容。ip 或 net 使用合法 IP/CIDR 列表；domain 使用后端域名规则校验接受的列表（包括 IP、普通域名和通配域名）或 *；普通 IP/CIDR/domain 列表最多 10 项，通配域名最多 5 级。domain 配合 DNS 协议时例外地不接受 IP。dnsparse 使用单个合法域名、泛域名或当前账号可解析的 mb_ 域名模板，domainiptwoverify 使用单个不含任何通配符的合法域名或此类 mb_ 域名模板；两者都不接受单独的 *、IP、逗号列表或段内通配域名。串行 domain 段内通配和串行 domainiptwoverify 的 mb_ 域名模板分别要求对应集群引擎版本支持。template 使用当前账号可解析的地址模板标识；Direction=1 时，instance、group、tag 使用相应资源标识，其中 instance 必须能解析到公网 IP，tag 必须存在；Direction=0 时，location 使用地域 code CSV 并须通过当前账号的新地域规则能力校验，vendor 使用 tencent、aliyun、aws、huawei、azure 或 all 的 CSV。解析并归一化后的目的内容长度不得超过 1023。
                     */
                    std::string m_targetContent;
                    bool m_targetContentHasBeenSet;

                    /**
                     * 访问目的类型，解析不区分大小写。Direction=1 接受 ip、net、template、domain、instance、group、tag；Direction=0 接受 ip、net、template、domain、dnsparse、domainiptwoverify、location、vendor。ip 与 net 归一化为同一 IP/CIDR 类型；其它已解析但不在对应方向处理分支中的类型会校验失败。
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 规则描述。省略或传空字符串时保存为空；替换现有规则时不继承旧值。Handler 未对字符数设置显式限制。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 启用状态。非空值不区分大小写接受字符串 true 或 false，并归一化为启用或停用；省略或传空字符串时读取当前账号的访问控制默认启用配置，该配置不可用时默认启用。替换现有规则时不继承旧值。
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 关联告警或来源事件 ID。省略或传空字符串时保存为空，替换现有规则时不继承旧值；From=batch_import_cover 时，非空值还会作为覆盖导入后规则的内部字符串 UUID 复用。
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * 协议端口模板 ID。省略或传空字符串表示不使用模板；非空时按当前账号和 ID 加载模板，找不到会失败。受支持输入应指向内容格式为“协议:端口”的协议端口模板；其中格式有效的每组协议和端口都会执行 Direction、TargetType 与 Scope 联动校验，异常模板内容不属于受支持输入。Protocol 和 Port 仍会在加载模板前按各自字段规则解析，原生 Handler 不要求固定填写 ANY、-1/-1 或 serial。
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * 规则来源。整数 2 原样保存；省略或传入其它整数均归一化为 0。
                     */
                    int64_t m_ruleSource;
                    bool m_ruleSourceHasBeenSet;

                    /**
                     * 生效范围，解析不区分大小写：serial 表示串行，side 表示旁路，all 表示全局；省略、空字符串或其它值会校验失败。国际站环境会将有效输入统一归一化为 serial。协议、端口、目的类型及协议端口模板的联动限制见 Protocol、Port 和 ParamTemplateId。
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 规则数值 ID。普通新增、指定位置新增和批量导入会忽略该字段；From=batch_import_cover 时正整数 ID 会作为覆盖导入后的规则 ID 复用；修改时必须提供当前账号可操作分区内已存在的正整数 ID，用于定位并替换原规则，省略、非正整数或不存在的 ID 会导致规则查询失败。
                     */
                    int64_t m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATERULEITEM_H_
