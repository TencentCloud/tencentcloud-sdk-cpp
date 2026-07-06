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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_ACCOUNTPRODUCTDETAILSTATS_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_ACCOUNTPRODUCTDETAILSTATS_H_

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
                * 单个产品的风险统计详情
                */
                class AccountProductDetailStats : public AbstractModel
                {
                public:
                    AccountProductDetailStats();
                    ~AccountProductDetailStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Product 产品类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置产品类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _product 产品类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取体检策略数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyCount 体检策略数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPolicyCount() const;

                    /**
                     * 设置体检策略数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyCount 体检策略数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyCount(const int64_t& _policyCount);

                    /**
                     * 判断参数 PolicyCount 是否已赋值
                     * @return PolicyCount 是否已赋值
                     * 
                     */
                    bool PolicyCountHasBeenSet() const;

                    /**
                     * 获取待整改风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UntreatedRiskCount 待整改风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUntreatedRiskCount() const;

                    /**
                     * 设置待整改风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _untreatedRiskCount 待整改风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUntreatedRiskCount(const int64_t& _untreatedRiskCount);

                    /**
                     * 判断参数 UntreatedRiskCount 是否已赋值
                     * @return UntreatedRiskCount 是否已赋值
                     * 
                     */
                    bool UntreatedRiskCountHasBeenSet() const;

                    /**
                     * 获取总风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalRiskCount 总风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalRiskCount() const;

                    /**
                     * 设置总风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalRiskCount 总风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalRiskCount(const int64_t& _totalRiskCount);

                    /**
                     * 判断参数 TotalRiskCount 是否已赋值
                     * @return TotalRiskCount 是否已赋值
                     * 
                     */
                    bool TotalRiskCountHasBeenSet() const;

                    /**
                     * 获取已处置数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TreatedRiskCount 已处置数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTreatedRiskCount() const;

                    /**
                     * 设置已处置数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _treatedRiskCount 已处置数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTreatedRiskCount(const int64_t& _treatedRiskCount);

                    /**
                     * 判断参数 TreatedRiskCount 是否已赋值
                     * @return TreatedRiskCount 是否已赋值
                     * 
                     */
                    bool TreatedRiskCountHasBeenSet() const;

                    /**
                     * 获取已忽略数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoredRiskCount 已忽略数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIgnoredRiskCount() const;

                    /**
                     * 设置已忽略数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoredRiskCount 已忽略数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIgnoredRiskCount(const int64_t& _ignoredRiskCount);

                    /**
                     * 判断参数 IgnoredRiskCount 是否已赋值
                     * @return IgnoredRiskCount 是否已赋值
                     * 
                     */
                    bool IgnoredRiskCountHasBeenSet() const;

                    /**
                     * 获取整改率，如 50%，无需整改时为 无需整改
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RectifyRate 整改率，如 50%，无需整改时为 无需整改
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRectifyRate() const;

                    /**
                     * 设置整改率，如 50%，无需整改时为 无需整改
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rectifyRate 整改率，如 50%，无需整改时为 无需整改
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRectifyRate(const std::string& _rectifyRate);

                    /**
                     * 判断参数 RectifyRate 是否已赋值
                     * @return RectifyRate 是否已赋值
                     * 
                     */
                    bool RectifyRateHasBeenSet() const;

                    /**
                     * 获取最近一次体检时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastCheckTime 最近一次体检时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置最近一次体检时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastCheckTime 最近一次体检时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastCheckTime(const std::string& _lastCheckTime);

                    /**
                     * 判断参数 LastCheckTime 是否已赋值
                     * @return LastCheckTime 是否已赋值
                     * 
                     */
                    bool LastCheckTimeHasBeenSet() const;

                    /**
                     * 获取子类 ID 列表
                     * @return SubcategoryIds 子类 ID 列表
                     * 
                     */
                    std::vector<std::string> GetSubcategoryIds() const;

                    /**
                     * 设置子类 ID 列表
                     * @param _subcategoryIds 子类 ID 列表
                     * 
                     */
                    void SetSubcategoryIds(const std::vector<std::string>& _subcategoryIds);

                    /**
                     * 判断参数 SubcategoryIds 是否已赋值
                     * @return SubcategoryIds 是否已赋值
                     * 
                     */
                    bool SubcategoryIdsHasBeenSet() const;

                    /**
                     * 获取是否超时未体检
                     * @return IsOverdue 是否超时未体检
                     * 
                     */
                    bool GetIsOverdue() const;

                    /**
                     * 设置是否超时未体检
                     * @param _isOverdue 是否超时未体检
                     * 
                     */
                    void SetIsOverdue(const bool& _isOverdue);

                    /**
                     * 判断参数 IsOverdue 是否已赋值
                     * @return IsOverdue 是否已赋值
                     * 
                     */
                    bool IsOverdueHasBeenSet() const;

                private:

                    /**
                     * 产品类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 体检策略数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_policyCount;
                    bool m_policyCountHasBeenSet;

                    /**
                     * 待整改风险数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_untreatedRiskCount;
                    bool m_untreatedRiskCountHasBeenSet;

                    /**
                     * 总风险数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalRiskCount;
                    bool m_totalRiskCountHasBeenSet;

                    /**
                     * 已处置数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_treatedRiskCount;
                    bool m_treatedRiskCountHasBeenSet;

                    /**
                     * 已忽略数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ignoredRiskCount;
                    bool m_ignoredRiskCountHasBeenSet;

                    /**
                     * 整改率，如 50%，无需整改时为 无需整改
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rectifyRate;
                    bool m_rectifyRateHasBeenSet;

                    /**
                     * 最近一次体检时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * 子类 ID 列表
                     */
                    std::vector<std::string> m_subcategoryIds;
                    bool m_subcategoryIdsHasBeenSet;

                    /**
                     * 是否超时未体检
                     */
                    bool m_isOverdue;
                    bool m_isOverdueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_ACCOUNTPRODUCTDETAILSTATS_H_
