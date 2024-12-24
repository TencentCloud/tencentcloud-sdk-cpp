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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_TREATMENTGUIDE_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_TREATMENTGUIDE_H_

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
                * 治疗方案
                */
                class TreatmentGuide : public AbstractModel
                {
                public:
                    TreatmentGuide();
                    ~TreatmentGuide() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取医生诊断
                     * @return DoctorDiagnosis 医生诊断
                     * 
                     */
                    std::string GetDoctorDiagnosis() const;

                    /**
                     * 设置医生诊断
                     * @param _doctorDiagnosis 医生诊断
                     * 
                     */
                    void SetDoctorDiagnosis(const std::string& _doctorDiagnosis);

                    /**
                     * 判断参数 DoctorDiagnosis 是否已赋值
                     * @return DoctorDiagnosis 是否已赋值
                     * 
                     */
                    bool DoctorDiagnosisHasBeenSet() const;

                    /**
                     * 获取疾病名称
                     * @return DiseaseName 疾病名称
                     * 
                     */
                    std::string GetDiseaseName() const;

                    /**
                     * 设置疾病名称
                     * @param _diseaseName 疾病名称
                     * 
                     */
                    void SetDiseaseName(const std::string& _diseaseName);

                    /**
                     * 判断参数 DiseaseName 是否已赋值
                     * @return DiseaseName 是否已赋值
                     * 
                     */
                    bool DiseaseNameHasBeenSet() const;

                    /**
                     * 获取治疗详情链接
                     * @return TreatDetailUrl 治疗详情链接
                     * 
                     */
                    std::string GetTreatDetailUrl() const;

                    /**
                     * 设置治疗详情链接
                     * @param _treatDetailUrl 治疗详情链接
                     * 
                     */
                    void SetTreatDetailUrl(const std::string& _treatDetailUrl);

                    /**
                     * 判断参数 TreatDetailUrl 是否已赋值
                     * @return TreatDetailUrl 是否已赋值
                     * 
                     */
                    bool TreatDetailUrlHasBeenSet() const;

                    /**
                     * 获取治疗方案
                     * @return TreatPlan 治疗方案
                     * 
                     */
                    std::string GetTreatPlan() const;

                    /**
                     * 设置治疗方案
                     * @param _treatPlan 治疗方案
                     * 
                     */
                    void SetTreatPlan(const std::string& _treatPlan);

                    /**
                     * 判断参数 TreatPlan 是否已赋值
                     * @return TreatPlan 是否已赋值
                     * 
                     */
                    bool TreatPlanHasBeenSet() const;

                    /**
                     * 获取治疗原则
                     * @return TreatPrinciple 治疗原则
                     * 
                     */
                    std::string GetTreatPrinciple() const;

                    /**
                     * 设置治疗原则
                     * @param _treatPrinciple 治疗原则
                     * 
                     */
                    void SetTreatPrinciple(const std::string& _treatPrinciple);

                    /**
                     * 判断参数 TreatPrinciple 是否已赋值
                     * @return TreatPrinciple 是否已赋值
                     * 
                     */
                    bool TreatPrincipleHasBeenSet() const;

                private:

                    /**
                     * 医生诊断
                     */
                    std::string m_doctorDiagnosis;
                    bool m_doctorDiagnosisHasBeenSet;

                    /**
                     * 疾病名称
                     */
                    std::string m_diseaseName;
                    bool m_diseaseNameHasBeenSet;

                    /**
                     * 治疗详情链接
                     */
                    std::string m_treatDetailUrl;
                    bool m_treatDetailUrlHasBeenSet;

                    /**
                     * 治疗方案
                     */
                    std::string m_treatPlan;
                    bool m_treatPlanHasBeenSet;

                    /**
                     * 治疗原则
                     */
                    std::string m_treatPrinciple;
                    bool m_treatPrincipleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_TREATMENTGUIDE_H_
