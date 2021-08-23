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

#include <tencentcloud/cls/v20201016/model/ShipperTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ShipperTaskInfo::ShipperTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_shipperIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_rangeStartHasBeenSet(false),
    m_rangeEndHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome ShipperTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ShipperId") && !value["ShipperId"].IsNull())
    {
        if (!value["ShipperId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperTaskInfo.ShipperId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shipperId = string(value["ShipperId"].GetString());
        m_shipperIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperTaskInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("RangeStart") && !value["RangeStart"].IsNull())
    {
        if (!value["RangeStart"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperTaskInfo.RangeStart` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rangeStart = value["RangeStart"].GetInt64();
        m_rangeStartHasBeenSet = true;
    }

    if (value.HasMember("RangeEnd") && !value["RangeEnd"].IsNull())
    {
        if (!value["RangeEnd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperTaskInfo.RangeEnd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rangeEnd = value["RangeEnd"].GetInt64();
        m_rangeEndHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperTaskInfo.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperTaskInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperTaskInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperTaskInfo.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShipperTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_shipperIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShipperId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shipperId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rangeStart, allocator);
    }

    if (m_rangeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rangeEnd, allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string ShipperTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void ShipperTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ShipperTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ShipperTaskInfo::GetShipperId() const
{
    return m_shipperId;
}

void ShipperTaskInfo::SetShipperId(const string& _shipperId)
{
    m_shipperId = _shipperId;
    m_shipperIdHasBeenSet = true;
}

bool ShipperTaskInfo::ShipperIdHasBeenSet() const
{
    return m_shipperIdHasBeenSet;
}

string ShipperTaskInfo::GetTopicId() const
{
    return m_topicId;
}

void ShipperTaskInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ShipperTaskInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t ShipperTaskInfo::GetRangeStart() const
{
    return m_rangeStart;
}

void ShipperTaskInfo::SetRangeStart(const int64_t& _rangeStart)
{
    m_rangeStart = _rangeStart;
    m_rangeStartHasBeenSet = true;
}

bool ShipperTaskInfo::RangeStartHasBeenSet() const
{
    return m_rangeStartHasBeenSet;
}

int64_t ShipperTaskInfo::GetRangeEnd() const
{
    return m_rangeEnd;
}

void ShipperTaskInfo::SetRangeEnd(const int64_t& _rangeEnd)
{
    m_rangeEnd = _rangeEnd;
    m_rangeEndHasBeenSet = true;
}

bool ShipperTaskInfo::RangeEndHasBeenSet() const
{
    return m_rangeEndHasBeenSet;
}

int64_t ShipperTaskInfo::GetStartTime() const
{
    return m_startTime;
}

void ShipperTaskInfo::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ShipperTaskInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t ShipperTaskInfo::GetEndTime() const
{
    return m_endTime;
}

void ShipperTaskInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ShipperTaskInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ShipperTaskInfo::GetStatus() const
{
    return m_status;
}

void ShipperTaskInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ShipperTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ShipperTaskInfo::GetMessage() const
{
    return m_message;
}

void ShipperTaskInfo::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ShipperTaskInfo::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

