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

#include <tencentcloud/mrs/v20200910/model/TreatmentRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

TreatmentRecord::TreatmentRecord() :
    m_dmissionConditionHasBeenSet(false),
    m_chiefComplaintHasBeenSet(false),
    m_diseasePresentHasBeenSet(false),
    m_symptomsAndSignsHasBeenSet(false),
    m_auxiliaryExaminationHasBeenSet(false),
    m_bodyExaminationHasBeenSet(false),
    m_specialistExaminationHasBeenSet(false),
    m_mentalExaminationHasBeenSet(false),
    m_checkRecordHasBeenSet(false),
    m_inspectResultHasBeenSet(false),
    m_incisionHealingHasBeenSet(false),
    m_treatmentSuggestionHasBeenSet(false),
    m_followUpRequirementsHasBeenSet(false),
    m_checkAndTreatmentProcessHasBeenSet(false),
    m_surgeryConditionHasBeenSet(false),
    m_conditionChangesHasBeenSet(false),
    m_dischargeConditionHasBeenSet(false),
    m_pTNMHasBeenSet(false),
    m_pTNMMHasBeenSet(false),
    m_pTNMNHasBeenSet(false),
    m_pTNMTHasBeenSet(false),
    m_eCOGHasBeenSet(false),
    m_nRSHasBeenSet(false),
    m_kPSHasBeenSet(false),
    m_deathDateHasBeenSet(false),
    m_relapseDateHasBeenSet(false),
    m_observationDaysHasBeenSet(false),
    m_admissionConditionHasBeenSet(false)
{
}

CoreInternalOutcome TreatmentRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DmissionCondition") && !value["DmissionCondition"].IsNull())
    {
        if (!value["DmissionCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.DmissionCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dmissionCondition = string(value["DmissionCondition"].GetString());
        m_dmissionConditionHasBeenSet = true;
    }

    if (value.HasMember("ChiefComplaint") && !value["ChiefComplaint"].IsNull())
    {
        if (!value["ChiefComplaint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.ChiefComplaint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chiefComplaint = string(value["ChiefComplaint"].GetString());
        m_chiefComplaintHasBeenSet = true;
    }

    if (value.HasMember("DiseasePresent") && !value["DiseasePresent"].IsNull())
    {
        if (!value["DiseasePresent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.DiseasePresent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diseasePresent = string(value["DiseasePresent"].GetString());
        m_diseasePresentHasBeenSet = true;
    }

    if (value.HasMember("SymptomsAndSigns") && !value["SymptomsAndSigns"].IsNull())
    {
        if (!value["SymptomsAndSigns"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.SymptomsAndSigns` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symptomsAndSigns = string(value["SymptomsAndSigns"].GetString());
        m_symptomsAndSignsHasBeenSet = true;
    }

    if (value.HasMember("AuxiliaryExamination") && !value["AuxiliaryExamination"].IsNull())
    {
        if (!value["AuxiliaryExamination"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.AuxiliaryExamination` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auxiliaryExamination = string(value["AuxiliaryExamination"].GetString());
        m_auxiliaryExaminationHasBeenSet = true;
    }

    if (value.HasMember("BodyExamination") && !value["BodyExamination"].IsNull())
    {
        if (!value["BodyExamination"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.BodyExamination` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bodyExamination = string(value["BodyExamination"].GetString());
        m_bodyExaminationHasBeenSet = true;
    }

    if (value.HasMember("SpecialistExamination") && !value["SpecialistExamination"].IsNull())
    {
        if (!value["SpecialistExamination"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.SpecialistExamination` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specialistExamination = string(value["SpecialistExamination"].GetString());
        m_specialistExaminationHasBeenSet = true;
    }

    if (value.HasMember("MentalExamination") && !value["MentalExamination"].IsNull())
    {
        if (!value["MentalExamination"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.MentalExamination` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mentalExamination = string(value["MentalExamination"].GetString());
        m_mentalExaminationHasBeenSet = true;
    }

    if (value.HasMember("CheckRecord") && !value["CheckRecord"].IsNull())
    {
        if (!value["CheckRecord"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.CheckRecord` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkRecord = string(value["CheckRecord"].GetString());
        m_checkRecordHasBeenSet = true;
    }

    if (value.HasMember("InspectResult") && !value["InspectResult"].IsNull())
    {
        if (!value["InspectResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.InspectResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inspectResult = string(value["InspectResult"].GetString());
        m_inspectResultHasBeenSet = true;
    }

    if (value.HasMember("IncisionHealing") && !value["IncisionHealing"].IsNull())
    {
        if (!value["IncisionHealing"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.IncisionHealing` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incisionHealing = string(value["IncisionHealing"].GetString());
        m_incisionHealingHasBeenSet = true;
    }

    if (value.HasMember("TreatmentSuggestion") && !value["TreatmentSuggestion"].IsNull())
    {
        if (!value["TreatmentSuggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.TreatmentSuggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treatmentSuggestion = string(value["TreatmentSuggestion"].GetString());
        m_treatmentSuggestionHasBeenSet = true;
    }

    if (value.HasMember("FollowUpRequirements") && !value["FollowUpRequirements"].IsNull())
    {
        if (!value["FollowUpRequirements"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.FollowUpRequirements` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_followUpRequirements = string(value["FollowUpRequirements"].GetString());
        m_followUpRequirementsHasBeenSet = true;
    }

    if (value.HasMember("CheckAndTreatmentProcess") && !value["CheckAndTreatmentProcess"].IsNull())
    {
        if (!value["CheckAndTreatmentProcess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.CheckAndTreatmentProcess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkAndTreatmentProcess = string(value["CheckAndTreatmentProcess"].GetString());
        m_checkAndTreatmentProcessHasBeenSet = true;
    }

    if (value.HasMember("SurgeryCondition") && !value["SurgeryCondition"].IsNull())
    {
        if (!value["SurgeryCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.SurgeryCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_surgeryCondition = string(value["SurgeryCondition"].GetString());
        m_surgeryConditionHasBeenSet = true;
    }

    if (value.HasMember("ConditionChanges") && !value["ConditionChanges"].IsNull())
    {
        if (!value["ConditionChanges"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.ConditionChanges` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conditionChanges = string(value["ConditionChanges"].GetString());
        m_conditionChangesHasBeenSet = true;
    }

    if (value.HasMember("DischargeCondition") && !value["DischargeCondition"].IsNull())
    {
        if (!value["DischargeCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.DischargeCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dischargeCondition = string(value["DischargeCondition"].GetString());
        m_dischargeConditionHasBeenSet = true;
    }

    if (value.HasMember("PTNM") && !value["PTNM"].IsNull())
    {
        if (!value["PTNM"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.PTNM` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pTNM = string(value["PTNM"].GetString());
        m_pTNMHasBeenSet = true;
    }

    if (value.HasMember("PTNMM") && !value["PTNMM"].IsNull())
    {
        if (!value["PTNMM"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.PTNMM` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pTNMM = string(value["PTNMM"].GetString());
        m_pTNMMHasBeenSet = true;
    }

    if (value.HasMember("PTNMN") && !value["PTNMN"].IsNull())
    {
        if (!value["PTNMN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.PTNMN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pTNMN = string(value["PTNMN"].GetString());
        m_pTNMNHasBeenSet = true;
    }

    if (value.HasMember("PTNMT") && !value["PTNMT"].IsNull())
    {
        if (!value["PTNMT"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.PTNMT` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pTNMT = string(value["PTNMT"].GetString());
        m_pTNMTHasBeenSet = true;
    }

    if (value.HasMember("ECOG") && !value["ECOG"].IsNull())
    {
        if (!value["ECOG"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.ECOG` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eCOG = string(value["ECOG"].GetString());
        m_eCOGHasBeenSet = true;
    }

    if (value.HasMember("NRS") && !value["NRS"].IsNull())
    {
        if (!value["NRS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.NRS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nRS = string(value["NRS"].GetString());
        m_nRSHasBeenSet = true;
    }

    if (value.HasMember("KPS") && !value["KPS"].IsNull())
    {
        if (!value["KPS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.KPS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kPS = string(value["KPS"].GetString());
        m_kPSHasBeenSet = true;
    }

    if (value.HasMember("DeathDate") && !value["DeathDate"].IsNull())
    {
        if (!value["DeathDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.DeathDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deathDate = string(value["DeathDate"].GetString());
        m_deathDateHasBeenSet = true;
    }

    if (value.HasMember("RelapseDate") && !value["RelapseDate"].IsNull())
    {
        if (!value["RelapseDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.RelapseDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relapseDate = string(value["RelapseDate"].GetString());
        m_relapseDateHasBeenSet = true;
    }

    if (value.HasMember("ObservationDays") && !value["ObservationDays"].IsNull())
    {
        if (!value["ObservationDays"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.ObservationDays` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_observationDays = string(value["ObservationDays"].GetString());
        m_observationDaysHasBeenSet = true;
    }

    if (value.HasMember("AdmissionCondition") && !value["AdmissionCondition"].IsNull())
    {
        if (!value["AdmissionCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreatmentRecord.AdmissionCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_admissionCondition = string(value["AdmissionCondition"].GetString());
        m_admissionConditionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TreatmentRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dmissionConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DmissionCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dmissionCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_chiefComplaintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChiefComplaint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chiefComplaint.c_str(), allocator).Move(), allocator);
    }

    if (m_diseasePresentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseasePresent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diseasePresent.c_str(), allocator).Move(), allocator);
    }

    if (m_symptomsAndSignsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymptomsAndSigns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symptomsAndSigns.c_str(), allocator).Move(), allocator);
    }

    if (m_auxiliaryExaminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuxiliaryExamination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auxiliaryExamination.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyExaminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyExamination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bodyExamination.c_str(), allocator).Move(), allocator);
    }

    if (m_specialistExaminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecialistExamination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specialistExamination.c_str(), allocator).Move(), allocator);
    }

    if (m_mentalExaminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MentalExamination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mentalExamination.c_str(), allocator).Move(), allocator);
    }

    if (m_checkRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkRecord.c_str(), allocator).Move(), allocator);
    }

    if (m_inspectResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InspectResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inspectResult.c_str(), allocator).Move(), allocator);
    }

    if (m_incisionHealingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncisionHealing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_incisionHealing.c_str(), allocator).Move(), allocator);
    }

    if (m_treatmentSuggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreatmentSuggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treatmentSuggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_followUpRequirementsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowUpRequirements";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_followUpRequirements.c_str(), allocator).Move(), allocator);
    }

    if (m_checkAndTreatmentProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAndTreatmentProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkAndTreatmentProcess.c_str(), allocator).Move(), allocator);
    }

    if (m_surgeryConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SurgeryCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_surgeryCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionChangesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionChanges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conditionChanges.c_str(), allocator).Move(), allocator);
    }

    if (m_dischargeConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DischargeCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dischargeCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_pTNMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PTNM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pTNM.c_str(), allocator).Move(), allocator);
    }

    if (m_pTNMMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PTNMM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pTNMM.c_str(), allocator).Move(), allocator);
    }

    if (m_pTNMNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PTNMN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pTNMN.c_str(), allocator).Move(), allocator);
    }

    if (m_pTNMTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PTNMT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pTNMT.c_str(), allocator).Move(), allocator);
    }

    if (m_eCOGHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ECOG";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eCOG.c_str(), allocator).Move(), allocator);
    }

    if (m_nRSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NRS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nRS.c_str(), allocator).Move(), allocator);
    }

    if (m_kPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kPS.c_str(), allocator).Move(), allocator);
    }

    if (m_deathDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeathDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deathDate.c_str(), allocator).Move(), allocator);
    }

    if (m_relapseDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelapseDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relapseDate.c_str(), allocator).Move(), allocator);
    }

    if (m_observationDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObservationDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_observationDays.c_str(), allocator).Move(), allocator);
    }

    if (m_admissionConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdmissionCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_admissionCondition.c_str(), allocator).Move(), allocator);
    }

}


string TreatmentRecord::GetDmissionCondition() const
{
    return m_dmissionCondition;
}

void TreatmentRecord::SetDmissionCondition(const string& _dmissionCondition)
{
    m_dmissionCondition = _dmissionCondition;
    m_dmissionConditionHasBeenSet = true;
}

bool TreatmentRecord::DmissionConditionHasBeenSet() const
{
    return m_dmissionConditionHasBeenSet;
}

string TreatmentRecord::GetChiefComplaint() const
{
    return m_chiefComplaint;
}

void TreatmentRecord::SetChiefComplaint(const string& _chiefComplaint)
{
    m_chiefComplaint = _chiefComplaint;
    m_chiefComplaintHasBeenSet = true;
}

bool TreatmentRecord::ChiefComplaintHasBeenSet() const
{
    return m_chiefComplaintHasBeenSet;
}

string TreatmentRecord::GetDiseasePresent() const
{
    return m_diseasePresent;
}

void TreatmentRecord::SetDiseasePresent(const string& _diseasePresent)
{
    m_diseasePresent = _diseasePresent;
    m_diseasePresentHasBeenSet = true;
}

bool TreatmentRecord::DiseasePresentHasBeenSet() const
{
    return m_diseasePresentHasBeenSet;
}

string TreatmentRecord::GetSymptomsAndSigns() const
{
    return m_symptomsAndSigns;
}

void TreatmentRecord::SetSymptomsAndSigns(const string& _symptomsAndSigns)
{
    m_symptomsAndSigns = _symptomsAndSigns;
    m_symptomsAndSignsHasBeenSet = true;
}

bool TreatmentRecord::SymptomsAndSignsHasBeenSet() const
{
    return m_symptomsAndSignsHasBeenSet;
}

string TreatmentRecord::GetAuxiliaryExamination() const
{
    return m_auxiliaryExamination;
}

void TreatmentRecord::SetAuxiliaryExamination(const string& _auxiliaryExamination)
{
    m_auxiliaryExamination = _auxiliaryExamination;
    m_auxiliaryExaminationHasBeenSet = true;
}

bool TreatmentRecord::AuxiliaryExaminationHasBeenSet() const
{
    return m_auxiliaryExaminationHasBeenSet;
}

string TreatmentRecord::GetBodyExamination() const
{
    return m_bodyExamination;
}

void TreatmentRecord::SetBodyExamination(const string& _bodyExamination)
{
    m_bodyExamination = _bodyExamination;
    m_bodyExaminationHasBeenSet = true;
}

bool TreatmentRecord::BodyExaminationHasBeenSet() const
{
    return m_bodyExaminationHasBeenSet;
}

string TreatmentRecord::GetSpecialistExamination() const
{
    return m_specialistExamination;
}

void TreatmentRecord::SetSpecialistExamination(const string& _specialistExamination)
{
    m_specialistExamination = _specialistExamination;
    m_specialistExaminationHasBeenSet = true;
}

bool TreatmentRecord::SpecialistExaminationHasBeenSet() const
{
    return m_specialistExaminationHasBeenSet;
}

string TreatmentRecord::GetMentalExamination() const
{
    return m_mentalExamination;
}

void TreatmentRecord::SetMentalExamination(const string& _mentalExamination)
{
    m_mentalExamination = _mentalExamination;
    m_mentalExaminationHasBeenSet = true;
}

bool TreatmentRecord::MentalExaminationHasBeenSet() const
{
    return m_mentalExaminationHasBeenSet;
}

string TreatmentRecord::GetCheckRecord() const
{
    return m_checkRecord;
}

void TreatmentRecord::SetCheckRecord(const string& _checkRecord)
{
    m_checkRecord = _checkRecord;
    m_checkRecordHasBeenSet = true;
}

bool TreatmentRecord::CheckRecordHasBeenSet() const
{
    return m_checkRecordHasBeenSet;
}

string TreatmentRecord::GetInspectResult() const
{
    return m_inspectResult;
}

void TreatmentRecord::SetInspectResult(const string& _inspectResult)
{
    m_inspectResult = _inspectResult;
    m_inspectResultHasBeenSet = true;
}

bool TreatmentRecord::InspectResultHasBeenSet() const
{
    return m_inspectResultHasBeenSet;
}

string TreatmentRecord::GetIncisionHealing() const
{
    return m_incisionHealing;
}

void TreatmentRecord::SetIncisionHealing(const string& _incisionHealing)
{
    m_incisionHealing = _incisionHealing;
    m_incisionHealingHasBeenSet = true;
}

bool TreatmentRecord::IncisionHealingHasBeenSet() const
{
    return m_incisionHealingHasBeenSet;
}

string TreatmentRecord::GetTreatmentSuggestion() const
{
    return m_treatmentSuggestion;
}

void TreatmentRecord::SetTreatmentSuggestion(const string& _treatmentSuggestion)
{
    m_treatmentSuggestion = _treatmentSuggestion;
    m_treatmentSuggestionHasBeenSet = true;
}

bool TreatmentRecord::TreatmentSuggestionHasBeenSet() const
{
    return m_treatmentSuggestionHasBeenSet;
}

string TreatmentRecord::GetFollowUpRequirements() const
{
    return m_followUpRequirements;
}

void TreatmentRecord::SetFollowUpRequirements(const string& _followUpRequirements)
{
    m_followUpRequirements = _followUpRequirements;
    m_followUpRequirementsHasBeenSet = true;
}

bool TreatmentRecord::FollowUpRequirementsHasBeenSet() const
{
    return m_followUpRequirementsHasBeenSet;
}

string TreatmentRecord::GetCheckAndTreatmentProcess() const
{
    return m_checkAndTreatmentProcess;
}

void TreatmentRecord::SetCheckAndTreatmentProcess(const string& _checkAndTreatmentProcess)
{
    m_checkAndTreatmentProcess = _checkAndTreatmentProcess;
    m_checkAndTreatmentProcessHasBeenSet = true;
}

bool TreatmentRecord::CheckAndTreatmentProcessHasBeenSet() const
{
    return m_checkAndTreatmentProcessHasBeenSet;
}

string TreatmentRecord::GetSurgeryCondition() const
{
    return m_surgeryCondition;
}

void TreatmentRecord::SetSurgeryCondition(const string& _surgeryCondition)
{
    m_surgeryCondition = _surgeryCondition;
    m_surgeryConditionHasBeenSet = true;
}

bool TreatmentRecord::SurgeryConditionHasBeenSet() const
{
    return m_surgeryConditionHasBeenSet;
}

string TreatmentRecord::GetConditionChanges() const
{
    return m_conditionChanges;
}

void TreatmentRecord::SetConditionChanges(const string& _conditionChanges)
{
    m_conditionChanges = _conditionChanges;
    m_conditionChangesHasBeenSet = true;
}

bool TreatmentRecord::ConditionChangesHasBeenSet() const
{
    return m_conditionChangesHasBeenSet;
}

string TreatmentRecord::GetDischargeCondition() const
{
    return m_dischargeCondition;
}

void TreatmentRecord::SetDischargeCondition(const string& _dischargeCondition)
{
    m_dischargeCondition = _dischargeCondition;
    m_dischargeConditionHasBeenSet = true;
}

bool TreatmentRecord::DischargeConditionHasBeenSet() const
{
    return m_dischargeConditionHasBeenSet;
}

string TreatmentRecord::GetPTNM() const
{
    return m_pTNM;
}

void TreatmentRecord::SetPTNM(const string& _pTNM)
{
    m_pTNM = _pTNM;
    m_pTNMHasBeenSet = true;
}

bool TreatmentRecord::PTNMHasBeenSet() const
{
    return m_pTNMHasBeenSet;
}

string TreatmentRecord::GetPTNMM() const
{
    return m_pTNMM;
}

void TreatmentRecord::SetPTNMM(const string& _pTNMM)
{
    m_pTNMM = _pTNMM;
    m_pTNMMHasBeenSet = true;
}

bool TreatmentRecord::PTNMMHasBeenSet() const
{
    return m_pTNMMHasBeenSet;
}

string TreatmentRecord::GetPTNMN() const
{
    return m_pTNMN;
}

void TreatmentRecord::SetPTNMN(const string& _pTNMN)
{
    m_pTNMN = _pTNMN;
    m_pTNMNHasBeenSet = true;
}

bool TreatmentRecord::PTNMNHasBeenSet() const
{
    return m_pTNMNHasBeenSet;
}

string TreatmentRecord::GetPTNMT() const
{
    return m_pTNMT;
}

void TreatmentRecord::SetPTNMT(const string& _pTNMT)
{
    m_pTNMT = _pTNMT;
    m_pTNMTHasBeenSet = true;
}

bool TreatmentRecord::PTNMTHasBeenSet() const
{
    return m_pTNMTHasBeenSet;
}

string TreatmentRecord::GetECOG() const
{
    return m_eCOG;
}

void TreatmentRecord::SetECOG(const string& _eCOG)
{
    m_eCOG = _eCOG;
    m_eCOGHasBeenSet = true;
}

bool TreatmentRecord::ECOGHasBeenSet() const
{
    return m_eCOGHasBeenSet;
}

string TreatmentRecord::GetNRS() const
{
    return m_nRS;
}

void TreatmentRecord::SetNRS(const string& _nRS)
{
    m_nRS = _nRS;
    m_nRSHasBeenSet = true;
}

bool TreatmentRecord::NRSHasBeenSet() const
{
    return m_nRSHasBeenSet;
}

string TreatmentRecord::GetKPS() const
{
    return m_kPS;
}

void TreatmentRecord::SetKPS(const string& _kPS)
{
    m_kPS = _kPS;
    m_kPSHasBeenSet = true;
}

bool TreatmentRecord::KPSHasBeenSet() const
{
    return m_kPSHasBeenSet;
}

string TreatmentRecord::GetDeathDate() const
{
    return m_deathDate;
}

void TreatmentRecord::SetDeathDate(const string& _deathDate)
{
    m_deathDate = _deathDate;
    m_deathDateHasBeenSet = true;
}

bool TreatmentRecord::DeathDateHasBeenSet() const
{
    return m_deathDateHasBeenSet;
}

string TreatmentRecord::GetRelapseDate() const
{
    return m_relapseDate;
}

void TreatmentRecord::SetRelapseDate(const string& _relapseDate)
{
    m_relapseDate = _relapseDate;
    m_relapseDateHasBeenSet = true;
}

bool TreatmentRecord::RelapseDateHasBeenSet() const
{
    return m_relapseDateHasBeenSet;
}

string TreatmentRecord::GetObservationDays() const
{
    return m_observationDays;
}

void TreatmentRecord::SetObservationDays(const string& _observationDays)
{
    m_observationDays = _observationDays;
    m_observationDaysHasBeenSet = true;
}

bool TreatmentRecord::ObservationDaysHasBeenSet() const
{
    return m_observationDaysHasBeenSet;
}

string TreatmentRecord::GetAdmissionCondition() const
{
    return m_admissionCondition;
}

void TreatmentRecord::SetAdmissionCondition(const string& _admissionCondition)
{
    m_admissionCondition = _admissionCondition;
    m_admissionConditionHasBeenSet = true;
}

bool TreatmentRecord::AdmissionConditionHasBeenSet() const
{
    return m_admissionConditionHasBeenSet;
}

