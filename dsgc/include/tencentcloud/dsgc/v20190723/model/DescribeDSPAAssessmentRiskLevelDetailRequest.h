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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKLEVELDETAILREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKLEVELDETAILREQUEST_H_

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
                * DescribeDSPAAssessmentRiskLevelDetail请求参数结构体
                */
                class DescribeDSPAAssessmentRiskLevelDetailRequest : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentRiskLevelDetailRequest();
                    ~DescribeDSPAAssessmentRiskLevelDetailRequest() = default;
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
                     * 获取风险级别id
                     * @return RiskLevelId 风险级别id
                     * 
                     */
                    int64_t GetRiskLevelId() const;

                    /**
                     * 设置风险级别id
                     * @param _riskLevelId 风险级别id
                     * 
                     */
                    void SetRiskLevelId(const int64_t& _riskLevelId);

                    /**
                     * 判断参数 RiskLevelId 是否已赋值
                     * @return RiskLevelId 是否已赋值
                     * 
                     */
                    bool RiskLevelIdHasBeenSet() const;

                private:

                    /**
                     * dspa实例id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 风险级别id
                     */
                    int64_t m_riskLevelId;
                    bool m_riskLevelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKLEVELDETAILREQUEST_H_
