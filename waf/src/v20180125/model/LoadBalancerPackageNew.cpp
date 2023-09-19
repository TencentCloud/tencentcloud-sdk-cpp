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

#include <tencentcloud/waf/v20180125/model/LoadBalancerPackageNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LoadBalancerPackageNew::LoadBalancerPackageNew() :
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_numericalVpcIdHasBeenSet(false),
    m_loadBalancerTypeHasBeenSet(false),
    m_loadBalancerDomainHasBeenSet(false)
{
}

CoreInternalOutcome LoadBalancerPackageNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerPackageNew.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerPackageNew.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerPackageNew.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerName") && !value["LoadBalancerName"].IsNull())
    {
        if (!value["LoadBalancerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerPackageNew.LoadBalancerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerName = string(value["LoadBalancerName"].GetString());
        m_loadBalancerNameHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerPackageNew.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerPackageNew.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerPackageNew.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerPackageNew.Vport` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetUint64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerPackageNew.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("NumericalVpcId") && !value["NumericalVpcId"].IsNull())
    {
        if (!value["NumericalVpcId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerPackageNew.NumericalVpcId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numericalVpcId = value["NumericalVpcId"].GetInt64();
        m_numericalVpcIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerType") && !value["LoadBalancerType"].IsNull())
    {
        if (!value["LoadBalancerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerPackageNew.LoadBalancerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerType = string(value["LoadBalancerType"].GetString());
        m_loadBalancerTypeHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerDomain") && !value["LoadBalancerDomain"].IsNull())
    {
        if (!value["LoadBalancerDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerPackageNew.LoadBalancerDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerDomain = string(value["LoadBalancerDomain"].GetString());
        m_loadBalancerDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadBalancerPackageNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_numericalVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumericalVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numericalVpcId, allocator);
    }

    if (m_loadBalancerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerDomain.c_str(), allocator).Move(), allocator);
    }

}


string LoadBalancerPackageNew::GetListenerId() const
{
    return m_listenerId;
}

void LoadBalancerPackageNew::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool LoadBalancerPackageNew::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string LoadBalancerPackageNew::GetListenerName() const
{
    return m_listenerName;
}

void LoadBalancerPackageNew::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool LoadBalancerPackageNew::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

string LoadBalancerPackageNew::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void LoadBalancerPackageNew::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool LoadBalancerPackageNew::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string LoadBalancerPackageNew::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void LoadBalancerPackageNew::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool LoadBalancerPackageNew::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

string LoadBalancerPackageNew::GetProtocol() const
{
    return m_protocol;
}

void LoadBalancerPackageNew::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool LoadBalancerPackageNew::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string LoadBalancerPackageNew::GetRegion() const
{
    return m_region;
}

void LoadBalancerPackageNew::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool LoadBalancerPackageNew::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string LoadBalancerPackageNew::GetVip() const
{
    return m_vip;
}

void LoadBalancerPackageNew::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool LoadBalancerPackageNew::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

uint64_t LoadBalancerPackageNew::GetVport() const
{
    return m_vport;
}

void LoadBalancerPackageNew::SetVport(const uint64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool LoadBalancerPackageNew::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string LoadBalancerPackageNew::GetZone() const
{
    return m_zone;
}

void LoadBalancerPackageNew::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool LoadBalancerPackageNew::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t LoadBalancerPackageNew::GetNumericalVpcId() const
{
    return m_numericalVpcId;
}

void LoadBalancerPackageNew::SetNumericalVpcId(const int64_t& _numericalVpcId)
{
    m_numericalVpcId = _numericalVpcId;
    m_numericalVpcIdHasBeenSet = true;
}

bool LoadBalancerPackageNew::NumericalVpcIdHasBeenSet() const
{
    return m_numericalVpcIdHasBeenSet;
}

string LoadBalancerPackageNew::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void LoadBalancerPackageNew::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool LoadBalancerPackageNew::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

string LoadBalancerPackageNew::GetLoadBalancerDomain() const
{
    return m_loadBalancerDomain;
}

void LoadBalancerPackageNew::SetLoadBalancerDomain(const string& _loadBalancerDomain)
{
    m_loadBalancerDomain = _loadBalancerDomain;
    m_loadBalancerDomainHasBeenSet = true;
}

bool LoadBalancerPackageNew::LoadBalancerDomainHasBeenSet() const
{
    return m_loadBalancerDomainHasBeenSet;
}

