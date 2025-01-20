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

#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewaySslServersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeVpnGatewaySslServersRequest::DescribeVpnGatewaySslServersRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_sslVpnServerIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_isVpnPortalHasBeenSet(false)
{
}

string DescribeVpnGatewaySslServersRequest::ToJsonString() const
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

    if (m_sslVpnServerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnServerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sslVpnServerIds.begin(); itr != m_sslVpnServerIds.end(); ++itr)
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


uint64_t DescribeVpnGatewaySslServersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeVpnGatewaySslServersRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeVpnGatewaySslServersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeVpnGatewaySslServersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeVpnGatewaySslServersRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeVpnGatewaySslServersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeVpnGatewaySslServersRequest::GetSslVpnServerIds() const
{
    return m_sslVpnServerIds;
}

void DescribeVpnGatewaySslServersRequest::SetSslVpnServerIds(const vector<string>& _sslVpnServerIds)
{
    m_sslVpnServerIds = _sslVpnServerIds;
    m_sslVpnServerIdsHasBeenSet = true;
}

bool DescribeVpnGatewaySslServersRequest::SslVpnServerIdsHasBeenSet() const
{
    return m_sslVpnServerIdsHasBeenSet;
}

vector<FilterObject> DescribeVpnGatewaySslServersRequest::GetFilters() const
{
    return m_filters;
}

void DescribeVpnGatewaySslServersRequest::SetFilters(const vector<FilterObject>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeVpnGatewaySslServersRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool DescribeVpnGatewaySslServersRequest::GetIsVpnPortal() const
{
    return m_isVpnPortal;
}

void DescribeVpnGatewaySslServersRequest::SetIsVpnPortal(const bool& _isVpnPortal)
{
    m_isVpnPortal = _isVpnPortal;
    m_isVpnPortalHasBeenSet = true;
}

bool DescribeVpnGatewaySslServersRequest::IsVpnPortalHasBeenSet() const
{
    return m_isVpnPortalHasBeenSet;
}


