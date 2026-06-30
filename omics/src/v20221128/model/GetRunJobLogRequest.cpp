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

#include <tencentcloud/omics/v20221128/model/GetRunJobLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

GetRunJobLogRequest::GetRunJobLogRequest() :
    m_runUuidHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

string GetRunJobLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_runUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunUuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetRunJobLogRequest::GetRunUuid() const
{
    return m_runUuid;
}

void GetRunJobLogRequest::SetRunUuid(const string& _runUuid)
{
    m_runUuid = _runUuid;
    m_runUuidHasBeenSet = true;
}

bool GetRunJobLogRequest::RunUuidHasBeenSet() const
{
    return m_runUuidHasBeenSet;
}

string GetRunJobLogRequest::GetJobId() const
{
    return m_jobId;
}

void GetRunJobLogRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool GetRunJobLogRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string GetRunJobLogRequest::GetLogType() const
{
    return m_logType;
}

void GetRunJobLogRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool GetRunJobLogRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string GetRunJobLogRequest::GetProjectId() const
{
    return m_projectId;
}

void GetRunJobLogRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetRunJobLogRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GetRunJobLogRequest::GetPath() const
{
    return m_path;
}

void GetRunJobLogRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool GetRunJobLogRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}


