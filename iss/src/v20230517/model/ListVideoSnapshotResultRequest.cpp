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

#include <tencentcloud/iss/v20230517/model/ListVideoSnapshotResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ListVideoSnapshotResultRequest::ListVideoSnapshotResultRequest() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_imageUrlExpiresHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string ListVideoSnapshotResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_beginTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_imageUrlExpiresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrlExpires";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_imageUrlExpires, allocator);
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


int64_t ListVideoSnapshotResultRequest::GetBeginTime() const
{
    return m_beginTime;
}

void ListVideoSnapshotResultRequest::SetBeginTime(const int64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool ListVideoSnapshotResultRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

int64_t ListVideoSnapshotResultRequest::GetEndTime() const
{
    return m_endTime;
}

void ListVideoSnapshotResultRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ListVideoSnapshotResultRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ListVideoSnapshotResultRequest::GetConfigId() const
{
    return m_configId;
}

void ListVideoSnapshotResultRequest::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ListVideoSnapshotResultRequest::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string ListVideoSnapshotResultRequest::GetChannelId() const
{
    return m_channelId;
}

void ListVideoSnapshotResultRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ListVideoSnapshotResultRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

int64_t ListVideoSnapshotResultRequest::GetType() const
{
    return m_type;
}

void ListVideoSnapshotResultRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ListVideoSnapshotResultRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ListVideoSnapshotResultRequest::GetImageUrlExpires() const
{
    return m_imageUrlExpires;
}

void ListVideoSnapshotResultRequest::SetImageUrlExpires(const int64_t& _imageUrlExpires)
{
    m_imageUrlExpires = _imageUrlExpires;
    m_imageUrlExpiresHasBeenSet = true;
}

bool ListVideoSnapshotResultRequest::ImageUrlExpiresHasBeenSet() const
{
    return m_imageUrlExpiresHasBeenSet;
}

int64_t ListVideoSnapshotResultRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListVideoSnapshotResultRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListVideoSnapshotResultRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListVideoSnapshotResultRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListVideoSnapshotResultRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListVideoSnapshotResultRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


