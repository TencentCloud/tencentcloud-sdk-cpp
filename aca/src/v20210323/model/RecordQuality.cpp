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

#include <tencentcloud/aca/v20210323/model/RecordQuality.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

RecordQuality::RecordQuality() :
    m_hitHasBeenSet(false),
    m_completenessHasBeenSet(false),
    m_timelinessHasBeenSet(false),
    m_logicalHasBeenSet(false)
{
}

CoreInternalOutcome RecordQuality::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Hit") && !value["Hit"].IsNull())
    {
        if (!value["Hit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RecordQuality.Hit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hit = value["Hit"].GetBool();
        m_hitHasBeenSet = true;
    }

    if (value.HasMember("Completeness") && !value["Completeness"].IsNull())
    {
        if (!value["Completeness"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordQuality.Completeness` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_completeness = string(value["Completeness"].GetString());
        m_completenessHasBeenSet = true;
    }

    if (value.HasMember("Timeliness") && !value["Timeliness"].IsNull())
    {
        if (!value["Timeliness"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordQuality.Timeliness` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeliness = string(value["Timeliness"].GetString());
        m_timelinessHasBeenSet = true;
    }

    if (value.HasMember("Logical") && !value["Logical"].IsNull())
    {
        if (!value["Logical"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordQuality.Logical` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logical = string(value["Logical"].GetString());
        m_logicalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordQuality::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hit, allocator);
    }

    if (m_completenessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Completeness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_completeness.c_str(), allocator).Move(), allocator);
    }

    if (m_timelinessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeliness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeliness.c_str(), allocator).Move(), allocator);
    }

    if (m_logicalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logical";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logical.c_str(), allocator).Move(), allocator);
    }

}


bool RecordQuality::GetHit() const
{
    return m_hit;
}

void RecordQuality::SetHit(const bool& _hit)
{
    m_hit = _hit;
    m_hitHasBeenSet = true;
}

bool RecordQuality::HitHasBeenSet() const
{
    return m_hitHasBeenSet;
}

string RecordQuality::GetCompleteness() const
{
    return m_completeness;
}

void RecordQuality::SetCompleteness(const string& _completeness)
{
    m_completeness = _completeness;
    m_completenessHasBeenSet = true;
}

bool RecordQuality::CompletenessHasBeenSet() const
{
    return m_completenessHasBeenSet;
}

string RecordQuality::GetTimeliness() const
{
    return m_timeliness;
}

void RecordQuality::SetTimeliness(const string& _timeliness)
{
    m_timeliness = _timeliness;
    m_timelinessHasBeenSet = true;
}

bool RecordQuality::TimelinessHasBeenSet() const
{
    return m_timelinessHasBeenSet;
}

string RecordQuality::GetLogical() const
{
    return m_logical;
}

void RecordQuality::SetLogical(const string& _logical)
{
    m_logical = _logical;
    m_logicalHasBeenSet = true;
}

bool RecordQuality::LogicalHasBeenSet() const
{
    return m_logicalHasBeenSet;
}

