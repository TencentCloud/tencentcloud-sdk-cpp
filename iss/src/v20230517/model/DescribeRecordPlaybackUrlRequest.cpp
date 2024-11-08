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

#include <tencentcloud/iss/v20230517/model/DescribeRecordPlaybackUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeRecordPlaybackUrlRequest::DescribeRecordPlaybackUrlRequest() :
    m_channelIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_isInternalHasBeenSet(false),
    m_correctTimestampHasBeenSet(false)
{
}

string DescribeRecordPlaybackUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_isInternalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInternal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isInternal, allocator);
    }

    if (m_correctTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorrectTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_correctTimestamp, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRecordPlaybackUrlRequest::GetChannelId() const
{
    return m_channelId;
}

void DescribeRecordPlaybackUrlRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool DescribeRecordPlaybackUrlRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

uint64_t DescribeRecordPlaybackUrlRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeRecordPlaybackUrlRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeRecordPlaybackUrlRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeRecordPlaybackUrlRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeRecordPlaybackUrlRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeRecordPlaybackUrlRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

bool DescribeRecordPlaybackUrlRequest::GetIsInternal() const
{
    return m_isInternal;
}

void DescribeRecordPlaybackUrlRequest::SetIsInternal(const bool& _isInternal)
{
    m_isInternal = _isInternal;
    m_isInternalHasBeenSet = true;
}

bool DescribeRecordPlaybackUrlRequest::IsInternalHasBeenSet() const
{
    return m_isInternalHasBeenSet;
}

bool DescribeRecordPlaybackUrlRequest::GetCorrectTimestamp() const
{
    return m_correctTimestamp;
}

void DescribeRecordPlaybackUrlRequest::SetCorrectTimestamp(const bool& _correctTimestamp)
{
    m_correctTimestamp = _correctTimestamp;
    m_correctTimestampHasBeenSet = true;
}

bool DescribeRecordPlaybackUrlRequest::CorrectTimestampHasBeenSet() const
{
    return m_correctTimestampHasBeenSet;
}


