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

#include <tencentcloud/lcic/v20220817/model/DescribeRoomRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

DescribeRoomRequest::DescribeRoomRequest() :
    m_roomIdHasBeenSet(false),
    m_rTMPStreamingURLHasBeenSet(false)
{
}

string DescribeRoomRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_rTMPStreamingURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTMPStreamingURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rTMPStreamingURL, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeRoomRequest::GetRoomId() const
{
    return m_roomId;
}

void DescribeRoomRequest::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool DescribeRoomRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t DescribeRoomRequest::GetRTMPStreamingURL() const
{
    return m_rTMPStreamingURL;
}

void DescribeRoomRequest::SetRTMPStreamingURL(const uint64_t& _rTMPStreamingURL)
{
    m_rTMPStreamingURL = _rTMPStreamingURL;
    m_rTMPStreamingURLHasBeenSet = true;
}

bool DescribeRoomRequest::RTMPStreamingURLHasBeenSet() const
{
    return m_rTMPStreamingURLHasBeenSet;
}


