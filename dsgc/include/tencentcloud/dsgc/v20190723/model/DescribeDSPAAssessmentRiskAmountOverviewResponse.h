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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKAMOUNTOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKAMOUNTOVERVIEWRESPONSE_H_

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
                * DescribeDSPAAssessmentRiskAmountOverview返回参数结构体
                */
                class DescribeDSPAAssessmentRiskAmountOverviewResponse : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentRiskAmountOverviewResponse();
                    ~DescribeDSPAAssessmentRiskAmountOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险总数
                     * @return TotalRiskCount 风险总数
                     * 
                     */
                    int64_t GetTotalRiskCount() const;

                    /**
                     * 判断参数 TotalRiskCount 是否已赋值
                     * @return TotalRiskCount 是否已赋值
                     * 
                     */
                    bool TotalRiskCountHasBeenSet() const;

                    /**
                     * 获取受影响的资产数
                     * @return TotalAffectedAssetCount 受影响的资产数
                     * 
                     */
                    int64_t GetTotalAffectedAssetCount() const;

                    /**
                     * 判断参数 TotalAffectedAssetCount 是否已赋值
                     * @return TotalAffectedAssetCount 是否已赋值
                     * 
                     */
                    bool TotalAffectedAssetCountHasBeenSet() const;

                private:

                    /**
                     * 风险总数
                     */
                    int64_t m_totalRiskCount;
                    bool m_totalRiskCountHasBeenSet;

                    /**
                     * 受影响的资产数
                     */
                    int64_t m_totalAffectedAssetCount;
                    bool m_totalAffectedAssetCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKAMOUNTOVERVIEWRESPONSE_H_
