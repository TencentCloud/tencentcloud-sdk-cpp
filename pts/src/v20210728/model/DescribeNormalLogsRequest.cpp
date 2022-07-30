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

#include <tencentcloud/pts/v20210728/model/DescribeNormalLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

DescribeNormalLogsRequest::DescribeNormalLogsRequest() :
    m_projectIdHasBeenSet(false),
    m_scenarioIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_severityTextHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_instanceRegionHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeNormalLogsRequest::ToJsonString() const
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

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instance.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeNormalLogsRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeNormalLogsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeNormalLogsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeNormalLogsRequest::GetScenarioId() const
{
    return m_scenarioId;
}

void DescribeNormalLogsRequest::SetScenarioId(const string& _scenarioId)
{
    m_scenarioId = _scenarioId;
    m_scenarioIdHasBeenSet = true;
}

bool DescribeNormalLogsRequest::ScenarioIdHasBeenSet() const
{
    return m_scenarioIdHasBeenSet;
}

string DescribeNormalLogsRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeNormalLogsRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeNormalLogsRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeNormalLogsRequest::GetContext() const
{
    return m_context;
}

void DescribeNormalLogsRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool DescribeNormalLogsRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

string DescribeNormalLogsRequest::GetFrom() const
{
    return m_from;
}

void DescribeNormalLogsRequest::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeNormalLogsRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string DescribeNormalLogsRequest::GetTo() const
{
    return m_to;
}

void DescribeNormalLogsRequest::SetTo(const string& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool DescribeNormalLogsRequest::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

string DescribeNormalLogsRequest::GetSeverityText() const
{
    return m_severityText;
}

void DescribeNormalLogsRequest::SetSeverityText(const string& _severityText)
{
    m_severityText = _severityText;
    m_severityTextHasBeenSet = true;
}

bool DescribeNormalLogsRequest::SeverityTextHasBeenSet() const
{
    return m_severityTextHasBeenSet;
}

string DescribeNormalLogsRequest::GetInstance() const
{
    return m_instance;
}

void DescribeNormalLogsRequest::SetInstance(const string& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool DescribeNormalLogsRequest::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

string DescribeNormalLogsRequest::GetInstanceRegion() const
{
    return m_instanceRegion;
}

void DescribeNormalLogsRequest::SetInstanceRegion(const string& _instanceRegion)
{
    m_instanceRegion = _instanceRegion;
    m_instanceRegionHasBeenSet = true;
}

bool DescribeNormalLogsRequest::InstanceRegionHasBeenSet() const
{
    return m_instanceRegionHasBeenSet;
}

string DescribeNormalLogsRequest::GetLogType() const
{
    return m_logType;
}

void DescribeNormalLogsRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool DescribeNormalLogsRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

int64_t DescribeNormalLogsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeNormalLogsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeNormalLogsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


