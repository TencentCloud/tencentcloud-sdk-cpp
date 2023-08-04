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

#include <tencentcloud/iss/v20230517/model/ListAITasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ListAITasksRequest::ListAITasksRequest() :
    m_isContainChannelListHasBeenSet(false),
    m_isContainTemplateHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string ListAITasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_isContainChannelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsContainChannelList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isContainChannelList, allocator);
    }

    if (m_isContainTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsContainTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isContainTemplate, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool ListAITasksRequest::GetIsContainChannelList() const
{
    return m_isContainChannelList;
}

void ListAITasksRequest::SetIsContainChannelList(const bool& _isContainChannelList)
{
    m_isContainChannelList = _isContainChannelList;
    m_isContainChannelListHasBeenSet = true;
}

bool ListAITasksRequest::IsContainChannelListHasBeenSet() const
{
    return m_isContainChannelListHasBeenSet;
}

bool ListAITasksRequest::GetIsContainTemplate() const
{
    return m_isContainTemplate;
}

void ListAITasksRequest::SetIsContainTemplate(const bool& _isContainTemplate)
{
    m_isContainTemplate = _isContainTemplate;
    m_isContainTemplateHasBeenSet = true;
}

bool ListAITasksRequest::IsContainTemplateHasBeenSet() const
{
    return m_isContainTemplateHasBeenSet;
}

uint64_t ListAITasksRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListAITasksRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListAITasksRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t ListAITasksRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListAITasksRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListAITasksRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


