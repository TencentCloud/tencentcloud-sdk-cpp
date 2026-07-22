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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_BANANDALLOWRULE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_BANANDALLOWRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CustomWhiteRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 封禁或放通规则条目；各字段的校验、归一化和实际用途由 RuleType 决定。
                */
                class BanAndAllowRule : public AbstractModel
                {
                public:
                    BanAndAllowRule();
                    ~BanAndAllowRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则备注，最多 200 个字符。
                     * @return Comment 规则备注，最多 200 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置规则备注，最多 200 个字符。
                     * @param _comment 规则备注，最多 200 个字符。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取自定义放通规则详情。RuleType=6 时使用；其它规则类型不读取此字段。
                     * @return CustomRule 自定义放通规则详情。RuleType=6 时使用；其它规则类型不读取此字段。
                     * 
                     */
                    CustomWhiteRule GetCustomRule() const;

                    /**
                     * 设置自定义放通规则详情。RuleType=6 时使用；其它规则类型不读取此字段。
                     * @param _customRule 自定义放通规则详情。RuleType=6 时使用；其它规则类型不读取此字段。
                     * 
                     */
                    void SetCustomRule(const CustomWhiteRule& _customRule);

                    /**
                     * 判断参数 CustomRule 是否已赋值
                     * @return CustomRule 是否已赋值
                     * 
                     */
                    bool CustomRuleHasBeenSet() const;

                    /**
                     * 获取生效方向，使用逗号分隔的整数：0 互联网出站、1 互联网入站、2 双向、3 东西向、4 情报误报反馈、5 内网访问源、6 内网访问目的；每项都必须属于 0 至 6。该字段不可为空；RuleType=6 时通过初始校验后，处理器会根据 CustomRule 的源、目的地址重新计算方向。
                     * @return DirectionList 生效方向，使用逗号分隔的整数：0 互联网出站、1 互联网入站、2 双向、3 东西向、4 情报误报反馈、5 内网访问源、6 内网访问目的；每项都必须属于 0 至 6。该字段不可为空；RuleType=6 时通过初始校验后，处理器会根据 CustomRule 的源、目的地址重新计算方向。
                     * 
                     */
                    std::string GetDirectionList() const;

                    /**
                     * 设置生效方向，使用逗号分隔的整数：0 互联网出站、1 互联网入站、2 双向、3 东西向、4 情报误报反馈、5 内网访问源、6 内网访问目的；每项都必须属于 0 至 6。该字段不可为空；RuleType=6 时通过初始校验后，处理器会根据 CustomRule 的源、目的地址重新计算方向。
                     * @param _directionList 生效方向，使用逗号分隔的整数：0 互联网出站、1 互联网入站、2 双向、3 东西向、4 情报误报反馈、5 内网访问源、6 内网访问目的；每项都必须属于 0 至 6。该字段不可为空；RuleType=6 时通过初始校验后，处理器会根据 CustomRule 的源、目的地址重新计算方向。
                     * 
                     */
                    void SetDirectionList(const std::string& _directionList);

                    /**
                     * 判断参数 DirectionList 是否已赋值
                     * @return DirectionList 是否已赋值
                     * 
                     */
                    bool DirectionListHasBeenSet() const;

                    /**
                     * 获取规则截止时间，必须使用 YYYY-MM-DD HH:MM:SS 格式且不得早于服务器处理时刻；3000-01-01 00:00:00 作为长期有效时间。
                     * @return EndTime 规则截止时间，必须使用 YYYY-MM-DD HH:MM:SS 格式且不得早于服务器处理时刻；3000-01-01 00:00:00 作为长期有效时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置规则截止时间，必须使用 YYYY-MM-DD HH:MM:SS 格式且不得早于服务器处理时刻；3000-01-01 00:00:00 作为长期有效时间。
                     * @param _endTime 规则截止时间，必须使用 YYYY-MM-DD HH:MM:SS 格式且不得早于服务器处理时刻；3000-01-01 00:00:00 作为长期有效时间。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取自定义放通规则的生效引擎位图：1 互联网边界旁路、2 NAT 防火墙、4 VPC 防火墙、8 互联网边界串行、16 NDR，组合值按位相加。处理器接受 0 至 31。RuleType=6 时，非零值会按源、目的地址组合与适用引擎位求交，并保留 NDR 位 16；归一化结果大于 0 时使用该结果，结果为 0 时与省略或传 0 相同：任一地址为 IPv6 或私网 IPv4 则实际使用 6，否则实际使用 15。其它 RuleType 仅校验该字段而不使用其值。
                     * @return FwType 自定义放通规则的生效引擎位图：1 互联网边界旁路、2 NAT 防火墙、4 VPC 防火墙、8 互联网边界串行、16 NDR，组合值按位相加。处理器接受 0 至 31。RuleType=6 时，非零值会按源、目的地址组合与适用引擎位求交，并保留 NDR 位 16；归一化结果大于 0 时使用该结果，结果为 0 时与省略或传 0 相同：任一地址为 IPv6 或私网 IPv4 则实际使用 6，否则实际使用 15。其它 RuleType 仅校验该字段而不使用其值。
                     * 
                     */
                    int64_t GetFwType() const;

                    /**
                     * 设置自定义放通规则的生效引擎位图：1 互联网边界旁路、2 NAT 防火墙、4 VPC 防火墙、8 互联网边界串行、16 NDR，组合值按位相加。处理器接受 0 至 31。RuleType=6 时，非零值会按源、目的地址组合与适用引擎位求交，并保留 NDR 位 16；归一化结果大于 0 时使用该结果，结果为 0 时与省略或传 0 相同：任一地址为 IPv6 或私网 IPv4 则实际使用 6，否则实际使用 15。其它 RuleType 仅校验该字段而不使用其值。
                     * @param _fwType 自定义放通规则的生效引擎位图：1 互联网边界旁路、2 NAT 防火墙、4 VPC 防火墙、8 互联网边界串行、16 NDR，组合值按位相加。处理器接受 0 至 31。RuleType=6 时，非零值会按源、目的地址组合与适用引擎位求交，并保留 NDR 位 16；归一化结果大于 0 时使用该结果，结果为 0 时与省略或传 0 相同：任一地址为 IPv6 或私网 IPv4 则实际使用 6，否则实际使用 15。其它 RuleType 仅校验该字段而不使用其值。
                     * 
                     */
                    void SetFwType(const int64_t& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                    /**
                     * 获取规则对象。RuleType=1 或 2 时必须是 IP 地址，RuleType=3 时必须是合法域名，RuleType=4 时不能为空，RuleType=5 时必须是资产表中存在的实例 ID；RuleType=6 时表示自定义规则 ID：新增时可省略并由处理器生成；修改时作为既有规则的查询和更新键，省略时不会命中既有规则。其它受理的 RuleType 不校验对象格式。
                     * @return Ioc 规则对象。RuleType=1 或 2 时必须是 IP 地址，RuleType=3 时必须是合法域名，RuleType=4 时不能为空，RuleType=5 时必须是资产表中存在的实例 ID；RuleType=6 时表示自定义规则 ID：新增时可省略并由处理器生成；修改时作为既有规则的查询和更新键，省略时不会命中既有规则。其它受理的 RuleType 不校验对象格式。
                     * 
                     */
                    std::string GetIoc() const;

                    /**
                     * 设置规则对象。RuleType=1 或 2 时必须是 IP 地址，RuleType=3 时必须是合法域名，RuleType=4 时不能为空，RuleType=5 时必须是资产表中存在的实例 ID；RuleType=6 时表示自定义规则 ID：新增时可省略并由处理器生成；修改时作为既有规则的查询和更新键，省略时不会命中既有规则。其它受理的 RuleType 不校验对象格式。
                     * @param _ioc 规则对象。RuleType=1 或 2 时必须是 IP 地址，RuleType=3 时必须是合法域名，RuleType=4 时不能为空，RuleType=5 时必须是资产表中存在的实例 ID；RuleType=6 时表示自定义规则 ID：新增时可省略并由处理器生成；修改时作为既有规则的查询和更新键，省略时不会命中既有规则。其它受理的 RuleType 不校验对象格式。
                     * 
                     */
                    void SetIoc(const std::string& _ioc);

                    /**
                     * 判断参数 Ioc 是否已赋值
                     * @return Ioc 是否已赋值
                     * 
                     */
                    bool IocHasBeenSet() const;

                private:

                    /**
                     * 规则备注，最多 200 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 自定义放通规则详情。RuleType=6 时使用；其它规则类型不读取此字段。
                     */
                    CustomWhiteRule m_customRule;
                    bool m_customRuleHasBeenSet;

                    /**
                     * 生效方向，使用逗号分隔的整数：0 互联网出站、1 互联网入站、2 双向、3 东西向、4 情报误报反馈、5 内网访问源、6 内网访问目的；每项都必须属于 0 至 6。该字段不可为空；RuleType=6 时通过初始校验后，处理器会根据 CustomRule 的源、目的地址重新计算方向。
                     */
                    std::string m_directionList;
                    bool m_directionListHasBeenSet;

                    /**
                     * 规则截止时间，必须使用 YYYY-MM-DD HH:MM:SS 格式且不得早于服务器处理时刻；3000-01-01 00:00:00 作为长期有效时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 自定义放通规则的生效引擎位图：1 互联网边界旁路、2 NAT 防火墙、4 VPC 防火墙、8 互联网边界串行、16 NDR，组合值按位相加。处理器接受 0 至 31。RuleType=6 时，非零值会按源、目的地址组合与适用引擎位求交，并保留 NDR 位 16；归一化结果大于 0 时使用该结果，结果为 0 时与省略或传 0 相同：任一地址为 IPv6 或私网 IPv4 则实际使用 6，否则实际使用 15。其它 RuleType 仅校验该字段而不使用其值。
                     */
                    int64_t m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * 规则对象。RuleType=1 或 2 时必须是 IP 地址，RuleType=3 时必须是合法域名，RuleType=4 时不能为空，RuleType=5 时必须是资产表中存在的实例 ID；RuleType=6 时表示自定义规则 ID：新增时可省略并由处理器生成；修改时作为既有规则的查询和更新键，省略时不会命中既有规则。其它受理的 RuleType 不校验对象格式。
                     */
                    std::string m_ioc;
                    bool m_iocHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_BANANDALLOWRULE_H_
