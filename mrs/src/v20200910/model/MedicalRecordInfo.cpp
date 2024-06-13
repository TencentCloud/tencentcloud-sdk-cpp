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

#include <tencentcloud/mrs/v20200910/model/MedicalRecordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

MedicalRecordInfo::MedicalRecordInfo() :
    m_diagnosisTimeHasBeenSet(false),
    m_diagnosisDepartmentNameHasBeenSet(false),
    m_diagnosisDoctorNameHasBeenSet(false),
    m_clinicalDiagnosisHasBeenSet(false),
    m_mainNarrationHasBeenSet(false),
    m_physicalExaminationHasBeenSet(false),
    m_inspectionFindingsHasBeenSet(false),
    m_treatmentOpinionHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome MedicalRecordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiagnosisTime") && !value["DiagnosisTime"].IsNull())
    {
        if (!value["DiagnosisTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MedicalRecordInfo.DiagnosisTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagnosisTime = string(value["DiagnosisTime"].GetString());
        m_diagnosisTimeHasBeenSet = true;
    }

    if (value.HasMember("DiagnosisDepartmentName") && !value["DiagnosisDepartmentName"].IsNull())
    {
        if (!value["DiagnosisDepartmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MedicalRecordInfo.DiagnosisDepartmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagnosisDepartmentName = string(value["DiagnosisDepartmentName"].GetString());
        m_diagnosisDepartmentNameHasBeenSet = true;
    }

    if (value.HasMember("DiagnosisDoctorName") && !value["DiagnosisDoctorName"].IsNull())
    {
        if (!value["DiagnosisDoctorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MedicalRecordInfo.DiagnosisDoctorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagnosisDoctorName = string(value["DiagnosisDoctorName"].GetString());
        m_diagnosisDoctorNameHasBeenSet = true;
    }

    if (value.HasMember("ClinicalDiagnosis") && !value["ClinicalDiagnosis"].IsNull())
    {
        if (!value["ClinicalDiagnosis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MedicalRecordInfo.ClinicalDiagnosis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clinicalDiagnosis = string(value["ClinicalDiagnosis"].GetString());
        m_clinicalDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("MainNarration") && !value["MainNarration"].IsNull())
    {
        if (!value["MainNarration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MedicalRecordInfo.MainNarration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainNarration = string(value["MainNarration"].GetString());
        m_mainNarrationHasBeenSet = true;
    }

    if (value.HasMember("PhysicalExamination") && !value["PhysicalExamination"].IsNull())
    {
        if (!value["PhysicalExamination"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MedicalRecordInfo.PhysicalExamination` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_physicalExamination = string(value["PhysicalExamination"].GetString());
        m_physicalExaminationHasBeenSet = true;
    }

    if (value.HasMember("InspectionFindings") && !value["InspectionFindings"].IsNull())
    {
        if (!value["InspectionFindings"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MedicalRecordInfo.InspectionFindings` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inspectionFindings = string(value["InspectionFindings"].GetString());
        m_inspectionFindingsHasBeenSet = true;
    }

    if (value.HasMember("TreatmentOpinion") && !value["TreatmentOpinion"].IsNull())
    {
        if (!value["TreatmentOpinion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MedicalRecordInfo.TreatmentOpinion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treatmentOpinion = string(value["TreatmentOpinion"].GetString());
        m_treatmentOpinionHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MedicalRecordInfo.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MedicalRecordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diagnosisTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagnosisTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagnosisTime.c_str(), allocator).Move(), allocator);
    }

    if (m_diagnosisDepartmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagnosisDepartmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagnosisDepartmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_diagnosisDoctorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagnosisDoctorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagnosisDoctorName.c_str(), allocator).Move(), allocator);
    }

    if (m_clinicalDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClinicalDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clinicalDiagnosis.c_str(), allocator).Move(), allocator);
    }

    if (m_mainNarrationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainNarration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainNarration.c_str(), allocator).Move(), allocator);
    }

    if (m_physicalExaminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalExamination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_physicalExamination.c_str(), allocator).Move(), allocator);
    }

    if (m_inspectionFindingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InspectionFindings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inspectionFindings.c_str(), allocator).Move(), allocator);
    }

    if (m_treatmentOpinionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreatmentOpinion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treatmentOpinion.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


string MedicalRecordInfo::GetDiagnosisTime() const
{
    return m_diagnosisTime;
}

void MedicalRecordInfo::SetDiagnosisTime(const string& _diagnosisTime)
{
    m_diagnosisTime = _diagnosisTime;
    m_diagnosisTimeHasBeenSet = true;
}

bool MedicalRecordInfo::DiagnosisTimeHasBeenSet() const
{
    return m_diagnosisTimeHasBeenSet;
}

string MedicalRecordInfo::GetDiagnosisDepartmentName() const
{
    return m_diagnosisDepartmentName;
}

void MedicalRecordInfo::SetDiagnosisDepartmentName(const string& _diagnosisDepartmentName)
{
    m_diagnosisDepartmentName = _diagnosisDepartmentName;
    m_diagnosisDepartmentNameHasBeenSet = true;
}

bool MedicalRecordInfo::DiagnosisDepartmentNameHasBeenSet() const
{
    return m_diagnosisDepartmentNameHasBeenSet;
}

string MedicalRecordInfo::GetDiagnosisDoctorName() const
{
    return m_diagnosisDoctorName;
}

void MedicalRecordInfo::SetDiagnosisDoctorName(const string& _diagnosisDoctorName)
{
    m_diagnosisDoctorName = _diagnosisDoctorName;
    m_diagnosisDoctorNameHasBeenSet = true;
}

bool MedicalRecordInfo::DiagnosisDoctorNameHasBeenSet() const
{
    return m_diagnosisDoctorNameHasBeenSet;
}

string MedicalRecordInfo::GetClinicalDiagnosis() const
{
    return m_clinicalDiagnosis;
}

void MedicalRecordInfo::SetClinicalDiagnosis(const string& _clinicalDiagnosis)
{
    m_clinicalDiagnosis = _clinicalDiagnosis;
    m_clinicalDiagnosisHasBeenSet = true;
}

bool MedicalRecordInfo::ClinicalDiagnosisHasBeenSet() const
{
    return m_clinicalDiagnosisHasBeenSet;
}

string MedicalRecordInfo::GetMainNarration() const
{
    return m_mainNarration;
}

void MedicalRecordInfo::SetMainNarration(const string& _mainNarration)
{
    m_mainNarration = _mainNarration;
    m_mainNarrationHasBeenSet = true;
}

bool MedicalRecordInfo::MainNarrationHasBeenSet() const
{
    return m_mainNarrationHasBeenSet;
}

string MedicalRecordInfo::GetPhysicalExamination() const
{
    return m_physicalExamination;
}

void MedicalRecordInfo::SetPhysicalExamination(const string& _physicalExamination)
{
    m_physicalExamination = _physicalExamination;
    m_physicalExaminationHasBeenSet = true;
}

bool MedicalRecordInfo::PhysicalExaminationHasBeenSet() const
{
    return m_physicalExaminationHasBeenSet;
}

string MedicalRecordInfo::GetInspectionFindings() const
{
    return m_inspectionFindings;
}

void MedicalRecordInfo::SetInspectionFindings(const string& _inspectionFindings)
{
    m_inspectionFindings = _inspectionFindings;
    m_inspectionFindingsHasBeenSet = true;
}

bool MedicalRecordInfo::InspectionFindingsHasBeenSet() const
{
    return m_inspectionFindingsHasBeenSet;
}

string MedicalRecordInfo::GetTreatmentOpinion() const
{
    return m_treatmentOpinion;
}

void MedicalRecordInfo::SetTreatmentOpinion(const string& _treatmentOpinion)
{
    m_treatmentOpinion = _treatmentOpinion;
    m_treatmentOpinionHasBeenSet = true;
}

bool MedicalRecordInfo::TreatmentOpinionHasBeenSet() const
{
    return m_treatmentOpinionHasBeenSet;
}

int64_t MedicalRecordInfo::GetPage() const
{
    return m_page;
}

void MedicalRecordInfo::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool MedicalRecordInfo::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

