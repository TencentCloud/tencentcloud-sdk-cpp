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

#include <tencentcloud/vcube/v20220410/model/Feature.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

Feature::Feature() :
    m_idHasBeenSet(false),
    m_featureIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_trialHasBeenSet(false),
    m_trialCountHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome Feature::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Feature.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("FeatureId") && !value["FeatureId"].IsNull())
    {
        if (!value["FeatureId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Feature.FeatureId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_featureId = value["FeatureId"].GetUint64();
        m_featureIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Feature.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Feature.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Trial") && !value["Trial"].IsNull())
    {
        if (!value["Trial"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Feature.Trial` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_trial = value["Trial"].GetBool();
        m_trialHasBeenSet = true;
    }

    if (value.HasMember("TrialCount") && !value["TrialCount"].IsNull())
    {
        if (!value["TrialCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Feature.TrialCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trialCount = value["TrialCount"].GetUint64();
        m_trialCountHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Feature.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Feature.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Feature.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Feature::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_featureIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_featureId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_trialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trial, allocator);
    }

    if (m_trialCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrialCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trialCount, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Feature::GetId() const
{
    return m_id;
}

void Feature::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Feature::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t Feature::GetFeatureId() const
{
    return m_featureId;
}

void Feature::SetFeatureId(const uint64_t& _featureId)
{
    m_featureId = _featureId;
    m_featureIdHasBeenSet = true;
}

bool Feature::FeatureIdHasBeenSet() const
{
    return m_featureIdHasBeenSet;
}

string Feature::GetName() const
{
    return m_name;
}

void Feature::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Feature::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Feature::GetType() const
{
    return m_type;
}

void Feature::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Feature::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool Feature::GetTrial() const
{
    return m_trial;
}

void Feature::SetTrial(const bool& _trial)
{
    m_trial = _trial;
    m_trialHasBeenSet = true;
}

bool Feature::TrialHasBeenSet() const
{
    return m_trialHasBeenSet;
}

uint64_t Feature::GetTrialCount() const
{
    return m_trialCount;
}

void Feature::SetTrialCount(const uint64_t& _trialCount)
{
    m_trialCount = _trialCount;
    m_trialCountHasBeenSet = true;
}

bool Feature::TrialCountHasBeenSet() const
{
    return m_trialCountHasBeenSet;
}

uint64_t Feature::GetDuration() const
{
    return m_duration;
}

void Feature::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool Feature::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string Feature::GetCreatedAt() const
{
    return m_createdAt;
}

void Feature::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Feature::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string Feature::GetUpdatedAt() const
{
    return m_updatedAt;
}

void Feature::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool Feature::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

