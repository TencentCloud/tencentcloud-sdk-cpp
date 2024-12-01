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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_MEDICALRECORDINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_MEDICALRECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 门诊病历信息
                */
                class MedicalRecordInfo : public AbstractModel
                {
                public:
                    MedicalRecordInfo();
                    ~MedicalRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取就诊日期
                     * @return DiagnosisTime 就诊日期
                     * 
                     */
                    std::string GetDiagnosisTime() const;

                    /**
                     * 设置就诊日期
                     * @param _diagnosisTime 就诊日期
                     * 
                     */
                    void SetDiagnosisTime(const std::string& _diagnosisTime);

                    /**
                     * 判断参数 DiagnosisTime 是否已赋值
                     * @return DiagnosisTime 是否已赋值
                     * 
                     */
                    bool DiagnosisTimeHasBeenSet() const;

                    /**
                     * 获取就诊科室
                     * @return DiagnosisDepartmentName 就诊科室
                     * 
                     */
                    std::string GetDiagnosisDepartmentName() const;

                    /**
                     * 设置就诊科室
                     * @param _diagnosisDepartmentName 就诊科室
                     * 
                     */
                    void SetDiagnosisDepartmentName(const std::string& _diagnosisDepartmentName);

                    /**
                     * 判断参数 DiagnosisDepartmentName 是否已赋值
                     * @return DiagnosisDepartmentName 是否已赋值
                     * 
                     */
                    bool DiagnosisDepartmentNameHasBeenSet() const;

                    /**
                     * 获取就诊医生
                     * @return DiagnosisDoctorName 就诊医生
                     * 
                     */
                    std::string GetDiagnosisDoctorName() const;

                    /**
                     * 设置就诊医生
                     * @param _diagnosisDoctorName 就诊医生
                     * 
                     */
                    void SetDiagnosisDoctorName(const std::string& _diagnosisDoctorName);

                    /**
                     * 判断参数 DiagnosisDoctorName 是否已赋值
                     * @return DiagnosisDoctorName 是否已赋值
                     * 
                     */
                    bool DiagnosisDoctorNameHasBeenSet() const;

                    /**
                     * 获取临床诊断
                     * @return ClinicalDiagnosis 临床诊断
                     * 
                     */
                    std::string GetClinicalDiagnosis() const;

                    /**
                     * 设置临床诊断
                     * @param _clinicalDiagnosis 临床诊断
                     * 
                     */
                    void SetClinicalDiagnosis(const std::string& _clinicalDiagnosis);

                    /**
                     * 判断参数 ClinicalDiagnosis 是否已赋值
                     * @return ClinicalDiagnosis 是否已赋值
                     * 
                     */
                    bool ClinicalDiagnosisHasBeenSet() const;

                    /**
                     * 获取主述
                     * @return MainNarration 主述
                     * 
                     */
                    std::string GetMainNarration() const;

                    /**
                     * 设置主述
                     * @param _mainNarration 主述
                     * 
                     */
                    void SetMainNarration(const std::string& _mainNarration);

                    /**
                     * 判断参数 MainNarration 是否已赋值
                     * @return MainNarration 是否已赋值
                     * 
                     */
                    bool MainNarrationHasBeenSet() const;

                    /**
                     * 获取体格检查
                     * @return PhysicalExamination 体格检查
                     * 
                     */
                    std::string GetPhysicalExamination() const;

                    /**
                     * 设置体格检查
                     * @param _physicalExamination 体格检查
                     * 
                     */
                    void SetPhysicalExamination(const std::string& _physicalExamination);

                    /**
                     * 判断参数 PhysicalExamination 是否已赋值
                     * @return PhysicalExamination 是否已赋值
                     * 
                     */
                    bool PhysicalExaminationHasBeenSet() const;

                    /**
                     * 获取检查结论
                     * @return InspectionFindings 检查结论
                     * 
                     */
                    std::string GetInspectionFindings() const;

                    /**
                     * 设置检查结论
                     * @param _inspectionFindings 检查结论
                     * 
                     */
                    void SetInspectionFindings(const std::string& _inspectionFindings);

                    /**
                     * 判断参数 InspectionFindings 是否已赋值
                     * @return InspectionFindings 是否已赋值
                     * 
                     */
                    bool InspectionFindingsHasBeenSet() const;

                    /**
                     * 获取治疗意见
                     * @return TreatmentOpinion 治疗意见
                     * 
                     */
                    std::string GetTreatmentOpinion() const;

                    /**
                     * 设置治疗意见
                     * @param _treatmentOpinion 治疗意见
                     * 
                     */
                    void SetTreatmentOpinion(const std::string& _treatmentOpinion);

                    /**
                     * 判断参数 TreatmentOpinion 是否已赋值
                     * @return TreatmentOpinion 是否已赋值
                     * 
                     */
                    bool TreatmentOpinionHasBeenSet() const;

                    /**
                     * 获取数据在原PDF文件中的第几页
                     * @return Page 数据在原PDF文件中的第几页
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置数据在原PDF文件中的第几页
                     * @param _page 数据在原PDF文件中的第几页
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * 就诊日期
                     */
                    std::string m_diagnosisTime;
                    bool m_diagnosisTimeHasBeenSet;

                    /**
                     * 就诊科室
                     */
                    std::string m_diagnosisDepartmentName;
                    bool m_diagnosisDepartmentNameHasBeenSet;

                    /**
                     * 就诊医生
                     */
                    std::string m_diagnosisDoctorName;
                    bool m_diagnosisDoctorNameHasBeenSet;

                    /**
                     * 临床诊断
                     */
                    std::string m_clinicalDiagnosis;
                    bool m_clinicalDiagnosisHasBeenSet;

                    /**
                     * 主述
                     */
                    std::string m_mainNarration;
                    bool m_mainNarrationHasBeenSet;

                    /**
                     * 体格检查
                     */
                    std::string m_physicalExamination;
                    bool m_physicalExaminationHasBeenSet;

                    /**
                     * 检查结论
                     */
                    std::string m_inspectionFindings;
                    bool m_inspectionFindingsHasBeenSet;

                    /**
                     * 治疗意见
                     */
                    std::string m_treatmentOpinion;
                    bool m_treatmentOpinionHasBeenSet;

                    /**
                     * 数据在原PDF文件中的第几页
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_MEDICALRECORDINFO_H_
