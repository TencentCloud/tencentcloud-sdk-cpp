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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKSIDELISTRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKSIDELISTRESPONSE_H_

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
                * DescribeDSPAAssessmentRiskSideList返回参数结构体
                */
                class DescribeDSPAAssessmentRiskSideListResponse : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentRiskSideListResponse();
                    ~DescribeDSPAAssessmentRiskSideListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险面列表
                     * @return RiskSideItmeList 风险面列表
                     * @deprecated
                     */
                    std::vector<Note> GetRiskSideItmeList() const;

                    /**
                     * 判断参数 RiskSideItmeList 是否已赋值
                     * @return RiskSideItmeList 是否已赋值
                     * @deprecated
                     */
                    bool RiskSideItmeListHasBeenSet() const;

                    /**
                     * 获取风险面列表
                     * @return RiskSideItemList 风险面列表
                     * 
                     */
                    std::vector<Note> GetRiskSideItemList() const;

                    /**
                     * 判断参数 RiskSideItemList 是否已赋值
                     * @return RiskSideItemList 是否已赋值
                     * 
                     */
                    bool RiskSideItemListHasBeenSet() const;

                private:

                    /**
                     * 风险面列表
                     */
                    std::vector<Note> m_riskSideItmeList;
                    bool m_riskSideItmeListHasBeenSet;

                    /**
                     * 风险面列表
                     */
                    std::vector<Note> m_riskSideItemList;
                    bool m_riskSideItemListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTRISKSIDELISTRESPONSE_H_
