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

#include <tencentcloud/monitor/v20230616/model/AIWorkbenchSREDigitalTwinTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

AIWorkbenchSREDigitalTwinTask::AIWorkbenchSREDigitalTwinTask() :
    m_nameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskConfigHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_twinIDHasBeenSet(false)
{
}

CoreInternalOutcome AIWorkbenchSREDigitalTwinTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinTask.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinTask.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskConfig") && !value["TaskConfig"].IsNull())
    {
        if (!value["TaskConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinTask.TaskConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskConfig = string(value["TaskConfig"].GetString());
        m_taskConfigHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinTask.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinTask.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("TwinID") && !value["TwinID"].IsNull())
    {
        if (!value["TwinID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinTask.TwinID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_twinID = value["TwinID"].GetUint64();
        m_twinIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIWorkbenchSREDigitalTwinTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_twinIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TwinID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_twinID, allocator);
    }

}


string AIWorkbenchSREDigitalTwinTask::GetName() const
{
    return m_name;
}

void AIWorkbenchSREDigitalTwinTask::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinTask::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AIWorkbenchSREDigitalTwinTask::GetTaskType() const
{
    return m_taskType;
}

void AIWorkbenchSREDigitalTwinTask::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinTask::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string AIWorkbenchSREDigitalTwinTask::GetTaskConfig() const
{
    return m_taskConfig;
}

void AIWorkbenchSREDigitalTwinTask::SetTaskConfig(const string& _taskConfig)
{
    m_taskConfig = _taskConfig;
    m_taskConfigHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinTask::TaskConfigHasBeenSet() const
{
    return m_taskConfigHasBeenSet;
}

uint64_t AIWorkbenchSREDigitalTwinTask::GetID() const
{
    return m_iD;
}

void AIWorkbenchSREDigitalTwinTask::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinTask::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string AIWorkbenchSREDigitalTwinTask::GetCreatedAt() const
{
    return m_createdAt;
}

void AIWorkbenchSREDigitalTwinTask::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinTask::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

uint64_t AIWorkbenchSREDigitalTwinTask::GetTwinID() const
{
    return m_twinID;
}

void AIWorkbenchSREDigitalTwinTask::SetTwinID(const uint64_t& _twinID)
{
    m_twinID = _twinID;
    m_twinIDHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinTask::TwinIDHasBeenSet() const
{
    return m_twinIDHasBeenSet;
}

