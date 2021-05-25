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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_TREATMENTRECORD_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_TREATMENTRECORD_H_

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
                * 病历
                */
                class TreatmentRecord : public AbstractModel
                {
                public:
                    TreatmentRecord();
                    ~TreatmentRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DmissionCondition ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDmissionCondition() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DmissionCondition ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDmissionCondition(const std::string& _dmissionCondition);

                    /**
                     * 判断参数 DmissionCondition 是否已赋值
                     * @return DmissionCondition 是否已赋值
                     */
                    bool DmissionConditionHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChiefComplaint ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetChiefComplaint() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChiefComplaint ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChiefComplaint(const std::string& _chiefComplaint);

                    /**
                     * 判断参数 ChiefComplaint 是否已赋值
                     * @return ChiefComplaint 是否已赋值
                     */
                    bool ChiefComplaintHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiseasePresent ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDiseasePresent() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiseasePresent ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiseasePresent(const std::string& _diseasePresent);

                    /**
                     * 判断参数 DiseasePresent 是否已赋值
                     * @return DiseasePresent 是否已赋值
                     */
                    bool DiseasePresentHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SymptomsAndSigns ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSymptomsAndSigns() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SymptomsAndSigns ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSymptomsAndSigns(const std::string& _symptomsAndSigns);

                    /**
                     * 判断参数 SymptomsAndSigns 是否已赋值
                     * @return SymptomsAndSigns 是否已赋值
                     */
                    bool SymptomsAndSignsHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuxiliaryExamination “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAuxiliaryExamination() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AuxiliaryExamination “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAuxiliaryExamination(const std::string& _auxiliaryExamination);

                    /**
                     * 判断参数 AuxiliaryExamination 是否已赋值
                     * @return AuxiliaryExamination 是否已赋值
                     */
                    bool AuxiliaryExaminationHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BodyExamination “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBodyExamination() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BodyExamination “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBodyExamination(const std::string& _bodyExamination);

                    /**
                     * 判断参数 BodyExamination 是否已赋值
                     * @return BodyExamination 是否已赋值
                     */
                    bool BodyExaminationHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecialistExamination “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSpecialistExamination() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SpecialistExamination “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpecialistExamination(const std::string& _specialistExamination);

                    /**
                     * 判断参数 SpecialistExamination 是否已赋值
                     * @return SpecialistExamination 是否已赋值
                     */
                    bool SpecialistExaminationHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MentalExamination “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMentalExamination() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MentalExamination “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMentalExamination(const std::string& _mentalExamination);

                    /**
                     * 判断参数 MentalExamination 是否已赋值
                     * @return MentalExamination 是否已赋值
                     */
                    bool MentalExaminationHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckRecord “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCheckRecord() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CheckRecord “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCheckRecord(const std::string& _checkRecord);

                    /**
                     * 判断参数 CheckRecord 是否已赋值
                     * @return CheckRecord 是否已赋值
                     */
                    bool CheckRecordHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InspectResult “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInspectResult() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InspectResult “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInspectResult(const std::string& _inspectResult);

                    /**
                     * 判断参数 InspectResult 是否已赋值
                     * @return InspectResult 是否已赋值
                     */
                    bool InspectResultHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncisionHealing “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIncisionHealing() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IncisionHealing “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIncisionHealing(const std::string& _incisionHealing);

                    /**
                     * 判断参数 IncisionHealing 是否已赋值
                     * @return IncisionHealing 是否已赋值
                     */
                    bool IncisionHealingHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TreatmentSuggestion “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTreatmentSuggestion() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TreatmentSuggestion “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTreatmentSuggestion(const std::string& _treatmentSuggestion);

                    /**
                     * 判断参数 TreatmentSuggestion 是否已赋值
                     * @return TreatmentSuggestion 是否已赋值
                     */
                    bool TreatmentSuggestionHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowUpRequirements “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFollowUpRequirements() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FollowUpRequirements “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFollowUpRequirements(const std::string& _followUpRequirements);

                    /**
                     * 判断参数 FollowUpRequirements 是否已赋值
                     * @return FollowUpRequirements 是否已赋值
                     */
                    bool FollowUpRequirementsHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckAndTreatmentProcess “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCheckAndTreatmentProcess() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CheckAndTreatmentProcess “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCheckAndTreatmentProcess(const std::string& _checkAndTreatmentProcess);

                    /**
                     * 判断参数 CheckAndTreatmentProcess 是否已赋值
                     * @return CheckAndTreatmentProcess 是否已赋值
                     */
                    bool CheckAndTreatmentProcessHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SurgeryCondition “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSurgeryCondition() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SurgeryCondition “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSurgeryCondition(const std::string& _surgeryCondition);

                    /**
                     * 判断参数 SurgeryCondition 是否已赋值
                     * @return SurgeryCondition 是否已赋值
                     */
                    bool SurgeryConditionHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionChanges “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConditionChanges() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConditionChanges “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConditionChanges(const std::string& _conditionChanges);

                    /**
                     * 判断参数 ConditionChanges 是否已赋值
                     * @return ConditionChanges 是否已赋值
                     */
                    bool ConditionChangesHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DischargeCondition “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDischargeCondition() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DischargeCondition “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDischargeCondition(const std::string& _dischargeCondition);

                    /**
                     * 判断参数 DischargeCondition 是否已赋值
                     * @return DischargeCondition 是否已赋值
                     */
                    bool DischargeConditionHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PTNM “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPTNM() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PTNM “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPTNM(const std::string& _pTNM);

                    /**
                     * 判断参数 PTNM 是否已赋值
                     * @return PTNM 是否已赋值
                     */
                    bool PTNMHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PTNMM “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPTNMM() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PTNMM “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPTNMM(const std::string& _pTNMM);

                    /**
                     * 判断参数 PTNMM 是否已赋值
                     * @return PTNMM 是否已赋值
                     */
                    bool PTNMMHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PTNMN “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPTNMN() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PTNMN “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPTNMN(const std::string& _pTNMN);

                    /**
                     * 判断参数 PTNMN 是否已赋值
                     * @return PTNMN 是否已赋值
                     */
                    bool PTNMNHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PTNMT “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPTNMT() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PTNMT “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPTNMT(const std::string& _pTNMT);

                    /**
                     * 判断参数 PTNMT 是否已赋值
                     * @return PTNMT 是否已赋值
                     */
                    bool PTNMTHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ECOG “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetECOG() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ECOG “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetECOG(const std::string& _eCOG);

                    /**
                     * 判断参数 ECOG 是否已赋值
                     * @return ECOG 是否已赋值
                     */
                    bool ECOGHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NRS “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNRS() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NRS “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNRS(const std::string& _nRS);

                    /**
                     * 判断参数 NRS 是否已赋值
                     * @return NRS 是否已赋值
                     */
                    bool NRSHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KPS “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetKPS() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KPS “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKPS(const std::string& _kPS);

                    /**
                     * 判断参数 KPS 是否已赋值
                     * @return KPS 是否已赋值
                     */
                    bool KPSHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeathDate “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeathDate() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeathDate “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeathDate(const std::string& _deathDate);

                    /**
                     * 判断参数 DeathDate 是否已赋值
                     * @return DeathDate 是否已赋值
                     */
                    bool DeathDateHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelapseDate “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRelapseDate() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RelapseDate “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRelapseDate(const std::string& _relapseDate);

                    /**
                     * 判断参数 RelapseDate 是否已赋值
                     * @return RelapseDate 是否已赋值
                     */
                    bool RelapseDateHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObservationDays “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetObservationDays() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ObservationDays “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetObservationDays(const std::string& _observationDays);

                    /**
                     * 判断参数 ObservationDays 是否已赋值
                     * @return ObservationDays 是否已赋值
                     */
                    bool ObservationDaysHasBeenSet() const;

                private:

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dmissionCondition;
                    bool m_dmissionConditionHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chiefComplaint;
                    bool m_chiefComplaintHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diseasePresent;
                    bool m_diseasePresentHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_symptomsAndSigns;
                    bool m_symptomsAndSignsHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_auxiliaryExamination;
                    bool m_auxiliaryExaminationHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bodyExamination;
                    bool m_bodyExaminationHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specialistExamination;
                    bool m_specialistExaminationHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mentalExamination;
                    bool m_mentalExaminationHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkRecord;
                    bool m_checkRecordHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inspectResult;
                    bool m_inspectResultHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_incisionHealing;
                    bool m_incisionHealingHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_treatmentSuggestion;
                    bool m_treatmentSuggestionHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_followUpRequirements;
                    bool m_followUpRequirementsHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkAndTreatmentProcess;
                    bool m_checkAndTreatmentProcessHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_surgeryCondition;
                    bool m_surgeryConditionHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_conditionChanges;
                    bool m_conditionChangesHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dischargeCondition;
                    bool m_dischargeConditionHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pTNM;
                    bool m_pTNMHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pTNMM;
                    bool m_pTNMMHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pTNMN;
                    bool m_pTNMNHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pTNMT;
                    bool m_pTNMTHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eCOG;
                    bool m_eCOGHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nRS;
                    bool m_nRSHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kPS;
                    bool m_kPSHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deathDate;
                    bool m_deathDateHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relapseDate;
                    bool m_relapseDateHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_observationDays;
                    bool m_observationDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_TREATMENTRECORD_H_
