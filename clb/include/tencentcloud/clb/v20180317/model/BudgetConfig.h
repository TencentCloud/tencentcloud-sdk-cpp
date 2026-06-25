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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETCONFIG_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETCONFIG_H_

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
                * Budget预算配置
                */
                class BudgetConfig : public AbstractModel
                {
                public:
                    BudgetConfig();
                    ~BudgetConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>预算刷新周期。</p><p>枚举值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>不传时默认30d。同一个Budget下每种刷新周期最多配置一次。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BudgetDuration <p>预算刷新周期。</p><p>枚举值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>不传时默认30d。同一个Budget下每种刷新周期最多配置一次。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBudgetDuration() const;

                    /**
                     * 设置<p>预算刷新周期。</p><p>枚举值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>不传时默认30d。同一个Budget下每种刷新周期最多配置一次。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _budgetDuration <p>预算刷新周期。</p><p>枚举值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>不传时默认30d。同一个Budget下每种刷新周期最多配置一次。</p>
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
                     * 获取<p>下一次刷新的时间</p>
                     * @return BudgetResetAt <p>下一次刷新的时间</p>
                     * 
                     */
                    std::string GetBudgetResetAt() const;

                    /**
                     * 设置<p>下一次刷新的时间</p>
                     * @param _budgetResetAt <p>下一次刷新的时间</p>
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
                     * 获取<p>最大预算。</p><p>单位：credit。取值需大于0且不超过10000000000；不传时默认100000。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxBudget <p>最大预算。</p><p>单位：credit。取值需大于0且不超过10000000000；不传时默认100000。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMaxBudget() const;

                    /**
                     * 设置<p>最大预算。</p><p>单位：credit。取值需大于0且不超过10000000000；不传时默认100000。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxBudget <p>最大预算。</p><p>单位：credit。取值需大于0且不超过10000000000；不传时默认100000。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxBudget(const double& _maxBudget);

                    /**
                     * 判断参数 MaxBudget 是否已赋值
                     * @return MaxBudget 是否已赋值
                     * 
                     */
                    bool MaxBudgetHasBeenSet() const;

                private:

                    /**
                     * <p>预算刷新周期。</p><p>枚举值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>不传时默认30d。同一个Budget下每种刷新周期最多配置一次。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_budgetDuration;
                    bool m_budgetDurationHasBeenSet;

                    /**
                     * <p>下一次刷新的时间</p>
                     */
                    std::string m_budgetResetAt;
                    bool m_budgetResetAtHasBeenSet;

                    /**
                     * <p>最大预算。</p><p>单位：credit。取值需大于0且不超过10000000000；不传时默认100000。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_maxBudget;
                    bool m_maxBudgetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETCONFIG_H_
