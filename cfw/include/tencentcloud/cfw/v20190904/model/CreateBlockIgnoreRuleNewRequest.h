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
                     * 获取非自定义类型规则列表
                     * @return Rules 非自定义类型规则列表
                     * 
                     */
                    std::vector<BanAndAllowRule> GetRules() const;

                    /**
                     * 设置非自定义类型规则列表
                     * @param _rules 非自定义类型规则列表
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
                     * 获取RuleType: 1黑名单 2外部IP 3域名 4情报 5资产 6自定义规则  7入侵防御规则
                     * @return RuleType RuleType: 1黑名单 2外部IP 3域名 4情报 5资产 6自定义规则  7入侵防御规则
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置RuleType: 1黑名单 2外部IP 3域名 4情报 5资产 6自定义规则  7入侵防御规则
                     * @param _ruleType RuleType: 1黑名单 2外部IP 3域名 4情报 5资产 6自定义规则  7入侵防御规则
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
                     * 获取是否覆盖重复数据，1覆盖，非1不覆盖，跳过重复数据
                     * @return CoverDuplicate 是否覆盖重复数据，1覆盖，非1不覆盖，跳过重复数据
                     * 
                     */
                    int64_t GetCoverDuplicate() const;

                    /**
                     * 设置是否覆盖重复数据，1覆盖，非1不覆盖，跳过重复数据
                     * @param _coverDuplicate 是否覆盖重复数据，1覆盖，非1不覆盖，跳过重复数据
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
                     * 非自定义类型规则列表
                     */
                    std::vector<BanAndAllowRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * RuleType: 1黑名单 2外部IP 3域名 4情报 5资产 6自定义规则  7入侵防御规则
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 是否覆盖重复数据，1覆盖，非1不覆盖，跳过重复数据
                     */
                    int64_t m_coverDuplicate;
                    bool m_coverDuplicateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEBLOCKIGNORERULENEWREQUEST_H_
