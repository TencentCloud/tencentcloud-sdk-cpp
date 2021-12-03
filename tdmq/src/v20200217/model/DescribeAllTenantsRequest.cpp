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

#include <tencentcloud/tdmq/v20200217/model/DescribeAllTenantsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeAllTenantsRequest::DescribeAllTenantsRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_tenantNameHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_sortOrderHasBeenSet(false)
{
}

string DescribeAllTenantsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tenantName.c_str(), allocator).Move(), allocator);
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

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortOrder.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAllTenantsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAllTenantsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAllTenantsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeAllTenantsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAllTenantsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAllTenantsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAllTenantsRequest::GetClusterName() const
{
    return m_clusterName;
}

void DescribeAllTenantsRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool DescribeAllTenantsRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DescribeAllTenantsRequest::GetTenantId() const
{
    return m_tenantId;
}

void DescribeAllTenantsRequest::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool DescribeAllTenantsRequest::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string DescribeAllTenantsRequest::GetTenantName() const
{
    return m_tenantName;
}

void DescribeAllTenantsRequest::SetTenantName(const string& _tenantName)
{
    m_tenantName = _tenantName;
    m_tenantNameHasBeenSet = true;
}

bool DescribeAllTenantsRequest::TenantNameHasBeenSet() const
{
    return m_tenantNameHasBeenSet;
}

vector<string> DescribeAllTenantsRequest::GetTypes() const
{
    return m_types;
}

void DescribeAllTenantsRequest::SetTypes(const vector<string>& _types)
{
    m_types = _types;
    m_typesHasBeenSet = true;
}

bool DescribeAllTenantsRequest::TypesHasBeenSet() const
{
    return m_typesHasBeenSet;
}

string DescribeAllTenantsRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeAllTenantsRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeAllTenantsRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeAllTenantsRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void DescribeAllTenantsRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool DescribeAllTenantsRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}


