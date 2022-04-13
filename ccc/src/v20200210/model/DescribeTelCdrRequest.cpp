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

#include <tencentcloud/ccc/v20200210/model/DescribeTelCdrRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeTelCdrRequest::DescribeTelCdrRequest() :
    m_startTimeStampHasBeenSet(false),
    m_endTimeStampHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_phonesHasBeenSet(false),
    m_sessionIdsHasBeenSet(false)
{
}

string DescribeTelCdrRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimeStamp, allocator);
    }

    if (m_endTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimeStamp, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceId, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
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

    if (m_phonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_phones.begin(); itr != m_phones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeTelCdrRequest::GetStartTimeStamp() const
{
    return m_startTimeStamp;
}

void DescribeTelCdrRequest::SetStartTimeStamp(const int64_t& _startTimeStamp)
{
    m_startTimeStamp = _startTimeStamp;
    m_startTimeStampHasBeenSet = true;
}

bool DescribeTelCdrRequest::StartTimeStampHasBeenSet() const
{
    return m_startTimeStampHasBeenSet;
}

int64_t DescribeTelCdrRequest::GetEndTimeStamp() const
{
    return m_endTimeStamp;
}

void DescribeTelCdrRequest::SetEndTimeStamp(const int64_t& _endTimeStamp)
{
    m_endTimeStamp = _endTimeStamp;
    m_endTimeStampHasBeenSet = true;
}

bool DescribeTelCdrRequest::EndTimeStampHasBeenSet() const
{
    return m_endTimeStampHasBeenSet;
}

int64_t DescribeTelCdrRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeTelCdrRequest::SetInstanceId(const int64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeTelCdrRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeTelCdrRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTelCdrRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTelCdrRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeTelCdrRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTelCdrRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTelCdrRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeTelCdrRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeTelCdrRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeTelCdrRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

int64_t DescribeTelCdrRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeTelCdrRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeTelCdrRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeTelCdrRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeTelCdrRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeTelCdrRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

vector<string> DescribeTelCdrRequest::GetPhones() const
{
    return m_phones;
}

void DescribeTelCdrRequest::SetPhones(const vector<string>& _phones)
{
    m_phones = _phones;
    m_phonesHasBeenSet = true;
}

bool DescribeTelCdrRequest::PhonesHasBeenSet() const
{
    return m_phonesHasBeenSet;
}

vector<string> DescribeTelCdrRequest::GetSessionIds() const
{
    return m_sessionIds;
}

void DescribeTelCdrRequest::SetSessionIds(const vector<string>& _sessionIds)
{
    m_sessionIds = _sessionIds;
    m_sessionIdsHasBeenSet = true;
}

bool DescribeTelCdrRequest::SessionIdsHasBeenSet() const
{
    return m_sessionIdsHasBeenSet;
}


