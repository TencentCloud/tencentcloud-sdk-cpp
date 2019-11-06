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

#include <tencentcloud/tsf/v20180326/model/DescribeSimpleClustersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

DescribeSimpleClustersRequest::DescribeSimpleClustersRequest() :
    m_clusterIdListHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchWordHasBeenSet(false)
{
}

string DescribeSimpleClustersRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_clusterIdList.begin(); itr != m_clusterIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

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


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeSimpleClustersRequest::GetClusterIdList() const
{
    return m_clusterIdList;
}

void DescribeSimpleClustersRequest::SetClusterIdList(const vector<string>& _clusterIdList)
{
    m_clusterIdList = _clusterIdList;
    m_clusterIdListHasBeenSet = true;
}

bool DescribeSimpleClustersRequest::ClusterIdListHasBeenSet() const
{
    return m_clusterIdListHasBeenSet;
}

string DescribeSimpleClustersRequest::GetClusterType() const
{
    return m_clusterType;
}

void DescribeSimpleClustersRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool DescribeSimpleClustersRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

int64_t DescribeSimpleClustersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSimpleClustersRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSimpleClustersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeSimpleClustersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSimpleClustersRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSimpleClustersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeSimpleClustersRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeSimpleClustersRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeSimpleClustersRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}


