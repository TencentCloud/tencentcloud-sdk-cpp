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

#include <tencentcloud/mna/v20210119/model/GetFlowPackagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

GetFlowPackagesRequest::GetFlowPackagesRequest() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string GetFlowPackagesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t GetFlowPackagesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void GetFlowPackagesRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool GetFlowPackagesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t GetFlowPackagesRequest::GetPageSize() const
{
    return m_pageSize;
}

void GetFlowPackagesRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool GetFlowPackagesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string GetFlowPackagesRequest::GetResourceId() const
{
    return m_resourceId;
}

void GetFlowPackagesRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool GetFlowPackagesRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string GetFlowPackagesRequest::GetDeviceId() const
{
    return m_deviceId;
}

void GetFlowPackagesRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool GetFlowPackagesRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

int64_t GetFlowPackagesRequest::GetStatus() const
{
    return m_status;
}

void GetFlowPackagesRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GetFlowPackagesRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


