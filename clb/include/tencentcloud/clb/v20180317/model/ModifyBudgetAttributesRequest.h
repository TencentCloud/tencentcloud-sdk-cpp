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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYBUDGETATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYBUDGETATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/BudgetConfigInput.h>
#include <tencentcloud/clb/v20180317/model/RateLimitConfigForBudget.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyBudgetAttributes请求参数结构体
                */
                class ModifyBudgetAttributesRequest : public AbstractModel
                {
                public:
                    ModifyBudgetAttributesRequest();
                    ~ModifyBudgetAttributesRequest() = default;
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
                     * 获取<p>预算配置数组。</p><p>数组长度最大为3，最多可同时配置1d、7d、30d三个刷新周期，且每种刷新周期只能出现一次。BudgetResetAt不支持作为入参设置，系统会按配置的刷新周期自动维护刷新时间。</p>
                     * @return BudgetConfigs <p>预算配置数组。</p><p>数组长度最大为3，最多可同时配置1d、7d、30d三个刷新周期，且每种刷新周期只能出现一次。BudgetResetAt不支持作为入参设置，系统会按配置的刷新周期自动维护刷新时间。</p>
                     * 
                     */
                    std::vector<BudgetConfigInput> GetBudgetConfigs() const;

                    /**
                     * 设置<p>预算配置数组。</p><p>数组长度最大为3，最多可同时配置1d、7d、30d三个刷新周期，且每种刷新周期只能出现一次。BudgetResetAt不支持作为入参设置，系统会按配置的刷新周期自动维护刷新时间。</p>
                     * @param _budgetConfigs <p>预算配置数组。</p><p>数组长度最大为3，最多可同时配置1d、7d、30d三个刷新周期，且每种刷新周期只能出现一次。BudgetResetAt不支持作为入参设置，系统会按配置的刷新周期自动维护刷新时间。</p>
                     * 
                     */
                    void SetBudgetConfigs(const std::vector<BudgetConfigInput>& _budgetConfigs);

                    /**
                     * 判断参数 BudgetConfigs 是否已赋值
                     * @return BudgetConfigs 是否已赋值
                     * 
                     */
                    bool BudgetConfigsHasBeenSet() const;

                    /**
                     * 获取<p>Budget名称。</p>
                     * @return BudgetName <p>Budget名称。</p>
                     * 
                     */
                    std::string GetBudgetName() const;

                    /**
                     * 设置<p>Budget名称。</p>
                     * @param _budgetName <p>Budget名称。</p>
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
                     * 获取<p>Budget限速配置。</p>
                     * @return RateLimitConfig <p>Budget限速配置。</p>
                     * 
                     */
                    RateLimitConfigForBudget GetRateLimitConfig() const;

                    /**
                     * 设置<p>Budget限速配置。</p>
                     * @param _rateLimitConfig <p>Budget限速配置。</p>
                     * 
                     */
                    void SetRateLimitConfig(const RateLimitConfigForBudget& _rateLimitConfig);

                    /**
                     * 判断参数 RateLimitConfig 是否已赋值
                     * @return RateLimitConfig 是否已赋值
                     * 
                     */
                    bool RateLimitConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Budget ID。</p>
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * <p>预算配置数组。</p><p>数组长度最大为3，最多可同时配置1d、7d、30d三个刷新周期，且每种刷新周期只能出现一次。BudgetResetAt不支持作为入参设置，系统会按配置的刷新周期自动维护刷新时间。</p>
                     */
                    std::vector<BudgetConfigInput> m_budgetConfigs;
                    bool m_budgetConfigsHasBeenSet;

                    /**
                     * <p>Budget名称。</p>
                     */
                    std::string m_budgetName;
                    bool m_budgetNameHasBeenSet;

                    /**
                     * <p>Budget限速配置。</p>
                     */
                    RateLimitConfigForBudget m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYBUDGETATTRIBUTESREQUEST_H_
