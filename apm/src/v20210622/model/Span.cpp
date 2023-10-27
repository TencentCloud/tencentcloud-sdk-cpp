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

#include <tencentcloud/apm/v20210622/model/Span.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

Span::Span() :
    m_traceIDHasBeenSet(false),
    m_logsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_processHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_operationNameHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_spanIDHasBeenSet(false),
    m_startTimeMillisHasBeenSet(false),
    m_parentSpanIDHasBeenSet(false)
{
}

CoreInternalOutcome Span::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TraceID") && !value["TraceID"].IsNull())
    {
        if (!value["TraceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Span.TraceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceID = string(value["TraceID"].GetString());
        m_traceIDHasBeenSet = true;
    }

    if (value.HasMember("Logs") && !value["Logs"].IsNull())
    {
        if (!value["Logs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Span.Logs` is not array type"));

        const rapidjson::Value &tmpValue = value["Logs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpanLog item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_logs.push_back(item);
        }
        m_logsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Span.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpanTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Process") && !value["Process"].IsNull())
    {
        if (!value["Process"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Span.Process` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_process.Deserialize(value["Process"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_processHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Span.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("OperationName") && !value["OperationName"].IsNull())
    {
        if (!value["OperationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Span.OperationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationName = string(value["OperationName"].GetString());
        m_operationNameHasBeenSet = true;
    }

    if (value.HasMember("References") && !value["References"].IsNull())
    {
        if (!value["References"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Span.References` is not array type"));

        const rapidjson::Value &tmpValue = value["References"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpanReference item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_references.push_back(item);
        }
        m_referencesHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Span.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Span.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("SpanID") && !value["SpanID"].IsNull())
    {
        if (!value["SpanID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Span.SpanID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spanID = string(value["SpanID"].GetString());
        m_spanIDHasBeenSet = true;
    }

    if (value.HasMember("StartTimeMillis") && !value["StartTimeMillis"].IsNull())
    {
        if (!value["StartTimeMillis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Span.StartTimeMillis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeMillis = value["StartTimeMillis"].GetInt64();
        m_startTimeMillisHasBeenSet = true;
    }

    if (value.HasMember("ParentSpanID") && !value["ParentSpanID"].IsNull())
    {
        if (!value["ParentSpanID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Span.ParentSpanID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentSpanID = string(value["ParentSpanID"].GetString());
        m_parentSpanIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Span::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_traceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceID.c_str(), allocator).Move(), allocator);
    }

    if (m_logsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logs.begin(); itr != m_logs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_processHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Process";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_process.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_operationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationName.c_str(), allocator).Move(), allocator);
    }

    if (m_referencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "References";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_references.begin(); itr != m_references.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_spanIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpanID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spanID.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeMillisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeMillis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeMillis, allocator);
    }

    if (m_parentSpanIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentSpanID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentSpanID.c_str(), allocator).Move(), allocator);
    }

}


string Span::GetTraceID() const
{
    return m_traceID;
}

void Span::SetTraceID(const string& _traceID)
{
    m_traceID = _traceID;
    m_traceIDHasBeenSet = true;
}

bool Span::TraceIDHasBeenSet() const
{
    return m_traceIDHasBeenSet;
}

vector<SpanLog> Span::GetLogs() const
{
    return m_logs;
}

void Span::SetLogs(const vector<SpanLog>& _logs)
{
    m_logs = _logs;
    m_logsHasBeenSet = true;
}

bool Span::LogsHasBeenSet() const
{
    return m_logsHasBeenSet;
}

vector<SpanTag> Span::GetTags() const
{
    return m_tags;
}

void Span::SetTags(const vector<SpanTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Span::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

SpanProcess Span::GetProcess() const
{
    return m_process;
}

void Span::SetProcess(const SpanProcess& _process)
{
    m_process = _process;
    m_processHasBeenSet = true;
}

bool Span::ProcessHasBeenSet() const
{
    return m_processHasBeenSet;
}

int64_t Span::GetTimestamp() const
{
    return m_timestamp;
}

void Span::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool Span::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string Span::GetOperationName() const
{
    return m_operationName;
}

void Span::SetOperationName(const string& _operationName)
{
    m_operationName = _operationName;
    m_operationNameHasBeenSet = true;
}

bool Span::OperationNameHasBeenSet() const
{
    return m_operationNameHasBeenSet;
}

vector<SpanReference> Span::GetReferences() const
{
    return m_references;
}

void Span::SetReferences(const vector<SpanReference>& _references)
{
    m_references = _references;
    m_referencesHasBeenSet = true;
}

bool Span::ReferencesHasBeenSet() const
{
    return m_referencesHasBeenSet;
}

int64_t Span::GetStartTime() const
{
    return m_startTime;
}

void Span::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Span::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t Span::GetDuration() const
{
    return m_duration;
}

void Span::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool Span::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string Span::GetSpanID() const
{
    return m_spanID;
}

void Span::SetSpanID(const string& _spanID)
{
    m_spanID = _spanID;
    m_spanIDHasBeenSet = true;
}

bool Span::SpanIDHasBeenSet() const
{
    return m_spanIDHasBeenSet;
}

int64_t Span::GetStartTimeMillis() const
{
    return m_startTimeMillis;
}

void Span::SetStartTimeMillis(const int64_t& _startTimeMillis)
{
    m_startTimeMillis = _startTimeMillis;
    m_startTimeMillisHasBeenSet = true;
}

bool Span::StartTimeMillisHasBeenSet() const
{
    return m_startTimeMillisHasBeenSet;
}

string Span::GetParentSpanID() const
{
    return m_parentSpanID;
}

void Span::SetParentSpanID(const string& _parentSpanID)
{
    m_parentSpanID = _parentSpanID;
    m_parentSpanIDHasBeenSet = true;
}

bool Span::ParentSpanIDHasBeenSet() const
{
    return m_parentSpanIDHasBeenSet;
}

