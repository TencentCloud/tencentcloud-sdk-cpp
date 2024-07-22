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

#include <tencentcloud/postgres/v20170312/model/DatabaseObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DatabaseObject::DatabaseObject() :
    m_objectTypeHasBeenSet(false),
    m_objectNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
}

CoreInternalOutcome DatabaseObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ObjectType") && !value["ObjectType"].IsNull())
    {
        if (!value["ObjectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseObject.ObjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectType = string(value["ObjectType"].GetString());
        m_objectTypeHasBeenSet = true;
    }

    if (value.HasMember("ObjectName") && !value["ObjectName"].IsNull())
    {
        if (!value["ObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseObject.ObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectName = string(value["ObjectName"].GetString());
        m_objectNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseObject.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseObject.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseObject.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabaseObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_objectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectType.c_str(), allocator).Move(), allocator);
    }

    if (m_objectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

}


string DatabaseObject::GetObjectType() const
{
    return m_objectType;
}

void DatabaseObject::SetObjectType(const string& _objectType)
{
    m_objectType = _objectType;
    m_objectTypeHasBeenSet = true;
}

bool DatabaseObject::ObjectTypeHasBeenSet() const
{
    return m_objectTypeHasBeenSet;
}

string DatabaseObject::GetObjectName() const
{
    return m_objectName;
}

void DatabaseObject::SetObjectName(const string& _objectName)
{
    m_objectName = _objectName;
    m_objectNameHasBeenSet = true;
}

bool DatabaseObject::ObjectNameHasBeenSet() const
{
    return m_objectNameHasBeenSet;
}

string DatabaseObject::GetDatabaseName() const
{
    return m_databaseName;
}

void DatabaseObject::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DatabaseObject::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DatabaseObject::GetSchemaName() const
{
    return m_schemaName;
}

void DatabaseObject::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DatabaseObject::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string DatabaseObject::GetTableName() const
{
    return m_tableName;
}

void DatabaseObject::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DatabaseObject::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

