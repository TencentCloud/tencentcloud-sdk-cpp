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

#include <tencentcloud/iss/v20230517/model/PlayRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

PlayRecordRequest::PlayRecordRequest() :
    m_channelIdHasBeenSet(false),
    m_startHasBeenSet(false),
    m_endHasBeenSet(false),
    m_streamTypeHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_isInternalHasBeenSet(false)
{
}

string PlayRecordRequest::ToJsonString() const
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

    if (m_startHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_start, allocator);
    }

    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_end, allocator);
    }

    if (m_streamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_streamType, allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_isInternalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInternal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isInternal, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PlayRecordRequest::GetChannelId() const
{
    return m_channelId;
}

void PlayRecordRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool PlayRecordRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

int64_t PlayRecordRequest::GetStart() const
{
    return m_start;
}

void PlayRecordRequest::SetStart(const int64_t& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool PlayRecordRequest::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

int64_t PlayRecordRequest::GetEnd() const
{
    return m_end;
}

void PlayRecordRequest::SetEnd(const int64_t& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool PlayRecordRequest::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

int64_t PlayRecordRequest::GetStreamType() const
{
    return m_streamType;
}

void PlayRecordRequest::SetStreamType(const int64_t& _streamType)
{
    m_streamType = _streamType;
    m_streamTypeHasBeenSet = true;
}

bool PlayRecordRequest::StreamTypeHasBeenSet() const
{
    return m_streamTypeHasBeenSet;
}

string PlayRecordRequest::GetResolution() const
{
    return m_resolution;
}

void PlayRecordRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool PlayRecordRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

bool PlayRecordRequest::GetIsInternal() const
{
    return m_isInternal;
}

void PlayRecordRequest::SetIsInternal(const bool& _isInternal)
{
    m_isInternal = _isInternal;
    m_isInternalHasBeenSet = true;
}

bool PlayRecordRequest::IsInternalHasBeenSet() const
{
    return m_isInternalHasBeenSet;
}


