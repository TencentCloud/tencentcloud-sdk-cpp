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

#include <tencentcloud/wedata/v20250806/model/TaskDataRegistry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TaskDataRegistry::TaskDataRegistry() :
    m_datasourceIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_partitionNameHasBeenSet(false),
    m_dataFlowTypeHasBeenSet(false),
    m_tablePhysicalIdHasBeenSet(false),
    m_dbGuidHasBeenSet(false),
    m_tableGuidHasBeenSet(false)
{
}

CoreInternalOutcome TaskDataRegistry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistry.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistry.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistry.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("PartitionName") && !value["PartitionName"].IsNull())
    {
        if (!value["PartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistry.PartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionName = string(value["PartitionName"].GetString());
        m_partitionNameHasBeenSet = true;
    }

    if (value.HasMember("DataFlowType") && !value["DataFlowType"].IsNull())
    {
        if (!value["DataFlowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistry.DataFlowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataFlowType = string(value["DataFlowType"].GetString());
        m_dataFlowTypeHasBeenSet = true;
    }

    if (value.HasMember("TablePhysicalId") && !value["TablePhysicalId"].IsNull())
    {
        if (!value["TablePhysicalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistry.TablePhysicalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tablePhysicalId = string(value["TablePhysicalId"].GetString());
        m_tablePhysicalIdHasBeenSet = true;
    }

    if (value.HasMember("DbGuid") && !value["DbGuid"].IsNull())
    {
        if (!value["DbGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistry.DbGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbGuid = string(value["DbGuid"].GetString());
        m_dbGuidHasBeenSet = true;
    }

    if (value.HasMember("TableGuid") && !value["TableGuid"].IsNull())
    {
        if (!value["TableGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistry.TableGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGuid = string(value["TableGuid"].GetString());
        m_tableGuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskDataRegistry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_partitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataFlowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFlowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataFlowType.c_str(), allocator).Move(), allocator);
    }

    if (m_tablePhysicalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePhysicalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tablePhysicalId.c_str(), allocator).Move(), allocator);
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

}


string TaskDataRegistry::GetDatasourceId() const
{
    return m_datasourceId;
}

void TaskDataRegistry::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool TaskDataRegistry::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string TaskDataRegistry::GetDatabaseName() const
{
    return m_databaseName;
}

void TaskDataRegistry::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TaskDataRegistry::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string TaskDataRegistry::GetTableName() const
{
    return m_tableName;
}

void TaskDataRegistry::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TaskDataRegistry::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TaskDataRegistry::GetPartitionName() const
{
    return m_partitionName;
}

void TaskDataRegistry::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool TaskDataRegistry::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

string TaskDataRegistry::GetDataFlowType() const
{
    return m_dataFlowType;
}

void TaskDataRegistry::SetDataFlowType(const string& _dataFlowType)
{
    m_dataFlowType = _dataFlowType;
    m_dataFlowTypeHasBeenSet = true;
}

bool TaskDataRegistry::DataFlowTypeHasBeenSet() const
{
    return m_dataFlowTypeHasBeenSet;
}

string TaskDataRegistry::GetTablePhysicalId() const
{
    return m_tablePhysicalId;
}

void TaskDataRegistry::SetTablePhysicalId(const string& _tablePhysicalId)
{
    m_tablePhysicalId = _tablePhysicalId;
    m_tablePhysicalIdHasBeenSet = true;
}

bool TaskDataRegistry::TablePhysicalIdHasBeenSet() const
{
    return m_tablePhysicalIdHasBeenSet;
}

string TaskDataRegistry::GetDbGuid() const
{
    return m_dbGuid;
}

void TaskDataRegistry::SetDbGuid(const string& _dbGuid)
{
    m_dbGuid = _dbGuid;
    m_dbGuidHasBeenSet = true;
}

bool TaskDataRegistry::DbGuidHasBeenSet() const
{
    return m_dbGuidHasBeenSet;
}

string TaskDataRegistry::GetTableGuid() const
{
    return m_tableGuid;
}

void TaskDataRegistry::SetTableGuid(const string& _tableGuid)
{
    m_tableGuid = _tableGuid;
    m_tableGuidHasBeenSet = true;
}

bool TaskDataRegistry::TableGuidHasBeenSet() const
{
    return m_tableGuidHasBeenSet;
}

