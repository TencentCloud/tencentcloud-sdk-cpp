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

#include <tencentcloud/wedata/v20210820/model/DescribeTableSchemaInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTableSchemaInfoRequest::DescribeTableSchemaInfoRequest() :
    m_nameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_msTypeHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_connectionTypeHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_envHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_devDatasourceIdHasBeenSet(false)
{
}

string DescribeTableSchemaInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
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

    if (m_connectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionType.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_devDatasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevDatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_devDatasourceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTableSchemaInfoRequest::GetName() const
{
    return m_name;
}

void DescribeTableSchemaInfoRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeTableSchemaInfoRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeTableSchemaInfoRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void DescribeTableSchemaInfoRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DescribeTableSchemaInfoRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DescribeTableSchemaInfoRequest::GetMsType() const
{
    return m_msType;
}

void DescribeTableSchemaInfoRequest::SetMsType(const string& _msType)
{
    m_msType = _msType;
    m_msTypeHasBeenSet = true;
}

bool DescribeTableSchemaInfoRequest::MsTypeHasBeenSet() const
{
    return m_msTypeHasBeenSet;
}

string DescribeTableSchemaInfoRequest::GetDatasourceId() const
{
    return m_datasourceId;
}

void DescribeTableSchemaInfoRequest::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool DescribeTableSchemaInfoRequest::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string DescribeTableSchemaInfoRequest::GetConnectionType() const
{
    return m_connectionType;
}

void DescribeTableSchemaInfoRequest::SetConnectionType(const string& _connectionType)
{
    m_connectionType = _connectionType;
    m_connectionTypeHasBeenSet = true;
}

bool DescribeTableSchemaInfoRequest::ConnectionTypeHasBeenSet() const
{
    return m_connectionTypeHasBeenSet;
}

string DescribeTableSchemaInfoRequest::GetSchemaName() const
{
    return m_schemaName;
}

void DescribeTableSchemaInfoRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DescribeTableSchemaInfoRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string DescribeTableSchemaInfoRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeTableSchemaInfoRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeTableSchemaInfoRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeTableSchemaInfoRequest::GetEnv() const
{
    return m_env;
}

void DescribeTableSchemaInfoRequest::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DescribeTableSchemaInfoRequest::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string DescribeTableSchemaInfoRequest::GetModel() const
{
    return m_model;
}

void DescribeTableSchemaInfoRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool DescribeTableSchemaInfoRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string DescribeTableSchemaInfoRequest::GetDevDatasourceId() const
{
    return m_devDatasourceId;
}

void DescribeTableSchemaInfoRequest::SetDevDatasourceId(const string& _devDatasourceId)
{
    m_devDatasourceId = _devDatasourceId;
    m_devDatasourceIdHasBeenSet = true;
}

bool DescribeTableSchemaInfoRequest::DevDatasourceIdHasBeenSet() const
{
    return m_devDatasourceIdHasBeenSet;
}


