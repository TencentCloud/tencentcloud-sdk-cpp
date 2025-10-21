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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBudget请求参数结构体
                */
                class DescribeBudgetRequest : public AbstractModel
                {
                public:
                    DescribeBudgetRequest();
                    ~DescribeBudgetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码，整型
                     * @return PageNo 页码，整型
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置页码，整型
                     * @param _pageNo 页码，整型
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取每页数目，整型
                     * @return PageSize 每页数目，整型
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页数目，整型
                     * @param _pageSize 每页数目，整型
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取预算项目id
                     * @return BudgetId 预算项目id
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置预算项目id
                     * @param _budgetId 预算项目id
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
                     * 获取预算名称
                     * @return BudgetName 预算名称
                     * 
                     */
                    std::string GetBudgetName() const;

                    /**
                     * 设置预算名称
                     * @param _budgetName 预算名称
                     * 
                     */
                    void SetBudgetName(const std::string& _budgetName);

                    /**
                     * 判断参数 BudgetName 是否已赋值
                     * @return BudgetName 是否已赋值
                     * 
                     */
                    bool BudgetNameHasBeenSet() const;

                    /**
                     * 获取EXPIRED失效，ACTIVE生效中， ACTIVATED待生效
                     * @return BudgetStatus EXPIRED失效，ACTIVE生效中， ACTIVATED待生效
                     * 
                     */
                    std::string GetBudgetStatus() const;

                    /**
                     * 设置EXPIRED失效，ACTIVE生效中， ACTIVATED待生效
                     * @param _budgetStatus EXPIRED失效，ACTIVE生效中， ACTIVATED待生效
                     * 
                     */
                    void SetBudgetStatus(const std::string& _budgetStatus);

                    /**
                     * 判断参数 BudgetStatus 是否已赋值
                     * @return BudgetStatus 是否已赋值
                     * 
                     */
                    bool BudgetStatusHasBeenSet() const;

                    /**
                     * 获取DAY天 MONTH月度 QUARTER季度 YEAR年度
                     * @return CycleTypes DAY天 MONTH月度 QUARTER季度 YEAR年度
                     * 
                     */
                    std::vector<std::string> GetCycleTypes() const;

                    /**
                     * 设置DAY天 MONTH月度 QUARTER季度 YEAR年度
                     * @param _cycleTypes DAY天 MONTH月度 QUARTER季度 YEAR年度
                     * 
                     */
                    void SetCycleTypes(const std::vector<std::string>& _cycleTypes);

                    /**
                     * 判断参数 CycleTypes 是否已赋值
                     * @return CycleTypes 是否已赋值
                     * 
                     */
                    bool CycleTypesHasBeenSet() const;

                private:

                    /**
                     * 页码，整型
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 每页数目，整型
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 预算项目id
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * 预算名称
                     */
                    std::string m_budgetName;
                    bool m_budgetNameHasBeenSet;

                    /**
                     * EXPIRED失效，ACTIVE生效中， ACTIVATED待生效
                     */
                    std::string m_budgetStatus;
                    bool m_budgetStatusHasBeenSet;

                    /**
                     * DAY天 MONTH月度 QUARTER季度 YEAR年度
                     */
                    std::vector<std::string> m_cycleTypes;
                    bool m_cycleTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETREQUEST_H_
