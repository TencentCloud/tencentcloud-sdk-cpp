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

#include <tencentcloud/ssm/v20190923/model/ProductPrivilegeUnit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

ProductPrivilegeUnit::ProductPrivilegeUnit() :
    m_privilegeNameHasBeenSet(false),
    m_privilegesHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_columnNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_sequenceNameHasBeenSet(false),
    m_procedureNameHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_matviewNameHasBeenSet(false)
{
}

CoreInternalOutcome ProductPrivilegeUnit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrivilegeName") && !value["PrivilegeName"].IsNull())
    {
        if (!value["PrivilegeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.PrivilegeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privilegeName = string(value["PrivilegeName"].GetString());
        m_privilegeNameHasBeenSet = true;
    }

    if (value.HasMember("Privileges") && !value["Privileges"].IsNull())
    {
        if (!value["Privileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.Privileges` is not array type"));

        const rapidjson::Value &tmpValue = value["Privileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privileges.push_back((*itr).GetString());
        }
        m_privilegesHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("ColumnName") && !value["ColumnName"].IsNull())
    {
        if (!value["ColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.ColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnName = string(value["ColumnName"].GetString());
        m_columnNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("SequenceName") && !value["SequenceName"].IsNull())
    {
        if (!value["SequenceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.SequenceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sequenceName = string(value["SequenceName"].GetString());
        m_sequenceNameHasBeenSet = true;
    }

    if (value.HasMember("ProcedureName") && !value["ProcedureName"].IsNull())
    {
        if (!value["ProcedureName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.ProcedureName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procedureName = string(value["ProcedureName"].GetString());
        m_procedureNameHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("FunctionName") && !value["FunctionName"].IsNull())
    {
        if (!value["FunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.FunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionName = string(value["FunctionName"].GetString());
        m_functionNameHasBeenSet = true;
    }

    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (value.HasMember("MatviewName") && !value["MatviewName"].IsNull())
    {
        if (!value["MatviewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductPrivilegeUnit.MatviewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matviewName = string(value["MatviewName"].GetString());
        m_matviewNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductPrivilegeUnit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_privilegeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privilegeName.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privileges.begin(); itr != m_privileges.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_columnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_sequenceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SequenceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sequenceName.c_str(), allocator).Move(), allocator);
    }

    if (m_procedureNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcedureName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procedureName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_matviewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatviewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matviewName.c_str(), allocator).Move(), allocator);
    }

}


string ProductPrivilegeUnit::GetPrivilegeName() const
{
    return m_privilegeName;
}

void ProductPrivilegeUnit::SetPrivilegeName(const string& _privilegeName)
{
    m_privilegeName = _privilegeName;
    m_privilegeNameHasBeenSet = true;
}

bool ProductPrivilegeUnit::PrivilegeNameHasBeenSet() const
{
    return m_privilegeNameHasBeenSet;
}

vector<string> ProductPrivilegeUnit::GetPrivileges() const
{
    return m_privileges;
}

void ProductPrivilegeUnit::SetPrivileges(const vector<string>& _privileges)
{
    m_privileges = _privileges;
    m_privilegesHasBeenSet = true;
}

bool ProductPrivilegeUnit::PrivilegesHasBeenSet() const
{
    return m_privilegesHasBeenSet;
}

string ProductPrivilegeUnit::GetDatabase() const
{
    return m_database;
}

void ProductPrivilegeUnit::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool ProductPrivilegeUnit::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string ProductPrivilegeUnit::GetTableName() const
{
    return m_tableName;
}

void ProductPrivilegeUnit::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool ProductPrivilegeUnit::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string ProductPrivilegeUnit::GetColumnName() const
{
    return m_columnName;
}

void ProductPrivilegeUnit::SetColumnName(const string& _columnName)
{
    m_columnName = _columnName;
    m_columnNameHasBeenSet = true;
}

bool ProductPrivilegeUnit::ColumnNameHasBeenSet() const
{
    return m_columnNameHasBeenSet;
}

string ProductPrivilegeUnit::GetSchemaName() const
{
    return m_schemaName;
}

void ProductPrivilegeUnit::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool ProductPrivilegeUnit::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string ProductPrivilegeUnit::GetSequenceName() const
{
    return m_sequenceName;
}

void ProductPrivilegeUnit::SetSequenceName(const string& _sequenceName)
{
    m_sequenceName = _sequenceName;
    m_sequenceNameHasBeenSet = true;
}

bool ProductPrivilegeUnit::SequenceNameHasBeenSet() const
{
    return m_sequenceNameHasBeenSet;
}

string ProductPrivilegeUnit::GetProcedureName() const
{
    return m_procedureName;
}

void ProductPrivilegeUnit::SetProcedureName(const string& _procedureName)
{
    m_procedureName = _procedureName;
    m_procedureNameHasBeenSet = true;
}

bool ProductPrivilegeUnit::ProcedureNameHasBeenSet() const
{
    return m_procedureNameHasBeenSet;
}

string ProductPrivilegeUnit::GetTypeName() const
{
    return m_typeName;
}

void ProductPrivilegeUnit::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool ProductPrivilegeUnit::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string ProductPrivilegeUnit::GetFunctionName() const
{
    return m_functionName;
}

void ProductPrivilegeUnit::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool ProductPrivilegeUnit::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string ProductPrivilegeUnit::GetViewName() const
{
    return m_viewName;
}

void ProductPrivilegeUnit::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool ProductPrivilegeUnit::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string ProductPrivilegeUnit::GetMatviewName() const
{
    return m_matviewName;
}

void ProductPrivilegeUnit::SetMatviewName(const string& _matviewName)
{
    m_matviewName = _matviewName;
    m_matviewNameHasBeenSet = true;
}

bool ProductPrivilegeUnit::MatviewNameHasBeenSet() const
{
    return m_matviewNameHasBeenSet;
}

