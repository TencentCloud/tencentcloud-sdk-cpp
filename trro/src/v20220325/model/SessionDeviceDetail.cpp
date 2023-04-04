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

#include <tencentcloud/trro/v20220325/model/SessionDeviceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

SessionDeviceDetail::SessionDeviceDetail() :
    m_deviceTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_lostHasBeenSet(false),
    m_networkLatencyHasBeenSet(false),
    m_videoLatencyHasBeenSet(false),
    m_cpuUsedHasBeenSet(false),
    m_memUsedHasBeenSet(false),
    m_timeOffsetHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false)
{
}

CoreInternalOutcome SessionDeviceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.Rate` is not array type"));

        const rapidjson::Value &tmpValue = value["Rate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rate.push_back((*itr).GetInt64());
        }
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.Fps` is not array type"));

        const rapidjson::Value &tmpValue = value["Fps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fps.push_back((*itr).GetInt64());
        }
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Lost") && !value["Lost"].IsNull())
    {
        if (!value["Lost"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.Lost` is not array type"));

        const rapidjson::Value &tmpValue = value["Lost"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lost.push_back((*itr).GetDouble());
        }
        m_lostHasBeenSet = true;
    }

    if (value.HasMember("NetworkLatency") && !value["NetworkLatency"].IsNull())
    {
        if (!value["NetworkLatency"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.NetworkLatency` is not array type"));

        const rapidjson::Value &tmpValue = value["NetworkLatency"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_networkLatency.push_back((*itr).GetInt64());
        }
        m_networkLatencyHasBeenSet = true;
    }

    if (value.HasMember("VideoLatency") && !value["VideoLatency"].IsNull())
    {
        if (!value["VideoLatency"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.VideoLatency` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoLatency"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_videoLatency.push_back((*itr).GetInt64());
        }
        m_videoLatencyHasBeenSet = true;
    }

    if (value.HasMember("CpuUsed") && !value["CpuUsed"].IsNull())
    {
        if (!value["CpuUsed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.CpuUsed` is not array type"));

        const rapidjson::Value &tmpValue = value["CpuUsed"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cpuUsed.push_back((*itr).GetDouble());
        }
        m_cpuUsedHasBeenSet = true;
    }

    if (value.HasMember("MemUsed") && !value["MemUsed"].IsNull())
    {
        if (!value["MemUsed"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.MemUsed` is not array type"));

        const rapidjson::Value &tmpValue = value["MemUsed"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_memUsed.push_back((*itr).GetDouble());
        }
        m_memUsedHasBeenSet = true;
    }

    if (value.HasMember("TimeOffset") && !value["TimeOffset"].IsNull())
    {
        if (!value["TimeOffset"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.TimeOffset` is not array type"));

        const rapidjson::Value &tmpValue = value["TimeOffset"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timeOffset.push_back((*itr).GetUint64());
        }
        m_timeOffsetHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionDeviceDetail.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionDeviceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
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

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rate.begin(); itr != m_rate.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fps.begin(); itr != m_fps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_lostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lost.begin(); itr != m_lost.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_networkLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_networkLatency.begin(); itr != m_networkLatency.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_videoLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_videoLatency.begin(); itr != m_videoLatency.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_cpuUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cpuUsed.begin(); itr != m_cpuUsed.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_memUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memUsed.begin(); itr != m_memUsed.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_timeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timeOffset.begin(); itr != m_timeOffset.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

}


string SessionDeviceDetail::GetDeviceType() const
{
    return m_deviceType;
}

void SessionDeviceDetail::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool SessionDeviceDetail::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

uint64_t SessionDeviceDetail::GetStartTime() const
{
    return m_startTime;
}

void SessionDeviceDetail::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SessionDeviceDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t SessionDeviceDetail::GetEndTime() const
{
    return m_endTime;
}

void SessionDeviceDetail::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SessionDeviceDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SessionDeviceDetail::GetSessionId() const
{
    return m_sessionId;
}

void SessionDeviceDetail::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool SessionDeviceDetail::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetRate() const
{
    return m_rate;
}

void SessionDeviceDetail::SetRate(const vector<int64_t>& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool SessionDeviceDetail::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetFps() const
{
    return m_fps;
}

void SessionDeviceDetail::SetFps(const vector<int64_t>& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool SessionDeviceDetail::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

vector<double> SessionDeviceDetail::GetLost() const
{
    return m_lost;
}

void SessionDeviceDetail::SetLost(const vector<double>& _lost)
{
    m_lost = _lost;
    m_lostHasBeenSet = true;
}

bool SessionDeviceDetail::LostHasBeenSet() const
{
    return m_lostHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetNetworkLatency() const
{
    return m_networkLatency;
}

void SessionDeviceDetail::SetNetworkLatency(const vector<int64_t>& _networkLatency)
{
    m_networkLatency = _networkLatency;
    m_networkLatencyHasBeenSet = true;
}

bool SessionDeviceDetail::NetworkLatencyHasBeenSet() const
{
    return m_networkLatencyHasBeenSet;
}

vector<int64_t> SessionDeviceDetail::GetVideoLatency() const
{
    return m_videoLatency;
}

void SessionDeviceDetail::SetVideoLatency(const vector<int64_t>& _videoLatency)
{
    m_videoLatency = _videoLatency;
    m_videoLatencyHasBeenSet = true;
}

bool SessionDeviceDetail::VideoLatencyHasBeenSet() const
{
    return m_videoLatencyHasBeenSet;
}

vector<double> SessionDeviceDetail::GetCpuUsed() const
{
    return m_cpuUsed;
}

void SessionDeviceDetail::SetCpuUsed(const vector<double>& _cpuUsed)
{
    m_cpuUsed = _cpuUsed;
    m_cpuUsedHasBeenSet = true;
}

bool SessionDeviceDetail::CpuUsedHasBeenSet() const
{
    return m_cpuUsedHasBeenSet;
}

vector<double> SessionDeviceDetail::GetMemUsed() const
{
    return m_memUsed;
}

void SessionDeviceDetail::SetMemUsed(const vector<double>& _memUsed)
{
    m_memUsed = _memUsed;
    m_memUsedHasBeenSet = true;
}

bool SessionDeviceDetail::MemUsedHasBeenSet() const
{
    return m_memUsedHasBeenSet;
}

vector<uint64_t> SessionDeviceDetail::GetTimeOffset() const
{
    return m_timeOffset;
}

void SessionDeviceDetail::SetTimeOffset(const vector<uint64_t>& _timeOffset)
{
    m_timeOffset = _timeOffset;
    m_timeOffsetHasBeenSet = true;
}

bool SessionDeviceDetail::TimeOffsetHasBeenSet() const
{
    return m_timeOffsetHasBeenSet;
}

string SessionDeviceDetail::GetProjectId() const
{
    return m_projectId;
}

void SessionDeviceDetail::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SessionDeviceDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SessionDeviceDetail::GetDeviceId() const
{
    return m_deviceId;
}

void SessionDeviceDetail::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool SessionDeviceDetail::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

