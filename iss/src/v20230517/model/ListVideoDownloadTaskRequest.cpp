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

#include <tencentcloud/iss/v20230517/model/ListVideoDownloadTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ListVideoDownloadTaskRequest::ListVideoDownloadTaskRequest() :
    m_deviceNameHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sortRuleHasBeenSet(false),
    m_withPreviewUrlHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_downloadTaskIdHasBeenSet(false),
    m_urlExpiresHasBeenSet(false)
{
}

string ListVideoDownloadTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_sortRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortRule.c_str(), allocator).Move(), allocator);
    }

    if (m_withPreviewUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithPreviewUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withPreviewUrl, allocator);
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

    if (m_downloadTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_downloadTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_urlExpiresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlExpires";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_urlExpires, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListVideoDownloadTaskRequest::GetDeviceName() const
{
    return m_deviceName;
}

void ListVideoDownloadTaskRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ListVideoDownloadTaskRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ListVideoDownloadTaskRequest::GetChannelName() const
{
    return m_channelName;
}

void ListVideoDownloadTaskRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool ListVideoDownloadTaskRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

int64_t ListVideoDownloadTaskRequest::GetStatus() const
{
    return m_status;
}

void ListVideoDownloadTaskRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListVideoDownloadTaskRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ListVideoDownloadTaskRequest::GetSortRule() const
{
    return m_sortRule;
}

void ListVideoDownloadTaskRequest::SetSortRule(const string& _sortRule)
{
    m_sortRule = _sortRule;
    m_sortRuleHasBeenSet = true;
}

bool ListVideoDownloadTaskRequest::SortRuleHasBeenSet() const
{
    return m_sortRuleHasBeenSet;
}

int64_t ListVideoDownloadTaskRequest::GetWithPreviewUrl() const
{
    return m_withPreviewUrl;
}

void ListVideoDownloadTaskRequest::SetWithPreviewUrl(const int64_t& _withPreviewUrl)
{
    m_withPreviewUrl = _withPreviewUrl;
    m_withPreviewUrlHasBeenSet = true;
}

bool ListVideoDownloadTaskRequest::WithPreviewUrlHasBeenSet() const
{
    return m_withPreviewUrlHasBeenSet;
}

int64_t ListVideoDownloadTaskRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListVideoDownloadTaskRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListVideoDownloadTaskRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListVideoDownloadTaskRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListVideoDownloadTaskRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListVideoDownloadTaskRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListVideoDownloadTaskRequest::GetDownloadTaskId() const
{
    return m_downloadTaskId;
}

void ListVideoDownloadTaskRequest::SetDownloadTaskId(const string& _downloadTaskId)
{
    m_downloadTaskId = _downloadTaskId;
    m_downloadTaskIdHasBeenSet = true;
}

bool ListVideoDownloadTaskRequest::DownloadTaskIdHasBeenSet() const
{
    return m_downloadTaskIdHasBeenSet;
}

int64_t ListVideoDownloadTaskRequest::GetUrlExpires() const
{
    return m_urlExpires;
}

void ListVideoDownloadTaskRequest::SetUrlExpires(const int64_t& _urlExpires)
{
    m_urlExpires = _urlExpires;
    m_urlExpiresHasBeenSet = true;
}

bool ListVideoDownloadTaskRequest::UrlExpiresHasBeenSet() const
{
    return m_urlExpiresHasBeenSet;
}


