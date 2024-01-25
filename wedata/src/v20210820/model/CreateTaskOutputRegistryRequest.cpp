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

#include <tencentcloud/wedata/v20210820/model/CreateTaskOutputRegistryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateTaskOutputRegistryRequest::CreateTaskOutputRegistryRequest() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tablePhysicalIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableGuidHasBeenSet(false),
    m_partitionNameHasBeenSet(false),
    m_dbGuidHasBeenSet(false)
{
}

string CreateTaskOutputRegistryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_tablePhysicalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePhysicalId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tablePhysicalId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableGuid.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_partitionName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbGuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbGuid.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTaskOutputRegistryRequest::GetTaskId() const
{
    return m_taskId;
}

void CreateTaskOutputRegistryRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateTaskOutputRegistryRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CreateTaskOutputRegistryRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateTaskOutputRegistryRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateTaskOutputRegistryRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CreateTaskOutputRegistryRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateTaskOutputRegistryRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateTaskOutputRegistryRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateTaskOutputRegistryRequest::GetTablePhysicalId() const
{
    return m_tablePhysicalId;
}

void CreateTaskOutputRegistryRequest::SetTablePhysicalId(const string& _tablePhysicalId)
{
    m_tablePhysicalId = _tablePhysicalId;
    m_tablePhysicalIdHasBeenSet = true;
}

bool CreateTaskOutputRegistryRequest::TablePhysicalIdHasBeenSet() const
{
    return m_tablePhysicalIdHasBeenSet;
}

int64_t CreateTaskOutputRegistryRequest::GetId() const
{
    return m_id;
}

void CreateTaskOutputRegistryRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateTaskOutputRegistryRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CreateTaskOutputRegistryRequest::GetDatasourceId() const
{
    return m_datasourceId;
}

void CreateTaskOutputRegistryRequest::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool CreateTaskOutputRegistryRequest::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string CreateTaskOutputRegistryRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void CreateTaskOutputRegistryRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool CreateTaskOutputRegistryRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string CreateTaskOutputRegistryRequest::GetTableName() const
{
    return m_tableName;
}

void CreateTaskOutputRegistryRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool CreateTaskOutputRegistryRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string CreateTaskOutputRegistryRequest::GetTableGuid() const
{
    return m_tableGuid;
}

void CreateTaskOutputRegistryRequest::SetTableGuid(const string& _tableGuid)
{
    m_tableGuid = _tableGuid;
    m_tableGuidHasBeenSet = true;
}

bool CreateTaskOutputRegistryRequest::TableGuidHasBeenSet() const
{
    return m_tableGuidHasBeenSet;
}

string CreateTaskOutputRegistryRequest::GetPartitionName() const
{
    return m_partitionName;
}

void CreateTaskOutputRegistryRequest::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool CreateTaskOutputRegistryRequest::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

string CreateTaskOutputRegistryRequest::GetDbGuid() const
{
    return m_dbGuid;
}

void CreateTaskOutputRegistryRequest::SetDbGuid(const string& _dbGuid)
{
    m_dbGuid = _dbGuid;
    m_dbGuidHasBeenSet = true;
}

bool CreateTaskOutputRegistryRequest::DbGuidHasBeenSet() const
{
    return m_dbGuidHasBeenSet;
}


