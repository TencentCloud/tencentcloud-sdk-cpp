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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_CATEGORYRULE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_CATEGORYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/RuleEffectItem.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 分类规则信息
                */
                class CategoryRule : public AbstractModel
                {
                public:
                    CategoryRule();
                    ~CategoryRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分类id
                     * @return CategoryId 分类id
                     * 
                     */
                    uint64_t GetCategoryId() const;

                    /**
                     * 设置分类id
                     * @param _categoryId 分类id
                     * 
                     */
                    void SetCategoryId(const uint64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取规则id
                     * @return RuleId 规则id
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则id
                     * @param _ruleId 规则id
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

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
                     * 获取级别id
                     * @return LevelId 级别id
                     * 
                     */
                    uint64_t GetLevelId() const;

                    /**
                     * 设置级别id
                     * @param _levelId 级别id
                     * 
                     */
                    void SetLevelId(const uint64_t& _levelId);

                    /**
                     * 判断参数 LevelId 是否已赋值
                     * @return LevelId 是否已赋值
                     * 
                     */
                    bool LevelIdHasBeenSet() const;

                    /**
                     * 获取级别名称
                     * @return LevelName 级别名称
                     * 
                     */
                    std::string GetLevelName() const;

                    /**
                     * 设置级别名称
                     * @param _levelName 级别名称
                     * 
                     */
                    void SetLevelName(const std::string& _levelName);

                    /**
                     * 判断参数 LevelName 是否已赋值
                     * @return LevelName 是否已赋值
                     * 
                     */
                    bool LevelNameHasBeenSet() const;

                    /**
                     * 获取分类规则绑定关系id
                     * @return Id 分类规则绑定关系id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置分类规则绑定关系id
                     * @param _id 分类规则绑定关系id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取别名ID
                     * @return AliasRuleId 别名ID
                     * 
                     */
                    int64_t GetAliasRuleId() const;

                    /**
                     * 设置别名ID
                     * @param _aliasRuleId 别名ID
                     * 
                     */
                    void SetAliasRuleId(const int64_t& _aliasRuleId);

                    /**
                     * 判断参数 AliasRuleId 是否已赋值
                     * @return AliasRuleId 是否已赋值
                     * 
                     */
                    bool AliasRuleIdHasBeenSet() const;

                    /**
                     * 获取别名规则名称
                     * @return AliasRuleName 别名规则名称
                     * 
                     */
                    std::string GetAliasRuleName() const;

                    /**
                     * 设置别名规则名称
                     * @param _aliasRuleName 别名规则名称
                     * 
                     */
                    void SetAliasRuleName(const std::string& _aliasRuleName);

                    /**
                     * 判断参数 AliasRuleName 是否已赋值
                     * @return AliasRuleName 是否已赋值
                     * 
                     */
                    bool AliasRuleNameHasBeenSet() const;

                    /**
                     * 获取各类分类分级规则数量
                     * @return RuleEffectItems 各类分类分级规则数量
                     * 
                     */
                    std::vector<RuleEffectItem> GetRuleEffectItems() const;

                    /**
                     * 设置各类分类分级规则数量
                     * @param _ruleEffectItems 各类分类分级规则数量
                     * 
                     */
                    void SetRuleEffectItems(const std::vector<RuleEffectItem>& _ruleEffectItems);

                    /**
                     * 判断参数 RuleEffectItems 是否已赋值
                     * @return RuleEffectItems 是否已赋值
                     * 
                     */
                    bool RuleEffectItemsHasBeenSet() const;

                    /**
                     * 获取规则状态
                     * @return RuleStatus 规则状态
                     * 
                     */
                    int64_t GetRuleStatus() const;

                    /**
                     * 设置规则状态
                     * @param _ruleStatus 规则状态
                     * 
                     */
                    void SetRuleStatus(const int64_t& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                private:

                    /**
                     * 分类id
                     */
                    uint64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 规则id
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 级别id
                     */
                    uint64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * 级别名称
                     */
                    std::string m_levelName;
                    bool m_levelNameHasBeenSet;

                    /**
                     * 分类规则绑定关系id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 别名ID
                     */
                    int64_t m_aliasRuleId;
                    bool m_aliasRuleIdHasBeenSet;

                    /**
                     * 别名规则名称
                     */
                    std::string m_aliasRuleName;
                    bool m_aliasRuleNameHasBeenSet;

                    /**
                     * 各类分类分级规则数量
                     */
                    std::vector<RuleEffectItem> m_ruleEffectItems;
                    bool m_ruleEffectItemsHasBeenSet;

                    /**
                     * 规则状态
                     */
                    int64_t m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_CATEGORYRULE_H_
