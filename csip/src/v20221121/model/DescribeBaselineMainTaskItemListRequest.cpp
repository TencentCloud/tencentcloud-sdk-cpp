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

#include <tencentcloud/csip/v20221121/model/DescribeBaselineMainTaskItemListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeBaselineMainTaskItemListRequest::DescribeBaselineMainTaskItemListRequest() :
    m_mainTaskIDHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeBaselineMainTaskItemListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mainTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainTaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mainTaskID, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeBaselineMainTaskItemListRequest::GetMainTaskID() const
{
    return m_mainTaskID;
}

void DescribeBaselineMainTaskItemListRequest::SetMainTaskID(const uint64_t& _mainTaskID)
{
    m_mainTaskID = _mainTaskID;
    m_mainTaskIDHasBeenSet = true;
}

bool DescribeBaselineMainTaskItemListRequest::MainTaskIDHasBeenSet() const
{
    return m_mainTaskIDHasBeenSet;
}

vector<string> DescribeBaselineMainTaskItemListRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeBaselineMainTaskItemListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeBaselineMainTaskItemListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

int64_t DescribeBaselineMainTaskItemListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBaselineMainTaskItemListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBaselineMainTaskItemListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBaselineMainTaskItemListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBaselineMainTaskItemListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBaselineMainTaskItemListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


