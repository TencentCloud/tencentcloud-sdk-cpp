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

#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeRocketMQGroupsRequest::DescribeRocketMQGroupsRequest() :
    m_clusterIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filterTopicHasBeenSet(false),
    m_filterGroupHasBeenSet(false),
    m_sortedByHasBeenSet(false),
    m_sortOrderHasBeenSet(false),
    m_filterOneGroupHasBeenSet(false),
    m_typesHasBeenSet(false)
{
}

string DescribeRocketMQGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
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

    if (m_filterTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterTopic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_filterGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_sortedByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortedBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortedBy.c_str(), allocator).Move(), allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_filterOneGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterOneGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterOneGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_typesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Types";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_types.begin(); itr != m_types.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRocketMQGroupsRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeRocketMQGroupsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeRocketMQGroupsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeRocketMQGroupsRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void DescribeRocketMQGroupsRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool DescribeRocketMQGroupsRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

uint64_t DescribeRocketMQGroupsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRocketMQGroupsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRocketMQGroupsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeRocketMQGroupsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRocketMQGroupsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRocketMQGroupsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeRocketMQGroupsRequest::GetFilterTopic() const
{
    return m_filterTopic;
}

void DescribeRocketMQGroupsRequest::SetFilterTopic(const string& _filterTopic)
{
    m_filterTopic = _filterTopic;
    m_filterTopicHasBeenSet = true;
}

bool DescribeRocketMQGroupsRequest::FilterTopicHasBeenSet() const
{
    return m_filterTopicHasBeenSet;
}

string DescribeRocketMQGroupsRequest::GetFilterGroup() const
{
    return m_filterGroup;
}

void DescribeRocketMQGroupsRequest::SetFilterGroup(const string& _filterGroup)
{
    m_filterGroup = _filterGroup;
    m_filterGroupHasBeenSet = true;
}

bool DescribeRocketMQGroupsRequest::FilterGroupHasBeenSet() const
{
    return m_filterGroupHasBeenSet;
}

string DescribeRocketMQGroupsRequest::GetSortedBy() const
{
    return m_sortedBy;
}

void DescribeRocketMQGroupsRequest::SetSortedBy(const string& _sortedBy)
{
    m_sortedBy = _sortedBy;
    m_sortedByHasBeenSet = true;
}

bool DescribeRocketMQGroupsRequest::SortedByHasBeenSet() const
{
    return m_sortedByHasBeenSet;
}

string DescribeRocketMQGroupsRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void DescribeRocketMQGroupsRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool DescribeRocketMQGroupsRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}

string DescribeRocketMQGroupsRequest::GetFilterOneGroup() const
{
    return m_filterOneGroup;
}

void DescribeRocketMQGroupsRequest::SetFilterOneGroup(const string& _filterOneGroup)
{
    m_filterOneGroup = _filterOneGroup;
    m_filterOneGroupHasBeenSet = true;
}

bool DescribeRocketMQGroupsRequest::FilterOneGroupHasBeenSet() const
{
    return m_filterOneGroupHasBeenSet;
}

vector<string> DescribeRocketMQGroupsRequest::GetTypes() const
{
    return m_types;
}

void DescribeRocketMQGroupsRequest::SetTypes(const vector<string>& _types)
{
    m_types = _types;
    m_typesHasBeenSet = true;
}

bool DescribeRocketMQGroupsRequest::TypesHasBeenSet() const
{
    return m_typesHasBeenSet;
}


