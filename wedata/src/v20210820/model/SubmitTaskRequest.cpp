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

#include <tencentcloud/wedata/v20210820/model/SubmitTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SubmitTaskRequest::SubmitTaskRequest() :
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_versionRemarkHasBeenSet(false),
    m_startSchedulingHasBeenSet(false)
{
}

string SubmitTaskRequest::ToJsonString() const
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

    if (m_versionRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_startSchedulingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartScheduling";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startScheduling, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void SubmitTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SubmitTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SubmitTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void SubmitTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool SubmitTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string SubmitTaskRequest::GetVersionRemark() const
{
    return m_versionRemark;
}

void SubmitTaskRequest::SetVersionRemark(const string& _versionRemark)
{
    m_versionRemark = _versionRemark;
    m_versionRemarkHasBeenSet = true;
}

bool SubmitTaskRequest::VersionRemarkHasBeenSet() const
{
    return m_versionRemarkHasBeenSet;
}

bool SubmitTaskRequest::GetStartScheduling() const
{
    return m_startScheduling;
}

void SubmitTaskRequest::SetStartScheduling(const bool& _startScheduling)
{
    m_startScheduling = _startScheduling;
    m_startSchedulingHasBeenSet = true;
}

bool SubmitTaskRequest::StartSchedulingHasBeenSet() const
{
    return m_startSchedulingHasBeenSet;
}


