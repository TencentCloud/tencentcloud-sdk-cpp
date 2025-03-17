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

#include <tencentcloud/cdwch/v20200915/model/DescribeInstancesNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

DescribeInstancesNewRequest::DescribeInstancesNewRequest() :
    m_searchInstanceIdHasBeenSet(false),
    m_searchInstanceNameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchTagsHasBeenSet(false),
    m_isSimpleHasBeenSet(false),
    m_vipsHasBeenSet(false)
{
}

string DescribeInstancesNewRequest::ToJsonString() const
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

        int i=0;
        for (auto itr = m_searchTags.begin(); itr != m_searchTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isSimpleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSimple";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSimple, allocator);
    }

    if (m_vipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vips";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vips.begin(); itr != m_vips.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstancesNewRequest::GetSearchInstanceId() const
{
    return m_searchInstanceId;
}

void DescribeInstancesNewRequest::SetSearchInstanceId(const string& _searchInstanceId)
{
    m_searchInstanceId = _searchInstanceId;
    m_searchInstanceIdHasBeenSet = true;
}

bool DescribeInstancesNewRequest::SearchInstanceIdHasBeenSet() const
{
    return m_searchInstanceIdHasBeenSet;
}

string DescribeInstancesNewRequest::GetSearchInstanceName() const
{
    return m_searchInstanceName;
}

void DescribeInstancesNewRequest::SetSearchInstanceName(const string& _searchInstanceName)
{
    m_searchInstanceName = _searchInstanceName;
    m_searchInstanceNameHasBeenSet = true;
}

bool DescribeInstancesNewRequest::SearchInstanceNameHasBeenSet() const
{
    return m_searchInstanceNameHasBeenSet;
}

int64_t DescribeInstancesNewRequest::GetOffset() const
{
    return m_offset;
}

void DescribeInstancesNewRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeInstancesNewRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeInstancesNewRequest::GetLimit() const
{
    return m_limit;
}

void DescribeInstancesNewRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeInstancesNewRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<SearchTags> DescribeInstancesNewRequest::GetSearchTags() const
{
    return m_searchTags;
}

void DescribeInstancesNewRequest::SetSearchTags(const vector<SearchTags>& _searchTags)
{
    m_searchTags = _searchTags;
    m_searchTagsHasBeenSet = true;
}

bool DescribeInstancesNewRequest::SearchTagsHasBeenSet() const
{
    return m_searchTagsHasBeenSet;
}

bool DescribeInstancesNewRequest::GetIsSimple() const
{
    return m_isSimple;
}

void DescribeInstancesNewRequest::SetIsSimple(const bool& _isSimple)
{
    m_isSimple = _isSimple;
    m_isSimpleHasBeenSet = true;
}

bool DescribeInstancesNewRequest::IsSimpleHasBeenSet() const
{
    return m_isSimpleHasBeenSet;
}

vector<string> DescribeInstancesNewRequest::GetVips() const
{
    return m_vips;
}

void DescribeInstancesNewRequest::SetVips(const vector<string>& _vips)
{
    m_vips = _vips;
    m_vipsHasBeenSet = true;
}

bool DescribeInstancesNewRequest::VipsHasBeenSet() const
{
    return m_vipsHasBeenSet;
}


