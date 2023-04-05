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

#include <tencentcloud/trro/v20220325/model/RecentSessionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

RecentSessionInfo::RecentSessionInfo() :
    m_sessionIdHasBeenSet(false),
    m_remoteDeviceIdHasBeenSet(false),
    m_fieldDeviceIdHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_latestUpdateTimeHasBeenSet(false)
{
}

CoreInternalOutcome RecentSessionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecentSessionInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("RemoteDeviceId") && !value["RemoteDeviceId"].IsNull())
    {
        if (!value["RemoteDeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecentSessionInfo.RemoteDeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteDeviceId = string(value["RemoteDeviceId"].GetString());
        m_remoteDeviceIdHasBeenSet = true;
    }

    if (value.HasMember("FieldDeviceId") && !value["FieldDeviceId"].IsNull())
    {
        if (!value["FieldDeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecentSessionInfo.FieldDeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldDeviceId = string(value["FieldDeviceId"].GetString());
        m_fieldDeviceIdHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecentSessionInfo.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecentSessionInfo.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestUpdateTime") && !value["LatestUpdateTime"].IsNull())
    {
        if (!value["LatestUpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecentSessionInfo.LatestUpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_latestUpdateTime = value["LatestUpdateTime"].GetUint64();
        m_latestUpdateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecentSessionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteDeviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteDeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteDeviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldDeviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldDeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldDeviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_latestUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestUpdateTime, allocator);
    }

}


string RecentSessionInfo::GetSessionId() const
{
    return m_sessionId;
}

void RecentSessionInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool RecentSessionInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string RecentSessionInfo::GetRemoteDeviceId() const
{
    return m_remoteDeviceId;
}

void RecentSessionInfo::SetRemoteDeviceId(const string& _remoteDeviceId)
{
    m_remoteDeviceId = _remoteDeviceId;
    m_remoteDeviceIdHasBeenSet = true;
}

bool RecentSessionInfo::RemoteDeviceIdHasBeenSet() const
{
    return m_remoteDeviceIdHasBeenSet;
}

string RecentSessionInfo::GetFieldDeviceId() const
{
    return m_fieldDeviceId;
}

void RecentSessionInfo::SetFieldDeviceId(const string& _fieldDeviceId)
{
    m_fieldDeviceId = _fieldDeviceId;
    m_fieldDeviceIdHasBeenSet = true;
}

bool RecentSessionInfo::FieldDeviceIdHasBeenSet() const
{
    return m_fieldDeviceIdHasBeenSet;
}

string RecentSessionInfo::GetResolution() const
{
    return m_resolution;
}

void RecentSessionInfo::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool RecentSessionInfo::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

uint64_t RecentSessionInfo::GetStartTime() const
{
    return m_startTime;
}

void RecentSessionInfo::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RecentSessionInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t RecentSessionInfo::GetLatestUpdateTime() const
{
    return m_latestUpdateTime;
}

void RecentSessionInfo::SetLatestUpdateTime(const uint64_t& _latestUpdateTime)
{
    m_latestUpdateTime = _latestUpdateTime;
    m_latestUpdateTimeHasBeenSet = true;
}

bool RecentSessionInfo::LatestUpdateTimeHasBeenSet() const
{
    return m_latestUpdateTimeHasBeenSet;
}

