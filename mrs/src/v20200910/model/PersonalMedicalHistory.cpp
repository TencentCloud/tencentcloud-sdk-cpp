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

#include <tencentcloud/mrs/v20200910/model/PersonalMedicalHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

PersonalMedicalHistory::PersonalMedicalHistory() :
    m_birthPlaceHasBeenSet(false),
    m_livePlaceHasBeenSet(false),
    m_jobHasBeenSet(false),
    m_smokeHistoryHasBeenSet(false),
    m_alcoholicHistoryHasBeenSet(false)
{
}

CoreInternalOutcome PersonalMedicalHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BirthPlace") && !value["BirthPlace"].IsNull())
    {
        if (!value["BirthPlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonalMedicalHistory.BirthPlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthPlace = string(value["BirthPlace"].GetString());
        m_birthPlaceHasBeenSet = true;
    }

    if (value.HasMember("LivePlace") && !value["LivePlace"].IsNull())
    {
        if (!value["LivePlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonalMedicalHistory.LivePlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_livePlace = string(value["LivePlace"].GetString());
        m_livePlaceHasBeenSet = true;
    }

    if (value.HasMember("Job") && !value["Job"].IsNull())
    {
        if (!value["Job"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonalMedicalHistory.Job` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_job = string(value["Job"].GetString());
        m_jobHasBeenSet = true;
    }

    if (value.HasMember("SmokeHistory") && !value["SmokeHistory"].IsNull())
    {
        if (!value["SmokeHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonalMedicalHistory.SmokeHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_smokeHistory = string(value["SmokeHistory"].GetString());
        m_smokeHistoryHasBeenSet = true;
    }

    if (value.HasMember("AlcoholicHistory") && !value["AlcoholicHistory"].IsNull())
    {
        if (!value["AlcoholicHistory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonalMedicalHistory.AlcoholicHistory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alcoholicHistory = string(value["AlcoholicHistory"].GetString());
        m_alcoholicHistoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonalMedicalHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_birthPlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthPlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthPlace.c_str(), allocator).Move(), allocator);
    }

    if (m_livePlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivePlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_livePlace.c_str(), allocator).Move(), allocator);
    }

    if (m_jobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Job";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_job.c_str(), allocator).Move(), allocator);
    }

    if (m_smokeHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmokeHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_smokeHistory.c_str(), allocator).Move(), allocator);
    }

    if (m_alcoholicHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlcoholicHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alcoholicHistory.c_str(), allocator).Move(), allocator);
    }

}


string PersonalMedicalHistory::GetBirthPlace() const
{
    return m_birthPlace;
}

void PersonalMedicalHistory::SetBirthPlace(const string& _birthPlace)
{
    m_birthPlace = _birthPlace;
    m_birthPlaceHasBeenSet = true;
}

bool PersonalMedicalHistory::BirthPlaceHasBeenSet() const
{
    return m_birthPlaceHasBeenSet;
}

string PersonalMedicalHistory::GetLivePlace() const
{
    return m_livePlace;
}

void PersonalMedicalHistory::SetLivePlace(const string& _livePlace)
{
    m_livePlace = _livePlace;
    m_livePlaceHasBeenSet = true;
}

bool PersonalMedicalHistory::LivePlaceHasBeenSet() const
{
    return m_livePlaceHasBeenSet;
}

string PersonalMedicalHistory::GetJob() const
{
    return m_job;
}

void PersonalMedicalHistory::SetJob(const string& _job)
{
    m_job = _job;
    m_jobHasBeenSet = true;
}

bool PersonalMedicalHistory::JobHasBeenSet() const
{
    return m_jobHasBeenSet;
}

string PersonalMedicalHistory::GetSmokeHistory() const
{
    return m_smokeHistory;
}

void PersonalMedicalHistory::SetSmokeHistory(const string& _smokeHistory)
{
    m_smokeHistory = _smokeHistory;
    m_smokeHistoryHasBeenSet = true;
}

bool PersonalMedicalHistory::SmokeHistoryHasBeenSet() const
{
    return m_smokeHistoryHasBeenSet;
}

string PersonalMedicalHistory::GetAlcoholicHistory() const
{
    return m_alcoholicHistory;
}

void PersonalMedicalHistory::SetAlcoholicHistory(const string& _alcoholicHistory)
{
    m_alcoholicHistory = _alcoholicHistory;
    m_alcoholicHistoryHasBeenSet = true;
}

bool PersonalMedicalHistory::AlcoholicHistoryHasBeenSet() const
{
    return m_alcoholicHistoryHasBeenSet;
}

