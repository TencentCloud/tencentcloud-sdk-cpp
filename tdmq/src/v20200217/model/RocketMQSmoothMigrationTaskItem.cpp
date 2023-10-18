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

#include <tencentcloud/tdmq/v20200217/model/RocketMQSmoothMigrationTaskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQSmoothMigrationTaskItem::RocketMQSmoothMigrationTaskItem() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_sourceClusterNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_connectionTypeHasBeenSet(false),
    m_sourceNameServerHasBeenSet(false),
    m_taskStatusHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQSmoothMigrationTaskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSmoothMigrationTaskItem.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSmoothMigrationTaskItem.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("SourceClusterName") && !value["SourceClusterName"].IsNull())
    {
        if (!value["SourceClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSmoothMigrationTaskItem.SourceClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceClusterName = string(value["SourceClusterName"].GetString());
        m_sourceClusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSmoothMigrationTaskItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ConnectionType") && !value["ConnectionType"].IsNull())
    {
        if (!value["ConnectionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSmoothMigrationTaskItem.ConnectionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionType = string(value["ConnectionType"].GetString());
        m_connectionTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceNameServer") && !value["SourceNameServer"].IsNull())
    {
        if (!value["SourceNameServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSmoothMigrationTaskItem.SourceNameServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceNameServer = string(value["SourceNameServer"].GetString());
        m_sourceNameServerHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSmoothMigrationTaskItem.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQSmoothMigrationTaskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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

}


string RocketMQSmoothMigrationTaskItem::GetTaskId() const
{
    return m_taskId;
}

void RocketMQSmoothMigrationTaskItem::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RocketMQSmoothMigrationTaskItem::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string RocketMQSmoothMigrationTaskItem::GetTaskName() const
{
    return m_taskName;
}

void RocketMQSmoothMigrationTaskItem::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool RocketMQSmoothMigrationTaskItem::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string RocketMQSmoothMigrationTaskItem::GetSourceClusterName() const
{
    return m_sourceClusterName;
}

void RocketMQSmoothMigrationTaskItem::SetSourceClusterName(const string& _sourceClusterName)
{
    m_sourceClusterName = _sourceClusterName;
    m_sourceClusterNameHasBeenSet = true;
}

bool RocketMQSmoothMigrationTaskItem::SourceClusterNameHasBeenSet() const
{
    return m_sourceClusterNameHasBeenSet;
}

string RocketMQSmoothMigrationTaskItem::GetClusterId() const
{
    return m_clusterId;
}

void RocketMQSmoothMigrationTaskItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RocketMQSmoothMigrationTaskItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RocketMQSmoothMigrationTaskItem::GetConnectionType() const
{
    return m_connectionType;
}

void RocketMQSmoothMigrationTaskItem::SetConnectionType(const string& _connectionType)
{
    m_connectionType = _connectionType;
    m_connectionTypeHasBeenSet = true;
}

bool RocketMQSmoothMigrationTaskItem::ConnectionTypeHasBeenSet() const
{
    return m_connectionTypeHasBeenSet;
}

string RocketMQSmoothMigrationTaskItem::GetSourceNameServer() const
{
    return m_sourceNameServer;
}

void RocketMQSmoothMigrationTaskItem::SetSourceNameServer(const string& _sourceNameServer)
{
    m_sourceNameServer = _sourceNameServer;
    m_sourceNameServerHasBeenSet = true;
}

bool RocketMQSmoothMigrationTaskItem::SourceNameServerHasBeenSet() const
{
    return m_sourceNameServerHasBeenSet;
}

string RocketMQSmoothMigrationTaskItem::GetTaskStatus() const
{
    return m_taskStatus;
}

void RocketMQSmoothMigrationTaskItem::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool RocketMQSmoothMigrationTaskItem::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

