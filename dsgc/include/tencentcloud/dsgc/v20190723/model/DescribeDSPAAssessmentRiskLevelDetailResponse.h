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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKLEVELDETAILRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKLEVELDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/RiskLevelMatrix.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPAAssessmentRiskLevelDetail返回参数结构体
                */
                class DescribeDSPAAssessmentRiskLevelDetailResponse : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentRiskLevelDetailResponse();
                    ~DescribeDSPAAssessmentRiskLevelDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险级别名称
                     * @return RiskLevelName 风险级别名称
                     * 
                     */
                    std::string GetRiskLevelName() const;

                    /**
                     * 判断参数 RiskLevelName 是否已赋值
                     * @return RiskLevelName 是否已赋值
                     * 
                     */
                    bool RiskLevelNameHasBeenSet() const;

                    /**
                     * 获取风险级别描述
                     * @return RiskLevelDescription 风险级别描述
                     * 
                     */
                    std::string GetRiskLevelDescription() const;

                    /**
                     * 判断参数 RiskLevelDescription 是否已赋值
                     * @return RiskLevelDescription 是否已赋值
                     * 
                     */
                    bool RiskLevelDescriptionHasBeenSet() const;

                    /**
                     * 获取分类分级id
                     * @return IdentifyComplianceId 分类分级id
                     * 
                     */
                    int64_t GetIdentifyComplianceId() const;

                    /**
                     * 判断参数 IdentifyComplianceId 是否已赋值
                     * @return IdentifyComplianceId 是否已赋值
                     * 
                     */
                    bool IdentifyComplianceIdHasBeenSet() const;

                    /**
                     * 获取分类分级模板名称
                     * @return IdentifyComplianceName 分类分级模板名称
                     * 
                     */
                    std::string GetIdentifyComplianceName() const;

                    /**
                     * 判断参数 IdentifyComplianceName 是否已赋值
                     * @return IdentifyComplianceName 是否已赋值
                     * 
                     */
                    bool IdentifyComplianceNameHasBeenSet() const;

                    /**
                     * 获取风险数据
                     * @return RiskLevelMatrix 风险数据
                     * 
                     */
                    std::vector<RiskLevelMatrix> GetRiskLevelMatrix() const;

                    /**
                     * 判断参数 RiskLevelMatrix 是否已赋值
                     * @return RiskLevelMatrix 是否已赋值
                     * 
                     */
                    bool RiskLevelMatrixHasBeenSet() const;

                private:

                    /**
                     * 风险级别名称
                     */
                    std::string m_riskLevelName;
                    bool m_riskLevelNameHasBeenSet;

                    /**
                     * 风险级别描述
                     */
                    std::string m_riskLevelDescription;
                    bool m_riskLevelDescriptionHasBeenSet;

                    /**
                     * 分类分级id
                     */
                    int64_t m_identifyComplianceId;
                    bool m_identifyComplianceIdHasBeenSet;

                    /**
                     * 分类分级模板名称
                     */
                    std::string m_identifyComplianceName;
                    bool m_identifyComplianceNameHasBeenSet;

                    /**
                     * 风险数据
                     */
                    std::vector<RiskLevelMatrix> m_riskLevelMatrix;
                    bool m_riskLevelMatrixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKLEVELDETAILRESPONSE_H_
