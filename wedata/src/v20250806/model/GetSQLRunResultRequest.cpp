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

#include <tencentcloud/wedata/v20250806/model/GetSQLRunResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

GetSQLRunResultRequest::GetSQLRunResultRequest() :
    m_projectIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobExecutionIdHasBeenSet(false)
{
}

string GetSQLRunResultRequest::ToJsonString() const
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

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobExecutionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobExecutionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobExecutionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetSQLRunResultRequest::GetProjectId() const
{
    return m_projectId;
}

void GetSQLRunResultRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetSQLRunResultRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GetSQLRunResultRequest::GetJobId() const
{
    return m_jobId;
}

void GetSQLRunResultRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool GetSQLRunResultRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string GetSQLRunResultRequest::GetJobExecutionId() const
{
    return m_jobExecutionId;
}

void GetSQLRunResultRequest::SetJobExecutionId(const string& _jobExecutionId)
{
    m_jobExecutionId = _jobExecutionId;
    m_jobExecutionIdHasBeenSet = true;
}

bool GetSQLRunResultRequest::JobExecutionIdHasBeenSet() const
{
    return m_jobExecutionIdHasBeenSet;
}


