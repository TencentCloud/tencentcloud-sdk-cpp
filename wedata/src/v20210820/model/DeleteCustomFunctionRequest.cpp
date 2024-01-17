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

#include <tencentcloud/wedata/v20210820/model/DeleteCustomFunctionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DeleteCustomFunctionRequest::DeleteCustomFunctionRequest() :
    m_clusterIdentifierHasBeenSet(false),
    m_functionIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_functionTypeHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_commandFormatHasBeenSet(false)
{
}

string DeleteCustomFunctionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIdentifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_functionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_functionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionType.c_str(), allocator).Move(), allocator);
    }

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

    if (m_commandFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commandFormat.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCustomFunctionRequest::GetClusterIdentifier() const
{
    return m_clusterIdentifier;
}

void DeleteCustomFunctionRequest::SetClusterIdentifier(const string& _clusterIdentifier)
{
    m_clusterIdentifier = _clusterIdentifier;
    m_clusterIdentifierHasBeenSet = true;
}

bool DeleteCustomFunctionRequest::ClusterIdentifierHasBeenSet() const
{
    return m_clusterIdentifierHasBeenSet;
}

string DeleteCustomFunctionRequest::GetFunctionId() const
{
    return m_functionId;
}

void DeleteCustomFunctionRequest::SetFunctionId(const string& _functionId)
{
    m_functionId = _functionId;
    m_functionIdHasBeenSet = true;
}

bool DeleteCustomFunctionRequest::FunctionIdHasBeenSet() const
{
    return m_functionIdHasBeenSet;
}

string DeleteCustomFunctionRequest::GetProjectId() const
{
    return m_projectId;
}

void DeleteCustomFunctionRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DeleteCustomFunctionRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DeleteCustomFunctionRequest::GetFunctionName() const
{
    return m_functionName;
}

void DeleteCustomFunctionRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool DeleteCustomFunctionRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string DeleteCustomFunctionRequest::GetFunctionType() const
{
    return m_functionType;
}

void DeleteCustomFunctionRequest::SetFunctionType(const string& _functionType)
{
    m_functionType = _functionType;
    m_functionTypeHasBeenSet = true;
}

bool DeleteCustomFunctionRequest::FunctionTypeHasBeenSet() const
{
    return m_functionTypeHasBeenSet;
}

string DeleteCustomFunctionRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void DeleteCustomFunctionRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DeleteCustomFunctionRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DeleteCustomFunctionRequest::GetSchemaName() const
{
    return m_schemaName;
}

void DeleteCustomFunctionRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DeleteCustomFunctionRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string DeleteCustomFunctionRequest::GetCommandFormat() const
{
    return m_commandFormat;
}

void DeleteCustomFunctionRequest::SetCommandFormat(const string& _commandFormat)
{
    m_commandFormat = _commandFormat;
    m_commandFormatHasBeenSet = true;
}

bool DeleteCustomFunctionRequest::CommandFormatHasBeenSet() const
{
    return m_commandFormatHasBeenSet;
}


