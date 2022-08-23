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

#include <tencentcloud/tcaplusdb/v20190823/model/SyncTableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

SyncTableInfo::SyncTableInfo() :
    m_targetTableSplitNumHasBeenSet(false),
    m_targetTableNamePrefixHasBeenSet(false),
    m_targetSyncDBInstanceIdHasBeenSet(false),
    m_targetDatabaseNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_tableGroupIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_keyFieldMappingHasBeenSet(false),
    m_valueFieldMappingHasBeenSet(false)
{
}

CoreInternalOutcome SyncTableInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetTableSplitNum") && !value["TargetTableSplitNum"].IsNull())
    {
        if (!value["TargetTableSplitNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncTableInfo.TargetTableSplitNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetTableSplitNum = value["TargetTableSplitNum"].GetUint64();
        m_targetTableSplitNumHasBeenSet = true;
    }

    if (value.HasMember("TargetTableNamePrefix") && !value["TargetTableNamePrefix"].IsNull())
    {
        if (!value["TargetTableNamePrefix"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SyncTableInfo.TargetTableNamePrefix` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetTableNamePrefix"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetTableNamePrefix.push_back((*itr).GetString());
        }
        m_targetTableNamePrefixHasBeenSet = true;
    }

    if (value.HasMember("TargetSyncDBInstanceId") && !value["TargetSyncDBInstanceId"].IsNull())
    {
        if (!value["TargetSyncDBInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncTableInfo.TargetSyncDBInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetSyncDBInstanceId = string(value["TargetSyncDBInstanceId"].GetString());
        m_targetSyncDBInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TargetDatabaseName") && !value["TargetDatabaseName"].IsNull())
    {
        if (!value["TargetDatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncTableInfo.TargetDatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetDatabaseName = string(value["TargetDatabaseName"].GetString());
        m_targetDatabaseNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncTableInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncTableInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncTableInfo.TableGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = value["TableGroupId"].GetUint64();
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncTableInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncTableInfo.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("KeyFieldMapping") && !value["KeyFieldMapping"].IsNull())
    {
        if (!value["KeyFieldMapping"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SyncTableInfo.KeyFieldMapping` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyFieldMapping"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SyncTableField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keyFieldMapping.push_back(item);
        }
        m_keyFieldMappingHasBeenSet = true;
    }

    if (value.HasMember("ValueFieldMapping") && !value["ValueFieldMapping"].IsNull())
    {
        if (!value["ValueFieldMapping"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SyncTableInfo.ValueFieldMapping` is not array type"));

        const rapidjson::Value &tmpValue = value["ValueFieldMapping"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SyncTableField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_valueFieldMapping.push_back(item);
        }
        m_valueFieldMappingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SyncTableInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetTableSplitNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTableSplitNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetTableSplitNum, allocator);
    }

    if (m_targetTableNamePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTableNamePrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetTableNamePrefix.begin(); itr != m_targetTableNamePrefix.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetSyncDBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSyncDBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetSyncDBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetDatabaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetDatabaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableGroupId, allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyFieldMappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyFieldMapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keyFieldMapping.begin(); itr != m_keyFieldMapping.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_valueFieldMappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueFieldMapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_valueFieldMapping.begin(); itr != m_valueFieldMapping.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t SyncTableInfo::GetTargetTableSplitNum() const
{
    return m_targetTableSplitNum;
}

void SyncTableInfo::SetTargetTableSplitNum(const uint64_t& _targetTableSplitNum)
{
    m_targetTableSplitNum = _targetTableSplitNum;
    m_targetTableSplitNumHasBeenSet = true;
}

bool SyncTableInfo::TargetTableSplitNumHasBeenSet() const
{
    return m_targetTableSplitNumHasBeenSet;
}

vector<string> SyncTableInfo::GetTargetTableNamePrefix() const
{
    return m_targetTableNamePrefix;
}

void SyncTableInfo::SetTargetTableNamePrefix(const vector<string>& _targetTableNamePrefix)
{
    m_targetTableNamePrefix = _targetTableNamePrefix;
    m_targetTableNamePrefixHasBeenSet = true;
}

bool SyncTableInfo::TargetTableNamePrefixHasBeenSet() const
{
    return m_targetTableNamePrefixHasBeenSet;
}

string SyncTableInfo::GetTargetSyncDBInstanceId() const
{
    return m_targetSyncDBInstanceId;
}

void SyncTableInfo::SetTargetSyncDBInstanceId(const string& _targetSyncDBInstanceId)
{
    m_targetSyncDBInstanceId = _targetSyncDBInstanceId;
    m_targetSyncDBInstanceIdHasBeenSet = true;
}

bool SyncTableInfo::TargetSyncDBInstanceIdHasBeenSet() const
{
    return m_targetSyncDBInstanceIdHasBeenSet;
}

string SyncTableInfo::GetTargetDatabaseName() const
{
    return m_targetDatabaseName;
}

void SyncTableInfo::SetTargetDatabaseName(const string& _targetDatabaseName)
{
    m_targetDatabaseName = _targetDatabaseName;
    m_targetDatabaseNameHasBeenSet = true;
}

bool SyncTableInfo::TargetDatabaseNameHasBeenSet() const
{
    return m_targetDatabaseNameHasBeenSet;
}

int64_t SyncTableInfo::GetStatus() const
{
    return m_status;
}

void SyncTableInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SyncTableInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SyncTableInfo::GetClusterId() const
{
    return m_clusterId;
}

void SyncTableInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool SyncTableInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t SyncTableInfo::GetTableGroupId() const
{
    return m_tableGroupId;
}

void SyncTableInfo::SetTableGroupId(const uint64_t& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool SyncTableInfo::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

string SyncTableInfo::GetTableName() const
{
    return m_tableName;
}

void SyncTableInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool SyncTableInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string SyncTableInfo::GetTableId() const
{
    return m_tableId;
}

void SyncTableInfo::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool SyncTableInfo::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

vector<SyncTableField> SyncTableInfo::GetKeyFieldMapping() const
{
    return m_keyFieldMapping;
}

void SyncTableInfo::SetKeyFieldMapping(const vector<SyncTableField>& _keyFieldMapping)
{
    m_keyFieldMapping = _keyFieldMapping;
    m_keyFieldMappingHasBeenSet = true;
}

bool SyncTableInfo::KeyFieldMappingHasBeenSet() const
{
    return m_keyFieldMappingHasBeenSet;
}

vector<SyncTableField> SyncTableInfo::GetValueFieldMapping() const
{
    return m_valueFieldMapping;
}

void SyncTableInfo::SetValueFieldMapping(const vector<SyncTableField>& _valueFieldMapping)
{
    m_valueFieldMapping = _valueFieldMapping;
    m_valueFieldMappingHasBeenSet = true;
}

bool SyncTableInfo::ValueFieldMappingHasBeenSet() const
{
    return m_valueFieldMappingHasBeenSet;
}

