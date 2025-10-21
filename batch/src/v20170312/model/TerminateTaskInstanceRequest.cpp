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

#include <tencentcloud/batch/v20170312/model/TerminateTaskInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

TerminateTaskInstanceRequest::TerminateTaskInstanceRequest() :
    m_jobIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskInstanceIndexHasBeenSet(false)
{
}

string TerminateTaskInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInstanceIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInstanceIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskInstanceIndex, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TerminateTaskInstanceRequest::GetJobId() const
{
    return m_jobId;
}

void TerminateTaskInstanceRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool TerminateTaskInstanceRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string TerminateTaskInstanceRequest::GetTaskName() const
{
    return m_taskName;
}

void TerminateTaskInstanceRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TerminateTaskInstanceRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t TerminateTaskInstanceRequest::GetTaskInstanceIndex() const
{
    return m_taskInstanceIndex;
}

void TerminateTaskInstanceRequest::SetTaskInstanceIndex(const int64_t& _taskInstanceIndex)
{
    m_taskInstanceIndex = _taskInstanceIndex;
    m_taskInstanceIndexHasBeenSet = true;
}

bool TerminateTaskInstanceRequest::TaskInstanceIndexHasBeenSet() const
{
    return m_taskInstanceIndexHasBeenSet;
}


