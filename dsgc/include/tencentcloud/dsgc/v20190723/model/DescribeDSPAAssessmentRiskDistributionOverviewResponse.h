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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKDISTRIBUTIONOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKDISTRIBUTIONOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/Note.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPAAssessmentRiskDistributionOverview返回参数结构体
                */
                class DescribeDSPAAssessmentRiskDistributionOverviewResponse : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentRiskDistributionOverviewResponse();
                    ~DescribeDSPAAssessmentRiskDistributionOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险类型分布
                     * @return RiskTypeDistribution 风险类型分布
                     * 
                     */
                    std::vector<Note> GetRiskTypeDistribution() const;

                    /**
                     * 判断参数 RiskTypeDistribution 是否已赋值
                     * @return RiskTypeDistribution 是否已赋值
                     * 
                     */
                    bool RiskTypeDistributionHasBeenSet() const;

                    /**
                     * 获取风险详情分布
                     * @return RiskDetailDistribution 风险详情分布
                     * 
                     */
                    std::vector<Note> GetRiskDetailDistribution() const;

                    /**
                     * 判断参数 RiskDetailDistribution 是否已赋值
                     * @return RiskDetailDistribution 是否已赋值
                     * 
                     */
                    bool RiskDetailDistributionHasBeenSet() const;

                    /**
                     * 获取风险资产详情
                     * @return RiskAssetsDistribution 风险资产详情
                     * 
                     */
                    std::vector<Note> GetRiskAssetsDistribution() const;

                    /**
                     * 判断参数 RiskAssetsDistribution 是否已赋值
                     * @return RiskAssetsDistribution 是否已赋值
                     * 
                     */
                    bool RiskAssetsDistributionHasBeenSet() const;

                private:

                    /**
                     * 风险类型分布
                     */
                    std::vector<Note> m_riskTypeDistribution;
                    bool m_riskTypeDistributionHasBeenSet;

                    /**
                     * 风险详情分布
                     */
                    std::vector<Note> m_riskDetailDistribution;
                    bool m_riskDetailDistributionHasBeenSet;

                    /**
                     * 风险资产详情
                     */
                    std::vector<Note> m_riskAssetsDistribution;
                    bool m_riskAssetsDistributionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKDISTRIBUTIONOVERVIEWRESPONSE_H_
