/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/iotexplorer/v20190423/model/TalkIdleDetectionConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkIdleDetectionConfigInfo::TalkIdleDetectionConfigInfo() :
    m_enabledHasBeenSet(false),
    m_timeoutSecondsHasBeenSet(false),
    m_maxRetriesHasBeenSet(false),
    m_idleResponsesHasBeenSet(false)
{
}

CoreInternalOutcome TalkIdleDetectionConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TalkIdleDetectionConfigInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("TimeoutSeconds") && !value["TimeoutSeconds"].IsNull())
    {
        if (!value["TimeoutSeconds"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TalkIdleDetectionConfigInfo.TimeoutSeconds` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutSeconds = value["TimeoutSeconds"].GetDouble();
        m_timeoutSecondsHasBeenSet = true;
    }

    if (value.HasMember("MaxRetries") && !value["MaxRetries"].IsNull())
    {
        if (!value["MaxRetries"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkIdleDetectionConfigInfo.MaxRetries` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetries = value["MaxRetries"].GetInt64();
        m_maxRetriesHasBeenSet = true;
    }

    if (value.HasMember("IdleResponses") && !value["IdleResponses"].IsNull())
    {
        if (!value["IdleResponses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TalkIdleDetectionConfigInfo.IdleResponses` is not array type"));

        const rapidjson::Value &tmpValue = value["IdleResponses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IdleResponseInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_idleResponses.push_back(item);
        }
        m_idleResponsesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkIdleDetectionConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_timeoutSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutSeconds, allocator);
    }

    if (m_maxRetriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetries, allocator);
    }

    if (m_idleResponsesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleResponses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_idleResponses.begin(); itr != m_idleResponses.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool TalkIdleDetectionConfigInfo::GetEnabled() const
{
    return m_enabled;
}

void TalkIdleDetectionConfigInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool TalkIdleDetectionConfigInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

double TalkIdleDetectionConfigInfo::GetTimeoutSeconds() const
{
    return m_timeoutSeconds;
}

void TalkIdleDetectionConfigInfo::SetTimeoutSeconds(const double& _timeoutSeconds)
{
    m_timeoutSeconds = _timeoutSeconds;
    m_timeoutSecondsHasBeenSet = true;
}

bool TalkIdleDetectionConfigInfo::TimeoutSecondsHasBeenSet() const
{
    return m_timeoutSecondsHasBeenSet;
}

int64_t TalkIdleDetectionConfigInfo::GetMaxRetries() const
{
    return m_maxRetries;
}

void TalkIdleDetectionConfigInfo::SetMaxRetries(const int64_t& _maxRetries)
{
    m_maxRetries = _maxRetries;
    m_maxRetriesHasBeenSet = true;
}

bool TalkIdleDetectionConfigInfo::MaxRetriesHasBeenSet() const
{
    return m_maxRetriesHasBeenSet;
}

vector<IdleResponseInfo> TalkIdleDetectionConfigInfo::GetIdleResponses() const
{
    return m_idleResponses;
}

void TalkIdleDetectionConfigInfo::SetIdleResponses(const vector<IdleResponseInfo>& _idleResponses)
{
    m_idleResponses = _idleResponses;
    m_idleResponsesHasBeenSet = true;
}

bool TalkIdleDetectionConfigInfo::IdleResponsesHasBeenSet() const
{
    return m_idleResponsesHasBeenSet;
}

