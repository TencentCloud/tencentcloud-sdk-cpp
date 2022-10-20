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

#include <tencentcloud/pts/v20210728/model/RequestsPerSecond.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

RequestsPerSecond::RequestsPerSecond() :
    m_maxRequestsPerSecondHasBeenSet(false),
    m_durationSecondsHasBeenSet(false),
    m_targetVirtualUsersHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_startRequestsPerSecondHasBeenSet(false),
    m_targetRequestsPerSecondHasBeenSet(false),
    m_gracefulStopSecondsHasBeenSet(false)
{
}

CoreInternalOutcome RequestsPerSecond::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxRequestsPerSecond") && !value["MaxRequestsPerSecond"].IsNull())
    {
        if (!value["MaxRequestsPerSecond"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestsPerSecond.MaxRequestsPerSecond` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRequestsPerSecond = value["MaxRequestsPerSecond"].GetInt64();
        m_maxRequestsPerSecondHasBeenSet = true;
    }

    if (value.HasMember("DurationSeconds") && !value["DurationSeconds"].IsNull())
    {
        if (!value["DurationSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestsPerSecond.DurationSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationSeconds = value["DurationSeconds"].GetInt64();
        m_durationSecondsHasBeenSet = true;
    }

    if (value.HasMember("TargetVirtualUsers") && !value["TargetVirtualUsers"].IsNull())
    {
        if (!value["TargetVirtualUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestsPerSecond.TargetVirtualUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetVirtualUsers = value["TargetVirtualUsers"].GetInt64();
        m_targetVirtualUsersHasBeenSet = true;
    }

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestsPerSecond.Resources` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resources = value["Resources"].GetInt64();
        m_resourcesHasBeenSet = true;
    }

    if (value.HasMember("StartRequestsPerSecond") && !value["StartRequestsPerSecond"].IsNull())
    {
        if (!value["StartRequestsPerSecond"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestsPerSecond.StartRequestsPerSecond` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startRequestsPerSecond = value["StartRequestsPerSecond"].GetInt64();
        m_startRequestsPerSecondHasBeenSet = true;
    }

    if (value.HasMember("TargetRequestsPerSecond") && !value["TargetRequestsPerSecond"].IsNull())
    {
        if (!value["TargetRequestsPerSecond"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestsPerSecond.TargetRequestsPerSecond` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetRequestsPerSecond = value["TargetRequestsPerSecond"].GetInt64();
        m_targetRequestsPerSecondHasBeenSet = true;
    }

    if (value.HasMember("GracefulStopSeconds") && !value["GracefulStopSeconds"].IsNull())
    {
        if (!value["GracefulStopSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestsPerSecond.GracefulStopSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gracefulStopSeconds = value["GracefulStopSeconds"].GetInt64();
        m_gracefulStopSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RequestsPerSecond::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxRequestsPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRequestsPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRequestsPerSecond, allocator);
    }

    if (m_durationSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationSeconds, allocator);
    }

    if (m_targetVirtualUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVirtualUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetVirtualUsers, allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resources, allocator);
    }

    if (m_startRequestsPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartRequestsPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startRequestsPerSecond, allocator);
    }

    if (m_targetRequestsPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetRequestsPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetRequestsPerSecond, allocator);
    }

    if (m_gracefulStopSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GracefulStopSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gracefulStopSeconds, allocator);
    }

}


int64_t RequestsPerSecond::GetMaxRequestsPerSecond() const
{
    return m_maxRequestsPerSecond;
}

void RequestsPerSecond::SetMaxRequestsPerSecond(const int64_t& _maxRequestsPerSecond)
{
    m_maxRequestsPerSecond = _maxRequestsPerSecond;
    m_maxRequestsPerSecondHasBeenSet = true;
}

bool RequestsPerSecond::MaxRequestsPerSecondHasBeenSet() const
{
    return m_maxRequestsPerSecondHasBeenSet;
}

int64_t RequestsPerSecond::GetDurationSeconds() const
{
    return m_durationSeconds;
}

void RequestsPerSecond::SetDurationSeconds(const int64_t& _durationSeconds)
{
    m_durationSeconds = _durationSeconds;
    m_durationSecondsHasBeenSet = true;
}

bool RequestsPerSecond::DurationSecondsHasBeenSet() const
{
    return m_durationSecondsHasBeenSet;
}

int64_t RequestsPerSecond::GetTargetVirtualUsers() const
{
    return m_targetVirtualUsers;
}

void RequestsPerSecond::SetTargetVirtualUsers(const int64_t& _targetVirtualUsers)
{
    m_targetVirtualUsers = _targetVirtualUsers;
    m_targetVirtualUsersHasBeenSet = true;
}

bool RequestsPerSecond::TargetVirtualUsersHasBeenSet() const
{
    return m_targetVirtualUsersHasBeenSet;
}

int64_t RequestsPerSecond::GetResources() const
{
    return m_resources;
}

void RequestsPerSecond::SetResources(const int64_t& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool RequestsPerSecond::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

int64_t RequestsPerSecond::GetStartRequestsPerSecond() const
{
    return m_startRequestsPerSecond;
}

void RequestsPerSecond::SetStartRequestsPerSecond(const int64_t& _startRequestsPerSecond)
{
    m_startRequestsPerSecond = _startRequestsPerSecond;
    m_startRequestsPerSecondHasBeenSet = true;
}

bool RequestsPerSecond::StartRequestsPerSecondHasBeenSet() const
{
    return m_startRequestsPerSecondHasBeenSet;
}

int64_t RequestsPerSecond::GetTargetRequestsPerSecond() const
{
    return m_targetRequestsPerSecond;
}

void RequestsPerSecond::SetTargetRequestsPerSecond(const int64_t& _targetRequestsPerSecond)
{
    m_targetRequestsPerSecond = _targetRequestsPerSecond;
    m_targetRequestsPerSecondHasBeenSet = true;
}

bool RequestsPerSecond::TargetRequestsPerSecondHasBeenSet() const
{
    return m_targetRequestsPerSecondHasBeenSet;
}

int64_t RequestsPerSecond::GetGracefulStopSeconds() const
{
    return m_gracefulStopSeconds;
}

void RequestsPerSecond::SetGracefulStopSeconds(const int64_t& _gracefulStopSeconds)
{
    m_gracefulStopSeconds = _gracefulStopSeconds;
    m_gracefulStopSecondsHasBeenSet = true;
}

bool RequestsPerSecond::GracefulStopSecondsHasBeenSet() const
{
    return m_gracefulStopSecondsHasBeenSet;
}

