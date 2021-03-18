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

#include <tencentcloud/iotvideoindustry/v20201201/model/RecordTaskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace rapidjson;
using namespace std;

RecordTaskItem::RecordTaskItem() :
    m_recordTaskIdHasBeenSet(false),
    m_recordPlanIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_videoUrlHasBeenSet(false),
    m_recordStatusHasBeenSet(false)
{
}

CoreInternalOutcome RecordTaskItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordTaskId") && !value["RecordTaskId"].IsNull())
    {
        if (!value["RecordTaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RecordTaskItem.RecordTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordTaskId = string(value["RecordTaskId"].GetString());
        m_recordTaskIdHasBeenSet = true;
    }

    if (value.HasMember("RecordPlanId") && !value["RecordPlanId"].IsNull())
    {
        if (!value["RecordPlanId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RecordTaskItem.RecordPlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordPlanId = string(value["RecordPlanId"].GetString());
        m_recordPlanIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RecordTaskItem.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RecordTaskItem.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RecordTaskItem.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("VideoUrl") && !value["VideoUrl"].IsNull())
    {
        if (!value["VideoUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `RecordTaskItem.VideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoUrl = string(value["VideoUrl"].GetString());
        m_videoUrlHasBeenSet = true;
    }

    if (value.HasMember("RecordStatus") && !value["RecordStatus"].IsNull())
    {
        if (!value["RecordStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RecordTaskItem.RecordStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordStatus = value["RecordStatus"].GetInt64();
        m_recordStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordTaskItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_recordTaskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_recordTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordPlanIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordPlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_recordPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_videoUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_recordStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordStatus, allocator);
    }

}


string RecordTaskItem::GetRecordTaskId() const
{
    return m_recordTaskId;
}

void RecordTaskItem::SetRecordTaskId(const string& _recordTaskId)
{
    m_recordTaskId = _recordTaskId;
    m_recordTaskIdHasBeenSet = true;
}

bool RecordTaskItem::RecordTaskIdHasBeenSet() const
{
    return m_recordTaskIdHasBeenSet;
}

string RecordTaskItem::GetRecordPlanId() const
{
    return m_recordPlanId;
}

void RecordTaskItem::SetRecordPlanId(const string& _recordPlanId)
{
    m_recordPlanId = _recordPlanId;
    m_recordPlanIdHasBeenSet = true;
}

bool RecordTaskItem::RecordPlanIdHasBeenSet() const
{
    return m_recordPlanIdHasBeenSet;
}

int64_t RecordTaskItem::GetStartTime() const
{
    return m_startTime;
}

void RecordTaskItem::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RecordTaskItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t RecordTaskItem::GetEndTime() const
{
    return m_endTime;
}

void RecordTaskItem::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RecordTaskItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t RecordTaskItem::GetEventId() const
{
    return m_eventId;
}

void RecordTaskItem::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool RecordTaskItem::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string RecordTaskItem::GetVideoUrl() const
{
    return m_videoUrl;
}

void RecordTaskItem::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool RecordTaskItem::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

int64_t RecordTaskItem::GetRecordStatus() const
{
    return m_recordStatus;
}

void RecordTaskItem::SetRecordStatus(const int64_t& _recordStatus)
{
    m_recordStatus = _recordStatus;
    m_recordStatusHasBeenSet = true;
}

bool RecordTaskItem::RecordStatusHasBeenSet() const
{
    return m_recordStatusHasBeenSet;
}

