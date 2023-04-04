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

#include <tencentcloud/trro/v20220325/model/SessionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

SessionInfo::SessionInfo() :
    m_sessionIdHasBeenSet(false),
    m_remoteDeviceIdHasBeenSet(false),
    m_fieldDeviceIdHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_qualityHasBeenSet(false)
{
}

CoreInternalOutcome SessionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("RemoteDeviceId") && !value["RemoteDeviceId"].IsNull())
    {
        if (!value["RemoteDeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.RemoteDeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteDeviceId = string(value["RemoteDeviceId"].GetString());
        m_remoteDeviceIdHasBeenSet = true;
    }

    if (value.HasMember("FieldDeviceId") && !value["FieldDeviceId"].IsNull())
    {
        if (!value["FieldDeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.FieldDeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldDeviceId = string(value["FieldDeviceId"].GetString());
        m_fieldDeviceIdHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Quality") && !value["Quality"].IsNull())
    {
        if (!value["Quality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.Quality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quality = string(value["Quality"].GetString());
        m_qualityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_qualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quality.c_str(), allocator).Move(), allocator);
    }

}


string SessionInfo::GetSessionId() const
{
    return m_sessionId;
}

void SessionInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool SessionInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string SessionInfo::GetRemoteDeviceId() const
{
    return m_remoteDeviceId;
}

void SessionInfo::SetRemoteDeviceId(const string& _remoteDeviceId)
{
    m_remoteDeviceId = _remoteDeviceId;
    m_remoteDeviceIdHasBeenSet = true;
}

bool SessionInfo::RemoteDeviceIdHasBeenSet() const
{
    return m_remoteDeviceIdHasBeenSet;
}

string SessionInfo::GetFieldDeviceId() const
{
    return m_fieldDeviceId;
}

void SessionInfo::SetFieldDeviceId(const string& _fieldDeviceId)
{
    m_fieldDeviceId = _fieldDeviceId;
    m_fieldDeviceIdHasBeenSet = true;
}

bool SessionInfo::FieldDeviceIdHasBeenSet() const
{
    return m_fieldDeviceIdHasBeenSet;
}

string SessionInfo::GetResolution() const
{
    return m_resolution;
}

void SessionInfo::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool SessionInfo::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

uint64_t SessionInfo::GetStartTime() const
{
    return m_startTime;
}

void SessionInfo::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SessionInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t SessionInfo::GetEndTime() const
{
    return m_endTime;
}

void SessionInfo::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SessionInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SessionInfo::GetQuality() const
{
    return m_quality;
}

void SessionInfo::SetQuality(const string& _quality)
{
    m_quality = _quality;
    m_qualityHasBeenSet = true;
}

bool SessionInfo::QualityHasBeenSet() const
{
    return m_qualityHasBeenSet;
}

