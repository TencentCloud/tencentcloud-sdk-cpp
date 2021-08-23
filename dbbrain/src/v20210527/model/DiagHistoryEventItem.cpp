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

#include <tencentcloud/dbbrain/v20210527/model/DiagHistoryEventItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DiagHistoryEventItem::DiagHistoryEventItem() :
    m_diagTypeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_outlineHasBeenSet(false),
    m_diagItemHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome DiagHistoryEventItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiagType") && !value["DiagType"].IsNull())
    {
        if (!value["DiagType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagHistoryEventItem.DiagType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagType = string(value["DiagType"].GetString());
        m_diagTypeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagHistoryEventItem.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagHistoryEventItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiagHistoryEventItem.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiagHistoryEventItem.Severity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_severity = value["Severity"].GetInt64();
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("Outline") && !value["Outline"].IsNull())
    {
        if (!value["Outline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagHistoryEventItem.Outline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outline = string(value["Outline"].GetString());
        m_outlineHasBeenSet = true;
    }

    if (value.HasMember("DiagItem") && !value["DiagItem"].IsNull())
    {
        if (!value["DiagItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagHistoryEventItem.DiagItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagItem = string(value["DiagItem"].GetString());
        m_diagItemHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagHistoryEventItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagHistoryEventItem.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagHistoryEventItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiagHistoryEventItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diagTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagType.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_severity, allocator);
    }

    if (m_outlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outline.c_str(), allocator).Move(), allocator);
    }

    if (m_diagItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagItem.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


string DiagHistoryEventItem::GetDiagType() const
{
    return m_diagType;
}

void DiagHistoryEventItem::SetDiagType(const string& _diagType)
{
    m_diagType = _diagType;
    m_diagTypeHasBeenSet = true;
}

bool DiagHistoryEventItem::DiagTypeHasBeenSet() const
{
    return m_diagTypeHasBeenSet;
}

string DiagHistoryEventItem::GetEndTime() const
{
    return m_endTime;
}

void DiagHistoryEventItem::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DiagHistoryEventItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DiagHistoryEventItem::GetStartTime() const
{
    return m_startTime;
}

void DiagHistoryEventItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DiagHistoryEventItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DiagHistoryEventItem::GetEventId() const
{
    return m_eventId;
}

void DiagHistoryEventItem::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool DiagHistoryEventItem::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

int64_t DiagHistoryEventItem::GetSeverity() const
{
    return m_severity;
}

void DiagHistoryEventItem::SetSeverity(const int64_t& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool DiagHistoryEventItem::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

string DiagHistoryEventItem::GetOutline() const
{
    return m_outline;
}

void DiagHistoryEventItem::SetOutline(const string& _outline)
{
    m_outline = _outline;
    m_outlineHasBeenSet = true;
}

bool DiagHistoryEventItem::OutlineHasBeenSet() const
{
    return m_outlineHasBeenSet;
}

string DiagHistoryEventItem::GetDiagItem() const
{
    return m_diagItem;
}

void DiagHistoryEventItem::SetDiagItem(const string& _diagItem)
{
    m_diagItem = _diagItem;
    m_diagItemHasBeenSet = true;
}

bool DiagHistoryEventItem::DiagItemHasBeenSet() const
{
    return m_diagItemHasBeenSet;
}

string DiagHistoryEventItem::GetInstanceId() const
{
    return m_instanceId;
}

void DiagHistoryEventItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DiagHistoryEventItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DiagHistoryEventItem::GetMetric() const
{
    return m_metric;
}

void DiagHistoryEventItem::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DiagHistoryEventItem::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string DiagHistoryEventItem::GetRegion() const
{
    return m_region;
}

void DiagHistoryEventItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DiagHistoryEventItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

