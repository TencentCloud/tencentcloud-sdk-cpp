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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTNEWDISCOVEREDRISKOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTNEWDISCOVEREDRISKOVERVIEWRESPONSE_H_

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
                * DescribeDSPAAssessmentNewDiscoveredRiskOverview返回参数结构体
                */
                class DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse();
                    ~DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取待处理的风险数
                     * @return NewDiscoveredRiskCount 待处理的风险数
                     * 
                     */
                    int64_t GetNewDiscoveredRiskCount() const;

                    /**
                     * 判断参数 NewDiscoveredRiskCount 是否已赋值
                     * @return NewDiscoveredRiskCount 是否已赋值
                     * 
                     */
                    bool NewDiscoveredRiskCountHasBeenSet() const;

                    /**
                     * 获取受影响的资产数
                     * @return AffectedAssetCount 受影响的资产数
                     * 
                     */
                    int64_t GetAffectedAssetCount() const;

                    /**
                     * 判断参数 AffectedAssetCount 是否已赋值
                     * @return AffectedAssetCount 是否已赋值
                     * 
                     */
                    bool AffectedAssetCountHasBeenSet() const;

                    /**
                     * 获取周同比
                     * @return WeekRatio 周同比
                     * 
                     */
                    double GetWeekRatio() const;

                    /**
                     * 判断参数 WeekRatio 是否已赋值
                     * @return WeekRatio 是否已赋值
                     * 
                     */
                    bool WeekRatioHasBeenSet() const;

                private:

                    /**
                     * 待处理的风险数
                     */
                    int64_t m_newDiscoveredRiskCount;
                    bool m_newDiscoveredRiskCountHasBeenSet;

                    /**
                     * 受影响的资产数
                     */
                    int64_t m_affectedAssetCount;
                    bool m_affectedAssetCountHasBeenSet;

                    /**
                     * 周同比
                     */
                    double m_weekRatio;
                    bool m_weekRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTNEWDISCOVEREDRISKOVERVIEWRESPONSE_H_
