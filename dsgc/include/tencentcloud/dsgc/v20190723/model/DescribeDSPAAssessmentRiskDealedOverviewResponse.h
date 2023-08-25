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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKDEALEDOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKDEALEDOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPAAssessmentRiskDealedOverview返回参数结构体
                */
                class DescribeDSPAAssessmentRiskDealedOverviewResponse : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentRiskDealedOverviewResponse();
                    ~DescribeDSPAAssessmentRiskDealedOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取遗留待处理风险总数
                     * @return TotalCount 遗留待处理风险总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取昨日完成风险处置数
                     * @return YesterdayDealedCount 昨日完成风险处置数
                     * 
                     */
                    uint64_t GetYesterdayDealedCount() const;

                    /**
                     * 判断参数 YesterdayDealedCount 是否已赋值
                     * @return YesterdayDealedCount 是否已赋值
                     * 
                     */
                    bool YesterdayDealedCountHasBeenSet() const;

                    /**
                     * 获取遗留待处理风险数周同比
                     * @return UnDealedRiskWeekRatio 遗留待处理风险数周同比
                     * 
                     */
                    double GetUnDealedRiskWeekRatio() const;

                    /**
                     * 判断参数 UnDealedRiskWeekRatio 是否已赋值
                     * @return UnDealedRiskWeekRatio 是否已赋值
                     * 
                     */
                    bool UnDealedRiskWeekRatioHasBeenSet() const;

                    /**
                     * 获取遗留待处理风险数日环比
                     * @return UnDealedRiskDayRatio 遗留待处理风险数日环比
                     * 
                     */
                    double GetUnDealedRiskDayRatio() const;

                    /**
                     * 判断参数 UnDealedRiskDayRatio 是否已赋值
                     * @return UnDealedRiskDayRatio 是否已赋值
                     * 
                     */
                    bool UnDealedRiskDayRatioHasBeenSet() const;

                private:

                    /**
                     * 遗留待处理风险总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 昨日完成风险处置数
                     */
                    uint64_t m_yesterdayDealedCount;
                    bool m_yesterdayDealedCountHasBeenSet;

                    /**
                     * 遗留待处理风险数周同比
                     */
                    double m_unDealedRiskWeekRatio;
                    bool m_unDealedRiskWeekRatioHasBeenSet;

                    /**
                     * 遗留待处理风险数日环比
                     */
                    double m_unDealedRiskDayRatio;
                    bool m_unDealedRiskDayRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKDEALEDOVERVIEWRESPONSE_H_
