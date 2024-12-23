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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKSIDEDISTRIBUTEDRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKSIDEDISTRIBUTEDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/RiskSideDistributed.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPAAssessmentRiskSideDistributed返回参数结构体
                */
                class DescribeDSPAAssessmentRiskSideDistributedResponse : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentRiskSideDistributedResponse();
                    ~DescribeDSPAAssessmentRiskSideDistributedResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险面的分布
                     * @return RiskSideDistributed 风险面的分布
                     * 
                     */
                    std::vector<RiskSideDistributed> GetRiskSideDistributed() const;

                    /**
                     * 判断参数 RiskSideDistributed 是否已赋值
                     * @return RiskSideDistributed 是否已赋值
                     * 
                     */
                    bool RiskSideDistributedHasBeenSet() const;

                private:

                    /**
                     * 风险面的分布
                     */
                    std::vector<RiskSideDistributed> m_riskSideDistributed;
                    bool m_riskSideDistributedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKSIDEDISTRIBUTEDRESPONSE_H_
