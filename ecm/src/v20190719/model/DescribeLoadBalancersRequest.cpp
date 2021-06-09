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

#include <tencentcloud/ecm/v20190719/model/DescribeLoadBalancersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

DescribeLoadBalancersRequest::DescribeLoadBalancersRequest() :
    m_ecmRegionHasBeenSet(false),
    m_loadBalancerIdsHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_loadBalancerVipsHasBeenSet(false),
    m_backendPrivateIpsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_withBackendHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_securityGroupHasBeenSet(false)
{
}

string DescribeLoadBalancersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ecmRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EcmRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ecmRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerIds.begin(); itr != m_loadBalancerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerVipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerVips";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerVips.begin(); itr != m_loadBalancerVips.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backendPrivateIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackendPrivateIps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backendPrivateIps.begin(); itr != m_backendPrivateIps.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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

    if (m_withBackendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithBackend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withBackend, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
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

    if (m_securityGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityGroup.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLoadBalancersRequest::GetEcmRegion() const
{
    return m_ecmRegion;
}

void DescribeLoadBalancersRequest::SetEcmRegion(const string& _ecmRegion)
{
    m_ecmRegion = _ecmRegion;
    m_ecmRegionHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::EcmRegionHasBeenSet() const
{
    return m_ecmRegionHasBeenSet;
}

vector<string> DescribeLoadBalancersRequest::GetLoadBalancerIds() const
{
    return m_loadBalancerIds;
}

void DescribeLoadBalancersRequest::SetLoadBalancerIds(const vector<string>& _loadBalancerIds)
{
    m_loadBalancerIds = _loadBalancerIds;
    m_loadBalancerIdsHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::LoadBalancerIdsHasBeenSet() const
{
    return m_loadBalancerIdsHasBeenSet;
}

string DescribeLoadBalancersRequest::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void DescribeLoadBalancersRequest::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

vector<string> DescribeLoadBalancersRequest::GetLoadBalancerVips() const
{
    return m_loadBalancerVips;
}

void DescribeLoadBalancersRequest::SetLoadBalancerVips(const vector<string>& _loadBalancerVips)
{
    m_loadBalancerVips = _loadBalancerVips;
    m_loadBalancerVipsHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::LoadBalancerVipsHasBeenSet() const
{
    return m_loadBalancerVipsHasBeenSet;
}

vector<string> DescribeLoadBalancersRequest::GetBackendPrivateIps() const
{
    return m_backendPrivateIps;
}

void DescribeLoadBalancersRequest::SetBackendPrivateIps(const vector<string>& _backendPrivateIps)
{
    m_backendPrivateIps = _backendPrivateIps;
    m_backendPrivateIpsHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::BackendPrivateIpsHasBeenSet() const
{
    return m_backendPrivateIpsHasBeenSet;
}

int64_t DescribeLoadBalancersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeLoadBalancersRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeLoadBalancersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeLoadBalancersRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeLoadBalancersRequest::GetWithBackend() const
{
    return m_withBackend;
}

void DescribeLoadBalancersRequest::SetWithBackend(const int64_t& _withBackend)
{
    m_withBackend = _withBackend;
    m_withBackendHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::WithBackendHasBeenSet() const
{
    return m_withBackendHasBeenSet;
}

string DescribeLoadBalancersRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeLoadBalancersRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<Filter> DescribeLoadBalancersRequest::GetFilters() const
{
    return m_filters;
}

void DescribeLoadBalancersRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeLoadBalancersRequest::GetSecurityGroup() const
{
    return m_securityGroup;
}

void DescribeLoadBalancersRequest::SetSecurityGroup(const string& _securityGroup)
{
    m_securityGroup = _securityGroup;
    m_securityGroupHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::SecurityGroupHasBeenSet() const
{
    return m_securityGroupHasBeenSet;
}


