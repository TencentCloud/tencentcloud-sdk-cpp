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

#include <tencentcloud/mna/v20210119/model/GetDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

GetDevicesRequest::GetDevicesRequest() :
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
}

string GetDevicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deviceType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t GetDevicesRequest::GetPageSize() const
{
    return m_pageSize;
}

void GetDevicesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool GetDevicesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t GetDevicesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void GetDevicesRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool GetDevicesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string GetDevicesRequest::GetKeyword() const
{
    return m_keyword;
}

void GetDevicesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool GetDevicesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

int64_t GetDevicesRequest::GetDeviceType() const
{
    return m_deviceType;
}

void GetDevicesRequest::SetDeviceType(const int64_t& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool GetDevicesRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}


