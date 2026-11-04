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

#include <tencentcloud/tione/v20211111/model/WorkspaceTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

WorkspaceTaskInfo::WorkspaceTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceTaskTypeHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome WorkspaceTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTaskInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ResourceTaskType") && !value["ResourceTaskType"].IsNull())
    {
        if (!value["ResourceTaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTaskInfo.ResourceTaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceTaskType = string(value["ResourceTaskType"].GetString());
        m_resourceTaskTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTaskInfo.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkspaceTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTaskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceTaskType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

}


string WorkspaceTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void WorkspaceTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool WorkspaceTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string WorkspaceTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void WorkspaceTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool WorkspaceTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string WorkspaceTaskInfo::GetRegion() const
{
    return m_region;
}

void WorkspaceTaskInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool WorkspaceTaskInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string WorkspaceTaskInfo::GetResourceTaskType() const
{
    return m_resourceTaskType;
}

void WorkspaceTaskInfo::SetResourceTaskType(const string& _resourceTaskType)
{
    m_resourceTaskType = _resourceTaskType;
    m_resourceTaskTypeHasBeenSet = true;
}

bool WorkspaceTaskInfo::ResourceTaskTypeHasBeenSet() const
{
    return m_resourceTaskTypeHasBeenSet;
}

string WorkspaceTaskInfo::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void WorkspaceTaskInfo::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool WorkspaceTaskInfo::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

