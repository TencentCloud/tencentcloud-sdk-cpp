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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSTATISTICSOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSTATISTICSOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Distribution.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeAppStatisticsOverview返回参数结构体
                */
                class DescribeAppStatisticsOverviewResponse : public AbstractModel
                {
                public:
                    DescribeAppStatisticsOverviewResponse();
                    ~DescribeAppStatisticsOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>首 tokens 平均耗时（毫秒）</p>
                     * @return AvgFirstTokenTime <p>首 tokens 平均耗时（毫秒）</p>
                     * 
                     */
                    std::string GetAvgFirstTokenTime() const;

                    /**
                     * 判断参数 AvgFirstTokenTime 是否已赋值
                     * @return AvgFirstTokenTime 是否已赋值
                     * 
                     */
                    bool AvgFirstTokenTimeHasBeenSet() const;

                    /**
                     * 获取<p>总 tokens 平均耗时（毫秒）</p>
                     * @return AvgTotalTokenTime <p>总 tokens 平均耗时（毫秒）</p>
                     * 
                     */
                    std::string GetAvgTotalTokenTime() const;

                    /**
                     * 判断参数 AvgTotalTokenTime 是否已赋值
                     * @return AvgTotalTokenTime 是否已赋值
                     * 
                     */
                    bool AvgTotalTokenTimeHasBeenSet() const;

                    /**
                     * 获取<p>应用调用成功率（百分比，0~100）</p>
                     * @return CallSuccessRate <p>应用调用成功率（百分比，0~100）</p>
                     * 
                     */
                    double GetCallSuccessRate() const;

                    /**
                     * 判断参数 CallSuccessRate 是否已赋值
                     * @return CallSuccessRate 是否已赋值
                     * 
                     */
                    bool CallSuccessRateHasBeenSet() const;

                    /**
                     * 获取<p>回复类型分布列表；按 app_type 统计，已补全所有回复方式并按固定顺序返回，无数据的回复方式 call_count 为 0</p>
                     * @return ReplyTypeDistributionList <p>回复类型分布列表；按 app_type 统计，已补全所有回复方式并按固定顺序返回，无数据的回复方式 call_count 为 0</p>
                     * 
                     */
                    std::vector<Distribution> GetReplyTypeDistributionList() const;

                    /**
                     * 判断参数 ReplyTypeDistributionList 是否已赋值
                     * @return ReplyTypeDistributionList 是否已赋值
                     * 
                     */
                    bool ReplyTypeDistributionListHasBeenSet() const;

                    /**
                     * 获取<p>总调用次数</p>
                     * @return TotalCallCount <p>总调用次数</p>
                     * 
                     */
                    std::string GetTotalCallCount() const;

                    /**
                     * 判断参数 TotalCallCount 是否已赋值
                     * @return TotalCallCount 是否已赋值
                     * 
                     */
                    bool TotalCallCountHasBeenSet() const;

                private:

                    /**
                     * <p>首 tokens 平均耗时（毫秒）</p>
                     */
                    std::string m_avgFirstTokenTime;
                    bool m_avgFirstTokenTimeHasBeenSet;

                    /**
                     * <p>总 tokens 平均耗时（毫秒）</p>
                     */
                    std::string m_avgTotalTokenTime;
                    bool m_avgTotalTokenTimeHasBeenSet;

                    /**
                     * <p>应用调用成功率（百分比，0~100）</p>
                     */
                    double m_callSuccessRate;
                    bool m_callSuccessRateHasBeenSet;

                    /**
                     * <p>回复类型分布列表；按 app_type 统计，已补全所有回复方式并按固定顺序返回，无数据的回复方式 call_count 为 0</p>
                     */
                    std::vector<Distribution> m_replyTypeDistributionList;
                    bool m_replyTypeDistributionListHasBeenSet;

                    /**
                     * <p>总调用次数</p>
                     */
                    std::string m_totalCallCount;
                    bool m_totalCallCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSTATISTICSOVERVIEWRESPONSE_H_
