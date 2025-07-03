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

#include <tencentcloud/cdwch/v20200915/model/DescribeCNInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

DescribeCNInstancesRequest::DescribeCNInstancesRequest() :
    m_searchInstanceIDHasBeenSet(false),
    m_searchInstanceNameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchTagsHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_componentsHasBeenSet(false)
{
}

string DescribeCNInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_searchInstanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchInstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchInstanceID.c_str(), allocator).Move(), allocator);
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

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCNInstancesRequest::GetSearchInstanceID() const
{
    return m_searchInstanceID;
}

void DescribeCNInstancesRequest::SetSearchInstanceID(const string& _searchInstanceID)
{
    m_searchInstanceID = _searchInstanceID;
    m_searchInstanceIDHasBeenSet = true;
}

bool DescribeCNInstancesRequest::SearchInstanceIDHasBeenSet() const
{
    return m_searchInstanceIDHasBeenSet;
}

string DescribeCNInstancesRequest::GetSearchInstanceName() const
{
    return m_searchInstanceName;
}

void DescribeCNInstancesRequest::SetSearchInstanceName(const string& _searchInstanceName)
{
    m_searchInstanceName = _searchInstanceName;
    m_searchInstanceNameHasBeenSet = true;
}

bool DescribeCNInstancesRequest::SearchInstanceNameHasBeenSet() const
{
    return m_searchInstanceNameHasBeenSet;
}

int64_t DescribeCNInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCNInstancesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCNInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeCNInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCNInstancesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCNInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<SearchTags> DescribeCNInstancesRequest::GetSearchTags() const
{
    return m_searchTags;
}

void DescribeCNInstancesRequest::SetSearchTags(const vector<SearchTags>& _searchTags)
{
    m_searchTags = _searchTags;
    m_searchTagsHasBeenSet = true;
}

bool DescribeCNInstancesRequest::SearchTagsHasBeenSet() const
{
    return m_searchTagsHasBeenSet;
}

string DescribeCNInstancesRequest::GetInstanceType() const
{
    return m_instanceType;
}

void DescribeCNInstancesRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DescribeCNInstancesRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<string> DescribeCNInstancesRequest::GetComponents() const
{
    return m_components;
}

void DescribeCNInstancesRequest::SetComponents(const vector<string>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool DescribeCNInstancesRequest::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}


