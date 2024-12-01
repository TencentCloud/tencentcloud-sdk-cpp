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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PARAGRAPHBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PARAGRAPHBLOCK_H_

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
                * 文本块
                */
                class ParagraphBlock : public AbstractModel
                {
                public:
                    ParagraphBlock();
                    ~ParagraphBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取切口愈合情况
                     * @return IncisionHealingText 切口愈合情况
                     * 
                     */
                    std::string GetIncisionHealingText() const;

                    /**
                     * 设置切口愈合情况
                     * @param _incisionHealingText 切口愈合情况
                     * 
                     */
                    void SetIncisionHealingText(const std::string& _incisionHealingText);

                    /**
                     * 判断参数 IncisionHealingText 是否已赋值
                     * @return IncisionHealingText 是否已赋值
                     * 
                     */
                    bool IncisionHealingTextHasBeenSet() const;

                    /**
                     * 获取辅助检查
                     * @return AuxiliaryExaminationText 辅助检查
                     * 
                     */
                    std::string GetAuxiliaryExaminationText() const;

                    /**
                     * 设置辅助检查
                     * @param _auxiliaryExaminationText 辅助检查
                     * 
                     */
                    void SetAuxiliaryExaminationText(const std::string& _auxiliaryExaminationText);

                    /**
                     * 判断参数 AuxiliaryExaminationText 是否已赋值
                     * @return AuxiliaryExaminationText 是否已赋值
                     * 
                     */
                    bool AuxiliaryExaminationTextHasBeenSet() const;

                    /**
                     * 获取特殊检查
                     * @return SpecialExamText 特殊检查
                     * 
                     */
                    std::string GetSpecialExamText() const;

                    /**
                     * 设置特殊检查
                     * @param _specialExamText 特殊检查
                     * 
                     */
                    void SetSpecialExamText(const std::string& _specialExamText);

                    /**
                     * 判断参数 SpecialExamText 是否已赋值
                     * @return SpecialExamText 是否已赋值
                     * 
                     */
                    bool SpecialExamTextHasBeenSet() const;

                    /**
                     * 获取门诊诊断
                     * @return OutpatientDiagnosisText 门诊诊断
                     * 
                     */
                    std::string GetOutpatientDiagnosisText() const;

                    /**
                     * 设置门诊诊断
                     * @param _outpatientDiagnosisText 门诊诊断
                     * 
                     */
                    void SetOutpatientDiagnosisText(const std::string& _outpatientDiagnosisText);

                    /**
                     * 判断参数 OutpatientDiagnosisText 是否已赋值
                     * @return OutpatientDiagnosisText 是否已赋值
                     * 
                     */
                    bool OutpatientDiagnosisTextHasBeenSet() const;

                    /**
                     * 获取入院情况
                     * @return AdmissionConditionText 入院情况
                     * 
                     */
                    std::string GetAdmissionConditionText() const;

                    /**
                     * 设置入院情况
                     * @param _admissionConditionText 入院情况
                     * 
                     */
                    void SetAdmissionConditionText(const std::string& _admissionConditionText);

                    /**
                     * 判断参数 AdmissionConditionText 是否已赋值
                     * @return AdmissionConditionText 是否已赋值
                     * 
                     */
                    bool AdmissionConditionTextHasBeenSet() const;

                    /**
                     * 获取诊疗经过
                     * @return CheckAndTreatmentProcessText 诊疗经过
                     * 
                     */
                    std::string GetCheckAndTreatmentProcessText() const;

                    /**
                     * 设置诊疗经过
                     * @param _checkAndTreatmentProcessText 诊疗经过
                     * 
                     */
                    void SetCheckAndTreatmentProcessText(const std::string& _checkAndTreatmentProcessText);

                    /**
                     * 判断参数 CheckAndTreatmentProcessText 是否已赋值
                     * @return CheckAndTreatmentProcessText 是否已赋值
                     * 
                     */
                    bool CheckAndTreatmentProcessTextHasBeenSet() const;

                    /**
                     * 获取体征
                     * @return SymptomsAndSignsText 体征
                     * 
                     */
                    std::string GetSymptomsAndSignsText() const;

                    /**
                     * 设置体征
                     * @param _symptomsAndSignsText 体征
                     * 
                     */
                    void SetSymptomsAndSignsText(const std::string& _symptomsAndSignsText);

                    /**
                     * 判断参数 SymptomsAndSignsText 是否已赋值
                     * @return SymptomsAndSignsText 是否已赋值
                     * 
                     */
                    bool SymptomsAndSignsTextHasBeenSet() const;

                    /**
                     * 获取出院医嘱
                     * @return DischargeInstructionsText 出院医嘱
                     * 
                     */
                    std::string GetDischargeInstructionsText() const;

                    /**
                     * 设置出院医嘱
                     * @param _dischargeInstructionsText 出院医嘱
                     * 
                     */
                    void SetDischargeInstructionsText(const std::string& _dischargeInstructionsText);

                    /**
                     * 判断参数 DischargeInstructionsText 是否已赋值
                     * @return DischargeInstructionsText 是否已赋值
                     * 
                     */
                    bool DischargeInstructionsTextHasBeenSet() const;

                    /**
                     * 获取入院诊断
                     * @return AdmissionDiagnosisText 入院诊断
                     * 
                     */
                    std::string GetAdmissionDiagnosisText() const;

                    /**
                     * 设置入院诊断
                     * @param _admissionDiagnosisText 入院诊断
                     * 
                     */
                    void SetAdmissionDiagnosisText(const std::string& _admissionDiagnosisText);

                    /**
                     * 判断参数 AdmissionDiagnosisText 是否已赋值
                     * @return AdmissionDiagnosisText 是否已赋值
                     * 
                     */
                    bool AdmissionDiagnosisTextHasBeenSet() const;

                    /**
                     * 获取手术情况
                     * @return SurgeryConditionText 手术情况
                     * 
                     */
                    std::string GetSurgeryConditionText() const;

                    /**
                     * 设置手术情况
                     * @param _surgeryConditionText 手术情况
                     * 
                     */
                    void SetSurgeryConditionText(const std::string& _surgeryConditionText);

                    /**
                     * 判断参数 SurgeryConditionText 是否已赋值
                     * @return SurgeryConditionText 是否已赋值
                     * 
                     */
                    bool SurgeryConditionTextHasBeenSet() const;

                    /**
                     * 获取病理诊断
                     * @return PathologicalDiagnosisText 病理诊断
                     * 
                     */
                    std::string GetPathologicalDiagnosisText() const;

                    /**
                     * 设置病理诊断
                     * @param _pathologicalDiagnosisText 病理诊断
                     * 
                     */
                    void SetPathologicalDiagnosisText(const std::string& _pathologicalDiagnosisText);

                    /**
                     * 判断参数 PathologicalDiagnosisText 是否已赋值
                     * @return PathologicalDiagnosisText 是否已赋值
                     * 
                     */
                    bool PathologicalDiagnosisTextHasBeenSet() const;

                    /**
                     * 获取出院情况
                     * @return DischargeConditionText 出院情况
                     * 
                     */
                    std::string GetDischargeConditionText() const;

                    /**
                     * 设置出院情况
                     * @param _dischargeConditionText 出院情况
                     * 
                     */
                    void SetDischargeConditionText(const std::string& _dischargeConditionText);

                    /**
                     * 判断参数 DischargeConditionText 是否已赋值
                     * @return DischargeConditionText 是否已赋值
                     * 
                     */
                    bool DischargeConditionTextHasBeenSet() const;

                    /**
                     * 获取检查记录

                     * @return CheckRecordText 检查记录

                     * 
                     */
                    std::string GetCheckRecordText() const;

                    /**
                     * 设置检查记录

                     * @param _checkRecordText 检查记录

                     * 
                     */
                    void SetCheckRecordText(const std::string& _checkRecordText);

                    /**
                     * 判断参数 CheckRecordText 是否已赋值
                     * @return CheckRecordText 是否已赋值
                     * 
                     */
                    bool CheckRecordTextHasBeenSet() const;

                    /**
                     * 获取主诉
                     * @return ChiefComplaintText 主诉
                     * 
                     */
                    std::string GetChiefComplaintText() const;

                    /**
                     * 设置主诉
                     * @param _chiefComplaintText 主诉
                     * 
                     */
                    void SetChiefComplaintText(const std::string& _chiefComplaintText);

                    /**
                     * 判断参数 ChiefComplaintText 是否已赋值
                     * @return ChiefComplaintText 是否已赋值
                     * 
                     */
                    bool ChiefComplaintTextHasBeenSet() const;

                    /**
                     * 获取出院诊断
                     * @return DischargeDiagnosisText 出院诊断
                     * 
                     */
                    std::string GetDischargeDiagnosisText() const;

                    /**
                     * 设置出院诊断
                     * @param _dischargeDiagnosisText 出院诊断
                     * 
                     */
                    void SetDischargeDiagnosisText(const std::string& _dischargeDiagnosisText);

                    /**
                     * 判断参数 DischargeDiagnosisText 是否已赋值
                     * @return DischargeDiagnosisText 是否已赋值
                     * 
                     */
                    bool DischargeDiagnosisTextHasBeenSet() const;

                    /**
                     * 获取既往史
                     * @return MainDiseaseHistoryText 既往史
                     * 
                     */
                    std::string GetMainDiseaseHistoryText() const;

                    /**
                     * 设置既往史
                     * @param _mainDiseaseHistoryText 既往史
                     * 
                     */
                    void SetMainDiseaseHistoryText(const std::string& _mainDiseaseHistoryText);

                    /**
                     * 判断参数 MainDiseaseHistoryText 是否已赋值
                     * @return MainDiseaseHistoryText 是否已赋值
                     * 
                     */
                    bool MainDiseaseHistoryTextHasBeenSet() const;

                    /**
                     * 获取现病史
                     * @return DiseasePresentText 现病史
                     * 
                     */
                    std::string GetDiseasePresentText() const;

                    /**
                     * 设置现病史
                     * @param _diseasePresentText 现病史
                     * 
                     */
                    void SetDiseasePresentText(const std::string& _diseasePresentText);

                    /**
                     * 判断参数 DiseasePresentText 是否已赋值
                     * @return DiseasePresentText 是否已赋值
                     * 
                     */
                    bool DiseasePresentTextHasBeenSet() const;

                    /**
                     * 获取个人史
                     * @return PersonalHistoryText 个人史
                     * 
                     */
                    std::string GetPersonalHistoryText() const;

                    /**
                     * 设置个人史
                     * @param _personalHistoryText 个人史
                     * 
                     */
                    void SetPersonalHistoryText(const std::string& _personalHistoryText);

                    /**
                     * 判断参数 PersonalHistoryText 是否已赋值
                     * @return PersonalHistoryText 是否已赋值
                     * 
                     */
                    bool PersonalHistoryTextHasBeenSet() const;

                    /**
                     * 获取月经史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MenstruallHistoryText 月经史
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetMenstruallHistoryText() const;

                    /**
                     * 设置月经史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _menstruallHistoryText 月经史
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetMenstruallHistoryText(const std::string& _menstruallHistoryText);

                    /**
                     * 判断参数 MenstruallHistoryText 是否已赋值
                     * @return MenstruallHistoryText 是否已赋值
                     * @deprecated
                     */
                    bool MenstruallHistoryTextHasBeenSet() const;

                    /**
                     * 获取婚育史
                     * @return ObstericalHistoryText 婚育史
                     * 
                     */
                    std::string GetObstericalHistoryText() const;

                    /**
                     * 设置婚育史
                     * @param _obstericalHistoryText 婚育史
                     * 
                     */
                    void SetObstericalHistoryText(const std::string& _obstericalHistoryText);

                    /**
                     * 判断参数 ObstericalHistoryText 是否已赋值
                     * @return ObstericalHistoryText 是否已赋值
                     * 
                     */
                    bool ObstericalHistoryTextHasBeenSet() const;

                    /**
                     * 获取家族史
                     * @return FamilyHistoryText 家族史
                     * 
                     */
                    std::string GetFamilyHistoryText() const;

                    /**
                     * 设置家族史
                     * @param _familyHistoryText 家族史
                     * 
                     */
                    void SetFamilyHistoryText(const std::string& _familyHistoryText);

                    /**
                     * 判断参数 FamilyHistoryText 是否已赋值
                     * @return FamilyHistoryText 是否已赋值
                     * 
                     */
                    bool FamilyHistoryTextHasBeenSet() const;

                    /**
                     * 获取过敏史
                     * @return AllergyHistoryText 过敏史
                     * 
                     */
                    std::string GetAllergyHistoryText() const;

                    /**
                     * 设置过敏史
                     * @param _allergyHistoryText 过敏史
                     * 
                     */
                    void SetAllergyHistoryText(const std::string& _allergyHistoryText);

                    /**
                     * 判断参数 AllergyHistoryText 是否已赋值
                     * @return AllergyHistoryText 是否已赋值
                     * 
                     */
                    bool AllergyHistoryTextHasBeenSet() const;

                    /**
                     * 获取病史信息
                     * @return DiseaseHistoryText 病史信息
                     * 
                     */
                    std::string GetDiseaseHistoryText() const;

                    /**
                     * 设置病史信息
                     * @param _diseaseHistoryText 病史信息
                     * 
                     */
                    void SetDiseaseHistoryText(const std::string& _diseaseHistoryText);

                    /**
                     * 判断参数 DiseaseHistoryText 是否已赋值
                     * @return DiseaseHistoryText 是否已赋值
                     * 
                     */
                    bool DiseaseHistoryTextHasBeenSet() const;

                    /**
                     * 获取其它诊断
                     * @return OtherDiagnosisText 其它诊断
                     * 
                     */
                    std::string GetOtherDiagnosisText() const;

                    /**
                     * 设置其它诊断
                     * @param _otherDiagnosisText 其它诊断
                     * 
                     */
                    void SetOtherDiagnosisText(const std::string& _otherDiagnosisText);

                    /**
                     * 判断参数 OtherDiagnosisText 是否已赋值
                     * @return OtherDiagnosisText 是否已赋值
                     * 
                     */
                    bool OtherDiagnosisTextHasBeenSet() const;

                    /**
                     * 获取体格检查
                     * @return BodyExaminationText 体格检查
                     * 
                     */
                    std::string GetBodyExaminationText() const;

                    /**
                     * 设置体格检查
                     * @param _bodyExaminationText 体格检查
                     * 
                     */
                    void SetBodyExaminationText(const std::string& _bodyExaminationText);

                    /**
                     * 判断参数 BodyExaminationText 是否已赋值
                     * @return BodyExaminationText 是否已赋值
                     * 
                     */
                    bool BodyExaminationTextHasBeenSet() const;

                    /**
                     * 获取专科检查
                     * @return SpecialistExaminationText 专科检查
                     * 
                     */
                    std::string GetSpecialistExaminationText() const;

                    /**
                     * 设置专科检查
                     * @param _specialistExaminationText 专科检查
                     * 
                     */
                    void SetSpecialistExaminationText(const std::string& _specialistExaminationText);

                    /**
                     * 判断参数 SpecialistExaminationText 是否已赋值
                     * @return SpecialistExaminationText 是否已赋值
                     * 
                     */
                    bool SpecialistExaminationTextHasBeenSet() const;

                    /**
                     * 获取治疗结果
                     * @return TreatmentResultText 治疗结果
                     * 
                     */
                    std::string GetTreatmentResultText() const;

                    /**
                     * 设置治疗结果
                     * @param _treatmentResultText 治疗结果
                     * 
                     */
                    void SetTreatmentResultText(const std::string& _treatmentResultText);

                    /**
                     * 判断参数 TreatmentResultText 是否已赋值
                     * @return TreatmentResultText 是否已赋值
                     * 
                     */
                    bool TreatmentResultTextHasBeenSet() const;

                    /**
                     * 获取月经史
                     * @return MenstrualHistoryText 月经史
                     * 
                     */
                    std::string GetMenstrualHistoryText() const;

                    /**
                     * 设置月经史
                     * @param _menstrualHistoryText 月经史
                     * 
                     */
                    void SetMenstrualHistoryText(const std::string& _menstrualHistoryText);

                    /**
                     * 判断参数 MenstrualHistoryText 是否已赋值
                     * @return MenstrualHistoryText 是否已赋值
                     * 
                     */
                    bool MenstrualHistoryTextHasBeenSet() const;

                private:

                    /**
                     * 切口愈合情况
                     */
                    std::string m_incisionHealingText;
                    bool m_incisionHealingTextHasBeenSet;

                    /**
                     * 辅助检查
                     */
                    std::string m_auxiliaryExaminationText;
                    bool m_auxiliaryExaminationTextHasBeenSet;

                    /**
                     * 特殊检查
                     */
                    std::string m_specialExamText;
                    bool m_specialExamTextHasBeenSet;

                    /**
                     * 门诊诊断
                     */
                    std::string m_outpatientDiagnosisText;
                    bool m_outpatientDiagnosisTextHasBeenSet;

                    /**
                     * 入院情况
                     */
                    std::string m_admissionConditionText;
                    bool m_admissionConditionTextHasBeenSet;

                    /**
                     * 诊疗经过
                     */
                    std::string m_checkAndTreatmentProcessText;
                    bool m_checkAndTreatmentProcessTextHasBeenSet;

                    /**
                     * 体征
                     */
                    std::string m_symptomsAndSignsText;
                    bool m_symptomsAndSignsTextHasBeenSet;

                    /**
                     * 出院医嘱
                     */
                    std::string m_dischargeInstructionsText;
                    bool m_dischargeInstructionsTextHasBeenSet;

                    /**
                     * 入院诊断
                     */
                    std::string m_admissionDiagnosisText;
                    bool m_admissionDiagnosisTextHasBeenSet;

                    /**
                     * 手术情况
                     */
                    std::string m_surgeryConditionText;
                    bool m_surgeryConditionTextHasBeenSet;

                    /**
                     * 病理诊断
                     */
                    std::string m_pathologicalDiagnosisText;
                    bool m_pathologicalDiagnosisTextHasBeenSet;

                    /**
                     * 出院情况
                     */
                    std::string m_dischargeConditionText;
                    bool m_dischargeConditionTextHasBeenSet;

                    /**
                     * 检查记录

                     */
                    std::string m_checkRecordText;
                    bool m_checkRecordTextHasBeenSet;

                    /**
                     * 主诉
                     */
                    std::string m_chiefComplaintText;
                    bool m_chiefComplaintTextHasBeenSet;

                    /**
                     * 出院诊断
                     */
                    std::string m_dischargeDiagnosisText;
                    bool m_dischargeDiagnosisTextHasBeenSet;

                    /**
                     * 既往史
                     */
                    std::string m_mainDiseaseHistoryText;
                    bool m_mainDiseaseHistoryTextHasBeenSet;

                    /**
                     * 现病史
                     */
                    std::string m_diseasePresentText;
                    bool m_diseasePresentTextHasBeenSet;

                    /**
                     * 个人史
                     */
                    std::string m_personalHistoryText;
                    bool m_personalHistoryTextHasBeenSet;

                    /**
                     * 月经史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_menstruallHistoryText;
                    bool m_menstruallHistoryTextHasBeenSet;

                    /**
                     * 婚育史
                     */
                    std::string m_obstericalHistoryText;
                    bool m_obstericalHistoryTextHasBeenSet;

                    /**
                     * 家族史
                     */
                    std::string m_familyHistoryText;
                    bool m_familyHistoryTextHasBeenSet;

                    /**
                     * 过敏史
                     */
                    std::string m_allergyHistoryText;
                    bool m_allergyHistoryTextHasBeenSet;

                    /**
                     * 病史信息
                     */
                    std::string m_diseaseHistoryText;
                    bool m_diseaseHistoryTextHasBeenSet;

                    /**
                     * 其它诊断
                     */
                    std::string m_otherDiagnosisText;
                    bool m_otherDiagnosisTextHasBeenSet;

                    /**
                     * 体格检查
                     */
                    std::string m_bodyExaminationText;
                    bool m_bodyExaminationTextHasBeenSet;

                    /**
                     * 专科检查
                     */
                    std::string m_specialistExaminationText;
                    bool m_specialistExaminationTextHasBeenSet;

                    /**
                     * 治疗结果
                     */
                    std::string m_treatmentResultText;
                    bool m_treatmentResultTextHasBeenSet;

                    /**
                     * 月经史
                     */
                    std::string m_menstrualHistoryText;
                    bool m_menstrualHistoryTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PARAGRAPHBLOCK_H_
