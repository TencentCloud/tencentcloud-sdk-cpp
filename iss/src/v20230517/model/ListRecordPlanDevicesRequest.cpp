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

#include <tencentcloud/iss/v20230517/model/ListRecordPlanDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ListRecordPlanDevicesRequest::ListRecordPlanDevicesRequest() :
    m_planIdHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_organizationNameHasBeenSet(false)
{
}

string ListRecordPlanDevicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListRecordPlanDevicesRequest::GetPlanId() const
{
    return m_planId;
}

void ListRecordPlanDevicesRequest::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool ListRecordPlanDevicesRequest::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

int64_t ListRecordPlanDevicesRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListRecordPlanDevicesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListRecordPlanDevicesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t ListRecordPlanDevicesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListRecordPlanDevicesRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListRecordPlanDevicesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string ListRecordPlanDevicesRequest::GetDeviceName() const
{
    return m_deviceName;
}

void ListRecordPlanDevicesRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ListRecordPlanDevicesRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ListRecordPlanDevicesRequest::GetChannelName() const
{
    return m_channelName;
}

void ListRecordPlanDevicesRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool ListRecordPlanDevicesRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string ListRecordPlanDevicesRequest::GetOrganizationName() const
{
    return m_organizationName;
}

void ListRecordPlanDevicesRequest::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool ListRecordPlanDevicesRequest::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}


