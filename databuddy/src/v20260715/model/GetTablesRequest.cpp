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

#include <tencentcloud/databuddy/v20260715/model/GetTablesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

GetTablesRequest::GetTablesRequest() :
    m_workspaceIdHasBeenSet(false),
    m_fullNamesHasBeenSet(false),
    m_fetchOptionHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_catalogSourceHasBeenSet(false)
{
}

string GetTablesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fullNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fullNames.begin(); itr != m_fullNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


string GetTablesRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void GetTablesRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool GetTablesRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

vector<string> GetTablesRequest::GetFullNames() const
{
    return m_fullNames;
}

void GetTablesRequest::SetFullNames(const vector<string>& _fullNames)
{
    m_fullNames = _fullNames;
    m_fullNamesHasBeenSet = true;
}

bool GetTablesRequest::FullNamesHasBeenSet() const
{
    return m_fullNamesHasBeenSet;
}

FetchOption GetTablesRequest::GetFetchOption() const
{
    return m_fetchOption;
}

void GetTablesRequest::SetFetchOption(const FetchOption& _fetchOption)
{
    m_fetchOption = _fetchOption;
    m_fetchOptionHasBeenSet = true;
}

bool GetTablesRequest::FetchOptionHasBeenSet() const
{
    return m_fetchOptionHasBeenSet;
}

string GetTablesRequest::GetConnectionId() const
{
    return m_connectionId;
}

void GetTablesRequest::SetConnectionId(const string& _connectionId)
{
    m_connectionId = _connectionId;
    m_connectionIdHasBeenSet = true;
}

bool GetTablesRequest::ConnectionIdHasBeenSet() const
{
    return m_connectionIdHasBeenSet;
}

string GetTablesRequest::GetCatalogSource() const
{
    return m_catalogSource;
}

void GetTablesRequest::SetCatalogSource(const string& _catalogSource)
{
    m_catalogSource = _catalogSource;
    m_catalogSourceHasBeenSet = true;
}

bool GetTablesRequest::CatalogSourceHasBeenSet() const
{
    return m_catalogSourceHasBeenSet;
}


