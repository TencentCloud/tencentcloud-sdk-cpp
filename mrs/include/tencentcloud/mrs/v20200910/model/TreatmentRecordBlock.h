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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_TREATMENTRECORDBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_TREATMENTRECORDBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/ImmunohistochemistryBlock.h>
#include <tencentcloud/mrs/v20200910/model/ChiefComplaintBlock.h>
#include <tencentcloud/mrs/v20200910/model/AdmissionConditionBlock.h>
#include <tencentcloud/mrs/v20200910/model/BodyExaminationBlock.h>
#include <tencentcloud/mrs/v20200910/model/AdmissionDiagnosisBlock.h>
#include <tencentcloud/mrs/v20200910/model/PathologicalDiagnosisBlock.h>
#include <tencentcloud/mrs/v20200910/model/DiseasePresentBlock.h>
#include <tencentcloud/mrs/v20200910/model/SurgeryConditionBlock.h>
#include <tencentcloud/mrs/v20200910/model/DischargeDiagnosisBlock.h>
#include <tencentcloud/mrs/v20200910/model/DischargeConditionBlock.h>
#include <tencentcloud/mrs/v20200910/model/PTNMBlock.h>
#include <tencentcloud/mrs/v20200910/model/ClinicalStaging.h>
#include <tencentcloud/mrs/v20200910/model/DeathDateBlock.h>
#include <tencentcloud/mrs/v20200910/model/RelapseDateBlock.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 治疗记录
                */
                class TreatmentRecordBlock : public AbstractModel
                {
                public:
                    TreatmentRecordBlock();
                    ~TreatmentRecordBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取免疫组化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Immunohistochemistry 免疫组化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImmunohistochemistryBlock GetImmunohistochemistry() const;

                    /**
                     * 设置免疫组化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Immunohistochemistry 免疫组化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetImmunohistochemistry(const ImmunohistochemistryBlock& _immunohistochemistry);

                    /**
                     * 判断参数 Immunohistochemistry 是否已赋值
                     * @return Immunohistochemistry 是否已赋值
                     */
                    bool ImmunohistochemistryHasBeenSet() const;

                    /**
                     * 获取主诉
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChiefComplaint 主诉
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ChiefComplaintBlock GetChiefComplaint() const;

                    /**
                     * 设置主诉
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChiefComplaint 主诉
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChiefComplaint(const ChiefComplaintBlock& _chiefComplaint);

                    /**
                     * 判断参数 ChiefComplaint 是否已赋值
                     * @return ChiefComplaint 是否已赋值
                     */
                    bool ChiefComplaintHasBeenSet() const;

                    /**
                     * 获取入院情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdmissionCondition 入院情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdmissionConditionBlock GetAdmissionCondition() const;

                    /**
                     * 设置入院情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AdmissionCondition 入院情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAdmissionCondition(const AdmissionConditionBlock& _admissionCondition);

                    /**
                     * 判断参数 AdmissionCondition 是否已赋值
                     * @return AdmissionCondition 是否已赋值
                     */
                    bool AdmissionConditionHasBeenSet() const;

                    /**
                     * 获取查体
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BodyExamination 查体
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BodyExaminationBlock GetBodyExamination() const;

                    /**
                     * 设置查体
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BodyExamination 查体
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBodyExamination(const BodyExaminationBlock& _bodyExamination);

                    /**
                     * 判断参数 BodyExamination 是否已赋值
                     * @return BodyExamination 是否已赋值
                     */
                    bool BodyExaminationHasBeenSet() const;

                    /**
                     * 获取入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdmissionDiagnosis 入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdmissionDiagnosisBlock GetAdmissionDiagnosis() const;

                    /**
                     * 设置入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AdmissionDiagnosis 入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAdmissionDiagnosis(const AdmissionDiagnosisBlock& _admissionDiagnosis);

                    /**
                     * 判断参数 AdmissionDiagnosis 是否已赋值
                     * @return AdmissionDiagnosis 是否已赋值
                     */
                    bool AdmissionDiagnosisHasBeenSet() const;

                    /**
                     * 获取入院中医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdmissionTraditionalDiagnosis 入院中医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdmissionDiagnosisBlock GetAdmissionTraditionalDiagnosis() const;

                    /**
                     * 设置入院中医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AdmissionTraditionalDiagnosis 入院中医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAdmissionTraditionalDiagnosis(const AdmissionDiagnosisBlock& _admissionTraditionalDiagnosis);

                    /**
                     * 判断参数 AdmissionTraditionalDiagnosis 是否已赋值
                     * @return AdmissionTraditionalDiagnosis 是否已赋值
                     */
                    bool AdmissionTraditionalDiagnosisHasBeenSet() const;

                    /**
                     * 获取入院西医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdmissionModernDiagnosis 入院西医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdmissionDiagnosisBlock GetAdmissionModernDiagnosis() const;

                    /**
                     * 设置入院西医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AdmissionModernDiagnosis 入院西医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAdmissionModernDiagnosis(const AdmissionDiagnosisBlock& _admissionModernDiagnosis);

                    /**
                     * 判断参数 AdmissionModernDiagnosis 是否已赋值
                     * @return AdmissionModernDiagnosis 是否已赋值
                     */
                    bool AdmissionModernDiagnosisHasBeenSet() const;

                    /**
                     * 获取病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathologicalDiagnosis 病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PathologicalDiagnosisBlock GetPathologicalDiagnosis() const;

                    /**
                     * 设置病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PathologicalDiagnosis 病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPathologicalDiagnosis(const PathologicalDiagnosisBlock& _pathologicalDiagnosis);

                    /**
                     * 判断参数 PathologicalDiagnosis 是否已赋值
                     * @return PathologicalDiagnosis 是否已赋值
                     */
                    bool PathologicalDiagnosisHasBeenSet() const;

                    /**
                     * 获取现病史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiseasePresent 现病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetDiseasePresent() const;

                    /**
                     * 设置现病史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiseasePresent 现病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiseasePresent(const DiseasePresentBlock& _diseasePresent);

                    /**
                     * 判断参数 DiseasePresent 是否已赋值
                     * @return DiseasePresent 是否已赋值
                     */
                    bool DiseasePresentHasBeenSet() const;

                    /**
                     * 获取体征
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SymptomsAndSigns 体征
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetSymptomsAndSigns() const;

                    /**
                     * 设置体征
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SymptomsAndSigns 体征
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSymptomsAndSigns(const DiseasePresentBlock& _symptomsAndSigns);

                    /**
                     * 判断参数 SymptomsAndSigns 是否已赋值
                     * @return SymptomsAndSigns 是否已赋值
                     */
                    bool SymptomsAndSignsHasBeenSet() const;

                    /**
                     * 获取辅助检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuxiliaryExamination 辅助检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetAuxiliaryExamination() const;

                    /**
                     * 设置辅助检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AuxiliaryExamination 辅助检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAuxiliaryExamination(const DiseasePresentBlock& _auxiliaryExamination);

                    /**
                     * 判断参数 AuxiliaryExamination 是否已赋值
                     * @return AuxiliaryExamination 是否已赋值
                     */
                    bool AuxiliaryExaminationHasBeenSet() const;

                    /**
                     * 获取特殊检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecialistExamination 特殊检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetSpecialistExamination() const;

                    /**
                     * 设置特殊检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SpecialistExamination 特殊检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpecialistExamination(const DiseasePresentBlock& _specialistExamination);

                    /**
                     * 判断参数 SpecialistExamination 是否已赋值
                     * @return SpecialistExamination 是否已赋值
                     */
                    bool SpecialistExaminationHasBeenSet() const;

                    /**
                     * 获取精神检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MentalExamination 精神检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetMentalExamination() const;

                    /**
                     * 设置精神检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MentalExamination 精神检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMentalExamination(const DiseasePresentBlock& _mentalExamination);

                    /**
                     * 判断参数 MentalExamination 是否已赋值
                     * @return MentalExamination 是否已赋值
                     */
                    bool MentalExaminationHasBeenSet() const;

                    /**
                     * 获取检查记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckRecord 检查记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetCheckRecord() const;

                    /**
                     * 设置检查记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CheckRecord 检查记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCheckRecord(const DiseasePresentBlock& _checkRecord);

                    /**
                     * 判断参数 CheckRecord 是否已赋值
                     * @return CheckRecord 是否已赋值
                     */
                    bool CheckRecordHasBeenSet() const;

                    /**
                     * 获取检查结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InspectResult 检查结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetInspectResult() const;

                    /**
                     * 设置检查结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InspectResult 检查结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInspectResult(const DiseasePresentBlock& _inspectResult);

                    /**
                     * 判断参数 InspectResult 是否已赋值
                     * @return InspectResult 是否已赋值
                     */
                    bool InspectResultHasBeenSet() const;

                    /**
                     * 获取治疗经过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckAndTreatmentProcess 治疗经过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetCheckAndTreatmentProcess() const;

                    /**
                     * 设置治疗经过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CheckAndTreatmentProcess 治疗经过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCheckAndTreatmentProcess(const DiseasePresentBlock& _checkAndTreatmentProcess);

                    /**
                     * 判断参数 CheckAndTreatmentProcess 是否已赋值
                     * @return CheckAndTreatmentProcess 是否已赋值
                     */
                    bool CheckAndTreatmentProcessHasBeenSet() const;

                    /**
                     * 获取手术经过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SurgeryCondition 手术经过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SurgeryConditionBlock GetSurgeryCondition() const;

                    /**
                     * 设置手术经过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SurgeryCondition 手术经过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSurgeryCondition(const SurgeryConditionBlock& _surgeryCondition);

                    /**
                     * 判断参数 SurgeryCondition 是否已赋值
                     * @return SurgeryCondition 是否已赋值
                     */
                    bool SurgeryConditionHasBeenSet() const;

                    /**
                     * 获取切口愈合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncisionHealing 切口愈合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetIncisionHealing() const;

                    /**
                     * 设置切口愈合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IncisionHealing 切口愈合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIncisionHealing(const DiseasePresentBlock& _incisionHealing);

                    /**
                     * 判断参数 IncisionHealing 是否已赋值
                     * @return IncisionHealing 是否已赋值
                     */
                    bool IncisionHealingHasBeenSet() const;

                    /**
                     * 获取出院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DischargeDiagnosis 出院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DischargeDiagnosisBlock GetDischargeDiagnosis() const;

                    /**
                     * 设置出院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DischargeDiagnosis 出院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDischargeDiagnosis(const DischargeDiagnosisBlock& _dischargeDiagnosis);

                    /**
                     * 判断参数 DischargeDiagnosis 是否已赋值
                     * @return DischargeDiagnosis 是否已赋值
                     */
                    bool DischargeDiagnosisHasBeenSet() const;

                    /**
                     * 获取出院中医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DischargeTraditionalDiagnosis 出院中医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetDischargeTraditionalDiagnosis() const;

                    /**
                     * 设置出院中医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DischargeTraditionalDiagnosis 出院中医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDischargeTraditionalDiagnosis(const DiseasePresentBlock& _dischargeTraditionalDiagnosis);

                    /**
                     * 判断参数 DischargeTraditionalDiagnosis 是否已赋值
                     * @return DischargeTraditionalDiagnosis 是否已赋值
                     */
                    bool DischargeTraditionalDiagnosisHasBeenSet() const;

                    /**
                     * 获取出院西医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DischargeModernDiagnosis 出院西医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DischargeDiagnosisBlock GetDischargeModernDiagnosis() const;

                    /**
                     * 设置出院西医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DischargeModernDiagnosis 出院西医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDischargeModernDiagnosis(const DischargeDiagnosisBlock& _dischargeModernDiagnosis);

                    /**
                     * 判断参数 DischargeModernDiagnosis 是否已赋值
                     * @return DischargeModernDiagnosis 是否已赋值
                     */
                    bool DischargeModernDiagnosisHasBeenSet() const;

                    /**
                     * 获取出院情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DischargeCondition 出院情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DischargeConditionBlock GetDischargeCondition() const;

                    /**
                     * 设置出院情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DischargeCondition 出院情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDischargeCondition(const DischargeConditionBlock& _dischargeCondition);

                    /**
                     * 判断参数 DischargeCondition 是否已赋值
                     * @return DischargeCondition 是否已赋值
                     */
                    bool DischargeConditionHasBeenSet() const;

                    /**
                     * 获取出院医嘱
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DischargeInstructions 出院医嘱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetDischargeInstructions() const;

                    /**
                     * 设置出院医嘱
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DischargeInstructions 出院医嘱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDischargeInstructions(const DiseasePresentBlock& _dischargeInstructions);

                    /**
                     * 判断参数 DischargeInstructions 是否已赋值
                     * @return DischargeInstructions 是否已赋值
                     */
                    bool DischargeInstructionsHasBeenSet() const;

                    /**
                     * 获取治疗建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TreatmentSuggestion 治疗建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetTreatmentSuggestion() const;

                    /**
                     * 设置治疗建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TreatmentSuggestion 治疗建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTreatmentSuggestion(const DiseasePresentBlock& _treatmentSuggestion);

                    /**
                     * 判断参数 TreatmentSuggestion 是否已赋值
                     * @return TreatmentSuggestion 是否已赋值
                     */
                    bool TreatmentSuggestionHasBeenSet() const;

                    /**
                     * 获取随访
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowUpRequirements 随访
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetFollowUpRequirements() const;

                    /**
                     * 设置随访
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FollowUpRequirements 随访
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFollowUpRequirements(const DiseasePresentBlock& _followUpRequirements);

                    /**
                     * 判断参数 FollowUpRequirements 是否已赋值
                     * @return FollowUpRequirements 是否已赋值
                     */
                    bool FollowUpRequirementsHasBeenSet() const;

                    /**
                     * 获取治疗情况变化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionChanges 治疗情况变化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetConditionChanges() const;

                    /**
                     * 设置治疗情况变化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConditionChanges 治疗情况变化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConditionChanges(const DiseasePresentBlock& _conditionChanges);

                    /**
                     * 判断参数 ConditionChanges 是否已赋值
                     * @return ConditionChanges 是否已赋值
                     */
                    bool ConditionChangesHasBeenSet() const;

                    /**
                     * 获取收缩压
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PulmonaryArterySystolicPressure 收缩压
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetPulmonaryArterySystolicPressure() const;

                    /**
                     * 设置收缩压
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PulmonaryArterySystolicPressure 收缩压
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPulmonaryArterySystolicPressure(const DiseasePresentBlock& _pulmonaryArterySystolicPressure);

                    /**
                     * 判断参数 PulmonaryArterySystolicPressure 是否已赋值
                     * @return PulmonaryArterySystolicPressure 是否已赋值
                     */
                    bool PulmonaryArterySystolicPressureHasBeenSet() const;

                    /**
                     * 获取bclc分期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BCLC bclc分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetBCLC() const;

                    /**
                     * 设置bclc分期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BCLC bclc分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBCLC(const DiseasePresentBlock& _bCLC);

                    /**
                     * 判断参数 BCLC 是否已赋值
                     * @return BCLC 是否已赋值
                     */
                    bool BCLCHasBeenSet() const;

                    /**
                     * 获取PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PTNM PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PTNMBlock GetPTNM() const;

                    /**
                     * 设置PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PTNM PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPTNM(const PTNMBlock& _pTNM);

                    /**
                     * 判断参数 PTNM 是否已赋值
                     * @return PTNM 是否已赋值
                     */
                    bool PTNMHasBeenSet() const;

                    /**
                     * 获取ECOG评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ECOG ECOG评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetECOG() const;

                    /**
                     * 设置ECOG评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ECOG ECOG评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetECOG(const DiseasePresentBlock& _eCOG);

                    /**
                     * 判断参数 ECOG 是否已赋值
                     * @return ECOG 是否已赋值
                     */
                    bool ECOGHasBeenSet() const;

                    /**
                     * 获取NRS评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NRS NRS评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetNRS() const;

                    /**
                     * 设置NRS评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NRS NRS评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNRS(const DiseasePresentBlock& _nRS);

                    /**
                     * 判断参数 NRS 是否已赋值
                     * @return NRS 是否已赋值
                     */
                    bool NRSHasBeenSet() const;

                    /**
                     * 获取kps评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KPS kps评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock GetKPS() const;

                    /**
                     * 设置kps评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KPS kps评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKPS(const DiseasePresentBlock& _kPS);

                    /**
                     * 判断参数 KPS 是否已赋值
                     * @return KPS 是否已赋值
                     */
                    bool KPSHasBeenSet() const;

                    /**
                     * 获取癌症分期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cancerstaging 癌症分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClinicalStaging GetCancerstaging() const;

                    /**
                     * 设置癌症分期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cancerstaging 癌症分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCancerstaging(const ClinicalStaging& _cancerstaging);

                    /**
                     * 判断参数 Cancerstaging 是否已赋值
                     * @return Cancerstaging 是否已赋值
                     */
                    bool CancerstagingHasBeenSet() const;

                    /**
                     * 获取死亡时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeathDate 死亡时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeathDateBlock GetDeathDate() const;

                    /**
                     * 设置死亡时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeathDate 死亡时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeathDate(const DeathDateBlock& _deathDate);

                    /**
                     * 判断参数 DeathDate 是否已赋值
                     * @return DeathDate 是否已赋值
                     */
                    bool DeathDateHasBeenSet() const;

                    /**
                     * 获取复发日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelapseDate 复发日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RelapseDateBlock GetRelapseDate() const;

                    /**
                     * 设置复发日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RelapseDate 复发日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRelapseDate(const RelapseDateBlock& _relapseDate);

                    /**
                     * 判断参数 RelapseDate 是否已赋值
                     * @return RelapseDate 是否已赋值
                     */
                    bool RelapseDateHasBeenSet() const;

                    /**
                     * 获取观察日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObservationDays 观察日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeathDateBlock GetObservationDays() const;

                    /**
                     * 设置观察日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ObservationDays 观察日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetObservationDays(const DeathDateBlock& _observationDays);

                    /**
                     * 判断参数 ObservationDays 是否已赋值
                     * @return ObservationDays 是否已赋值
                     */
                    bool ObservationDaysHasBeenSet() const;

                    /**
                     * 获取切口愈合情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncisionHealingText 切口愈合情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIncisionHealingText() const;

                    /**
                     * 设置切口愈合情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IncisionHealingText 切口愈合情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIncisionHealingText(const std::string& _incisionHealingText);

                    /**
                     * 判断参数 IncisionHealingText 是否已赋值
                     * @return IncisionHealingText 是否已赋值
                     */
                    bool IncisionHealingTextHasBeenSet() const;

                    /**
                     * 获取辅助检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuxiliaryExaminationText 辅助检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAuxiliaryExaminationText() const;

                    /**
                     * 设置辅助检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AuxiliaryExaminationText 辅助检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAuxiliaryExaminationText(const std::string& _auxiliaryExaminationText);

                    /**
                     * 判断参数 AuxiliaryExaminationText 是否已赋值
                     * @return AuxiliaryExaminationText 是否已赋值
                     */
                    bool AuxiliaryExaminationTextHasBeenSet() const;

                    /**
                     * 获取特殊检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecialExamText 特殊检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSpecialExamText() const;

                    /**
                     * 设置特殊检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SpecialExamText 特殊检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpecialExamText(const std::string& _specialExamText);

                    /**
                     * 判断参数 SpecialExamText 是否已赋值
                     * @return SpecialExamText 是否已赋值
                     */
                    bool SpecialExamTextHasBeenSet() const;

                    /**
                     * 获取门诊诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutpatientDiagnosisText 门诊诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOutpatientDiagnosisText() const;

                    /**
                     * 设置门诊诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OutpatientDiagnosisText 门诊诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOutpatientDiagnosisText(const std::string& _outpatientDiagnosisText);

                    /**
                     * 判断参数 OutpatientDiagnosisText 是否已赋值
                     * @return OutpatientDiagnosisText 是否已赋值
                     */
                    bool OutpatientDiagnosisTextHasBeenSet() const;

                    /**
                     * 获取入院情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdmissionConditionText 入院情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAdmissionConditionText() const;

                    /**
                     * 设置入院情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AdmissionConditionText 入院情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAdmissionConditionText(const std::string& _admissionConditionText);

                    /**
                     * 判断参数 AdmissionConditionText 是否已赋值
                     * @return AdmissionConditionText 是否已赋值
                     */
                    bool AdmissionConditionTextHasBeenSet() const;

                    /**
                     * 获取诊疗经过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckAndTreatmentProcessText 诊疗经过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCheckAndTreatmentProcessText() const;

                    /**
                     * 设置诊疗经过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CheckAndTreatmentProcessText 诊疗经过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCheckAndTreatmentProcessText(const std::string& _checkAndTreatmentProcessText);

                    /**
                     * 判断参数 CheckAndTreatmentProcessText 是否已赋值
                     * @return CheckAndTreatmentProcessText 是否已赋值
                     */
                    bool CheckAndTreatmentProcessTextHasBeenSet() const;

                    /**
                     * 获取体征
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SymptomsAndSignsText 体征
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSymptomsAndSignsText() const;

                    /**
                     * 设置体征
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SymptomsAndSignsText 体征
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSymptomsAndSignsText(const std::string& _symptomsAndSignsText);

                    /**
                     * 判断参数 SymptomsAndSignsText 是否已赋值
                     * @return SymptomsAndSignsText 是否已赋值
                     */
                    bool SymptomsAndSignsTextHasBeenSet() const;

                    /**
                     * 获取出院医嘱
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DischargeInstructionsText 出院医嘱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDischargeInstructionsText() const;

                    /**
                     * 设置出院医嘱
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DischargeInstructionsText 出院医嘱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDischargeInstructionsText(const std::string& _dischargeInstructionsText);

                    /**
                     * 判断参数 DischargeInstructionsText 是否已赋值
                     * @return DischargeInstructionsText 是否已赋值
                     */
                    bool DischargeInstructionsTextHasBeenSet() const;

                    /**
                     * 获取入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdmissionDiagnosisText 入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAdmissionDiagnosisText() const;

                    /**
                     * 设置入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AdmissionDiagnosisText 入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAdmissionDiagnosisText(const std::string& _admissionDiagnosisText);

                    /**
                     * 判断参数 AdmissionDiagnosisText 是否已赋值
                     * @return AdmissionDiagnosisText 是否已赋值
                     */
                    bool AdmissionDiagnosisTextHasBeenSet() const;

                    /**
                     * 获取手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SurgeryConditionText 手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSurgeryConditionText() const;

                    /**
                     * 设置手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SurgeryConditionText 手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSurgeryConditionText(const std::string& _surgeryConditionText);

                    /**
                     * 判断参数 SurgeryConditionText 是否已赋值
                     * @return SurgeryConditionText 是否已赋值
                     */
                    bool SurgeryConditionTextHasBeenSet() const;

                    /**
                     * 获取病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathologicalDiagnosisText 病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPathologicalDiagnosisText() const;

                    /**
                     * 设置病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PathologicalDiagnosisText 病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPathologicalDiagnosisText(const std::string& _pathologicalDiagnosisText);

                    /**
                     * 判断参数 PathologicalDiagnosisText 是否已赋值
                     * @return PathologicalDiagnosisText 是否已赋值
                     */
                    bool PathologicalDiagnosisTextHasBeenSet() const;

                    /**
                     * 获取出院情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DischargeConditionText 出院情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDischargeConditionText() const;

                    /**
                     * 设置出院情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DischargeConditionText 出院情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDischargeConditionText(const std::string& _dischargeConditionText);

                    /**
                     * 判断参数 DischargeConditionText 是否已赋值
                     * @return DischargeConditionText 是否已赋值
                     */
                    bool DischargeConditionTextHasBeenSet() const;

                    /**
                     * 获取检查记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckRecordText 检查记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCheckRecordText() const;

                    /**
                     * 设置检查记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CheckRecordText 检查记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCheckRecordText(const std::string& _checkRecordText);

                    /**
                     * 判断参数 CheckRecordText 是否已赋值
                     * @return CheckRecordText 是否已赋值
                     */
                    bool CheckRecordTextHasBeenSet() const;

                    /**
                     * 获取主诉
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChiefComplaintText 主诉
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetChiefComplaintText() const;

                    /**
                     * 设置主诉
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChiefComplaintText 主诉
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChiefComplaintText(const std::string& _chiefComplaintText);

                    /**
                     * 判断参数 ChiefComplaintText 是否已赋值
                     * @return ChiefComplaintText 是否已赋值
                     */
                    bool ChiefComplaintTextHasBeenSet() const;

                    /**
                     * 获取出院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DischargeDiagnosisText 出院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDischargeDiagnosisText() const;

                    /**
                     * 设置出院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DischargeDiagnosisText 出院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDischargeDiagnosisText(const std::string& _dischargeDiagnosisText);

                    /**
                     * 判断参数 DischargeDiagnosisText 是否已赋值
                     * @return DischargeDiagnosisText 是否已赋值
                     */
                    bool DischargeDiagnosisTextHasBeenSet() const;

                private:

                    /**
                     * 免疫组化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImmunohistochemistryBlock m_immunohistochemistry;
                    bool m_immunohistochemistryHasBeenSet;

                    /**
                     * 主诉
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ChiefComplaintBlock m_chiefComplaint;
                    bool m_chiefComplaintHasBeenSet;

                    /**
                     * 入院情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdmissionConditionBlock m_admissionCondition;
                    bool m_admissionConditionHasBeenSet;

                    /**
                     * 查体
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BodyExaminationBlock m_bodyExamination;
                    bool m_bodyExaminationHasBeenSet;

                    /**
                     * 入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdmissionDiagnosisBlock m_admissionDiagnosis;
                    bool m_admissionDiagnosisHasBeenSet;

                    /**
                     * 入院中医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdmissionDiagnosisBlock m_admissionTraditionalDiagnosis;
                    bool m_admissionTraditionalDiagnosisHasBeenSet;

                    /**
                     * 入院西医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdmissionDiagnosisBlock m_admissionModernDiagnosis;
                    bool m_admissionModernDiagnosisHasBeenSet;

                    /**
                     * 病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PathologicalDiagnosisBlock m_pathologicalDiagnosis;
                    bool m_pathologicalDiagnosisHasBeenSet;

                    /**
                     * 现病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_diseasePresent;
                    bool m_diseasePresentHasBeenSet;

                    /**
                     * 体征
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_symptomsAndSigns;
                    bool m_symptomsAndSignsHasBeenSet;

                    /**
                     * 辅助检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_auxiliaryExamination;
                    bool m_auxiliaryExaminationHasBeenSet;

                    /**
                     * 特殊检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_specialistExamination;
                    bool m_specialistExaminationHasBeenSet;

                    /**
                     * 精神检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_mentalExamination;
                    bool m_mentalExaminationHasBeenSet;

                    /**
                     * 检查记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_checkRecord;
                    bool m_checkRecordHasBeenSet;

                    /**
                     * 检查结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_inspectResult;
                    bool m_inspectResultHasBeenSet;

                    /**
                     * 治疗经过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_checkAndTreatmentProcess;
                    bool m_checkAndTreatmentProcessHasBeenSet;

                    /**
                     * 手术经过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SurgeryConditionBlock m_surgeryCondition;
                    bool m_surgeryConditionHasBeenSet;

                    /**
                     * 切口愈合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_incisionHealing;
                    bool m_incisionHealingHasBeenSet;

                    /**
                     * 出院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DischargeDiagnosisBlock m_dischargeDiagnosis;
                    bool m_dischargeDiagnosisHasBeenSet;

                    /**
                     * 出院中医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_dischargeTraditionalDiagnosis;
                    bool m_dischargeTraditionalDiagnosisHasBeenSet;

                    /**
                     * 出院西医诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DischargeDiagnosisBlock m_dischargeModernDiagnosis;
                    bool m_dischargeModernDiagnosisHasBeenSet;

                    /**
                     * 出院情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DischargeConditionBlock m_dischargeCondition;
                    bool m_dischargeConditionHasBeenSet;

                    /**
                     * 出院医嘱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_dischargeInstructions;
                    bool m_dischargeInstructionsHasBeenSet;

                    /**
                     * 治疗建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_treatmentSuggestion;
                    bool m_treatmentSuggestionHasBeenSet;

                    /**
                     * 随访
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_followUpRequirements;
                    bool m_followUpRequirementsHasBeenSet;

                    /**
                     * 治疗情况变化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_conditionChanges;
                    bool m_conditionChangesHasBeenSet;

                    /**
                     * 收缩压
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_pulmonaryArterySystolicPressure;
                    bool m_pulmonaryArterySystolicPressureHasBeenSet;

                    /**
                     * bclc分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_bCLC;
                    bool m_bCLCHasBeenSet;

                    /**
                     * PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PTNMBlock m_pTNM;
                    bool m_pTNMHasBeenSet;

                    /**
                     * ECOG评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_eCOG;
                    bool m_eCOGHasBeenSet;

                    /**
                     * NRS评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_nRS;
                    bool m_nRSHasBeenSet;

                    /**
                     * kps评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseasePresentBlock m_kPS;
                    bool m_kPSHasBeenSet;

                    /**
                     * 癌症分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClinicalStaging m_cancerstaging;
                    bool m_cancerstagingHasBeenSet;

                    /**
                     * 死亡时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeathDateBlock m_deathDate;
                    bool m_deathDateHasBeenSet;

                    /**
                     * 复发日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RelapseDateBlock m_relapseDate;
                    bool m_relapseDateHasBeenSet;

                    /**
                     * 观察日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeathDateBlock m_observationDays;
                    bool m_observationDaysHasBeenSet;

                    /**
                     * 切口愈合情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_incisionHealingText;
                    bool m_incisionHealingTextHasBeenSet;

                    /**
                     * 辅助检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_auxiliaryExaminationText;
                    bool m_auxiliaryExaminationTextHasBeenSet;

                    /**
                     * 特殊检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specialExamText;
                    bool m_specialExamTextHasBeenSet;

                    /**
                     * 门诊诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outpatientDiagnosisText;
                    bool m_outpatientDiagnosisTextHasBeenSet;

                    /**
                     * 入院情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_admissionConditionText;
                    bool m_admissionConditionTextHasBeenSet;

                    /**
                     * 诊疗经过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkAndTreatmentProcessText;
                    bool m_checkAndTreatmentProcessTextHasBeenSet;

                    /**
                     * 体征
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_symptomsAndSignsText;
                    bool m_symptomsAndSignsTextHasBeenSet;

                    /**
                     * 出院医嘱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dischargeInstructionsText;
                    bool m_dischargeInstructionsTextHasBeenSet;

                    /**
                     * 入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_admissionDiagnosisText;
                    bool m_admissionDiagnosisTextHasBeenSet;

                    /**
                     * 手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_surgeryConditionText;
                    bool m_surgeryConditionTextHasBeenSet;

                    /**
                     * 病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pathologicalDiagnosisText;
                    bool m_pathologicalDiagnosisTextHasBeenSet;

                    /**
                     * 出院情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dischargeConditionText;
                    bool m_dischargeConditionTextHasBeenSet;

                    /**
                     * 检查记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkRecordText;
                    bool m_checkRecordTextHasBeenSet;

                    /**
                     * 主诉
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chiefComplaintText;
                    bool m_chiefComplaintTextHasBeenSet;

                    /**
                     * 出院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dischargeDiagnosisText;
                    bool m_dischargeDiagnosisTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_TREATMENTRECORDBLOCK_H_
