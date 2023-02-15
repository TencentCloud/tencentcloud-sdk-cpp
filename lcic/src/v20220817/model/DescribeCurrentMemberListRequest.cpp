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

#include <tencentcloud/lcic/v20220817/model/DescribeCurrentMemberListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

DescribeCurrentMemberListRequest::DescribeCurrentMemberListRequest() :
    m_roomIdHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeCurrentMemberListRequest::ToJsonString() const
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

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
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


uint64_t DescribeCurrentMemberListRequest::GetRoomId() const
{
    return m_roomId;
}

void DescribeCurrentMemberListRequest::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool DescribeCurrentMemberListRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t DescribeCurrentMemberListRequest::GetPage() const
{
    return m_page;
}

void DescribeCurrentMemberListRequest::SetPage(const uint64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeCurrentMemberListRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

uint64_t DescribeCurrentMemberListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCurrentMemberListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCurrentMemberListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


