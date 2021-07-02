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

#include <tencentcloud/mrs/v20200910/model/HealthHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

HealthHistory::HealthHistory() :
    m_diseaseHistoryHasBeenSet(false),
    m_familyHistoryHasBeenSet(false),
    m_marryHistoryHasBeenSet(false),
    m_personalHistoryHasBeenSet(false),
    m_menstrualHistoryHasBeenSet(false)
{
}

CoreInternalOutcome HealthHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiseaseHistory") && !value["DiseaseHistory"].IsNull())
    {
        if (!value["DiseaseHistory"].IsObject())
        {
            return CoreInternalOutcome(Error("response `HealthHistory.DiseaseHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diseaseHistory.Deserialize(value["DiseaseHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diseaseHistoryHasBeenSet = true;
    }

    if (value.HasMember("FamilyHistory") && !value["FamilyHistory"].IsNull())
    {
        if (!value["FamilyHistory"].IsObject())
        {
            return CoreInternalOutcome(Error("response `HealthHistory.FamilyHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_familyHistory.Deserialize(value["FamilyHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_familyHistoryHasBeenSet = true;
    }

    if (value.HasMember("MarryHistory") && !value["MarryHistory"].IsNull())
    {
        if (!value["MarryHistory"].IsObject())
        {
            return CoreInternalOutcome(Error("response `HealthHistory.MarryHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_marryHistory.Deserialize(value["MarryHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_marryHistoryHasBeenSet = true;
    }

    if (value.HasMember("PersonalHistory") && !value["PersonalHistory"].IsNull())
    {
        if (!value["PersonalHistory"].IsObject())
        {
            return CoreInternalOutcome(Error("response `HealthHistory.PersonalHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_personalHistory.Deserialize(value["PersonalHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personalHistoryHasBeenSet = true;
    }

    if (value.HasMember("MenstrualHistory") && !value["MenstrualHistory"].IsNull())
    {
        if (!value["MenstrualHistory"].IsObject())
        {
            return CoreInternalOutcome(Error("response `HealthHistory.MenstrualHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_menstrualHistory.Deserialize(value["MenstrualHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_menstrualHistoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diseaseHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseaseHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diseaseHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_familyHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FamilyHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_familyHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_marryHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarryHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_marryHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_personalHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonalHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_personalHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_menstrualHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenstrualHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_menstrualHistory.ToJsonObject(value[key.c_str()], allocator);
    }

}


DiseaseHistory HealthHistory::GetDiseaseHistory() const
{
    return m_diseaseHistory;
}

void HealthHistory::SetDiseaseHistory(const DiseaseHistory& _diseaseHistory)
{
    m_diseaseHistory = _diseaseHistory;
    m_diseaseHistoryHasBeenSet = true;
}

bool HealthHistory::DiseaseHistoryHasBeenSet() const
{
    return m_diseaseHistoryHasBeenSet;
}

FamilyHistory HealthHistory::GetFamilyHistory() const
{
    return m_familyHistory;
}

void HealthHistory::SetFamilyHistory(const FamilyHistory& _familyHistory)
{
    m_familyHistory = _familyHistory;
    m_familyHistoryHasBeenSet = true;
}

bool HealthHistory::FamilyHistoryHasBeenSet() const
{
    return m_familyHistoryHasBeenSet;
}

MarryHistory HealthHistory::GetMarryHistory() const
{
    return m_marryHistory;
}

void HealthHistory::SetMarryHistory(const MarryHistory& _marryHistory)
{
    m_marryHistory = _marryHistory;
    m_marryHistoryHasBeenSet = true;
}

bool HealthHistory::MarryHistoryHasBeenSet() const
{
    return m_marryHistoryHasBeenSet;
}

PersonalHistory HealthHistory::GetPersonalHistory() const
{
    return m_personalHistory;
}

void HealthHistory::SetPersonalHistory(const PersonalHistory& _personalHistory)
{
    m_personalHistory = _personalHistory;
    m_personalHistoryHasBeenSet = true;
}

bool HealthHistory::PersonalHistoryHasBeenSet() const
{
    return m_personalHistoryHasBeenSet;
}

MenstrualHistory HealthHistory::GetMenstrualHistory() const
{
    return m_menstrualHistory;
}

void HealthHistory::SetMenstrualHistory(const MenstrualHistory& _menstrualHistory)
{
    m_menstrualHistory = _menstrualHistory;
    m_menstrualHistoryHasBeenSet = true;
}

bool HealthHistory::MenstrualHistoryHasBeenSet() const
{
    return m_menstrualHistoryHasBeenSet;
}

