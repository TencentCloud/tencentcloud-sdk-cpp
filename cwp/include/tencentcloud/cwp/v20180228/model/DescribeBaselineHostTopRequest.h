/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEHOSTTOPREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEHOSTTOPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineHostTop请求参数结构体
                */
                class DescribeBaselineHostTopRequest : public AbstractModel
                {
                public:
                    DescribeBaselineHostTopRequest();
                    ~DescribeBaselineHostTopRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取动态top值
                     * @return Top 动态top值
                     * 
                     */
                    uint64_t GetTop() const;

                    /**
                     * 设置动态top值
                     * @param _top 动态top值
                     * 
                     */
                    void SetTop(const uint64_t& _top);

                    /**
                     * 判断参数 Top 是否已赋值
                     * @return Top 是否已赋值
                     * 
                     */
                    bool TopHasBeenSet() const;

                    /**
                     * 获取策略id
                     * @return StrategyId 策略id
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置策略id
                     * @param _strategyId 策略id
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                private:

                    /**
                     * 动态top值
                     */
                    uint64_t m_top;
                    bool m_topHasBeenSet;

                    /**
                     * 策略id
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEHOSTTOPREQUEST_H_
