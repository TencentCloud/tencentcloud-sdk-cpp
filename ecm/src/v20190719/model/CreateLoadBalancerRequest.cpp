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

#include <tencentcloud/ecm/v20190719/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

CreateLoadBalancerRequest::CreateLoadBalancerRequest() :
    m_ecmRegionHasBeenSet(false),
    m_loadBalancerTypeHasBeenSet(false),
    m_vipIspHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_addressIPVersionHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

string CreateLoadBalancerRequest::ToJsonString() const
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

    if (m_loadBalancerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_vipIspHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipIsp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vipIsp.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_number, allocator);
    }

    if (m_internetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_securityGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroups.begin(); itr != m_securityGroups.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_addressIPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIPVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressIPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLoadBalancerRequest::GetEcmRegion() const
{
    return m_ecmRegion;
}

void CreateLoadBalancerRequest::SetEcmRegion(const string& _ecmRegion)
{
    m_ecmRegion = _ecmRegion;
    m_ecmRegionHasBeenSet = true;
}

bool CreateLoadBalancerRequest::EcmRegionHasBeenSet() const
{
    return m_ecmRegionHasBeenSet;
}

string CreateLoadBalancerRequest::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void CreateLoadBalancerRequest::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool CreateLoadBalancerRequest::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

string CreateLoadBalancerRequest::GetVipIsp() const
{
    return m_vipIsp;
}

void CreateLoadBalancerRequest::SetVipIsp(const string& _vipIsp)
{
    m_vipIsp = _vipIsp;
    m_vipIspHasBeenSet = true;
}

bool CreateLoadBalancerRequest::VipIspHasBeenSet() const
{
    return m_vipIspHasBeenSet;
}

string CreateLoadBalancerRequest::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void CreateLoadBalancerRequest::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool CreateLoadBalancerRequest::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

string CreateLoadBalancerRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateLoadBalancerRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateLoadBalancerRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t CreateLoadBalancerRequest::GetNumber() const
{
    return m_number;
}

void CreateLoadBalancerRequest::SetNumber(const int64_t& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool CreateLoadBalancerRequest::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

LoadBalancerInternetAccessible CreateLoadBalancerRequest::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void CreateLoadBalancerRequest::SetInternetAccessible(const LoadBalancerInternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool CreateLoadBalancerRequest::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

vector<TagInfo> CreateLoadBalancerRequest::GetTags() const
{
    return m_tags;
}

void CreateLoadBalancerRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateLoadBalancerRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> CreateLoadBalancerRequest::GetSecurityGroups() const
{
    return m_securityGroups;
}

void CreateLoadBalancerRequest::SetSecurityGroups(const vector<string>& _securityGroups)
{
    m_securityGroups = _securityGroups;
    m_securityGroupsHasBeenSet = true;
}

bool CreateLoadBalancerRequest::SecurityGroupsHasBeenSet() const
{
    return m_securityGroupsHasBeenSet;
}

string CreateLoadBalancerRequest::GetAddressIPVersion() const
{
    return m_addressIPVersion;
}

void CreateLoadBalancerRequest::SetAddressIPVersion(const string& _addressIPVersion)
{
    m_addressIPVersion = _addressIPVersion;
    m_addressIPVersionHasBeenSet = true;
}

bool CreateLoadBalancerRequest::AddressIPVersionHasBeenSet() const
{
    return m_addressIPVersionHasBeenSet;
}

string CreateLoadBalancerRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateLoadBalancerRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateLoadBalancerRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}


