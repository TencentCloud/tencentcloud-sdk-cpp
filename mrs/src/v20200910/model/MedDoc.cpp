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

#include <tencentcloud/mrs/v20200910/model/MedDoc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

MedDoc::MedDoc() :
    m_adviceHasBeenSet(false),
    m_diagnosisHasBeenSet(false),
    m_diseaseMedicalHistoryHasBeenSet(false),
    m_personalMedicalHistoryHasBeenSet(false),
    m_obstericalMedicalHistoryHasBeenSet(false),
    m_familyMedicalHistoryHasBeenSet(false),
    m_menstrualMedicalHistoryHasBeenSet(false),
    m_treatmentRecordHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome MedDoc::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Advice") && !value["Advice"].IsNull())
    {
        if (!value["Advice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MedDoc.Advice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advice.Deserialize(value["Advice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adviceHasBeenSet = true;
    }

    if (value.HasMember("Diagnosis") && !value["Diagnosis"].IsNull())
    {
        if (!value["Diagnosis"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MedDoc.Diagnosis` is not array type"));

        const rapidjson::Value &tmpValue = value["Diagnosis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiagCertItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_diagnosis.push_back(item);
        }
        m_diagnosisHasBeenSet = true;
    }

    if (value.HasMember("DiseaseMedicalHistory") && !value["DiseaseMedicalHistory"].IsNull())
    {
        if (!value["DiseaseMedicalHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MedDoc.DiseaseMedicalHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diseaseMedicalHistory.Deserialize(value["DiseaseMedicalHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diseaseMedicalHistoryHasBeenSet = true;
    }

    if (value.HasMember("PersonalMedicalHistory") && !value["PersonalMedicalHistory"].IsNull())
    {
        if (!value["PersonalMedicalHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MedDoc.PersonalMedicalHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_personalMedicalHistory.Deserialize(value["PersonalMedicalHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personalMedicalHistoryHasBeenSet = true;
    }

    if (value.HasMember("ObstericalMedicalHistory") && !value["ObstericalMedicalHistory"].IsNull())
    {
        if (!value["ObstericalMedicalHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MedDoc.ObstericalMedicalHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_obstericalMedicalHistory.Deserialize(value["ObstericalMedicalHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_obstericalMedicalHistoryHasBeenSet = true;
    }

    if (value.HasMember("FamilyMedicalHistory") && !value["FamilyMedicalHistory"].IsNull())
    {
        if (!value["FamilyMedicalHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MedDoc.FamilyMedicalHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_familyMedicalHistory.Deserialize(value["FamilyMedicalHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_familyMedicalHistoryHasBeenSet = true;
    }

    if (value.HasMember("MenstrualMedicalHistory") && !value["MenstrualMedicalHistory"].IsNull())
    {
        if (!value["MenstrualMedicalHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MedDoc.MenstrualMedicalHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_menstrualMedicalHistory.Deserialize(value["MenstrualMedicalHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_menstrualMedicalHistoryHasBeenSet = true;
    }

    if (value.HasMember("TreatmentRecord") && !value["TreatmentRecord"].IsNull())
    {
        if (!value["TreatmentRecord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MedDoc.TreatmentRecord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_treatmentRecord.Deserialize(value["TreatmentRecord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_treatmentRecordHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MedDoc.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MedDoc::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_adviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Advice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Diagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_diagnosis.begin(); itr != m_diagnosis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_diseaseMedicalHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseaseMedicalHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diseaseMedicalHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_personalMedicalHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonalMedicalHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_personalMedicalHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_obstericalMedicalHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObstericalMedicalHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_obstericalMedicalHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_familyMedicalHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FamilyMedicalHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_familyMedicalHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_menstrualMedicalHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenstrualMedicalHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_menstrualMedicalHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_treatmentRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreatmentRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_treatmentRecord.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


Advice MedDoc::GetAdvice() const
{
    return m_advice;
}

void MedDoc::SetAdvice(const Advice& _advice)
{
    m_advice = _advice;
    m_adviceHasBeenSet = true;
}

bool MedDoc::AdviceHasBeenSet() const
{
    return m_adviceHasBeenSet;
}

vector<DiagCertItem> MedDoc::GetDiagnosis() const
{
    return m_diagnosis;
}

void MedDoc::SetDiagnosis(const vector<DiagCertItem>& _diagnosis)
{
    m_diagnosis = _diagnosis;
    m_diagnosisHasBeenSet = true;
}

bool MedDoc::DiagnosisHasBeenSet() const
{
    return m_diagnosisHasBeenSet;
}

DiseaseMedicalHistory MedDoc::GetDiseaseMedicalHistory() const
{
    return m_diseaseMedicalHistory;
}

void MedDoc::SetDiseaseMedicalHistory(const DiseaseMedicalHistory& _diseaseMedicalHistory)
{
    m_diseaseMedicalHistory = _diseaseMedicalHistory;
    m_diseaseMedicalHistoryHasBeenSet = true;
}

bool MedDoc::DiseaseMedicalHistoryHasBeenSet() const
{
    return m_diseaseMedicalHistoryHasBeenSet;
}

PersonalMedicalHistory MedDoc::GetPersonalMedicalHistory() const
{
    return m_personalMedicalHistory;
}

void MedDoc::SetPersonalMedicalHistory(const PersonalMedicalHistory& _personalMedicalHistory)
{
    m_personalMedicalHistory = _personalMedicalHistory;
    m_personalMedicalHistoryHasBeenSet = true;
}

bool MedDoc::PersonalMedicalHistoryHasBeenSet() const
{
    return m_personalMedicalHistoryHasBeenSet;
}

ObstericalMedicalHistory MedDoc::GetObstericalMedicalHistory() const
{
    return m_obstericalMedicalHistory;
}

void MedDoc::SetObstericalMedicalHistory(const ObstericalMedicalHistory& _obstericalMedicalHistory)
{
    m_obstericalMedicalHistory = _obstericalMedicalHistory;
    m_obstericalMedicalHistoryHasBeenSet = true;
}

bool MedDoc::ObstericalMedicalHistoryHasBeenSet() const
{
    return m_obstericalMedicalHistoryHasBeenSet;
}

FamilyMedicalHistory MedDoc::GetFamilyMedicalHistory() const
{
    return m_familyMedicalHistory;
}

void MedDoc::SetFamilyMedicalHistory(const FamilyMedicalHistory& _familyMedicalHistory)
{
    m_familyMedicalHistory = _familyMedicalHistory;
    m_familyMedicalHistoryHasBeenSet = true;
}

bool MedDoc::FamilyMedicalHistoryHasBeenSet() const
{
    return m_familyMedicalHistoryHasBeenSet;
}

MenstrualMedicalHistory MedDoc::GetMenstrualMedicalHistory() const
{
    return m_menstrualMedicalHistory;
}

void MedDoc::SetMenstrualMedicalHistory(const MenstrualMedicalHistory& _menstrualMedicalHistory)
{
    m_menstrualMedicalHistory = _menstrualMedicalHistory;
    m_menstrualMedicalHistoryHasBeenSet = true;
}

bool MedDoc::MenstrualMedicalHistoryHasBeenSet() const
{
    return m_menstrualMedicalHistoryHasBeenSet;
}

TreatmentRecord MedDoc::GetTreatmentRecord() const
{
    return m_treatmentRecord;
}

void MedDoc::SetTreatmentRecord(const TreatmentRecord& _treatmentRecord)
{
    m_treatmentRecord = _treatmentRecord;
    m_treatmentRecordHasBeenSet = true;
}

bool MedDoc::TreatmentRecordHasBeenSet() const
{
    return m_treatmentRecordHasBeenSet;
}

int64_t MedDoc::GetPage() const
{
    return m_page;
}

void MedDoc::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool MedDoc::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

