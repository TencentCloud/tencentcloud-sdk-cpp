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

#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewaySslClientsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeVpnGatewaySslClientsRequest::DescribeVpnGatewaySslClientsRequest() :
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_sslVpnClientIdsHasBeenSet(false),
    m_isVpnPortalHasBeenSet(false)
{
}

string DescribeVpnGatewaySslClientsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_sslVpnClientIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnClientIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sslVpnClientIds.begin(); itr != m_sslVpnClientIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isVpnPortalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVpnPortal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isVpnPortal, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Filter> DescribeVpnGatewaySslClientsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeVpnGatewaySslClientsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeVpnGatewaySslClientsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t DescribeVpnGatewaySslClientsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeVpnGatewaySslClientsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeVpnGatewaySslClientsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeVpnGatewaySslClientsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeVpnGatewaySslClientsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeVpnGatewaySslClientsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeVpnGatewaySslClientsRequest::GetSslVpnClientIds() const
{
    return m_sslVpnClientIds;
}

void DescribeVpnGatewaySslClientsRequest::SetSslVpnClientIds(const vector<string>& _sslVpnClientIds)
{
    m_sslVpnClientIds = _sslVpnClientIds;
    m_sslVpnClientIdsHasBeenSet = true;
}

bool DescribeVpnGatewaySslClientsRequest::SslVpnClientIdsHasBeenSet() const
{
    return m_sslVpnClientIdsHasBeenSet;
}

bool DescribeVpnGatewaySslClientsRequest::GetIsVpnPortal() const
{
    return m_isVpnPortal;
}

void DescribeVpnGatewaySslClientsRequest::SetIsVpnPortal(const bool& _isVpnPortal)
{
    m_isVpnPortal = _isVpnPortal;
    m_isVpnPortalHasBeenSet = true;
}

bool DescribeVpnGatewaySslClientsRequest::IsVpnPortalHasBeenSet() const
{
    return m_isVpnPortalHasBeenSet;
}


