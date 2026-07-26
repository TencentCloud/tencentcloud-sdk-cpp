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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DELETEBLOCKIGNORERULENEWREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DELETEBLOCKIGNORERULENEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/BanAndAllowRuleDel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DeleteBlockIgnoreRuleNew请求参数结构体
                */
                class DeleteBlockIgnoreRuleNewRequest : public AbstractModel
                {
                public:
                    DeleteBlockIgnoreRuleNewRequest();
                    ~DeleteBlockIgnoreRuleNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取删除模式，必传且只接受整数 0 或 1。0 表示按 Rules 中的 RuleType 与 Ioc 删除匹配记录；1 表示按 ShowType 清空对应列表，其中 blocklist 删除全部 RuleType=1 记录，whitelist 删除全部 RuleType>=2 记录，风险极高。
                     * @return DeleteAll 删除模式，必传且只接受整数 0 或 1。0 表示按 Rules 中的 RuleType 与 Ioc 删除匹配记录；1 表示按 ShowType 清空对应列表，其中 blocklist 删除全部 RuleType=1 记录，whitelist 删除全部 RuleType>=2 记录，风险极高。
                     * 
                     */
                    int64_t GetDeleteAll() const;

                    /**
                     * 设置删除模式，必传且只接受整数 0 或 1。0 表示按 Rules 中的 RuleType 与 Ioc 删除匹配记录；1 表示按 ShowType 清空对应列表，其中 blocklist 删除全部 RuleType=1 记录，whitelist 删除全部 RuleType>=2 记录，风险极高。
                     * @param _deleteAll 删除模式，必传且只接受整数 0 或 1。0 表示按 Rules 中的 RuleType 与 Ioc 删除匹配记录；1 表示按 ShowType 清空对应列表，其中 blocklist 删除全部 RuleType=1 记录，whitelist 删除全部 RuleType>=2 记录，风险极高。
                     * 
                     */
                    void SetDeleteAll(const int64_t& _deleteAll);

                    /**
                     * 判断参数 DeleteAll 是否已赋值
                     * @return DeleteAll 是否已赋值
                     * 
                     */
                    bool DeleteAllHasBeenSet() const;

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
                     * 获取可省略。当前处理逻辑不读取该顶层字段；传入值不参与精确删除或整表删除的目标选择。
                     * @return RuleType 可省略。当前处理逻辑不读取该顶层字段；传入值不参与精确删除或整表删除的目标选择。
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置可省略。当前处理逻辑不读取该顶层字段；传入值不参与精确删除或整表删除的目标选择。
                     * @param _ruleType 可省略。当前处理逻辑不读取该顶层字段；传入值不参与精确删除或整表删除的目标选择。
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
                     * 获取待删除规则列表。DeleteAll=0 时必填，每项删除所有与 RuleType、Ioc 匹配的记录；DirectionList 不参与目标匹配，但 RuleType=1、2、3 时必须使用 DescribeBlockIgnoreList 返回的完整方向列表。同一请求混合 RuleType 时，引擎更新使用最后一项的 RuleType。DeleteAll=1 时省略。
                     * @return Rules 待删除规则列表。DeleteAll=0 时必填，每项删除所有与 RuleType、Ioc 匹配的记录；DirectionList 不参与目标匹配，但 RuleType=1、2、3 时必须使用 DescribeBlockIgnoreList 返回的完整方向列表。同一请求混合 RuleType 时，引擎更新使用最后一项的 RuleType。DeleteAll=1 时省略。
                     * 
                     */
                    std::vector<BanAndAllowRuleDel> GetRules() const;

                    /**
                     * 设置待删除规则列表。DeleteAll=0 时必填，每项删除所有与 RuleType、Ioc 匹配的记录；DirectionList 不参与目标匹配，但 RuleType=1、2、3 时必须使用 DescribeBlockIgnoreList 返回的完整方向列表。同一请求混合 RuleType 时，引擎更新使用最后一项的 RuleType。DeleteAll=1 时省略。
                     * @param _rules 待删除规则列表。DeleteAll=0 时必填，每项删除所有与 RuleType、Ioc 匹配的记录；DirectionList 不参与目标匹配，但 RuleType=1、2、3 时必须使用 DescribeBlockIgnoreList 返回的完整方向列表。同一请求混合 RuleType 时，引擎更新使用最后一项的 RuleType。DeleteAll=1 时省略。
                     * 
                     */
                    void SetRules(const std::vector<BanAndAllowRuleDel>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取列表类型，处理时必传且只接受 blocklist 或 whitelist。DeleteAll=1 时，blocklist 选择全部 RuleType=1 记录，whitelist 选择全部 RuleType>=2 记录；DeleteAll=0 时该字段仅校验取值，不限制 Rules 指定的删除目标。
                     * @return ShowType 列表类型，处理时必传且只接受 blocklist 或 whitelist。DeleteAll=1 时，blocklist 选择全部 RuleType=1 记录，whitelist 选择全部 RuleType>=2 记录；DeleteAll=0 时该字段仅校验取值，不限制 Rules 指定的删除目标。
                     * 
                     */
                    std::string GetShowType() const;

                    /**
                     * 设置列表类型，处理时必传且只接受 blocklist 或 whitelist。DeleteAll=1 时，blocklist 选择全部 RuleType=1 记录，whitelist 选择全部 RuleType>=2 记录；DeleteAll=0 时该字段仅校验取值，不限制 Rules 指定的删除目标。
                     * @param _showType 列表类型，处理时必传且只接受 blocklist 或 whitelist。DeleteAll=1 时，blocklist 选择全部 RuleType=1 记录，whitelist 选择全部 RuleType>=2 记录；DeleteAll=0 时该字段仅校验取值，不限制 Rules 指定的删除目标。
                     * 
                     */
                    void SetShowType(const std::string& _showType);

                    /**
                     * 判断参数 ShowType 是否已赋值
                     * @return ShowType 是否已赋值
                     * 
                     */
                    bool ShowTypeHasBeenSet() const;

                private:

                    /**
                     * 删除模式，必传且只接受整数 0 或 1。0 表示按 Rules 中的 RuleType 与 Ioc 删除匹配记录；1 表示按 ShowType 清空对应列表，其中 blocklist 删除全部 RuleType=1 记录，whitelist 删除全部 RuleType>=2 记录，风险极高。
                     */
                    int64_t m_deleteAll;
                    bool m_deleteAllHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * 可省略。当前处理逻辑不读取该顶层字段；传入值不参与精确删除或整表删除的目标选择。
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 待删除规则列表。DeleteAll=0 时必填，每项删除所有与 RuleType、Ioc 匹配的记录；DirectionList 不参与目标匹配，但 RuleType=1、2、3 时必须使用 DescribeBlockIgnoreList 返回的完整方向列表。同一请求混合 RuleType 时，引擎更新使用最后一项的 RuleType。DeleteAll=1 时省略。
                     */
                    std::vector<BanAndAllowRuleDel> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 列表类型，处理时必传且只接受 blocklist 或 whitelist。DeleteAll=1 时，blocklist 选择全部 RuleType=1 记录，whitelist 选择全部 RuleType>=2 记录；DeleteAll=0 时该字段仅校验取值，不限制 Rules 指定的删除目标。
                     */
                    std::string m_showType;
                    bool m_showTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETEBLOCKIGNORERULENEWREQUEST_H_
