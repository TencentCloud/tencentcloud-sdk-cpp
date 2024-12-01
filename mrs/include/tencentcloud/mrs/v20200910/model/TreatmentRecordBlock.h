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
                     * @return Immunohistochemistry 免疫组化
                     * 
                     */
                    ImmunohistochemistryBlock GetImmunohistochemistry() const;

                    /**
                     * 设置免疫组化
                     * @param _immunohistochemistry 免疫组化
                     * 
                     */
                    void SetImmunohistochemistry(const ImmunohistochemistryBlock& _immunohistochemistry);

                    /**
                     * 判断参数 Immunohistochemistry 是否已赋值
                     * @return Immunohistochemistry 是否已赋值
                     * 
                     */
                    bool ImmunohistochemistryHasBeenSet() const;

                    /**
                     * 获取主诉
                     * @return ChiefComplaint 主诉
                     * 
                     */
                    ChiefComplaintBlock GetChiefComplaint() const;

                    /**
                     * 设置主诉
                     * @param _chiefComplaint 主诉
                     * 
                     */
                    void SetChiefComplaint(const ChiefComplaintBlock& _chiefComplaint);

                    /**
                     * 判断参数 ChiefComplaint 是否已赋值
                     * @return ChiefComplaint 是否已赋值
                     * 
                     */
                    bool ChiefComplaintHasBeenSet() const;

                    /**
                     * 获取入院情况
                     * @return AdmissionCondition 入院情况
                     * 
                     */
                    AdmissionConditionBlock GetAdmissionCondition() const;

                    /**
                     * 设置入院情况
                     * @param _admissionCondition 入院情况
                     * 
                     */
                    void SetAdmissionCondition(const AdmissionConditionBlock& _admissionCondition);

                    /**
                     * 判断参数 AdmissionCondition 是否已赋值
                     * @return AdmissionCondition 是否已赋值
                     * 
                     */
                    bool AdmissionConditionHasBeenSet() const;

                    /**
                     * 获取查体
                     * @return BodyExamination 查体
                     * 
                     */
                    BodyExaminationBlock GetBodyExamination() const;

                    /**
                     * 设置查体
                     * @param _bodyExamination 查体
                     * 
                     */
                    void SetBodyExamination(const BodyExaminationBlock& _bodyExamination);

                    /**
                     * 判断参数 BodyExamination 是否已赋值
                     * @return BodyExamination 是否已赋值
                     * 
                     */
                    bool BodyExaminationHasBeenSet() const;

                    /**
                     * 获取入院诊断
                     * @return AdmissionDiagnosis 入院诊断
                     * 
                     */
                    AdmissionDiagnosisBlock GetAdmissionDiagnosis() const;

                    /**
                     * 设置入院诊断
                     * @param _admissionDiagnosis 入院诊断
                     * 
                     */
                    void SetAdmissionDiagnosis(const AdmissionDiagnosisBlock& _admissionDiagnosis);

                    /**
                     * 判断参数 AdmissionDiagnosis 是否已赋值
                     * @return AdmissionDiagnosis 是否已赋值
                     * 
                     */
                    bool AdmissionDiagnosisHasBeenSet() const;

                    /**
                     * 获取入院中医诊断
                     * @return AdmissionTraditionalDiagnosis 入院中医诊断
                     * 
                     */
                    AdmissionDiagnosisBlock GetAdmissionTraditionalDiagnosis() const;

                    /**
                     * 设置入院中医诊断
                     * @param _admissionTraditionalDiagnosis 入院中医诊断
                     * 
                     */
                    void SetAdmissionTraditionalDiagnosis(const AdmissionDiagnosisBlock& _admissionTraditionalDiagnosis);

                    /**
                     * 判断参数 AdmissionTraditionalDiagnosis 是否已赋值
                     * @return AdmissionTraditionalDiagnosis 是否已赋值
                     * 
                     */
                    bool AdmissionTraditionalDiagnosisHasBeenSet() const;

                    /**
                     * 获取入院西医诊断
                     * @return AdmissionModernDiagnosis 入院西医诊断
                     * 
                     */
                    AdmissionDiagnosisBlock GetAdmissionModernDiagnosis() const;

                    /**
                     * 设置入院西医诊断
                     * @param _admissionModernDiagnosis 入院西医诊断
                     * 
                     */
                    void SetAdmissionModernDiagnosis(const AdmissionDiagnosisBlock& _admissionModernDiagnosis);

                    /**
                     * 判断参数 AdmissionModernDiagnosis 是否已赋值
                     * @return AdmissionModernDiagnosis 是否已赋值
                     * 
                     */
                    bool AdmissionModernDiagnosisHasBeenSet() const;

                    /**
                     * 获取病理诊断
                     * @return PathologicalDiagnosis 病理诊断
                     * 
                     */
                    PathologicalDiagnosisBlock GetPathologicalDiagnosis() const;

                    /**
                     * 设置病理诊断
                     * @param _pathologicalDiagnosis 病理诊断
                     * 
                     */
                    void SetPathologicalDiagnosis(const PathologicalDiagnosisBlock& _pathologicalDiagnosis);

                    /**
                     * 判断参数 PathologicalDiagnosis 是否已赋值
                     * @return PathologicalDiagnosis 是否已赋值
                     * 
                     */
                    bool PathologicalDiagnosisHasBeenSet() const;

                    /**
                     * 获取现病史
                     * @return DiseasePresent 现病史
                     * 
                     */
                    DiseasePresentBlock GetDiseasePresent() const;

                    /**
                     * 设置现病史
                     * @param _diseasePresent 现病史
                     * 
                     */
                    void SetDiseasePresent(const DiseasePresentBlock& _diseasePresent);

                    /**
                     * 判断参数 DiseasePresent 是否已赋值
                     * @return DiseasePresent 是否已赋值
                     * 
                     */
                    bool DiseasePresentHasBeenSet() const;

                    /**
                     * 获取体征
                     * @return SymptomsAndSigns 体征
                     * 
                     */
                    DiseasePresentBlock GetSymptomsAndSigns() const;

                    /**
                     * 设置体征
                     * @param _symptomsAndSigns 体征
                     * 
                     */
                    void SetSymptomsAndSigns(const DiseasePresentBlock& _symptomsAndSigns);

                    /**
                     * 判断参数 SymptomsAndSigns 是否已赋值
                     * @return SymptomsAndSigns 是否已赋值
                     * 
                     */
                    bool SymptomsAndSignsHasBeenSet() const;

                    /**
                     * 获取辅助检查
                     * @return AuxiliaryExamination 辅助检查
                     * 
                     */
                    DiseasePresentBlock GetAuxiliaryExamination() const;

                    /**
                     * 设置辅助检查
                     * @param _auxiliaryExamination 辅助检查
                     * 
                     */
                    void SetAuxiliaryExamination(const DiseasePresentBlock& _auxiliaryExamination);

                    /**
                     * 判断参数 AuxiliaryExamination 是否已赋值
                     * @return AuxiliaryExamination 是否已赋值
                     * 
                     */
                    bool AuxiliaryExaminationHasBeenSet() const;

                    /**
                     * 获取特殊检查
                     * @return SpecialistExamination 特殊检查
                     * 
                     */
                    DiseasePresentBlock GetSpecialistExamination() const;

                    /**
                     * 设置特殊检查
                     * @param _specialistExamination 特殊检查
                     * 
                     */
                    void SetSpecialistExamination(const DiseasePresentBlock& _specialistExamination);

                    /**
                     * 判断参数 SpecialistExamination 是否已赋值
                     * @return SpecialistExamination 是否已赋值
                     * 
                     */
                    bool SpecialistExaminationHasBeenSet() const;

                    /**
                     * 获取精神检查
                     * @return MentalExamination 精神检查
                     * 
                     */
                    DiseasePresentBlock GetMentalExamination() const;

                    /**
                     * 设置精神检查
                     * @param _mentalExamination 精神检查
                     * 
                     */
                    void SetMentalExamination(const DiseasePresentBlock& _mentalExamination);

                    /**
                     * 判断参数 MentalExamination 是否已赋值
                     * @return MentalExamination 是否已赋值
                     * 
                     */
                    bool MentalExaminationHasBeenSet() const;

                    /**
                     * 获取检查记录
                     * @return CheckRecord 检查记录
                     * 
                     */
                    DiseasePresentBlock GetCheckRecord() const;

                    /**
                     * 设置检查记录
                     * @param _checkRecord 检查记录
                     * 
                     */
                    void SetCheckRecord(const DiseasePresentBlock& _checkRecord);

                    /**
                     * 判断参数 CheckRecord 是否已赋值
                     * @return CheckRecord 是否已赋值
                     * 
                     */
                    bool CheckRecordHasBeenSet() const;

                    /**
                     * 获取检查结果
                     * @return InspectResult 检查结果
                     * 
                     */
                    DiseasePresentBlock GetInspectResult() const;

                    /**
                     * 设置检查结果
                     * @param _inspectResult 检查结果
                     * 
                     */
                    void SetInspectResult(const DiseasePresentBlock& _inspectResult);

                    /**
                     * 判断参数 InspectResult 是否已赋值
                     * @return InspectResult 是否已赋值
                     * 
                     */
                    bool InspectResultHasBeenSet() const;

                    /**
                     * 获取治疗经过
                     * @return CheckAndTreatmentProcess 治疗经过
                     * 
                     */
                    DiseasePresentBlock GetCheckAndTreatmentProcess() const;

                    /**
                     * 设置治疗经过
                     * @param _checkAndTreatmentProcess 治疗经过
                     * 
                     */
                    void SetCheckAndTreatmentProcess(const DiseasePresentBlock& _checkAndTreatmentProcess);

                    /**
                     * 判断参数 CheckAndTreatmentProcess 是否已赋值
                     * @return CheckAndTreatmentProcess 是否已赋值
                     * 
                     */
                    bool CheckAndTreatmentProcessHasBeenSet() const;

                    /**
                     * 获取手术经过
                     * @return SurgeryCondition 手术经过
                     * 
                     */
                    SurgeryConditionBlock GetSurgeryCondition() const;

                    /**
                     * 设置手术经过
                     * @param _surgeryCondition 手术经过
                     * 
                     */
                    void SetSurgeryCondition(const SurgeryConditionBlock& _surgeryCondition);

                    /**
                     * 判断参数 SurgeryCondition 是否已赋值
                     * @return SurgeryCondition 是否已赋值
                     * 
                     */
                    bool SurgeryConditionHasBeenSet() const;

                    /**
                     * 获取切口愈合
                     * @return IncisionHealing 切口愈合
                     * 
                     */
                    DiseasePresentBlock GetIncisionHealing() const;

                    /**
                     * 设置切口愈合
                     * @param _incisionHealing 切口愈合
                     * 
                     */
                    void SetIncisionHealing(const DiseasePresentBlock& _incisionHealing);

                    /**
                     * 判断参数 IncisionHealing 是否已赋值
                     * @return IncisionHealing 是否已赋值
                     * 
                     */
                    bool IncisionHealingHasBeenSet() const;

                    /**
                     * 获取出院诊断
                     * @return DischargeDiagnosis 出院诊断
                     * 
                     */
                    DischargeDiagnosisBlock GetDischargeDiagnosis() const;

                    /**
                     * 设置出院诊断
                     * @param _dischargeDiagnosis 出院诊断
                     * 
                     */
                    void SetDischargeDiagnosis(const DischargeDiagnosisBlock& _dischargeDiagnosis);

                    /**
                     * 判断参数 DischargeDiagnosis 是否已赋值
                     * @return DischargeDiagnosis 是否已赋值
                     * 
                     */
                    bool DischargeDiagnosisHasBeenSet() const;

                    /**
                     * 获取出院中医诊断
                     * @return DischargeTraditionalDiagnosis 出院中医诊断
                     * 
                     */
                    DiseasePresentBlock GetDischargeTraditionalDiagnosis() const;

                    /**
                     * 设置出院中医诊断
                     * @param _dischargeTraditionalDiagnosis 出院中医诊断
                     * 
                     */
                    void SetDischargeTraditionalDiagnosis(const DiseasePresentBlock& _dischargeTraditionalDiagnosis);

                    /**
                     * 判断参数 DischargeTraditionalDiagnosis 是否已赋值
                     * @return DischargeTraditionalDiagnosis 是否已赋值
                     * 
                     */
                    bool DischargeTraditionalDiagnosisHasBeenSet() const;

                    /**
                     * 获取出院西医诊断
                     * @return DischargeModernDiagnosis 出院西医诊断
                     * 
                     */
                    DischargeDiagnosisBlock GetDischargeModernDiagnosis() const;

                    /**
                     * 设置出院西医诊断
                     * @param _dischargeModernDiagnosis 出院西医诊断
                     * 
                     */
                    void SetDischargeModernDiagnosis(const DischargeDiagnosisBlock& _dischargeModernDiagnosis);

                    /**
                     * 判断参数 DischargeModernDiagnosis 是否已赋值
                     * @return DischargeModernDiagnosis 是否已赋值
                     * 
                     */
                    bool DischargeModernDiagnosisHasBeenSet() const;

                    /**
                     * 获取出院情况
                     * @return DischargeCondition 出院情况
                     * 
                     */
                    DischargeConditionBlock GetDischargeCondition() const;

                    /**
                     * 设置出院情况
                     * @param _dischargeCondition 出院情况
                     * 
                     */
                    void SetDischargeCondition(const DischargeConditionBlock& _dischargeCondition);

                    /**
                     * 判断参数 DischargeCondition 是否已赋值
                     * @return DischargeCondition 是否已赋值
                     * 
                     */
                    bool DischargeConditionHasBeenSet() const;

                    /**
                     * 获取出院医嘱
                     * @return DischargeInstructions 出院医嘱
                     * 
                     */
                    DiseasePresentBlock GetDischargeInstructions() const;

                    /**
                     * 设置出院医嘱
                     * @param _dischargeInstructions 出院医嘱
                     * 
                     */
                    void SetDischargeInstructions(const DiseasePresentBlock& _dischargeInstructions);

                    /**
                     * 判断参数 DischargeInstructions 是否已赋值
                     * @return DischargeInstructions 是否已赋值
                     * 
                     */
                    bool DischargeInstructionsHasBeenSet() const;

                    /**
                     * 获取治疗建议
                     * @return TreatmentSuggestion 治疗建议
                     * 
                     */
                    DiseasePresentBlock GetTreatmentSuggestion() const;

                    /**
                     * 设置治疗建议
                     * @param _treatmentSuggestion 治疗建议
                     * 
                     */
                    void SetTreatmentSuggestion(const DiseasePresentBlock& _treatmentSuggestion);

                    /**
                     * 判断参数 TreatmentSuggestion 是否已赋值
                     * @return TreatmentSuggestion 是否已赋值
                     * 
                     */
                    bool TreatmentSuggestionHasBeenSet() const;

                    /**
                     * 获取随访
                     * @return FollowUpRequirements 随访
                     * 
                     */
                    DiseasePresentBlock GetFollowUpRequirements() const;

                    /**
                     * 设置随访
                     * @param _followUpRequirements 随访
                     * 
                     */
                    void SetFollowUpRequirements(const DiseasePresentBlock& _followUpRequirements);

                    /**
                     * 判断参数 FollowUpRequirements 是否已赋值
                     * @return FollowUpRequirements 是否已赋值
                     * 
                     */
                    bool FollowUpRequirementsHasBeenSet() const;

                    /**
                     * 获取治疗情况变化
                     * @return ConditionChanges 治疗情况变化
                     * 
                     */
                    DiseasePresentBlock GetConditionChanges() const;

                    /**
                     * 设置治疗情况变化
                     * @param _conditionChanges 治疗情况变化
                     * 
                     */
                    void SetConditionChanges(const DiseasePresentBlock& _conditionChanges);

                    /**
                     * 判断参数 ConditionChanges 是否已赋值
                     * @return ConditionChanges 是否已赋值
                     * 
                     */
                    bool ConditionChangesHasBeenSet() const;

                    /**
                     * 获取收缩压
                     * @return PulmonaryArterySystolicPressure 收缩压
                     * 
                     */
                    DiseasePresentBlock GetPulmonaryArterySystolicPressure() const;

                    /**
                     * 设置收缩压
                     * @param _pulmonaryArterySystolicPressure 收缩压
                     * 
                     */
                    void SetPulmonaryArterySystolicPressure(const DiseasePresentBlock& _pulmonaryArterySystolicPressure);

                    /**
                     * 判断参数 PulmonaryArterySystolicPressure 是否已赋值
                     * @return PulmonaryArterySystolicPressure 是否已赋值
                     * 
                     */
                    bool PulmonaryArterySystolicPressureHasBeenSet() const;

                    /**
                     * 获取bclc分期
                     * @return BCLC bclc分期
                     * 
                     */
                    DiseasePresentBlock GetBCLC() const;

                    /**
                     * 设置bclc分期
                     * @param _bCLC bclc分期
                     * 
                     */
                    void SetBCLC(const DiseasePresentBlock& _bCLC);

                    /**
                     * 判断参数 BCLC 是否已赋值
                     * @return BCLC 是否已赋值
                     * 
                     */
                    bool BCLCHasBeenSet() const;

                    /**
                     * 获取PTNM分期
                     * @return PTNM PTNM分期
                     * 
                     */
                    PTNMBlock GetPTNM() const;

                    /**
                     * 设置PTNM分期
                     * @param _pTNM PTNM分期
                     * 
                     */
                    void SetPTNM(const PTNMBlock& _pTNM);

                    /**
                     * 判断参数 PTNM 是否已赋值
                     * @return PTNM 是否已赋值
                     * 
                     */
                    bool PTNMHasBeenSet() const;

                    /**
                     * 获取ECOG评分
                     * @return ECOG ECOG评分
                     * 
                     */
                    DiseasePresentBlock GetECOG() const;

                    /**
                     * 设置ECOG评分
                     * @param _eCOG ECOG评分
                     * 
                     */
                    void SetECOG(const DiseasePresentBlock& _eCOG);

                    /**
                     * 判断参数 ECOG 是否已赋值
                     * @return ECOG 是否已赋值
                     * 
                     */
                    bool ECOGHasBeenSet() const;

                    /**
                     * 获取NRS评分
                     * @return NRS NRS评分
                     * 
                     */
                    DiseasePresentBlock GetNRS() const;

                    /**
                     * 设置NRS评分
                     * @param _nRS NRS评分
                     * 
                     */
                    void SetNRS(const DiseasePresentBlock& _nRS);

                    /**
                     * 判断参数 NRS 是否已赋值
                     * @return NRS 是否已赋值
                     * 
                     */
                    bool NRSHasBeenSet() const;

                    /**
                     * 获取kps评分
                     * @return KPS kps评分
                     * 
                     */
                    DiseasePresentBlock GetKPS() const;

                    /**
                     * 设置kps评分
                     * @param _kPS kps评分
                     * 
                     */
                    void SetKPS(const DiseasePresentBlock& _kPS);

                    /**
                     * 判断参数 KPS 是否已赋值
                     * @return KPS 是否已赋值
                     * 
                     */
                    bool KPSHasBeenSet() const;

                    /**
                     * 获取癌症分期
                     * @return Cancerstaging 癌症分期
                     * 
                     */
                    ClinicalStaging GetCancerstaging() const;

                    /**
                     * 设置癌症分期
                     * @param _cancerstaging 癌症分期
                     * 
                     */
                    void SetCancerstaging(const ClinicalStaging& _cancerstaging);

                    /**
                     * 判断参数 Cancerstaging 是否已赋值
                     * @return Cancerstaging 是否已赋值
                     * 
                     */
                    bool CancerstagingHasBeenSet() const;

                    /**
                     * 获取死亡时间
                     * @return DeathDate 死亡时间
                     * 
                     */
                    DeathDateBlock GetDeathDate() const;

                    /**
                     * 设置死亡时间
                     * @param _deathDate 死亡时间
                     * 
                     */
                    void SetDeathDate(const DeathDateBlock& _deathDate);

                    /**
                     * 判断参数 DeathDate 是否已赋值
                     * @return DeathDate 是否已赋值
                     * 
                     */
                    bool DeathDateHasBeenSet() const;

                    /**
                     * 获取复发日期
                     * @return RelapseDate 复发日期
                     * 
                     */
                    RelapseDateBlock GetRelapseDate() const;

                    /**
                     * 设置复发日期
                     * @param _relapseDate 复发日期
                     * 
                     */
                    void SetRelapseDate(const RelapseDateBlock& _relapseDate);

                    /**
                     * 判断参数 RelapseDate 是否已赋值
                     * @return RelapseDate 是否已赋值
                     * 
                     */
                    bool RelapseDateHasBeenSet() const;

                    /**
                     * 获取观察日期
                     * @return ObservationDays 观察日期
                     * 
                     */
                    DeathDateBlock GetObservationDays() const;

                    /**
                     * 设置观察日期
                     * @param _observationDays 观察日期
                     * 
                     */
                    void SetObservationDays(const DeathDateBlock& _observationDays);

                    /**
                     * 判断参数 ObservationDays 是否已赋值
                     * @return ObservationDays 是否已赋值
                     * 
                     */
                    bool ObservationDaysHasBeenSet() const;

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

                private:

                    /**
                     * 免疫组化
                     */
                    ImmunohistochemistryBlock m_immunohistochemistry;
                    bool m_immunohistochemistryHasBeenSet;

                    /**
                     * 主诉
                     */
                    ChiefComplaintBlock m_chiefComplaint;
                    bool m_chiefComplaintHasBeenSet;

                    /**
                     * 入院情况
                     */
                    AdmissionConditionBlock m_admissionCondition;
                    bool m_admissionConditionHasBeenSet;

                    /**
                     * 查体
                     */
                    BodyExaminationBlock m_bodyExamination;
                    bool m_bodyExaminationHasBeenSet;

                    /**
                     * 入院诊断
                     */
                    AdmissionDiagnosisBlock m_admissionDiagnosis;
                    bool m_admissionDiagnosisHasBeenSet;

                    /**
                     * 入院中医诊断
                     */
                    AdmissionDiagnosisBlock m_admissionTraditionalDiagnosis;
                    bool m_admissionTraditionalDiagnosisHasBeenSet;

                    /**
                     * 入院西医诊断
                     */
                    AdmissionDiagnosisBlock m_admissionModernDiagnosis;
                    bool m_admissionModernDiagnosisHasBeenSet;

                    /**
                     * 病理诊断
                     */
                    PathologicalDiagnosisBlock m_pathologicalDiagnosis;
                    bool m_pathologicalDiagnosisHasBeenSet;

                    /**
                     * 现病史
                     */
                    DiseasePresentBlock m_diseasePresent;
                    bool m_diseasePresentHasBeenSet;

                    /**
                     * 体征
                     */
                    DiseasePresentBlock m_symptomsAndSigns;
                    bool m_symptomsAndSignsHasBeenSet;

                    /**
                     * 辅助检查
                     */
                    DiseasePresentBlock m_auxiliaryExamination;
                    bool m_auxiliaryExaminationHasBeenSet;

                    /**
                     * 特殊检查
                     */
                    DiseasePresentBlock m_specialistExamination;
                    bool m_specialistExaminationHasBeenSet;

                    /**
                     * 精神检查
                     */
                    DiseasePresentBlock m_mentalExamination;
                    bool m_mentalExaminationHasBeenSet;

                    /**
                     * 检查记录
                     */
                    DiseasePresentBlock m_checkRecord;
                    bool m_checkRecordHasBeenSet;

                    /**
                     * 检查结果
                     */
                    DiseasePresentBlock m_inspectResult;
                    bool m_inspectResultHasBeenSet;

                    /**
                     * 治疗经过
                     */
                    DiseasePresentBlock m_checkAndTreatmentProcess;
                    bool m_checkAndTreatmentProcessHasBeenSet;

                    /**
                     * 手术经过
                     */
                    SurgeryConditionBlock m_surgeryCondition;
                    bool m_surgeryConditionHasBeenSet;

                    /**
                     * 切口愈合
                     */
                    DiseasePresentBlock m_incisionHealing;
                    bool m_incisionHealingHasBeenSet;

                    /**
                     * 出院诊断
                     */
                    DischargeDiagnosisBlock m_dischargeDiagnosis;
                    bool m_dischargeDiagnosisHasBeenSet;

                    /**
                     * 出院中医诊断
                     */
                    DiseasePresentBlock m_dischargeTraditionalDiagnosis;
                    bool m_dischargeTraditionalDiagnosisHasBeenSet;

                    /**
                     * 出院西医诊断
                     */
                    DischargeDiagnosisBlock m_dischargeModernDiagnosis;
                    bool m_dischargeModernDiagnosisHasBeenSet;

                    /**
                     * 出院情况
                     */
                    DischargeConditionBlock m_dischargeCondition;
                    bool m_dischargeConditionHasBeenSet;

                    /**
                     * 出院医嘱
                     */
                    DiseasePresentBlock m_dischargeInstructions;
                    bool m_dischargeInstructionsHasBeenSet;

                    /**
                     * 治疗建议
                     */
                    DiseasePresentBlock m_treatmentSuggestion;
                    bool m_treatmentSuggestionHasBeenSet;

                    /**
                     * 随访
                     */
                    DiseasePresentBlock m_followUpRequirements;
                    bool m_followUpRequirementsHasBeenSet;

                    /**
                     * 治疗情况变化
                     */
                    DiseasePresentBlock m_conditionChanges;
                    bool m_conditionChangesHasBeenSet;

                    /**
                     * 收缩压
                     */
                    DiseasePresentBlock m_pulmonaryArterySystolicPressure;
                    bool m_pulmonaryArterySystolicPressureHasBeenSet;

                    /**
                     * bclc分期
                     */
                    DiseasePresentBlock m_bCLC;
                    bool m_bCLCHasBeenSet;

                    /**
                     * PTNM分期
                     */
                    PTNMBlock m_pTNM;
                    bool m_pTNMHasBeenSet;

                    /**
                     * ECOG评分
                     */
                    DiseasePresentBlock m_eCOG;
                    bool m_eCOGHasBeenSet;

                    /**
                     * NRS评分
                     */
                    DiseasePresentBlock m_nRS;
                    bool m_nRSHasBeenSet;

                    /**
                     * kps评分
                     */
                    DiseasePresentBlock m_kPS;
                    bool m_kPSHasBeenSet;

                    /**
                     * 癌症分期
                     */
                    ClinicalStaging m_cancerstaging;
                    bool m_cancerstagingHasBeenSet;

                    /**
                     * 死亡时间
                     */
                    DeathDateBlock m_deathDate;
                    bool m_deathDateHasBeenSet;

                    /**
                     * 复发日期
                     */
                    RelapseDateBlock m_relapseDate;
                    bool m_relapseDateHasBeenSet;

                    /**
                     * 观察日期
                     */
                    DeathDateBlock m_observationDays;
                    bool m_observationDaysHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_TREATMENTRECORDBLOCK_H_
