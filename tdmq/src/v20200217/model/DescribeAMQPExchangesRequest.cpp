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

#include <tencentcloud/tdmq/v20200217/model/DescribeAMQPExchangesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeAMQPExchangesRequest::DescribeAMQPExchangesRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_vHostIdHasBeenSet(false),
    m_filterTypeHasBeenSet(false),
    m_filterNameHasBeenSet(false),
    m_filterInternalHasBeenSet(false)
{
}

string DescribeAMQPExchangesRequest::ToJsonString() const
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

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_vHostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VHostId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vHostId.c_str(), allocator).Move(), allocator);
    }

    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterType.begin(); itr != m_filterType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterName.c_str(), allocator).Move(), allocator);
    }

    if (m_filterInternalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterInternal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterInternal, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeAMQPExchangesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAMQPExchangesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAMQPExchangesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAMQPExchangesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAMQPExchangesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAMQPExchangesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAMQPExchangesRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeAMQPExchangesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeAMQPExchangesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeAMQPExchangesRequest::GetVHostId() const
{
    return m_vHostId;
}

void DescribeAMQPExchangesRequest::SetVHostId(const string& _vHostId)
{
    m_vHostId = _vHostId;
    m_vHostIdHasBeenSet = true;
}

bool DescribeAMQPExchangesRequest::VHostIdHasBeenSet() const
{
    return m_vHostIdHasBeenSet;
}

vector<string> DescribeAMQPExchangesRequest::GetFilterType() const
{
    return m_filterType;
}

void DescribeAMQPExchangesRequest::SetFilterType(const vector<string>& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool DescribeAMQPExchangesRequest::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

string DescribeAMQPExchangesRequest::GetFilterName() const
{
    return m_filterName;
}

void DescribeAMQPExchangesRequest::SetFilterName(const string& _filterName)
{
    m_filterName = _filterName;
    m_filterNameHasBeenSet = true;
}

bool DescribeAMQPExchangesRequest::FilterNameHasBeenSet() const
{
    return m_filterNameHasBeenSet;
}

bool DescribeAMQPExchangesRequest::GetFilterInternal() const
{
    return m_filterInternal;
}

void DescribeAMQPExchangesRequest::SetFilterInternal(const bool& _filterInternal)
{
    m_filterInternal = _filterInternal;
    m_filterInternalHasBeenSet = true;
}

bool DescribeAMQPExchangesRequest::FilterInternalHasBeenSet() const
{
    return m_filterInternalHasBeenSet;
}


