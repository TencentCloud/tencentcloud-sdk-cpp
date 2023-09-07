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

#include <tencentcloud/mrs/v20200910/model/ParagraphBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ParagraphBlock::ParagraphBlock() :
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
    m_dischargeDiagnosisTextHasBeenSet(false),
    m_mainDiseaseHistoryTextHasBeenSet(false),
    m_diseasePresentTextHasBeenSet(false),
    m_personalHistoryTextHasBeenSet(false),
    m_menstruallHistoryTextHasBeenSet(false),
    m_obstericalHistoryTextHasBeenSet(false),
    m_familyHistoryTextHasBeenSet(false),
    m_allergyHistoryTextHasBeenSet(false),
    m_diseaseHistoryTextHasBeenSet(false),
    m_otherDiagnosisTextHasBeenSet(false),
    m_bodyExaminationTextHasBeenSet(false),
    m_specialistExaminationTextHasBeenSet(false),
    m_treatmentResultTextHasBeenSet(false),
    m_menstrualHistoryTextHasBeenSet(false)
{
}

CoreInternalOutcome ParagraphBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IncisionHealingText") && !value["IncisionHealingText"].IsNull())
    {
        if (!value["IncisionHealingText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.IncisionHealingText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incisionHealingText = string(value["IncisionHealingText"].GetString());
        m_incisionHealingTextHasBeenSet = true;
    }

    if (value.HasMember("AuxiliaryExaminationText") && !value["AuxiliaryExaminationText"].IsNull())
    {
        if (!value["AuxiliaryExaminationText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.AuxiliaryExaminationText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auxiliaryExaminationText = string(value["AuxiliaryExaminationText"].GetString());
        m_auxiliaryExaminationTextHasBeenSet = true;
    }

    if (value.HasMember("SpecialExamText") && !value["SpecialExamText"].IsNull())
    {
        if (!value["SpecialExamText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.SpecialExamText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specialExamText = string(value["SpecialExamText"].GetString());
        m_specialExamTextHasBeenSet = true;
    }

    if (value.HasMember("OutpatientDiagnosisText") && !value["OutpatientDiagnosisText"].IsNull())
    {
        if (!value["OutpatientDiagnosisText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.OutpatientDiagnosisText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outpatientDiagnosisText = string(value["OutpatientDiagnosisText"].GetString());
        m_outpatientDiagnosisTextHasBeenSet = true;
    }

    if (value.HasMember("AdmissionConditionText") && !value["AdmissionConditionText"].IsNull())
    {
        if (!value["AdmissionConditionText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.AdmissionConditionText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_admissionConditionText = string(value["AdmissionConditionText"].GetString());
        m_admissionConditionTextHasBeenSet = true;
    }

    if (value.HasMember("CheckAndTreatmentProcessText") && !value["CheckAndTreatmentProcessText"].IsNull())
    {
        if (!value["CheckAndTreatmentProcessText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.CheckAndTreatmentProcessText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkAndTreatmentProcessText = string(value["CheckAndTreatmentProcessText"].GetString());
        m_checkAndTreatmentProcessTextHasBeenSet = true;
    }

    if (value.HasMember("SymptomsAndSignsText") && !value["SymptomsAndSignsText"].IsNull())
    {
        if (!value["SymptomsAndSignsText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.SymptomsAndSignsText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symptomsAndSignsText = string(value["SymptomsAndSignsText"].GetString());
        m_symptomsAndSignsTextHasBeenSet = true;
    }

    if (value.HasMember("DischargeInstructionsText") && !value["DischargeInstructionsText"].IsNull())
    {
        if (!value["DischargeInstructionsText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.DischargeInstructionsText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dischargeInstructionsText = string(value["DischargeInstructionsText"].GetString());
        m_dischargeInstructionsTextHasBeenSet = true;
    }

    if (value.HasMember("AdmissionDiagnosisText") && !value["AdmissionDiagnosisText"].IsNull())
    {
        if (!value["AdmissionDiagnosisText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.AdmissionDiagnosisText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_admissionDiagnosisText = string(value["AdmissionDiagnosisText"].GetString());
        m_admissionDiagnosisTextHasBeenSet = true;
    }

    if (value.HasMember("SurgeryConditionText") && !value["SurgeryConditionText"].IsNull())
    {
        if (!value["SurgeryConditionText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.SurgeryConditionText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_surgeryConditionText = string(value["SurgeryConditionText"].GetString());
        m_surgeryConditionTextHasBeenSet = true;
    }

    if (value.HasMember("PathologicalDiagnosisText") && !value["PathologicalDiagnosisText"].IsNull())
    {
        if (!value["PathologicalDiagnosisText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.PathologicalDiagnosisText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathologicalDiagnosisText = string(value["PathologicalDiagnosisText"].GetString());
        m_pathologicalDiagnosisTextHasBeenSet = true;
    }

    if (value.HasMember("DischargeConditionText") && !value["DischargeConditionText"].IsNull())
    {
        if (!value["DischargeConditionText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.DischargeConditionText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dischargeConditionText = string(value["DischargeConditionText"].GetString());
        m_dischargeConditionTextHasBeenSet = true;
    }

    if (value.HasMember("CheckRecordText") && !value["CheckRecordText"].IsNull())
    {
        if (!value["CheckRecordText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.CheckRecordText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkRecordText = string(value["CheckRecordText"].GetString());
        m_checkRecordTextHasBeenSet = true;
    }

    if (value.HasMember("ChiefComplaintText") && !value["ChiefComplaintText"].IsNull())
    {
        if (!value["ChiefComplaintText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.ChiefComplaintText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chiefComplaintText = string(value["ChiefComplaintText"].GetString());
        m_chiefComplaintTextHasBeenSet = true;
    }

    if (value.HasMember("DischargeDiagnosisText") && !value["DischargeDiagnosisText"].IsNull())
    {
        if (!value["DischargeDiagnosisText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.DischargeDiagnosisText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dischargeDiagnosisText = string(value["DischargeDiagnosisText"].GetString());
        m_dischargeDiagnosisTextHasBeenSet = true;
    }

    if (value.HasMember("MainDiseaseHistoryText") && !value["MainDiseaseHistoryText"].IsNull())
    {
        if (!value["MainDiseaseHistoryText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.MainDiseaseHistoryText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainDiseaseHistoryText = string(value["MainDiseaseHistoryText"].GetString());
        m_mainDiseaseHistoryTextHasBeenSet = true;
    }

    if (value.HasMember("DiseasePresentText") && !value["DiseasePresentText"].IsNull())
    {
        if (!value["DiseasePresentText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.DiseasePresentText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diseasePresentText = string(value["DiseasePresentText"].GetString());
        m_diseasePresentTextHasBeenSet = true;
    }

    if (value.HasMember("PersonalHistoryText") && !value["PersonalHistoryText"].IsNull())
    {
        if (!value["PersonalHistoryText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.PersonalHistoryText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personalHistoryText = string(value["PersonalHistoryText"].GetString());
        m_personalHistoryTextHasBeenSet = true;
    }

    if (value.HasMember("MenstruallHistoryText") && !value["MenstruallHistoryText"].IsNull())
    {
        if (!value["MenstruallHistoryText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.MenstruallHistoryText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_menstruallHistoryText = string(value["MenstruallHistoryText"].GetString());
        m_menstruallHistoryTextHasBeenSet = true;
    }

    if (value.HasMember("ObstericalHistoryText") && !value["ObstericalHistoryText"].IsNull())
    {
        if (!value["ObstericalHistoryText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.ObstericalHistoryText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_obstericalHistoryText = string(value["ObstericalHistoryText"].GetString());
        m_obstericalHistoryTextHasBeenSet = true;
    }

    if (value.HasMember("FamilyHistoryText") && !value["FamilyHistoryText"].IsNull())
    {
        if (!value["FamilyHistoryText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.FamilyHistoryText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_familyHistoryText = string(value["FamilyHistoryText"].GetString());
        m_familyHistoryTextHasBeenSet = true;
    }

    if (value.HasMember("AllergyHistoryText") && !value["AllergyHistoryText"].IsNull())
    {
        if (!value["AllergyHistoryText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.AllergyHistoryText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allergyHistoryText = string(value["AllergyHistoryText"].GetString());
        m_allergyHistoryTextHasBeenSet = true;
    }

    if (value.HasMember("DiseaseHistoryText") && !value["DiseaseHistoryText"].IsNull())
    {
        if (!value["DiseaseHistoryText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.DiseaseHistoryText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diseaseHistoryText = string(value["DiseaseHistoryText"].GetString());
        m_diseaseHistoryTextHasBeenSet = true;
    }

    if (value.HasMember("OtherDiagnosisText") && !value["OtherDiagnosisText"].IsNull())
    {
        if (!value["OtherDiagnosisText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.OtherDiagnosisText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherDiagnosisText = string(value["OtherDiagnosisText"].GetString());
        m_otherDiagnosisTextHasBeenSet = true;
    }

    if (value.HasMember("BodyExaminationText") && !value["BodyExaminationText"].IsNull())
    {
        if (!value["BodyExaminationText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.BodyExaminationText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bodyExaminationText = string(value["BodyExaminationText"].GetString());
        m_bodyExaminationTextHasBeenSet = true;
    }

    if (value.HasMember("SpecialistExaminationText") && !value["SpecialistExaminationText"].IsNull())
    {
        if (!value["SpecialistExaminationText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.SpecialistExaminationText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specialistExaminationText = string(value["SpecialistExaminationText"].GetString());
        m_specialistExaminationTextHasBeenSet = true;
    }

    if (value.HasMember("TreatmentResultText") && !value["TreatmentResultText"].IsNull())
    {
        if (!value["TreatmentResultText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.TreatmentResultText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treatmentResultText = string(value["TreatmentResultText"].GetString());
        m_treatmentResultTextHasBeenSet = true;
    }

    if (value.HasMember("MenstrualHistoryText") && !value["MenstrualHistoryText"].IsNull())
    {
        if (!value["MenstrualHistoryText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParagraphBlock.MenstrualHistoryText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_menstrualHistoryText = string(value["MenstrualHistoryText"].GetString());
        m_menstrualHistoryTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParagraphBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_mainDiseaseHistoryTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDiseaseHistoryText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainDiseaseHistoryText.c_str(), allocator).Move(), allocator);
    }

    if (m_diseasePresentTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseasePresentText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diseasePresentText.c_str(), allocator).Move(), allocator);
    }

    if (m_personalHistoryTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonalHistoryText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personalHistoryText.c_str(), allocator).Move(), allocator);
    }

    if (m_menstruallHistoryTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenstruallHistoryText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_menstruallHistoryText.c_str(), allocator).Move(), allocator);
    }

    if (m_obstericalHistoryTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObstericalHistoryText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_obstericalHistoryText.c_str(), allocator).Move(), allocator);
    }

    if (m_familyHistoryTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FamilyHistoryText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_familyHistoryText.c_str(), allocator).Move(), allocator);
    }

    if (m_allergyHistoryTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllergyHistoryText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allergyHistoryText.c_str(), allocator).Move(), allocator);
    }

    if (m_diseaseHistoryTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseaseHistoryText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diseaseHistoryText.c_str(), allocator).Move(), allocator);
    }

    if (m_otherDiagnosisTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherDiagnosisText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherDiagnosisText.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyExaminationTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyExaminationText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bodyExaminationText.c_str(), allocator).Move(), allocator);
    }

    if (m_specialistExaminationTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecialistExaminationText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specialistExaminationText.c_str(), allocator).Move(), allocator);
    }

    if (m_treatmentResultTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreatmentResultText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treatmentResultText.c_str(), allocator).Move(), allocator);
    }

    if (m_menstrualHistoryTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenstrualHistoryText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_menstrualHistoryText.c_str(), allocator).Move(), allocator);
    }

}


string ParagraphBlock::GetIncisionHealingText() const
{
    return m_incisionHealingText;
}

void ParagraphBlock::SetIncisionHealingText(const string& _incisionHealingText)
{
    m_incisionHealingText = _incisionHealingText;
    m_incisionHealingTextHasBeenSet = true;
}

bool ParagraphBlock::IncisionHealingTextHasBeenSet() const
{
    return m_incisionHealingTextHasBeenSet;
}

string ParagraphBlock::GetAuxiliaryExaminationText() const
{
    return m_auxiliaryExaminationText;
}

void ParagraphBlock::SetAuxiliaryExaminationText(const string& _auxiliaryExaminationText)
{
    m_auxiliaryExaminationText = _auxiliaryExaminationText;
    m_auxiliaryExaminationTextHasBeenSet = true;
}

bool ParagraphBlock::AuxiliaryExaminationTextHasBeenSet() const
{
    return m_auxiliaryExaminationTextHasBeenSet;
}

string ParagraphBlock::GetSpecialExamText() const
{
    return m_specialExamText;
}

void ParagraphBlock::SetSpecialExamText(const string& _specialExamText)
{
    m_specialExamText = _specialExamText;
    m_specialExamTextHasBeenSet = true;
}

bool ParagraphBlock::SpecialExamTextHasBeenSet() const
{
    return m_specialExamTextHasBeenSet;
}

string ParagraphBlock::GetOutpatientDiagnosisText() const
{
    return m_outpatientDiagnosisText;
}

void ParagraphBlock::SetOutpatientDiagnosisText(const string& _outpatientDiagnosisText)
{
    m_outpatientDiagnosisText = _outpatientDiagnosisText;
    m_outpatientDiagnosisTextHasBeenSet = true;
}

bool ParagraphBlock::OutpatientDiagnosisTextHasBeenSet() const
{
    return m_outpatientDiagnosisTextHasBeenSet;
}

string ParagraphBlock::GetAdmissionConditionText() const
{
    return m_admissionConditionText;
}

void ParagraphBlock::SetAdmissionConditionText(const string& _admissionConditionText)
{
    m_admissionConditionText = _admissionConditionText;
    m_admissionConditionTextHasBeenSet = true;
}

bool ParagraphBlock::AdmissionConditionTextHasBeenSet() const
{
    return m_admissionConditionTextHasBeenSet;
}

string ParagraphBlock::GetCheckAndTreatmentProcessText() const
{
    return m_checkAndTreatmentProcessText;
}

void ParagraphBlock::SetCheckAndTreatmentProcessText(const string& _checkAndTreatmentProcessText)
{
    m_checkAndTreatmentProcessText = _checkAndTreatmentProcessText;
    m_checkAndTreatmentProcessTextHasBeenSet = true;
}

bool ParagraphBlock::CheckAndTreatmentProcessTextHasBeenSet() const
{
    return m_checkAndTreatmentProcessTextHasBeenSet;
}

string ParagraphBlock::GetSymptomsAndSignsText() const
{
    return m_symptomsAndSignsText;
}

void ParagraphBlock::SetSymptomsAndSignsText(const string& _symptomsAndSignsText)
{
    m_symptomsAndSignsText = _symptomsAndSignsText;
    m_symptomsAndSignsTextHasBeenSet = true;
}

bool ParagraphBlock::SymptomsAndSignsTextHasBeenSet() const
{
    return m_symptomsAndSignsTextHasBeenSet;
}

string ParagraphBlock::GetDischargeInstructionsText() const
{
    return m_dischargeInstructionsText;
}

void ParagraphBlock::SetDischargeInstructionsText(const string& _dischargeInstructionsText)
{
    m_dischargeInstructionsText = _dischargeInstructionsText;
    m_dischargeInstructionsTextHasBeenSet = true;
}

bool ParagraphBlock::DischargeInstructionsTextHasBeenSet() const
{
    return m_dischargeInstructionsTextHasBeenSet;
}

string ParagraphBlock::GetAdmissionDiagnosisText() const
{
    return m_admissionDiagnosisText;
}

void ParagraphBlock::SetAdmissionDiagnosisText(const string& _admissionDiagnosisText)
{
    m_admissionDiagnosisText = _admissionDiagnosisText;
    m_admissionDiagnosisTextHasBeenSet = true;
}

bool ParagraphBlock::AdmissionDiagnosisTextHasBeenSet() const
{
    return m_admissionDiagnosisTextHasBeenSet;
}

string ParagraphBlock::GetSurgeryConditionText() const
{
    return m_surgeryConditionText;
}

void ParagraphBlock::SetSurgeryConditionText(const string& _surgeryConditionText)
{
    m_surgeryConditionText = _surgeryConditionText;
    m_surgeryConditionTextHasBeenSet = true;
}

bool ParagraphBlock::SurgeryConditionTextHasBeenSet() const
{
    return m_surgeryConditionTextHasBeenSet;
}

string ParagraphBlock::GetPathologicalDiagnosisText() const
{
    return m_pathologicalDiagnosisText;
}

void ParagraphBlock::SetPathologicalDiagnosisText(const string& _pathologicalDiagnosisText)
{
    m_pathologicalDiagnosisText = _pathologicalDiagnosisText;
    m_pathologicalDiagnosisTextHasBeenSet = true;
}

bool ParagraphBlock::PathologicalDiagnosisTextHasBeenSet() const
{
    return m_pathologicalDiagnosisTextHasBeenSet;
}

string ParagraphBlock::GetDischargeConditionText() const
{
    return m_dischargeConditionText;
}

void ParagraphBlock::SetDischargeConditionText(const string& _dischargeConditionText)
{
    m_dischargeConditionText = _dischargeConditionText;
    m_dischargeConditionTextHasBeenSet = true;
}

bool ParagraphBlock::DischargeConditionTextHasBeenSet() const
{
    return m_dischargeConditionTextHasBeenSet;
}

string ParagraphBlock::GetCheckRecordText() const
{
    return m_checkRecordText;
}

void ParagraphBlock::SetCheckRecordText(const string& _checkRecordText)
{
    m_checkRecordText = _checkRecordText;
    m_checkRecordTextHasBeenSet = true;
}

bool ParagraphBlock::CheckRecordTextHasBeenSet() const
{
    return m_checkRecordTextHasBeenSet;
}

string ParagraphBlock::GetChiefComplaintText() const
{
    return m_chiefComplaintText;
}

void ParagraphBlock::SetChiefComplaintText(const string& _chiefComplaintText)
{
    m_chiefComplaintText = _chiefComplaintText;
    m_chiefComplaintTextHasBeenSet = true;
}

bool ParagraphBlock::ChiefComplaintTextHasBeenSet() const
{
    return m_chiefComplaintTextHasBeenSet;
}

string ParagraphBlock::GetDischargeDiagnosisText() const
{
    return m_dischargeDiagnosisText;
}

void ParagraphBlock::SetDischargeDiagnosisText(const string& _dischargeDiagnosisText)
{
    m_dischargeDiagnosisText = _dischargeDiagnosisText;
    m_dischargeDiagnosisTextHasBeenSet = true;
}

bool ParagraphBlock::DischargeDiagnosisTextHasBeenSet() const
{
    return m_dischargeDiagnosisTextHasBeenSet;
}

string ParagraphBlock::GetMainDiseaseHistoryText() const
{
    return m_mainDiseaseHistoryText;
}

void ParagraphBlock::SetMainDiseaseHistoryText(const string& _mainDiseaseHistoryText)
{
    m_mainDiseaseHistoryText = _mainDiseaseHistoryText;
    m_mainDiseaseHistoryTextHasBeenSet = true;
}

bool ParagraphBlock::MainDiseaseHistoryTextHasBeenSet() const
{
    return m_mainDiseaseHistoryTextHasBeenSet;
}

string ParagraphBlock::GetDiseasePresentText() const
{
    return m_diseasePresentText;
}

void ParagraphBlock::SetDiseasePresentText(const string& _diseasePresentText)
{
    m_diseasePresentText = _diseasePresentText;
    m_diseasePresentTextHasBeenSet = true;
}

bool ParagraphBlock::DiseasePresentTextHasBeenSet() const
{
    return m_diseasePresentTextHasBeenSet;
}

string ParagraphBlock::GetPersonalHistoryText() const
{
    return m_personalHistoryText;
}

void ParagraphBlock::SetPersonalHistoryText(const string& _personalHistoryText)
{
    m_personalHistoryText = _personalHistoryText;
    m_personalHistoryTextHasBeenSet = true;
}

bool ParagraphBlock::PersonalHistoryTextHasBeenSet() const
{
    return m_personalHistoryTextHasBeenSet;
}

string ParagraphBlock::GetMenstruallHistoryText() const
{
    return m_menstruallHistoryText;
}

void ParagraphBlock::SetMenstruallHistoryText(const string& _menstruallHistoryText)
{
    m_menstruallHistoryText = _menstruallHistoryText;
    m_menstruallHistoryTextHasBeenSet = true;
}

bool ParagraphBlock::MenstruallHistoryTextHasBeenSet() const
{
    return m_menstruallHistoryTextHasBeenSet;
}

string ParagraphBlock::GetObstericalHistoryText() const
{
    return m_obstericalHistoryText;
}

void ParagraphBlock::SetObstericalHistoryText(const string& _obstericalHistoryText)
{
    m_obstericalHistoryText = _obstericalHistoryText;
    m_obstericalHistoryTextHasBeenSet = true;
}

bool ParagraphBlock::ObstericalHistoryTextHasBeenSet() const
{
    return m_obstericalHistoryTextHasBeenSet;
}

string ParagraphBlock::GetFamilyHistoryText() const
{
    return m_familyHistoryText;
}

void ParagraphBlock::SetFamilyHistoryText(const string& _familyHistoryText)
{
    m_familyHistoryText = _familyHistoryText;
    m_familyHistoryTextHasBeenSet = true;
}

bool ParagraphBlock::FamilyHistoryTextHasBeenSet() const
{
    return m_familyHistoryTextHasBeenSet;
}

string ParagraphBlock::GetAllergyHistoryText() const
{
    return m_allergyHistoryText;
}

void ParagraphBlock::SetAllergyHistoryText(const string& _allergyHistoryText)
{
    m_allergyHistoryText = _allergyHistoryText;
    m_allergyHistoryTextHasBeenSet = true;
}

bool ParagraphBlock::AllergyHistoryTextHasBeenSet() const
{
    return m_allergyHistoryTextHasBeenSet;
}

string ParagraphBlock::GetDiseaseHistoryText() const
{
    return m_diseaseHistoryText;
}

void ParagraphBlock::SetDiseaseHistoryText(const string& _diseaseHistoryText)
{
    m_diseaseHistoryText = _diseaseHistoryText;
    m_diseaseHistoryTextHasBeenSet = true;
}

bool ParagraphBlock::DiseaseHistoryTextHasBeenSet() const
{
    return m_diseaseHistoryTextHasBeenSet;
}

string ParagraphBlock::GetOtherDiagnosisText() const
{
    return m_otherDiagnosisText;
}

void ParagraphBlock::SetOtherDiagnosisText(const string& _otherDiagnosisText)
{
    m_otherDiagnosisText = _otherDiagnosisText;
    m_otherDiagnosisTextHasBeenSet = true;
}

bool ParagraphBlock::OtherDiagnosisTextHasBeenSet() const
{
    return m_otherDiagnosisTextHasBeenSet;
}

string ParagraphBlock::GetBodyExaminationText() const
{
    return m_bodyExaminationText;
}

void ParagraphBlock::SetBodyExaminationText(const string& _bodyExaminationText)
{
    m_bodyExaminationText = _bodyExaminationText;
    m_bodyExaminationTextHasBeenSet = true;
}

bool ParagraphBlock::BodyExaminationTextHasBeenSet() const
{
    return m_bodyExaminationTextHasBeenSet;
}

string ParagraphBlock::GetSpecialistExaminationText() const
{
    return m_specialistExaminationText;
}

void ParagraphBlock::SetSpecialistExaminationText(const string& _specialistExaminationText)
{
    m_specialistExaminationText = _specialistExaminationText;
    m_specialistExaminationTextHasBeenSet = true;
}

bool ParagraphBlock::SpecialistExaminationTextHasBeenSet() const
{
    return m_specialistExaminationTextHasBeenSet;
}

string ParagraphBlock::GetTreatmentResultText() const
{
    return m_treatmentResultText;
}

void ParagraphBlock::SetTreatmentResultText(const string& _treatmentResultText)
{
    m_treatmentResultText = _treatmentResultText;
    m_treatmentResultTextHasBeenSet = true;
}

bool ParagraphBlock::TreatmentResultTextHasBeenSet() const
{
    return m_treatmentResultTextHasBeenSet;
}

string ParagraphBlock::GetMenstrualHistoryText() const
{
    return m_menstrualHistoryText;
}

void ParagraphBlock::SetMenstrualHistoryText(const string& _menstrualHistoryText)
{
    m_menstrualHistoryText = _menstrualHistoryText;
    m_menstrualHistoryTextHasBeenSet = true;
}

bool ParagraphBlock::MenstrualHistoryTextHasBeenSet() const
{
    return m_menstrualHistoryTextHasBeenSet;
}

