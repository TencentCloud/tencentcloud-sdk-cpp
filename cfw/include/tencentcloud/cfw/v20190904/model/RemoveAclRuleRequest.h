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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEACLRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEACLRULEREQUEST_H_

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
                * RemoveAclRule请求参数结构体
                */
                class RemoveAclRuleRequest : public AbstractModel
                {
                public:
                    RemoveAclRuleRequest();
                    ~RemoveAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>必填的规则 ID 列表。具体规则 ID 通过 DescribeCfwRules 查询 RuleType=border 和目标 RuleUuid，并使用返回的 rules[].uuid。列表恰为 [-1] 时删除 Direction 指定方向下当前账号的全部可操作规则，风险极高；其它列表按 ID 删除匹配规则。空列表返回 InternalError，不删除规则。成功响应回显请求中的 ID 列表。</p>
                     * @return RuleUuid <p>必填的规则 ID 列表。具体规则 ID 通过 DescribeCfwRules 查询 RuleType=border 和目标 RuleUuid，并使用返回的 rules[].uuid。列表恰为 [-1] 时删除 Direction 指定方向下当前账号的全部可操作规则，风险极高；其它列表按 ID 删除匹配规则。空列表返回 InternalError，不删除规则。成功响应回显请求中的 ID 列表。</p>
                     * 
                     */
                    std::vector<int64_t> GetRuleUuid() const;

                    /**
                     * 设置<p>必填的规则 ID 列表。具体规则 ID 通过 DescribeCfwRules 查询 RuleType=border 和目标 RuleUuid，并使用返回的 rules[].uuid。列表恰为 [-1] 时删除 Direction 指定方向下当前账号的全部可操作规则，风险极高；其它列表按 ID 删除匹配规则。空列表返回 InternalError，不删除规则。成功响应回显请求中的 ID 列表。</p>
                     * @param _ruleUuid <p>必填的规则 ID 列表。具体规则 ID 通过 DescribeCfwRules 查询 RuleType=border 和目标 RuleUuid，并使用返回的 rules[].uuid。列表恰为 [-1] 时删除 Direction 指定方向下当前账号的全部可操作规则，风险极高；其它列表按 ID 删除匹配规则。空列表返回 InternalError，不删除规则。成功响应回显请求中的 ID 列表。</p>
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
                     * 获取<p>规则方向，JSON 整数：1 表示入站，0 表示出站。</p><p>RuleUuid 恰为 [-1] 时，本字段决定全量删除的方向；RuleUuid 为具体 ID 列表时，仅按 ID 匹配，不使用 Direction 筛选。字段省略时取值为 -1，不会按出站处理。</p>
                     * @return Direction <p>规则方向，JSON 整数：1 表示入站，0 表示出站。</p><p>RuleUuid 恰为 [-1] 时，本字段决定全量删除的方向；RuleUuid 为具体 ID 列表时，仅按 ID 匹配，不使用 Direction 筛选。字段省略时取值为 -1，不会按出站处理。</p>
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置<p>规则方向，JSON 整数：1 表示入站，0 表示出站。</p><p>RuleUuid 恰为 [-1] 时，本字段决定全量删除的方向；RuleUuid 为具体 ID 列表时，仅按 ID 匹配，不使用 Direction 筛选。字段省略时取值为 -1，不会按出站处理。</p>
                     * @param _direction <p>规则方向，JSON 整数：1 表示入站，0 表示出站。</p><p>RuleUuid 恰为 [-1] 时，本字段决定全量删除的方向；RuleUuid 为具体 ID 列表时，仅按 ID 匹配，不使用 Direction 筛选。字段省略时取值为 -1，不会按出站处理。</p>
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
                     * <p>必填的规则 ID 列表。具体规则 ID 通过 DescribeCfwRules 查询 RuleType=border 和目标 RuleUuid，并使用返回的 rules[].uuid。列表恰为 [-1] 时删除 Direction 指定方向下当前账号的全部可操作规则，风险极高；其它列表按 ID 删除匹配规则。空列表返回 InternalError，不删除规则。成功响应回显请求中的 ID 列表。</p>
                     */
                    std::vector<int64_t> m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * <p>规则方向，JSON 整数：1 表示入站，0 表示出站。</p><p>RuleUuid 恰为 [-1] 时，本字段决定全量删除的方向；RuleUuid 为具体 ID 列表时，仅按 ID 匹配，不使用 Direction 筛选。字段省略时取值为 -1，不会按出站处理。</p>
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEACLRULEREQUEST_H_
