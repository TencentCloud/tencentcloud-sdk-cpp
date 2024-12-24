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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_PATIENTHISTORY_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_PATIENTHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 患者过往病史
                */
                class PatientHistory : public AbstractModel
                {
                public:
                    PatientHistory();
                    ~PatientHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取病史
                     * @return DiseaseHistory 病史
                     * 
                     */
                    std::string GetDiseaseHistory() const;

                    /**
                     * 设置病史
                     * @param _diseaseHistory 病史
                     * 
                     */
                    void SetDiseaseHistory(const std::string& _diseaseHistory);

                    /**
                     * 判断参数 DiseaseHistory 是否已赋值
                     * @return DiseaseHistory 是否已赋值
                     * 
                     */
                    bool DiseaseHistoryHasBeenSet() const;

                    /**
                     * 获取治疗史
                     * @return TreatmentHistory 治疗史
                     * 
                     */
                    std::string GetTreatmentHistory() const;

                    /**
                     * 设置治疗史
                     * @param _treatmentHistory 治疗史
                     * 
                     */
                    void SetTreatmentHistory(const std::string& _treatmentHistory);

                    /**
                     * 判断参数 TreatmentHistory 是否已赋值
                     * @return TreatmentHistory 是否已赋值
                     * 
                     */
                    bool TreatmentHistoryHasBeenSet() const;

                private:

                    /**
                     * 病史
                     */
                    std::string m_diseaseHistory;
                    bool m_diseaseHistoryHasBeenSet;

                    /**
                     * 治疗史
                     */
                    std::string m_treatmentHistory;
                    bool m_treatmentHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_PATIENTHISTORY_H_
