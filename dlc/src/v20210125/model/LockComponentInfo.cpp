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

#include <tencentcloud/dlc/v20210125/model/LockComponentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

LockComponentInfo::LockComponentInfo() :
    m_dbNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_lockTypeHasBeenSet(false),
    m_lockLevelHasBeenSet(false),
    m_dataOperationTypeHasBeenSet(false),
    m_isAcidHasBeenSet(false),
    m_isDynamicPartitionWriteHasBeenSet(false)
{
}

CoreInternalOutcome LockComponentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LockComponentInfo.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LockComponentInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("Partition") && !value["Partition"].IsNull())
    {
        if (!value["Partition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LockComponentInfo.Partition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partition = string(value["Partition"].GetString());
        m_partitionHasBeenSet = true;
    }

    if (value.HasMember("LockType") && !value["LockType"].IsNull())
    {
        if (!value["LockType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LockComponentInfo.LockType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockType = string(value["LockType"].GetString());
        m_lockTypeHasBeenSet = true;
    }

    if (value.HasMember("LockLevel") && !value["LockLevel"].IsNull())
    {
        if (!value["LockLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LockComponentInfo.LockLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockLevel = string(value["LockLevel"].GetString());
        m_lockLevelHasBeenSet = true;
    }

    if (value.HasMember("DataOperationType") && !value["DataOperationType"].IsNull())
    {
        if (!value["DataOperationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LockComponentInfo.DataOperationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataOperationType = string(value["DataOperationType"].GetString());
        m_dataOperationTypeHasBeenSet = true;
    }

    if (value.HasMember("IsAcid") && !value["IsAcid"].IsNull())
    {
        if (!value["IsAcid"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LockComponentInfo.IsAcid` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAcid = value["IsAcid"].GetBool();
        m_isAcidHasBeenSet = true;
    }

    if (value.HasMember("IsDynamicPartitionWrite") && !value["IsDynamicPartitionWrite"].IsNull())
    {
        if (!value["IsDynamicPartitionWrite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LockComponentInfo.IsDynamicPartitionWrite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDynamicPartitionWrite = value["IsDynamicPartitionWrite"].GetBool();
        m_isDynamicPartitionWriteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LockComponentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partition.c_str(), allocator).Move(), allocator);
    }

    if (m_lockTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockType.c_str(), allocator).Move(), allocator);
    }

    if (m_lockLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_dataOperationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataOperationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataOperationType.c_str(), allocator).Move(), allocator);
    }

    if (m_isAcidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAcid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAcid, allocator);
    }

    if (m_isDynamicPartitionWriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDynamicPartitionWrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDynamicPartitionWrite, allocator);
    }

}


string LockComponentInfo::GetDbName() const
{
    return m_dbName;
}

void LockComponentInfo::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool LockComponentInfo::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string LockComponentInfo::GetTableName() const
{
    return m_tableName;
}

void LockComponentInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool LockComponentInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string LockComponentInfo::GetPartition() const
{
    return m_partition;
}

void LockComponentInfo::SetPartition(const string& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool LockComponentInfo::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

string LockComponentInfo::GetLockType() const
{
    return m_lockType;
}

void LockComponentInfo::SetLockType(const string& _lockType)
{
    m_lockType = _lockType;
    m_lockTypeHasBeenSet = true;
}

bool LockComponentInfo::LockTypeHasBeenSet() const
{
    return m_lockTypeHasBeenSet;
}

string LockComponentInfo::GetLockLevel() const
{
    return m_lockLevel;
}

void LockComponentInfo::SetLockLevel(const string& _lockLevel)
{
    m_lockLevel = _lockLevel;
    m_lockLevelHasBeenSet = true;
}

bool LockComponentInfo::LockLevelHasBeenSet() const
{
    return m_lockLevelHasBeenSet;
}

string LockComponentInfo::GetDataOperationType() const
{
    return m_dataOperationType;
}

void LockComponentInfo::SetDataOperationType(const string& _dataOperationType)
{
    m_dataOperationType = _dataOperationType;
    m_dataOperationTypeHasBeenSet = true;
}

bool LockComponentInfo::DataOperationTypeHasBeenSet() const
{
    return m_dataOperationTypeHasBeenSet;
}

bool LockComponentInfo::GetIsAcid() const
{
    return m_isAcid;
}

void LockComponentInfo::SetIsAcid(const bool& _isAcid)
{
    m_isAcid = _isAcid;
    m_isAcidHasBeenSet = true;
}

bool LockComponentInfo::IsAcidHasBeenSet() const
{
    return m_isAcidHasBeenSet;
}

bool LockComponentInfo::GetIsDynamicPartitionWrite() const
{
    return m_isDynamicPartitionWrite;
}

void LockComponentInfo::SetIsDynamicPartitionWrite(const bool& _isDynamicPartitionWrite)
{
    m_isDynamicPartitionWrite = _isDynamicPartitionWrite;
    m_isDynamicPartitionWriteHasBeenSet = true;
}

bool LockComponentInfo::IsDynamicPartitionWriteHasBeenSet() const
{
    return m_isDynamicPartitionWriteHasBeenSet;
}

