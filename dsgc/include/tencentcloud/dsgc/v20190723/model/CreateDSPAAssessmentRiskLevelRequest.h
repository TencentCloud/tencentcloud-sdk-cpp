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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPAASSESSMENTRISKLEVELREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPAASSESSMENTRISKLEVELREQUEST_H_

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
                * CreateDSPAAssessmentRiskLevel请求参数结构体
                */
                class CreateDSPAAssessmentRiskLevelRequest : public AbstractModel
                {
                public:
                    CreateDSPAAssessmentRiskLevelRequest();
                    ~CreateDSPAAssessmentRiskLevelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取dspa实例id
                     * @return DspaId dspa实例id
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置dspa实例id
                     * @param _dspaId dspa实例id
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取风险等级名称
                     * @return RiskLevelName 风险等级名称
                     * 
                     */
                    std::string GetRiskLevelName() const;

                    /**
                     * 设置风险等级名称
                     * @param _riskLevelName 风险等级名称
                     * 
                     */
                    void SetRiskLevelName(const std::string& _riskLevelName);

                    /**
                     * 判断参数 RiskLevelName 是否已赋值
                     * @return RiskLevelName 是否已赋值
                     * 
                     */
                    bool RiskLevelNameHasBeenSet() const;

                    /**
                     * 获取识别模板
                     * @return IdentifyComplianceId 识别模板
                     * 
                     */
                    int64_t GetIdentifyComplianceId() const;

                    /**
                     * 设置识别模板
                     * @param _identifyComplianceId 识别模板
                     * 
                     */
                    void SetIdentifyComplianceId(const int64_t& _identifyComplianceId);

                    /**
                     * 判断参数 IdentifyComplianceId 是否已赋值
                     * @return IdentifyComplianceId 是否已赋值
                     * 
                     */
                    bool IdentifyComplianceIdHasBeenSet() const;

                    /**
                     * 获取风险等级矩阵
                     * @return RiskLevelRule 风险等级矩阵
                     * 
                     */
                    std::vector<RiskLevelMatrix> GetRiskLevelRule() const;

                    /**
                     * 设置风险等级矩阵
                     * @param _riskLevelRule 风险等级矩阵
                     * 
                     */
                    void SetRiskLevelRule(const std::vector<RiskLevelMatrix>& _riskLevelRule);

                    /**
                     * 判断参数 RiskLevelRule 是否已赋值
                     * @return RiskLevelRule 是否已赋值
                     * 
                     */
                    bool RiskLevelRuleHasBeenSet() const;

                    /**
                     * 获取风险等级的描述
                     * @return RiskLevelDescription 风险等级的描述
                     * 
                     */
                    std::string GetRiskLevelDescription() const;

                    /**
                     * 设置风险等级的描述
                     * @param _riskLevelDescription 风险等级的描述
                     * 
                     */
                    void SetRiskLevelDescription(const std::string& _riskLevelDescription);

                    /**
                     * 判断参数 RiskLevelDescription 是否已赋值
                     * @return RiskLevelDescription 是否已赋值
                     * 
                     */
                    bool RiskLevelDescriptionHasBeenSet() const;

                private:

                    /**
                     * dspa实例id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 风险等级名称
                     */
                    std::string m_riskLevelName;
                    bool m_riskLevelNameHasBeenSet;

                    /**
                     * 识别模板
                     */
                    int64_t m_identifyComplianceId;
                    bool m_identifyComplianceIdHasBeenSet;

                    /**
                     * 风险等级矩阵
                     */
                    std::vector<RiskLevelMatrix> m_riskLevelRule;
                    bool m_riskLevelRuleHasBeenSet;

                    /**
                     * 风险等级的描述
                     */
                    std::string m_riskLevelDescription;
                    bool m_riskLevelDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPAASSESSMENTRISKLEVELREQUEST_H_
