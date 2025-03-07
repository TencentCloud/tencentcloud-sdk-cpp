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

#include <tencentcloud/pts/v20210728/model/DescribeSampleLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

DescribeSampleLogsRequest::DescribeSampleLogsRequest() :
    m_projectIdHasBeenSet(false),
    m_scenarioIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_severityTextHasBeenSet(false),
    m_instanceRegionHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_reactionTimeRangeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_serviceHasBeenSet(false)
{
}

string DescribeSampleLogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scenarioId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_to.c_str(), allocator).Move(), allocator);
    }

    if (m_severityTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeverityText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_severityText.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instance.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_reactionTimeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReactionTimeRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reactionTimeRange.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSampleLogsRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeSampleLogsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeSampleLogsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeSampleLogsRequest::GetScenarioId() const
{
    return m_scenarioId;
}

void DescribeSampleLogsRequest::SetScenarioId(const string& _scenarioId)
{
    m_scenarioId = _scenarioId;
    m_scenarioIdHasBeenSet = true;
}

bool DescribeSampleLogsRequest::ScenarioIdHasBeenSet() const
{
    return m_scenarioIdHasBeenSet;
}

string DescribeSampleLogsRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeSampleLogsRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeSampleLogsRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeSampleLogsRequest::GetContext() const
{
    return m_context;
}

void DescribeSampleLogsRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool DescribeSampleLogsRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

string DescribeSampleLogsRequest::GetFrom() const
{
    return m_from;
}

void DescribeSampleLogsRequest::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeSampleLogsRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string DescribeSampleLogsRequest::GetTo() const
{
    return m_to;
}

void DescribeSampleLogsRequest::SetTo(const string& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool DescribeSampleLogsRequest::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

string DescribeSampleLogsRequest::GetSeverityText() const
{
    return m_severityText;
}

void DescribeSampleLogsRequest::SetSeverityText(const string& _severityText)
{
    m_severityText = _severityText;
    m_severityTextHasBeenSet = true;
}

bool DescribeSampleLogsRequest::SeverityTextHasBeenSet() const
{
    return m_severityTextHasBeenSet;
}

string DescribeSampleLogsRequest::GetInstanceRegion() const
{
    return m_instanceRegion;
}

void DescribeSampleLogsRequest::SetInstanceRegion(const string& _instanceRegion)
{
    m_instanceRegion = _instanceRegion;
    m_instanceRegionHasBeenSet = true;
}

bool DescribeSampleLogsRequest::InstanceRegionHasBeenSet() const
{
    return m_instanceRegionHasBeenSet;
}

string DescribeSampleLogsRequest::GetInstance() const
{
    return m_instance;
}

void DescribeSampleLogsRequest::SetInstance(const string& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool DescribeSampleLogsRequest::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

string DescribeSampleLogsRequest::GetLogType() const
{
    return m_logType;
}

void DescribeSampleLogsRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool DescribeSampleLogsRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

int64_t DescribeSampleLogsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSampleLogsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSampleLogsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeSampleLogsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSampleLogsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSampleLogsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

ReactionTimeRange DescribeSampleLogsRequest::GetReactionTimeRange() const
{
    return m_reactionTimeRange;
}

void DescribeSampleLogsRequest::SetReactionTimeRange(const ReactionTimeRange& _reactionTimeRange)
{
    m_reactionTimeRange = _reactionTimeRange;
    m_reactionTimeRangeHasBeenSet = true;
}

bool DescribeSampleLogsRequest::ReactionTimeRangeHasBeenSet() const
{
    return m_reactionTimeRangeHasBeenSet;
}

string DescribeSampleLogsRequest::GetStatus() const
{
    return m_status;
}

void DescribeSampleLogsRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeSampleLogsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeSampleLogsRequest::GetResult() const
{
    return m_result;
}

void DescribeSampleLogsRequest::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool DescribeSampleLogsRequest::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DescribeSampleLogsRequest::GetMethod() const
{
    return m_method;
}

void DescribeSampleLogsRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool DescribeSampleLogsRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string DescribeSampleLogsRequest::GetService() const
{
    return m_service;
}

void DescribeSampleLogsRequest::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool DescribeSampleLogsRequest::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}


