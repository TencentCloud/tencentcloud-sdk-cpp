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

#include <tencentcloud/wedata/v20210820/model/ModifyIntegrationNodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyIntegrationNodeRequest::ModifyIntegrationNodeRequest() :
    m_nodeInfoHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskModeHasBeenSet(false)
{
}

string ModifyIntegrationNodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nodeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_taskModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


IntegrationNodeInfo ModifyIntegrationNodeRequest::GetNodeInfo() const
{
    return m_nodeInfo;
}

void ModifyIntegrationNodeRequest::SetNodeInfo(const IntegrationNodeInfo& _nodeInfo)
{
    m_nodeInfo = _nodeInfo;
    m_nodeInfoHasBeenSet = true;
}

bool ModifyIntegrationNodeRequest::NodeInfoHasBeenSet() const
{
    return m_nodeInfoHasBeenSet;
}

string ModifyIntegrationNodeRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyIntegrationNodeRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyIntegrationNodeRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t ModifyIntegrationNodeRequest::GetTaskType() const
{
    return m_taskType;
}

void ModifyIntegrationNodeRequest::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool ModifyIntegrationNodeRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

uint64_t ModifyIntegrationNodeRequest::GetTaskMode() const
{
    return m_taskMode;
}

void ModifyIntegrationNodeRequest::SetTaskMode(const uint64_t& _taskMode)
{
    m_taskMode = _taskMode;
    m_taskModeHasBeenSet = true;
}

bool ModifyIntegrationNodeRequest::TaskModeHasBeenSet() const
{
    return m_taskModeHasBeenSet;
}


