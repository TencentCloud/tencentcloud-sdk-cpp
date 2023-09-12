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

#include <tencentcloud/tsf/v20180326/model/DescribePluginInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribePluginInstancesRequest::DescribePluginInstancesRequest() :
    m_scopeValueHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_boundHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_searchWordHasBeenSet(false)
{
}

string DescribePluginInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scopeValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scopeValue.c_str(), allocator).Move(), allocator);
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

    if (m_boundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bound";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bound, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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


string DescribePluginInstancesRequest::GetScopeValue() const
{
    return m_scopeValue;
}

void DescribePluginInstancesRequest::SetScopeValue(const string& _scopeValue)
{
    m_scopeValue = _scopeValue;
    m_scopeValueHasBeenSet = true;
}

bool DescribePluginInstancesRequest::ScopeValueHasBeenSet() const
{
    return m_scopeValueHasBeenSet;
}

int64_t DescribePluginInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribePluginInstancesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribePluginInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribePluginInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribePluginInstancesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePluginInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribePluginInstancesRequest::GetBound() const
{
    return m_bound;
}

void DescribePluginInstancesRequest::SetBound(const bool& _bound)
{
    m_bound = _bound;
    m_boundHasBeenSet = true;
}

bool DescribePluginInstancesRequest::BoundHasBeenSet() const
{
    return m_boundHasBeenSet;
}

string DescribePluginInstancesRequest::GetType() const
{
    return m_type;
}

void DescribePluginInstancesRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribePluginInstancesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribePluginInstancesRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribePluginInstancesRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribePluginInstancesRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}


