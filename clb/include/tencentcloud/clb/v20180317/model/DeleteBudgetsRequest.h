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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DELETEBUDGETSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DELETEBUDGETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteBudgets请求参数结构体
                */
                class DeleteBudgetsRequest : public AbstractModel
                {
                public:
                    DeleteBudgetsRequest();
                    ~DeleteBudgetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>要删除的Budget ID列表。</p>
                     * @return BudgetIds <p>要删除的Budget ID列表。</p>
                     * 
                     */
                    std::vector<std::string> GetBudgetIds() const;

                    /**
                     * 设置<p>要删除的Budget ID列表。</p>
                     * @param _budgetIds <p>要删除的Budget ID列表。</p>
                     * 
                     */
                    void SetBudgetIds(const std::vector<std::string>& _budgetIds);

                    /**
                     * 判断参数 BudgetIds 是否已赋值
                     * @return BudgetIds 是否已赋值
                     * 
                     */
                    bool BudgetIdsHasBeenSet() const;

                private:

                    /**
                     * <p>要删除的Budget ID列表。</p>
                     */
                    std::vector<std::string> m_budgetIds;
                    bool m_budgetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DELETEBUDGETSREQUEST_H_
