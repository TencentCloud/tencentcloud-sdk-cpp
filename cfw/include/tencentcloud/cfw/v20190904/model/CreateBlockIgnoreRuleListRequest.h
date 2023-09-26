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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEBLOCKIGNORERULELISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEBLOCKIGNORERULELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/IntrusionDefenseRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateBlockIgnoreRuleList请求参数结构体
                */
                class CreateBlockIgnoreRuleListRequest : public AbstractModel
                {
                public:
                    CreateBlockIgnoreRuleListRequest();
                    ~CreateBlockIgnoreRuleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则列表
                     * @return Rules 规则列表
                     * 
                     */
                    std::vector<IntrusionDefenseRule> GetRules() const;

                    /**
                     * 设置规则列表
                     * @param _rules 规则列表
                     * 
                     */
                    void SetRules(const std::vector<IntrusionDefenseRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取规则类型，1封禁，2放通，不支持域名封禁
                     * @return RuleType 规则类型，1封禁，2放通，不支持域名封禁
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置规则类型，1封禁，2放通，不支持域名封禁
                     * @param _ruleType 规则类型，1封禁，2放通，不支持域名封禁
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
                     * 规则列表
                     */
                    std::vector<IntrusionDefenseRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 规则类型，1封禁，2放通，不支持域名封禁
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

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEBLOCKIGNORERULELISTREQUEST_H_
