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

#include <tencentcloud/cynosdb/v20190107/model/ExplainRow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ExplainRow::ExplainRow() :
    m_idHasBeenSet(false),
    m_selectTypeHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_possibleKeysHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_keyLenHasBeenSet(false),
    m_refHasBeenSet(false),
    m_rowsHasBeenSet(false),
    m_filteredHasBeenSet(false),
    m_extraHasBeenSet(false)
{
}

CoreInternalOutcome ExplainRow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExplainRow.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SelectType") && !value["SelectType"].IsNull())
    {
        if (!value["SelectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExplainRow.SelectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selectType = string(value["SelectType"].GetString());
        m_selectTypeHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExplainRow.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExplainRow.Partitions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitions = string(value["Partitions"].GetString());
        m_partitionsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExplainRow.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PossibleKeys") && !value["PossibleKeys"].IsNull())
    {
        if (!value["PossibleKeys"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExplainRow.PossibleKeys` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_possibleKeys = string(value["PossibleKeys"].GetString());
        m_possibleKeysHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExplainRow.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("KeyLen") && !value["KeyLen"].IsNull())
    {
        if (!value["KeyLen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExplainRow.KeyLen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyLen = string(value["KeyLen"].GetString());
        m_keyLenHasBeenSet = true;
    }

    if (value.HasMember("Ref") && !value["Ref"].IsNull())
    {
        if (!value["Ref"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExplainRow.Ref` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ref = string(value["Ref"].GetString());
        m_refHasBeenSet = true;
    }

    if (value.HasMember("Rows") && !value["Rows"].IsNull())
    {
        if (!value["Rows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExplainRow.Rows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rows = value["Rows"].GetInt64();
        m_rowsHasBeenSet = true;
    }

    if (value.HasMember("Filtered") && !value["Filtered"].IsNull())
    {
        if (!value["Filtered"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExplainRow.Filtered` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_filtered = value["Filtered"].GetDouble();
        m_filteredHasBeenSet = true;
    }

    if (value.HasMember("Extra") && !value["Extra"].IsNull())
    {
        if (!value["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExplainRow.Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(value["Extra"].GetString());
        m_extraHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExplainRow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_selectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selectType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitions.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_possibleKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PossibleKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_possibleKeys.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_keyLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyLen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyLen.c_str(), allocator).Move(), allocator);
    }

    if (m_refHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ref";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ref.c_str(), allocator).Move(), allocator);
    }

    if (m_rowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rows, allocator);
    }

    if (m_filteredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filtered";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filtered, allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

}


int64_t ExplainRow::GetId() const
{
    return m_id;
}

void ExplainRow::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ExplainRow::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ExplainRow::GetSelectType() const
{
    return m_selectType;
}

void ExplainRow::SetSelectType(const string& _selectType)
{
    m_selectType = _selectType;
    m_selectTypeHasBeenSet = true;
}

bool ExplainRow::SelectTypeHasBeenSet() const
{
    return m_selectTypeHasBeenSet;
}

string ExplainRow::GetTable() const
{
    return m_table;
}

void ExplainRow::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool ExplainRow::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string ExplainRow::GetPartitions() const
{
    return m_partitions;
}

void ExplainRow::SetPartitions(const string& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool ExplainRow::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string ExplainRow::GetType() const
{
    return m_type;
}

void ExplainRow::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ExplainRow::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ExplainRow::GetPossibleKeys() const
{
    return m_possibleKeys;
}

void ExplainRow::SetPossibleKeys(const string& _possibleKeys)
{
    m_possibleKeys = _possibleKeys;
    m_possibleKeysHasBeenSet = true;
}

bool ExplainRow::PossibleKeysHasBeenSet() const
{
    return m_possibleKeysHasBeenSet;
}

string ExplainRow::GetKey() const
{
    return m_key;
}

void ExplainRow::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool ExplainRow::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string ExplainRow::GetKeyLen() const
{
    return m_keyLen;
}

void ExplainRow::SetKeyLen(const string& _keyLen)
{
    m_keyLen = _keyLen;
    m_keyLenHasBeenSet = true;
}

bool ExplainRow::KeyLenHasBeenSet() const
{
    return m_keyLenHasBeenSet;
}

string ExplainRow::GetRef() const
{
    return m_ref;
}

void ExplainRow::SetRef(const string& _ref)
{
    m_ref = _ref;
    m_refHasBeenSet = true;
}

bool ExplainRow::RefHasBeenSet() const
{
    return m_refHasBeenSet;
}

int64_t ExplainRow::GetRows() const
{
    return m_rows;
}

void ExplainRow::SetRows(const int64_t& _rows)
{
    m_rows = _rows;
    m_rowsHasBeenSet = true;
}

bool ExplainRow::RowsHasBeenSet() const
{
    return m_rowsHasBeenSet;
}

double ExplainRow::GetFiltered() const
{
    return m_filtered;
}

void ExplainRow::SetFiltered(const double& _filtered)
{
    m_filtered = _filtered;
    m_filteredHasBeenSet = true;
}

bool ExplainRow::FilteredHasBeenSet() const
{
    return m_filteredHasBeenSet;
}

string ExplainRow::GetExtra() const
{
    return m_extra;
}

void ExplainRow::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool ExplainRow::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

