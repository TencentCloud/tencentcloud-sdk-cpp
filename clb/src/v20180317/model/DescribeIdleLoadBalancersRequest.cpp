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

#include <tencentcloud/clb/v20180317/model/DescribeIdleLoadBalancersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DescribeIdleLoadBalancersRequest::DescribeIdleLoadBalancersRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_loadBalancerRegionHasBeenSet(false)
{
}

string DescribeIdleLoadBalancersRequest::ToJsonString() const
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

    if (m_loadBalancerRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeIdleLoadBalancersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeIdleLoadBalancersRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeIdleLoadBalancersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeIdleLoadBalancersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeIdleLoadBalancersRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeIdleLoadBalancersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeIdleLoadBalancersRequest::GetLoadBalancerRegion() const
{
    return m_loadBalancerRegion;
}

void DescribeIdleLoadBalancersRequest::SetLoadBalancerRegion(const string& _loadBalancerRegion)
{
    m_loadBalancerRegion = _loadBalancerRegion;
    m_loadBalancerRegionHasBeenSet = true;
}

bool DescribeIdleLoadBalancersRequest::LoadBalancerRegionHasBeenSet() const
{
    return m_loadBalancerRegionHasBeenSet;
}


