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

#include <tencentcloud/tsf/v20180326/model/DescribeGroupBindedGatewaysRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeGroupBindedGatewaysRequest::DescribeGroupBindedGatewaysRequest() :
    m_groupIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchWordHasBeenSet(false)
{
}

string DescribeGroupBindedGatewaysRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
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

    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGroupBindedGatewaysRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeGroupBindedGatewaysRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeGroupBindedGatewaysRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t DescribeGroupBindedGatewaysRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGroupBindedGatewaysRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGroupBindedGatewaysRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeGroupBindedGatewaysRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGroupBindedGatewaysRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGroupBindedGatewaysRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeGroupBindedGatewaysRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeGroupBindedGatewaysRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeGroupBindedGatewaysRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}


