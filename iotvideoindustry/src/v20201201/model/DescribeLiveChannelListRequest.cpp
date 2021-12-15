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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveChannelListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeLiveChannelListRequest::DescribeLiveChannelListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_liveChannelTypeHasBeenSet(false),
    m_recordPlanIdHasBeenSet(false),
    m_liveChannelNameHasBeenSet(false)
{
}

string DescribeLiveChannelListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_liveChannelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_liveChannelType, allocator);
    }

    if (m_recordPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordPlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_liveChannelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_liveChannelName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeLiveChannelListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeLiveChannelListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeLiveChannelListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeLiveChannelListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeLiveChannelListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeLiveChannelListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeLiveChannelListRequest::GetLiveChannelType() const
{
    return m_liveChannelType;
}

void DescribeLiveChannelListRequest::SetLiveChannelType(const int64_t& _liveChannelType)
{
    m_liveChannelType = _liveChannelType;
    m_liveChannelTypeHasBeenSet = true;
}

bool DescribeLiveChannelListRequest::LiveChannelTypeHasBeenSet() const
{
    return m_liveChannelTypeHasBeenSet;
}

string DescribeLiveChannelListRequest::GetRecordPlanId() const
{
    return m_recordPlanId;
}

void DescribeLiveChannelListRequest::SetRecordPlanId(const string& _recordPlanId)
{
    m_recordPlanId = _recordPlanId;
    m_recordPlanIdHasBeenSet = true;
}

bool DescribeLiveChannelListRequest::RecordPlanIdHasBeenSet() const
{
    return m_recordPlanIdHasBeenSet;
}

string DescribeLiveChannelListRequest::GetLiveChannelName() const
{
    return m_liveChannelName;
}

void DescribeLiveChannelListRequest::SetLiveChannelName(const string& _liveChannelName)
{
    m_liveChannelName = _liveChannelName;
    m_liveChannelNameHasBeenSet = true;
}

bool DescribeLiveChannelListRequest::LiveChannelNameHasBeenSet() const
{
    return m_liveChannelNameHasBeenSet;
}


