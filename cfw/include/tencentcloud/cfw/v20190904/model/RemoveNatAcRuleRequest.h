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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_REMOVENATACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_REMOVENATACRULEREQUEST_H_

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
                * RemoveNatAcRule请求参数结构体
                */
                class RemoveNatAcRuleRequest : public AbstractModel
                {
                public:
                    RemoveNatAcRuleRequest();
                    ~RemoveNatAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>NAT 边界访问控制规则 ID 列表。具体规则 ID 通过 DescribeCfwRules 查询 RuleType=nat 和目标 RuleUuid，并使用返回的 rules[].uuid。数组仅含 -1 时删除 Direction 指定方向下当前账号的全部可操作规则，风险极高；其它数组按 ID 删除。至少匹配一条即成功；具体 ID 删除不按 Direction 筛选。成功响应回显请求中的 ID 列表。</p>
                     * @return RuleUuid <p>NAT 边界访问控制规则 ID 列表。具体规则 ID 通过 DescribeCfwRules 查询 RuleType=nat 和目标 RuleUuid，并使用返回的 rules[].uuid。数组仅含 -1 时删除 Direction 指定方向下当前账号的全部可操作规则，风险极高；其它数组按 ID 删除。至少匹配一条即成功；具体 ID 删除不按 Direction 筛选。成功响应回显请求中的 ID 列表。</p>
                     * 
                     */
                    std::vector<int64_t> GetRuleUuid() const;

                    /**
                     * 设置<p>NAT 边界访问控制规则 ID 列表。具体规则 ID 通过 DescribeCfwRules 查询 RuleType=nat 和目标 RuleUuid，并使用返回的 rules[].uuid。数组仅含 -1 时删除 Direction 指定方向下当前账号的全部可操作规则，风险极高；其它数组按 ID 删除。至少匹配一条即成功；具体 ID 删除不按 Direction 筛选。成功响应回显请求中的 ID 列表。</p>
                     * @param _ruleUuid <p>NAT 边界访问控制规则 ID 列表。具体规则 ID 通过 DescribeCfwRules 查询 RuleType=nat 和目标 RuleUuid，并使用返回的 rules[].uuid。数组仅含 -1 时删除 Direction 指定方向下当前账号的全部可操作规则，风险极高；其它数组按 ID 删除。至少匹配一条即成功；具体 ID 删除不按 Direction 筛选。成功响应回显请求中的 ID 列表。</p>
                     * 
                     */
                    void SetRuleUuid(const std::vector<int64_t>& _ruleUuid);

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     * 
                     */
                    bool RuleUuidHasBeenSet() const;

                    /**
                     * 获取<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * @return CfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * 
                     */
                    std::string GetCfwAiAgentOperationSource() const;

                    /**
                     * 设置<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * @param _cfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * 
                     */
                    void SetCfwAiAgentOperationSource(const std::string& _cfwAiAgentOperationSource);

                    /**
                     * 判断参数 CfwAiAgentOperationSource 是否已赋值
                     * @return CfwAiAgentOperationSource 是否已赋值
                     * 
                     */
                    bool CfwAiAgentOperationSourceHasBeenSet() const;

                    /**
                     * 获取<p>规则方向：1 表示入站，0 表示出站。仅 RuleUuid 恰好为 [-1] 时用于选择全删方向；按具体 ID 删除时可省略，Direction 不参与 ID 筛选。全删时必须使用 0 或 1。</p>
                     * @return Direction <p>规则方向：1 表示入站，0 表示出站。仅 RuleUuid 恰好为 [-1] 时用于选择全删方向；按具体 ID 删除时可省略，Direction 不参与 ID 筛选。全删时必须使用 0 或 1。</p>
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置<p>规则方向：1 表示入站，0 表示出站。仅 RuleUuid 恰好为 [-1] 时用于选择全删方向；按具体 ID 删除时可省略，Direction 不参与 ID 筛选。全删时必须使用 0 或 1。</p>
                     * @param _direction <p>规则方向：1 表示入站，0 表示出站。仅 RuleUuid 恰好为 [-1] 时用于选择全删方向；按具体 ID 删除时可省略，Direction 不参与 ID 筛选。全删时必须使用 0 或 1。</p>
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * <p>NAT 边界访问控制规则 ID 列表。具体规则 ID 通过 DescribeCfwRules 查询 RuleType=nat 和目标 RuleUuid，并使用返回的 rules[].uuid。数组仅含 -1 时删除 Direction 指定方向下当前账号的全部可操作规则，风险极高；其它数组按 ID 删除。至少匹配一条即成功；具体 ID 删除不按 Direction 筛选。成功响应回显请求中的 ID 列表。</p>
                     */
                    std::vector<int64_t> m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * <p>规则方向：1 表示入站，0 表示出站。仅 RuleUuid 恰好为 [-1] 时用于选择全删方向；按具体 ID 删除时可省略，Direction 不参与 ID 筛选。全删时必须使用 0 或 1。</p>
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_REMOVENATACRULEREQUEST_H_
