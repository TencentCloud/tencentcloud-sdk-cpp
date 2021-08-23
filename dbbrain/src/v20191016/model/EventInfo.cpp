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

#include <tencentcloud/dbbrain/v20191016/model/EventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

EventInfo::EventInfo() :
    m_eventIdHasBeenSet(false),
    m_diagTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_outlineHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_scoreLostHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome EventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("DiagType") && !value["DiagType"].IsNull())
    {
        if (!value["DiagType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.DiagType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagType = string(value["DiagType"].GetString());
        m_diagTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Outline") && !value["Outline"].IsNull())
    {
        if (!value["Outline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.Outline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outline = string(value["Outline"].GetString());
        m_outlineHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.Severity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_severity = value["Severity"].GetInt64();
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("ScoreLost") && !value["ScoreLost"].IsNull())
    {
        if (!value["ScoreLost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.ScoreLost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scoreLost = value["ScoreLost"].GetInt64();
        m_scoreLostHasBeenSet = true;
    }

    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_diagTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_outlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outline.c_str(), allocator).Move(), allocator);
    }

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_severity, allocator);
    }

    if (m_scoreLostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreLost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scoreLost, allocator);
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


int64_t EventInfo::GetEventId() const
{
    return m_eventId;
}

void EventInfo::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool EventInfo::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string EventInfo::GetDiagType() const
{
    return m_diagType;
}

void EventInfo::SetDiagType(const string& _diagType)
{
    m_diagType = _diagType;
    m_diagTypeHasBeenSet = true;
}

bool EventInfo::DiagTypeHasBeenSet() const
{
    return m_diagTypeHasBeenSet;
}

string EventInfo::GetStartTime() const
{
    return m_startTime;
}

void EventInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool EventInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string EventInfo::GetEndTime() const
{
    return m_endTime;
}

void EventInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool EventInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string EventInfo::GetOutline() const
{
    return m_outline;
}

void EventInfo::SetOutline(const string& _outline)
{
    m_outline = _outline;
    m_outlineHasBeenSet = true;
}

bool EventInfo::OutlineHasBeenSet() const
{
    return m_outlineHasBeenSet;
}

int64_t EventInfo::GetSeverity() const
{
    return m_severity;
}

void EventInfo::SetSeverity(const int64_t& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool EventInfo::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

int64_t EventInfo::GetScoreLost() const
{
    return m_scoreLost;
}

void EventInfo::SetScoreLost(const int64_t& _scoreLost)
{
    m_scoreLost = _scoreLost;
    m_scoreLostHasBeenSet = true;
}

bool EventInfo::ScoreLostHasBeenSet() const
{
    return m_scoreLostHasBeenSet;
}

string EventInfo::GetMetric() const
{
    return m_metric;
}

void EventInfo::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool EventInfo::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

int64_t EventInfo::GetCount() const
{
    return m_count;
}

void EventInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool EventInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

