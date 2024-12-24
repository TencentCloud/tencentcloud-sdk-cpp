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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_SUSPECTEDDIAGNOSIS_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_SUSPECTEDDIAGNOSIS_H_

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
                * 疑似诊断
                */
                class SuspectedDiagnosis : public AbstractModel
                {
                public:
                    SuspectedDiagnosis();
                    ~SuspectedDiagnosis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取ICD代码
                     * @return IcdCode ICD代码
                     * 
                     */
                    std::string GetIcdCode() const;

                    /**
                     * 设置ICD代码
                     * @param _icdCode ICD代码
                     * 
                     */
                    void SetIcdCode(const std::string& _icdCode);

                    /**
                     * 判断参数 IcdCode 是否已赋值
                     * @return IcdCode 是否已赋值
                     * 
                     */
                    bool IcdCodeHasBeenSet() const;

                    /**
                     * 获取症状
                     * @return Symptom 症状
                     * 
                     */
                    std::string GetSymptom() const;

                    /**
                     * 设置症状
                     * @param _symptom 症状
                     * 
                     */
                    void SetSymptom(const std::string& _symptom);

                    /**
                     * 判断参数 Symptom 是否已赋值
                     * @return Symptom 是否已赋值
                     * 
                     */
                    bool SymptomHasBeenSet() const;

                    /**
                     * 获取体征
                     * @return Physi 体征
                     * 
                     */
                    std::string GetPhysi() const;

                    /**
                     * 设置体征
                     * @param _physi 体征
                     * 
                     */
                    void SetPhysi(const std::string& _physi);

                    /**
                     * 判断参数 Physi 是否已赋值
                     * @return Physi 是否已赋值
                     * 
                     */
                    bool PhysiHasBeenSet() const;

                    /**
                     * 获取检查
                     * @return Inspection 检查
                     * 
                     */
                    std::string GetInspection() const;

                    /**
                     * 设置检查
                     * @param _inspection 检查
                     * 
                     */
                    void SetInspection(const std::string& _inspection);

                    /**
                     * 判断参数 Inspection 是否已赋值
                     * @return Inspection 是否已赋值
                     * 
                     */
                    bool InspectionHasBeenSet() const;

                    /**
                     * 获取疾病指南信息
                     * @return DiseaseGuideInfo 疾病指南信息
                     * 
                     */
                    std::string GetDiseaseGuideInfo() const;

                    /**
                     * 设置疾病指南信息
                     * @param _diseaseGuideInfo 疾病指南信息
                     * 
                     */
                    void SetDiseaseGuideInfo(const std::string& _diseaseGuideInfo);

                    /**
                     * 判断参数 DiseaseGuideInfo 是否已赋值
                     * @return DiseaseGuideInfo 是否已赋值
                     * 
                     */
                    bool DiseaseGuideInfoHasBeenSet() const;

                    /**
                     * 获取置信度
                     * @return Probability 置信度
                     * 
                     */
                    double GetProbability() const;

                    /**
                     * 设置置信度
                     * @param _probability 置信度
                     * 
                     */
                    void SetProbability(const double& _probability);

                    /**
                     * 判断参数 Probability 是否已赋值
                     * @return Probability 是否已赋值
                     * 
                     */
                    bool ProbabilityHasBeenSet() const;

                private:

                    /**
                     * 疾病名称
                     */
                    std::string m_diseaseName;
                    bool m_diseaseNameHasBeenSet;

                    /**
                     * ICD代码
                     */
                    std::string m_icdCode;
                    bool m_icdCodeHasBeenSet;

                    /**
                     * 症状
                     */
                    std::string m_symptom;
                    bool m_symptomHasBeenSet;

                    /**
                     * 体征
                     */
                    std::string m_physi;
                    bool m_physiHasBeenSet;

                    /**
                     * 检查
                     */
                    std::string m_inspection;
                    bool m_inspectionHasBeenSet;

                    /**
                     * 疾病指南信息
                     */
                    std::string m_diseaseGuideInfo;
                    bool m_diseaseGuideInfoHasBeenSet;

                    /**
                     * 置信度
                     */
                    double m_probability;
                    bool m_probabilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_SUSPECTEDDIAGNOSIS_H_
