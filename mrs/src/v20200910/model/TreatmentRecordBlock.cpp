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

#include <tencentcloud/mrs/v20200910/model/TreatmentRecordBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

TreatmentRecordBlock::TreatmentRecordBlock() :
    m_immunohistochemistryHasBeenSet(false),
    m_chiefComplaintHasBeenSet(false),
    m_admissionConditionHasBeenSet(false),
    m_bodyExaminationHasBeenSet(false),
    m_admissionDiagnosisHasBeenSet(false),
    m_admissionTraditionalDiagnosisHasBeenSet(false),
    m_admissionModernDiagnosisHasBeenSet(false),
    m_pathologicalDiagnosisHasBeenSet(false),
    m_diseasePresentHasBeenSet(false),
    m_symptomsAndSignsHasBeenSet(false),
    m_auxiliaryExaminationHasBeenSet(false),
    m_specialistExaminationHasBeenSet(false),
    m_mentalExaminationHasBeenSet(false),
    m_checkRecordHasBeenSet(false),
    m_inspectResultHasBeenSet(false),
    m_checkAndTreatmentProcessHasBeenSet(false),
    m_surgeryConditionHasBeenSet(false),
    m_incisionHealingHasBeenSet(false),
    m_dischargeDiagnosisHasBeenSet(false),
    m_dischargeTraditionalDiagnosisHasBeenSet(false),
    m_dischargeModernDiagnosisHasBeenSet(false),
    m_dischargeConditionHasBeenSet(false),
    m_dischargeInstructionsHasBeenSet(false),
    m_treatmentSuggestionHasBeenSet(false),
    m_followUpRequirementsHasBeenSet(false),
    m_conditionChangesHasBeenSet(false),
    m_pulmonaryArterySystolicPressureHasBeenSet(false),
    m_bCLCHasBeenSet(false),
    m_pTNMHasBeenSet(false),
    m_eCOGHasBeenSet(false),
    m_nRSHasBeenSet(false),
    m_kPSHasBeenSet(false),
    m_cancerstagingHasBeenSet(false),
    m_deathDateHasBeenSet(false),
    m_relapseDateHasBeenSet(false),
    m_observationDaysHasBeenSet(false),
    m_incisionHealingTextHasBeenSet(false),
    m_auxiliaryExaminationTextHasBeenSet(false),
    m_specialExamTextHasBeenSet(false),
    m_outpatientDiagnosisTextHasBeenSet(false),
    m_admissionConditionTextHasBeenSet(false),
    m_checkAndTreatmentProcessTextHasBeenSet(false),
    m_symptomsAndSignsTextHasBeenSet(false),
    m_dischargeInstructionsTextHasBeenSet(false),
    m_admissionDiagnosisTextHasBeenSet(false),
    m_surgeryConditionTextHasBeenSet(false),
    m_pathologicalDiagnosisTextHasBeenSet(false),
    m_dischargeConditionTextHasBeenSet(false),
    m_checkRecordTextHasBeenSet(false),
    m_chiefComplaintTextHasBeenSet(false),
    m_dischargeDiagnosisTextHasBeenSet(false)
{
}

CoreInternalOutcome TreatmentRecordBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Immunohistochemistry") && !value["Immunohistochemistry"].IsNull())
    {
        if (!value["Immunohistochemistry"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.Immunohistochemistry` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_immunohistochemistry.Deserialize(value["Immunohistochemistry"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_immunohistochemistryHasBeenSet = true;
    }

    if (value.HasMember("ChiefComplaint") && !value["ChiefComplaint"].IsNull())
    {
        if (!value["ChiefComplaint"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.ChiefComplaint` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_chiefComplaint.Deserialize(value["ChiefComplaint"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_chiefComplaintHasBeenSet = true;
    }

    if (value.HasMember("AdmissionCondition") && !value["AdmissionCondition"].IsNull())
    {
        if (!value["AdmissionCondition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.AdmissionCondition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_admissionCondition.Deserialize(value["AdmissionCondition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_admissionConditionHasBeenSet = true;
    }

    if (value.HasMember("BodyExamination") && !value["BodyExamination"].IsNull())
    {
        if (!value["BodyExamination"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.BodyExamination` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bodyExamination.Deserialize(value["BodyExamination"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bodyExaminationHasBeenSet = true;
    }

    if (value.HasMember("AdmissionDiagnosis") && !value["AdmissionDiagnosis"].IsNull())
    {
        if (!value["AdmissionDiagnosis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.AdmissionDiagnosis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_admissionDiagnosis.Deserialize(value["AdmissionDiagnosis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_admissionDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("AdmissionTraditionalDiagnosis") && !value["AdmissionTraditionalDiagnosis"].IsNull())
    {
        if (!value["AdmissionTraditionalDiagnosis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.AdmissionTraditionalDiagnosis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_admissionTraditionalDiagnosis.Deserialize(value["AdmissionTraditionalDiagnosis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_admissionTraditionalDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("AdmissionModernDiagnosis") && !value["AdmissionModernDiagnosis"].IsNull())
    {
        if (!value["AdmissionModernDiagnosis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.AdmissionModernDiagnosis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_admissionModernDiagnosis.Deserialize(value["AdmissionModernDiagnosis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_admissionModernDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("PathologicalDiagnosis") && !value["PathologicalDiagnosis"].IsNull())
    {
        if (!value["PathologicalDiagnosis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.PathologicalDiagnosis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pathologicalDiagnosis.Deserialize(value["PathologicalDiagnosis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pathologicalDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("DiseasePresent") && !value["DiseasePresent"].IsNull())
    {
        if (!value["DiseasePresent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.DiseasePresent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diseasePresent.Deserialize(value["DiseasePresent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diseasePresentHasBeenSet = true;
    }

    if (value.HasMember("SymptomsAndSigns") && !value["SymptomsAndSigns"].IsNull())
    {
        if (!value["SymptomsAndSigns"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.SymptomsAndSigns` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_symptomsAndSigns.Deserialize(value["SymptomsAndSigns"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_symptomsAndSignsHasBeenSet = true;
    }

    if (value.HasMember("AuxiliaryExamination") && !value["AuxiliaryExamination"].IsNull())
    {
        if (!value["AuxiliaryExamination"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.AuxiliaryExamination` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_auxiliaryExamination.Deserialize(value["AuxiliaryExamination"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_auxiliaryExaminationHasBeenSet = true;
    }

    if (value.HasMember("SpecialistExamination") && !value["SpecialistExamination"].IsNull())
    {
        if (!value["SpecialistExamination"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.SpecialistExamination` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_specialistExamination.Deserialize(value["SpecialistExamination"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_specialistExaminationHasBeenSet = true;
    }

    if (value.HasMember("MentalExamination") && !value["MentalExamination"].IsNull())
    {
        if (!value["MentalExamination"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.MentalExamination` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mentalExamination.Deserialize(value["MentalExamination"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mentalExaminationHasBeenSet = true;
    }

    if (value.HasMember("CheckRecord") && !value["CheckRecord"].IsNull())
    {
        if (!value["CheckRecord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.CheckRecord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_checkRecord.Deserialize(value["CheckRecord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_checkRecordHasBeenSet = true;
    }

    if (value.HasMember("InspectResult") && !value["InspectResult"].IsNull())
    {
        if (!value["InspectResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.InspectResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inspectResult.Deserialize(value["InspectResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inspectResultHasBeenSet = true;
    }

    if (value.HasMember("CheckAndTreatmentProcess") && !value["CheckAndTreatmentProcess"].IsNull())
    {
        if (!value["CheckAndTreatmentProcess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.CheckAndTreatmentProcess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_checkAndTreatmentProcess.Deserialize(value["CheckAndTreatmentProcess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_checkAndTreatmentProcessHasBeenSet = true;
    }

    if (value.HasMember("SurgeryCondition") && !value["SurgeryCondition"].IsNull())
    {
        if (!value["SurgeryCondition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.SurgeryCondition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_surgeryCondition.Deserialize(value["SurgeryCondition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_surgeryConditionHasBeenSet = true;
    }

    if (value.HasMember("IncisionHealing") && !value["IncisionHealing"].IsNull())
    {
        if (!value["IncisionHealing"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.IncisionHealing` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_incisionHealing.Deserialize(value["IncisionHealing"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_incisionHealingHasBeenSet = true;
    }

    if (value.HasMember("DischargeDiagnosis") && !value["DischargeDiagnosis"].IsNull())
    {
        if (!value["DischargeDiagnosis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.DischargeDiagnosis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dischargeDiagnosis.Deserialize(value["DischargeDiagnosis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dischargeDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("DischargeTraditionalDiagnosis") && !value["DischargeTraditionalDiagnosis"].IsNull())
    {
        if (!value["DischargeTraditionalDiagnosis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.DischargeTraditionalDiagnosis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dischargeTraditionalDiagnosis.Deserialize(value["DischargeTraditionalDiagnosis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dischargeTraditionalDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("DischargeModernDiagnosis") && !value["DischargeModernDiagnosis"].IsNull())
    {
        if (!value["DischargeModernDiagnosis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.DischargeModernDiagnosis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dischargeModernDiagnosis.Deserialize(value["DischargeModernDiagnosis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dischargeModernDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("DischargeCondition") && !value["DischargeCondition"].IsNull())
    {
        if (!value["DischargeCondition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.DischargeCondition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dischargeCondition.Deserialize(value["DischargeCondition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dischargeConditionHasBeenSet = true;
    }

    if (value.HasMember("DischargeInstructions") && !value["DischargeInstructions"].IsNull())
    {
        if (!value["DischargeInstructions"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.DischargeInstructions` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dischargeInstructions.Deserialize(value["DischargeInstructions"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dischargeInstructionsHasBeenSet = true;
    }

    if (value.HasMember("TreatmentSuggestion") && !value["TreatmentSuggestion"].IsNull())
    {
        if (!value["TreatmentSuggestion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.TreatmentSuggestion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_treatmentSuggestion.Deserialize(value["TreatmentSuggestion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_treatmentSuggestionHasBeenSet = true;
    }

    if (value.HasMember("FollowUpRequirements") && !value["FollowUpRequirements"].IsNull())
    {
        if (!value["FollowUpRequirements"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.FollowUpRequirements` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_followUpRequirements.Deserialize(value["FollowUpRequirements"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_followUpRequirementsHasBeenSet = true;
    }

    if (value.HasMember("ConditionChanges") && !value["ConditionChanges"].IsNull())
    {
        if (!value["ConditionChanges"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.ConditionChanges` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_conditionChanges.Deserialize(value["ConditionChanges"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conditionChangesHasBeenSet = true;
    }

    if (value.HasMember("PulmonaryArterySystolicPressure") && !value["PulmonaryArterySystolicPressure"].IsNull())
    {
        if (!value["PulmonaryArterySystolicPressure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.PulmonaryArterySystolicPressure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pulmonaryArterySystolicPressure.Deserialize(value["PulmonaryArterySystolicPressure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pulmonaryArterySystolicPressureHasBeenSet = true;
    }

    if (value.HasMember("BCLC") && !value["BCLC"].IsNull())
    {
        if (!value["BCLC"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.BCLC` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bCLC.Deserialize(value["BCLC"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bCLCHasBeenSet = true;
    }

    if (value.HasMember("PTNM") && !value["PTNM"].IsNull())
    {
        if (!value["PTNM"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.PTNM` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pTNM.Deserialize(value["PTNM"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pTNMHasBeenSet = true;
    }

    if (value.HasMember("ECOG") && !value["ECOG"].IsNull())
    {
        if (!value["ECOG"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.ECOG` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eCOG.Deserialize(value["ECOG"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eCOGHasBeenSet = true;
    }

    if (value.HasMember("NRS") && !value["NRS"].IsNull())
    {
        if (!value["NRS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.NRS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nRS.Deserialize(value["NRS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nRSHasBeenSet = true;
    }

    if (value.HasMember("KPS") && !value["KPS"].IsNull())
    {
        if (!value["KPS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.KPS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kPS.Deserialize(value["KPS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kPSHasBeenSet = true;
    }

    if (value.HasMember("Cancerstaging") && !value["Cancerstaging"].IsNull())
    {
        if (!value["Cancerstaging"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.Cancerstaging` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cancerstaging.Deserialize(value["Cancerstaging"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cancerstagingHasBeenSet = true;
    }

    if (value.HasMember("DeathDate") && !value["DeathDate"].IsNull())
    {
        if (!value["DeathDate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.DeathDate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deathDate.Deserialize(value["DeathDate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deathDateHasBeenSet = true;
    }

    if (value.HasMember("RelapseDate") && !value["RelapseDate"].IsNull())
    {
        if (!value["RelapseDate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.RelapseDate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_relapseDate.Deserialize(value["RelapseDate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_relapseDateHasBeenSet = true;
    }

    if (value.HasMember("ObservationDays") && !value["ObservationDays"].IsNull())
    {
        if (!value["ObservationDays"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.ObservationDays` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_observationDays.Deserialize(value["ObservationDays"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_observationDaysHasBeenSet = true;
    }

    if (value.HasMember("IncisionHealingText") && !value["IncisionHealingText"].IsNull())
    {
        if (!value["IncisionHealingText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.IncisionHealingText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incisionHealingText = string(value["IncisionHealingText"].GetString());
        m_incisionHealingTextHasBeenSet = true;
    }

    if (value.HasMember("AuxiliaryExaminationText") && !value["AuxiliaryExaminationText"].IsNull())
    {
        if (!value["AuxiliaryExaminationText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.AuxiliaryExaminationText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auxiliaryExaminationText = string(value["AuxiliaryExaminationText"].GetString());
        m_auxiliaryExaminationTextHasBeenSet = true;
    }

    if (value.HasMember("SpecialExamText") && !value["SpecialExamText"].IsNull())
    {
        if (!value["SpecialExamText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.SpecialExamText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specialExamText = string(value["SpecialExamText"].GetString());
        m_specialExamTextHasBeenSet = true;
    }

    if (value.HasMember("OutpatientDiagnosisText") && !value["OutpatientDiagnosisText"].IsNull())
    {
        if (!value["OutpatientDiagnosisText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.OutpatientDiagnosisText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outpatientDiagnosisText = string(value["OutpatientDiagnosisText"].GetString());
        m_outpatientDiagnosisTextHasBeenSet = true;
    }

    if (value.HasMember("AdmissionConditionText") && !value["AdmissionConditionText"].IsNull())
    {
        if (!value["AdmissionConditionText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.AdmissionConditionText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_admissionConditionText = string(value["AdmissionConditionText"].GetString());
        m_admissionConditionTextHasBeenSet = true;
    }

    if (value.HasMember("CheckAndTreatmentProcessText") && !value["CheckAndTreatmentProcessText"].IsNull())
    {
        if (!value["CheckAndTreatmentProcessText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.CheckAndTreatmentProcessText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkAndTreatmentProcessText = string(value["CheckAndTreatmentProcessText"].GetString());
        m_checkAndTreatmentProcessTextHasBeenSet = true;
    }

    if (value.HasMember("SymptomsAndSignsText") && !value["SymptomsAndSignsText"].IsNull())
    {
        if (!value["SymptomsAndSignsText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.SymptomsAndSignsText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symptomsAndSignsText = string(value["SymptomsAndSignsText"].GetString());
        m_symptomsAndSignsTextHasBeenSet = true;
    }

    if (value.HasMember("DischargeInstructionsText") && !value["DischargeInstructionsText"].IsNull())
    {
        if (!value["DischargeInstructionsText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.DischargeInstructionsText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dischargeInstructionsText = string(value["DischargeInstructionsText"].GetString());
        m_dischargeInstructionsTextHasBeenSet = true;
    }

    if (value.HasMember("AdmissionDiagnosisText") && !value["AdmissionDiagnosisText"].IsNull())
    {
        if (!value["AdmissionDiagnosisText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.AdmissionDiagnosisText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_admissionDiagnosisText = string(value["AdmissionDiagnosisText"].GetString());
        m_admissionDiagnosisTextHasBeenSet = true;
    }

    if (value.HasMember("SurgeryConditionText") && !value["SurgeryConditionText"].IsNull())
    {
        if (!value["SurgeryConditionText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.SurgeryConditionText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_surgeryConditionText = string(value["SurgeryConditionText"].GetString());
        m_surgeryConditionTextHasBeenSet = true;
    }

    if (value.HasMember("PathologicalDiagnosisText") && !value["PathologicalDiagnosisText"].IsNull())
    {
        if (!value["PathologicalDiagnosisText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.PathologicalDiagnosisText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathologicalDiagnosisText = string(value["PathologicalDiagnosisText"].GetString());
        m_pathologicalDiagnosisTextHasBeenSet = true;
    }

    if (value.HasMember("DischargeConditionText") && !value["DischargeConditionText"].IsNull())
    {
        if (!value["DischargeConditionText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.DischargeConditionText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dischargeConditionText = string(value["DischargeConditionText"].GetString());
        m_dischargeConditionTextHasBeenSet = true;
    }

    if (value.HasMember("CheckRecordText") && !value["CheckRecordText"].IsNull())
    {
        if (!value["CheckRecordText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.CheckRecordText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkRecordText = string(value["CheckRecordText"].GetString());
        m_checkRecordTextHasBeenSet = true;
    }

    if (value.HasMember("ChiefComplaintText") && !value["ChiefComplaintText"].IsNull())
    {
        if (!value["ChiefComplaintText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.ChiefComplaintText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chiefComplaintText = string(value["ChiefComplaintText"].GetString());
        m_chiefComplaintTextHasBeenSet = true;
    }

    if (value.HasMember("DischargeDiagnosisText") && !value["DischargeDiagnosisText"].IsNull())
    {
        if (!value["DischargeDiagnosisText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecordBlock.DischargeDiagnosisText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dischargeDiagnosisText = string(value["DischargeDiagnosisText"].GetString());
        m_dischargeDiagnosisTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TreatmentRecordBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_immunohistochemistryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Immunohistochemistry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_immunohistochemistry.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_chiefComplaintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChiefComplaint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chiefComplaint.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_admissionConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdmissionCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_admissionCondition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bodyExaminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyExamination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bodyExamination.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_admissionDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdmissionDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_admissionDiagnosis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_admissionTraditionalDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdmissionTraditionalDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_admissionTraditionalDiagnosis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_admissionModernDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdmissionModernDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_admissionModernDiagnosis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pathologicalDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathologicalDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pathologicalDiagnosis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diseasePresentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseasePresent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diseasePresent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_symptomsAndSignsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymptomsAndSigns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_symptomsAndSigns.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_auxiliaryExaminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuxiliaryExamination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_auxiliaryExamination.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_specialistExaminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecialistExamination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_specialistExamination.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mentalExaminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MentalExamination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mentalExamination.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_checkRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_checkRecord.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inspectResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InspectResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inspectResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_checkAndTreatmentProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAndTreatmentProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_checkAndTreatmentProcess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_surgeryConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SurgeryCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_surgeryCondition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_incisionHealingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncisionHealing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_incisionHealing.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dischargeDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DischargeDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dischargeDiagnosis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dischargeTraditionalDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DischargeTraditionalDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dischargeTraditionalDiagnosis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dischargeModernDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DischargeModernDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dischargeModernDiagnosis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dischargeConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DischargeCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dischargeCondition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dischargeInstructionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DischargeInstructions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dischargeInstructions.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_treatmentSuggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreatmentSuggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_treatmentSuggestion.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_followUpRequirementsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowUpRequirements";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_followUpRequirements.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_conditionChangesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionChanges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conditionChanges.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pulmonaryArterySystolicPressureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PulmonaryArterySystolicPressure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pulmonaryArterySystolicPressure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bCLCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BCLC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bCLC.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pTNMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PTNM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pTNM.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eCOGHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ECOG";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eCOG.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nRSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NRS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nRS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_kPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kPS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cancerstagingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cancerstaging";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cancerstaging.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deathDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeathDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deathDate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_relapseDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelapseDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_relapseDate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_observationDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObservationDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_observationDays.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_incisionHealingTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncisionHealingText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_incisionHealingText.c_str(), allocator).Move(), allocator);
    }

    if (m_auxiliaryExaminationTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuxiliaryExaminationText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auxiliaryExaminationText.c_str(), allocator).Move(), allocator);
    }

    if (m_specialExamTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecialExamText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specialExamText.c_str(), allocator).Move(), allocator);
    }

    if (m_outpatientDiagnosisTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutpatientDiagnosisText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outpatientDiagnosisText.c_str(), allocator).Move(), allocator);
    }

    if (m_admissionConditionTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdmissionConditionText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_admissionConditionText.c_str(), allocator).Move(), allocator);
    }

    if (m_checkAndTreatmentProcessTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAndTreatmentProcessText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkAndTreatmentProcessText.c_str(), allocator).Move(), allocator);
    }

    if (m_symptomsAndSignsTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymptomsAndSignsText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symptomsAndSignsText.c_str(), allocator).Move(), allocator);
    }

    if (m_dischargeInstructionsTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DischargeInstructionsText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dischargeInstructionsText.c_str(), allocator).Move(), allocator);
    }

    if (m_admissionDiagnosisTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdmissionDiagnosisText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_admissionDiagnosisText.c_str(), allocator).Move(), allocator);
    }

    if (m_surgeryConditionTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SurgeryConditionText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_surgeryConditionText.c_str(), allocator).Move(), allocator);
    }

    if (m_pathologicalDiagnosisTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathologicalDiagnosisText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathologicalDiagnosisText.c_str(), allocator).Move(), allocator);
    }

    if (m_dischargeConditionTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DischargeConditionText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dischargeConditionText.c_str(), allocator).Move(), allocator);
    }

    if (m_checkRecordTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckRecordText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkRecordText.c_str(), allocator).Move(), allocator);
    }

    if (m_chiefComplaintTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChiefComplaintText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chiefComplaintText.c_str(), allocator).Move(), allocator);
    }

    if (m_dischargeDiagnosisTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DischargeDiagnosisText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dischargeDiagnosisText.c_str(), allocator).Move(), allocator);
    }

}


ImmunohistochemistryBlock TreatmentRecordBlock::GetImmunohistochemistry() const
{
    return m_immunohistochemistry;
}

void TreatmentRecordBlock::SetImmunohistochemistry(const ImmunohistochemistryBlock& _immunohistochemistry)
{
    m_immunohistochemistry = _immunohistochemistry;
    m_immunohistochemistryHasBeenSet = true;
}

bool TreatmentRecordBlock::ImmunohistochemistryHasBeenSet() const
{
    return m_immunohistochemistryHasBeenSet;
}

ChiefComplaintBlock TreatmentRecordBlock::GetChiefComplaint() const
{
    return m_chiefComplaint;
}

void TreatmentRecordBlock::SetChiefComplaint(const ChiefComplaintBlock& _chiefComplaint)
{
    m_chiefComplaint = _chiefComplaint;
    m_chiefComplaintHasBeenSet = true;
}

bool TreatmentRecordBlock::ChiefComplaintHasBeenSet() const
{
    return m_chiefComplaintHasBeenSet;
}

AdmissionConditionBlock TreatmentRecordBlock::GetAdmissionCondition() const
{
    return m_admissionCondition;
}

void TreatmentRecordBlock::SetAdmissionCondition(const AdmissionConditionBlock& _admissionCondition)
{
    m_admissionCondition = _admissionCondition;
    m_admissionConditionHasBeenSet = true;
}

bool TreatmentRecordBlock::AdmissionConditionHasBeenSet() const
{
    return m_admissionConditionHasBeenSet;
}

BodyExaminationBlock TreatmentRecordBlock::GetBodyExamination() const
{
    return m_bodyExamination;
}

void TreatmentRecordBlock::SetBodyExamination(const BodyExaminationBlock& _bodyExamination)
{
    m_bodyExamination = _bodyExamination;
    m_bodyExaminationHasBeenSet = true;
}

bool TreatmentRecordBlock::BodyExaminationHasBeenSet() const
{
    return m_bodyExaminationHasBeenSet;
}

AdmissionDiagnosisBlock TreatmentRecordBlock::GetAdmissionDiagnosis() const
{
    return m_admissionDiagnosis;
}

void TreatmentRecordBlock::SetAdmissionDiagnosis(const AdmissionDiagnosisBlock& _admissionDiagnosis)
{
    m_admissionDiagnosis = _admissionDiagnosis;
    m_admissionDiagnosisHasBeenSet = true;
}

bool TreatmentRecordBlock::AdmissionDiagnosisHasBeenSet() const
{
    return m_admissionDiagnosisHasBeenSet;
}

AdmissionDiagnosisBlock TreatmentRecordBlock::GetAdmissionTraditionalDiagnosis() const
{
    return m_admissionTraditionalDiagnosis;
}

void TreatmentRecordBlock::SetAdmissionTraditionalDiagnosis(const AdmissionDiagnosisBlock& _admissionTraditionalDiagnosis)
{
    m_admissionTraditionalDiagnosis = _admissionTraditionalDiagnosis;
    m_admissionTraditionalDiagnosisHasBeenSet = true;
}

bool TreatmentRecordBlock::AdmissionTraditionalDiagnosisHasBeenSet() const
{
    return m_admissionTraditionalDiagnosisHasBeenSet;
}

AdmissionDiagnosisBlock TreatmentRecordBlock::GetAdmissionModernDiagnosis() const
{
    return m_admissionModernDiagnosis;
}

void TreatmentRecordBlock::SetAdmissionModernDiagnosis(const AdmissionDiagnosisBlock& _admissionModernDiagnosis)
{
    m_admissionModernDiagnosis = _admissionModernDiagnosis;
    m_admissionModernDiagnosisHasBeenSet = true;
}

bool TreatmentRecordBlock::AdmissionModernDiagnosisHasBeenSet() const
{
    return m_admissionModernDiagnosisHasBeenSet;
}

PathologicalDiagnosisBlock TreatmentRecordBlock::GetPathologicalDiagnosis() const
{
    return m_pathologicalDiagnosis;
}

void TreatmentRecordBlock::SetPathologicalDiagnosis(const PathologicalDiagnosisBlock& _pathologicalDiagnosis)
{
    m_pathologicalDiagnosis = _pathologicalDiagnosis;
    m_pathologicalDiagnosisHasBeenSet = true;
}

bool TreatmentRecordBlock::PathologicalDiagnosisHasBeenSet() const
{
    return m_pathologicalDiagnosisHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetDiseasePresent() const
{
    return m_diseasePresent;
}

void TreatmentRecordBlock::SetDiseasePresent(const DiseasePresentBlock& _diseasePresent)
{
    m_diseasePresent = _diseasePresent;
    m_diseasePresentHasBeenSet = true;
}

bool TreatmentRecordBlock::DiseasePresentHasBeenSet() const
{
    return m_diseasePresentHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetSymptomsAndSigns() const
{
    return m_symptomsAndSigns;
}

void TreatmentRecordBlock::SetSymptomsAndSigns(const DiseasePresentBlock& _symptomsAndSigns)
{
    m_symptomsAndSigns = _symptomsAndSigns;
    m_symptomsAndSignsHasBeenSet = true;
}

bool TreatmentRecordBlock::SymptomsAndSignsHasBeenSet() const
{
    return m_symptomsAndSignsHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetAuxiliaryExamination() const
{
    return m_auxiliaryExamination;
}

void TreatmentRecordBlock::SetAuxiliaryExamination(const DiseasePresentBlock& _auxiliaryExamination)
{
    m_auxiliaryExamination = _auxiliaryExamination;
    m_auxiliaryExaminationHasBeenSet = true;
}

bool TreatmentRecordBlock::AuxiliaryExaminationHasBeenSet() const
{
    return m_auxiliaryExaminationHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetSpecialistExamination() const
{
    return m_specialistExamination;
}

void TreatmentRecordBlock::SetSpecialistExamination(const DiseasePresentBlock& _specialistExamination)
{
    m_specialistExamination = _specialistExamination;
    m_specialistExaminationHasBeenSet = true;
}

bool TreatmentRecordBlock::SpecialistExaminationHasBeenSet() const
{
    return m_specialistExaminationHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetMentalExamination() const
{
    return m_mentalExamination;
}

void TreatmentRecordBlock::SetMentalExamination(const DiseasePresentBlock& _mentalExamination)
{
    m_mentalExamination = _mentalExamination;
    m_mentalExaminationHasBeenSet = true;
}

bool TreatmentRecordBlock::MentalExaminationHasBeenSet() const
{
    return m_mentalExaminationHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetCheckRecord() const
{
    return m_checkRecord;
}

void TreatmentRecordBlock::SetCheckRecord(const DiseasePresentBlock& _checkRecord)
{
    m_checkRecord = _checkRecord;
    m_checkRecordHasBeenSet = true;
}

bool TreatmentRecordBlock::CheckRecordHasBeenSet() const
{
    return m_checkRecordHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetInspectResult() const
{
    return m_inspectResult;
}

void TreatmentRecordBlock::SetInspectResult(const DiseasePresentBlock& _inspectResult)
{
    m_inspectResult = _inspectResult;
    m_inspectResultHasBeenSet = true;
}

bool TreatmentRecordBlock::InspectResultHasBeenSet() const
{
    return m_inspectResultHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetCheckAndTreatmentProcess() const
{
    return m_checkAndTreatmentProcess;
}

void TreatmentRecordBlock::SetCheckAndTreatmentProcess(const DiseasePresentBlock& _checkAndTreatmentProcess)
{
    m_checkAndTreatmentProcess = _checkAndTreatmentProcess;
    m_checkAndTreatmentProcessHasBeenSet = true;
}

bool TreatmentRecordBlock::CheckAndTreatmentProcessHasBeenSet() const
{
    return m_checkAndTreatmentProcessHasBeenSet;
}

SurgeryConditionBlock TreatmentRecordBlock::GetSurgeryCondition() const
{
    return m_surgeryCondition;
}

void TreatmentRecordBlock::SetSurgeryCondition(const SurgeryConditionBlock& _surgeryCondition)
{
    m_surgeryCondition = _surgeryCondition;
    m_surgeryConditionHasBeenSet = true;
}

bool TreatmentRecordBlock::SurgeryConditionHasBeenSet() const
{
    return m_surgeryConditionHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetIncisionHealing() const
{
    return m_incisionHealing;
}

void TreatmentRecordBlock::SetIncisionHealing(const DiseasePresentBlock& _incisionHealing)
{
    m_incisionHealing = _incisionHealing;
    m_incisionHealingHasBeenSet = true;
}

bool TreatmentRecordBlock::IncisionHealingHasBeenSet() const
{
    return m_incisionHealingHasBeenSet;
}

DischargeDiagnosisBlock TreatmentRecordBlock::GetDischargeDiagnosis() const
{
    return m_dischargeDiagnosis;
}

void TreatmentRecordBlock::SetDischargeDiagnosis(const DischargeDiagnosisBlock& _dischargeDiagnosis)
{
    m_dischargeDiagnosis = _dischargeDiagnosis;
    m_dischargeDiagnosisHasBeenSet = true;
}

bool TreatmentRecordBlock::DischargeDiagnosisHasBeenSet() const
{
    return m_dischargeDiagnosisHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetDischargeTraditionalDiagnosis() const
{
    return m_dischargeTraditionalDiagnosis;
}

void TreatmentRecordBlock::SetDischargeTraditionalDiagnosis(const DiseasePresentBlock& _dischargeTraditionalDiagnosis)
{
    m_dischargeTraditionalDiagnosis = _dischargeTraditionalDiagnosis;
    m_dischargeTraditionalDiagnosisHasBeenSet = true;
}

bool TreatmentRecordBlock::DischargeTraditionalDiagnosisHasBeenSet() const
{
    return m_dischargeTraditionalDiagnosisHasBeenSet;
}

DischargeDiagnosisBlock TreatmentRecordBlock::GetDischargeModernDiagnosis() const
{
    return m_dischargeModernDiagnosis;
}

void TreatmentRecordBlock::SetDischargeModernDiagnosis(const DischargeDiagnosisBlock& _dischargeModernDiagnosis)
{
    m_dischargeModernDiagnosis = _dischargeModernDiagnosis;
    m_dischargeModernDiagnosisHasBeenSet = true;
}

bool TreatmentRecordBlock::DischargeModernDiagnosisHasBeenSet() const
{
    return m_dischargeModernDiagnosisHasBeenSet;
}

DischargeConditionBlock TreatmentRecordBlock::GetDischargeCondition() const
{
    return m_dischargeCondition;
}

void TreatmentRecordBlock::SetDischargeCondition(const DischargeConditionBlock& _dischargeCondition)
{
    m_dischargeCondition = _dischargeCondition;
    m_dischargeConditionHasBeenSet = true;
}

bool TreatmentRecordBlock::DischargeConditionHasBeenSet() const
{
    return m_dischargeConditionHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetDischargeInstructions() const
{
    return m_dischargeInstructions;
}

void TreatmentRecordBlock::SetDischargeInstructions(const DiseasePresentBlock& _dischargeInstructions)
{
    m_dischargeInstructions = _dischargeInstructions;
    m_dischargeInstructionsHasBeenSet = true;
}

bool TreatmentRecordBlock::DischargeInstructionsHasBeenSet() const
{
    return m_dischargeInstructionsHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetTreatmentSuggestion() const
{
    return m_treatmentSuggestion;
}

void TreatmentRecordBlock::SetTreatmentSuggestion(const DiseasePresentBlock& _treatmentSuggestion)
{
    m_treatmentSuggestion = _treatmentSuggestion;
    m_treatmentSuggestionHasBeenSet = true;
}

bool TreatmentRecordBlock::TreatmentSuggestionHasBeenSet() const
{
    return m_treatmentSuggestionHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetFollowUpRequirements() const
{
    return m_followUpRequirements;
}

void TreatmentRecordBlock::SetFollowUpRequirements(const DiseasePresentBlock& _followUpRequirements)
{
    m_followUpRequirements = _followUpRequirements;
    m_followUpRequirementsHasBeenSet = true;
}

bool TreatmentRecordBlock::FollowUpRequirementsHasBeenSet() const
{
    return m_followUpRequirementsHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetConditionChanges() const
{
    return m_conditionChanges;
}

void TreatmentRecordBlock::SetConditionChanges(const DiseasePresentBlock& _conditionChanges)
{
    m_conditionChanges = _conditionChanges;
    m_conditionChangesHasBeenSet = true;
}

bool TreatmentRecordBlock::ConditionChangesHasBeenSet() const
{
    return m_conditionChangesHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetPulmonaryArterySystolicPressure() const
{
    return m_pulmonaryArterySystolicPressure;
}

void TreatmentRecordBlock::SetPulmonaryArterySystolicPressure(const DiseasePresentBlock& _pulmonaryArterySystolicPressure)
{
    m_pulmonaryArterySystolicPressure = _pulmonaryArterySystolicPressure;
    m_pulmonaryArterySystolicPressureHasBeenSet = true;
}

bool TreatmentRecordBlock::PulmonaryArterySystolicPressureHasBeenSet() const
{
    return m_pulmonaryArterySystolicPressureHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetBCLC() const
{
    return m_bCLC;
}

void TreatmentRecordBlock::SetBCLC(const DiseasePresentBlock& _bCLC)
{
    m_bCLC = _bCLC;
    m_bCLCHasBeenSet = true;
}

bool TreatmentRecordBlock::BCLCHasBeenSet() const
{
    return m_bCLCHasBeenSet;
}

PTNMBlock TreatmentRecordBlock::GetPTNM() const
{
    return m_pTNM;
}

void TreatmentRecordBlock::SetPTNM(const PTNMBlock& _pTNM)
{
    m_pTNM = _pTNM;
    m_pTNMHasBeenSet = true;
}

bool TreatmentRecordBlock::PTNMHasBeenSet() const
{
    return m_pTNMHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetECOG() const
{
    return m_eCOG;
}

void TreatmentRecordBlock::SetECOG(const DiseasePresentBlock& _eCOG)
{
    m_eCOG = _eCOG;
    m_eCOGHasBeenSet = true;
}

bool TreatmentRecordBlock::ECOGHasBeenSet() const
{
    return m_eCOGHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetNRS() const
{
    return m_nRS;
}

void TreatmentRecordBlock::SetNRS(const DiseasePresentBlock& _nRS)
{
    m_nRS = _nRS;
    m_nRSHasBeenSet = true;
}

bool TreatmentRecordBlock::NRSHasBeenSet() const
{
    return m_nRSHasBeenSet;
}

DiseasePresentBlock TreatmentRecordBlock::GetKPS() const
{
    return m_kPS;
}

void TreatmentRecordBlock::SetKPS(const DiseasePresentBlock& _kPS)
{
    m_kPS = _kPS;
    m_kPSHasBeenSet = true;
}

bool TreatmentRecordBlock::KPSHasBeenSet() const
{
    return m_kPSHasBeenSet;
}

ClinicalStaging TreatmentRecordBlock::GetCancerstaging() const
{
    return m_cancerstaging;
}

void TreatmentRecordBlock::SetCancerstaging(const ClinicalStaging& _cancerstaging)
{
    m_cancerstaging = _cancerstaging;
    m_cancerstagingHasBeenSet = true;
}

bool TreatmentRecordBlock::CancerstagingHasBeenSet() const
{
    return m_cancerstagingHasBeenSet;
}

DeathDateBlock TreatmentRecordBlock::GetDeathDate() const
{
    return m_deathDate;
}

void TreatmentRecordBlock::SetDeathDate(const DeathDateBlock& _deathDate)
{
    m_deathDate = _deathDate;
    m_deathDateHasBeenSet = true;
}

bool TreatmentRecordBlock::DeathDateHasBeenSet() const
{
    return m_deathDateHasBeenSet;
}

RelapseDateBlock TreatmentRecordBlock::GetRelapseDate() const
{
    return m_relapseDate;
}

void TreatmentRecordBlock::SetRelapseDate(const RelapseDateBlock& _relapseDate)
{
    m_relapseDate = _relapseDate;
    m_relapseDateHasBeenSet = true;
}

bool TreatmentRecordBlock::RelapseDateHasBeenSet() const
{
    return m_relapseDateHasBeenSet;
}

DeathDateBlock TreatmentRecordBlock::GetObservationDays() const
{
    return m_observationDays;
}

void TreatmentRecordBlock::SetObservationDays(const DeathDateBlock& _observationDays)
{
    m_observationDays = _observationDays;
    m_observationDaysHasBeenSet = true;
}

bool TreatmentRecordBlock::ObservationDaysHasBeenSet() const
{
    return m_observationDaysHasBeenSet;
}

string TreatmentRecordBlock::GetIncisionHealingText() const
{
    return m_incisionHealingText;
}

void TreatmentRecordBlock::SetIncisionHealingText(const string& _incisionHealingText)
{
    m_incisionHealingText = _incisionHealingText;
    m_incisionHealingTextHasBeenSet = true;
}

bool TreatmentRecordBlock::IncisionHealingTextHasBeenSet() const
{
    return m_incisionHealingTextHasBeenSet;
}

string TreatmentRecordBlock::GetAuxiliaryExaminationText() const
{
    return m_auxiliaryExaminationText;
}

void TreatmentRecordBlock::SetAuxiliaryExaminationText(const string& _auxiliaryExaminationText)
{
    m_auxiliaryExaminationText = _auxiliaryExaminationText;
    m_auxiliaryExaminationTextHasBeenSet = true;
}

bool TreatmentRecordBlock::AuxiliaryExaminationTextHasBeenSet() const
{
    return m_auxiliaryExaminationTextHasBeenSet;
}

string TreatmentRecordBlock::GetSpecialExamText() const
{
    return m_specialExamText;
}

void TreatmentRecordBlock::SetSpecialExamText(const string& _specialExamText)
{
    m_specialExamText = _specialExamText;
    m_specialExamTextHasBeenSet = true;
}

bool TreatmentRecordBlock::SpecialExamTextHasBeenSet() const
{
    return m_specialExamTextHasBeenSet;
}

string TreatmentRecordBlock::GetOutpatientDiagnosisText() const
{
    return m_outpatientDiagnosisText;
}

void TreatmentRecordBlock::SetOutpatientDiagnosisText(const string& _outpatientDiagnosisText)
{
    m_outpatientDiagnosisText = _outpatientDiagnosisText;
    m_outpatientDiagnosisTextHasBeenSet = true;
}

bool TreatmentRecordBlock::OutpatientDiagnosisTextHasBeenSet() const
{
    return m_outpatientDiagnosisTextHasBeenSet;
}

string TreatmentRecordBlock::GetAdmissionConditionText() const
{
    return m_admissionConditionText;
}

void TreatmentRecordBlock::SetAdmissionConditionText(const string& _admissionConditionText)
{
    m_admissionConditionText = _admissionConditionText;
    m_admissionConditionTextHasBeenSet = true;
}

bool TreatmentRecordBlock::AdmissionConditionTextHasBeenSet() const
{
    return m_admissionConditionTextHasBeenSet;
}

string TreatmentRecordBlock::GetCheckAndTreatmentProcessText() const
{
    return m_checkAndTreatmentProcessText;
}

void TreatmentRecordBlock::SetCheckAndTreatmentProcessText(const string& _checkAndTreatmentProcessText)
{
    m_checkAndTreatmentProcessText = _checkAndTreatmentProcessText;
    m_checkAndTreatmentProcessTextHasBeenSet = true;
}

bool TreatmentRecordBlock::CheckAndTreatmentProcessTextHasBeenSet() const
{
    return m_checkAndTreatmentProcessTextHasBeenSet;
}

string TreatmentRecordBlock::GetSymptomsAndSignsText() const
{
    return m_symptomsAndSignsText;
}

void TreatmentRecordBlock::SetSymptomsAndSignsText(const string& _symptomsAndSignsText)
{
    m_symptomsAndSignsText = _symptomsAndSignsText;
    m_symptomsAndSignsTextHasBeenSet = true;
}

bool TreatmentRecordBlock::SymptomsAndSignsTextHasBeenSet() const
{
    return m_symptomsAndSignsTextHasBeenSet;
}

string TreatmentRecordBlock::GetDischargeInstructionsText() const
{
    return m_dischargeInstructionsText;
}

void TreatmentRecordBlock::SetDischargeInstructionsText(const string& _dischargeInstructionsText)
{
    m_dischargeInstructionsText = _dischargeInstructionsText;
    m_dischargeInstructionsTextHasBeenSet = true;
}

bool TreatmentRecordBlock::DischargeInstructionsTextHasBeenSet() const
{
    return m_dischargeInstructionsTextHasBeenSet;
}

string TreatmentRecordBlock::GetAdmissionDiagnosisText() const
{
    return m_admissionDiagnosisText;
}

void TreatmentRecordBlock::SetAdmissionDiagnosisText(const string& _admissionDiagnosisText)
{
    m_admissionDiagnosisText = _admissionDiagnosisText;
    m_admissionDiagnosisTextHasBeenSet = true;
}

bool TreatmentRecordBlock::AdmissionDiagnosisTextHasBeenSet() const
{
    return m_admissionDiagnosisTextHasBeenSet;
}

string TreatmentRecordBlock::GetSurgeryConditionText() const
{
    return m_surgeryConditionText;
}

void TreatmentRecordBlock::SetSurgeryConditionText(const string& _surgeryConditionText)
{
    m_surgeryConditionText = _surgeryConditionText;
    m_surgeryConditionTextHasBeenSet = true;
}

bool TreatmentRecordBlock::SurgeryConditionTextHasBeenSet() const
{
    return m_surgeryConditionTextHasBeenSet;
}

string TreatmentRecordBlock::GetPathologicalDiagnosisText() const
{
    return m_pathologicalDiagnosisText;
}

void TreatmentRecordBlock::SetPathologicalDiagnosisText(const string& _pathologicalDiagnosisText)
{
    m_pathologicalDiagnosisText = _pathologicalDiagnosisText;
    m_pathologicalDiagnosisTextHasBeenSet = true;
}

bool TreatmentRecordBlock::PathologicalDiagnosisTextHasBeenSet() const
{
    return m_pathologicalDiagnosisTextHasBeenSet;
}

string TreatmentRecordBlock::GetDischargeConditionText() const
{
    return m_dischargeConditionText;
}

void TreatmentRecordBlock::SetDischargeConditionText(const string& _dischargeConditionText)
{
    m_dischargeConditionText = _dischargeConditionText;
    m_dischargeConditionTextHasBeenSet = true;
}

bool TreatmentRecordBlock::DischargeConditionTextHasBeenSet() const
{
    return m_dischargeConditionTextHasBeenSet;
}

string TreatmentRecordBlock::GetCheckRecordText() const
{
    return m_checkRecordText;
}

void TreatmentRecordBlock::SetCheckRecordText(const string& _checkRecordText)
{
    m_checkRecordText = _checkRecordText;
    m_checkRecordTextHasBeenSet = true;
}

bool TreatmentRecordBlock::CheckRecordTextHasBeenSet() const
{
    return m_checkRecordTextHasBeenSet;
}

string TreatmentRecordBlock::GetChiefComplaintText() const
{
    return m_chiefComplaintText;
}

void TreatmentRecordBlock::SetChiefComplaintText(const string& _chiefComplaintText)
{
    m_chiefComplaintText = _chiefComplaintText;
    m_chiefComplaintTextHasBeenSet = true;
}

bool TreatmentRecordBlock::ChiefComplaintTextHasBeenSet() const
{
    return m_chiefComplaintTextHasBeenSet;
}

string TreatmentRecordBlock::GetDischargeDiagnosisText() const
{
    return m_dischargeDiagnosisText;
}

void TreatmentRecordBlock::SetDischargeDiagnosisText(const string& _dischargeDiagnosisText)
{
    m_dischargeDiagnosisText = _dischargeDiagnosisText;
    m_dischargeDiagnosisTextHasBeenSet = true;
}

bool TreatmentRecordBlock::DischargeDiagnosisTextHasBeenSet() const
{
    return m_dischargeDiagnosisTextHasBeenSet;
}

