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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_MEDDOC_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_MEDDOC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Advice.h>
#include <tencentcloud/mrs/v20200910/model/DiagCertItem.h>
#include <tencentcloud/mrs/v20200910/model/DiseaseMedicalHistory.h>
#include <tencentcloud/mrs/v20200910/model/PersonalMedicalHistory.h>
#include <tencentcloud/mrs/v20200910/model/ObstericalMedicalHistory.h>
#include <tencentcloud/mrs/v20200910/model/FamilyMedicalHistory.h>
#include <tencentcloud/mrs/v20200910/model/MenstrualMedicalHistory.h>
#include <tencentcloud/mrs/v20200910/model/TreatmentRecord.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 医学资料
                */
                class MedDoc : public AbstractModel
                {
                public:
                    MedDoc();
                    ~MedDoc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取建议
                     * @return Advice 建议
                     * 
                     */
                    Advice GetAdvice() const;

                    /**
                     * 设置建议
                     * @param _advice 建议
                     * 
                     */
                    void SetAdvice(const Advice& _advice);

                    /**
                     * 判断参数 Advice 是否已赋值
                     * @return Advice 是否已赋值
                     * 
                     */
                    bool AdviceHasBeenSet() const;

                    /**
                     * 获取诊断结果
                     * @return Diagnosis 诊断结果
                     * 
                     */
                    std::vector<DiagCertItem> GetDiagnosis() const;

                    /**
                     * 设置诊断结果
                     * @param _diagnosis 诊断结果
                     * 
                     */
                    void SetDiagnosis(const std::vector<DiagCertItem>& _diagnosis);

                    /**
                     * 判断参数 Diagnosis 是否已赋值
                     * @return Diagnosis 是否已赋值
                     * 
                     */
                    bool DiagnosisHasBeenSet() const;

                    /**
                     * 获取疾病史
                     * @return DiseaseMedicalHistory 疾病史
                     * 
                     */
                    DiseaseMedicalHistory GetDiseaseMedicalHistory() const;

                    /**
                     * 设置疾病史
                     * @param _diseaseMedicalHistory 疾病史
                     * 
                     */
                    void SetDiseaseMedicalHistory(const DiseaseMedicalHistory& _diseaseMedicalHistory);

                    /**
                     * 判断参数 DiseaseMedicalHistory 是否已赋值
                     * @return DiseaseMedicalHistory 是否已赋值
                     * 
                     */
                    bool DiseaseMedicalHistoryHasBeenSet() const;

                    /**
                     * 获取个人史
                     * @return PersonalMedicalHistory 个人史
                     * 
                     */
                    PersonalMedicalHistory GetPersonalMedicalHistory() const;

                    /**
                     * 设置个人史
                     * @param _personalMedicalHistory 个人史
                     * 
                     */
                    void SetPersonalMedicalHistory(const PersonalMedicalHistory& _personalMedicalHistory);

                    /**
                     * 判断参数 PersonalMedicalHistory 是否已赋值
                     * @return PersonalMedicalHistory 是否已赋值
                     * 
                     */
                    bool PersonalMedicalHistoryHasBeenSet() const;

                    /**
                     * 获取婚孕史
                     * @return ObstericalMedicalHistory 婚孕史
                     * 
                     */
                    ObstericalMedicalHistory GetObstericalMedicalHistory() const;

                    /**
                     * 设置婚孕史
                     * @param _obstericalMedicalHistory 婚孕史
                     * 
                     */
                    void SetObstericalMedicalHistory(const ObstericalMedicalHistory& _obstericalMedicalHistory);

                    /**
                     * 判断参数 ObstericalMedicalHistory 是否已赋值
                     * @return ObstericalMedicalHistory 是否已赋值
                     * 
                     */
                    bool ObstericalMedicalHistoryHasBeenSet() const;

                    /**
                     * 获取家族史
                     * @return FamilyMedicalHistory 家族史
                     * 
                     */
                    FamilyMedicalHistory GetFamilyMedicalHistory() const;

                    /**
                     * 设置家族史
                     * @param _familyMedicalHistory 家族史
                     * 
                     */
                    void SetFamilyMedicalHistory(const FamilyMedicalHistory& _familyMedicalHistory);

                    /**
                     * 判断参数 FamilyMedicalHistory 是否已赋值
                     * @return FamilyMedicalHistory 是否已赋值
                     * 
                     */
                    bool FamilyMedicalHistoryHasBeenSet() const;

                    /**
                     * 获取月经史
                     * @return MenstrualMedicalHistory 月经史
                     * 
                     */
                    MenstrualMedicalHistory GetMenstrualMedicalHistory() const;

                    /**
                     * 设置月经史
                     * @param _menstrualMedicalHistory 月经史
                     * 
                     */
                    void SetMenstrualMedicalHistory(const MenstrualMedicalHistory& _menstrualMedicalHistory);

                    /**
                     * 判断参数 MenstrualMedicalHistory 是否已赋值
                     * @return MenstrualMedicalHistory 是否已赋值
                     * 
                     */
                    bool MenstrualMedicalHistoryHasBeenSet() const;

                    /**
                     * 获取诊疗记录
                     * @return TreatmentRecord 诊疗记录
                     * 
                     */
                    TreatmentRecord GetTreatmentRecord() const;

                    /**
                     * 设置诊疗记录
                     * @param _treatmentRecord 诊疗记录
                     * 
                     */
                    void SetTreatmentRecord(const TreatmentRecord& _treatmentRecord);

                    /**
                     * 判断参数 TreatmentRecord 是否已赋值
                     * @return TreatmentRecord 是否已赋值
                     * 
                     */
                    bool TreatmentRecordHasBeenSet() const;

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
                     * 建议
                     */
                    Advice m_advice;
                    bool m_adviceHasBeenSet;

                    /**
                     * 诊断结果
                     */
                    std::vector<DiagCertItem> m_diagnosis;
                    bool m_diagnosisHasBeenSet;

                    /**
                     * 疾病史
                     */
                    DiseaseMedicalHistory m_diseaseMedicalHistory;
                    bool m_diseaseMedicalHistoryHasBeenSet;

                    /**
                     * 个人史
                     */
                    PersonalMedicalHistory m_personalMedicalHistory;
                    bool m_personalMedicalHistoryHasBeenSet;

                    /**
                     * 婚孕史
                     */
                    ObstericalMedicalHistory m_obstericalMedicalHistory;
                    bool m_obstericalMedicalHistoryHasBeenSet;

                    /**
                     * 家族史
                     */
                    FamilyMedicalHistory m_familyMedicalHistory;
                    bool m_familyMedicalHistoryHasBeenSet;

                    /**
                     * 月经史
                     */
                    MenstrualMedicalHistory m_menstrualMedicalHistory;
                    bool m_menstrualMedicalHistoryHasBeenSet;

                    /**
                     * 诊疗记录
                     */
                    TreatmentRecord m_treatmentRecord;
                    bool m_treatmentRecordHasBeenSet;

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

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_MEDDOC_H_
