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

#include <tencentcloud/databuddy/v20260715/model/GetTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

GetTableRequest::GetTableRequest() :
    m_catalogNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_fetchOptionHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_catalogSourceHasBeenSet(false)
{
}

string GetTableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
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

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fetchOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetchOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fetchOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_connectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogSource.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetTableRequest::GetCatalogName() const
{
    return m_catalogName;
}

void GetTableRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool GetTableRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string GetTableRequest::GetSchemaName() const
{
    return m_schemaName;
}

void GetTableRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool GetTableRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string GetTableRequest::GetTableName() const
{
    return m_tableName;
}

void GetTableRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool GetTableRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string GetTableRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void GetTableRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool GetTableRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

FetchOption GetTableRequest::GetFetchOption() const
{
    return m_fetchOption;
}

void GetTableRequest::SetFetchOption(const FetchOption& _fetchOption)
{
    m_fetchOption = _fetchOption;
    m_fetchOptionHasBeenSet = true;
}

bool GetTableRequest::FetchOptionHasBeenSet() const
{
    return m_fetchOptionHasBeenSet;
}

string GetTableRequest::GetConnectionId() const
{
    return m_connectionId;
}

void GetTableRequest::SetConnectionId(const string& _connectionId)
{
    m_connectionId = _connectionId;
    m_connectionIdHasBeenSet = true;
}

bool GetTableRequest::ConnectionIdHasBeenSet() const
{
    return m_connectionIdHasBeenSet;
}

string GetTableRequest::GetCatalogSource() const
{
    return m_catalogSource;
}

void GetTableRequest::SetCatalogSource(const string& _catalogSource)
{
    m_catalogSource = _catalogSource;
    m_catalogSourceHasBeenSet = true;
}

bool GetTableRequest::CatalogSourceHasBeenSet() const
{
    return m_catalogSourceHasBeenSet;
}


