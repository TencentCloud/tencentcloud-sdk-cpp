/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取是否删除全部
                     * @return DeleteAll 是否删除全部
                     * 
                     */
                    int64_t GetDeleteAll() const;

                    /**
                     * 设置是否删除全部
                     * @param _deleteAll 是否删除全部
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
                     * 获取规则列表
                     * @return Rules 规则列表
                     * 
                     */
                    std::vector<BanAndAllowRuleDel> GetRules() const;

                    /**
                     * 设置规则列表
                     * @param _rules 规则列表
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
                     * 获取封禁：1，放通：100，
主要用于全部删除时区分列表类型
                     * @return RuleType 封禁：1，放通：100，
主要用于全部删除时区分列表类型
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置封禁：1，放通：100，
主要用于全部删除时区分列表类型
                     * @param _ruleType 封禁：1，放通：100，
主要用于全部删除时区分列表类型
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
                     * 获取blocklist 封禁列表 whitelist 白名单列表
                     * @return ShowType blocklist 封禁列表 whitelist 白名单列表
                     * 
                     */
                    std::string GetShowType() const;

                    /**
                     * 设置blocklist 封禁列表 whitelist 白名单列表
                     * @param _showType blocklist 封禁列表 whitelist 白名单列表
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
                     * 是否删除全部
                     */
                    int64_t m_deleteAll;
                    bool m_deleteAllHasBeenSet;

                    /**
                     * 规则列表
                     */
                    std::vector<BanAndAllowRuleDel> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 封禁：1，放通：100，
主要用于全部删除时区分列表类型
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * blocklist 封禁列表 whitelist 白名单列表
                     */
                    std::string m_showType;
                    bool m_showTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETEBLOCKIGNORERULENEWREQUEST_H_
