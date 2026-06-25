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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETCONFIGINPUT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETCONFIGINPUT_H_

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
                * Budget预算配置入参
                */
                class BudgetConfigInput : public AbstractModel
                {
                public:
                    BudgetConfigInput();
                    ~BudgetConfigInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>预算刷新周期。</p><p>支持取值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>不传时默认使用30d。同一个Budget下每种刷新周期最多配置一次。</p>
                     * @return BudgetDuration <p>预算刷新周期。</p><p>支持取值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>不传时默认使用30d。同一个Budget下每种刷新周期最多配置一次。</p>
                     * 
                     */
                    std::string GetBudgetDuration() const;

                    /**
                     * 设置<p>预算刷新周期。</p><p>支持取值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>不传时默认使用30d。同一个Budget下每种刷新周期最多配置一次。</p>
                     * @param _budgetDuration <p>预算刷新周期。</p><p>支持取值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>不传时默认使用30d。同一个Budget下每种刷新周期最多配置一次。</p>
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
                     * 获取<p>最大预算。</p><p>单位：credit。取值需大于0且不超过10000000000；不传时默认100000。</p>
                     * @return MaxBudget <p>最大预算。</p><p>单位：credit。取值需大于0且不超过10000000000；不传时默认100000。</p>
                     * 
                     */
                    double GetMaxBudget() const;

                    /**
                     * 设置<p>最大预算。</p><p>单位：credit。取值需大于0且不超过10000000000；不传时默认100000。</p>
                     * @param _maxBudget <p>最大预算。</p><p>单位：credit。取值需大于0且不超过10000000000；不传时默认100000。</p>
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
                     * <p>预算刷新周期。</p><p>支持取值：</p><ul><li>1d：按天刷新</li><li>7d：按周刷新</li><li>30d：按月刷新</li></ul><p>不传时默认使用30d。同一个Budget下每种刷新周期最多配置一次。</p>
                     */
                    std::string m_budgetDuration;
                    bool m_budgetDurationHasBeenSet;

                    /**
                     * <p>最大预算。</p><p>单位：credit。取值需大于0且不超过10000000000；不传时默认100000。</p>
                     */
                    double m_maxBudget;
                    bool m_maxBudgetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BUDGETCONFIGINPUT_H_
