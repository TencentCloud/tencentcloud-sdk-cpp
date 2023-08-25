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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKOVERVIEWRESPONSE_H_

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
                * DescribeDSPAAssessmentRiskOverview返回参数结构体
                */
                class DescribeDSPAAssessmentRiskOverviewResponse : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentRiskOverviewResponse();
                    ~DescribeDSPAAssessmentRiskOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险总数
                     * @return TotalCount 风险总数
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
                     * 获取高危风险数
                     * @return HighRiskCount 高危风险数
                     * 
                     */
                    uint64_t GetHighRiskCount() const;

                    /**
                     * 判断参数 HighRiskCount 是否已赋值
                     * @return HighRiskCount 是否已赋值
                     * 
                     */
                    bool HighRiskCountHasBeenSet() const;

                    /**
                     * 获取周同比
                     * @return HighRiskWeekRatio 周同比
                     * 
                     */
                    double GetHighRiskWeekRatio() const;

                    /**
                     * 判断参数 HighRiskWeekRatio 是否已赋值
                     * @return HighRiskWeekRatio 是否已赋值
                     * 
                     */
                    bool HighRiskWeekRatioHasBeenSet() const;

                    /**
                     * 获取高危风险数日环比
                     * @return HighRiskDayRatio 高危风险数日环比
                     * 
                     */
                    double GetHighRiskDayRatio() const;

                    /**
                     * 判断参数 HighRiskDayRatio 是否已赋值
                     * @return HighRiskDayRatio 是否已赋值
                     * 
                     */
                    bool HighRiskDayRatioHasBeenSet() const;

                private:

                    /**
                     * 风险总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 高危风险数
                     */
                    uint64_t m_highRiskCount;
                    bool m_highRiskCountHasBeenSet;

                    /**
                     * 周同比
                     */
                    double m_highRiskWeekRatio;
                    bool m_highRiskWeekRatioHasBeenSet;

                    /**
                     * 高危风险数日环比
                     */
                    double m_highRiskDayRatio;
                    bool m_highRiskDayRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKOVERVIEWRESPONSE_H_
