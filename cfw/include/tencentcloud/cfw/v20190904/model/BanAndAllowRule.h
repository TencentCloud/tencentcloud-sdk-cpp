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
                     * 获取生效方向，使用逗号分隔的整数：0 互联网出站、1 互联网入站、2 双向、3 东西向、4 情报误报反馈、5 内网访问源、6 内网访问目的。所有 RuleType 均须显式传入非空值。RuleType=6 会先校验本字段，再根据 CustomRule 重新计算最终方向；例如私网源到私网目的可传 5,6，创建后应查询确认最终方向。
                     * @return DirectionList 生效方向，使用逗号分隔的整数：0 互联网出站、1 互联网入站、2 双向、3 东西向、4 情报误报反馈、5 内网访问源、6 内网访问目的。所有 RuleType 均须显式传入非空值。RuleType=6 会先校验本字段，再根据 CustomRule 重新计算最终方向；例如私网源到私网目的可传 5,6，创建后应查询确认最终方向。
                     * 
                     */
                    std::string GetDirectionList() const;

                    /**
                     * 设置生效方向，使用逗号分隔的整数：0 互联网出站、1 互联网入站、2 双向、3 东西向、4 情报误报反馈、5 内网访问源、6 内网访问目的。所有 RuleType 均须显式传入非空值。RuleType=6 会先校验本字段，再根据 CustomRule 重新计算最终方向；例如私网源到私网目的可传 5,6，创建后应查询确认最终方向。
                     * @param _directionList 生效方向，使用逗号分隔的整数：0 互联网出站、1 互联网入站、2 双向、3 东西向、4 情报误报反馈、5 内网访问源、6 内网访问目的。所有 RuleType 均须显式传入非空值。RuleType=6 会先校验本字段，再根据 CustomRule 重新计算最终方向；例如私网源到私网目的可传 5,6，创建后应查询确认最终方向。
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
                     * 获取规则截止时间，使用北京时间（UTC+8）的 YYYY-MM-DD HH:MM:SS 格式，且不得早于服务器处理时刻；3000-01-01 00:00:00 表示长期有效。
                     * @return EndTime 规则截止时间，使用北京时间（UTC+8）的 YYYY-MM-DD HH:MM:SS 格式，且不得早于服务器处理时刻；3000-01-01 00:00:00 表示长期有效。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置规则截止时间，使用北京时间（UTC+8）的 YYYY-MM-DD HH:MM:SS 格式，且不得早于服务器处理时刻；3000-01-01 00:00:00 表示长期有效。
                     * @param _endTime 规则截止时间，使用北京时间（UTC+8）的 YYYY-MM-DD HH:MM:SS 格式，且不得早于服务器处理时刻；3000-01-01 00:00:00 表示长期有效。
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
                     * 获取RuleType=6 的生效引擎位图：1 互联网边界旁路、2 NAT 防火墙、4 VPC 防火墙、8 互联网边界串行、16 NDR；组合值按位相加，取值范围为 0 至 31。非零值会与源、目的地址适用的引擎取交集，并保留 NDR 位；结果为 0 时，IPv6 或私网 IPv4 地址使用 6，其它地址使用 15。其它 RuleType 不使用该字段。
                     * @return FwType RuleType=6 的生效引擎位图：1 互联网边界旁路、2 NAT 防火墙、4 VPC 防火墙、8 互联网边界串行、16 NDR；组合值按位相加，取值范围为 0 至 31。非零值会与源、目的地址适用的引擎取交集，并保留 NDR 位；结果为 0 时，IPv6 或私网 IPv4 地址使用 6，其它地址使用 15。其它 RuleType 不使用该字段。
                     * 
                     */
                    int64_t GetFwType() const;

                    /**
                     * 设置RuleType=6 的生效引擎位图：1 互联网边界旁路、2 NAT 防火墙、4 VPC 防火墙、8 互联网边界串行、16 NDR；组合值按位相加，取值范围为 0 至 31。非零值会与源、目的地址适用的引擎取交集，并保留 NDR 位；结果为 0 时，IPv6 或私网 IPv4 地址使用 6，其它地址使用 15。其它 RuleType 不使用该字段。
                     * @param _fwType RuleType=6 的生效引擎位图：1 互联网边界旁路、2 NAT 防火墙、4 VPC 防火墙、8 互联网边界串行、16 NDR；组合值按位相加，取值范围为 0 至 31。非零值会与源、目的地址适用的引擎取交集，并保留 NDR 位；结果为 0 时，IPv6 或私网 IPv4 地址使用 6，其它地址使用 15。其它 RuleType 不使用该字段。
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
                     * 获取规则对象。RuleType=1 或 2 时传 IP 地址，RuleType=3 时传域名，RuleType=4 时传情报标识，RuleType=5 时使用 DescribeCfwAssets 返回的 assets[].instance_id。RuleType=6 新建时必须显式传空字符串，由服务生成规则 ID，不可省略。更新既有自定义规则时传入该规则的现有 ID。
                     * @return Ioc 规则对象。RuleType=1 或 2 时传 IP 地址，RuleType=3 时传域名，RuleType=4 时传情报标识，RuleType=5 时使用 DescribeCfwAssets 返回的 assets[].instance_id。RuleType=6 新建时必须显式传空字符串，由服务生成规则 ID，不可省略。更新既有自定义规则时传入该规则的现有 ID。
                     * 
                     */
                    std::string GetIoc() const;

                    /**
                     * 设置规则对象。RuleType=1 或 2 时传 IP 地址，RuleType=3 时传域名，RuleType=4 时传情报标识，RuleType=5 时使用 DescribeCfwAssets 返回的 assets[].instance_id。RuleType=6 新建时必须显式传空字符串，由服务生成规则 ID，不可省略。更新既有自定义规则时传入该规则的现有 ID。
                     * @param _ioc 规则对象。RuleType=1 或 2 时传 IP 地址，RuleType=3 时传域名，RuleType=4 时传情报标识，RuleType=5 时使用 DescribeCfwAssets 返回的 assets[].instance_id。RuleType=6 新建时必须显式传空字符串，由服务生成规则 ID，不可省略。更新既有自定义规则时传入该规则的现有 ID。
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
                     * 生效方向，使用逗号分隔的整数：0 互联网出站、1 互联网入站、2 双向、3 东西向、4 情报误报反馈、5 内网访问源、6 内网访问目的。所有 RuleType 均须显式传入非空值。RuleType=6 会先校验本字段，再根据 CustomRule 重新计算最终方向；例如私网源到私网目的可传 5,6，创建后应查询确认最终方向。
                     */
                    std::string m_directionList;
                    bool m_directionListHasBeenSet;

                    /**
                     * 规则截止时间，使用北京时间（UTC+8）的 YYYY-MM-DD HH:MM:SS 格式，且不得早于服务器处理时刻；3000-01-01 00:00:00 表示长期有效。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * RuleType=6 的生效引擎位图：1 互联网边界旁路、2 NAT 防火墙、4 VPC 防火墙、8 互联网边界串行、16 NDR；组合值按位相加，取值范围为 0 至 31。非零值会与源、目的地址适用的引擎取交集，并保留 NDR 位；结果为 0 时，IPv6 或私网 IPv4 地址使用 6，其它地址使用 15。其它 RuleType 不使用该字段。
                     */
                    int64_t m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * 规则对象。RuleType=1 或 2 时传 IP 地址，RuleType=3 时传域名，RuleType=4 时传情报标识，RuleType=5 时使用 DescribeCfwAssets 返回的 assets[].instance_id。RuleType=6 新建时必须显式传空字符串，由服务生成规则 ID，不可省略。更新既有自定义规则时传入该规则的现有 ID。
                     */
                    std::string m_ioc;
                    bool m_iocHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_BANANDALLOWRULE_H_
