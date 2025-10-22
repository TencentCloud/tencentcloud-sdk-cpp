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

#include <tencentcloud/wedata/v20250806/model/ListProcessLineageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ListProcessLineageRequest::ListProcessLineageRequest() :
    m_processIdHasBeenSet(false),
    m_processTypeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_platformHasBeenSet(false)
{
}

string ListProcessLineageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_processIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_processId.c_str(), allocator).Move(), allocator);
    }

    if (m_processTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_processType.c_str(), allocator).Move(), allocator);
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

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListProcessLineageRequest::GetProcessId() const
{
    return m_processId;
}

void ListProcessLineageRequest::SetProcessId(const string& _processId)
{
    m_processId = _processId;
    m_processIdHasBeenSet = true;
}

bool ListProcessLineageRequest::ProcessIdHasBeenSet() const
{
    return m_processIdHasBeenSet;
}

string ListProcessLineageRequest::GetProcessType() const
{
    return m_processType;
}

void ListProcessLineageRequest::SetProcessType(const string& _processType)
{
    m_processType = _processType;
    m_processTypeHasBeenSet = true;
}

bool ListProcessLineageRequest::ProcessTypeHasBeenSet() const
{
    return m_processTypeHasBeenSet;
}

int64_t ListProcessLineageRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListProcessLineageRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListProcessLineageRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListProcessLineageRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListProcessLineageRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListProcessLineageRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListProcessLineageRequest::GetPlatform() const
{
    return m_platform;
}

void ListProcessLineageRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ListProcessLineageRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}


