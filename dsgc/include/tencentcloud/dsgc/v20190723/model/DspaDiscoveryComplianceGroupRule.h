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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYCOMPLIANCEGROUPRULE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYCOMPLIANCEGROUPRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 合规组中规则信息，用于合规组列表中规则信息展示
                */
                class DspaDiscoveryComplianceGroupRule : public AbstractModel
                {
                public:
                    DspaDiscoveryComplianceGroupRule();
                    ~DspaDiscoveryComplianceGroupRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取敏感数据识别规则ID
                     * @return RuleId 敏感数据识别规则ID
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置敏感数据识别规则ID
                     * @param _ruleId 敏感数据识别规则ID
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
                     * 获取敏感数据识别规则名称
                     * @return RuleName 敏感数据识别规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置敏感数据识别规则名称
                     * @param _ruleName 敏感数据识别规则名称
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
                     * 获取敏感数据分类ID
                     * @return CategoryId 敏感数据分类ID
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置敏感数据分类ID
                     * @param _categoryId 敏感数据分类ID
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取敏感数据分级ID, 目前只支持高、中、低三级
                     * @return LevelId 敏感数据分级ID, 目前只支持高、中、低三级
                     * 
                     */
                    int64_t GetLevelId() const;

                    /**
                     * 设置敏感数据分级ID, 目前只支持高、中、低三级
                     * @param _levelId 敏感数据分级ID, 目前只支持高、中、低三级
                     * 
                     */
                    void SetLevelId(const int64_t& _levelId);

                    /**
                     * 判断参数 LevelId 是否已赋值
                     * @return LevelId 是否已赋值
                     * 
                     */
                    bool LevelIdHasBeenSet() const;

                    /**
                     * 获取合规组对应的分类信息
                     * @return CategoryName 合规组对应的分类信息
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置合规组对应的分类信息
                     * @param _categoryName 合规组对应的分类信息
                     * 
                     */
                    void SetCategoryName(const std::string& _categoryName);

                    /**
                     * 判断参数 CategoryName 是否已赋值
                     * @return CategoryName 是否已赋值
                     * 
                     */
                    bool CategoryNameHasBeenSet() const;

                    /**
                     * 获取分级名称
                     * @return LevelRiskName 分级名称
                     * 
                     */
                    std::string GetLevelRiskName() const;

                    /**
                     * 设置分级名称
                     * @param _levelRiskName 分级名称
                     * 
                     */
                    void SetLevelRiskName(const std::string& _levelRiskName);

                    /**
                     * 判断参数 LevelRiskName 是否已赋值
                     * @return LevelRiskName 是否已赋值
                     * 
                     */
                    bool LevelRiskNameHasBeenSet() const;

                private:

                    /**
                     * 敏感数据识别规则ID
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 敏感数据识别规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 敏感数据分类ID
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 敏感数据分级ID, 目前只支持高、中、低三级
                     */
                    int64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * 合规组对应的分类信息
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * 分级名称
                     */
                    std::string m_levelRiskName;
                    bool m_levelRiskNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYCOMPLIANCEGROUPRULE_H_
