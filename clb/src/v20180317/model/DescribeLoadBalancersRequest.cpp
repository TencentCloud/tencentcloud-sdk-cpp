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

#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DescribeLoadBalancersRequest::DescribeLoadBalancersRequest() :
    m_loadBalancerIdsHasBeenSet(false),
    m_loadBalancerTypeHasBeenSet(false),
    m_forwardHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_loadBalancerVipsHasBeenSet(false),
    m_backendPublicIpsHasBeenSet(false),
    m_backendPrivateIpsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_withRsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_masterZoneHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_additionalFieldsHasBeenSet(false)
{
}

string DescribeLoadBalancersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_loadBalancerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Forward";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forward, allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
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

    if (m_backendPublicIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackendPublicIps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backendPublicIps.begin(); itr != m_backendPublicIps.end(); ++itr)
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

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderType, allocator);
    }

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_withRsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithRs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withRs, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_masterZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_masterZone.c_str(), allocator).Move(), allocator);
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

    if (m_additionalFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_additionalFields.begin(); itr != m_additionalFields.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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

string DescribeLoadBalancersRequest::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void DescribeLoadBalancersRequest::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

int64_t DescribeLoadBalancersRequest::GetForward() const
{
    return m_forward;
}

void DescribeLoadBalancersRequest::SetForward(const int64_t& _forward)
{
    m_forward = _forward;
    m_forwardHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::ForwardHasBeenSet() const
{
    return m_forwardHasBeenSet;
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

string DescribeLoadBalancersRequest::GetDomain() const
{
    return m_domain;
}

void DescribeLoadBalancersRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
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

vector<string> DescribeLoadBalancersRequest::GetBackendPublicIps() const
{
    return m_backendPublicIps;
}

void DescribeLoadBalancersRequest::SetBackendPublicIps(const vector<string>& _backendPublicIps)
{
    m_backendPublicIps = _backendPublicIps;
    m_backendPublicIpsHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::BackendPublicIpsHasBeenSet() const
{
    return m_backendPublicIpsHasBeenSet;
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

string DescribeLoadBalancersRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeLoadBalancersRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

int64_t DescribeLoadBalancersRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeLoadBalancersRequest::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string DescribeLoadBalancersRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeLoadBalancersRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

int64_t DescribeLoadBalancersRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeLoadBalancersRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeLoadBalancersRequest::GetWithRs() const
{
    return m_withRs;
}

void DescribeLoadBalancersRequest::SetWithRs(const int64_t& _withRs)
{
    m_withRs = _withRs;
    m_withRsHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::WithRsHasBeenSet() const
{
    return m_withRsHasBeenSet;
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

string DescribeLoadBalancersRequest::GetMasterZone() const
{
    return m_masterZone;
}

void DescribeLoadBalancersRequest::SetMasterZone(const string& _masterZone)
{
    m_masterZone = _masterZone;
    m_masterZoneHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::MasterZoneHasBeenSet() const
{
    return m_masterZoneHasBeenSet;
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

vector<string> DescribeLoadBalancersRequest::GetAdditionalFields() const
{
    return m_additionalFields;
}

void DescribeLoadBalancersRequest::SetAdditionalFields(const vector<string>& _additionalFields)
{
    m_additionalFields = _additionalFields;
    m_additionalFieldsHasBeenSet = true;
}

bool DescribeLoadBalancersRequest::AdditionalFieldsHasBeenSet() const
{
    return m_additionalFieldsHasBeenSet;
}


