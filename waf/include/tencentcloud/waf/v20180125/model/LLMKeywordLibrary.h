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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMKEYWORDLIBRARY_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMKEYWORDLIBRARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * LLM waf 自定义词库实体
                */
                class LLMKeywordLibrary : public AbstractModel
                {
                public:
                    LLMKeywordLibrary();
                    ~LLMKeywordLibrary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取词库名
                     * @return Name 词库名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置词库名
                     * @param _name 词库名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取词库描述
                     * @return Description 词库描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置词库描述
                     * @param _description 词库描述
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
                     * 获取词库类型，custom 或 builtin
                     * @return Type 词库类型，custom 或 builtin
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置词库类型，custom 或 builtin
                     * @param _type 词库类型，custom 或 builtin
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取关键词列表
                     * @return Keywords 关键词列表
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置关键词列表
                     * @param _keywords 关键词列表
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取词库规则 id
                     * @return RuleId 词库规则 id
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置词库规则 id
                     * @param _ruleId 词库规则 id
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取被引用的规则 id 列表
                     * @return ReferencedRules 被引用的规则 id 列表
                     * 
                     */
                    std::vector<std::string> GetReferencedRules() const;

                    /**
                     * 设置被引用的规则 id 列表
                     * @param _referencedRules 被引用的规则 id 列表
                     * 
                     */
                    void SetReferencedRules(const std::vector<std::string>& _referencedRules);

                    /**
                     * 判断参数 ReferencedRules 是否已赋值
                     * @return ReferencedRules 是否已赋值
                     * 
                     */
                    bool ReferencedRulesHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取词库类别：black-黑库(默认)，white-白库；空值按黑库处理
                     * @return Category 词库类别：black-黑库(默认)，white-白库；空值按黑库处理
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置词库类别：black-黑库(默认)，white-白库；空值按黑库处理
                     * @param _category 词库类别：black-黑库(默认)，white-白库；空值按黑库处理
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * 词库名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 词库描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 词库类型，custom 或 builtin
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 关键词列表
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 词库规则 id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 被引用的规则 id 列表
                     */
                    std::vector<std::string> m_referencedRules;
                    bool m_referencedRulesHasBeenSet;

                    /**
                     * 更新时间
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 词库类别：black-黑库(默认)，white-白库；空值按黑库处理
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMKEYWORDLIBRARY_H_
