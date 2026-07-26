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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEBLOCKIGNORERULENEWREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEBLOCKIGNORERULENEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/BanAndAllowRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateBlockIgnoreRuleNew请求参数结构体
                */
                class CreateBlockIgnoreRuleNewRequest : public AbstractModel
                {
                public:
                    CreateBlockIgnoreRuleNewRequest();
                    ~CreateBlockIgnoreRuleNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则类型：1 IP 封禁，2 IP 放通，3 域名放通，4 情报放通，5 资产放通，6 自定义放通。
                     * @return RuleType 规则类型：1 IP 封禁，2 IP 放通，3 域名放通，4 情报放通，5 资产放通，6 自定义放通。
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置规则类型：1 IP 封禁，2 IP 放通，3 域名放通，4 情报放通，5 资产放通，6 自定义放通。
                     * @param _ruleType 规则类型：1 IP 封禁，2 IP 放通，3 域名放通，4 情报放通，5 资产放通，6 自定义放通。
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
                     * 获取待新增规则列表；可为空，空数组返回成功且不新增规则。
                     * @return Rules 待新增规则列表；可为空，空数组返回成功且不新增规则。
                     * 
                     */
                    std::vector<BanAndAllowRule> GetRules() const;

                    /**
                     * 设置待新增规则列表；可为空，空数组返回成功且不新增规则。
                     * @param _rules 待新增规则列表；可为空，空数组返回成功且不新增规则。
                     * 
                     */
                    void SetRules(const std::vector<BanAndAllowRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

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
                     * 获取互斥列表冲突处理，仅 RuleType=1 或 2 生效。0 表示保留已有互斥规则并跳过冲突新增项；1 表示保留新增项并删除同 IP、同方向的互斥规则；省略时不处理互斥冲突。填写本字段时，同一请求内相同 Ioc 会合并为一项，DirectionList 按输入顺序合并，时间和备注采用首次出现项的值。已有同类型、同 Ioc 规则的方向会与本次方向合并，其它字段按本次请求更新。
                     * @return CoverDuplicate 互斥列表冲突处理，仅 RuleType=1 或 2 生效。0 表示保留已有互斥规则并跳过冲突新增项；1 表示保留新增项并删除同 IP、同方向的互斥规则；省略时不处理互斥冲突。填写本字段时，同一请求内相同 Ioc 会合并为一项，DirectionList 按输入顺序合并，时间和备注采用首次出现项的值。已有同类型、同 Ioc 规则的方向会与本次方向合并，其它字段按本次请求更新。
                     * 
                     */
                    int64_t GetCoverDuplicate() const;

                    /**
                     * 设置互斥列表冲突处理，仅 RuleType=1 或 2 生效。0 表示保留已有互斥规则并跳过冲突新增项；1 表示保留新增项并删除同 IP、同方向的互斥规则；省略时不处理互斥冲突。填写本字段时，同一请求内相同 Ioc 会合并为一项，DirectionList 按输入顺序合并，时间和备注采用首次出现项的值。已有同类型、同 Ioc 规则的方向会与本次方向合并，其它字段按本次请求更新。
                     * @param _coverDuplicate 互斥列表冲突处理，仅 RuleType=1 或 2 生效。0 表示保留已有互斥规则并跳过冲突新增项；1 表示保留新增项并删除同 IP、同方向的互斥规则；省略时不处理互斥冲突。填写本字段时，同一请求内相同 Ioc 会合并为一项，DirectionList 按输入顺序合并，时间和备注采用首次出现项的值。已有同类型、同 Ioc 规则的方向会与本次方向合并，其它字段按本次请求更新。
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
                     * 规则类型：1 IP 封禁，2 IP 放通，3 域名放通，4 情报放通，5 资产放通，6 自定义放通。
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 待新增规则列表；可为空，空数组返回成功且不新增规则。
                     */
                    std::vector<BanAndAllowRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * 互斥列表冲突处理，仅 RuleType=1 或 2 生效。0 表示保留已有互斥规则并跳过冲突新增项；1 表示保留新增项并删除同 IP、同方向的互斥规则；省略时不处理互斥冲突。填写本字段时，同一请求内相同 Ioc 会合并为一项，DirectionList 按输入顺序合并，时间和备注采用首次出现项的值。已有同类型、同 Ioc 规则的方向会与本次方向合并，其它字段按本次请求更新。
                     */
                    int64_t m_coverDuplicate;
                    bool m_coverDuplicateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEBLOCKIGNORERULENEWREQUEST_H_
