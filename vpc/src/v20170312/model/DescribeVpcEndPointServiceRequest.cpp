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

#include <tencentcloud/vpc/v20170312/model/DescribeVpcEndPointServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeVpcEndPointServiceRequest::DescribeVpcEndPointServiceRequest() :
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_endPointServiceIdsHasBeenSet(false),
    m_isListAuthorizedEndPointServiceHasBeenSet(false),
    m_ipAddressTypeHasBeenSet(false)
{
}

string DescribeVpcEndPointServiceRequest::ToJsonString() const
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

    if (m_endPointServiceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointServiceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_endPointServiceIds.begin(); itr != m_endPointServiceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isListAuthorizedEndPointServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsListAuthorizedEndPointService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isListAuthorizedEndPointService, allocator);
    }

    if (m_ipAddressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddressType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipAddressType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Filter> DescribeVpcEndPointServiceRequest::GetFilters() const
{
    return m_filters;
}

void DescribeVpcEndPointServiceRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeVpcEndPointServiceRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t DescribeVpcEndPointServiceRequest::GetOffset() const
{
    return m_offset;
}

void DescribeVpcEndPointServiceRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeVpcEndPointServiceRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeVpcEndPointServiceRequest::GetLimit() const
{
    return m_limit;
}

void DescribeVpcEndPointServiceRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeVpcEndPointServiceRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeVpcEndPointServiceRequest::GetEndPointServiceIds() const
{
    return m_endPointServiceIds;
}

void DescribeVpcEndPointServiceRequest::SetEndPointServiceIds(const vector<string>& _endPointServiceIds)
{
    m_endPointServiceIds = _endPointServiceIds;
    m_endPointServiceIdsHasBeenSet = true;
}

bool DescribeVpcEndPointServiceRequest::EndPointServiceIdsHasBeenSet() const
{
    return m_endPointServiceIdsHasBeenSet;
}

bool DescribeVpcEndPointServiceRequest::GetIsListAuthorizedEndPointService() const
{
    return m_isListAuthorizedEndPointService;
}

void DescribeVpcEndPointServiceRequest::SetIsListAuthorizedEndPointService(const bool& _isListAuthorizedEndPointService)
{
    m_isListAuthorizedEndPointService = _isListAuthorizedEndPointService;
    m_isListAuthorizedEndPointServiceHasBeenSet = true;
}

bool DescribeVpcEndPointServiceRequest::IsListAuthorizedEndPointServiceHasBeenSet() const
{
    return m_isListAuthorizedEndPointServiceHasBeenSet;
}

string DescribeVpcEndPointServiceRequest::GetIpAddressType() const
{
    return m_ipAddressType;
}

void DescribeVpcEndPointServiceRequest::SetIpAddressType(const string& _ipAddressType)
{
    m_ipAddressType = _ipAddressType;
    m_ipAddressTypeHasBeenSet = true;
}

bool DescribeVpcEndPointServiceRequest::IpAddressTypeHasBeenSet() const
{
    return m_ipAddressTypeHasBeenSet;
}


