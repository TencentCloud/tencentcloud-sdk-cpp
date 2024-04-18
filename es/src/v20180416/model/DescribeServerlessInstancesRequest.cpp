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

#include <tencentcloud/es/v20180416/model/DescribeServerlessInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeServerlessInstancesRequest::DescribeServerlessInstancesRequest() :
    m_instanceIdsHasBeenSet(false),
    m_indexNamesHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_indexStatusListHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_spaceIdsHasBeenSet(false),
    m_diSourceTypesHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

string DescribeServerlessInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_indexNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_indexNames.begin(); itr != m_indexNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_indexStatusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexStatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_indexStatusList.begin(); itr != m_indexStatusList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_spaceIds.begin(); itr != m_spaceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_diSourceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiSourceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_diSourceTypes.begin(); itr != m_diSourceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
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


vector<string> DescribeServerlessInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeServerlessInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeServerlessInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<string> DescribeServerlessInstancesRequest::GetIndexNames() const
{
    return m_indexNames;
}

void DescribeServerlessInstancesRequest::SetIndexNames(const vector<string>& _indexNames)
{
    m_indexNames = _indexNames;
    m_indexNamesHasBeenSet = true;
}

bool DescribeServerlessInstancesRequest::IndexNamesHasBeenSet() const
{
    return m_indexNamesHasBeenSet;
}

int64_t DescribeServerlessInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeServerlessInstancesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeServerlessInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeServerlessInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeServerlessInstancesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeServerlessInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeServerlessInstancesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeServerlessInstancesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeServerlessInstancesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

vector<string> DescribeServerlessInstancesRequest::GetIndexStatusList() const
{
    return m_indexStatusList;
}

void DescribeServerlessInstancesRequest::SetIndexStatusList(const vector<string>& _indexStatusList)
{
    m_indexStatusList = _indexStatusList;
    m_indexStatusListHasBeenSet = true;
}

bool DescribeServerlessInstancesRequest::IndexStatusListHasBeenSet() const
{
    return m_indexStatusListHasBeenSet;
}

string DescribeServerlessInstancesRequest::GetOrder() const
{
    return m_order;
}

void DescribeServerlessInstancesRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeServerlessInstancesRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

vector<string> DescribeServerlessInstancesRequest::GetSpaceIds() const
{
    return m_spaceIds;
}

void DescribeServerlessInstancesRequest::SetSpaceIds(const vector<string>& _spaceIds)
{
    m_spaceIds = _spaceIds;
    m_spaceIdsHasBeenSet = true;
}

bool DescribeServerlessInstancesRequest::SpaceIdsHasBeenSet() const
{
    return m_spaceIdsHasBeenSet;
}

vector<string> DescribeServerlessInstancesRequest::GetDiSourceTypes() const
{
    return m_diSourceTypes;
}

void DescribeServerlessInstancesRequest::SetDiSourceTypes(const vector<string>& _diSourceTypes)
{
    m_diSourceTypes = _diSourceTypes;
    m_diSourceTypesHasBeenSet = true;
}

bool DescribeServerlessInstancesRequest::DiSourceTypesHasBeenSet() const
{
    return m_diSourceTypesHasBeenSet;
}

vector<TagInfo> DescribeServerlessInstancesRequest::GetTagList() const
{
    return m_tagList;
}

void DescribeServerlessInstancesRequest::SetTagList(const vector<TagInfo>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool DescribeServerlessInstancesRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}


