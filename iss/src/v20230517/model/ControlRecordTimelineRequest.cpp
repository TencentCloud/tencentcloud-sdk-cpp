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

#include <tencentcloud/iss/v20230517/model/ControlRecordTimelineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ControlRecordTimelineRequest::ControlRecordTimelineRequest() :
    m_channelIdHasBeenSet(false),
    m_startHasBeenSet(false),
    m_endHasBeenSet(false)
{
}

string ControlRecordTimelineRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ControlRecordTimelineRequest::GetChannelId() const
{
    return m_channelId;
}

void ControlRecordTimelineRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ControlRecordTimelineRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

int64_t ControlRecordTimelineRequest::GetStart() const
{
    return m_start;
}

void ControlRecordTimelineRequest::SetStart(const int64_t& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool ControlRecordTimelineRequest::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

int64_t ControlRecordTimelineRequest::GetEnd() const
{
    return m_end;
}

void ControlRecordTimelineRequest::SetEnd(const int64_t& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool ControlRecordTimelineRequest::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}


