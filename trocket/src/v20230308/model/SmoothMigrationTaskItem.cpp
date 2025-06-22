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

#include <tencentcloud/trocket/v20230308/model/SmoothMigrationTaskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

SmoothMigrationTaskItem::SmoothMigrationTaskItem() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_sourceClusterNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_connectionTypeHasBeenSet(false),
    m_sourceNameServerHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_instanceVersionHasBeenSet(false)
{
}

CoreInternalOutcome SmoothMigrationTaskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmoothMigrationTaskItem.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmoothMigrationTaskItem.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("SourceClusterName") && !value["SourceClusterName"].IsNull())
    {
        if (!value["SourceClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmoothMigrationTaskItem.SourceClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceClusterName = string(value["SourceClusterName"].GetString());
        m_sourceClusterNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmoothMigrationTaskItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ConnectionType") && !value["ConnectionType"].IsNull())
    {
        if (!value["ConnectionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmoothMigrationTaskItem.ConnectionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionType = string(value["ConnectionType"].GetString());
        m_connectionTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceNameServer") && !value["SourceNameServer"].IsNull())
    {
        if (!value["SourceNameServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmoothMigrationTaskItem.SourceNameServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceNameServer = string(value["SourceNameServer"].GetString());
        m_sourceNameServerHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmoothMigrationTaskItem.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceVersion") && !value["InstanceVersion"].IsNull())
    {
        if (!value["InstanceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmoothMigrationTaskItem.InstanceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersion = string(value["InstanceVersion"].GetString());
        m_instanceVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmoothMigrationTaskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_sourceClusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceClusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceNameServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceNameServer.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceVersion.c_str(), allocator).Move(), allocator);
    }

}


string SmoothMigrationTaskItem::GetTaskId() const
{
    return m_taskId;
}

void SmoothMigrationTaskItem::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool SmoothMigrationTaskItem::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string SmoothMigrationTaskItem::GetTaskName() const
{
    return m_taskName;
}

void SmoothMigrationTaskItem::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool SmoothMigrationTaskItem::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string SmoothMigrationTaskItem::GetSourceClusterName() const
{
    return m_sourceClusterName;
}

void SmoothMigrationTaskItem::SetSourceClusterName(const string& _sourceClusterName)
{
    m_sourceClusterName = _sourceClusterName;
    m_sourceClusterNameHasBeenSet = true;
}

bool SmoothMigrationTaskItem::SourceClusterNameHasBeenSet() const
{
    return m_sourceClusterNameHasBeenSet;
}

string SmoothMigrationTaskItem::GetInstanceId() const
{
    return m_instanceId;
}

void SmoothMigrationTaskItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SmoothMigrationTaskItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SmoothMigrationTaskItem::GetConnectionType() const
{
    return m_connectionType;
}

void SmoothMigrationTaskItem::SetConnectionType(const string& _connectionType)
{
    m_connectionType = _connectionType;
    m_connectionTypeHasBeenSet = true;
}

bool SmoothMigrationTaskItem::ConnectionTypeHasBeenSet() const
{
    return m_connectionTypeHasBeenSet;
}

string SmoothMigrationTaskItem::GetSourceNameServer() const
{
    return m_sourceNameServer;
}

void SmoothMigrationTaskItem::SetSourceNameServer(const string& _sourceNameServer)
{
    m_sourceNameServer = _sourceNameServer;
    m_sourceNameServerHasBeenSet = true;
}

bool SmoothMigrationTaskItem::SourceNameServerHasBeenSet() const
{
    return m_sourceNameServerHasBeenSet;
}

string SmoothMigrationTaskItem::GetTaskStatus() const
{
    return m_taskStatus;
}

void SmoothMigrationTaskItem::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool SmoothMigrationTaskItem::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string SmoothMigrationTaskItem::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void SmoothMigrationTaskItem::SetInstanceVersion(const string& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool SmoothMigrationTaskItem::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

