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

#include <tencentcloud/cvm/v20170312/model/DescribeHpcClustersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

DescribeHpcClustersRequest::DescribeHpcClustersRequest() :
    m_hpcClusterIdsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_hpcClusterTypeHasBeenSet(false),
    m_hpcClusterBusinessIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeHpcClustersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_hpcClusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HpcClusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hpcClusterIds.begin(); itr != m_hpcClusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    if (m_hpcClusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HpcClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hpcClusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_hpcClusterBusinessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HpcClusterBusinessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hpcClusterBusinessId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
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


vector<string> DescribeHpcClustersRequest::GetHpcClusterIds() const
{
    return m_hpcClusterIds;
}

void DescribeHpcClustersRequest::SetHpcClusterIds(const vector<string>& _hpcClusterIds)
{
    m_hpcClusterIds = _hpcClusterIds;
    m_hpcClusterIdsHasBeenSet = true;
}

bool DescribeHpcClustersRequest::HpcClusterIdsHasBeenSet() const
{
    return m_hpcClusterIdsHasBeenSet;
}

string DescribeHpcClustersRequest::GetName() const
{
    return m_name;
}

void DescribeHpcClustersRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeHpcClustersRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeHpcClustersRequest::GetZone() const
{
    return m_zone;
}

void DescribeHpcClustersRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeHpcClustersRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t DescribeHpcClustersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeHpcClustersRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeHpcClustersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeHpcClustersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeHpcClustersRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeHpcClustersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeHpcClustersRequest::GetHpcClusterType() const
{
    return m_hpcClusterType;
}

void DescribeHpcClustersRequest::SetHpcClusterType(const string& _hpcClusterType)
{
    m_hpcClusterType = _hpcClusterType;
    m_hpcClusterTypeHasBeenSet = true;
}

bool DescribeHpcClustersRequest::HpcClusterTypeHasBeenSet() const
{
    return m_hpcClusterTypeHasBeenSet;
}

string DescribeHpcClustersRequest::GetHpcClusterBusinessId() const
{
    return m_hpcClusterBusinessId;
}

void DescribeHpcClustersRequest::SetHpcClusterBusinessId(const string& _hpcClusterBusinessId)
{
    m_hpcClusterBusinessId = _hpcClusterBusinessId;
    m_hpcClusterBusinessIdHasBeenSet = true;
}

bool DescribeHpcClustersRequest::HpcClusterBusinessIdHasBeenSet() const
{
    return m_hpcClusterBusinessIdHasBeenSet;
}

string DescribeHpcClustersRequest::GetInstanceType() const
{
    return m_instanceType;
}

void DescribeHpcClustersRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DescribeHpcClustersRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<Filter> DescribeHpcClustersRequest::GetFilters() const
{
    return m_filters;
}

void DescribeHpcClustersRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeHpcClustersRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


