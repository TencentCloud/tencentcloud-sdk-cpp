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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DIMENSIONITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DIMENSIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CategoryItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 维度扣分项
                */
                class DimensionItem : public AbstractModel
                {
                public:
                    DimensionItem();
                    ~DimensionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取维度ID
枚举值：
risk_governance：风险治理
threat_detection：威胁检测
protection_config：防护配置
                     * @return DimensionId 维度ID
枚举值：
risk_governance：风险治理
threat_detection：威胁检测
protection_config：防护配置
                     * 
                     */
                    std::string GetDimensionId() const;

                    /**
                     * 设置维度ID
枚举值：
risk_governance：风险治理
threat_detection：威胁检测
protection_config：防护配置
                     * @param _dimensionId 维度ID
枚举值：
risk_governance：风险治理
threat_detection：威胁检测
protection_config：防护配置
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
                     * 获取维度名称
                     * @return DimensionName 维度名称
                     * 
                     */
                    std::string GetDimensionName() const;

                    /**
                     * 设置维度名称
                     * @param _dimensionName 维度名称
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
                     * 获取维度扣分上限
                     * @return MaxDeductScore 维度扣分上限
                     * 
                     */
                    int64_t GetMaxDeductScore() const;

                    /**
                     * 设置维度扣分上限
                     * @param _maxDeductScore 维度扣分上限
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
                     * 获取维度实际扣分
                     * @return DeductScore 维度实际扣分
                     * 
                     */
                    int64_t GetDeductScore() const;

                    /**
                     * 设置维度实际扣分
                     * @param _deductScore 维度实际扣分
                     * 
                     */
                    void SetDeductScore(const int64_t& _deductScore);

                    /**
                     * 判断参数 DeductScore 是否已赋值
                     * @return DeductScore 是否已赋值
                     * 
                     */
                    bool DeductScoreHasBeenSet() const;

                    /**
                     * 获取子项列表
                     * @return Categories 子项列表
                     * 
                     */
                    std::vector<CategoryItem> GetCategories() const;

                    /**
                     * 设置子项列表
                     * @param _categories 子项列表
                     * 
                     */
                    void SetCategories(const std::vector<CategoryItem>& _categories);

                    /**
                     * 判断参数 Categories 是否已赋值
                     * @return Categories 是否已赋值
                     * 
                     */
                    bool CategoriesHasBeenSet() const;

                private:

                    /**
                     * 维度ID
枚举值：
risk_governance：风险治理
threat_detection：威胁检测
protection_config：防护配置
                     */
                    std::string m_dimensionId;
                    bool m_dimensionIdHasBeenSet;

                    /**
                     * 维度名称
                     */
                    std::string m_dimensionName;
                    bool m_dimensionNameHasBeenSet;

                    /**
                     * 维度扣分上限
                     */
                    int64_t m_maxDeductScore;
                    bool m_maxDeductScoreHasBeenSet;

                    /**
                     * 维度实际扣分
                     */
                    int64_t m_deductScore;
                    bool m_deductScoreHasBeenSet;

                    /**
                     * 子项列表
                     */
                    std::vector<CategoryItem> m_categories;
                    bool m_categoriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DIMENSIONITEM_H_
