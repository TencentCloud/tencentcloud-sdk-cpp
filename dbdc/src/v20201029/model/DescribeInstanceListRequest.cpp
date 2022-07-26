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

#include <tencentcloud/dbdc/v20201029/model/DescribeInstanceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

DescribeInstanceListRequest::DescribeInstanceListRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_fenceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterIdHasBeenSet(false)
{
}

string DescribeInstanceListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productId.begin(); itr != m_productId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceId.begin(); itr != m_instanceId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceName.begin(); itr != m_instanceName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fenceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FenceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fenceId.begin(); itr != m_fenceId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterId.begin(); itr != m_clusterId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeInstanceListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeInstanceListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeInstanceListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeInstanceListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeInstanceListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeInstanceListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeInstanceListRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeInstanceListRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeInstanceListRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeInstanceListRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeInstanceListRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeInstanceListRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

vector<int64_t> DescribeInstanceListRequest::GetProductId() const
{
    return m_productId;
}

void DescribeInstanceListRequest::SetProductId(const vector<int64_t>& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeInstanceListRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

vector<string> DescribeInstanceListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInstanceListRequest::SetInstanceId(const vector<string>& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInstanceListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> DescribeInstanceListRequest::GetInstanceName() const
{
    return m_instanceName;
}

void DescribeInstanceListRequest::SetInstanceName(const vector<string>& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DescribeInstanceListRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<string> DescribeInstanceListRequest::GetFenceId() const
{
    return m_fenceId;
}

void DescribeInstanceListRequest::SetFenceId(const vector<string>& _fenceId)
{
    m_fenceId = _fenceId;
    m_fenceIdHasBeenSet = true;
}

bool DescribeInstanceListRequest::FenceIdHasBeenSet() const
{
    return m_fenceIdHasBeenSet;
}

vector<int64_t> DescribeInstanceListRequest::GetStatus() const
{
    return m_status;
}

void DescribeInstanceListRequest::SetStatus(const vector<int64_t>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeInstanceListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeInstanceListRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeInstanceListRequest::SetClusterId(const vector<string>& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeInstanceListRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}


