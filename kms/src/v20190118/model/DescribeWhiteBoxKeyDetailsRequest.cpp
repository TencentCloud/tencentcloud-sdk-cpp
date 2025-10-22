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

#include <tencentcloud/kms/v20190118/model/DescribeWhiteBoxKeyDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

DescribeWhiteBoxKeyDetailsRequest::DescribeWhiteBoxKeyDetailsRequest() :
    m_keyStatusHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_tagFiltersHasBeenSet(false)
{
}

string DescribeWhiteBoxKeyDetailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keyStatus, allocator);
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

    if (m_tagFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagFilters.begin(); itr != m_tagFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeWhiteBoxKeyDetailsRequest::GetKeyStatus() const
{
    return m_keyStatus;
}

void DescribeWhiteBoxKeyDetailsRequest::SetKeyStatus(const int64_t& _keyStatus)
{
    m_keyStatus = _keyStatus;
    m_keyStatusHasBeenSet = true;
}

bool DescribeWhiteBoxKeyDetailsRequest::KeyStatusHasBeenSet() const
{
    return m_keyStatusHasBeenSet;
}

uint64_t DescribeWhiteBoxKeyDetailsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeWhiteBoxKeyDetailsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeWhiteBoxKeyDetailsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeWhiteBoxKeyDetailsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeWhiteBoxKeyDetailsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeWhiteBoxKeyDetailsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<TagFilter> DescribeWhiteBoxKeyDetailsRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void DescribeWhiteBoxKeyDetailsRequest::SetTagFilters(const vector<TagFilter>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool DescribeWhiteBoxKeyDetailsRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}


