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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBUDGETSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBUDGETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeBudgets请求参数结构体
                */
                class DescribeBudgetsRequest : public AbstractModel
                {
                public:
                    DescribeBudgetsRequest();
                    ~DescribeBudgetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Budget ID列表。</p>
                     * @return BudgetIds <p>Budget ID列表。</p>
                     * 
                     */
                    std::vector<std::string> GetBudgetIds() const;

                    /**
                     * 设置<p>Budget ID列表。</p>
                     * @param _budgetIds <p>Budget ID列表。</p>
                     * 
                     */
                    void SetBudgetIds(const std::vector<std::string>& _budgetIds);

                    /**
                     * 判断参数 BudgetIds 是否已赋值
                     * @return BudgetIds 是否已赋值
                     * 
                     */
                    bool BudgetIdsHasBeenSet() const;

                    /**
                     * 获取<p>过滤列表。</p><p>支持：BudgetId、BudgetName、Status。</p>
                     * @return Filters <p>过滤列表。</p><p>支持：BudgetId、BudgetName、Status。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤列表。</p><p>支持：BudgetId、BudgetName、Status。</p>
                     * @param _filters <p>过滤列表。</p><p>支持：BudgetId、BudgetName、Status。</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>本次查询限制的数量。</p><p>取值范围：[1, 100]</p><p>默认值：20。</p>
                     * @return Limit <p>本次查询限制的数量。</p><p>取值范围：[1, 100]</p><p>默认值：20。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>本次查询限制的数量。</p><p>取值范围：[1, 100]</p><p>默认值：20。</p>
                     * @param _limit <p>本次查询限制的数量。</p><p>取值范围：[1, 100]</p><p>默认值：20。</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>本次查询偏移量。</p><p>默认值：0。</p>
                     * @return Offset <p>本次查询偏移量。</p><p>默认值：0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>本次查询偏移量。</p><p>默认值：0。</p>
                     * @param _offset <p>本次查询偏移量。</p><p>默认值：0。</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>Budget ID列表。</p>
                     */
                    std::vector<std::string> m_budgetIds;
                    bool m_budgetIdsHasBeenSet;

                    /**
                     * <p>过滤列表。</p><p>支持：BudgetId、BudgetName、Status。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>本次查询限制的数量。</p><p>取值范围：[1, 100]</p><p>默认值：20。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>本次查询偏移量。</p><p>默认值：0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBUDGETSREQUEST_H_
