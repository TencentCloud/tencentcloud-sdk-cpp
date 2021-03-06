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

#include <tencentcloud/cloudhsm/v20191112/model/DescribeVsmsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace rapidjson;
using namespace std;

DescribeVsmsRequest::DescribeVsmsRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchWordHasBeenSet(false),
    m_tagFiltersHasBeenSet(false)
{
}

string DescribeVsmsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_searchWordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }

    if (m_tagFiltersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagFilters.begin(); itr != m_tagFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeVsmsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeVsmsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeVsmsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeVsmsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeVsmsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeVsmsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeVsmsRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeVsmsRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeVsmsRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

vector<TagFilter> DescribeVsmsRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void DescribeVsmsRequest::SetTagFilters(const vector<TagFilter>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool DescribeVsmsRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}


