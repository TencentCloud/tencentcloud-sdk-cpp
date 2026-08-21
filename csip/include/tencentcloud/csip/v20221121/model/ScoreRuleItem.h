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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCORERULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCORERULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 评分规则项
                */
                class ScoreRuleItem : public AbstractModel
                {
                public:
                    ScoreRuleItem();
                    ~ScoreRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则类型<br>枚举值：<br>dimension：维度级规则<br>category：子项级规则<br>severity：等级级规则</p>
                     * @return RuleType <p>规则类型<br>枚举值：<br>dimension：维度级规则<br>category：子项级规则<br>severity：等级级规则</p>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>规则类型<br>枚举值：<br>dimension：维度级规则<br>category：子项级规则<br>severity：等级级规则</p>
                     * @param _ruleType <p>规则类型<br>枚举值：<br>dimension：维度级规则<br>category：子项级规则<br>severity：等级级规则</p>
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>维度ID</p>
                     * @return DimensionId <p>维度ID</p>
                     * 
                     */
                    std::string GetDimensionId() const;

                    /**
                     * 设置<p>维度ID</p>
                     * @param _dimensionId <p>维度ID</p>
                     * 
                     */
                    void SetDimensionId(const std::string& _dimensionId);

                    /**
                     * 判断参数 DimensionId 是否已赋值
                     * @return DimensionId 是否已赋值
                     * 
                     */
                    bool DimensionIdHasBeenSet() const;

                    /**
                     * 获取<p>维度名称</p>
                     * @return DimensionName <p>维度名称</p>
                     * 
                     */
                    std::string GetDimensionName() const;

                    /**
                     * 设置<p>维度名称</p>
                     * @param _dimensionName <p>维度名称</p>
                     * 
                     */
                    void SetDimensionName(const std::string& _dimensionName);

                    /**
                     * 判断参数 DimensionName 是否已赋值
                     * @return DimensionName 是否已赋值
                     * 
                     */
                    bool DimensionNameHasBeenSet() const;

                    /**
                     * 获取<p>子项ID</p>
                     * @return CategoryId <p>子项ID</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>子项ID</p>
                     * @param _categoryId <p>子项ID</p>
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
                     * 获取<p>子项扣分规则说明</p>
                     * @return CategoryDesc <p>子项扣分规则说明</p>
                     * 
                     */
                    std::string GetCategoryDesc() const;

                    /**
                     * 设置<p>子项扣分规则说明</p>
                     * @param _categoryDesc <p>子项扣分规则说明</p>
                     * 
                     */
                    void SetCategoryDesc(const std::string& _categoryDesc);

                    /**
                     * 判断参数 CategoryDesc 是否已赋值
                     * @return CategoryDesc 是否已赋值
                     * 
                     */
                    bool CategoryDescHasBeenSet() const;

                    /**
                     * 获取<p>子项名称</p>
                     * @return CategoryName <p>子项名称</p>
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置<p>子项名称</p>
                     * @param _categoryName <p>子项名称</p>
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
                     * 获取<p>等级<br>枚举值：<br>critical：严重<br>high：高危<br>medium：中危<br>low：低危</p>
                     * @return Severity <p>等级<br>枚举值：<br>critical：严重<br>high：高危<br>medium：中危<br>low：低危</p>
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置<p>等级<br>枚举值：<br>critical：严重<br>high：高危<br>medium：中危<br>low：低危</p>
                     * @param _severity <p>等级<br>枚举值：<br>critical：严重<br>high：高危<br>medium：中危<br>low：低危</p>
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取<p>扣分上限</p>
                     * @return MaxDeductScore <p>扣分上限</p>
                     * 
                     */
                    int64_t GetMaxDeductScore() const;

                    /**
                     * 设置<p>扣分上限</p>
                     * @param _maxDeductScore <p>扣分上限</p>
                     * 
                     */
                    void SetMaxDeductScore(const int64_t& _maxDeductScore);

                    /**
                     * 判断参数 MaxDeductScore 是否已赋值
                     * @return MaxDeductScore 是否已赋值
                     * 
                     */
                    bool MaxDeductScoreHasBeenSet() const;

                    /**
                     * 获取<p>单次扣分</p>
                     * @return DeductPerItem <p>单次扣分</p>
                     * 
                     */
                    int64_t GetDeductPerItem() const;

                    /**
                     * 设置<p>单次扣分</p>
                     * @param _deductPerItem <p>单次扣分</p>
                     * 
                     */
                    void SetDeductPerItem(const int64_t& _deductPerItem);

                    /**
                     * 判断参数 DeductPerItem 是否已赋值
                     * @return DeductPerItem 是否已赋值
                     * 
                     */
                    bool DeductPerItemHasBeenSet() const;

                    /**
                     * 获取<p>单项扣分是否不可编辑（防护配置维度子项为 true）</p>
                     * @return DeductPerItemDisabled <p>单项扣分是否不可编辑（防护配置维度子项为 true）</p>
                     * 
                     */
                    bool GetDeductPerItemDisabled() const;

                    /**
                     * 设置<p>单项扣分是否不可编辑（防护配置维度子项为 true）</p>
                     * @param _deductPerItemDisabled <p>单项扣分是否不可编辑（防护配置维度子项为 true）</p>
                     * 
                     */
                    void SetDeductPerItemDisabled(const bool& _deductPerItemDisabled);

                    /**
                     * 判断参数 DeductPerItemDisabled 是否已赋值
                     * @return DeductPerItemDisabled 是否已赋值
                     * 
                     */
                    bool DeductPerItemDisabledHasBeenSet() const;

                    /**
                     * 获取<p>排序序号</p>
                     * @return SortOrder <p>排序序号</p>
                     * 
                     */
                    int64_t GetSortOrder() const;

                    /**
                     * 设置<p>排序序号</p>
                     * @param _sortOrder <p>排序序号</p>
                     * 
                     */
                    void SetSortOrder(const int64_t& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * <p>规则类型<br>枚举值：<br>dimension：维度级规则<br>category：子项级规则<br>severity：等级级规则</p>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>维度ID</p>
                     */
                    std::string m_dimensionId;
                    bool m_dimensionIdHasBeenSet;

                    /**
                     * <p>维度名称</p>
                     */
                    std::string m_dimensionName;
                    bool m_dimensionNameHasBeenSet;

                    /**
                     * <p>子项ID</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>子项扣分规则说明</p>
                     */
                    std::string m_categoryDesc;
                    bool m_categoryDescHasBeenSet;

                    /**
                     * <p>子项名称</p>
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * <p>等级<br>枚举值：<br>critical：严重<br>high：高危<br>medium：中危<br>low：低危</p>
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * <p>扣分上限</p>
                     */
                    int64_t m_maxDeductScore;
                    bool m_maxDeductScoreHasBeenSet;

                    /**
                     * <p>单次扣分</p>
                     */
                    int64_t m_deductPerItem;
                    bool m_deductPerItemHasBeenSet;

                    /**
                     * <p>单项扣分是否不可编辑（防护配置维度子项为 true）</p>
                     */
                    bool m_deductPerItemDisabled;
                    bool m_deductPerItemDisabledHasBeenSet;

                    /**
                     * <p>排序序号</p>
                     */
                    int64_t m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCORERULEITEM_H_
