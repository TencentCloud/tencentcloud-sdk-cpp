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

#include <tencentcloud/tdmysql/v20211122/model/Explain.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

Explain::Explain() :
    m_iDHasBeenSet(false),
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

CoreInternalOutcome Explain::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Explain.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("SelectType") && !value["SelectType"].IsNull())
    {
        if (!value["SelectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Explain.SelectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selectType = string(value["SelectType"].GetString());
        m_selectTypeHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Explain.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Explain.Partitions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitions = string(value["Partitions"].GetString());
        m_partitionsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Explain.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PossibleKeys") && !value["PossibleKeys"].IsNull())
    {
        if (!value["PossibleKeys"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Explain.PossibleKeys` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_possibleKeys = string(value["PossibleKeys"].GetString());
        m_possibleKeysHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Explain.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("KeyLen") && !value["KeyLen"].IsNull())
    {
        if (!value["KeyLen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Explain.KeyLen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyLen = string(value["KeyLen"].GetString());
        m_keyLenHasBeenSet = true;
    }

    if (value.HasMember("Ref") && !value["Ref"].IsNull())
    {
        if (!value["Ref"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Explain.Ref` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ref = string(value["Ref"].GetString());
        m_refHasBeenSet = true;
    }

    if (value.HasMember("Rows") && !value["Rows"].IsNull())
    {
        if (!value["Rows"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Explain.Rows` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rows = string(value["Rows"].GetString());
        m_rowsHasBeenSet = true;
    }

    if (value.HasMember("Filtered") && !value["Filtered"].IsNull())
    {
        if (!value["Filtered"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Explain.Filtered` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filtered = string(value["Filtered"].GetString());
        m_filteredHasBeenSet = true;
    }

    if (value.HasMember("Extra") && !value["Extra"].IsNull())
    {
        if (!value["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Explain.Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(value["Extra"].GetString());
        m_extraHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Explain::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_rows.c_str(), allocator).Move(), allocator);
    }

    if (m_filteredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filtered";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filtered.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

}


string Explain::GetID() const
{
    return m_iD;
}

void Explain::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool Explain::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string Explain::GetSelectType() const
{
    return m_selectType;
}

void Explain::SetSelectType(const string& _selectType)
{
    m_selectType = _selectType;
    m_selectTypeHasBeenSet = true;
}

bool Explain::SelectTypeHasBeenSet() const
{
    return m_selectTypeHasBeenSet;
}

string Explain::GetTable() const
{
    return m_table;
}

void Explain::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool Explain::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string Explain::GetPartitions() const
{
    return m_partitions;
}

void Explain::SetPartitions(const string& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool Explain::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string Explain::GetType() const
{
    return m_type;
}

void Explain::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Explain::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Explain::GetPossibleKeys() const
{
    return m_possibleKeys;
}

void Explain::SetPossibleKeys(const string& _possibleKeys)
{
    m_possibleKeys = _possibleKeys;
    m_possibleKeysHasBeenSet = true;
}

bool Explain::PossibleKeysHasBeenSet() const
{
    return m_possibleKeysHasBeenSet;
}

string Explain::GetKey() const
{
    return m_key;
}

void Explain::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool Explain::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string Explain::GetKeyLen() const
{
    return m_keyLen;
}

void Explain::SetKeyLen(const string& _keyLen)
{
    m_keyLen = _keyLen;
    m_keyLenHasBeenSet = true;
}

bool Explain::KeyLenHasBeenSet() const
{
    return m_keyLenHasBeenSet;
}

string Explain::GetRef() const
{
    return m_ref;
}

void Explain::SetRef(const string& _ref)
{
    m_ref = _ref;
    m_refHasBeenSet = true;
}

bool Explain::RefHasBeenSet() const
{
    return m_refHasBeenSet;
}

string Explain::GetRows() const
{
    return m_rows;
}

void Explain::SetRows(const string& _rows)
{
    m_rows = _rows;
    m_rowsHasBeenSet = true;
}

bool Explain::RowsHasBeenSet() const
{
    return m_rowsHasBeenSet;
}

string Explain::GetFiltered() const
{
    return m_filtered;
}

void Explain::SetFiltered(const string& _filtered)
{
    m_filtered = _filtered;
    m_filteredHasBeenSet = true;
}

bool Explain::FilteredHasBeenSet() const
{
    return m_filteredHasBeenSet;
}

string Explain::GetExtra() const
{
    return m_extra;
}

void Explain::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool Explain::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

