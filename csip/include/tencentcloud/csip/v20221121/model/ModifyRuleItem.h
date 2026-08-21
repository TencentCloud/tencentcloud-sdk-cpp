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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRULEITEM_H_

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
                * 修改规则项
                */
                class ModifyRuleItem : public AbstractModel
                {
                public:
                    ModifyRuleItem();
                    ~ModifyRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则类型
枚举值：
dimension：维度级规则
category：子项级规则
severity：等级级规则
                     * @return RuleType 规则类型
枚举值：
dimension：维度级规则
category：子项级规则
severity：等级级规则
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型
枚举值：
dimension：维度级规则
category：子项级规则
severity：等级级规则
                     * @param _ruleType 规则类型
枚举值：
dimension：维度级规则
category：子项级规则
severity：等级级规则
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
                     * 获取维度ID
                     * @return DimensionId 维度ID
                     * 
                     */
                    std::string GetDimensionId() const;

                    /**
                     * 设置维度ID
                     * @param _dimensionId 维度ID
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
                     * 获取子项ID，category和severity级别必填
                     * @return CategoryId 子项ID，category和severity级别必填
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置子项ID，category和severity级别必填
                     * @param _categoryId 子项ID，category和severity级别必填
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
                     * 获取等级，severity级别必填
枚举值：
critical：严重
high：高危
medium：中危
low：低危
                     * @return Severity 等级，severity级别必填
枚举值：
critical：严重
high：高危
medium：中危
low：低危
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置等级，severity级别必填
枚举值：
critical：严重
high：高危
medium：中危
low：低危
                     * @param _severity 等级，severity级别必填
枚举值：
critical：严重
high：高危
medium：中危
low：低危
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
                     * 获取扣分上限
                     * @return MaxDeductScore 扣分上限
                     * 
                     */
                    int64_t GetMaxDeductScore() const;

                    /**
                     * 设置扣分上限
                     * @param _maxDeductScore 扣分上限
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
                     * 获取单次扣分
                     * @return DeductPerItem 单次扣分
                     * 
                     */
                    int64_t GetDeductPerItem() const;

                    /**
                     * 设置单次扣分
                     * @param _deductPerItem 单次扣分
                     * 
                     */
                    void SetDeductPerItem(const int64_t& _deductPerItem);

                    /**
                     * 判断参数 DeductPerItem 是否已赋值
                     * @return DeductPerItem 是否已赋值
                     * 
                     */
                    bool DeductPerItemHasBeenSet() const;

                private:

                    /**
                     * 规则类型
枚举值：
dimension：维度级规则
category：子项级规则
severity：等级级规则
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 维度ID
                     */
                    std::string m_dimensionId;
                    bool m_dimensionIdHasBeenSet;

                    /**
                     * 子项ID，category和severity级别必填
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 等级，severity级别必填
枚举值：
critical：严重
high：高危
medium：中危
low：低危
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * 扣分上限
                     */
                    int64_t m_maxDeductScore;
                    bool m_maxDeductScoreHasBeenSet;

                    /**
                     * 单次扣分
                     */
                    int64_t m_deductPerItem;
                    bool m_deductPerItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRULEITEM_H_
