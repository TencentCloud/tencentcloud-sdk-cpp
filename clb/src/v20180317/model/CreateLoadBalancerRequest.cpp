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

#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

CreateLoadBalancerRequest::CreateLoadBalancerRequest() :
    m_loadBalancerTypeHasBeenSet(false),
    m_forwardHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_addressIPVersionHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_masterZoneIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_vipIspHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_bandwidthPackageIdHasBeenSet(false),
    m_exclusiveClusterHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_snatProHasBeenSet(false),
    m_snatIpsHasBeenSet(false),
    m_clusterTagHasBeenSet(false),
    m_slaveZoneIdHasBeenSet(false),
    m_eipAddressIdHasBeenSet(false)
{
}

string CreateLoadBalancerRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Forward";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forward, allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_addressIPVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressIPVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_addressIPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_number, allocator);
    }

    if (m_masterZoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_masterZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_internetAccessibleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_vipIspHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VipIsp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vipIsp.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_vipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthPackageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BandwidthPackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_bandwidthPackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_exclusiveClusterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExclusiveCluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_exclusiveCluster.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_snatProHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SnatPro";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_snatPro, allocator);
    }

    if (m_snatIpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SnatIps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_snatIps.begin(); itr != m_snatIps.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_clusterTagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterTag.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveZoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SlaveZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_slaveZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_eipAddressIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EipAddressId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_eipAddressId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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

int64_t CreateLoadBalancerRequest::GetForward() const
{
    return m_forward;
}

void CreateLoadBalancerRequest::SetForward(const int64_t& _forward)
{
    m_forward = _forward;
    m_forwardHasBeenSet = true;
}

bool CreateLoadBalancerRequest::ForwardHasBeenSet() const
{
    return m_forwardHasBeenSet;
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

int64_t CreateLoadBalancerRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateLoadBalancerRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateLoadBalancerRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
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

uint64_t CreateLoadBalancerRequest::GetNumber() const
{
    return m_number;
}

void CreateLoadBalancerRequest::SetNumber(const uint64_t& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool CreateLoadBalancerRequest::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string CreateLoadBalancerRequest::GetMasterZoneId() const
{
    return m_masterZoneId;
}

void CreateLoadBalancerRequest::SetMasterZoneId(const string& _masterZoneId)
{
    m_masterZoneId = _masterZoneId;
    m_masterZoneIdHasBeenSet = true;
}

bool CreateLoadBalancerRequest::MasterZoneIdHasBeenSet() const
{
    return m_masterZoneIdHasBeenSet;
}

string CreateLoadBalancerRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateLoadBalancerRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateLoadBalancerRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

InternetAccessible CreateLoadBalancerRequest::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void CreateLoadBalancerRequest::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool CreateLoadBalancerRequest::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
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

string CreateLoadBalancerRequest::GetVip() const
{
    return m_vip;
}

void CreateLoadBalancerRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CreateLoadBalancerRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string CreateLoadBalancerRequest::GetBandwidthPackageId() const
{
    return m_bandwidthPackageId;
}

void CreateLoadBalancerRequest::SetBandwidthPackageId(const string& _bandwidthPackageId)
{
    m_bandwidthPackageId = _bandwidthPackageId;
    m_bandwidthPackageIdHasBeenSet = true;
}

bool CreateLoadBalancerRequest::BandwidthPackageIdHasBeenSet() const
{
    return m_bandwidthPackageIdHasBeenSet;
}

ExclusiveCluster CreateLoadBalancerRequest::GetExclusiveCluster() const
{
    return m_exclusiveCluster;
}

void CreateLoadBalancerRequest::SetExclusiveCluster(const ExclusiveCluster& _exclusiveCluster)
{
    m_exclusiveCluster = _exclusiveCluster;
    m_exclusiveClusterHasBeenSet = true;
}

bool CreateLoadBalancerRequest::ExclusiveClusterHasBeenSet() const
{
    return m_exclusiveClusterHasBeenSet;
}

string CreateLoadBalancerRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateLoadBalancerRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateLoadBalancerRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

bool CreateLoadBalancerRequest::GetSnatPro() const
{
    return m_snatPro;
}

void CreateLoadBalancerRequest::SetSnatPro(const bool& _snatPro)
{
    m_snatPro = _snatPro;
    m_snatProHasBeenSet = true;
}

bool CreateLoadBalancerRequest::SnatProHasBeenSet() const
{
    return m_snatProHasBeenSet;
}

vector<SnatIp> CreateLoadBalancerRequest::GetSnatIps() const
{
    return m_snatIps;
}

void CreateLoadBalancerRequest::SetSnatIps(const vector<SnatIp>& _snatIps)
{
    m_snatIps = _snatIps;
    m_snatIpsHasBeenSet = true;
}

bool CreateLoadBalancerRequest::SnatIpsHasBeenSet() const
{
    return m_snatIpsHasBeenSet;
}

string CreateLoadBalancerRequest::GetClusterTag() const
{
    return m_clusterTag;
}

void CreateLoadBalancerRequest::SetClusterTag(const string& _clusterTag)
{
    m_clusterTag = _clusterTag;
    m_clusterTagHasBeenSet = true;
}

bool CreateLoadBalancerRequest::ClusterTagHasBeenSet() const
{
    return m_clusterTagHasBeenSet;
}

string CreateLoadBalancerRequest::GetSlaveZoneId() const
{
    return m_slaveZoneId;
}

void CreateLoadBalancerRequest::SetSlaveZoneId(const string& _slaveZoneId)
{
    m_slaveZoneId = _slaveZoneId;
    m_slaveZoneIdHasBeenSet = true;
}

bool CreateLoadBalancerRequest::SlaveZoneIdHasBeenSet() const
{
    return m_slaveZoneIdHasBeenSet;
}

string CreateLoadBalancerRequest::GetEipAddressId() const
{
    return m_eipAddressId;
}

void CreateLoadBalancerRequest::SetEipAddressId(const string& _eipAddressId)
{
    m_eipAddressId = _eipAddressId;
    m_eipAddressIdHasBeenSet = true;
}

bool CreateLoadBalancerRequest::EipAddressIdHasBeenSet() const
{
    return m_eipAddressIdHasBeenSet;
}


