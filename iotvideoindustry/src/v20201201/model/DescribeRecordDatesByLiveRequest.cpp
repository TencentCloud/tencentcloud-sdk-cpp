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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeRecordDatesByLiveRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeRecordDatesByLiveRequest::DescribeRecordDatesByLiveRequest() :
    m_liveChannelIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeRecordDatesByLiveRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_liveChannelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_liveChannelId.c_str(), allocator).Move(), allocator);
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRecordDatesByLiveRequest::GetLiveChannelId() const
{
    return m_liveChannelId;
}

void DescribeRecordDatesByLiveRequest::SetLiveChannelId(const string& _liveChannelId)
{
    m_liveChannelId = _liveChannelId;
    m_liveChannelIdHasBeenSet = true;
}

bool DescribeRecordDatesByLiveRequest::LiveChannelIdHasBeenSet() const
{
    return m_liveChannelIdHasBeenSet;
}

int64_t DescribeRecordDatesByLiveRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRecordDatesByLiveRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRecordDatesByLiveRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeRecordDatesByLiveRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRecordDatesByLiveRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRecordDatesByLiveRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


