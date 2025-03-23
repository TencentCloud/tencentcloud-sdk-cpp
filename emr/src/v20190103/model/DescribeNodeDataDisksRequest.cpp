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

#include <tencentcloud/emr/v20190103/model/DescribeNodeDataDisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeNodeDataDisksRequest::DescribeNodeDataDisksRequest() :
    m_instanceIdHasBeenSet(false),
    m_cvmInstanceIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_innerSearchHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeNodeDataDisksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cvmInstanceIds.begin(); itr != m_cvmInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_innerSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerSearch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_innerSearch.c_str(), allocator).Move(), allocator);
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeNodeDataDisksRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeNodeDataDisksRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeNodeDataDisksRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> DescribeNodeDataDisksRequest::GetCvmInstanceIds() const
{
    return m_cvmInstanceIds;
}

void DescribeNodeDataDisksRequest::SetCvmInstanceIds(const vector<string>& _cvmInstanceIds)
{
    m_cvmInstanceIds = _cvmInstanceIds;
    m_cvmInstanceIdsHasBeenSet = true;
}

bool DescribeNodeDataDisksRequest::CvmInstanceIdsHasBeenSet() const
{
    return m_cvmInstanceIdsHasBeenSet;
}

vector<Filters> DescribeNodeDataDisksRequest::GetFilters() const
{
    return m_filters;
}

void DescribeNodeDataDisksRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeNodeDataDisksRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeNodeDataDisksRequest::GetInnerSearch() const
{
    return m_innerSearch;
}

void DescribeNodeDataDisksRequest::SetInnerSearch(const string& _innerSearch)
{
    m_innerSearch = _innerSearch;
    m_innerSearchHasBeenSet = true;
}

bool DescribeNodeDataDisksRequest::InnerSearchHasBeenSet() const
{
    return m_innerSearchHasBeenSet;
}

uint64_t DescribeNodeDataDisksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeNodeDataDisksRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeNodeDataDisksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeNodeDataDisksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeNodeDataDisksRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeNodeDataDisksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


