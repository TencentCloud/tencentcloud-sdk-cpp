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
                     * 获取<p>是否删除全部</p>
                     * @return DeleteAll <p>是否删除全部</p>
                     * 
                     */
                    int64_t GetDeleteAll() const;

                    /**
                     * 设置<p>是否删除全部</p>
                     * @param _deleteAll <p>是否删除全部</p>
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
                     * 获取<p>blocklist 封禁列表 whitelist 白名单列表</p>
                     * @return ShowType <p>blocklist 封禁列表 whitelist 白名单列表</p>
                     * 
                     */
                    std::string GetShowType() const;

                    /**
                     * 设置<p>blocklist 封禁列表 whitelist 白名单列表</p>
                     * @param _showType <p>blocklist 封禁列表 whitelist 白名单列表</p>
                     * 
                     */
                    void SetShowType(const std::string& _showType);

                    /**
                     * 判断参数 ShowType 是否已赋值
                     * @return ShowType 是否已赋值
                     * 
                     */
                    bool ShowTypeHasBeenSet() const;

                    /**
                     * 获取<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * @return CfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * 
                     */
                    std::string GetCfwAiAgentOperationSource() const;

                    /**
                     * 设置<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * @param _cfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
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
                     * 获取<p>规则列表</p>
                     * @return Rules <p>规则列表</p>
                     * 
                     */
                    std::vector<BanAndAllowRuleDel> GetRules() const;

                    /**
                     * 设置<p>规则列表</p>
                     * @param _rules <p>规则列表</p>
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
                     * 获取<p>封禁：1，放通：100，<br>主要用于全部删除时区分列表类型</p>
                     * @return RuleType <p>封禁：1，放通：100，<br>主要用于全部删除时区分列表类型</p>
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置<p>封禁：1，放通：100，<br>主要用于全部删除时区分列表类型</p>
                     * @param _ruleType <p>封禁：1，放通：100，<br>主要用于全部删除时区分列表类型</p>
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                private:

                    /**
                     * <p>是否删除全部</p>
                     */
                    int64_t m_deleteAll;
                    bool m_deleteAllHasBeenSet;

                    /**
                     * <p>blocklist 封禁列表 whitelist 白名单列表</p>
                     */
                    std::string m_showType;
                    bool m_showTypeHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * <p>规则列表</p>
                     */
                    std::vector<BanAndAllowRuleDel> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>封禁：1，放通：100，<br>主要用于全部删除时区分列表类型</p>
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETEBLOCKIGNORERULENEWREQUEST_H_
