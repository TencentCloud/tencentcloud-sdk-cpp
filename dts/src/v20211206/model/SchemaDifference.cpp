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

#include <tencentcloud/dts/v20211206/model/SchemaDifference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

SchemaDifference::SchemaDifference() :
    m_dbHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_srcSchemaHasBeenSet(false),
    m_dstSchemaHasBeenSet(false)
{
}

CoreInternalOutcome SchemaDifference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaDifference.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("Schema") && !value["Schema"].IsNull())
    {
        if (!value["Schema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaDifference.Schema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schema = string(value["Schema"].GetString());
        m_schemaHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaDifference.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("SrcSchema") && !value["SrcSchema"].IsNull())
    {
        if (!value["SrcSchema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaDifference.SrcSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcSchema = string(value["SrcSchema"].GetString());
        m_srcSchemaHasBeenSet = true;
    }

    if (value.HasMember("DstSchema") && !value["DstSchema"].IsNull())
    {
        if (!value["DstSchema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaDifference.DstSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstSchema = string(value["DstSchema"].GetString());
        m_dstSchemaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchemaDifference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
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

    if (m_srcSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcSchema.c_str(), allocator).Move(), allocator);
    }

    if (m_dstSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstSchema.c_str(), allocator).Move(), allocator);
    }

}


string SchemaDifference::GetDb() const
{
    return m_db;
}

void SchemaDifference::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool SchemaDifference::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string SchemaDifference::GetSchema() const
{
    return m_schema;
}

void SchemaDifference::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool SchemaDifference::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

string SchemaDifference::GetTable() const
{
    return m_table;
}

void SchemaDifference::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool SchemaDifference::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string SchemaDifference::GetSrcSchema() const
{
    return m_srcSchema;
}

void SchemaDifference::SetSrcSchema(const string& _srcSchema)
{
    m_srcSchema = _srcSchema;
    m_srcSchemaHasBeenSet = true;
}

bool SchemaDifference::SrcSchemaHasBeenSet() const
{
    return m_srcSchemaHasBeenSet;
}

string SchemaDifference::GetDstSchema() const
{
    return m_dstSchema;
}

void SchemaDifference::SetDstSchema(const string& _dstSchema)
{
    m_dstSchema = _dstSchema;
    m_dstSchemaHasBeenSet = true;
}

bool SchemaDifference::DstSchemaHasBeenSet() const
{
    return m_dstSchemaHasBeenSet;
}

