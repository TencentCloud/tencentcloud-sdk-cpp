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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_RISKSIDEDISTRIBUTED_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_RISKSIDEDISTRIBUTED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 风险面的分布
                */
                class RiskSideDistributed : public AbstractModel
                {
                public:
                    RiskSideDistributed();
                    ~RiskSideDistributed() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险面
                     * @return AssessmentRiskSide 风险面
                     * 
                     */
                    Note GetAssessmentRiskSide() const;

                    /**
                     * 设置风险面
                     * @param _assessmentRiskSide 风险面
                     * 
                     */
                    void SetAssessmentRiskSide(const Note& _assessmentRiskSide);

                    /**
                     * 判断参数 AssessmentRiskSide 是否已赋值
                     * @return AssessmentRiskSide 是否已赋值
                     * 
                     */
                    bool AssessmentRiskSideHasBeenSet() const;

                    /**
                     * 获取风险类型
                     * @return AssessmentRisk 风险类型
                     * 
                     */
                    std::vector<Note> GetAssessmentRisk() const;

                    /**
                     * 设置风险类型
                     * @param _assessmentRisk 风险类型
                     * 
                     */
                    void SetAssessmentRisk(const std::vector<Note>& _assessmentRisk);

                    /**
                     * 判断参数 AssessmentRisk 是否已赋值
                     * @return AssessmentRisk 是否已赋值
                     * 
                     */
                    bool AssessmentRiskHasBeenSet() const;

                private:

                    /**
                     * 风险面
                     */
                    Note m_assessmentRiskSide;
                    bool m_assessmentRiskSideHasBeenSet;

                    /**
                     * 风险类型
                     */
                    std::vector<Note> m_assessmentRisk;
                    bool m_assessmentRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_RISKSIDEDISTRIBUTED_H_
