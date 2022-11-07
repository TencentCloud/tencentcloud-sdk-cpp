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

#include <tencentcloud/wedata/v20210820/model/GenHiveTableDDLSqlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

GenHiveTableDDLSqlRequest::GenHiveTableDDLSqlRequest() :
    m_projectIdHasBeenSet(false),
    m_sinkDatabaseHasBeenSet(false),
    m_idHasBeenSet(false),
    m_msTypeHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_sourceDatabaseHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_sinkTypeHasBeenSet(false),
    m_schemaNameHasBeenSet(false)
{
}

string GenHiveTableDDLSqlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_sinkDatabaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkDatabase";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sinkDatabase.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_msTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceDatabaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDatabase";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceDatabase.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_sinkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sinkType.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GenHiveTableDDLSqlRequest::GetProjectId() const
{
    return m_projectId;
}

void GenHiveTableDDLSqlRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetSinkDatabase() const
{
    return m_sinkDatabase;
}

void GenHiveTableDDLSqlRequest::SetSinkDatabase(const string& _sinkDatabase)
{
    m_sinkDatabase = _sinkDatabase;
    m_sinkDatabaseHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::SinkDatabaseHasBeenSet() const
{
    return m_sinkDatabaseHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetId() const
{
    return m_id;
}

void GenHiveTableDDLSqlRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetMsType() const
{
    return m_msType;
}

void GenHiveTableDDLSqlRequest::SetMsType(const string& _msType)
{
    m_msType = _msType;
    m_msTypeHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::MsTypeHasBeenSet() const
{
    return m_msTypeHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetDatasourceId() const
{
    return m_datasourceId;
}

void GenHiveTableDDLSqlRequest::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetSourceDatabase() const
{
    return m_sourceDatabase;
}

void GenHiveTableDDLSqlRequest::SetSourceDatabase(const string& _sourceDatabase)
{
    m_sourceDatabase = _sourceDatabase;
    m_sourceDatabaseHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::SourceDatabaseHasBeenSet() const
{
    return m_sourceDatabaseHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetTableName() const
{
    return m_tableName;
}

void GenHiveTableDDLSqlRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetSinkType() const
{
    return m_sinkType;
}

void GenHiveTableDDLSqlRequest::SetSinkType(const string& _sinkType)
{
    m_sinkType = _sinkType;
    m_sinkTypeHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::SinkTypeHasBeenSet() const
{
    return m_sinkTypeHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetSchemaName() const
{
    return m_schemaName;
}

void GenHiveTableDDLSqlRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}


