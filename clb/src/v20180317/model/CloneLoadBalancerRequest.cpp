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

#include <tencentcloud/clb/v20180317/model/CloneLoadBalancerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CloneLoadBalancerRequest::CloneLoadBalancerRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_masterZoneIdHasBeenSet(false),
    m_slaveZoneIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_vipIspHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_exclusiveClusterHasBeenSet(false),
    m_bandwidthPackageIdHasBeenSet(false),
    m_snatProHasBeenSet(false),
    m_snatIpsHasBeenSet(false),
    m_clusterIdsHasBeenSet(false),
    m_slaTypeHasBeenSet(false),
    m_clusterTagHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_eipAddressIdHasBeenSet(false)
{
}

string CloneLoadBalancerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_masterZoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_masterZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveZoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_slaveZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_internetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_vipIspHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipIsp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vipIsp.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
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

    if (m_exclusiveClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveCluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_exclusiveCluster.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_bandwidthPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bandwidthPackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_snatProHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnatPro";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_snatPro, allocator);
    }

    if (m_snatIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnatIps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_snatIps.begin(); itr != m_snatIps.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_clusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterIds.begin(); itr != m_clusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_slaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_slaType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterTag.c_str(), allocator).Move(), allocator);
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eipAddressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipAddressId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eipAddressId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CloneLoadBalancerRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void CloneLoadBalancerRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool CloneLoadBalancerRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string CloneLoadBalancerRequest::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void CloneLoadBalancerRequest::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool CloneLoadBalancerRequest::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

int64_t CloneLoadBalancerRequest::GetProjectId() const
{
    return m_projectId;
}

void CloneLoadBalancerRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CloneLoadBalancerRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CloneLoadBalancerRequest::GetMasterZoneId() const
{
    return m_masterZoneId;
}

void CloneLoadBalancerRequest::SetMasterZoneId(const string& _masterZoneId)
{
    m_masterZoneId = _masterZoneId;
    m_masterZoneIdHasBeenSet = true;
}

bool CloneLoadBalancerRequest::MasterZoneIdHasBeenSet() const
{
    return m_masterZoneIdHasBeenSet;
}

string CloneLoadBalancerRequest::GetSlaveZoneId() const
{
    return m_slaveZoneId;
}

void CloneLoadBalancerRequest::SetSlaveZoneId(const string& _slaveZoneId)
{
    m_slaveZoneId = _slaveZoneId;
    m_slaveZoneIdHasBeenSet = true;
}

bool CloneLoadBalancerRequest::SlaveZoneIdHasBeenSet() const
{
    return m_slaveZoneIdHasBeenSet;
}

string CloneLoadBalancerRequest::GetZoneId() const
{
    return m_zoneId;
}

void CloneLoadBalancerRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CloneLoadBalancerRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

InternetAccessible CloneLoadBalancerRequest::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void CloneLoadBalancerRequest::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool CloneLoadBalancerRequest::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

string CloneLoadBalancerRequest::GetVipIsp() const
{
    return m_vipIsp;
}

void CloneLoadBalancerRequest::SetVipIsp(const string& _vipIsp)
{
    m_vipIsp = _vipIsp;
    m_vipIspHasBeenSet = true;
}

bool CloneLoadBalancerRequest::VipIspHasBeenSet() const
{
    return m_vipIspHasBeenSet;
}

string CloneLoadBalancerRequest::GetVip() const
{
    return m_vip;
}

void CloneLoadBalancerRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CloneLoadBalancerRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

vector<TagInfo> CloneLoadBalancerRequest::GetTags() const
{
    return m_tags;
}

void CloneLoadBalancerRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CloneLoadBalancerRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

ExclusiveCluster CloneLoadBalancerRequest::GetExclusiveCluster() const
{
    return m_exclusiveCluster;
}

void CloneLoadBalancerRequest::SetExclusiveCluster(const ExclusiveCluster& _exclusiveCluster)
{
    m_exclusiveCluster = _exclusiveCluster;
    m_exclusiveClusterHasBeenSet = true;
}

bool CloneLoadBalancerRequest::ExclusiveClusterHasBeenSet() const
{
    return m_exclusiveClusterHasBeenSet;
}

string CloneLoadBalancerRequest::GetBandwidthPackageId() const
{
    return m_bandwidthPackageId;
}

void CloneLoadBalancerRequest::SetBandwidthPackageId(const string& _bandwidthPackageId)
{
    m_bandwidthPackageId = _bandwidthPackageId;
    m_bandwidthPackageIdHasBeenSet = true;
}

bool CloneLoadBalancerRequest::BandwidthPackageIdHasBeenSet() const
{
    return m_bandwidthPackageIdHasBeenSet;
}

bool CloneLoadBalancerRequest::GetSnatPro() const
{
    return m_snatPro;
}

void CloneLoadBalancerRequest::SetSnatPro(const bool& _snatPro)
{
    m_snatPro = _snatPro;
    m_snatProHasBeenSet = true;
}

bool CloneLoadBalancerRequest::SnatProHasBeenSet() const
{
    return m_snatProHasBeenSet;
}

vector<SnatIp> CloneLoadBalancerRequest::GetSnatIps() const
{
    return m_snatIps;
}

void CloneLoadBalancerRequest::SetSnatIps(const vector<SnatIp>& _snatIps)
{
    m_snatIps = _snatIps;
    m_snatIpsHasBeenSet = true;
}

bool CloneLoadBalancerRequest::SnatIpsHasBeenSet() const
{
    return m_snatIpsHasBeenSet;
}

vector<string> CloneLoadBalancerRequest::GetClusterIds() const
{
    return m_clusterIds;
}

void CloneLoadBalancerRequest::SetClusterIds(const vector<string>& _clusterIds)
{
    m_clusterIds = _clusterIds;
    m_clusterIdsHasBeenSet = true;
}

bool CloneLoadBalancerRequest::ClusterIdsHasBeenSet() const
{
    return m_clusterIdsHasBeenSet;
}

string CloneLoadBalancerRequest::GetSlaType() const
{
    return m_slaType;
}

void CloneLoadBalancerRequest::SetSlaType(const string& _slaType)
{
    m_slaType = _slaType;
    m_slaTypeHasBeenSet = true;
}

bool CloneLoadBalancerRequest::SlaTypeHasBeenSet() const
{
    return m_slaTypeHasBeenSet;
}

string CloneLoadBalancerRequest::GetClusterTag() const
{
    return m_clusterTag;
}

void CloneLoadBalancerRequest::SetClusterTag(const string& _clusterTag)
{
    m_clusterTag = _clusterTag;
    m_clusterTagHasBeenSet = true;
}

bool CloneLoadBalancerRequest::ClusterTagHasBeenSet() const
{
    return m_clusterTagHasBeenSet;
}

vector<string> CloneLoadBalancerRequest::GetZones() const
{
    return m_zones;
}

void CloneLoadBalancerRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool CloneLoadBalancerRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

string CloneLoadBalancerRequest::GetEipAddressId() const
{
    return m_eipAddressId;
}

void CloneLoadBalancerRequest::SetEipAddressId(const string& _eipAddressId)
{
    m_eipAddressId = _eipAddressId;
    m_eipAddressIdHasBeenSet = true;
}

bool CloneLoadBalancerRequest::EipAddressIdHasBeenSet() const
{
    return m_eipAddressIdHasBeenSet;
}


