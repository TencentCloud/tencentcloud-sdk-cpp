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

#include <tencentcloud/csip/v20221121/model/TableField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TableField::TableField() :
    m_dBHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_sensitiveHasBeenSet(false)
{
}

CoreInternalOutcome TableField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DB") && !value["DB"].IsNull())
    {
        if (!value["DB"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.DB` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dB = string(value["DB"].GetString());
        m_dBHasBeenSet = true;
    }

    if (value.HasMember("Schema") && !value["Schema"].IsNull())
    {
        if (!value["Schema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.Schema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schema = string(value["Schema"].GetString());
        m_schemaHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Field") && !value["Field"].IsNull())
    {
        if (!value["Field"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.Field` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_field = string(value["Field"].GetString());
        m_fieldHasBeenSet = true;
    }

    if (value.HasMember("Sensitive") && !value["Sensitive"].IsNull())
    {
        if (!value["Sensitive"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.Sensitive` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sensitive.Deserialize(value["Sensitive"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sensitiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dB.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schema.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_field.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sensitive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sensitive.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TableField::GetDB() const
{
    return m_dB;
}

void TableField::SetDB(const string& _dB)
{
    m_dB = _dB;
    m_dBHasBeenSet = true;
}

bool TableField::DBHasBeenSet() const
{
    return m_dBHasBeenSet;
}

string TableField::GetSchema() const
{
    return m_schema;
}

void TableField::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool TableField::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

string TableField::GetTable() const
{
    return m_table;
}

void TableField::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool TableField::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string TableField::GetField() const
{
    return m_field;
}

void TableField::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool TableField::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

SensitiveDetail TableField::GetSensitive() const
{
    return m_sensitive;
}

void TableField::SetSensitive(const SensitiveDetail& _sensitive)
{
    m_sensitive = _sensitive;
    m_sensitiveHasBeenSet = true;
}

bool TableField::SensitiveHasBeenSet() const
{
    return m_sensitiveHasBeenSet;
}

