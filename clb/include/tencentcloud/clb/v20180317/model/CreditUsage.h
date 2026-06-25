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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREDITUSAGE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREDITUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Credit使用情况。该结构用于 CreditUsageSet 数组中的逐周期用量。
                */
                class CreditUsage : public AbstractModel
                {
                public:
                    CreditUsage();
                    ~CreditUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Budget刷新周期。</p><p>枚举值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>仅在 CreditUsageSet 数组元素中返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BudgetDuration <p>Budget刷新周期。</p><p>枚举值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>仅在 CreditUsageSet 数组元素中返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBudgetDuration() const;

                    /**
                     * 设置<p>Budget刷新周期。</p><p>枚举值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>仅在 CreditUsageSet 数组元素中返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _budgetDuration <p>Budget刷新周期。</p><p>枚举值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>仅在 CreditUsageSet 数组元素中返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBudgetDuration(const std::string& _budgetDuration);

                    /**
                     * 判断参数 BudgetDuration 是否已赋值
                     * @return BudgetDuration 是否已赋值
                     * 
                     */
                    bool BudgetDurationHasBeenSet() const;

                    /**
                     * 获取<p>下次刷新时间。</p><p>用户组关联Budget且Budget设置重置周期时返回；未关联Budget或未设置重置周期时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BudgetResetAt <p>下次刷新时间。</p><p>用户组关联Budget且Budget设置重置周期时返回；未关联Budget或未设置重置周期时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBudgetResetAt() const;

                    /**
                     * 设置<p>下次刷新时间。</p><p>用户组关联Budget且Budget设置重置周期时返回；未关联Budget或未设置重置周期时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _budgetResetAt <p>下次刷新时间。</p><p>用户组关联Budget且Budget设置重置周期时返回；未关联Budget或未设置重置周期时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBudgetResetAt(const std::string& _budgetResetAt);

                    /**
                     * 判断参数 BudgetResetAt 是否已赋值
                     * @return BudgetResetAt 是否已赋值
                     * 
                     */
                    bool BudgetResetAtHasBeenSet() const;

                    /**
                     * 获取<p>Credit上限。</p><p>用户组关联Budget且Budget设置最大预算时返回；未设置最大预算时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Limit <p>Credit上限。</p><p>用户组关联Budget且Budget设置最大预算时返回；未设置最大预算时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLimit() const;

                    /**
                     * 设置<p>Credit上限。</p><p>用户组关联Budget且Budget设置最大预算时返回；未设置最大预算时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limit <p>Credit上限。</p><p>用户组关联Budget且Budget设置最大预算时返回；未设置最大预算时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimit(const double& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>用户组已使用的Credit数量。</p>
                     * @return Used <p>用户组已使用的Credit数量。</p>
                     * 
                     */
                    double GetUsed() const;

                    /**
                     * 设置<p>用户组已使用的Credit数量。</p>
                     * @param _used <p>用户组已使用的Credit数量。</p>
                     * 
                     */
                    void SetUsed(const double& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                private:

                    /**
                     * <p>Budget刷新周期。</p><p>枚举值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>仅在 CreditUsageSet 数组元素中返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_budgetDuration;
                    bool m_budgetDurationHasBeenSet;

                    /**
                     * <p>下次刷新时间。</p><p>用户组关联Budget且Budget设置重置周期时返回；未关联Budget或未设置重置周期时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_budgetResetAt;
                    bool m_budgetResetAtHasBeenSet;

                    /**
                     * <p>Credit上限。</p><p>用户组关联Budget且Budget设置最大预算时返回；未设置最大预算时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>用户组已使用的Credit数量。</p>
                     */
                    double m_used;
                    bool m_usedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREDITUSAGE_H_
