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

#include <tencentcloud/cdwpg/v20201230/model/DescribeSimpleInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

DescribeSimpleInstancesRequest::DescribeSimpleInstancesRequest() :
    m_searchInstanceIdHasBeenSet(false),
    m_searchInstanceNameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchTagsHasBeenSet(false)
{
}

string DescribeSimpleInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_searchInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_searchInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchInstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchInstanceName.c_str(), allocator).Move(), allocator);
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

    if (m_searchTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchTags.begin(); itr != m_searchTags.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSimpleInstancesRequest::GetSearchInstanceId() const
{
    return m_searchInstanceId;
}

void DescribeSimpleInstancesRequest::SetSearchInstanceId(const string& _searchInstanceId)
{
    m_searchInstanceId = _searchInstanceId;
    m_searchInstanceIdHasBeenSet = true;
}

bool DescribeSimpleInstancesRequest::SearchInstanceIdHasBeenSet() const
{
    return m_searchInstanceIdHasBeenSet;
}

string DescribeSimpleInstancesRequest::GetSearchInstanceName() const
{
    return m_searchInstanceName;
}

void DescribeSimpleInstancesRequest::SetSearchInstanceName(const string& _searchInstanceName)
{
    m_searchInstanceName = _searchInstanceName;
    m_searchInstanceNameHasBeenSet = true;
}

bool DescribeSimpleInstancesRequest::SearchInstanceNameHasBeenSet() const
{
    return m_searchInstanceNameHasBeenSet;
}

int64_t DescribeSimpleInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSimpleInstancesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSimpleInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeSimpleInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSimpleInstancesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSimpleInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeSimpleInstancesRequest::GetSearchTags() const
{
    return m_searchTags;
}

void DescribeSimpleInstancesRequest::SetSearchTags(const vector<string>& _searchTags)
{
    m_searchTags = _searchTags;
    m_searchTagsHasBeenSet = true;
}

bool DescribeSimpleInstancesRequest::SearchTagsHasBeenSet() const
{
    return m_searchTagsHasBeenSet;
}


