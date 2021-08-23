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

#include <tencentcloud/live/v20180801/model/StreamName.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

StreamName::StreamName() :
    m_streamNameHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_streamStartTimeHasBeenSet(false),
    m_streamEndTimeHasBeenSet(false),
    m_stopReasonHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_resolutionHasBeenSet(false)
{
}

CoreInternalOutcome StreamName::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamName.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamName.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamName.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("StreamStartTime") && !value["StreamStartTime"].IsNull())
    {
        if (!value["StreamStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamName.StreamStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamStartTime = string(value["StreamStartTime"].GetString());
        m_streamStartTimeHasBeenSet = true;
    }

    if (value.HasMember("StreamEndTime") && !value["StreamEndTime"].IsNull())
    {
        if (!value["StreamEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamName.StreamEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamEndTime = string(value["StreamEndTime"].GetString());
        m_streamEndTimeHasBeenSet = true;
    }

    if (value.HasMember("StopReason") && !value["StopReason"].IsNull())
    {
        if (!value["StopReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamName.StopReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopReason = string(value["StopReason"].GetString());
        m_stopReasonHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamName.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamName.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamName.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamName::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_streamEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stopReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopReason.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

}


string StreamName::GetStreamName() const
{
    return m_streamName;
}

void StreamName::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool StreamName::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string StreamName::GetAppName() const
{
    return m_appName;
}

void StreamName::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool StreamName::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string StreamName::GetDomainName() const
{
    return m_domainName;
}

void StreamName::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool StreamName::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string StreamName::GetStreamStartTime() const
{
    return m_streamStartTime;
}

void StreamName::SetStreamStartTime(const string& _streamStartTime)
{
    m_streamStartTime = _streamStartTime;
    m_streamStartTimeHasBeenSet = true;
}

bool StreamName::StreamStartTimeHasBeenSet() const
{
    return m_streamStartTimeHasBeenSet;
}

string StreamName::GetStreamEndTime() const
{
    return m_streamEndTime;
}

void StreamName::SetStreamEndTime(const string& _streamEndTime)
{
    m_streamEndTime = _streamEndTime;
    m_streamEndTimeHasBeenSet = true;
}

bool StreamName::StreamEndTimeHasBeenSet() const
{
    return m_streamEndTimeHasBeenSet;
}

string StreamName::GetStopReason() const
{
    return m_stopReason;
}

void StreamName::SetStopReason(const string& _stopReason)
{
    m_stopReason = _stopReason;
    m_stopReasonHasBeenSet = true;
}

bool StreamName::StopReasonHasBeenSet() const
{
    return m_stopReasonHasBeenSet;
}

uint64_t StreamName::GetDuration() const
{
    return m_duration;
}

void StreamName::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool StreamName::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string StreamName::GetClientIp() const
{
    return m_clientIp;
}

void StreamName::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool StreamName::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string StreamName::GetResolution() const
{
    return m_resolution;
}

void StreamName::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool StreamName::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

