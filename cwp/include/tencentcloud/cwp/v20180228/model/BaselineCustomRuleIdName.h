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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINECUSTOMRULEIDNAME_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINECUSTOMRULEIDNAME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线自定规则ID和名字
                */
                class BaselineCustomRuleIdName : public AbstractModel
                {
                public:
                    BaselineCustomRuleIdName();
                    ~BaselineCustomRuleIdName() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义规则ID　
                     * @return RuleId 自定义规则ID　
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置自定义规则ID　
                     * @param _ruleId 自定义规则ID　
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取自定义规则名字
                     * @return RuleName 自定义规则名字
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置自定义规则名字
                     * @param _ruleName 自定义规则名字
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                private:

                    /**
                     * 自定义规则ID　
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 自定义规则名字
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINECUSTOMRULEIDNAME_H_
