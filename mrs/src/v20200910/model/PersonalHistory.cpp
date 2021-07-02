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

#include <tencentcloud/mrs/v20200910/model/PersonalHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

PersonalHistory::PersonalHistory() :
    m_birthPlaceHasBeenSet(false),
    m_jobHasBeenSet(false),
    m_livePlaceHasBeenSet(false),
    m_personalHasBeenSet(false),
    m_smokeHasBeenSet(false),
    m_alcoholicHasBeenSet(false)
{
}

CoreInternalOutcome PersonalHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BirthPlace") && !value["BirthPlace"].IsNull())
    {
        if (!value["BirthPlace"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalHistory.BirthPlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthPlace = string(value["BirthPlace"].GetString());
        m_birthPlaceHasBeenSet = true;
    }

    if (value.HasMember("Job") && !value["Job"].IsNull())
    {
        if (!value["Job"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalHistory.Job` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_job = string(value["Job"].GetString());
        m_jobHasBeenSet = true;
    }

    if (value.HasMember("LivePlace") && !value["LivePlace"].IsNull())
    {
        if (!value["LivePlace"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalHistory.LivePlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_livePlace = string(value["LivePlace"].GetString());
        m_livePlaceHasBeenSet = true;
    }

    if (value.HasMember("Personal") && !value["Personal"].IsNull())
    {
        if (!value["Personal"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalHistory.Personal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personal = string(value["Personal"].GetString());
        m_personalHasBeenSet = true;
    }

    if (value.HasMember("Smoke") && !value["Smoke"].IsNull())
    {
        if (!value["Smoke"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalHistory.Smoke` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_smoke = string(value["Smoke"].GetString());
        m_smokeHasBeenSet = true;
    }

    if (value.HasMember("Alcoholic") && !value["Alcoholic"].IsNull())
    {
        if (!value["Alcoholic"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonalHistory.Alcoholic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alcoholic = string(value["Alcoholic"].GetString());
        m_alcoholicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonalHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_birthPlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthPlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthPlace.c_str(), allocator).Move(), allocator);
    }

    if (m_jobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Job";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_job.c_str(), allocator).Move(), allocator);
    }

    if (m_livePlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivePlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_livePlace.c_str(), allocator).Move(), allocator);
    }

    if (m_personalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Personal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personal.c_str(), allocator).Move(), allocator);
    }

    if (m_smokeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Smoke";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_smoke.c_str(), allocator).Move(), allocator);
    }

    if (m_alcoholicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alcoholic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alcoholic.c_str(), allocator).Move(), allocator);
    }

}


string PersonalHistory::GetBirthPlace() const
{
    return m_birthPlace;
}

void PersonalHistory::SetBirthPlace(const string& _birthPlace)
{
    m_birthPlace = _birthPlace;
    m_birthPlaceHasBeenSet = true;
}

bool PersonalHistory::BirthPlaceHasBeenSet() const
{
    return m_birthPlaceHasBeenSet;
}

string PersonalHistory::GetJob() const
{
    return m_job;
}

void PersonalHistory::SetJob(const string& _job)
{
    m_job = _job;
    m_jobHasBeenSet = true;
}

bool PersonalHistory::JobHasBeenSet() const
{
    return m_jobHasBeenSet;
}

string PersonalHistory::GetLivePlace() const
{
    return m_livePlace;
}

void PersonalHistory::SetLivePlace(const string& _livePlace)
{
    m_livePlace = _livePlace;
    m_livePlaceHasBeenSet = true;
}

bool PersonalHistory::LivePlaceHasBeenSet() const
{
    return m_livePlaceHasBeenSet;
}

string PersonalHistory::GetPersonal() const
{
    return m_personal;
}

void PersonalHistory::SetPersonal(const string& _personal)
{
    m_personal = _personal;
    m_personalHasBeenSet = true;
}

bool PersonalHistory::PersonalHasBeenSet() const
{
    return m_personalHasBeenSet;
}

string PersonalHistory::GetSmoke() const
{
    return m_smoke;
}

void PersonalHistory::SetSmoke(const string& _smoke)
{
    m_smoke = _smoke;
    m_smokeHasBeenSet = true;
}

bool PersonalHistory::SmokeHasBeenSet() const
{
    return m_smokeHasBeenSet;
}

string PersonalHistory::GetAlcoholic() const
{
    return m_alcoholic;
}

void PersonalHistory::SetAlcoholic(const string& _alcoholic)
{
    m_alcoholic = _alcoholic;
    m_alcoholicHasBeenSet = true;
}

bool PersonalHistory::AlcoholicHasBeenSet() const
{
    return m_alcoholicHasBeenSet;
}

