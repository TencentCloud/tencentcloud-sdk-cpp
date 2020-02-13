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

#include <tencentcloud/cat/v20180409/model/AlarmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace rapidjson;
using namespace std;

AlarmInfo::AlarmInfo() :
    m_objNameHasBeenSet(false),
    m_firstOccurTimeHasBeenSet(false),
    m_lastOccurTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_metricValueHasBeenSet(false),
    m_objIdHasBeenSet(false)
{
}

CoreInternalOutcome AlarmInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ObjName") && !value["ObjName"].IsNull())
    {
        if (!value["ObjName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.ObjName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objName = string(value["ObjName"].GetString());
        m_objNameHasBeenSet = true;
    }

    if (value.HasMember("FirstOccurTime") && !value["FirstOccurTime"].IsNull())
    {
        if (!value["FirstOccurTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.FirstOccurTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstOccurTime = string(value["FirstOccurTime"].GetString());
        m_firstOccurTimeHasBeenSet = true;
    }

    if (value.HasMember("LastOccurTime") && !value["LastOccurTime"].IsNull())
    {
        if (!value["LastOccurTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.LastOccurTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOccurTime = string(value["LastOccurTime"].GetString());
        m_lastOccurTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("MetricValue") && !value["MetricValue"].IsNull())
    {
        if (!value["MetricValue"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.MetricValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricValue = string(value["MetricValue"].GetString());
        m_metricValueHasBeenSet = true;
    }

    if (value.HasMember("ObjId") && !value["ObjId"].IsNull())
    {
        if (!value["ObjId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmInfo.ObjId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objId = string(value["ObjId"].GetString());
        m_objIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_objNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ObjName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_objName.c_str(), allocator).Move(), allocator);
    }

    if (m_firstOccurTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FirstOccurTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_firstOccurTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastOccurTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LastOccurTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lastOccurTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_contentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetricValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_metricValue.c_str(), allocator).Move(), allocator);
    }

    if (m_objIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ObjId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_objId.c_str(), allocator).Move(), allocator);
    }

}


string AlarmInfo::GetObjName() const
{
    return m_objName;
}

void AlarmInfo::SetObjName(const string& _objName)
{
    m_objName = _objName;
    m_objNameHasBeenSet = true;
}

bool AlarmInfo::ObjNameHasBeenSet() const
{
    return m_objNameHasBeenSet;
}

string AlarmInfo::GetFirstOccurTime() const
{
    return m_firstOccurTime;
}

void AlarmInfo::SetFirstOccurTime(const string& _firstOccurTime)
{
    m_firstOccurTime = _firstOccurTime;
    m_firstOccurTimeHasBeenSet = true;
}

bool AlarmInfo::FirstOccurTimeHasBeenSet() const
{
    return m_firstOccurTimeHasBeenSet;
}

string AlarmInfo::GetLastOccurTime() const
{
    return m_lastOccurTime;
}

void AlarmInfo::SetLastOccurTime(const string& _lastOccurTime)
{
    m_lastOccurTime = _lastOccurTime;
    m_lastOccurTimeHasBeenSet = true;
}

bool AlarmInfo::LastOccurTimeHasBeenSet() const
{
    return m_lastOccurTimeHasBeenSet;
}

uint64_t AlarmInfo::GetStatus() const
{
    return m_status;
}

void AlarmInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlarmInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AlarmInfo::GetContent() const
{
    return m_content;
}

void AlarmInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool AlarmInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

uint64_t AlarmInfo::GetTaskId() const
{
    return m_taskId;
}

void AlarmInfo::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AlarmInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string AlarmInfo::GetMetricName() const
{
    return m_metricName;
}

void AlarmInfo::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool AlarmInfo::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string AlarmInfo::GetMetricValue() const
{
    return m_metricValue;
}

void AlarmInfo::SetMetricValue(const string& _metricValue)
{
    m_metricValue = _metricValue;
    m_metricValueHasBeenSet = true;
}

bool AlarmInfo::MetricValueHasBeenSet() const
{
    return m_metricValueHasBeenSet;
}

string AlarmInfo::GetObjId() const
{
    return m_objId;
}

void AlarmInfo::SetObjId(const string& _objId)
{
    m_objId = _objId;
    m_objIdHasBeenSet = true;
}

bool AlarmInfo::ObjIdHasBeenSet() const
{
    return m_objIdHasBeenSet;
}

