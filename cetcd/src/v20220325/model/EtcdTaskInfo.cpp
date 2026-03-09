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

#include <tencentcloud/cetcd/v20220325/model/EtcdTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

EtcdTaskInfo::EtcdTaskInfo() :
    m_taskIDHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_resourceIDHasBeenSet(false),
    m_lifeStateHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome EtcdTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskID") && !value["TaskID"].IsNull())
    {
        if (!value["TaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdTaskInfo.TaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = string(value["TaskID"].GetString());
        m_taskIDHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdTaskInfo.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceID") && !value["ResourceID"].IsNull())
    {
        if (!value["ResourceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdTaskInfo.ResourceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceID = string(value["ResourceID"].GetString());
        m_resourceIDHasBeenSet = true;
    }

    if (value.HasMember("LifeState") && !value["LifeState"].IsNull())
    {
        if (!value["LifeState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdTaskInfo.LifeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeState = string(value["LifeState"].GetString());
        m_lifeStateHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdTaskInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdTaskInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EtcdTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskID.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeState.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


string EtcdTaskInfo::GetTaskID() const
{
    return m_taskID;
}

void EtcdTaskInfo::SetTaskID(const string& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool EtcdTaskInfo::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

string EtcdTaskInfo::GetTaskType() const
{
    return m_taskType;
}

void EtcdTaskInfo::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool EtcdTaskInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string EtcdTaskInfo::GetResourceID() const
{
    return m_resourceID;
}

void EtcdTaskInfo::SetResourceID(const string& _resourceID)
{
    m_resourceID = _resourceID;
    m_resourceIDHasBeenSet = true;
}

bool EtcdTaskInfo::ResourceIDHasBeenSet() const
{
    return m_resourceIDHasBeenSet;
}

string EtcdTaskInfo::GetLifeState() const
{
    return m_lifeState;
}

void EtcdTaskInfo::SetLifeState(const string& _lifeState)
{
    m_lifeState = _lifeState;
    m_lifeStateHasBeenSet = true;
}

bool EtcdTaskInfo::LifeStateHasBeenSet() const
{
    return m_lifeStateHasBeenSet;
}

string EtcdTaskInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void EtcdTaskInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool EtcdTaskInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string EtcdTaskInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void EtcdTaskInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool EtcdTaskInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

