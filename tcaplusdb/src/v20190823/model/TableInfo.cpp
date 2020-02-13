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

#include <tencentcloud/tcaplusdb/v20190823/model/TableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

TableInfo::TableInfo() :
    m_tableNameHasBeenSet(false),
    m_tableInstanceIdHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_tableIdlTypeHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_logicZoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
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
    m_apiAccessIdHasBeenSet(false)
{
}

CoreInternalOutcome TableInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableInstanceId") && !value["TableInstanceId"].IsNull())
    {
        if (!value["TableInstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.TableInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableInstanceId = string(value["TableInstanceId"].GetString());
        m_tableInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("TableIdlType") && !value["TableIdlType"].IsNull())
    {
        if (!value["TableIdlType"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.TableIdlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableIdlType = string(value["TableIdlType"].GetString());
        m_tableIdlTypeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("LogicZoneId") && !value["LogicZoneId"].IsNull())
    {
        if (!value["LogicZoneId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.LogicZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicZoneId = string(value["LogicZoneId"].GetString());
        m_logicZoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("KeyStruct") && !value["KeyStruct"].IsNull())
    {
        if (!value["KeyStruct"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.KeyStruct` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyStruct = string(value["KeyStruct"].GetString());
        m_keyStructHasBeenSet = true;
    }

    if (value.HasMember("ValueStruct") && !value["ValueStruct"].IsNull())
    {
        if (!value["ValueStruct"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.ValueStruct` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueStruct = string(value["ValueStruct"].GetString());
        m_valueStructHasBeenSet = true;
    }

    if (value.HasMember("ShardingKeySet") && !value["ShardingKeySet"].IsNull())
    {
        if (!value["ShardingKeySet"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.ShardingKeySet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardingKeySet = string(value["ShardingKeySet"].GetString());
        m_shardingKeySetHasBeenSet = true;
    }

    if (value.HasMember("IndexStruct") && !value["IndexStruct"].IsNull())
    {
        if (!value["IndexStruct"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.IndexStruct` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexStruct = string(value["IndexStruct"].GetString());
        m_indexStructHasBeenSet = true;
    }

    if (value.HasMember("ListElementNum") && !value["ListElementNum"].IsNull())
    {
        if (!value["ListElementNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TableInfo.ListElementNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_listElementNum = value["ListElementNum"].GetUint64();
        m_listElementNumHasBeenSet = true;
    }

    if (value.HasMember("IdlFiles") && !value["IdlFiles"].IsNull())
    {
        if (!value["IdlFiles"].IsArray())
            return CoreInternalOutcome(Error("response `TableInfo.IdlFiles` is not array type"));

        const Value &tmpValue = value["IdlFiles"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `TableInfo.ReservedVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedVolume = value["ReservedVolume"].GetInt64();
        m_reservedVolumeHasBeenSet = true;
    }

    if (value.HasMember("ReservedReadQps") && !value["ReservedReadQps"].IsNull())
    {
        if (!value["ReservedReadQps"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TableInfo.ReservedReadQps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedReadQps = value["ReservedReadQps"].GetInt64();
        m_reservedReadQpsHasBeenSet = true;
    }

    if (value.HasMember("ReservedWriteQps") && !value["ReservedWriteQps"].IsNull())
    {
        if (!value["ReservedWriteQps"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TableInfo.ReservedWriteQps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedWriteQps = value["ReservedWriteQps"].GetInt64();
        m_reservedWriteQpsHasBeenSet = true;
    }

    if (value.HasMember("TableSize") && !value["TableSize"].IsNull())
    {
        if (!value["TableSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TableInfo.TableSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableSize = value["TableSize"].GetInt64();
        m_tableSizeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("Memo") && !value["Memo"].IsNull())
    {
        if (!value["Memo"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableInfo.Memo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memo = string(value["Memo"].GetString());
        m_memoHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TableInfo.Error` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `TableInfo.ApiAccessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiAccessId = string(value["ApiAccessId"].GetString());
        m_apiAccessIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_tableNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdlTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableIdlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableIdlType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_logicZoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogicZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_logicZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_keyStructHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeyStruct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_keyStruct.c_str(), allocator).Move(), allocator);
    }

    if (m_valueStructHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ValueStruct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_valueStruct.c_str(), allocator).Move(), allocator);
    }

    if (m_shardingKeySetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShardingKeySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_shardingKeySet.c_str(), allocator).Move(), allocator);
    }

    if (m_indexStructHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IndexStruct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_indexStruct.c_str(), allocator).Move(), allocator);
    }

    if (m_listElementNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListElementNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listElementNum, allocator);
    }

    if (m_idlFilesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdlFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_idlFiles.begin(); itr != m_idlFiles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_reservedVolumeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReservedVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedVolume, allocator);
    }

    if (m_reservedReadQpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReservedReadQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedReadQps, allocator);
    }

    if (m_reservedWriteQpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReservedWriteQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedWriteQps, allocator);
    }

    if (m_tableSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableSize, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_memoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_memo.c_str(), allocator).Move(), allocator);
    }

    if (m_errorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_error.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_apiAccessIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiAccessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_apiAccessId.c_str(), allocator).Move(), allocator);
    }

}


string TableInfo::GetTableName() const
{
    return m_tableName;
}

void TableInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableInfo::GetTableInstanceId() const
{
    return m_tableInstanceId;
}

void TableInfo::SetTableInstanceId(const string& _tableInstanceId)
{
    m_tableInstanceId = _tableInstanceId;
    m_tableInstanceIdHasBeenSet = true;
}

bool TableInfo::TableInstanceIdHasBeenSet() const
{
    return m_tableInstanceIdHasBeenSet;
}

string TableInfo::GetTableType() const
{
    return m_tableType;
}

void TableInfo::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool TableInfo::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

string TableInfo::GetTableIdlType() const
{
    return m_tableIdlType;
}

void TableInfo::SetTableIdlType(const string& _tableIdlType)
{
    m_tableIdlType = _tableIdlType;
    m_tableIdlTypeHasBeenSet = true;
}

bool TableInfo::TableIdlTypeHasBeenSet() const
{
    return m_tableIdlTypeHasBeenSet;
}

string TableInfo::GetApplicationId() const
{
    return m_applicationId;
}

void TableInfo::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool TableInfo::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string TableInfo::GetAppName() const
{
    return m_appName;
}

void TableInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool TableInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string TableInfo::GetLogicZoneId() const
{
    return m_logicZoneId;
}

void TableInfo::SetLogicZoneId(const string& _logicZoneId)
{
    m_logicZoneId = _logicZoneId;
    m_logicZoneIdHasBeenSet = true;
}

bool TableInfo::LogicZoneIdHasBeenSet() const
{
    return m_logicZoneIdHasBeenSet;
}

string TableInfo::GetZoneName() const
{
    return m_zoneName;
}

void TableInfo::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool TableInfo::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string TableInfo::GetKeyStruct() const
{
    return m_keyStruct;
}

void TableInfo::SetKeyStruct(const string& _keyStruct)
{
    m_keyStruct = _keyStruct;
    m_keyStructHasBeenSet = true;
}

bool TableInfo::KeyStructHasBeenSet() const
{
    return m_keyStructHasBeenSet;
}

string TableInfo::GetValueStruct() const
{
    return m_valueStruct;
}

void TableInfo::SetValueStruct(const string& _valueStruct)
{
    m_valueStruct = _valueStruct;
    m_valueStructHasBeenSet = true;
}

bool TableInfo::ValueStructHasBeenSet() const
{
    return m_valueStructHasBeenSet;
}

string TableInfo::GetShardingKeySet() const
{
    return m_shardingKeySet;
}

void TableInfo::SetShardingKeySet(const string& _shardingKeySet)
{
    m_shardingKeySet = _shardingKeySet;
    m_shardingKeySetHasBeenSet = true;
}

bool TableInfo::ShardingKeySetHasBeenSet() const
{
    return m_shardingKeySetHasBeenSet;
}

string TableInfo::GetIndexStruct() const
{
    return m_indexStruct;
}

void TableInfo::SetIndexStruct(const string& _indexStruct)
{
    m_indexStruct = _indexStruct;
    m_indexStructHasBeenSet = true;
}

bool TableInfo::IndexStructHasBeenSet() const
{
    return m_indexStructHasBeenSet;
}

uint64_t TableInfo::GetListElementNum() const
{
    return m_listElementNum;
}

void TableInfo::SetListElementNum(const uint64_t& _listElementNum)
{
    m_listElementNum = _listElementNum;
    m_listElementNumHasBeenSet = true;
}

bool TableInfo::ListElementNumHasBeenSet() const
{
    return m_listElementNumHasBeenSet;
}

vector<IdlFileInfo> TableInfo::GetIdlFiles() const
{
    return m_idlFiles;
}

void TableInfo::SetIdlFiles(const vector<IdlFileInfo>& _idlFiles)
{
    m_idlFiles = _idlFiles;
    m_idlFilesHasBeenSet = true;
}

bool TableInfo::IdlFilesHasBeenSet() const
{
    return m_idlFilesHasBeenSet;
}

int64_t TableInfo::GetReservedVolume() const
{
    return m_reservedVolume;
}

void TableInfo::SetReservedVolume(const int64_t& _reservedVolume)
{
    m_reservedVolume = _reservedVolume;
    m_reservedVolumeHasBeenSet = true;
}

bool TableInfo::ReservedVolumeHasBeenSet() const
{
    return m_reservedVolumeHasBeenSet;
}

int64_t TableInfo::GetReservedReadQps() const
{
    return m_reservedReadQps;
}

void TableInfo::SetReservedReadQps(const int64_t& _reservedReadQps)
{
    m_reservedReadQps = _reservedReadQps;
    m_reservedReadQpsHasBeenSet = true;
}

bool TableInfo::ReservedReadQpsHasBeenSet() const
{
    return m_reservedReadQpsHasBeenSet;
}

int64_t TableInfo::GetReservedWriteQps() const
{
    return m_reservedWriteQps;
}

void TableInfo::SetReservedWriteQps(const int64_t& _reservedWriteQps)
{
    m_reservedWriteQps = _reservedWriteQps;
    m_reservedWriteQpsHasBeenSet = true;
}

bool TableInfo::ReservedWriteQpsHasBeenSet() const
{
    return m_reservedWriteQpsHasBeenSet;
}

int64_t TableInfo::GetTableSize() const
{
    return m_tableSize;
}

void TableInfo::SetTableSize(const int64_t& _tableSize)
{
    m_tableSize = _tableSize;
    m_tableSizeHasBeenSet = true;
}

bool TableInfo::TableSizeHasBeenSet() const
{
    return m_tableSizeHasBeenSet;
}

string TableInfo::GetStatus() const
{
    return m_status;
}

void TableInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TableInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TableInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void TableInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool TableInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string TableInfo::GetUpdatedTime() const
{
    return m_updatedTime;
}

void TableInfo::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool TableInfo::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

string TableInfo::GetMemo() const
{
    return m_memo;
}

void TableInfo::SetMemo(const string& _memo)
{
    m_memo = _memo;
    m_memoHasBeenSet = true;
}

bool TableInfo::MemoHasBeenSet() const
{
    return m_memoHasBeenSet;
}

ErrorInfo TableInfo::GetError() const
{
    return m_error;
}

void TableInfo::SetError(const ErrorInfo& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool TableInfo::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

string TableInfo::GetApiAccessId() const
{
    return m_apiAccessId;
}

void TableInfo::SetApiAccessId(const string& _apiAccessId)
{
    m_apiAccessId = _apiAccessId;
    m_apiAccessIdHasBeenSet = true;
}

bool TableInfo::ApiAccessIdHasBeenSet() const
{
    return m_apiAccessIdHasBeenSet;
}

