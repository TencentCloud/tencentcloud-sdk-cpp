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

#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchMCPsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

ListAIWorkbenchMCPsRequest::ListAIWorkbenchMCPsRequest() :
    m_perPageHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_transportHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_mCPIdsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string ListAIWorkbenchMCPsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_perPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_perPage, allocator);
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_transportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transport";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transport.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }

    if (m_mCPIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mCPIds.begin(); itr != m_mCPIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ListAIWorkbenchMCPsRequest::GetPerPage() const
{
    return m_perPage;
}

void ListAIWorkbenchMCPsRequest::SetPerPage(const int64_t& _perPage)
{
    m_perPage = _perPage;
    m_perPageHasBeenSet = true;
}

bool ListAIWorkbenchMCPsRequest::PerPageHasBeenSet() const
{
    return m_perPageHasBeenSet;
}

int64_t ListAIWorkbenchMCPsRequest::GetPageNo() const
{
    return m_pageNo;
}

void ListAIWorkbenchMCPsRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool ListAIWorkbenchMCPsRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

string ListAIWorkbenchMCPsRequest::GetTransport() const
{
    return m_transport;
}

void ListAIWorkbenchMCPsRequest::SetTransport(const string& _transport)
{
    m_transport = _transport;
    m_transportHasBeenSet = true;
}

bool ListAIWorkbenchMCPsRequest::TransportHasBeenSet() const
{
    return m_transportHasBeenSet;
}

string ListAIWorkbenchMCPsRequest::GetKeyword() const
{
    return m_keyword;
}

void ListAIWorkbenchMCPsRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListAIWorkbenchMCPsRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

bool ListAIWorkbenchMCPsRequest::GetEnabled() const
{
    return m_enabled;
}

void ListAIWorkbenchMCPsRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ListAIWorkbenchMCPsRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<string> ListAIWorkbenchMCPsRequest::GetMCPIds() const
{
    return m_mCPIds;
}

void ListAIWorkbenchMCPsRequest::SetMCPIds(const vector<string>& _mCPIds)
{
    m_mCPIds = _mCPIds;
    m_mCPIdsHasBeenSet = true;
}

bool ListAIWorkbenchMCPsRequest::MCPIdsHasBeenSet() const
{
    return m_mCPIdsHasBeenSet;
}

string ListAIWorkbenchMCPsRequest::GetType() const
{
    return m_type;
}

void ListAIWorkbenchMCPsRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ListAIWorkbenchMCPsRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


