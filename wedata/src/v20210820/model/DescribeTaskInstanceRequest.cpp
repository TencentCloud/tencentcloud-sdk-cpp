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

#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTaskInstanceRequest::DescribeTaskInstanceRequest() :
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_issueDateHasBeenSet(false)
{
}

string DescribeTaskInstanceRequest::ToJsonString() const
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

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_issueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_issueDate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTaskInstanceRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeTaskInstanceRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeTaskInstanceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeTaskInstanceRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeTaskInstanceRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeTaskInstanceRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeTaskInstanceRequest::GetCurRunDate() const
{
    return m_curRunDate;
}

void DescribeTaskInstanceRequest::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool DescribeTaskInstanceRequest::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string DescribeTaskInstanceRequest::GetIssueDate() const
{
    return m_issueDate;
}

void DescribeTaskInstanceRequest::SetIssueDate(const string& _issueDate)
{
    m_issueDate = _issueDate;
    m_issueDateHasBeenSet = true;
}

bool DescribeTaskInstanceRequest::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}


