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

#include <tencentcloud/mrs/v20200910/model/CaseHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

CaseHistory::CaseHistory() :
    m_treatmentHasBeenSet(false),
    m_healthHistoryHasBeenSet(false),
    m_caseHistoryListHasBeenSet(false)
{
}

CoreInternalOutcome CaseHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Treatment") && !value["Treatment"].IsNull())
    {
        if (!value["Treatment"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CaseHistory.Treatment` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_treatment.Deserialize(value["Treatment"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_treatmentHasBeenSet = true;
    }

    if (value.HasMember("HealthHistory") && !value["HealthHistory"].IsNull())
    {
        if (!value["HealthHistory"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CaseHistory.HealthHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthHistory.Deserialize(value["HealthHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthHistoryHasBeenSet = true;
    }

    if (value.HasMember("CaseHistoryList") && !value["CaseHistoryList"].IsNull())
    {
        if (!value["CaseHistoryList"].IsArray())
            return CoreInternalOutcome(Error("response `CaseHistory.CaseHistoryList` is not array type"));

        const rapidjson::Value &tmpValue = value["CaseHistoryList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Case item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_caseHistoryList.push_back(item);
        }
        m_caseHistoryListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CaseHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_treatmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Treatment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_treatment.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_healthHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_caseHistoryListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseHistoryList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_caseHistoryList.begin(); itr != m_caseHistoryList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


Treatment CaseHistory::GetTreatment() const
{
    return m_treatment;
}

void CaseHistory::SetTreatment(const Treatment& _treatment)
{
    m_treatment = _treatment;
    m_treatmentHasBeenSet = true;
}

bool CaseHistory::TreatmentHasBeenSet() const
{
    return m_treatmentHasBeenSet;
}

HealthHistory CaseHistory::GetHealthHistory() const
{
    return m_healthHistory;
}

void CaseHistory::SetHealthHistory(const HealthHistory& _healthHistory)
{
    m_healthHistory = _healthHistory;
    m_healthHistoryHasBeenSet = true;
}

bool CaseHistory::HealthHistoryHasBeenSet() const
{
    return m_healthHistoryHasBeenSet;
}

vector<Case> CaseHistory::GetCaseHistoryList() const
{
    return m_caseHistoryList;
}

void CaseHistory::SetCaseHistoryList(const vector<Case>& _caseHistoryList)
{
    m_caseHistoryList = _caseHistoryList;
    m_caseHistoryListHasBeenSet = true;
}

bool CaseHistory::CaseHistoryListHasBeenSet() const
{
    return m_caseHistoryListHasBeenSet;
}

