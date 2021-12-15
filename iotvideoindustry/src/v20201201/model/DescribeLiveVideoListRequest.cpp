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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveVideoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeLiveVideoListRequest::DescribeLiveVideoListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_liveChannelIdHasBeenSet(false),
    m_startRecordTimeHasBeenSet(false),
    m_endRecordTimeHasBeenSet(false),
    m_startExpireTimeHasBeenSet(false),
    m_endExpireTimeHasBeenSet(false),
    m_startFileSizeHasBeenSet(false),
    m_endFileSizeHasBeenSet(false),
    m_isRecordingHasBeenSet(false)
{
}

string DescribeLiveVideoListRequest::ToJsonString() const
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

    if (m_liveChannelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_liveChannelId.c_str(), allocator).Move(), allocator);
    }

    if (m_startRecordTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartRecordTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startRecordTime, allocator);
    }

    if (m_endRecordTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndRecordTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endRecordTime, allocator);
    }

    if (m_startExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startExpireTime, allocator);
    }

    if (m_endExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endExpireTime, allocator);
    }

    if (m_startFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartFileSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startFileSize, allocator);
    }

    if (m_endFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndFileSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endFileSize, allocator);
    }

    if (m_isRecordingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRecording";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRecording, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeLiveVideoListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeLiveVideoListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeLiveVideoListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeLiveVideoListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeLiveVideoListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeLiveVideoListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeLiveVideoListRequest::GetLiveChannelId() const
{
    return m_liveChannelId;
}

void DescribeLiveVideoListRequest::SetLiveChannelId(const string& _liveChannelId)
{
    m_liveChannelId = _liveChannelId;
    m_liveChannelIdHasBeenSet = true;
}

bool DescribeLiveVideoListRequest::LiveChannelIdHasBeenSet() const
{
    return m_liveChannelIdHasBeenSet;
}

int64_t DescribeLiveVideoListRequest::GetStartRecordTime() const
{
    return m_startRecordTime;
}

void DescribeLiveVideoListRequest::SetStartRecordTime(const int64_t& _startRecordTime)
{
    m_startRecordTime = _startRecordTime;
    m_startRecordTimeHasBeenSet = true;
}

bool DescribeLiveVideoListRequest::StartRecordTimeHasBeenSet() const
{
    return m_startRecordTimeHasBeenSet;
}

int64_t DescribeLiveVideoListRequest::GetEndRecordTime() const
{
    return m_endRecordTime;
}

void DescribeLiveVideoListRequest::SetEndRecordTime(const int64_t& _endRecordTime)
{
    m_endRecordTime = _endRecordTime;
    m_endRecordTimeHasBeenSet = true;
}

bool DescribeLiveVideoListRequest::EndRecordTimeHasBeenSet() const
{
    return m_endRecordTimeHasBeenSet;
}

int64_t DescribeLiveVideoListRequest::GetStartExpireTime() const
{
    return m_startExpireTime;
}

void DescribeLiveVideoListRequest::SetStartExpireTime(const int64_t& _startExpireTime)
{
    m_startExpireTime = _startExpireTime;
    m_startExpireTimeHasBeenSet = true;
}

bool DescribeLiveVideoListRequest::StartExpireTimeHasBeenSet() const
{
    return m_startExpireTimeHasBeenSet;
}

int64_t DescribeLiveVideoListRequest::GetEndExpireTime() const
{
    return m_endExpireTime;
}

void DescribeLiveVideoListRequest::SetEndExpireTime(const int64_t& _endExpireTime)
{
    m_endExpireTime = _endExpireTime;
    m_endExpireTimeHasBeenSet = true;
}

bool DescribeLiveVideoListRequest::EndExpireTimeHasBeenSet() const
{
    return m_endExpireTimeHasBeenSet;
}

int64_t DescribeLiveVideoListRequest::GetStartFileSize() const
{
    return m_startFileSize;
}

void DescribeLiveVideoListRequest::SetStartFileSize(const int64_t& _startFileSize)
{
    m_startFileSize = _startFileSize;
    m_startFileSizeHasBeenSet = true;
}

bool DescribeLiveVideoListRequest::StartFileSizeHasBeenSet() const
{
    return m_startFileSizeHasBeenSet;
}

int64_t DescribeLiveVideoListRequest::GetEndFileSize() const
{
    return m_endFileSize;
}

void DescribeLiveVideoListRequest::SetEndFileSize(const int64_t& _endFileSize)
{
    m_endFileSize = _endFileSize;
    m_endFileSizeHasBeenSet = true;
}

bool DescribeLiveVideoListRequest::EndFileSizeHasBeenSet() const
{
    return m_endFileSizeHasBeenSet;
}

int64_t DescribeLiveVideoListRequest::GetIsRecording() const
{
    return m_isRecording;
}

void DescribeLiveVideoListRequest::SetIsRecording(const int64_t& _isRecording)
{
    m_isRecording = _isRecording;
    m_isRecordingHasBeenSet = true;
}

bool DescribeLiveVideoListRequest::IsRecordingHasBeenSet() const
{
    return m_isRecordingHasBeenSet;
}


