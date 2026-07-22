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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPRULE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPRULE_H_

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
                * 企业安全组规则内容。新增和修改规则内容共用此结构；字段的校验、缺省、归一化及在两种操作中的处理行为见各字段说明。
                */
                class SecurityGroupRule : public AbstractModel
                {
                public:
                    SecurityGroupRule();
                    ~SecurityGroupRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则用途或使用场景的描述，不能为空，最多 100 个 Unicode 字符。
                     * @return Description 规则用途或使用场景的描述，不能为空，最多 100 个 Unicode 字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则用途或使用场景的描述，不能为空，最多 100 个 Unicode 字符。
                     * @param _description 规则用途或使用场景的描述，不能为空，最多 100 个 Unicode 字符。
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
                     * 获取访问目的内容，非空且最多 512 字节，格式由 DestType 决定：net 使用 IPv4 IP/CIDR，且不接受裸地址 0.0.0.0，表示全部 IPv4 地址时使用 0.0.0.0/0；template 使用可用的地址模板 ID；instance 使用属于当前账号的资产实例 ID；resourcegroup 使用当前账号的资产分组 ID；tag 使用当前账号已存在的资源标签 JSON 字符串，例如 {\"Key\":\"标签键\",\"Value\":\"标签值\"}；region 使用支持的地域标识；dnsparse 使用合法域名。DestType=dnsparse 时服务端将内容转换为小写，并检查域名格式和域名解析配额。
                     * @return DestContent 访问目的内容，非空且最多 512 字节，格式由 DestType 决定：net 使用 IPv4 IP/CIDR，且不接受裸地址 0.0.0.0，表示全部 IPv4 地址时使用 0.0.0.0/0；template 使用可用的地址模板 ID；instance 使用属于当前账号的资产实例 ID；resourcegroup 使用当前账号的资产分组 ID；tag 使用当前账号已存在的资源标签 JSON 字符串，例如 {\"Key\":\"标签键\",\"Value\":\"标签值\"}；region 使用支持的地域标识；dnsparse 使用合法域名。DestType=dnsparse 时服务端将内容转换为小写，并检查域名格式和域名解析配额。
                     * 
                     */
                    std::string GetDestContent() const;

                    /**
                     * 设置访问目的内容，非空且最多 512 字节，格式由 DestType 决定：net 使用 IPv4 IP/CIDR，且不接受裸地址 0.0.0.0，表示全部 IPv4 地址时使用 0.0.0.0/0；template 使用可用的地址模板 ID；instance 使用属于当前账号的资产实例 ID；resourcegroup 使用当前账号的资产分组 ID；tag 使用当前账号已存在的资源标签 JSON 字符串，例如 {\"Key\":\"标签键\",\"Value\":\"标签值\"}；region 使用支持的地域标识；dnsparse 使用合法域名。DestType=dnsparse 时服务端将内容转换为小写，并检查域名格式和域名解析配额。
                     * @param _destContent 访问目的内容，非空且最多 512 字节，格式由 DestType 决定：net 使用 IPv4 IP/CIDR，且不接受裸地址 0.0.0.0，表示全部 IPv4 地址时使用 0.0.0.0/0；template 使用可用的地址模板 ID；instance 使用属于当前账号的资产实例 ID；resourcegroup 使用当前账号的资产分组 ID；tag 使用当前账号已存在的资源标签 JSON 字符串，例如 {\"Key\":\"标签键\",\"Value\":\"标签值\"}；region 使用支持的地域标识；dnsparse 使用合法域名。DestType=dnsparse 时服务端将内容转换为小写，并检查域名格式和域名解析配额。
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
                     * 获取访问目的类型，不区分大小写，可传 net、template、instance、resourcegroup、tag、region 或 dnsparse。instance 的具体资产类型由 DestContent 的实例 ID 前缀识别；template、instance、resourcegroup、tag、region 对应的内容必须对当前账号有效。
                     * @return DestType 访问目的类型，不区分大小写，可传 net、template、instance、resourcegroup、tag、region 或 dnsparse。instance 的具体资产类型由 DestContent 的实例 ID 前缀识别；template、instance、resourcegroup、tag、region 对应的内容必须对当前账号有效。
                     * 
                     */
                    std::string GetDestType() const;

                    /**
                     * 设置访问目的类型，不区分大小写，可传 net、template、instance、resourcegroup、tag、region 或 dnsparse。instance 的具体资产类型由 DestContent 的实例 ID 前缀识别；template、instance、resourcegroup、tag、region 对应的内容必须对当前账号有效。
                     * @param _destType 访问目的类型，不区分大小写，可传 net、template、instance、resourcegroup、tag、region 或 dnsparse。instance 的具体资产类型由 DestContent 的实例 ID 前缀识别；template、instance、resourcegroup、tag、region 对应的内容必须对当前账号有效。
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
                     * 获取规则顺序的十进制整数字符串；-1 转换为 uint32 最大值。新增时 Type=0 或 1 会按 Data 数组顺序重新计算最终 Sequence；Type=2 使用首条规则的 OrderIndex 作为插入位置，超过当前最大 Sequence 时按末尾新增处理。修改规则内容时 -1 会被拒绝，超过当前最大 Sequence 的值归一化为当前最大 Sequence。
                     * @return OrderIndex 规则顺序的十进制整数字符串；-1 转换为 uint32 最大值。新增时 Type=0 或 1 会按 Data 数组顺序重新计算最终 Sequence；Type=2 使用首条规则的 OrderIndex 作为插入位置，超过当前最大 Sequence 时按末尾新增处理。修改规则内容时 -1 会被拒绝，超过当前最大 Sequence 的值归一化为当前最大 Sequence。
                     * 
                     */
                    std::string GetOrderIndex() const;

                    /**
                     * 设置规则顺序的十进制整数字符串；-1 转换为 uint32 最大值。新增时 Type=0 或 1 会按 Data 数组顺序重新计算最终 Sequence；Type=2 使用首条规则的 OrderIndex 作为插入位置，超过当前最大 Sequence 时按末尾新增处理。修改规则内容时 -1 会被拒绝，超过当前最大 Sequence 的值归一化为当前最大 Sequence。
                     * @param _orderIndex 规则顺序的十进制整数字符串；-1 转换为 uint32 最大值。新增时 Type=0 或 1 会按 Data 数组顺序重新计算最终 Sequence；Type=2 使用首条规则的 OrderIndex 作为插入位置，超过当前最大 Sequence 时按末尾新增处理。修改规则内容时 -1 会被拒绝，超过当前最大 Sequence 的值归一化为当前最大 Sequence。
                     * 
                     */
                    void SetOrderIndex(const std::string& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取访问控制动作，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示仅记录；isolateinaccept、isolateoutaccept 分别按放行动作写入并标记入向或出向隔离来源，isolateindrop、isolateoutdrop 分别按拒绝动作写入并标记入向或出向隔离来源。
                     * @return RuleAction 访问控制动作，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示仅记录；isolateinaccept、isolateoutaccept 分别按放行动作写入并标记入向或出向隔离来源，isolateindrop、isolateoutdrop 分别按拒绝动作写入并标记入向或出向隔离来源。
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置访问控制动作，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示仅记录；isolateinaccept、isolateoutaccept 分别按放行动作写入并标记入向或出向隔离来源，isolateindrop、isolateoutdrop 分别按拒绝动作写入并标记入向或出向隔离来源。
                     * @param _ruleAction 访问控制动作，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示仅记录；isolateinaccept、isolateoutaccept 分别按放行动作写入并标记入向或出向隔离来源，isolateindrop、isolateoutdrop 分别按拒绝动作写入并标记入向或出向隔离来源。
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
                     * 获取访问源内容，非空且最多 512 字节，格式由 SourceType 决定：net 使用 IPv4 IP/CIDR，且不接受裸地址 0.0.0.0，表示全部 IPv4 地址时使用 0.0.0.0/0；template 使用可用的地址模板 ID；instance 使用属于当前账号的资产实例 ID；resourcegroup 使用当前账号的资产分组 ID；tag 使用当前账号已存在的资源标签 JSON 字符串，例如 {\"Key\":\"标签键\",\"Value\":\"标签值\"}；region 使用支持的地域标识；dnsparse 使用字符串内容。SourceType=dnsparse 时，服务端接受该类型，但不执行目的域名的小写归一化、域名格式校验或域名解析配额检查。
                     * @return SourceContent 访问源内容，非空且最多 512 字节，格式由 SourceType 决定：net 使用 IPv4 IP/CIDR，且不接受裸地址 0.0.0.0，表示全部 IPv4 地址时使用 0.0.0.0/0；template 使用可用的地址模板 ID；instance 使用属于当前账号的资产实例 ID；resourcegroup 使用当前账号的资产分组 ID；tag 使用当前账号已存在的资源标签 JSON 字符串，例如 {\"Key\":\"标签键\",\"Value\":\"标签值\"}；region 使用支持的地域标识；dnsparse 使用字符串内容。SourceType=dnsparse 时，服务端接受该类型，但不执行目的域名的小写归一化、域名格式校验或域名解析配额检查。
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置访问源内容，非空且最多 512 字节，格式由 SourceType 决定：net 使用 IPv4 IP/CIDR，且不接受裸地址 0.0.0.0，表示全部 IPv4 地址时使用 0.0.0.0/0；template 使用可用的地址模板 ID；instance 使用属于当前账号的资产实例 ID；resourcegroup 使用当前账号的资产分组 ID；tag 使用当前账号已存在的资源标签 JSON 字符串，例如 {\"Key\":\"标签键\",\"Value\":\"标签值\"}；region 使用支持的地域标识；dnsparse 使用字符串内容。SourceType=dnsparse 时，服务端接受该类型，但不执行目的域名的小写归一化、域名格式校验或域名解析配额检查。
                     * @param _sourceContent 访问源内容，非空且最多 512 字节，格式由 SourceType 决定：net 使用 IPv4 IP/CIDR，且不接受裸地址 0.0.0.0，表示全部 IPv4 地址时使用 0.0.0.0/0；template 使用可用的地址模板 ID；instance 使用属于当前账号的资产实例 ID；resourcegroup 使用当前账号的资产分组 ID；tag 使用当前账号已存在的资源标签 JSON 字符串，例如 {\"Key\":\"标签键\",\"Value\":\"标签值\"}；region 使用支持的地域标识；dnsparse 使用字符串内容。SourceType=dnsparse 时，服务端接受该类型，但不执行目的域名的小写归一化、域名格式校验或域名解析配额检查。
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
                     * 获取访问源类型，不区分大小写，可传 net、template、instance、resourcegroup、tag、region 或 dnsparse。instance 的具体资产类型由 SourceContent 的实例 ID 前缀识别；template、instance、resourcegroup、tag、region 对应的内容必须对当前账号有效。dnsparse 作为访问源时不执行目的域名的小写归一化、域名格式校验或域名解析配额检查。
                     * @return SourceType 访问源类型，不区分大小写，可传 net、template、instance、resourcegroup、tag、region 或 dnsparse。instance 的具体资产类型由 SourceContent 的实例 ID 前缀识别；template、instance、resourcegroup、tag、region 对应的内容必须对当前账号有效。dnsparse 作为访问源时不执行目的域名的小写归一化、域名格式校验或域名解析配额检查。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置访问源类型，不区分大小写，可传 net、template、instance、resourcegroup、tag、region 或 dnsparse。instance 的具体资产类型由 SourceContent 的实例 ID 前缀识别；template、instance、resourcegroup、tag、region 对应的内容必须对当前账号有效。dnsparse 作为访问源时不执行目的域名的小写归一化、域名格式校验或域名解析配额检查。
                     * @param _sourceType 访问源类型，不区分大小写，可传 net、template、instance、resourcegroup、tag、region 或 dnsparse。instance 的具体资产类型由 SourceContent 的实例 ID 前缀识别；template、instance、resourcegroup、tag、region 对应的内容必须对当前账号有效。dnsparse 作为访问源时不执行目的域名的小写归一化、域名格式校验或域名解析配额检查。
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
                     * 获取规则状态字符串，不区分大小写；true 表示启用，false 表示禁用，省略或空字符串在结构转换时按 true 解析。普通新增最终使用账号的新增规则默认状态；batch_import 和 batch_import_cover 新增保留 Data.Enable 的解析结果；修改规则内容时保留原规则状态，因此 Data.Enable 不改变该修改的启停结果。
                     * @return Enable 规则状态字符串，不区分大小写；true 表示启用，false 表示禁用，省略或空字符串在结构转换时按 true 解析。普通新增最终使用账号的新增规则默认状态；batch_import 和 batch_import_cover 新增保留 Data.Enable 的解析结果；修改规则内容时保留原规则状态，因此 Data.Enable 不改变该修改的启停结果。
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置规则状态字符串，不区分大小写；true 表示启用，false 表示禁用，省略或空字符串在结构转换时按 true 解析。普通新增最终使用账号的新增规则默认状态；batch_import 和 batch_import_cover 新增保留 Data.Enable 的解析结果；修改规则内容时保留原规则状态，因此 Data.Enable 不改变该修改的启停结果。
                     * @param _enable 规则状态字符串，不区分大小写；true 表示启用，false 表示禁用，省略或空字符串在结构转换时按 true 解析。普通新增最终使用账号的新增规则默认状态；batch_import 和 batch_import_cover 新增保留 Data.Enable 的解析结果；修改规则内容时保留原规则状态，因此 Data.Enable 不改变该修改的启停结果。
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
                     * 获取规则数据库数值 ID。普通新增由服务端生成；新增请求仅在 IsUseId=1 时采用 Data.Id。修改规则内容时 Data.Id 不改变目标规则 ID，服务端保留由外层 RuleUuid 定位的原 ID。当前 Schema 将本字段声明为字符串，而后端请求结构按 JSON 整数解析；传入字符串会导致请求解析失败。
                     * @return Id 规则数据库数值 ID。普通新增由服务端生成；新增请求仅在 IsUseId=1 时采用 Data.Id。修改规则内容时 Data.Id 不改变目标规则 ID，服务端保留由外层 RuleUuid 定位的原 ID。当前 Schema 将本字段声明为字符串，而后端请求结构按 JSON 整数解析；传入字符串会导致请求解析失败。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置规则数据库数值 ID。普通新增由服务端生成；新增请求仅在 IsUseId=1 时采用 Data.Id。修改规则内容时 Data.Id 不改变目标规则 ID，服务端保留由外层 RuleUuid 定位的原 ID。当前 Schema 将本字段声明为字符串，而后端请求结构按 JSON 整数解析；传入字符串会导致请求解析失败。
                     * @param _id 规则数据库数值 ID。普通新增由服务端生成；新增请求仅在 IsUseId=1 时采用 Data.Id。修改规则内容时 Data.Id 不改变目标规则 ID，服务端保留由外层 RuleUuid 定位的原 ID。当前 Schema 将本字段声明为字符串，而后端请求结构按 JSON 整数解析；传入字符串会导致请求解析失败。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取访问控制端口字符串，最多 200 字节。未使用服务模板时不能为空，可传 1..65535 的单端口、以斜杠连接且两端分别位于 1..65535 的范围、最多 15 个逗号分隔项，或以 -1/-1 表示全部端口；Protocol 为 ANY 或 ICMP 时必须为 -1/-1。使用服务模板时 Protocol、Port 可同时省略或留空；若任一字段非空，则只接受 Protocol=ANY 且 Port=-1/-1。
                     * @return Port 访问控制端口字符串，最多 200 字节。未使用服务模板时不能为空，可传 1..65535 的单端口、以斜杠连接且两端分别位于 1..65535 的范围、最多 15 个逗号分隔项，或以 -1/-1 表示全部端口；Protocol 为 ANY 或 ICMP 时必须为 -1/-1。使用服务模板时 Protocol、Port 可同时省略或留空；若任一字段非空，则只接受 Protocol=ANY 且 Port=-1/-1。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置访问控制端口字符串，最多 200 字节。未使用服务模板时不能为空，可传 1..65535 的单端口、以斜杠连接且两端分别位于 1..65535 的范围、最多 15 个逗号分隔项，或以 -1/-1 表示全部端口；Protocol 为 ANY 或 ICMP 时必须为 -1/-1。使用服务模板时 Protocol、Port 可同时省略或留空；若任一字段非空，则只接受 Protocol=ANY 且 Port=-1/-1。
                     * @param _port 访问控制端口字符串，最多 200 字节。未使用服务模板时不能为空，可传 1..65535 的单端口、以斜杠连接且两端分别位于 1..65535 的范围、最多 15 个逗号分隔项，或以 -1/-1 表示全部端口；Protocol 为 ANY 或 ICMP 时必须为 -1/-1。使用服务模板时 Protocol、Port 可同时省略或留空；若任一字段非空，则只接受 Protocol=ANY 且 Port=-1/-1。
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
                     * 获取IPv4 企业安全组协议，区分大小写。未使用服务模板时必须填写 ANY、TCP、UDP 或 ICMP；ANY 和 ICMP 仅支持 Port=-1/-1。使用服务模板时 Protocol、Port 可同时省略或留空；若填写则只接受 Protocol=ANY 且 Port=-1/-1。ICMPv6 由独立的 IPv6 企业安全组接口处理。
                     * @return Protocol IPv4 企业安全组协议，区分大小写。未使用服务模板时必须填写 ANY、TCP、UDP 或 ICMP；ANY 和 ICMP 仅支持 Port=-1/-1。使用服务模板时 Protocol、Port 可同时省略或留空；若填写则只接受 Protocol=ANY 且 Port=-1/-1。ICMPv6 由独立的 IPv6 企业安全组接口处理。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置IPv4 企业安全组协议，区分大小写。未使用服务模板时必须填写 ANY、TCP、UDP 或 ICMP；ANY 和 ICMP 仅支持 Port=-1/-1。使用服务模板时 Protocol、Port 可同时省略或留空；若填写则只接受 Protocol=ANY 且 Port=-1/-1。ICMPv6 由独立的 IPv6 企业安全组接口处理。
                     * @param _protocol IPv4 企业安全组协议，区分大小写。未使用服务模板时必须填写 ANY、TCP、UDP 或 ICMP；ANY 和 ICMP 仅支持 Port=-1/-1。使用服务模板时 Protocol、Port 可同时省略或留空；若填写则只接受 Protocol=ANY 且 Port=-1/-1。ICMPv6 由独立的 IPv6 企业安全组接口处理。
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
                     * 获取规则生效范围，使用大写 SG、LH 或无空格的逗号分隔组合；SG 表示安全组，LH 表示轻量应用服务器。新增时省略默认补为 SG；修改规则内容时省略表示保留原范围。范围包含 LH 时，SourceType、DestType 均不能为 template，且不能使用 ServiceTemplateId。
                     * @return Scope 规则生效范围，使用大写 SG、LH 或无空格的逗号分隔组合；SG 表示安全组，LH 表示轻量应用服务器。新增时省略默认补为 SG；修改规则内容时省略表示保留原范围。范围包含 LH 时，SourceType、DestType 均不能为 template，且不能使用 ServiceTemplateId。
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置规则生效范围，使用大写 SG、LH 或无空格的逗号分隔组合；SG 表示安全组，LH 表示轻量应用服务器。新增时省略默认补为 SG；修改规则内容时省略表示保留原范围。范围包含 LH 时，SourceType、DestType 均不能为 template，且不能使用 ServiceTemplateId。
                     * @param _scope 规则生效范围，使用大写 SG、LH 或无空格的逗号分隔组合；SG 表示安全组，LH 表示轻量应用服务器。新增时省略默认补为 SG；修改规则内容时省略表示保留原范围。范围包含 LH 时，SourceType、DestType 均不能为 template，且不能使用 ServiceTemplateId。
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
                     * 获取协议端口模板 ID，最多 50 字节，必须属于当前账号或为当前账号可用的公共模板。非空时 Protocol、Port 可同时省略或留空；若任一字段非空，则只接受 Protocol=ANY 且 Port=-1/-1。Scope 包含 LH 时不能使用服务模板。
                     * @return ServiceTemplateId 协议端口模板 ID，最多 50 字节，必须属于当前账号或为当前账号可用的公共模板。非空时 Protocol、Port 可同时省略或留空；若任一字段非空，则只接受 Protocol=ANY 且 Port=-1/-1。Scope 包含 LH 时不能使用服务模板。
                     * 
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置协议端口模板 ID，最多 50 字节，必须属于当前账号或为当前账号可用的公共模板。非空时 Protocol、Port 可同时省略或留空；若任一字段非空，则只接受 Protocol=ANY 且 Port=-1/-1。Scope 包含 LH 时不能使用服务模板。
                     * @param _serviceTemplateId 协议端口模板 ID，最多 50 字节，必须属于当前账号或为当前账号可用的公共模板。非空时 Protocol、Port 可同时省略或留空；若任一字段非空，则只接受 Protocol=ANY 且 Port=-1/-1。Scope 包含 LH 时不能使用服务模板。
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
                     * 获取Schema 中声明的规则内部 UUID 字段。当前新增和修改请求结构绑定的 JSON 键名为 UuId 而不是 Uid，因此传入本字段不会参与这两个接口的内部 UUID 生成或复用。
                     * @return Uid Schema 中声明的规则内部 UUID 字段。当前新增和修改请求结构绑定的 JSON 键名为 UuId 而不是 Uid，因此传入本字段不会参与这两个接口的内部 UUID 生成或复用。
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置Schema 中声明的规则内部 UUID 字段。当前新增和修改请求结构绑定的 JSON 键名为 UuId 而不是 Uid，因此传入本字段不会参与这两个接口的内部 UUID 生成或复用。
                     * @param _uid Schema 中声明的规则内部 UUID 字段。当前新增和修改请求结构绑定的 JSON 键名为 UuId 而不是 Uid，因此传入本字段不会参与这两个接口的内部 UUID 生成或复用。
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                private:

                    /**
                     * 规则用途或使用场景的描述，不能为空，最多 100 个 Unicode 字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 访问目的内容，非空且最多 512 字节，格式由 DestType 决定：net 使用 IPv4 IP/CIDR，且不接受裸地址 0.0.0.0，表示全部 IPv4 地址时使用 0.0.0.0/0；template 使用可用的地址模板 ID；instance 使用属于当前账号的资产实例 ID；resourcegroup 使用当前账号的资产分组 ID；tag 使用当前账号已存在的资源标签 JSON 字符串，例如 {\"Key\":\"标签键\",\"Value\":\"标签值\"}；region 使用支持的地域标识；dnsparse 使用合法域名。DestType=dnsparse 时服务端将内容转换为小写，并检查域名格式和域名解析配额。
                     */
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * 访问目的类型，不区分大小写，可传 net、template、instance、resourcegroup、tag、region 或 dnsparse。instance 的具体资产类型由 DestContent 的实例 ID 前缀识别；template、instance、resourcegroup、tag、region 对应的内容必须对当前账号有效。
                     */
                    std::string m_destType;
                    bool m_destTypeHasBeenSet;

                    /**
                     * 规则顺序的十进制整数字符串；-1 转换为 uint32 最大值。新增时 Type=0 或 1 会按 Data 数组顺序重新计算最终 Sequence；Type=2 使用首条规则的 OrderIndex 作为插入位置，超过当前最大 Sequence 时按末尾新增处理。修改规则内容时 -1 会被拒绝，超过当前最大 Sequence 的值归一化为当前最大 Sequence。
                     */
                    std::string m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 访问控制动作，不区分大小写。accept 表示放行，drop 表示拒绝，log 表示仅记录；isolateinaccept、isolateoutaccept 分别按放行动作写入并标记入向或出向隔离来源，isolateindrop、isolateoutdrop 分别按拒绝动作写入并标记入向或出向隔离来源。
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 访问源内容，非空且最多 512 字节，格式由 SourceType 决定：net 使用 IPv4 IP/CIDR，且不接受裸地址 0.0.0.0，表示全部 IPv4 地址时使用 0.0.0.0/0；template 使用可用的地址模板 ID；instance 使用属于当前账号的资产实例 ID；resourcegroup 使用当前账号的资产分组 ID；tag 使用当前账号已存在的资源标签 JSON 字符串，例如 {\"Key\":\"标签键\",\"Value\":\"标签值\"}；region 使用支持的地域标识；dnsparse 使用字符串内容。SourceType=dnsparse 时，服务端接受该类型，但不执行目的域名的小写归一化、域名格式校验或域名解析配额检查。
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 访问源类型，不区分大小写，可传 net、template、instance、resourcegroup、tag、region 或 dnsparse。instance 的具体资产类型由 SourceContent 的实例 ID 前缀识别；template、instance、resourcegroup、tag、region 对应的内容必须对当前账号有效。dnsparse 作为访问源时不执行目的域名的小写归一化、域名格式校验或域名解析配额检查。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 规则状态字符串，不区分大小写；true 表示启用，false 表示禁用，省略或空字符串在结构转换时按 true 解析。普通新增最终使用账号的新增规则默认状态；batch_import 和 batch_import_cover 新增保留 Data.Enable 的解析结果；修改规则内容时保留原规则状态，因此 Data.Enable 不改变该修改的启停结果。
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 规则数据库数值 ID。普通新增由服务端生成；新增请求仅在 IsUseId=1 时采用 Data.Id。修改规则内容时 Data.Id 不改变目标规则 ID，服务端保留由外层 RuleUuid 定位的原 ID。当前 Schema 将本字段声明为字符串，而后端请求结构按 JSON 整数解析；传入字符串会导致请求解析失败。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 访问控制端口字符串，最多 200 字节。未使用服务模板时不能为空，可传 1..65535 的单端口、以斜杠连接且两端分别位于 1..65535 的范围、最多 15 个逗号分隔项，或以 -1/-1 表示全部端口；Protocol 为 ANY 或 ICMP 时必须为 -1/-1。使用服务模板时 Protocol、Port 可同时省略或留空；若任一字段非空，则只接受 Protocol=ANY 且 Port=-1/-1。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * IPv4 企业安全组协议，区分大小写。未使用服务模板时必须填写 ANY、TCP、UDP 或 ICMP；ANY 和 ICMP 仅支持 Port=-1/-1。使用服务模板时 Protocol、Port 可同时省略或留空；若填写则只接受 Protocol=ANY 且 Port=-1/-1。ICMPv6 由独立的 IPv6 企业安全组接口处理。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 规则生效范围，使用大写 SG、LH 或无空格的逗号分隔组合；SG 表示安全组，LH 表示轻量应用服务器。新增时省略默认补为 SG；修改规则内容时省略表示保留原范围。范围包含 LH 时，SourceType、DestType 均不能为 template，且不能使用 ServiceTemplateId。
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 协议端口模板 ID，最多 50 字节，必须属于当前账号或为当前账号可用的公共模板。非空时 Protocol、Port 可同时省略或留空；若任一字段非空，则只接受 Protocol=ANY 且 Port=-1/-1。Scope 包含 LH 时不能使用服务模板。
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                    /**
                     * Schema 中声明的规则内部 UUID 字段。当前新增和修改请求结构绑定的 JSON 键名为 UuId 而不是 Uid，因此传入本字段不会参与这两个接口的内部 UUID 生成或复用。
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPRULE_H_
