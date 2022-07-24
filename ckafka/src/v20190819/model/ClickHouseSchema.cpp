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

#include <tencentcloud/ckafka/v20190819/model/ClickHouseSchema.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ClickHouseSchema::ClickHouseSchema() :
    m_columnNameHasBeenSet(false),
    m_jsonKeyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_allowNullHasBeenSet(false)
{
}

CoreInternalOutcome ClickHouseSchema::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ColumnName") && !value["ColumnName"].IsNull())
    {
        if (!value["ColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseSchema.ColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnName = string(value["ColumnName"].GetString());
        m_columnNameHasBeenSet = true;
    }

    if (value.HasMember("JsonKey") && !value["JsonKey"].IsNull())
    {
        if (!value["JsonKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseSchema.JsonKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jsonKey = string(value["JsonKey"].GetString());
        m_jsonKeyHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseSchema.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AllowNull") && !value["AllowNull"].IsNull())
    {
        if (!value["AllowNull"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseSchema.AllowNull` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowNull = value["AllowNull"].GetBool();
        m_allowNullHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClickHouseSchema::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_columnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnName.c_str(), allocator).Move(), allocator);
    }

    if (m_jsonKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsonKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jsonKey.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_allowNullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowNull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowNull, allocator);
    }

}


string ClickHouseSchema::GetColumnName() const
{
    return m_columnName;
}

void ClickHouseSchema::SetColumnName(const string& _columnName)
{
    m_columnName = _columnName;
    m_columnNameHasBeenSet = true;
}

bool ClickHouseSchema::ColumnNameHasBeenSet() const
{
    return m_columnNameHasBeenSet;
}

string ClickHouseSchema::GetJsonKey() const
{
    return m_jsonKey;
}

void ClickHouseSchema::SetJsonKey(const string& _jsonKey)
{
    m_jsonKey = _jsonKey;
    m_jsonKeyHasBeenSet = true;
}

bool ClickHouseSchema::JsonKeyHasBeenSet() const
{
    return m_jsonKeyHasBeenSet;
}

string ClickHouseSchema::GetType() const
{
    return m_type;
}

void ClickHouseSchema::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ClickHouseSchema::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool ClickHouseSchema::GetAllowNull() const
{
    return m_allowNull;
}

void ClickHouseSchema::SetAllowNull(const bool& _allowNull)
{
    m_allowNull = _allowNull;
    m_allowNullHasBeenSet = true;
}

bool ClickHouseSchema::AllowNullHasBeenSet() const
{
    return m_allowNullHasBeenSet;
}

