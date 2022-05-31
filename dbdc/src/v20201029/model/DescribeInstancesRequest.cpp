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

#include <tencentcloud/dbdc/v20201029/model/DescribeInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

DescribeInstancesRequest::DescribeInstancesRequest() :
    m_instanceTypesHasBeenSet(false),
    m_productIdsHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_fenceFlagHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false),
    m_instanceStatusHasBeenSet(false)
{
}

string DescribeInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceTypes.begin(); itr != m_instanceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_productIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productIds.begin(); itr != m_productIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

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

    if (m_fenceFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FenceFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fenceFlag, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> DescribeInstancesRequest::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void DescribeInstancesRequest::SetInstanceTypes(const vector<int64_t>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool DescribeInstancesRequest::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

vector<int64_t> DescribeInstancesRequest::GetProductIds() const
{
    return m_productIds;
}

void DescribeInstancesRequest::SetProductIds(const vector<int64_t>& _productIds)
{
    m_productIds = _productIds;
    m_productIdsHasBeenSet = true;
}

bool DescribeInstancesRequest::ProductIdsHasBeenSet() const
{
    return m_productIdsHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

bool DescribeInstancesRequest::GetFenceFlag() const
{
    return m_fenceFlag;
}

void DescribeInstancesRequest::SetFenceFlag(const bool& _fenceFlag)
{
    m_fenceFlag = _fenceFlag;
    m_fenceFlagHasBeenSet = true;
}

bool DescribeInstancesRequest::FenceFlagHasBeenSet() const
{
    return m_fenceFlagHasBeenSet;
}

string DescribeInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void DescribeInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DescribeInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t DescribeInstancesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeInstancesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeInstancesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeInstancesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeInstancesRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeInstancesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string DescribeInstancesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeInstancesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeInstancesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeInstancesRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeInstancesRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeInstancesRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}

int64_t DescribeInstancesRequest::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void DescribeInstancesRequest::SetInstanceStatus(const int64_t& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool DescribeInstancesRequest::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}


