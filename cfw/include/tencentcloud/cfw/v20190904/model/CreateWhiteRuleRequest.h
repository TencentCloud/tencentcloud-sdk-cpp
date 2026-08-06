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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEWHITERULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEWHITERULEREQUEST_H_

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
                * CreateWhiteRule请求参数结构体
                */
                class CreateWhiteRuleRequest : public AbstractModel
                {
                public:
                    CreateWhiteRuleRequest();
                    ~CreateWhiteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取使用 JSON integer 表示白名单类型，一次请求使用一种：
- 2 精确外部 IP：Rules[].Info.SrcIP、Rules[].Info.DstIP 两个字段中恰好填写一个。
- 3 域名：填写 Rules[].Info.Ioc。
- 4 威胁情报：填写 Rules[].Info.Ioc，FwType=1。
- 5 资产：Rules[].Info.SrcIP、Rules[].Info.DstIP 两个字段中恰好填写一个，值取 DescribeCfwAssets 的 instance_id。
- 6 IPS 自定义：Rules[].Info.IdsRuleId 必填，Rules[].Info.SrcIP、Rules[].Info.DstIP 至少一项为具体 IP；FwType=16 时目的 IPv4 可带端口；FwType 包含 1 时具体 IP 至少一项属于当前账号资产。
- 8 IP 扩展：在 Rules[].Info 中填写 CIDR、端口或源/目的组合。
- 9 NDR 扩展：FwType=16，Rules[].Info 至少填写一个 UserAgent、Url、XForwardedFor、HostName、FileName、FileMd5；可组合 SrcIP、DstIP，搭配 IdsRuleId 时同时填写 SrcIP 或 DstIP。
                     * @return RuleType 使用 JSON integer 表示白名单类型，一次请求使用一种：
- 2 精确外部 IP：Rules[].Info.SrcIP、Rules[].Info.DstIP 两个字段中恰好填写一个。
- 3 域名：填写 Rules[].Info.Ioc。
- 4 威胁情报：填写 Rules[].Info.Ioc，FwType=1。
- 5 资产：Rules[].Info.SrcIP、Rules[].Info.DstIP 两个字段中恰好填写一个，值取 DescribeCfwAssets 的 instance_id。
- 6 IPS 自定义：Rules[].Info.IdsRuleId 必填，Rules[].Info.SrcIP、Rules[].Info.DstIP 至少一项为具体 IP；FwType=16 时目的 IPv4 可带端口；FwType 包含 1 时具体 IP 至少一项属于当前账号资产。
- 8 IP 扩展：在 Rules[].Info 中填写 CIDR、端口或源/目的组合。
- 9 NDR 扩展：FwType=16，Rules[].Info 至少填写一个 UserAgent、Url、XForwardedFor、HostName、FileName、FileMd5；可组合 SrcIP、DstIP，搭配 IdsRuleId 时同时填写 SrcIP 或 DstIP。
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置使用 JSON integer 表示白名单类型，一次请求使用一种：
- 2 精确外部 IP：Rules[].Info.SrcIP、Rules[].Info.DstIP 两个字段中恰好填写一个。
- 3 域名：填写 Rules[].Info.Ioc。
- 4 威胁情报：填写 Rules[].Info.Ioc，FwType=1。
- 5 资产：Rules[].Info.SrcIP、Rules[].Info.DstIP 两个字段中恰好填写一个，值取 DescribeCfwAssets 的 instance_id。
- 6 IPS 自定义：Rules[].Info.IdsRuleId 必填，Rules[].Info.SrcIP、Rules[].Info.DstIP 至少一项为具体 IP；FwType=16 时目的 IPv4 可带端口；FwType 包含 1 时具体 IP 至少一项属于当前账号资产。
- 8 IP 扩展：在 Rules[].Info 中填写 CIDR、端口或源/目的组合。
- 9 NDR 扩展：FwType=16，Rules[].Info 至少填写一个 UserAgent、Url、XForwardedFor、HostName、FileName、FileMd5；可组合 SrcIP、DstIP，搭配 IdsRuleId 时同时填写 SrcIP 或 DstIP。
                     * @param _ruleType 使用 JSON integer 表示白名单类型，一次请求使用一种：
- 2 精确外部 IP：Rules[].Info.SrcIP、Rules[].Info.DstIP 两个字段中恰好填写一个。
- 3 域名：填写 Rules[].Info.Ioc。
- 4 威胁情报：填写 Rules[].Info.Ioc，FwType=1。
- 5 资产：Rules[].Info.SrcIP、Rules[].Info.DstIP 两个字段中恰好填写一个，值取 DescribeCfwAssets 的 instance_id。
- 6 IPS 自定义：Rules[].Info.IdsRuleId 必填，Rules[].Info.SrcIP、Rules[].Info.DstIP 至少一项为具体 IP；FwType=16 时目的 IPv4 可带端口；FwType 包含 1 时具体 IP 至少一项属于当前账号资产。
- 8 IP 扩展：在 Rules[].Info 中填写 CIDR、端口或源/目的组合。
- 9 NDR 扩展：FwType=16，Rules[].Info 至少填写一个 UserAgent、Url、XForwardedFor、HostName、FileName、FileMd5；可组合 SrcIP、DstIP，搭配 IdsRuleId 时同时填写 SrcIP 或 DstIP。
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
                     * 获取JSON object 数组，至少一项；每项填写 1–50 个字符的 RuleName，且同一请求内名称唯一。列表内共用一个 RuleType，不同类型分次调用。Rules[].Info 多值字段按笛卡尔积展开，一次请求展开后最多 100 条。WhiteId 由服务端生成，Id 和 IdsRuleName 由服务端管理。
                     * @return Rules JSON object 数组，至少一项；每项填写 1–50 个字符的 RuleName，且同一请求内名称唯一。列表内共用一个 RuleType，不同类型分次调用。Rules[].Info 多值字段按笛卡尔积展开，一次请求展开后最多 100 条。WhiteId 由服务端生成，Id 和 IdsRuleName 由服务端管理。
                     * 
                     */
                    std::vector<IdsWhiteRule> GetRules() const;

                    /**
                     * 设置JSON object 数组，至少一项；每项填写 1–50 个字符的 RuleName，且同一请求内名称唯一。列表内共用一个 RuleType，不同类型分次调用。Rules[].Info 多值字段按笛卡尔积展开，一次请求展开后最多 100 条。WhiteId 由服务端生成，Id 和 IdsRuleName 由服务端管理。
                     * @param _rules JSON object 数组，至少一项；每项填写 1–50 个字符的 RuleName，且同一请求内名称唯一。列表内共用一个 RuleType，不同类型分次调用。Rules[].Info 多值字段按笛卡尔积展开，一次请求展开后最多 100 条。WhiteId 由服务端生成，Id 和 IdsRuleName 由服务端管理。
                     * 
                     */
                    void SetRules(const std::vector<IdsWhiteRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取使用 JSON integer。仅 RuleType=2 使用：0 或省略表示保留冲突封禁并跳过冲突项；1 表示删除同 IP、同方向冲突封禁后创建白名单，选择 1 前先确认该删除操作。其它 RuleType 省略本参数。
                     * @return CoverDuplicate 使用 JSON integer。仅 RuleType=2 使用：0 或省略表示保留冲突封禁并跳过冲突项；1 表示删除同 IP、同方向冲突封禁后创建白名单，选择 1 前先确认该删除操作。其它 RuleType 省略本参数。
                     * 
                     */
                    int64_t GetCoverDuplicate() const;

                    /**
                     * 设置使用 JSON integer。仅 RuleType=2 使用：0 或省略表示保留冲突封禁并跳过冲突项；1 表示删除同 IP、同方向冲突封禁后创建白名单，选择 1 前先确认该删除操作。其它 RuleType 省略本参数。
                     * @param _coverDuplicate 使用 JSON integer。仅 RuleType=2 使用：0 或省略表示保留冲突封禁并跳过冲突项；1 表示删除同 IP、同方向冲突封禁后创建白名单，选择 1 前先确认该删除操作。其它 RuleType 省略本参数。
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
                     * 使用 JSON integer 表示白名单类型，一次请求使用一种：
- 2 精确外部 IP：Rules[].Info.SrcIP、Rules[].Info.DstIP 两个字段中恰好填写一个。
- 3 域名：填写 Rules[].Info.Ioc。
- 4 威胁情报：填写 Rules[].Info.Ioc，FwType=1。
- 5 资产：Rules[].Info.SrcIP、Rules[].Info.DstIP 两个字段中恰好填写一个，值取 DescribeCfwAssets 的 instance_id。
- 6 IPS 自定义：Rules[].Info.IdsRuleId 必填，Rules[].Info.SrcIP、Rules[].Info.DstIP 至少一项为具体 IP；FwType=16 时目的 IPv4 可带端口；FwType 包含 1 时具体 IP 至少一项属于当前账号资产。
- 8 IP 扩展：在 Rules[].Info 中填写 CIDR、端口或源/目的组合。
- 9 NDR 扩展：FwType=16，Rules[].Info 至少填写一个 UserAgent、Url、XForwardedFor、HostName、FileName、FileMd5；可组合 SrcIP、DstIP，搭配 IdsRuleId 时同时填写 SrcIP 或 DstIP。
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * JSON object 数组，至少一项；每项填写 1–50 个字符的 RuleName，且同一请求内名称唯一。列表内共用一个 RuleType，不同类型分次调用。Rules[].Info 多值字段按笛卡尔积展开，一次请求展开后最多 100 条。WhiteId 由服务端生成，Id 和 IdsRuleName 由服务端管理。
                     */
                    std::vector<IdsWhiteRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 使用 JSON integer。仅 RuleType=2 使用：0 或省略表示保留冲突封禁并跳过冲突项；1 表示删除同 IP、同方向冲突封禁后创建白名单，选择 1 前先确认该删除操作。其它 RuleType 省略本参数。
                     */
                    int64_t m_coverDuplicate;
                    bool m_coverDuplicateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEWHITERULEREQUEST_H_
