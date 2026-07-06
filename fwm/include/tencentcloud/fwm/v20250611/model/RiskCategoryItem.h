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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_RISKCATEGORYITEM_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_RISKCATEGORYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 风险分类统计项
                */
                class RiskCategoryItem : public AbstractModel
                {
                public:
                    RiskCategoryItem();
                    ~RiskCategoryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险大类ID
                     * @return CategoryId 风险大类ID
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置风险大类ID
                     * @param _categoryId 风险大类ID
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取风险大类名称
                     * @return CategoryName 风险大类名称
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置风险大类名称
                     * @param _categoryName 风险大类名称
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
                     * 获取风险子类ID
                     * @return SubcategoryId 风险子类ID
                     * 
                     */
                    std::string GetSubcategoryId() const;

                    /**
                     * 设置风险子类ID
                     * @param _subcategoryId 风险子类ID
                     * 
                     */
                    void SetSubcategoryId(const std::string& _subcategoryId);

                    /**
                     * 判断参数 SubcategoryId 是否已赋值
                     * @return SubcategoryId 是否已赋值
                     * 
                     */
                    bool SubcategoryIdHasBeenSet() const;

                    /**
                     * 获取风险子类名称
                     * @return SubcategoryName 风险子类名称
                     * 
                     */
                    std::string GetSubcategoryName() const;

                    /**
                     * 设置风险子类名称
                     * @param _subcategoryName 风险子类名称
                     * 
                     */
                    void SetSubcategoryName(const std::string& _subcategoryName);

                    /**
                     * 判断参数 SubcategoryName 是否已赋值
                     * @return SubcategoryName 是否已赋值
                     * 
                     */
                    bool SubcategoryNameHasBeenSet() const;

                    /**
                     * 获取风险等级(0-低危,1-中危,2-高危)
                     * @return RiskLevel 风险等级(0-低危,1-中危,2-高危)
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置风险等级(0-低危,1-中危,2-高危)
                     * @param _riskLevel 风险等级(0-低危,1-中危,2-高危)
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取风险等级名称(低/中/高)
                     * @return RiskLevelName 风险等级名称(低/中/高)
                     * 
                     */
                    std::string GetRiskLevelName() const;

                    /**
                     * 设置风险等级名称(低/中/高)
                     * @param _riskLevelName 风险等级名称(低/中/高)
                     * 
                     */
                    void SetRiskLevelName(const std::string& _riskLevelName);

                    /**
                     * 判断参数 RiskLevelName 是否已赋值
                     * @return RiskLevelName 是否已赋值
                     * 
                     */
                    bool RiskLevelNameHasBeenSet() const;

                    /**
                     * 获取风险描述
                     * @return Description 风险描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置风险描述
                     * @param _description 风险描述
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
                     * 获取处置建议
                     * @return Suggestion 处置建议
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置处置建议
                     * @param _suggestion 处置建议
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取该类风险的规则数量
                     * @return RuleCount 该类风险的规则数量
                     * 
                     */
                    int64_t GetRuleCount() const;

                    /**
                     * 设置该类风险的规则数量
                     * @param _ruleCount 该类风险的规则数量
                     * 
                     */
                    void SetRuleCount(const int64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     * 
                     */
                    bool RuleCountHasBeenSet() const;

                    /**
                     * 获取已处置数量
                     * @return TreatedCount 已处置数量
                     * 
                     */
                    int64_t GetTreatedCount() const;

                    /**
                     * 设置已处置数量
                     * @param _treatedCount 已处置数量
                     * 
                     */
                    void SetTreatedCount(const int64_t& _treatedCount);

                    /**
                     * 判断参数 TreatedCount 是否已赋值
                     * @return TreatedCount 是否已赋值
                     * 
                     */
                    bool TreatedCountHasBeenSet() const;

                    /**
                     * 获取已忽略数量
                     * @return IgnoredCount 已忽略数量
                     * 
                     */
                    int64_t GetIgnoredCount() const;

                    /**
                     * 设置已忽略数量
                     * @param _ignoredCount 已忽略数量
                     * 
                     */
                    void SetIgnoredCount(const int64_t& _ignoredCount);

                    /**
                     * 判断参数 IgnoredCount 是否已赋值
                     * @return IgnoredCount 是否已赋值
                     * 
                     */
                    bool IgnoredCountHasBeenSet() const;

                    /**
                     * 获取待整改数量
                     * @return UntreatedCount 待整改数量
                     * 
                     */
                    int64_t GetUntreatedCount() const;

                    /**
                     * 设置待整改数量
                     * @param _untreatedCount 待整改数量
                     * 
                     */
                    void SetUntreatedCount(const int64_t& _untreatedCount);

                    /**
                     * 判断参数 UntreatedCount 是否已赋值
                     * @return UntreatedCount 是否已赋值
                     * 
                     */
                    bool UntreatedCountHasBeenSet() const;

                    /**
                     * 获取整改率(百分比字符串)
                     * @return DisposalRate 整改率(百分比字符串)
                     * 
                     */
                    uint64_t GetDisposalRate() const;

                    /**
                     * 设置整改率(百分比字符串)
                     * @param _disposalRate 整改率(百分比字符串)
                     * 
                     */
                    void SetDisposalRate(const uint64_t& _disposalRate);

                    /**
                     * 判断参数 DisposalRate 是否已赋值
                     * @return DisposalRate 是否已赋值
                     * 
                     */
                    bool DisposalRateHasBeenSet() const;

                    /**
                     * 获取是否有未处理风险
-1: 未体检
0: 无风险
1: 有风险
                     * @return HasRisk 是否有未处理风险
-1: 未体检
0: 无风险
1: 有风险
                     * 
                     */
                    int64_t GetHasRisk() const;

                    /**
                     * 设置是否有未处理风险
-1: 未体检
0: 无风险
1: 有风险
                     * @param _hasRisk 是否有未处理风险
-1: 未体检
0: 无风险
1: 有风险
                     * 
                     */
                    void SetHasRisk(const int64_t& _hasRisk);

                    /**
                     * 判断参数 HasRisk 是否已赋值
                     * @return HasRisk 是否已赋值
                     * 
                     */
                    bool HasRiskHasBeenSet() const;

                    /**
                     * 获取整改状态：
Completed： 已整改完成（整改率 100%）
Incomplete： 未整改完成（整改率 < 100%）
-：未体检/无数据
                     * @return RemediationStatus 整改状态：
Completed： 已整改完成（整改率 100%）
Incomplete： 未整改完成（整改率 < 100%）
-：未体检/无数据
                     * 
                     */
                    std::string GetRemediationStatus() const;

                    /**
                     * 设置整改状态：
Completed： 已整改完成（整改率 100%）
Incomplete： 未整改完成（整改率 < 100%）
-：未体检/无数据
                     * @param _remediationStatus 整改状态：
Completed： 已整改完成（整改率 100%）
Incomplete： 未整改完成（整改率 < 100%）
-：未体检/无数据
                     * 
                     */
                    void SetRemediationStatus(const std::string& _remediationStatus);

                    /**
                     * 判断参数 RemediationStatus 是否已赋值
                     * @return RemediationStatus 是否已赋值
                     * 
                     */
                    bool RemediationStatusHasBeenSet() const;

                private:

                    /**
                     * 风险大类ID
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 风险大类名称
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * 风险子类ID
                     */
                    std::string m_subcategoryId;
                    bool m_subcategoryIdHasBeenSet;

                    /**
                     * 风险子类名称
                     */
                    std::string m_subcategoryName;
                    bool m_subcategoryNameHasBeenSet;

                    /**
                     * 风险等级(0-低危,1-中危,2-高危)
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 风险等级名称(低/中/高)
                     */
                    std::string m_riskLevelName;
                    bool m_riskLevelNameHasBeenSet;

                    /**
                     * 风险描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 处置建议
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 该类风险的规则数量
                     */
                    int64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * 已处置数量
                     */
                    int64_t m_treatedCount;
                    bool m_treatedCountHasBeenSet;

                    /**
                     * 已忽略数量
                     */
                    int64_t m_ignoredCount;
                    bool m_ignoredCountHasBeenSet;

                    /**
                     * 待整改数量
                     */
                    int64_t m_untreatedCount;
                    bool m_untreatedCountHasBeenSet;

                    /**
                     * 整改率(百分比字符串)
                     */
                    uint64_t m_disposalRate;
                    bool m_disposalRateHasBeenSet;

                    /**
                     * 是否有未处理风险
-1: 未体检
0: 无风险
1: 有风险
                     */
                    int64_t m_hasRisk;
                    bool m_hasRiskHasBeenSet;

                    /**
                     * 整改状态：
Completed： 已整改完成（整改率 100%）
Incomplete： 未整改完成（整改率 < 100%）
-：未体检/无数据
                     */
                    std::string m_remediationStatus;
                    bool m_remediationStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_RISKCATEGORYITEM_H_
