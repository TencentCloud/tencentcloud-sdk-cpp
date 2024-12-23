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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKTEMPLATEVULNERABLELISTRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKTEMPLATEVULNERABLELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/AssessmentRiskItem.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPAAssessmentRiskTemplateVulnerableList返回参数结构体
                */
                class DescribeDSPAAssessmentRiskTemplateVulnerableListResponse : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentRiskTemplateVulnerableListResponse();
                    ~DescribeDSPAAssessmentRiskTemplateVulnerableListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取脆弱项列表
                     * @return RiskItemList 脆弱项列表
                     * 
                     */
                    std::vector<AssessmentRiskItem> GetRiskItemList() const;

                    /**
                     * 判断参数 RiskItemList 是否已赋值
                     * @return RiskItemList 是否已赋值
                     * 
                     */
                    bool RiskItemListHasBeenSet() const;

                    /**
                     * 获取总条数
                     * @return TotalCount 总条数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 脆弱项列表
                     */
                    std::vector<AssessmentRiskItem> m_riskItemList;
                    bool m_riskItemListHasBeenSet;

                    /**
                     * 总条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKTEMPLATEVULNERABLELISTRESPONSE_H_
