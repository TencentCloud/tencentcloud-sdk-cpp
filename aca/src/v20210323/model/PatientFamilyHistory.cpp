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

#include <tencentcloud/aca/v20210323/model/PatientFamilyHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

PatientFamilyHistory::PatientFamilyHistory() :
    m_familyDiseaseHistoryHasBeenSet(false),
    m_relationHasBeenSet(false),
    m_currentSituationHasBeenSet(false)
{
}

CoreInternalOutcome PatientFamilyHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FamilyDiseaseHistory") && !value["FamilyDiseaseHistory"].IsNull())
    {
        if (!value["FamilyDiseaseHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatientFamilyHistory.FamilyDiseaseHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_familyDiseaseHistory = string(value["FamilyDiseaseHistory"].GetString());
        m_familyDiseaseHistoryHasBeenSet = true;
    }

    if (value.HasMember("Relation") && !value["Relation"].IsNull())
    {
        if (!value["Relation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatientFamilyHistory.Relation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relation = string(value["Relation"].GetString());
        m_relationHasBeenSet = true;
    }

    if (value.HasMember("CurrentSituation") && !value["CurrentSituation"].IsNull())
    {
        if (!value["CurrentSituation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatientFamilyHistory.CurrentSituation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentSituation = string(value["CurrentSituation"].GetString());
        m_currentSituationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PatientFamilyHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_familyDiseaseHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FamilyDiseaseHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_familyDiseaseHistory.c_str(), allocator).Move(), allocator);
    }

    if (m_relationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Relation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relation.c_str(), allocator).Move(), allocator);
    }

    if (m_currentSituationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentSituation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentSituation.c_str(), allocator).Move(), allocator);
    }

}


string PatientFamilyHistory::GetFamilyDiseaseHistory() const
{
    return m_familyDiseaseHistory;
}

void PatientFamilyHistory::SetFamilyDiseaseHistory(const string& _familyDiseaseHistory)
{
    m_familyDiseaseHistory = _familyDiseaseHistory;
    m_familyDiseaseHistoryHasBeenSet = true;
}

bool PatientFamilyHistory::FamilyDiseaseHistoryHasBeenSet() const
{
    return m_familyDiseaseHistoryHasBeenSet;
}

string PatientFamilyHistory::GetRelation() const
{
    return m_relation;
}

void PatientFamilyHistory::SetRelation(const string& _relation)
{
    m_relation = _relation;
    m_relationHasBeenSet = true;
}

bool PatientFamilyHistory::RelationHasBeenSet() const
{
    return m_relationHasBeenSet;
}

string PatientFamilyHistory::GetCurrentSituation() const
{
    return m_currentSituation;
}

void PatientFamilyHistory::SetCurrentSituation(const string& _currentSituation)
{
    m_currentSituation = _currentSituation;
    m_currentSituationHasBeenSet = true;
}

bool PatientFamilyHistory::CurrentSituationHasBeenSet() const
{
    return m_currentSituationHasBeenSet;
}

