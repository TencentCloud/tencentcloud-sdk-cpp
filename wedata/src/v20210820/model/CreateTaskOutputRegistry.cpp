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

#include <tencentcloud/wedata/v20210820/model/CreateTaskOutputRegistry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateTaskOutputRegistry::CreateTaskOutputRegistry() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tablePhysicalIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableGuidHasBeenSet(false),
    m_partitionNameHasBeenSet(false),
    m_dbGuidHasBeenSet(false)
{
}

CoreInternalOutcome CreateTaskOutputRegistry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskOutputRegistry.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskOutputRegistry.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskOutputRegistry.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TablePhysicalId") && !value["TablePhysicalId"].IsNull())
    {
        if (!value["TablePhysicalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskOutputRegistry.TablePhysicalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tablePhysicalId = string(value["TablePhysicalId"].GetString());
        m_tablePhysicalIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskOutputRegistry.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskOutputRegistry.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskOutputRegistry.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableGuid") && !value["TableGuid"].IsNull())
    {
        if (!value["TableGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskOutputRegistry.TableGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGuid = string(value["TableGuid"].GetString());
        m_tableGuidHasBeenSet = true;
    }

    if (value.HasMember("PartitionName") && !value["PartitionName"].IsNull())
    {
        if (!value["PartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskOutputRegistry.PartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionName = string(value["PartitionName"].GetString());
        m_partitionNameHasBeenSet = true;
    }

    if (value.HasMember("DbGuid") && !value["DbGuid"].IsNull())
    {
        if (!value["DbGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskOutputRegistry.DbGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbGuid = string(value["DbGuid"].GetString());
        m_dbGuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateTaskOutputRegistry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_tablePhysicalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePhysicalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tablePhysicalId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGuid.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbGuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbGuid.c_str(), allocator).Move(), allocator);
    }

}


string CreateTaskOutputRegistry::GetTaskId() const
{
    return m_taskId;
}

void CreateTaskOutputRegistry::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateTaskOutputRegistry::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CreateTaskOutputRegistry::GetTaskName() const
{
    return m_taskName;
}

void CreateTaskOutputRegistry::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateTaskOutputRegistry::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CreateTaskOutputRegistry::GetProjectId() const
{
    return m_projectId;
}

void CreateTaskOutputRegistry::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateTaskOutputRegistry::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateTaskOutputRegistry::GetTablePhysicalId() const
{
    return m_tablePhysicalId;
}

void CreateTaskOutputRegistry::SetTablePhysicalId(const string& _tablePhysicalId)
{
    m_tablePhysicalId = _tablePhysicalId;
    m_tablePhysicalIdHasBeenSet = true;
}

bool CreateTaskOutputRegistry::TablePhysicalIdHasBeenSet() const
{
    return m_tablePhysicalIdHasBeenSet;
}

string CreateTaskOutputRegistry::GetDatasourceId() const
{
    return m_datasourceId;
}

void CreateTaskOutputRegistry::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool CreateTaskOutputRegistry::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string CreateTaskOutputRegistry::GetDatabaseName() const
{
    return m_databaseName;
}

void CreateTaskOutputRegistry::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool CreateTaskOutputRegistry::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string CreateTaskOutputRegistry::GetTableName() const
{
    return m_tableName;
}

void CreateTaskOutputRegistry::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool CreateTaskOutputRegistry::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string CreateTaskOutputRegistry::GetTableGuid() const
{
    return m_tableGuid;
}

void CreateTaskOutputRegistry::SetTableGuid(const string& _tableGuid)
{
    m_tableGuid = _tableGuid;
    m_tableGuidHasBeenSet = true;
}

bool CreateTaskOutputRegistry::TableGuidHasBeenSet() const
{
    return m_tableGuidHasBeenSet;
}

string CreateTaskOutputRegistry::GetPartitionName() const
{
    return m_partitionName;
}

void CreateTaskOutputRegistry::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool CreateTaskOutputRegistry::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

string CreateTaskOutputRegistry::GetDbGuid() const
{
    return m_dbGuid;
}

void CreateTaskOutputRegistry::SetDbGuid(const string& _dbGuid)
{
    m_dbGuid = _dbGuid;
    m_dbGuidHasBeenSet = true;
}

bool CreateTaskOutputRegistry::DbGuidHasBeenSet() const
{
    return m_dbGuidHasBeenSet;
}

