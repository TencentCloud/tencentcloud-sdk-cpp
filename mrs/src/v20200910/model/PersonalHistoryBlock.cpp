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

#include <tencentcloud/mrs/v20200910/model/PersonalHistoryBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

PersonalHistoryBlock::PersonalHistoryBlock() :
    m_birthPlaceHasBeenSet(false),
    m_livePlaceHasBeenSet(false),
    m_jobHasBeenSet(false),
    m_smokeHistoryHasBeenSet(false),
    m_alcoholicHistoryHasBeenSet(false),
    m_menstrualHistoryHasBeenSet(false),
    m_obstericalHistoryHasBeenSet(false),
    m_familyHistoryHasBeenSet(false)
{
}

CoreInternalOutcome PersonalHistoryBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BirthPlace") && !value["BirthPlace"].IsNull())
    {
        if (!value["BirthPlace"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PersonalHistoryBlock.BirthPlace` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_birthPlace.Deserialize(value["BirthPlace"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_birthPlaceHasBeenSet = true;
    }

    if (value.HasMember("LivePlace") && !value["LivePlace"].IsNull())
    {
        if (!value["LivePlace"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PersonalHistoryBlock.LivePlace` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_livePlace.Deserialize(value["LivePlace"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_livePlaceHasBeenSet = true;
    }

    if (value.HasMember("Job") && !value["Job"].IsNull())
    {
        if (!value["Job"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PersonalHistoryBlock.Job` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_job.Deserialize(value["Job"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jobHasBeenSet = true;
    }

    if (value.HasMember("SmokeHistory") && !value["SmokeHistory"].IsNull())
    {
        if (!value["SmokeHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PersonalHistoryBlock.SmokeHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_smokeHistory.Deserialize(value["SmokeHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_smokeHistoryHasBeenSet = true;
    }

    if (value.HasMember("AlcoholicHistory") && !value["AlcoholicHistory"].IsNull())
    {
        if (!value["AlcoholicHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PersonalHistoryBlock.AlcoholicHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_alcoholicHistory.Deserialize(value["AlcoholicHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_alcoholicHistoryHasBeenSet = true;
    }

    if (value.HasMember("MenstrualHistory") && !value["MenstrualHistory"].IsNull())
    {
        if (!value["MenstrualHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PersonalHistoryBlock.MenstrualHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_menstrualHistory.Deserialize(value["MenstrualHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_menstrualHistoryHasBeenSet = true;
    }

    if (value.HasMember("ObstericalHistory") && !value["ObstericalHistory"].IsNull())
    {
        if (!value["ObstericalHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PersonalHistoryBlock.ObstericalHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_obstericalHistory.Deserialize(value["ObstericalHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_obstericalHistoryHasBeenSet = true;
    }

    if (value.HasMember("FamilyHistory") && !value["FamilyHistory"].IsNull())
    {
        if (!value["FamilyHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PersonalHistoryBlock.FamilyHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_familyHistory.Deserialize(value["FamilyHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_familyHistoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonalHistoryBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_birthPlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthPlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_birthPlace.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_livePlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivePlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_livePlace.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_jobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Job";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_job.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_smokeHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmokeHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smokeHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_alcoholicHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlcoholicHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_alcoholicHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_menstrualHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenstrualHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_menstrualHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_obstericalHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObstericalHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_obstericalHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_familyHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FamilyHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_familyHistory.ToJsonObject(value[key.c_str()], allocator);
    }

}


BirthPlaceBlock PersonalHistoryBlock::GetBirthPlace() const
{
    return m_birthPlace;
}

void PersonalHistoryBlock::SetBirthPlace(const BirthPlaceBlock& _birthPlace)
{
    m_birthPlace = _birthPlace;
    m_birthPlaceHasBeenSet = true;
}

bool PersonalHistoryBlock::BirthPlaceHasBeenSet() const
{
    return m_birthPlaceHasBeenSet;
}

BirthPlaceBlock PersonalHistoryBlock::GetLivePlace() const
{
    return m_livePlace;
}

void PersonalHistoryBlock::SetLivePlace(const BirthPlaceBlock& _livePlace)
{
    m_livePlace = _livePlace;
    m_livePlaceHasBeenSet = true;
}

bool PersonalHistoryBlock::LivePlaceHasBeenSet() const
{
    return m_livePlaceHasBeenSet;
}

BirthPlaceBlock PersonalHistoryBlock::GetJob() const
{
    return m_job;
}

void PersonalHistoryBlock::SetJob(const BirthPlaceBlock& _job)
{
    m_job = _job;
    m_jobHasBeenSet = true;
}

bool PersonalHistoryBlock::JobHasBeenSet() const
{
    return m_jobHasBeenSet;
}

SmokeHistoryBlock PersonalHistoryBlock::GetSmokeHistory() const
{
    return m_smokeHistory;
}

void PersonalHistoryBlock::SetSmokeHistory(const SmokeHistoryBlock& _smokeHistory)
{
    m_smokeHistory = _smokeHistory;
    m_smokeHistoryHasBeenSet = true;
}

bool PersonalHistoryBlock::SmokeHistoryHasBeenSet() const
{
    return m_smokeHistoryHasBeenSet;
}

SmokeHistoryBlock PersonalHistoryBlock::GetAlcoholicHistory() const
{
    return m_alcoholicHistory;
}

void PersonalHistoryBlock::SetAlcoholicHistory(const SmokeHistoryBlock& _alcoholicHistory)
{
    m_alcoholicHistory = _alcoholicHistory;
    m_alcoholicHistoryHasBeenSet = true;
}

bool PersonalHistoryBlock::AlcoholicHistoryHasBeenSet() const
{
    return m_alcoholicHistoryHasBeenSet;
}

MenstrualHistoryBlock PersonalHistoryBlock::GetMenstrualHistory() const
{
    return m_menstrualHistory;
}

void PersonalHistoryBlock::SetMenstrualHistory(const MenstrualHistoryBlock& _menstrualHistory)
{
    m_menstrualHistory = _menstrualHistory;
    m_menstrualHistoryHasBeenSet = true;
}

bool PersonalHistoryBlock::MenstrualHistoryHasBeenSet() const
{
    return m_menstrualHistoryHasBeenSet;
}

ObstetricalHistoryBlock PersonalHistoryBlock::GetObstericalHistory() const
{
    return m_obstericalHistory;
}

void PersonalHistoryBlock::SetObstericalHistory(const ObstetricalHistoryBlock& _obstericalHistory)
{
    m_obstericalHistory = _obstericalHistory;
    m_obstericalHistoryHasBeenSet = true;
}

bool PersonalHistoryBlock::ObstericalHistoryHasBeenSet() const
{
    return m_obstericalHistoryHasBeenSet;
}

FamilyHistoryBlock PersonalHistoryBlock::GetFamilyHistory() const
{
    return m_familyHistory;
}

void PersonalHistoryBlock::SetFamilyHistory(const FamilyHistoryBlock& _familyHistory)
{
    m_familyHistory = _familyHistory;
    m_familyHistoryHasBeenSet = true;
}

bool PersonalHistoryBlock::FamilyHistoryHasBeenSet() const
{
    return m_familyHistoryHasBeenSet;
}

