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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERULEOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERULEOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeRuleOverview返回参数结构体
                */
                class DescribeRuleOverviewResponse : public AbstractModel
                {
                public:
                    DescribeRuleOverviewResponse();
                    ~DescribeRuleOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则总数
                     * @return AllTotal 规则总数
                     * 
                     */
                    uint64_t GetAllTotal() const;

                    /**
                     * 判断参数 AllTotal 是否已赋值
                     * @return AllTotal 是否已赋值
                     * 
                     */
                    bool AllTotalHasBeenSet() const;

                    /**
                     * 获取阻断策略规则数量
                     * @return StrategyNum 阻断策略规则数量
                     * 
                     */
                    uint64_t GetStrategyNum() const;

                    /**
                     * 判断参数 StrategyNum 是否已赋值
                     * @return StrategyNum 是否已赋值
                     * 
                     */
                    bool StrategyNumHasBeenSet() const;

                    /**
                     * 获取启用规则数量
                     * @return StartRuleNum 启用规则数量
                     * 
                     */
                    uint64_t GetStartRuleNum() const;

                    /**
                     * 判断参数 StartRuleNum 是否已赋值
                     * @return StartRuleNum 是否已赋值
                     * 
                     */
                    bool StartRuleNumHasBeenSet() const;

                    /**
                     * 获取停用规则数量
                     * @return StopRuleNum 停用规则数量
                     * 
                     */
                    uint64_t GetStopRuleNum() const;

                    /**
                     * 判断参数 StopRuleNum 是否已赋值
                     * @return StopRuleNum 是否已赋值
                     * 
                     */
                    bool StopRuleNumHasBeenSet() const;

                    /**
                     * 获取剩余配额
                     * @return RemainingNum 剩余配额
                     * 
                     */
                    int64_t GetRemainingNum() const;

                    /**
                     * 判断参数 RemainingNum 是否已赋值
                     * @return RemainingNum 是否已赋值
                     * 
                     */
                    bool RemainingNumHasBeenSet() const;

                private:

                    /**
                     * 规则总数
                     */
                    uint64_t m_allTotal;
                    bool m_allTotalHasBeenSet;

                    /**
                     * 阻断策略规则数量
                     */
                    uint64_t m_strategyNum;
                    bool m_strategyNumHasBeenSet;

                    /**
                     * 启用规则数量
                     */
                    uint64_t m_startRuleNum;
                    bool m_startRuleNumHasBeenSet;

                    /**
                     * 停用规则数量
                     */
                    uint64_t m_stopRuleNum;
                    bool m_stopRuleNumHasBeenSet;

                    /**
                     * 剩余配额
                     */
                    int64_t m_remainingNum;
                    bool m_remainingNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERULEOVERVIEWRESPONSE_H_
