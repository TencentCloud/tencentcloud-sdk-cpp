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

#include <tencentcloud/mrs/v20200910/model/Hospitalization.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Hospitalization::Hospitalization() :
    m_admissionTimeHasBeenSet(false),
    m_dischargeTimeHasBeenSet(false),
    m_admissionDaysHasBeenSet(false),
    m_admissionDignosisHasBeenSet(false),
    m_admissionConditionHasBeenSet(false),
    m_diagnosisTreatmentHasBeenSet(false),
    m_dischargeDiagnosisHasBeenSet(false),
    m_dischargeInstructionHasBeenSet(false),
    m_admissionDiagnosisHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome Hospitalization::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AdmissionTime") && !value["AdmissionTime"].IsNull())
    {
        if (!value["AdmissionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hospitalization.AdmissionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_admissionTime = string(value["AdmissionTime"].GetString());
        m_admissionTimeHasBeenSet = true;
    }

    if (value.HasMember("DischargeTime") && !value["DischargeTime"].IsNull())
    {
        if (!value["DischargeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hospitalization.DischargeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dischargeTime = string(value["DischargeTime"].GetString());
        m_dischargeTimeHasBeenSet = true;
    }

    if (value.HasMember("AdmissionDays") && !value["AdmissionDays"].IsNull())
    {
        if (!value["AdmissionDays"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hospitalization.AdmissionDays` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_admissionDays = string(value["AdmissionDays"].GetString());
        m_admissionDaysHasBeenSet = true;
    }

    if (value.HasMember("AdmissionDignosis") && !value["AdmissionDignosis"].IsNull())
    {
        if (!value["AdmissionDignosis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hospitalization.AdmissionDignosis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_admissionDignosis = string(value["AdmissionDignosis"].GetString());
        m_admissionDignosisHasBeenSet = true;
    }

    if (value.HasMember("AdmissionCondition") && !value["AdmissionCondition"].IsNull())
    {
        if (!value["AdmissionCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hospitalization.AdmissionCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_admissionCondition = string(value["AdmissionCondition"].GetString());
        m_admissionConditionHasBeenSet = true;
    }

    if (value.HasMember("DiagnosisTreatment") && !value["DiagnosisTreatment"].IsNull())
    {
        if (!value["DiagnosisTreatment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hospitalization.DiagnosisTreatment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagnosisTreatment = string(value["DiagnosisTreatment"].GetString());
        m_diagnosisTreatmentHasBeenSet = true;
    }

    if (value.HasMember("DischargeDiagnosis") && !value["DischargeDiagnosis"].IsNull())
    {
        if (!value["DischargeDiagnosis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hospitalization.DischargeDiagnosis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dischargeDiagnosis = string(value["DischargeDiagnosis"].GetString());
        m_dischargeDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("DischargeInstruction") && !value["DischargeInstruction"].IsNull())
    {
        if (!value["DischargeInstruction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hospitalization.DischargeInstruction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dischargeInstruction = string(value["DischargeInstruction"].GetString());
        m_dischargeInstructionHasBeenSet = true;
    }

    if (value.HasMember("AdmissionDiagnosis") && !value["AdmissionDiagnosis"].IsNull())
    {
        if (!value["AdmissionDiagnosis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hospitalization.AdmissionDiagnosis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_admissionDiagnosis = string(value["AdmissionDiagnosis"].GetString());
        m_admissionDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Hospitalization.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Hospitalization::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_admissionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdmissionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_admissionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dischargeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DischargeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dischargeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_admissionDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdmissionDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_admissionDays.c_str(), allocator).Move(), allocator);
    }

    if (m_admissionDignosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdmissionDignosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_admissionDignosis.c_str(), allocator).Move(), allocator);
    }

    if (m_admissionConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdmissionCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_admissionCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_diagnosisTreatmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagnosisTreatment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagnosisTreatment.c_str(), allocator).Move(), allocator);
    }

    if (m_dischargeDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DischargeDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dischargeDiagnosis.c_str(), allocator).Move(), allocator);
    }

    if (m_dischargeInstructionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DischargeInstruction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dischargeInstruction.c_str(), allocator).Move(), allocator);
    }

    if (m_admissionDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdmissionDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_admissionDiagnosis.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


string Hospitalization::GetAdmissionTime() const
{
    return m_admissionTime;
}

void Hospitalization::SetAdmissionTime(const string& _admissionTime)
{
    m_admissionTime = _admissionTime;
    m_admissionTimeHasBeenSet = true;
}

bool Hospitalization::AdmissionTimeHasBeenSet() const
{
    return m_admissionTimeHasBeenSet;
}

string Hospitalization::GetDischargeTime() const
{
    return m_dischargeTime;
}

void Hospitalization::SetDischargeTime(const string& _dischargeTime)
{
    m_dischargeTime = _dischargeTime;
    m_dischargeTimeHasBeenSet = true;
}

bool Hospitalization::DischargeTimeHasBeenSet() const
{
    return m_dischargeTimeHasBeenSet;
}

string Hospitalization::GetAdmissionDays() const
{
    return m_admissionDays;
}

void Hospitalization::SetAdmissionDays(const string& _admissionDays)
{
    m_admissionDays = _admissionDays;
    m_admissionDaysHasBeenSet = true;
}

bool Hospitalization::AdmissionDaysHasBeenSet() const
{
    return m_admissionDaysHasBeenSet;
}

string Hospitalization::GetAdmissionDignosis() const
{
    return m_admissionDignosis;
}

void Hospitalization::SetAdmissionDignosis(const string& _admissionDignosis)
{
    m_admissionDignosis = _admissionDignosis;
    m_admissionDignosisHasBeenSet = true;
}

bool Hospitalization::AdmissionDignosisHasBeenSet() const
{
    return m_admissionDignosisHasBeenSet;
}

string Hospitalization::GetAdmissionCondition() const
{
    return m_admissionCondition;
}

void Hospitalization::SetAdmissionCondition(const string& _admissionCondition)
{
    m_admissionCondition = _admissionCondition;
    m_admissionConditionHasBeenSet = true;
}

bool Hospitalization::AdmissionConditionHasBeenSet() const
{
    return m_admissionConditionHasBeenSet;
}

string Hospitalization::GetDiagnosisTreatment() const
{
    return m_diagnosisTreatment;
}

void Hospitalization::SetDiagnosisTreatment(const string& _diagnosisTreatment)
{
    m_diagnosisTreatment = _diagnosisTreatment;
    m_diagnosisTreatmentHasBeenSet = true;
}

bool Hospitalization::DiagnosisTreatmentHasBeenSet() const
{
    return m_diagnosisTreatmentHasBeenSet;
}

string Hospitalization::GetDischargeDiagnosis() const
{
    return m_dischargeDiagnosis;
}

void Hospitalization::SetDischargeDiagnosis(const string& _dischargeDiagnosis)
{
    m_dischargeDiagnosis = _dischargeDiagnosis;
    m_dischargeDiagnosisHasBeenSet = true;
}

bool Hospitalization::DischargeDiagnosisHasBeenSet() const
{
    return m_dischargeDiagnosisHasBeenSet;
}

string Hospitalization::GetDischargeInstruction() const
{
    return m_dischargeInstruction;
}

void Hospitalization::SetDischargeInstruction(const string& _dischargeInstruction)
{
    m_dischargeInstruction = _dischargeInstruction;
    m_dischargeInstructionHasBeenSet = true;
}

bool Hospitalization::DischargeInstructionHasBeenSet() const
{
    return m_dischargeInstructionHasBeenSet;
}

string Hospitalization::GetAdmissionDiagnosis() const
{
    return m_admissionDiagnosis;
}

void Hospitalization::SetAdmissionDiagnosis(const string& _admissionDiagnosis)
{
    m_admissionDiagnosis = _admissionDiagnosis;
    m_admissionDiagnosisHasBeenSet = true;
}

bool Hospitalization::AdmissionDiagnosisHasBeenSet() const
{
    return m_admissionDiagnosisHasBeenSet;
}

int64_t Hospitalization::GetPage() const
{
    return m_page;
}

void Hospitalization::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool Hospitalization::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

