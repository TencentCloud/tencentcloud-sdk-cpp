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

#include <tencentcloud/dataagent/v20250513/model/GetKnowledgeBaseFileListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

GetKnowledgeBaseFileListRequest::GetKnowledgeBaseFileListRequest() :
    m_instanceIdHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false)
{
}

string GetKnowledgeBaseFileListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_knowledgeBaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBaseId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_knowledgeBaseId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetKnowledgeBaseFileListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void GetKnowledgeBaseFileListRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool GetKnowledgeBaseFileListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t GetKnowledgeBaseFileListRequest::GetPage() const
{
    return m_page;
}

void GetKnowledgeBaseFileListRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool GetKnowledgeBaseFileListRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t GetKnowledgeBaseFileListRequest::GetPageSize() const
{
    return m_pageSize;
}

void GetKnowledgeBaseFileListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool GetKnowledgeBaseFileListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string GetKnowledgeBaseFileListRequest::GetKnowledgeBaseId() const
{
    return m_knowledgeBaseId;
}

void GetKnowledgeBaseFileListRequest::SetKnowledgeBaseId(const string& _knowledgeBaseId)
{
    m_knowledgeBaseId = _knowledgeBaseId;
    m_knowledgeBaseIdHasBeenSet = true;
}

bool GetKnowledgeBaseFileListRequest::KnowledgeBaseIdHasBeenSet() const
{
    return m_knowledgeBaseIdHasBeenSet;
}


