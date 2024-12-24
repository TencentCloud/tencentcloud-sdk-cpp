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

#include <tencentcloud/aca/v20210323/model/RequestCase.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

RequestCase::RequestCase() :
    m_caseTypeHasBeenSet(false),
    m_chiefComplaintHasBeenSet(false),
    m_departmentHasBeenSet(false),
    m_caseIdHasBeenSet(false),
    m_caseTimeHasBeenSet(false),
    m_visitIdHasBeenSet(false),
    m_patientBaseinfoHasBeenSet(false),
    m_doctorInfoHasBeenSet(false),
    m_presentIllnessHasBeenSet(false),
    m_patientOtherHasBeenSet(false),
    m_patientHistoryHasBeenSet(false),
    m_patientFamilyHistoryHasBeenSet(false),
    m_physicalExamHasBeenSet(false),
    m_emrDiagnosisesHasBeenSet(false),
    m_prescriptionsHasBeenSet(false)
{
}

CoreInternalOutcome RequestCase::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CaseType") && !value["CaseType"].IsNull())
    {
        if (!value["CaseType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestCase.CaseType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_caseType = value["CaseType"].GetInt64();
        m_caseTypeHasBeenSet = true;
    }

    if (value.HasMember("ChiefComplaint") && !value["ChiefComplaint"].IsNull())
    {
        if (!value["ChiefComplaint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestCase.ChiefComplaint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chiefComplaint = string(value["ChiefComplaint"].GetString());
        m_chiefComplaintHasBeenSet = true;
    }

    if (value.HasMember("Department") && !value["Department"].IsNull())
    {
        if (!value["Department"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestCase.Department` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_department = string(value["Department"].GetString());
        m_departmentHasBeenSet = true;
    }

    if (value.HasMember("CaseId") && !value["CaseId"].IsNull())
    {
        if (!value["CaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestCase.CaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caseId = string(value["CaseId"].GetString());
        m_caseIdHasBeenSet = true;
    }

    if (value.HasMember("CaseTime") && !value["CaseTime"].IsNull())
    {
        if (!value["CaseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestCase.CaseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caseTime = string(value["CaseTime"].GetString());
        m_caseTimeHasBeenSet = true;
    }

    if (value.HasMember("VisitId") && !value["VisitId"].IsNull())
    {
        if (!value["VisitId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestCase.VisitId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_visitId = string(value["VisitId"].GetString());
        m_visitIdHasBeenSet = true;
    }

    if (value.HasMember("PatientBaseinfo") && !value["PatientBaseinfo"].IsNull())
    {
        if (!value["PatientBaseinfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RequestCase.PatientBaseinfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_patientBaseinfo.Deserialize(value["PatientBaseinfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_patientBaseinfoHasBeenSet = true;
    }

    if (value.HasMember("DoctorInfo") && !value["DoctorInfo"].IsNull())
    {
        if (!value["DoctorInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RequestCase.DoctorInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_doctorInfo.Deserialize(value["DoctorInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_doctorInfoHasBeenSet = true;
    }

    if (value.HasMember("PresentIllness") && !value["PresentIllness"].IsNull())
    {
        if (!value["PresentIllness"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestCase.PresentIllness` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_presentIllness = string(value["PresentIllness"].GetString());
        m_presentIllnessHasBeenSet = true;
    }

    if (value.HasMember("PatientOther") && !value["PatientOther"].IsNull())
    {
        if (!value["PatientOther"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestCase.PatientOther` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_patientOther = string(value["PatientOther"].GetString());
        m_patientOtherHasBeenSet = true;
    }

    if (value.HasMember("PatientHistory") && !value["PatientHistory"].IsNull())
    {
        if (!value["PatientHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RequestCase.PatientHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_patientHistory.Deserialize(value["PatientHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_patientHistoryHasBeenSet = true;
    }

    if (value.HasMember("PatientFamilyHistory") && !value["PatientFamilyHistory"].IsNull())
    {
        if (!value["PatientFamilyHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RequestCase.PatientFamilyHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_patientFamilyHistory.Deserialize(value["PatientFamilyHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_patientFamilyHistoryHasBeenSet = true;
    }

    if (value.HasMember("PhysicalExam") && !value["PhysicalExam"].IsNull())
    {
        if (!value["PhysicalExam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RequestCase.PhysicalExam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_physicalExam.Deserialize(value["PhysicalExam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_physicalExamHasBeenSet = true;
    }

    if (value.HasMember("EmrDiagnosises") && !value["EmrDiagnosises"].IsNull())
    {
        if (!value["EmrDiagnosises"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RequestCase.EmrDiagnosises` is not array type"));

        const rapidjson::Value &tmpValue = value["EmrDiagnosises"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EmrDiagnosises item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_emrDiagnosises.push_back(item);
        }
        m_emrDiagnosisesHasBeenSet = true;
    }

    if (value.HasMember("Prescriptions") && !value["Prescriptions"].IsNull())
    {
        if (!value["Prescriptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RequestCase.Prescriptions` is not array type"));

        const rapidjson::Value &tmpValue = value["Prescriptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DrugUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_prescriptions.push_back(item);
        }
        m_prescriptionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RequestCase::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_caseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_caseType, allocator);
    }

    if (m_chiefComplaintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChiefComplaint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chiefComplaint.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Department";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_department.c_str(), allocator).Move(), allocator);
    }

    if (m_caseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caseId.c_str(), allocator).Move(), allocator);
    }

    if (m_caseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_visitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_visitId.c_str(), allocator).Move(), allocator);
    }

    if (m_patientBaseinfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PatientBaseinfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_patientBaseinfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_doctorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoctorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_doctorInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_presentIllnessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresentIllness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_presentIllness.c_str(), allocator).Move(), allocator);
    }

    if (m_patientOtherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PatientOther";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_patientOther.c_str(), allocator).Move(), allocator);
    }

    if (m_patientHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PatientHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_patientHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_patientFamilyHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PatientFamilyHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_patientFamilyHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_physicalExamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalExam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_physicalExam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_emrDiagnosisesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmrDiagnosises";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_emrDiagnosises.begin(); itr != m_emrDiagnosises.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_prescriptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prescriptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_prescriptions.begin(); itr != m_prescriptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t RequestCase::GetCaseType() const
{
    return m_caseType;
}

void RequestCase::SetCaseType(const int64_t& _caseType)
{
    m_caseType = _caseType;
    m_caseTypeHasBeenSet = true;
}

bool RequestCase::CaseTypeHasBeenSet() const
{
    return m_caseTypeHasBeenSet;
}

string RequestCase::GetChiefComplaint() const
{
    return m_chiefComplaint;
}

void RequestCase::SetChiefComplaint(const string& _chiefComplaint)
{
    m_chiefComplaint = _chiefComplaint;
    m_chiefComplaintHasBeenSet = true;
}

bool RequestCase::ChiefComplaintHasBeenSet() const
{
    return m_chiefComplaintHasBeenSet;
}

string RequestCase::GetDepartment() const
{
    return m_department;
}

void RequestCase::SetDepartment(const string& _department)
{
    m_department = _department;
    m_departmentHasBeenSet = true;
}

bool RequestCase::DepartmentHasBeenSet() const
{
    return m_departmentHasBeenSet;
}

string RequestCase::GetCaseId() const
{
    return m_caseId;
}

void RequestCase::SetCaseId(const string& _caseId)
{
    m_caseId = _caseId;
    m_caseIdHasBeenSet = true;
}

bool RequestCase::CaseIdHasBeenSet() const
{
    return m_caseIdHasBeenSet;
}

string RequestCase::GetCaseTime() const
{
    return m_caseTime;
}

void RequestCase::SetCaseTime(const string& _caseTime)
{
    m_caseTime = _caseTime;
    m_caseTimeHasBeenSet = true;
}

bool RequestCase::CaseTimeHasBeenSet() const
{
    return m_caseTimeHasBeenSet;
}

string RequestCase::GetVisitId() const
{
    return m_visitId;
}

void RequestCase::SetVisitId(const string& _visitId)
{
    m_visitId = _visitId;
    m_visitIdHasBeenSet = true;
}

bool RequestCase::VisitIdHasBeenSet() const
{
    return m_visitIdHasBeenSet;
}

PatientBaseInfo RequestCase::GetPatientBaseinfo() const
{
    return m_patientBaseinfo;
}

void RequestCase::SetPatientBaseinfo(const PatientBaseInfo& _patientBaseinfo)
{
    m_patientBaseinfo = _patientBaseinfo;
    m_patientBaseinfoHasBeenSet = true;
}

bool RequestCase::PatientBaseinfoHasBeenSet() const
{
    return m_patientBaseinfoHasBeenSet;
}

DoctorInfo RequestCase::GetDoctorInfo() const
{
    return m_doctorInfo;
}

void RequestCase::SetDoctorInfo(const DoctorInfo& _doctorInfo)
{
    m_doctorInfo = _doctorInfo;
    m_doctorInfoHasBeenSet = true;
}

bool RequestCase::DoctorInfoHasBeenSet() const
{
    return m_doctorInfoHasBeenSet;
}

string RequestCase::GetPresentIllness() const
{
    return m_presentIllness;
}

void RequestCase::SetPresentIllness(const string& _presentIllness)
{
    m_presentIllness = _presentIllness;
    m_presentIllnessHasBeenSet = true;
}

bool RequestCase::PresentIllnessHasBeenSet() const
{
    return m_presentIllnessHasBeenSet;
}

string RequestCase::GetPatientOther() const
{
    return m_patientOther;
}

void RequestCase::SetPatientOther(const string& _patientOther)
{
    m_patientOther = _patientOther;
    m_patientOtherHasBeenSet = true;
}

bool RequestCase::PatientOtherHasBeenSet() const
{
    return m_patientOtherHasBeenSet;
}

PatientHistory RequestCase::GetPatientHistory() const
{
    return m_patientHistory;
}

void RequestCase::SetPatientHistory(const PatientHistory& _patientHistory)
{
    m_patientHistory = _patientHistory;
    m_patientHistoryHasBeenSet = true;
}

bool RequestCase::PatientHistoryHasBeenSet() const
{
    return m_patientHistoryHasBeenSet;
}

PatientFamilyHistory RequestCase::GetPatientFamilyHistory() const
{
    return m_patientFamilyHistory;
}

void RequestCase::SetPatientFamilyHistory(const PatientFamilyHistory& _patientFamilyHistory)
{
    m_patientFamilyHistory = _patientFamilyHistory;
    m_patientFamilyHistoryHasBeenSet = true;
}

bool RequestCase::PatientFamilyHistoryHasBeenSet() const
{
    return m_patientFamilyHistoryHasBeenSet;
}

PhysicalExam RequestCase::GetPhysicalExam() const
{
    return m_physicalExam;
}

void RequestCase::SetPhysicalExam(const PhysicalExam& _physicalExam)
{
    m_physicalExam = _physicalExam;
    m_physicalExamHasBeenSet = true;
}

bool RequestCase::PhysicalExamHasBeenSet() const
{
    return m_physicalExamHasBeenSet;
}

vector<EmrDiagnosises> RequestCase::GetEmrDiagnosises() const
{
    return m_emrDiagnosises;
}

void RequestCase::SetEmrDiagnosises(const vector<EmrDiagnosises>& _emrDiagnosises)
{
    m_emrDiagnosises = _emrDiagnosises;
    m_emrDiagnosisesHasBeenSet = true;
}

bool RequestCase::EmrDiagnosisesHasBeenSet() const
{
    return m_emrDiagnosisesHasBeenSet;
}

vector<DrugUsage> RequestCase::GetPrescriptions() const
{
    return m_prescriptions;
}

void RequestCase::SetPrescriptions(const vector<DrugUsage>& _prescriptions)
{
    m_prescriptions = _prescriptions;
    m_prescriptionsHasBeenSet = true;
}

bool RequestCase::PrescriptionsHasBeenSet() const
{
    return m_prescriptionsHasBeenSet;
}

