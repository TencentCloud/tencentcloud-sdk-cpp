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

#include <tencentcloud/tcaplusdb/v20190823/model/ParsedTableInfoNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

ParsedTableInfoNew::ParsedTableInfoNew() :
    m_tableIdlTypeHasBeenSet(false),
    m_tableInstanceIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_keyFieldsHasBeenSet(false),
    m_oldKeyFieldsHasBeenSet(false),
    m_valueFieldsHasBeenSet(false),
    m_oldValueFieldsHasBeenSet(false),
    m_tableGroupIdHasBeenSet(false),
    m_sumKeyFieldSizeHasBeenSet(false),
    m_sumValueFieldSizeHasBeenSet(false),
    m_indexKeySetHasBeenSet(false),
    m_shardingKeySetHasBeenSet(false),
    m_tdrVersionHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_listElementNumHasBeenSet(false),
    m_sortFieldNumHasBeenSet(false),
    m_sortRuleHasBeenSet(false)
{
}

CoreInternalOutcome ParsedTableInfoNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableIdlType") && !value["TableIdlType"].IsNull())
    {
        if (!value["TableIdlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.TableIdlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableIdlType = string(value["TableIdlType"].GetString());
        m_tableIdlTypeHasBeenSet = true;
    }

    if (value.HasMember("TableInstanceId") && !value["TableInstanceId"].IsNull())
    {
        if (!value["TableInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.TableInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableInstanceId = string(value["TableInstanceId"].GetString());
        m_tableInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("KeyFields") && !value["KeyFields"].IsNull())
    {
        if (!value["KeyFields"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.KeyFields` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyFields = string(value["KeyFields"].GetString());
        m_keyFieldsHasBeenSet = true;
    }

    if (value.HasMember("OldKeyFields") && !value["OldKeyFields"].IsNull())
    {
        if (!value["OldKeyFields"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.OldKeyFields` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldKeyFields = string(value["OldKeyFields"].GetString());
        m_oldKeyFieldsHasBeenSet = true;
    }

    if (value.HasMember("ValueFields") && !value["ValueFields"].IsNull())
    {
        if (!value["ValueFields"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.ValueFields` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueFields = string(value["ValueFields"].GetString());
        m_valueFieldsHasBeenSet = true;
    }

    if (value.HasMember("OldValueFields") && !value["OldValueFields"].IsNull())
    {
        if (!value["OldValueFields"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.OldValueFields` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldValueFields = string(value["OldValueFields"].GetString());
        m_oldValueFieldsHasBeenSet = true;
    }

    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.TableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = string(value["TableGroupId"].GetString());
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("SumKeyFieldSize") && !value["SumKeyFieldSize"].IsNull())
    {
        if (!value["SumKeyFieldSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.SumKeyFieldSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sumKeyFieldSize = value["SumKeyFieldSize"].GetInt64();
        m_sumKeyFieldSizeHasBeenSet = true;
    }

    if (value.HasMember("SumValueFieldSize") && !value["SumValueFieldSize"].IsNull())
    {
        if (!value["SumValueFieldSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.SumValueFieldSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sumValueFieldSize = value["SumValueFieldSize"].GetInt64();
        m_sumValueFieldSizeHasBeenSet = true;
    }

    if (value.HasMember("IndexKeySet") && !value["IndexKeySet"].IsNull())
    {
        if (!value["IndexKeySet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.IndexKeySet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexKeySet = string(value["IndexKeySet"].GetString());
        m_indexKeySetHasBeenSet = true;
    }

    if (value.HasMember("ShardingKeySet") && !value["ShardingKeySet"].IsNull())
    {
        if (!value["ShardingKeySet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.ShardingKeySet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardingKeySet = string(value["ShardingKeySet"].GetString());
        m_shardingKeySetHasBeenSet = true;
    }

    if (value.HasMember("TdrVersion") && !value["TdrVersion"].IsNull())
    {
        if (!value["TdrVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.TdrVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tdrVersion = value["TdrVersion"].GetInt64();
        m_tdrVersionHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.Error` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_error.Deserialize(value["Error"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorHasBeenSet = true;
    }

    if (value.HasMember("ListElementNum") && !value["ListElementNum"].IsNull())
    {
        if (!value["ListElementNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.ListElementNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_listElementNum = value["ListElementNum"].GetInt64();
        m_listElementNumHasBeenSet = true;
    }

    if (value.HasMember("SortFieldNum") && !value["SortFieldNum"].IsNull())
    {
        if (!value["SortFieldNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.SortFieldNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortFieldNum = value["SortFieldNum"].GetInt64();
        m_sortFieldNumHasBeenSet = true;
    }

    if (value.HasMember("SortRule") && !value["SortRule"].IsNull())
    {
        if (!value["SortRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParsedTableInfoNew.SortRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortRule = value["SortRule"].GetInt64();
        m_sortRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParsedTableInfoNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableIdlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableIdlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableIdlType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_keyFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyFields.c_str(), allocator).Move(), allocator);
    }

    if (m_oldKeyFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldKeyFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldKeyFields.c_str(), allocator).Move(), allocator);
    }

    if (m_valueFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueFields.c_str(), allocator).Move(), allocator);
    }

    if (m_oldValueFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldValueFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldValueFields.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_sumKeyFieldSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumKeyFieldSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sumKeyFieldSize, allocator);
    }

    if (m_sumValueFieldSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumValueFieldSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sumValueFieldSize, allocator);
    }

    if (m_indexKeySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexKeySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexKeySet.c_str(), allocator).Move(), allocator);
    }

    if (m_shardingKeySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardingKeySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardingKeySet.c_str(), allocator).Move(), allocator);
    }

    if (m_tdrVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TdrVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tdrVersion, allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_error.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_listElementNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListElementNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listElementNum, allocator);
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

}


string ParsedTableInfoNew::GetTableIdlType() const
{
    return m_tableIdlType;
}

void ParsedTableInfoNew::SetTableIdlType(const string& _tableIdlType)
{
    m_tableIdlType = _tableIdlType;
    m_tableIdlTypeHasBeenSet = true;
}

bool ParsedTableInfoNew::TableIdlTypeHasBeenSet() const
{
    return m_tableIdlTypeHasBeenSet;
}

string ParsedTableInfoNew::GetTableInstanceId() const
{
    return m_tableInstanceId;
}

void ParsedTableInfoNew::SetTableInstanceId(const string& _tableInstanceId)
{
    m_tableInstanceId = _tableInstanceId;
    m_tableInstanceIdHasBeenSet = true;
}

bool ParsedTableInfoNew::TableInstanceIdHasBeenSet() const
{
    return m_tableInstanceIdHasBeenSet;
}

string ParsedTableInfoNew::GetTableName() const
{
    return m_tableName;
}

void ParsedTableInfoNew::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool ParsedTableInfoNew::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string ParsedTableInfoNew::GetTableType() const
{
    return m_tableType;
}

void ParsedTableInfoNew::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool ParsedTableInfoNew::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

string ParsedTableInfoNew::GetKeyFields() const
{
    return m_keyFields;
}

void ParsedTableInfoNew::SetKeyFields(const string& _keyFields)
{
    m_keyFields = _keyFields;
    m_keyFieldsHasBeenSet = true;
}

bool ParsedTableInfoNew::KeyFieldsHasBeenSet() const
{
    return m_keyFieldsHasBeenSet;
}

string ParsedTableInfoNew::GetOldKeyFields() const
{
    return m_oldKeyFields;
}

void ParsedTableInfoNew::SetOldKeyFields(const string& _oldKeyFields)
{
    m_oldKeyFields = _oldKeyFields;
    m_oldKeyFieldsHasBeenSet = true;
}

bool ParsedTableInfoNew::OldKeyFieldsHasBeenSet() const
{
    return m_oldKeyFieldsHasBeenSet;
}

string ParsedTableInfoNew::GetValueFields() const
{
    return m_valueFields;
}

void ParsedTableInfoNew::SetValueFields(const string& _valueFields)
{
    m_valueFields = _valueFields;
    m_valueFieldsHasBeenSet = true;
}

bool ParsedTableInfoNew::ValueFieldsHasBeenSet() const
{
    return m_valueFieldsHasBeenSet;
}

string ParsedTableInfoNew::GetOldValueFields() const
{
    return m_oldValueFields;
}

void ParsedTableInfoNew::SetOldValueFields(const string& _oldValueFields)
{
    m_oldValueFields = _oldValueFields;
    m_oldValueFieldsHasBeenSet = true;
}

bool ParsedTableInfoNew::OldValueFieldsHasBeenSet() const
{
    return m_oldValueFieldsHasBeenSet;
}

string ParsedTableInfoNew::GetTableGroupId() const
{
    return m_tableGroupId;
}

void ParsedTableInfoNew::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool ParsedTableInfoNew::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

int64_t ParsedTableInfoNew::GetSumKeyFieldSize() const
{
    return m_sumKeyFieldSize;
}

void ParsedTableInfoNew::SetSumKeyFieldSize(const int64_t& _sumKeyFieldSize)
{
    m_sumKeyFieldSize = _sumKeyFieldSize;
    m_sumKeyFieldSizeHasBeenSet = true;
}

bool ParsedTableInfoNew::SumKeyFieldSizeHasBeenSet() const
{
    return m_sumKeyFieldSizeHasBeenSet;
}

int64_t ParsedTableInfoNew::GetSumValueFieldSize() const
{
    return m_sumValueFieldSize;
}

void ParsedTableInfoNew::SetSumValueFieldSize(const int64_t& _sumValueFieldSize)
{
    m_sumValueFieldSize = _sumValueFieldSize;
    m_sumValueFieldSizeHasBeenSet = true;
}

bool ParsedTableInfoNew::SumValueFieldSizeHasBeenSet() const
{
    return m_sumValueFieldSizeHasBeenSet;
}

string ParsedTableInfoNew::GetIndexKeySet() const
{
    return m_indexKeySet;
}

void ParsedTableInfoNew::SetIndexKeySet(const string& _indexKeySet)
{
    m_indexKeySet = _indexKeySet;
    m_indexKeySetHasBeenSet = true;
}

bool ParsedTableInfoNew::IndexKeySetHasBeenSet() const
{
    return m_indexKeySetHasBeenSet;
}

string ParsedTableInfoNew::GetShardingKeySet() const
{
    return m_shardingKeySet;
}

void ParsedTableInfoNew::SetShardingKeySet(const string& _shardingKeySet)
{
    m_shardingKeySet = _shardingKeySet;
    m_shardingKeySetHasBeenSet = true;
}

bool ParsedTableInfoNew::ShardingKeySetHasBeenSet() const
{
    return m_shardingKeySetHasBeenSet;
}

int64_t ParsedTableInfoNew::GetTdrVersion() const
{
    return m_tdrVersion;
}

void ParsedTableInfoNew::SetTdrVersion(const int64_t& _tdrVersion)
{
    m_tdrVersion = _tdrVersion;
    m_tdrVersionHasBeenSet = true;
}

bool ParsedTableInfoNew::TdrVersionHasBeenSet() const
{
    return m_tdrVersionHasBeenSet;
}

ErrorInfo ParsedTableInfoNew::GetError() const
{
    return m_error;
}

void ParsedTableInfoNew::SetError(const ErrorInfo& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool ParsedTableInfoNew::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

int64_t ParsedTableInfoNew::GetListElementNum() const
{
    return m_listElementNum;
}

void ParsedTableInfoNew::SetListElementNum(const int64_t& _listElementNum)
{
    m_listElementNum = _listElementNum;
    m_listElementNumHasBeenSet = true;
}

bool ParsedTableInfoNew::ListElementNumHasBeenSet() const
{
    return m_listElementNumHasBeenSet;
}

int64_t ParsedTableInfoNew::GetSortFieldNum() const
{
    return m_sortFieldNum;
}

void ParsedTableInfoNew::SetSortFieldNum(const int64_t& _sortFieldNum)
{
    m_sortFieldNum = _sortFieldNum;
    m_sortFieldNumHasBeenSet = true;
}

bool ParsedTableInfoNew::SortFieldNumHasBeenSet() const
{
    return m_sortFieldNumHasBeenSet;
}

int64_t ParsedTableInfoNew::GetSortRule() const
{
    return m_sortRule;
}

void ParsedTableInfoNew::SetSortRule(const int64_t& _sortRule)
{
    m_sortRule = _sortRule;
    m_sortRuleHasBeenSet = true;
}

bool ParsedTableInfoNew::SortRuleHasBeenSet() const
{
    return m_sortRuleHasBeenSet;
}

