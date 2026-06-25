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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATEBUDGETREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATEBUDGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/BudgetResource.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DisassociateBudget请求参数结构体
                */
                class DisassociateBudgetRequest : public AbstractModel
                {
                public:
                    DisassociateBudgetRequest();
                    ~DisassociateBudgetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Budget ID。</p>
                     * @return BudgetId <p>Budget ID。</p>
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置<p>Budget ID。</p>
                     * @param _budgetId <p>Budget ID。</p>
                     * 
                     */
                    void SetBudgetId(const std::string& _budgetId);

                    /**
                     * 判断参数 BudgetId 是否已赋值
                     * @return BudgetId 是否已赋值
                     * 
                     */
                    bool BudgetIdHasBeenSet() const;

                    /**
                     * 获取<p>要解除关联的资源列表。</p>
                     * @return Resources <p>要解除关联的资源列表。</p>
                     * 
                     */
                    std::vector<BudgetResource> GetResources() const;

                    /**
                     * 设置<p>要解除关联的资源列表。</p>
                     * @param _resources <p>要解除关联的资源列表。</p>
                     * 
                     */
                    void SetResources(const std::vector<BudgetResource>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                private:

                    /**
                     * <p>Budget ID。</p>
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * <p>要解除关联的资源列表。</p>
                     */
                    std::vector<BudgetResource> m_resources;
                    bool m_resourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATEBUDGETREQUEST_H_
