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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_TOPICRULEINFO_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_TOPICRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 规则详细信息
                */
                class TopicRuleInfo : public AbstractModel
                {
                public:
                    TopicRuleInfo();
                    ~TopicRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return Description 规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
                     * @param _description 规则描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    uint64_t GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const uint64_t& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取不生效
                     * @return RuleDisabled 不生效
                     * 
                     */
                    bool GetRuleDisabled() const;

                    /**
                     * 设置不生效
                     * @param _ruleDisabled 不生效
                     * 
                     */
                    void SetRuleDisabled(const bool& _ruleDisabled);

                    /**
                     * 判断参数 RuleDisabled 是否已赋值
                     * @return RuleDisabled 是否已赋值
                     * 
                     */
                    bool RuleDisabledHasBeenSet() const;

                    /**
                     * 获取规则模式
                     * @return TopicPattern 规则模式
                     * 
                     */
                    std::string GetTopicPattern() const;

                    /**
                     * 设置规则模式
                     * @param _topicPattern 规则模式
                     * 
                     */
                    void SetTopicPattern(const std::string& _topicPattern);

                    /**
                     * 判断参数 TopicPattern 是否已赋值
                     * @return TopicPattern 是否已赋值
                     * 
                     */
                    bool TopicPatternHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    uint64_t m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 不生效
                     */
                    bool m_ruleDisabled;
                    bool m_ruleDisabledHasBeenSet;

                    /**
                     * 规则模式
                     */
                    std::string m_topicPattern;
                    bool m_topicPatternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_TOPICRULEINFO_H_
