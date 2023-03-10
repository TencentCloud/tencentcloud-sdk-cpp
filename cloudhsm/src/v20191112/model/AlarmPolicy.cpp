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

#include <tencentcloud/cloudhsm/v20191112/model/AlarmPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace std;

AlarmPolicy::AlarmPolicy() :
    m_uinHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome AlarmPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Event") && !value["Event"].IsNull())
    {
        if (!value["Event"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.Event` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_event = string(value["Event"].GetString());
        m_eventHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.Limit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetInt64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicy.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_eventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Event";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_event.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string AlarmPolicy::GetUin() const
{
    return m_uin;
}

void AlarmPolicy::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AlarmPolicy::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AlarmPolicy::GetEvent() const
{
    return m_event;
}

void AlarmPolicy::SetEvent(const string& _event)
{
    m_event = _event;
    m_eventHasBeenSet = true;
}

bool AlarmPolicy::EventHasBeenSet() const
{
    return m_eventHasBeenSet;
}

int64_t AlarmPolicy::GetLimit() const
{
    return m_limit;
}

void AlarmPolicy::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool AlarmPolicy::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t AlarmPolicy::GetStatus() const
{
    return m_status;
}

void AlarmPolicy::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlarmPolicy::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AlarmPolicy::GetBeginTime() const
{
    return m_beginTime;
}

void AlarmPolicy::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool AlarmPolicy::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string AlarmPolicy::GetEndTime() const
{
    return m_endTime;
}

void AlarmPolicy::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AlarmPolicy::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

