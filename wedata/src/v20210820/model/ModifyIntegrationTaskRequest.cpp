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

#include <tencentcloud/wedata/v20210820/model/ModifyIntegrationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyIntegrationTaskRequest::ModifyIntegrationTaskRequest() :
    m_taskInfoHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_rollbackFlagHasBeenSet(false)
{
}

string ModifyIntegrationTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rollbackFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


IntegrationTaskInfo ModifyIntegrationTaskRequest::GetTaskInfo() const
{
    return m_taskInfo;
}

void ModifyIntegrationTaskRequest::SetTaskInfo(const IntegrationTaskInfo& _taskInfo)
{
    m_taskInfo = _taskInfo;
    m_taskInfoHasBeenSet = true;
}

bool ModifyIntegrationTaskRequest::TaskInfoHasBeenSet() const
{
    return m_taskInfoHasBeenSet;
}

string ModifyIntegrationTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyIntegrationTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyIntegrationTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool ModifyIntegrationTaskRequest::GetRollbackFlag() const
{
    return m_rollbackFlag;
}

void ModifyIntegrationTaskRequest::SetRollbackFlag(const bool& _rollbackFlag)
{
    m_rollbackFlag = _rollbackFlag;
    m_rollbackFlagHasBeenSet = true;
}

bool ModifyIntegrationTaskRequest::RollbackFlagHasBeenSet() const
{
    return m_rollbackFlagHasBeenSet;
}


