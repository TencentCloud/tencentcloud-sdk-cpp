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

#include <tencentcloud/trro/v20220325/model/SessionIntervalStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

SessionIntervalStatistic::SessionIntervalStatistic() :
    m_activeFieldDeviceNumHasBeenSet(false),
    m_activeRemoteDeviceNumHasBeenSet(false),
    m_sessionNumHasBeenSet(false),
    m_totalDurationHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_notBadSessionRatioHasBeenSet(false)
{
}

CoreInternalOutcome SessionIntervalStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActiveFieldDeviceNum") && !value["ActiveFieldDeviceNum"].IsNull())
    {
        if (!value["ActiveFieldDeviceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionIntervalStatistic.ActiveFieldDeviceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeFieldDeviceNum = value["ActiveFieldDeviceNum"].GetUint64();
        m_activeFieldDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("ActiveRemoteDeviceNum") && !value["ActiveRemoteDeviceNum"].IsNull())
    {
        if (!value["ActiveRemoteDeviceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionIntervalStatistic.ActiveRemoteDeviceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeRemoteDeviceNum = value["ActiveRemoteDeviceNum"].GetUint64();
        m_activeRemoteDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("SessionNum") && !value["SessionNum"].IsNull())
    {
        if (!value["SessionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionIntervalStatistic.SessionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionNum = value["SessionNum"].GetUint64();
        m_sessionNumHasBeenSet = true;
    }

    if (value.HasMember("TotalDuration") && !value["TotalDuration"].IsNull())
    {
        if (!value["TotalDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionIntervalStatistic.TotalDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDuration = value["TotalDuration"].GetUint64();
        m_totalDurationHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionIntervalStatistic.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionIntervalStatistic.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("NotBadSessionRatio") && !value["NotBadSessionRatio"].IsNull())
    {
        if (!value["NotBadSessionRatio"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionIntervalStatistic.NotBadSessionRatio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notBadSessionRatio = value["NotBadSessionRatio"].GetUint64();
        m_notBadSessionRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionIntervalStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activeFieldDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveFieldDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeFieldDeviceNum, allocator);
    }

    if (m_activeRemoteDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveRemoteDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeRemoteDeviceNum, allocator);
    }

    if (m_sessionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionNum, allocator);
    }

    if (m_totalDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDuration, allocator);
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

    if (m_notBadSessionRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotBadSessionRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notBadSessionRatio, allocator);
    }

}


uint64_t SessionIntervalStatistic::GetActiveFieldDeviceNum() const
{
    return m_activeFieldDeviceNum;
}

void SessionIntervalStatistic::SetActiveFieldDeviceNum(const uint64_t& _activeFieldDeviceNum)
{
    m_activeFieldDeviceNum = _activeFieldDeviceNum;
    m_activeFieldDeviceNumHasBeenSet = true;
}

bool SessionIntervalStatistic::ActiveFieldDeviceNumHasBeenSet() const
{
    return m_activeFieldDeviceNumHasBeenSet;
}

uint64_t SessionIntervalStatistic::GetActiveRemoteDeviceNum() const
{
    return m_activeRemoteDeviceNum;
}

void SessionIntervalStatistic::SetActiveRemoteDeviceNum(const uint64_t& _activeRemoteDeviceNum)
{
    m_activeRemoteDeviceNum = _activeRemoteDeviceNum;
    m_activeRemoteDeviceNumHasBeenSet = true;
}

bool SessionIntervalStatistic::ActiveRemoteDeviceNumHasBeenSet() const
{
    return m_activeRemoteDeviceNumHasBeenSet;
}

uint64_t SessionIntervalStatistic::GetSessionNum() const
{
    return m_sessionNum;
}

void SessionIntervalStatistic::SetSessionNum(const uint64_t& _sessionNum)
{
    m_sessionNum = _sessionNum;
    m_sessionNumHasBeenSet = true;
}

bool SessionIntervalStatistic::SessionNumHasBeenSet() const
{
    return m_sessionNumHasBeenSet;
}

uint64_t SessionIntervalStatistic::GetTotalDuration() const
{
    return m_totalDuration;
}

void SessionIntervalStatistic::SetTotalDuration(const uint64_t& _totalDuration)
{
    m_totalDuration = _totalDuration;
    m_totalDurationHasBeenSet = true;
}

bool SessionIntervalStatistic::TotalDurationHasBeenSet() const
{
    return m_totalDurationHasBeenSet;
}

uint64_t SessionIntervalStatistic::GetStartTime() const
{
    return m_startTime;
}

void SessionIntervalStatistic::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SessionIntervalStatistic::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t SessionIntervalStatistic::GetEndTime() const
{
    return m_endTime;
}

void SessionIntervalStatistic::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SessionIntervalStatistic::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t SessionIntervalStatistic::GetNotBadSessionRatio() const
{
    return m_notBadSessionRatio;
}

void SessionIntervalStatistic::SetNotBadSessionRatio(const uint64_t& _notBadSessionRatio)
{
    m_notBadSessionRatio = _notBadSessionRatio;
    m_notBadSessionRatioHasBeenSet = true;
}

bool SessionIntervalStatistic::NotBadSessionRatioHasBeenSet() const
{
    return m_notBadSessionRatioHasBeenSet;
}

