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

#include <tencentcloud/iss/v20230517/model/ListRecordBackupPlanDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ListRecordBackupPlanDevicesRequest::ListRecordBackupPlanDevicesRequest() :
    m_planIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false)
{
}

string ListRecordBackupPlanDevicesRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListRecordBackupPlanDevicesRequest::GetPlanId() const
{
    return m_planId;
}

void ListRecordBackupPlanDevicesRequest::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool ListRecordBackupPlanDevicesRequest::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string ListRecordBackupPlanDevicesRequest::GetDeviceName() const
{
    return m_deviceName;
}

void ListRecordBackupPlanDevicesRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ListRecordBackupPlanDevicesRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ListRecordBackupPlanDevicesRequest::GetChannelName() const
{
    return m_channelName;
}

void ListRecordBackupPlanDevicesRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool ListRecordBackupPlanDevicesRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string ListRecordBackupPlanDevicesRequest::GetOrganizationName() const
{
    return m_organizationName;
}

void ListRecordBackupPlanDevicesRequest::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool ListRecordBackupPlanDevicesRequest::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

int64_t ListRecordBackupPlanDevicesRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListRecordBackupPlanDevicesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListRecordBackupPlanDevicesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t ListRecordBackupPlanDevicesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListRecordBackupPlanDevicesRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListRecordBackupPlanDevicesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}


