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

#include <tencentcloud/dlc/v20210125/model/DropDMSPartitionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DropDMSPartitionsRequest::DropDMSPartitionsRequest() :
    m_databaseNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_deleteDataHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false)
{
}

string DropDMSPartitionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deleteDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteData, allocator);
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DropDMSPartitionsRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void DropDMSPartitionsRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DropDMSPartitionsRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DropDMSPartitionsRequest::GetSchemaName() const
{
    return m_schemaName;
}

void DropDMSPartitionsRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DropDMSPartitionsRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string DropDMSPartitionsRequest::GetTableName() const
{
    return m_tableName;
}

void DropDMSPartitionsRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DropDMSPartitionsRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DropDMSPartitionsRequest::GetName() const
{
    return m_name;
}

void DropDMSPartitionsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DropDMSPartitionsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> DropDMSPartitionsRequest::GetValues() const
{
    return m_values;
}

void DropDMSPartitionsRequest::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool DropDMSPartitionsRequest::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

bool DropDMSPartitionsRequest::GetDeleteData() const
{
    return m_deleteData;
}

void DropDMSPartitionsRequest::SetDeleteData(const bool& _deleteData)
{
    m_deleteData = _deleteData;
    m_deleteDataHasBeenSet = true;
}

bool DropDMSPartitionsRequest::DeleteDataHasBeenSet() const
{
    return m_deleteDataHasBeenSet;
}

string DropDMSPartitionsRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void DropDMSPartitionsRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool DropDMSPartitionsRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}


