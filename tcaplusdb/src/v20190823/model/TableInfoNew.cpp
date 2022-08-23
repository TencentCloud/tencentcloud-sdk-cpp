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

#include <tencentcloud/tcaplusdb/v20190823/model/TableInfoNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

TableInfoNew::TableInfoNew() :
    m_tableNameHasBeenSet(false),
    m_tableInstanceIdHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_tableIdlTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_tableGroupIdHasBeenSet(false),
    m_tableGroupNameHasBeenSet(false),
    m_keyStructHasBeenSet(false),
    m_valueStructHasBeenSet(false),
    m_shardingKeySetHasBeenSet(false),
    m_indexStructHasBeenSet(false),
    m_listElementNumHasBeenSet(false),
    m_idlFilesHasBeenSet(false),
    m_reservedVolumeHasBeenSet(false),
    m_reservedReadQpsHasBeenSet(false),
    m_reservedWriteQpsHasBeenSet(false),
    m_tableSizeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_memoHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_apiAccessIdHasBeenSet(false),
    m_sortFieldNumHasBeenSet(false),
    m_sortRuleHasBeenSet(false),
    m_dbClusterInfoStructHasBeenSet(false),
    m_txhBackupExpireDayHasBeenSet(false),
    m_syncTableInfoHasBeenSet(false)
{
}

CoreInternalOutcome TableInfoNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableInstanceId") && !value["TableInstanceId"].IsNull())
    {
        if (!value["TableInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.TableInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableInstanceId = string(value["TableInstanceId"].GetString());
        m_tableInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("TableIdlType") && !value["TableIdlType"].IsNull())
    {
        if (!value["TableIdlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.TableIdlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableIdlType = string(value["TableIdlType"].GetString());
        m_tableIdlTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.TableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = string(value["TableGroupId"].GetString());
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TableGroupName") && !value["TableGroupName"].IsNull())
    {
        if (!value["TableGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.TableGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupName = string(value["TableGroupName"].GetString());
        m_tableGroupNameHasBeenSet = true;
    }

    if (value.HasMember("KeyStruct") && !value["KeyStruct"].IsNull())
    {
        if (!value["KeyStruct"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.KeyStruct` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyStruct = string(value["KeyStruct"].GetString());
        m_keyStructHasBeenSet = true;
    }

    if (value.HasMember("ValueStruct") && !value["ValueStruct"].IsNull())
    {
        if (!value["ValueStruct"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.ValueStruct` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueStruct = string(value["ValueStruct"].GetString());
        m_valueStructHasBeenSet = true;
    }

    if (value.HasMember("ShardingKeySet") && !value["ShardingKeySet"].IsNull())
    {
        if (!value["ShardingKeySet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.ShardingKeySet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardingKeySet = string(value["ShardingKeySet"].GetString());
        m_shardingKeySetHasBeenSet = true;
    }

    if (value.HasMember("IndexStruct") && !value["IndexStruct"].IsNull())
    {
        if (!value["IndexStruct"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.IndexStruct` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexStruct = string(value["IndexStruct"].GetString());
        m_indexStructHasBeenSet = true;
    }

    if (value.HasMember("ListElementNum") && !value["ListElementNum"].IsNull())
    {
        if (!value["ListElementNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.ListElementNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_listElementNum = value["ListElementNum"].GetUint64();
        m_listElementNumHasBeenSet = true;
    }

    if (value.HasMember("IdlFiles") && !value["IdlFiles"].IsNull())
    {
        if (!value["IdlFiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.IdlFiles` is not array type"));

        const rapidjson::Value &tmpValue = value["IdlFiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IdlFileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_idlFiles.push_back(item);
        }
        m_idlFilesHasBeenSet = true;
    }

    if (value.HasMember("ReservedVolume") && !value["ReservedVolume"].IsNull())
    {
        if (!value["ReservedVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.ReservedVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedVolume = value["ReservedVolume"].GetInt64();
        m_reservedVolumeHasBeenSet = true;
    }

    if (value.HasMember("ReservedReadQps") && !value["ReservedReadQps"].IsNull())
    {
        if (!value["ReservedReadQps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.ReservedReadQps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedReadQps = value["ReservedReadQps"].GetInt64();
        m_reservedReadQpsHasBeenSet = true;
    }

    if (value.HasMember("ReservedWriteQps") && !value["ReservedWriteQps"].IsNull())
    {
        if (!value["ReservedWriteQps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.ReservedWriteQps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedWriteQps = value["ReservedWriteQps"].GetInt64();
        m_reservedWriteQpsHasBeenSet = true;
    }

    if (value.HasMember("TableSize") && !value["TableSize"].IsNull())
    {
        if (!value["TableSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.TableSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableSize = value["TableSize"].GetInt64();
        m_tableSizeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("Memo") && !value["Memo"].IsNull())
    {
        if (!value["Memo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.Memo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memo = string(value["Memo"].GetString());
        m_memoHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.Error` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_error.Deserialize(value["Error"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorHasBeenSet = true;
    }

    if (value.HasMember("ApiAccessId") && !value["ApiAccessId"].IsNull())
    {
        if (!value["ApiAccessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.ApiAccessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiAccessId = string(value["ApiAccessId"].GetString());
        m_apiAccessIdHasBeenSet = true;
    }

    if (value.HasMember("SortFieldNum") && !value["SortFieldNum"].IsNull())
    {
        if (!value["SortFieldNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.SortFieldNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortFieldNum = value["SortFieldNum"].GetInt64();
        m_sortFieldNumHasBeenSet = true;
    }

    if (value.HasMember("SortRule") && !value["SortRule"].IsNull())
    {
        if (!value["SortRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.SortRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortRule = value["SortRule"].GetInt64();
        m_sortRuleHasBeenSet = true;
    }

    if (value.HasMember("DbClusterInfoStruct") && !value["DbClusterInfoStruct"].IsNull())
    {
        if (!value["DbClusterInfoStruct"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.DbClusterInfoStruct` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbClusterInfoStruct = string(value["DbClusterInfoStruct"].GetString());
        m_dbClusterInfoStructHasBeenSet = true;
    }

    if (value.HasMember("TxhBackupExpireDay") && !value["TxhBackupExpireDay"].IsNull())
    {
        if (!value["TxhBackupExpireDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.TxhBackupExpireDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_txhBackupExpireDay = value["TxhBackupExpireDay"].GetUint64();
        m_txhBackupExpireDayHasBeenSet = true;
    }

    if (value.HasMember("SyncTableInfo") && !value["SyncTableInfo"].IsNull())
    {
        if (!value["SyncTableInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfoNew.SyncTableInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_syncTableInfo.Deserialize(value["SyncTableInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_syncTableInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableInfoNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableIdlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableIdlType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_keyStructHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyStruct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyStruct.c_str(), allocator).Move(), allocator);
    }

    if (m_valueStructHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueStruct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueStruct.c_str(), allocator).Move(), allocator);
    }

    if (m_shardingKeySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardingKeySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardingKeySet.c_str(), allocator).Move(), allocator);
    }

    if (m_indexStructHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexStruct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexStruct.c_str(), allocator).Move(), allocator);
    }

    if (m_listElementNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListElementNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listElementNum, allocator);
    }

    if (m_idlFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdlFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_idlFiles.begin(); itr != m_idlFiles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_reservedVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedVolume, allocator);
    }

    if (m_reservedReadQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedReadQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedReadQps, allocator);
    }

    if (m_reservedWriteQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedWriteQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedWriteQps, allocator);
    }

    if (m_tableSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableSize, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_memoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memo.c_str(), allocator).Move(), allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_error.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_apiAccessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAccessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiAccessId.c_str(), allocator).Move(), allocator);
    }

    if (m_sortFieldNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortFieldNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sortFieldNum, allocator);
    }

    if (m_sortRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sortRule, allocator);
    }

    if (m_dbClusterInfoStructHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbClusterInfoStruct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbClusterInfoStruct.c_str(), allocator).Move(), allocator);
    }

    if (m_txhBackupExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxhBackupExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_txhBackupExpireDay, allocator);
    }

    if (m_syncTableInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncTableInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_syncTableInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TableInfoNew::GetTableName() const
{
    return m_tableName;
}

void TableInfoNew::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableInfoNew::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableInfoNew::GetTableInstanceId() const
{
    return m_tableInstanceId;
}

void TableInfoNew::SetTableInstanceId(const string& _tableInstanceId)
{
    m_tableInstanceId = _tableInstanceId;
    m_tableInstanceIdHasBeenSet = true;
}

bool TableInfoNew::TableInstanceIdHasBeenSet() const
{
    return m_tableInstanceIdHasBeenSet;
}

string TableInfoNew::GetTableType() const
{
    return m_tableType;
}

void TableInfoNew::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool TableInfoNew::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

string TableInfoNew::GetTableIdlType() const
{
    return m_tableIdlType;
}

void TableInfoNew::SetTableIdlType(const string& _tableIdlType)
{
    m_tableIdlType = _tableIdlType;
    m_tableIdlTypeHasBeenSet = true;
}

bool TableInfoNew::TableIdlTypeHasBeenSet() const
{
    return m_tableIdlTypeHasBeenSet;
}

string TableInfoNew::GetClusterId() const
{
    return m_clusterId;
}

void TableInfoNew::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool TableInfoNew::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string TableInfoNew::GetClusterName() const
{
    return m_clusterName;
}

void TableInfoNew::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool TableInfoNew::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string TableInfoNew::GetTableGroupId() const
{
    return m_tableGroupId;
}

void TableInfoNew::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool TableInfoNew::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

string TableInfoNew::GetTableGroupName() const
{
    return m_tableGroupName;
}

void TableInfoNew::SetTableGroupName(const string& _tableGroupName)
{
    m_tableGroupName = _tableGroupName;
    m_tableGroupNameHasBeenSet = true;
}

bool TableInfoNew::TableGroupNameHasBeenSet() const
{
    return m_tableGroupNameHasBeenSet;
}

string TableInfoNew::GetKeyStruct() const
{
    return m_keyStruct;
}

void TableInfoNew::SetKeyStruct(const string& _keyStruct)
{
    m_keyStruct = _keyStruct;
    m_keyStructHasBeenSet = true;
}

bool TableInfoNew::KeyStructHasBeenSet() const
{
    return m_keyStructHasBeenSet;
}

string TableInfoNew::GetValueStruct() const
{
    return m_valueStruct;
}

void TableInfoNew::SetValueStruct(const string& _valueStruct)
{
    m_valueStruct = _valueStruct;
    m_valueStructHasBeenSet = true;
}

bool TableInfoNew::ValueStructHasBeenSet() const
{
    return m_valueStructHasBeenSet;
}

string TableInfoNew::GetShardingKeySet() const
{
    return m_shardingKeySet;
}

void TableInfoNew::SetShardingKeySet(const string& _shardingKeySet)
{
    m_shardingKeySet = _shardingKeySet;
    m_shardingKeySetHasBeenSet = true;
}

bool TableInfoNew::ShardingKeySetHasBeenSet() const
{
    return m_shardingKeySetHasBeenSet;
}

string TableInfoNew::GetIndexStruct() const
{
    return m_indexStruct;
}

void TableInfoNew::SetIndexStruct(const string& _indexStruct)
{
    m_indexStruct = _indexStruct;
    m_indexStructHasBeenSet = true;
}

bool TableInfoNew::IndexStructHasBeenSet() const
{
    return m_indexStructHasBeenSet;
}

uint64_t TableInfoNew::GetListElementNum() const
{
    return m_listElementNum;
}

void TableInfoNew::SetListElementNum(const uint64_t& _listElementNum)
{
    m_listElementNum = _listElementNum;
    m_listElementNumHasBeenSet = true;
}

bool TableInfoNew::ListElementNumHasBeenSet() const
{
    return m_listElementNumHasBeenSet;
}

vector<IdlFileInfo> TableInfoNew::GetIdlFiles() const
{
    return m_idlFiles;
}

void TableInfoNew::SetIdlFiles(const vector<IdlFileInfo>& _idlFiles)
{
    m_idlFiles = _idlFiles;
    m_idlFilesHasBeenSet = true;
}

bool TableInfoNew::IdlFilesHasBeenSet() const
{
    return m_idlFilesHasBeenSet;
}

int64_t TableInfoNew::GetReservedVolume() const
{
    return m_reservedVolume;
}

void TableInfoNew::SetReservedVolume(const int64_t& _reservedVolume)
{
    m_reservedVolume = _reservedVolume;
    m_reservedVolumeHasBeenSet = true;
}

bool TableInfoNew::ReservedVolumeHasBeenSet() const
{
    return m_reservedVolumeHasBeenSet;
}

int64_t TableInfoNew::GetReservedReadQps() const
{
    return m_reservedReadQps;
}

void TableInfoNew::SetReservedReadQps(const int64_t& _reservedReadQps)
{
    m_reservedReadQps = _reservedReadQps;
    m_reservedReadQpsHasBeenSet = true;
}

bool TableInfoNew::ReservedReadQpsHasBeenSet() const
{
    return m_reservedReadQpsHasBeenSet;
}

int64_t TableInfoNew::GetReservedWriteQps() const
{
    return m_reservedWriteQps;
}

void TableInfoNew::SetReservedWriteQps(const int64_t& _reservedWriteQps)
{
    m_reservedWriteQps = _reservedWriteQps;
    m_reservedWriteQpsHasBeenSet = true;
}

bool TableInfoNew::ReservedWriteQpsHasBeenSet() const
{
    return m_reservedWriteQpsHasBeenSet;
}

int64_t TableInfoNew::GetTableSize() const
{
    return m_tableSize;
}

void TableInfoNew::SetTableSize(const int64_t& _tableSize)
{
    m_tableSize = _tableSize;
    m_tableSizeHasBeenSet = true;
}

bool TableInfoNew::TableSizeHasBeenSet() const
{
    return m_tableSizeHasBeenSet;
}

string TableInfoNew::GetStatus() const
{
    return m_status;
}

void TableInfoNew::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TableInfoNew::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TableInfoNew::GetCreatedTime() const
{
    return m_createdTime;
}

void TableInfoNew::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool TableInfoNew::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string TableInfoNew::GetUpdatedTime() const
{
    return m_updatedTime;
}

void TableInfoNew::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool TableInfoNew::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

string TableInfoNew::GetMemo() const
{
    return m_memo;
}

void TableInfoNew::SetMemo(const string& _memo)
{
    m_memo = _memo;
    m_memoHasBeenSet = true;
}

bool TableInfoNew::MemoHasBeenSet() const
{
    return m_memoHasBeenSet;
}

ErrorInfo TableInfoNew::GetError() const
{
    return m_error;
}

void TableInfoNew::SetError(const ErrorInfo& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool TableInfoNew::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

string TableInfoNew::GetApiAccessId() const
{
    return m_apiAccessId;
}

void TableInfoNew::SetApiAccessId(const string& _apiAccessId)
{
    m_apiAccessId = _apiAccessId;
    m_apiAccessIdHasBeenSet = true;
}

bool TableInfoNew::ApiAccessIdHasBeenSet() const
{
    return m_apiAccessIdHasBeenSet;
}

int64_t TableInfoNew::GetSortFieldNum() const
{
    return m_sortFieldNum;
}

void TableInfoNew::SetSortFieldNum(const int64_t& _sortFieldNum)
{
    m_sortFieldNum = _sortFieldNum;
    m_sortFieldNumHasBeenSet = true;
}

bool TableInfoNew::SortFieldNumHasBeenSet() const
{
    return m_sortFieldNumHasBeenSet;
}

int64_t TableInfoNew::GetSortRule() const
{
    return m_sortRule;
}

void TableInfoNew::SetSortRule(const int64_t& _sortRule)
{
    m_sortRule = _sortRule;
    m_sortRuleHasBeenSet = true;
}

bool TableInfoNew::SortRuleHasBeenSet() const
{
    return m_sortRuleHasBeenSet;
}

string TableInfoNew::GetDbClusterInfoStruct() const
{
    return m_dbClusterInfoStruct;
}

void TableInfoNew::SetDbClusterInfoStruct(const string& _dbClusterInfoStruct)
{
    m_dbClusterInfoStruct = _dbClusterInfoStruct;
    m_dbClusterInfoStructHasBeenSet = true;
}

bool TableInfoNew::DbClusterInfoStructHasBeenSet() const
{
    return m_dbClusterInfoStructHasBeenSet;
}

uint64_t TableInfoNew::GetTxhBackupExpireDay() const
{
    return m_txhBackupExpireDay;
}

void TableInfoNew::SetTxhBackupExpireDay(const uint64_t& _txhBackupExpireDay)
{
    m_txhBackupExpireDay = _txhBackupExpireDay;
    m_txhBackupExpireDayHasBeenSet = true;
}

bool TableInfoNew::TxhBackupExpireDayHasBeenSet() const
{
    return m_txhBackupExpireDayHasBeenSet;
}

SyncTableInfo TableInfoNew::GetSyncTableInfo() const
{
    return m_syncTableInfo;
}

void TableInfoNew::SetSyncTableInfo(const SyncTableInfo& _syncTableInfo)
{
    m_syncTableInfo = _syncTableInfo;
    m_syncTableInfoHasBeenSet = true;
}

bool TableInfoNew::SyncTableInfoHasBeenSet() const
{
    return m_syncTableInfoHasBeenSet;
}

