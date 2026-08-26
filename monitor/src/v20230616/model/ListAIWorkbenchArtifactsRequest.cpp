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

#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchArtifactsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

ListAIWorkbenchArtifactsRequest::ListAIWorkbenchArtifactsRequest() :
    m_perPageHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_sessionIdsHasBeenSet(false),
    m_mimeTypesHasBeenSet(false),
    m_orderDirectionHasBeenSet(false)
{
}

string ListAIWorkbenchArtifactsRequest::ToJsonString() const
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

    if (m_sessionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sessionIds.begin(); itr != m_sessionIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mimeTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MimeTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mimeTypes.begin(); itr != m_mimeTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDirection.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ListAIWorkbenchArtifactsRequest::GetPerPage() const
{
    return m_perPage;
}

void ListAIWorkbenchArtifactsRequest::SetPerPage(const int64_t& _perPage)
{
    m_perPage = _perPage;
    m_perPageHasBeenSet = true;
}

bool ListAIWorkbenchArtifactsRequest::PerPageHasBeenSet() const
{
    return m_perPageHasBeenSet;
}

int64_t ListAIWorkbenchArtifactsRequest::GetPageNo() const
{
    return m_pageNo;
}

void ListAIWorkbenchArtifactsRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool ListAIWorkbenchArtifactsRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

vector<string> ListAIWorkbenchArtifactsRequest::GetSessionIds() const
{
    return m_sessionIds;
}

void ListAIWorkbenchArtifactsRequest::SetSessionIds(const vector<string>& _sessionIds)
{
    m_sessionIds = _sessionIds;
    m_sessionIdsHasBeenSet = true;
}

bool ListAIWorkbenchArtifactsRequest::SessionIdsHasBeenSet() const
{
    return m_sessionIdsHasBeenSet;
}

vector<string> ListAIWorkbenchArtifactsRequest::GetMimeTypes() const
{
    return m_mimeTypes;
}

void ListAIWorkbenchArtifactsRequest::SetMimeTypes(const vector<string>& _mimeTypes)
{
    m_mimeTypes = _mimeTypes;
    m_mimeTypesHasBeenSet = true;
}

bool ListAIWorkbenchArtifactsRequest::MimeTypesHasBeenSet() const
{
    return m_mimeTypesHasBeenSet;
}

string ListAIWorkbenchArtifactsRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void ListAIWorkbenchArtifactsRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool ListAIWorkbenchArtifactsRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}


