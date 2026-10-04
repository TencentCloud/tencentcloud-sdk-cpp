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

#include <tencentcloud/databuddy/v20260715/model/DeleteCatalogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

DeleteCatalogRequest::DeleteCatalogRequest() :
    m_catalogNameHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_connectionIdHasBeenSet(false)
{
}

string DeleteCatalogRequest::ToJsonString() const
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

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCatalogRequest::GetCatalogName() const
{
    return m_catalogName;
}

void DeleteCatalogRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool DeleteCatalogRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string DeleteCatalogRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DeleteCatalogRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DeleteCatalogRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string DeleteCatalogRequest::GetConnectionId() const
{
    return m_connectionId;
}

void DeleteCatalogRequest::SetConnectionId(const string& _connectionId)
{
    m_connectionId = _connectionId;
    m_connectionIdHasBeenSet = true;
}

bool DeleteCatalogRequest::ConnectionIdHasBeenSet() const
{
    return m_connectionIdHasBeenSet;
}


