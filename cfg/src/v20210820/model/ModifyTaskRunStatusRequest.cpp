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

#include <tencentcloud/cfg/v20210820/model/ModifyTaskRunStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

ModifyTaskRunStatusRequest::ModifyTaskRunStatusRequest() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isExpectHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_issueHasBeenSet(false),
    m_recordHasBeenSet(false)
{
}

string ModifyTaskRunStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_isExpectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExpect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isExpect, allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_summary.c_str(), allocator).Move(), allocator);
    }

    if (m_issueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_issue.c_str(), allocator).Move(), allocator);
    }

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_record.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyTaskRunStatusRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyTaskRunStatusRequest::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyTaskRunStatusRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t ModifyTaskRunStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyTaskRunStatusRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyTaskRunStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool ModifyTaskRunStatusRequest::GetIsExpect() const
{
    return m_isExpect;
}

void ModifyTaskRunStatusRequest::SetIsExpect(const bool& _isExpect)
{
    m_isExpect = _isExpect;
    m_isExpectHasBeenSet = true;
}

bool ModifyTaskRunStatusRequest::IsExpectHasBeenSet() const
{
    return m_isExpectHasBeenSet;
}

string ModifyTaskRunStatusRequest::GetSummary() const
{
    return m_summary;
}

void ModifyTaskRunStatusRequest::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool ModifyTaskRunStatusRequest::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

string ModifyTaskRunStatusRequest::GetIssue() const
{
    return m_issue;
}

void ModifyTaskRunStatusRequest::SetIssue(const string& _issue)
{
    m_issue = _issue;
    m_issueHasBeenSet = true;
}

bool ModifyTaskRunStatusRequest::IssueHasBeenSet() const
{
    return m_issueHasBeenSet;
}

string ModifyTaskRunStatusRequest::GetRecord() const
{
    return m_record;
}

void ModifyTaskRunStatusRequest::SetRecord(const string& _record)
{
    m_record = _record;
    m_recordHasBeenSet = true;
}

bool ModifyTaskRunStatusRequest::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}


