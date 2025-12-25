/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tdai/v20250717/model/DescribeAgentDutyTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

DescribeAgentDutyTasksRequest::DescribeAgentDutyTasksRequest() :
    m_instanceIdHasBeenSet(false),
    m_chatIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_agentTaskTypeHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

string DescribeAgentDutyTasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_chatIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChatId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chatId.c_str(), allocator).Move(), allocator);
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_agentTaskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentTaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentTaskType.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parameters.begin(); itr != m_parameters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAgentDutyTasksRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeAgentDutyTasksRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeAgentDutyTasksRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeAgentDutyTasksRequest::GetChatId() const
{
    return m_chatId;
}

void DescribeAgentDutyTasksRequest::SetChatId(const string& _chatId)
{
    m_chatId = _chatId;
    m_chatIdHasBeenSet = true;
}

bool DescribeAgentDutyTasksRequest::ChatIdHasBeenSet() const
{
    return m_chatIdHasBeenSet;
}

int64_t DescribeAgentDutyTasksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAgentDutyTasksRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAgentDutyTasksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeAgentDutyTasksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAgentDutyTasksRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAgentDutyTasksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAgentDutyTasksRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeAgentDutyTasksRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeAgentDutyTasksRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeAgentDutyTasksRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeAgentDutyTasksRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeAgentDutyTasksRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeAgentDutyTasksRequest::GetAgentTaskType() const
{
    return m_agentTaskType;
}

void DescribeAgentDutyTasksRequest::SetAgentTaskType(const string& _agentTaskType)
{
    m_agentTaskType = _agentTaskType;
    m_agentTaskTypeHasBeenSet = true;
}

bool DescribeAgentDutyTasksRequest::AgentTaskTypeHasBeenSet() const
{
    return m_agentTaskTypeHasBeenSet;
}

vector<Parameter> DescribeAgentDutyTasksRequest::GetParameters() const
{
    return m_parameters;
}

void DescribeAgentDutyTasksRequest::SetParameters(const vector<Parameter>& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool DescribeAgentDutyTasksRequest::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}


