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

#include <tencentcloud/tcaplusdb/v20190823/model/ParsedTableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

ParsedTableInfo::ParsedTableInfo() :
    m_tableIdlTypeHasBeenSet(false),
    m_tableInstanceIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_keyFieldsHasBeenSet(false),
    m_oldKeyFieldsHasBeenSet(false),
    m_valueFieldsHasBeenSet(false),
    m_oldValueFieldsHasBeenSet(false),
    m_logicZoneIdHasBeenSet(false),
    m_sumKeyFieldSizeHasBeenSet(false),
    m_sumValueFieldSizeHasBeenSet(false),
    m_indexKeySetHasBeenSet(false),
    m_shardingKeySetHasBeenSet(false),
    m_tdrVersionHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome ParsedTableInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TableIdlType") && !value["TableIdlType"].IsNull())
    {
        if (!value["TableIdlType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.TableIdlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableIdlType = string(value["TableIdlType"].GetString());
        m_tableIdlTypeHasBeenSet = true;
    }

    if (value.HasMember("TableInstanceId") && !value["TableInstanceId"].IsNull())
    {
        if (!value["TableInstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.TableInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableInstanceId = string(value["TableInstanceId"].GetString());
        m_tableInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("KeyFields") && !value["KeyFields"].IsNull())
    {
        if (!value["KeyFields"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.KeyFields` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyFields = string(value["KeyFields"].GetString());
        m_keyFieldsHasBeenSet = true;
    }

    if (value.HasMember("OldKeyFields") && !value["OldKeyFields"].IsNull())
    {
        if (!value["OldKeyFields"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.OldKeyFields` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldKeyFields = string(value["OldKeyFields"].GetString());
        m_oldKeyFieldsHasBeenSet = true;
    }

    if (value.HasMember("ValueFields") && !value["ValueFields"].IsNull())
    {
        if (!value["ValueFields"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.ValueFields` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueFields = string(value["ValueFields"].GetString());
        m_valueFieldsHasBeenSet = true;
    }

    if (value.HasMember("OldValueFields") && !value["OldValueFields"].IsNull())
    {
        if (!value["OldValueFields"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.OldValueFields` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldValueFields = string(value["OldValueFields"].GetString());
        m_oldValueFieldsHasBeenSet = true;
    }

    if (value.HasMember("LogicZoneId") && !value["LogicZoneId"].IsNull())
    {
        if (!value["LogicZoneId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.LogicZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicZoneId = string(value["LogicZoneId"].GetString());
        m_logicZoneIdHasBeenSet = true;
    }

    if (value.HasMember("SumKeyFieldSize") && !value["SumKeyFieldSize"].IsNull())
    {
        if (!value["SumKeyFieldSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.SumKeyFieldSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sumKeyFieldSize = value["SumKeyFieldSize"].GetInt64();
        m_sumKeyFieldSizeHasBeenSet = true;
    }

    if (value.HasMember("SumValueFieldSize") && !value["SumValueFieldSize"].IsNull())
    {
        if (!value["SumValueFieldSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.SumValueFieldSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sumValueFieldSize = value["SumValueFieldSize"].GetInt64();
        m_sumValueFieldSizeHasBeenSet = true;
    }

    if (value.HasMember("IndexKeySet") && !value["IndexKeySet"].IsNull())
    {
        if (!value["IndexKeySet"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.IndexKeySet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexKeySet = string(value["IndexKeySet"].GetString());
        m_indexKeySetHasBeenSet = true;
    }

    if (value.HasMember("ShardingKeySet") && !value["ShardingKeySet"].IsNull())
    {
        if (!value["ShardingKeySet"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.ShardingKeySet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardingKeySet = string(value["ShardingKeySet"].GetString());
        m_shardingKeySetHasBeenSet = true;
    }

    if (value.HasMember("TdrVersion") && !value["TdrVersion"].IsNull())
    {
        if (!value["TdrVersion"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.TdrVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tdrVersion = value["TdrVersion"].GetInt64();
        m_tdrVersionHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ParsedTableInfo.Error` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_error.Deserialize(value["Error"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParsedTableInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_tableIdlTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableIdlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableIdlType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_keyFieldsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeyFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_keyFields.c_str(), allocator).Move(), allocator);
    }

    if (m_oldKeyFieldsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OldKeyFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_oldKeyFields.c_str(), allocator).Move(), allocator);
    }

    if (m_valueFieldsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ValueFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_valueFields.c_str(), allocator).Move(), allocator);
    }

    if (m_oldValueFieldsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OldValueFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_oldValueFields.c_str(), allocator).Move(), allocator);
    }

    if (m_logicZoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogicZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_logicZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_sumKeyFieldSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SumKeyFieldSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sumKeyFieldSize, allocator);
    }

    if (m_sumValueFieldSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SumValueFieldSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sumValueFieldSize, allocator);
    }

    if (m_indexKeySetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IndexKeySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_indexKeySet.c_str(), allocator).Move(), allocator);
    }

    if (m_shardingKeySetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShardingKeySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_shardingKeySet.c_str(), allocator).Move(), allocator);
    }

    if (m_tdrVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TdrVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tdrVersion, allocator);
    }

    if (m_errorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_error.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ParsedTableInfo::GetTableIdlType() const
{
    return m_tableIdlType;
}

void ParsedTableInfo::SetTableIdlType(const string& _tableIdlType)
{
    m_tableIdlType = _tableIdlType;
    m_tableIdlTypeHasBeenSet = true;
}

bool ParsedTableInfo::TableIdlTypeHasBeenSet() const
{
    return m_tableIdlTypeHasBeenSet;
}

string ParsedTableInfo::GetTableInstanceId() const
{
    return m_tableInstanceId;
}

void ParsedTableInfo::SetTableInstanceId(const string& _tableInstanceId)
{
    m_tableInstanceId = _tableInstanceId;
    m_tableInstanceIdHasBeenSet = true;
}

bool ParsedTableInfo::TableInstanceIdHasBeenSet() const
{
    return m_tableInstanceIdHasBeenSet;
}

string ParsedTableInfo::GetTableName() const
{
    return m_tableName;
}

void ParsedTableInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool ParsedTableInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string ParsedTableInfo::GetTableType() const
{
    return m_tableType;
}

void ParsedTableInfo::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool ParsedTableInfo::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

string ParsedTableInfo::GetKeyFields() const
{
    return m_keyFields;
}

void ParsedTableInfo::SetKeyFields(const string& _keyFields)
{
    m_keyFields = _keyFields;
    m_keyFieldsHasBeenSet = true;
}

bool ParsedTableInfo::KeyFieldsHasBeenSet() const
{
    return m_keyFieldsHasBeenSet;
}

string ParsedTableInfo::GetOldKeyFields() const
{
    return m_oldKeyFields;
}

void ParsedTableInfo::SetOldKeyFields(const string& _oldKeyFields)
{
    m_oldKeyFields = _oldKeyFields;
    m_oldKeyFieldsHasBeenSet = true;
}

bool ParsedTableInfo::OldKeyFieldsHasBeenSet() const
{
    return m_oldKeyFieldsHasBeenSet;
}

string ParsedTableInfo::GetValueFields() const
{
    return m_valueFields;
}

void ParsedTableInfo::SetValueFields(const string& _valueFields)
{
    m_valueFields = _valueFields;
    m_valueFieldsHasBeenSet = true;
}

bool ParsedTableInfo::ValueFieldsHasBeenSet() const
{
    return m_valueFieldsHasBeenSet;
}

string ParsedTableInfo::GetOldValueFields() const
{
    return m_oldValueFields;
}

void ParsedTableInfo::SetOldValueFields(const string& _oldValueFields)
{
    m_oldValueFields = _oldValueFields;
    m_oldValueFieldsHasBeenSet = true;
}

bool ParsedTableInfo::OldValueFieldsHasBeenSet() const
{
    return m_oldValueFieldsHasBeenSet;
}

string ParsedTableInfo::GetLogicZoneId() const
{
    return m_logicZoneId;
}

void ParsedTableInfo::SetLogicZoneId(const string& _logicZoneId)
{
    m_logicZoneId = _logicZoneId;
    m_logicZoneIdHasBeenSet = true;
}

bool ParsedTableInfo::LogicZoneIdHasBeenSet() const
{
    return m_logicZoneIdHasBeenSet;
}

int64_t ParsedTableInfo::GetSumKeyFieldSize() const
{
    return m_sumKeyFieldSize;
}

void ParsedTableInfo::SetSumKeyFieldSize(const int64_t& _sumKeyFieldSize)
{
    m_sumKeyFieldSize = _sumKeyFieldSize;
    m_sumKeyFieldSizeHasBeenSet = true;
}

bool ParsedTableInfo::SumKeyFieldSizeHasBeenSet() const
{
    return m_sumKeyFieldSizeHasBeenSet;
}

int64_t ParsedTableInfo::GetSumValueFieldSize() const
{
    return m_sumValueFieldSize;
}

void ParsedTableInfo::SetSumValueFieldSize(const int64_t& _sumValueFieldSize)
{
    m_sumValueFieldSize = _sumValueFieldSize;
    m_sumValueFieldSizeHasBeenSet = true;
}

bool ParsedTableInfo::SumValueFieldSizeHasBeenSet() const
{
    return m_sumValueFieldSizeHasBeenSet;
}

string ParsedTableInfo::GetIndexKeySet() const
{
    return m_indexKeySet;
}

void ParsedTableInfo::SetIndexKeySet(const string& _indexKeySet)
{
    m_indexKeySet = _indexKeySet;
    m_indexKeySetHasBeenSet = true;
}

bool ParsedTableInfo::IndexKeySetHasBeenSet() const
{
    return m_indexKeySetHasBeenSet;
}

string ParsedTableInfo::GetShardingKeySet() const
{
    return m_shardingKeySet;
}

void ParsedTableInfo::SetShardingKeySet(const string& _shardingKeySet)
{
    m_shardingKeySet = _shardingKeySet;
    m_shardingKeySetHasBeenSet = true;
}

bool ParsedTableInfo::ShardingKeySetHasBeenSet() const
{
    return m_shardingKeySetHasBeenSet;
}

int64_t ParsedTableInfo::GetTdrVersion() const
{
    return m_tdrVersion;
}

void ParsedTableInfo::SetTdrVersion(const int64_t& _tdrVersion)
{
    m_tdrVersion = _tdrVersion;
    m_tdrVersionHasBeenSet = true;
}

bool ParsedTableInfo::TdrVersionHasBeenSet() const
{
    return m_tdrVersionHasBeenSet;
}

ErrorInfo ParsedTableInfo::GetError() const
{
    return m_error;
}

void ParsedTableInfo::SetError(const ErrorInfo& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool ParsedTableInfo::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

