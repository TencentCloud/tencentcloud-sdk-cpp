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

#include <tencentcloud/wedata/v20210820/model/TaskDataRegistryDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskDataRegistryDTO::TaskDataRegistryDTO() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_dbGuidHasBeenSet(false),
    m_tableGuidHasBeenSet(false),
    m_partitionNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_dataFlowTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_userUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_extHasBeenSet(false),
    m_tablePhysicalIdHasBeenSet(false)
{
}

CoreInternalOutcome TaskDataRegistryDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("DbGuid") && !value["DbGuid"].IsNull())
    {
        if (!value["DbGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.DbGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbGuid = string(value["DbGuid"].GetString());
        m_dbGuidHasBeenSet = true;
    }

    if (value.HasMember("TableGuid") && !value["TableGuid"].IsNull())
    {
        if (!value["TableGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.TableGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGuid = string(value["TableGuid"].GetString());
        m_tableGuidHasBeenSet = true;
    }

    if (value.HasMember("PartitionName") && !value["PartitionName"].IsNull())
    {
        if (!value["PartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.PartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionName = string(value["PartitionName"].GetString());
        m_partitionNameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("DataFlowType") && !value["DataFlowType"].IsNull())
    {
        if (!value["DataFlowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.DataFlowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataFlowType = string(value["DataFlowType"].GetString());
        m_dataFlowTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("Ext") && !value["Ext"].IsNull())
    {
        if (!value["Ext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.Ext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ext = string(value["Ext"].GetString());
        m_extHasBeenSet = true;
    }

    if (value.HasMember("TablePhysicalId") && !value["TablePhysicalId"].IsNull())
    {
        if (!value["TablePhysicalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistryDTO.TablePhysicalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tablePhysicalId = string(value["TablePhysicalId"].GetString());
        m_tablePhysicalIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskDataRegistryDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dbGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbGuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbGuid.c_str(), allocator).Move(), allocator);
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataFlowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFlowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataFlowType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_extHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ext.c_str(), allocator).Move(), allocator);
    }

    if (m_tablePhysicalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePhysicalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tablePhysicalId.c_str(), allocator).Move(), allocator);
    }

}


string TaskDataRegistryDTO::GetTaskId() const
{
    return m_taskId;
}

void TaskDataRegistryDTO::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskDataRegistryDTO::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskDataRegistryDTO::GetTaskName() const
{
    return m_taskName;
}

void TaskDataRegistryDTO::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskDataRegistryDTO::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskDataRegistryDTO::GetProjectId() const
{
    return m_projectId;
}

void TaskDataRegistryDTO::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskDataRegistryDTO::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TaskDataRegistryDTO::GetDatasourceId() const
{
    return m_datasourceId;
}

void TaskDataRegistryDTO::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool TaskDataRegistryDTO::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string TaskDataRegistryDTO::GetDatabaseName() const
{
    return m_databaseName;
}

void TaskDataRegistryDTO::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TaskDataRegistryDTO::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string TaskDataRegistryDTO::GetTableName() const
{
    return m_tableName;
}

void TaskDataRegistryDTO::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TaskDataRegistryDTO::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TaskDataRegistryDTO::GetDbGuid() const
{
    return m_dbGuid;
}

void TaskDataRegistryDTO::SetDbGuid(const string& _dbGuid)
{
    m_dbGuid = _dbGuid;
    m_dbGuidHasBeenSet = true;
}

bool TaskDataRegistryDTO::DbGuidHasBeenSet() const
{
    return m_dbGuidHasBeenSet;
}

string TaskDataRegistryDTO::GetTableGuid() const
{
    return m_tableGuid;
}

void TaskDataRegistryDTO::SetTableGuid(const string& _tableGuid)
{
    m_tableGuid = _tableGuid;
    m_tableGuidHasBeenSet = true;
}

bool TaskDataRegistryDTO::TableGuidHasBeenSet() const
{
    return m_tableGuidHasBeenSet;
}

string TaskDataRegistryDTO::GetPartitionName() const
{
    return m_partitionName;
}

void TaskDataRegistryDTO::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool TaskDataRegistryDTO::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

int64_t TaskDataRegistryDTO::GetId() const
{
    return m_id;
}

void TaskDataRegistryDTO::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TaskDataRegistryDTO::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TaskDataRegistryDTO::GetAppId() const
{
    return m_appId;
}

void TaskDataRegistryDTO::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TaskDataRegistryDTO::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string TaskDataRegistryDTO::GetDataFlowType() const
{
    return m_dataFlowType;
}

void TaskDataRegistryDTO::SetDataFlowType(const string& _dataFlowType)
{
    m_dataFlowType = _dataFlowType;
    m_dataFlowTypeHasBeenSet = true;
}

bool TaskDataRegistryDTO::DataFlowTypeHasBeenSet() const
{
    return m_dataFlowTypeHasBeenSet;
}

string TaskDataRegistryDTO::GetCreateTime() const
{
    return m_createTime;
}

void TaskDataRegistryDTO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskDataRegistryDTO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskDataRegistryDTO::GetUserUin() const
{
    return m_userUin;
}

void TaskDataRegistryDTO::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool TaskDataRegistryDTO::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string TaskDataRegistryDTO::GetOwnerUin() const
{
    return m_ownerUin;
}

void TaskDataRegistryDTO::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool TaskDataRegistryDTO::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string TaskDataRegistryDTO::GetExt() const
{
    return m_ext;
}

void TaskDataRegistryDTO::SetExt(const string& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool TaskDataRegistryDTO::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}

string TaskDataRegistryDTO::GetTablePhysicalId() const
{
    return m_tablePhysicalId;
}

void TaskDataRegistryDTO::SetTablePhysicalId(const string& _tablePhysicalId)
{
    m_tablePhysicalId = _tablePhysicalId;
    m_tablePhysicalIdHasBeenSet = true;
}

bool TaskDataRegistryDTO::TablePhysicalIdHasBeenSet() const
{
    return m_tablePhysicalIdHasBeenSet;
}

