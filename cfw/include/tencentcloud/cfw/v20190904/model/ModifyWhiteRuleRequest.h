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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYWHITERULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYWHITERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/IdsWhiteRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyWhiteRule请求参数结构体
                */
                class ModifyWhiteRuleRequest : public AbstractModel
                {
                public:
                    ModifyWhiteRuleRequest();
                    ~ModifyWhiteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取JSON object，提交完整策略。将 DescribeWhiteRule.Data[].WhiteId 写入 Rule.Info.WhiteId；RuleName、FwType、EndTime、Comment、Info 按本次请求整体保存，Id 和 IdsRuleName 由服务端管理。
                     * @return Rule JSON object，提交完整策略。将 DescribeWhiteRule.Data[].WhiteId 写入 Rule.Info.WhiteId；RuleName、FwType、EndTime、Comment、Info 按本次请求整体保存，Id 和 IdsRuleName 由服务端管理。
                     * 
                     */
                    IdsWhiteRule GetRule() const;

                    /**
                     * 设置JSON object，提交完整策略。将 DescribeWhiteRule.Data[].WhiteId 写入 Rule.Info.WhiteId；RuleName、FwType、EndTime、Comment、Info 按本次请求整体保存，Id 和 IdsRuleName 由服务端管理。
                     * @param _rule JSON object，提交完整策略。将 DescribeWhiteRule.Data[].WhiteId 写入 Rule.Info.WhiteId；RuleName、FwType、EndTime、Comment、Info 按本次请求整体保存，Id 和 IdsRuleName 由服务端管理。
                     * 
                     */
                    void SetRule(const IdsWhiteRule& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取使用 JSON integer，沿用 DescribeWhiteRule.Data[].RuleType：
- 2 精确外部 IP：Rule.Info.SrcIP、Rule.Info.DstIP 两个字段中恰好填写一个。
- 3 域名。
- 4 威胁情报。
- 5 资产：Rule.Info.SrcIP、Rule.Info.DstIP 两个字段中恰好填写一个。
- 6 IPS 自定义：Rule.Info.IdsRuleId 必填，Rule.Info.SrcIP、Rule.Info.DstIP 至少一项为具体 IP；Rule.FwType=16 时目的 IPv4 可带端口；Rule.FwType 包含 1 时具体 IP 至少一项属于当前账号资产。
- 8 IP 扩展：在 Rule.Info 中填写 CIDR、端口或源/目的组合。
- 9 NDR 扩展：Rule.FwType=16，Rule.Info 至少包含一个 NDR 专属条件；搭配 IdsRuleId 时同时填写 Rule.Info.SrcIP 或 Rule.Info.DstIP。
                     * @return RuleType 使用 JSON integer，沿用 DescribeWhiteRule.Data[].RuleType：
- 2 精确外部 IP：Rule.Info.SrcIP、Rule.Info.DstIP 两个字段中恰好填写一个。
- 3 域名。
- 4 威胁情报。
- 5 资产：Rule.Info.SrcIP、Rule.Info.DstIP 两个字段中恰好填写一个。
- 6 IPS 自定义：Rule.Info.IdsRuleId 必填，Rule.Info.SrcIP、Rule.Info.DstIP 至少一项为具体 IP；Rule.FwType=16 时目的 IPv4 可带端口；Rule.FwType 包含 1 时具体 IP 至少一项属于当前账号资产。
- 8 IP 扩展：在 Rule.Info 中填写 CIDR、端口或源/目的组合。
- 9 NDR 扩展：Rule.FwType=16，Rule.Info 至少包含一个 NDR 专属条件；搭配 IdsRuleId 时同时填写 Rule.Info.SrcIP 或 Rule.Info.DstIP。
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置使用 JSON integer，沿用 DescribeWhiteRule.Data[].RuleType：
- 2 精确外部 IP：Rule.Info.SrcIP、Rule.Info.DstIP 两个字段中恰好填写一个。
- 3 域名。
- 4 威胁情报。
- 5 资产：Rule.Info.SrcIP、Rule.Info.DstIP 两个字段中恰好填写一个。
- 6 IPS 自定义：Rule.Info.IdsRuleId 必填，Rule.Info.SrcIP、Rule.Info.DstIP 至少一项为具体 IP；Rule.FwType=16 时目的 IPv4 可带端口；Rule.FwType 包含 1 时具体 IP 至少一项属于当前账号资产。
- 8 IP 扩展：在 Rule.Info 中填写 CIDR、端口或源/目的组合。
- 9 NDR 扩展：Rule.FwType=16，Rule.Info 至少包含一个 NDR 专属条件；搭配 IdsRuleId 时同时填写 Rule.Info.SrcIP 或 Rule.Info.DstIP。
                     * @param _ruleType 使用 JSON integer，沿用 DescribeWhiteRule.Data[].RuleType：
- 2 精确外部 IP：Rule.Info.SrcIP、Rule.Info.DstIP 两个字段中恰好填写一个。
- 3 域名。
- 4 威胁情报。
- 5 资产：Rule.Info.SrcIP、Rule.Info.DstIP 两个字段中恰好填写一个。
- 6 IPS 自定义：Rule.Info.IdsRuleId 必填，Rule.Info.SrcIP、Rule.Info.DstIP 至少一项为具体 IP；Rule.FwType=16 时目的 IPv4 可带端口；Rule.FwType 包含 1 时具体 IP 至少一项属于当前账号资产。
- 8 IP 扩展：在 Rule.Info 中填写 CIDR、端口或源/目的组合。
- 9 NDR 扩展：Rule.FwType=16，Rule.Info 至少包含一个 NDR 专属条件；搭配 IdsRuleId 时同时填写 Rule.Info.SrcIP 或 Rule.Info.DstIP。
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取使用 JSON integer。仅 RuleType=2 使用：0 或省略表示保留冲突封禁；1 表示删除同 IP、同方向冲突封禁后保存，选择 1 前先确认该删除操作。其它 RuleType 省略本参数。
                     * @return CoverDuplicate 使用 JSON integer。仅 RuleType=2 使用：0 或省略表示保留冲突封禁；1 表示删除同 IP、同方向冲突封禁后保存，选择 1 前先确认该删除操作。其它 RuleType 省略本参数。
                     * 
                     */
                    int64_t GetCoverDuplicate() const;

                    /**
                     * 设置使用 JSON integer。仅 RuleType=2 使用：0 或省略表示保留冲突封禁；1 表示删除同 IP、同方向冲突封禁后保存，选择 1 前先确认该删除操作。其它 RuleType 省略本参数。
                     * @param _coverDuplicate 使用 JSON integer。仅 RuleType=2 使用：0 或省略表示保留冲突封禁；1 表示删除同 IP、同方向冲突封禁后保存，选择 1 前先确认该删除操作。其它 RuleType 省略本参数。
                     * 
                     */
                    void SetCoverDuplicate(const int64_t& _coverDuplicate);

                    /**
                     * 判断参数 CoverDuplicate 是否已赋值
                     * @return CoverDuplicate 是否已赋值
                     * 
                     */
                    bool CoverDuplicateHasBeenSet() const;

                private:

                    /**
                     * JSON object，提交完整策略。将 DescribeWhiteRule.Data[].WhiteId 写入 Rule.Info.WhiteId；RuleName、FwType、EndTime、Comment、Info 按本次请求整体保存，Id 和 IdsRuleName 由服务端管理。
                     */
                    IdsWhiteRule m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 使用 JSON integer，沿用 DescribeWhiteRule.Data[].RuleType：
- 2 精确外部 IP：Rule.Info.SrcIP、Rule.Info.DstIP 两个字段中恰好填写一个。
- 3 域名。
- 4 威胁情报。
- 5 资产：Rule.Info.SrcIP、Rule.Info.DstIP 两个字段中恰好填写一个。
- 6 IPS 自定义：Rule.Info.IdsRuleId 必填，Rule.Info.SrcIP、Rule.Info.DstIP 至少一项为具体 IP；Rule.FwType=16 时目的 IPv4 可带端口；Rule.FwType 包含 1 时具体 IP 至少一项属于当前账号资产。
- 8 IP 扩展：在 Rule.Info 中填写 CIDR、端口或源/目的组合。
- 9 NDR 扩展：Rule.FwType=16，Rule.Info 至少包含一个 NDR 专属条件；搭配 IdsRuleId 时同时填写 Rule.Info.SrcIP 或 Rule.Info.DstIP。
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 使用 JSON integer。仅 RuleType=2 使用：0 或省略表示保留冲突封禁；1 表示删除同 IP、同方向冲突封禁后保存，选择 1 前先确认该删除操作。其它 RuleType 省略本参数。
                     */
                    int64_t m_coverDuplicate;
                    bool m_coverDuplicateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYWHITERULEREQUEST_H_
