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

#include <tencentcloud/tke/v20180525/model/ClusterNetworkSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClusterNetworkSettings::ClusterNetworkSettings() :
    m_clusterCIDRHasBeenSet(false),
    m_ignoreClusterCIDRConflictHasBeenSet(false),
    m_maxNodePodNumHasBeenSet(false),
    m_maxClusterServiceNumHasBeenSet(false),
    m_ipvsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_cniHasBeenSet(false),
    m_kubeProxyModeHasBeenSet(false),
    m_serviceCIDRHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_ignoreServiceCIDRConflictHasBeenSet(false),
    m_isDualStackHasBeenSet(false),
    m_ipv6ServiceCIDRHasBeenSet(false),
    m_ciliumModeHasBeenSet(false)
{
}

CoreInternalOutcome ClusterNetworkSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterCIDR") && !value["ClusterCIDR"].IsNull())
    {
        if (!value["ClusterCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNetworkSettings.ClusterCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterCIDR = string(value["ClusterCIDR"].GetString());
        m_clusterCIDRHasBeenSet = true;
    }

    if (value.HasMember("IgnoreClusterCIDRConflict") && !value["IgnoreClusterCIDRConflict"].IsNull())
    {
        if (!value["IgnoreClusterCIDRConflict"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNetworkSettings.IgnoreClusterCIDRConflict` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreClusterCIDRConflict = value["IgnoreClusterCIDRConflict"].GetBool();
        m_ignoreClusterCIDRConflictHasBeenSet = true;
    }

    if (value.HasMember("MaxNodePodNum") && !value["MaxNodePodNum"].IsNull())
    {
        if (!value["MaxNodePodNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNetworkSettings.MaxNodePodNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNodePodNum = value["MaxNodePodNum"].GetUint64();
        m_maxNodePodNumHasBeenSet = true;
    }

    if (value.HasMember("MaxClusterServiceNum") && !value["MaxClusterServiceNum"].IsNull())
    {
        if (!value["MaxClusterServiceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNetworkSettings.MaxClusterServiceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxClusterServiceNum = value["MaxClusterServiceNum"].GetUint64();
        m_maxClusterServiceNumHasBeenSet = true;
    }

    if (value.HasMember("Ipvs") && !value["Ipvs"].IsNull())
    {
        if (!value["Ipvs"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNetworkSettings.Ipvs` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ipvs = value["Ipvs"].GetBool();
        m_ipvsHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNetworkSettings.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Cni") && !value["Cni"].IsNull())
    {
        if (!value["Cni"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNetworkSettings.Cni` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cni = value["Cni"].GetBool();
        m_cniHasBeenSet = true;
    }

    if (value.HasMember("KubeProxyMode") && !value["KubeProxyMode"].IsNull())
    {
        if (!value["KubeProxyMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNetworkSettings.KubeProxyMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kubeProxyMode = string(value["KubeProxyMode"].GetString());
        m_kubeProxyModeHasBeenSet = true;
    }

    if (value.HasMember("ServiceCIDR") && !value["ServiceCIDR"].IsNull())
    {
        if (!value["ServiceCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNetworkSettings.ServiceCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCIDR = string(value["ServiceCIDR"].GetString());
        m_serviceCIDRHasBeenSet = true;
    }

    if (value.HasMember("Subnets") && !value["Subnets"].IsNull())
    {
        if (!value["Subnets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterNetworkSettings.Subnets` is not array type"));

        const rapidjson::Value &tmpValue = value["Subnets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnets.push_back((*itr).GetString());
        }
        m_subnetsHasBeenSet = true;
    }

    if (value.HasMember("IgnoreServiceCIDRConflict") && !value["IgnoreServiceCIDRConflict"].IsNull())
    {
        if (!value["IgnoreServiceCIDRConflict"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNetworkSettings.IgnoreServiceCIDRConflict` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreServiceCIDRConflict = value["IgnoreServiceCIDRConflict"].GetBool();
        m_ignoreServiceCIDRConflictHasBeenSet = true;
    }

    if (value.HasMember("IsDualStack") && !value["IsDualStack"].IsNull())
    {
        if (!value["IsDualStack"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNetworkSettings.IsDualStack` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDualStack = value["IsDualStack"].GetBool();
        m_isDualStackHasBeenSet = true;
    }

    if (value.HasMember("Ipv6ServiceCIDR") && !value["Ipv6ServiceCIDR"].IsNull())
    {
        if (!value["Ipv6ServiceCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNetworkSettings.Ipv6ServiceCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6ServiceCIDR = string(value["Ipv6ServiceCIDR"].GetString());
        m_ipv6ServiceCIDRHasBeenSet = true;
    }

    if (value.HasMember("CiliumMode") && !value["CiliumMode"].IsNull())
    {
        if (!value["CiliumMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNetworkSettings.CiliumMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ciliumMode = string(value["CiliumMode"].GetString());
        m_ciliumModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterNetworkSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreClusterCIDRConflictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreClusterCIDRConflict";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoreClusterCIDRConflict, allocator);
    }

    if (m_maxNodePodNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNodePodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNodePodNum, allocator);
    }

    if (m_maxClusterServiceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxClusterServiceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxClusterServiceNum, allocator);
    }

    if (m_ipvsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipvs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipvs, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_cniHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cni";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cni, allocator);
    }

    if (m_kubeProxyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeProxyMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kubeProxyMode.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subnets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnets.begin(); itr != m_subnets.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ignoreServiceCIDRConflictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreServiceCIDRConflict";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoreServiceCIDRConflict, allocator);
    }

    if (m_isDualStackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDualStack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDualStack, allocator);
    }

    if (m_ipv6ServiceCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6ServiceCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6ServiceCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_ciliumModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CiliumMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ciliumMode.c_str(), allocator).Move(), allocator);
    }

}


string ClusterNetworkSettings::GetClusterCIDR() const
{
    return m_clusterCIDR;
}

void ClusterNetworkSettings::SetClusterCIDR(const string& _clusterCIDR)
{
    m_clusterCIDR = _clusterCIDR;
    m_clusterCIDRHasBeenSet = true;
}

bool ClusterNetworkSettings::ClusterCIDRHasBeenSet() const
{
    return m_clusterCIDRHasBeenSet;
}

bool ClusterNetworkSettings::GetIgnoreClusterCIDRConflict() const
{
    return m_ignoreClusterCIDRConflict;
}

void ClusterNetworkSettings::SetIgnoreClusterCIDRConflict(const bool& _ignoreClusterCIDRConflict)
{
    m_ignoreClusterCIDRConflict = _ignoreClusterCIDRConflict;
    m_ignoreClusterCIDRConflictHasBeenSet = true;
}

bool ClusterNetworkSettings::IgnoreClusterCIDRConflictHasBeenSet() const
{
    return m_ignoreClusterCIDRConflictHasBeenSet;
}

uint64_t ClusterNetworkSettings::GetMaxNodePodNum() const
{
    return m_maxNodePodNum;
}

void ClusterNetworkSettings::SetMaxNodePodNum(const uint64_t& _maxNodePodNum)
{
    m_maxNodePodNum = _maxNodePodNum;
    m_maxNodePodNumHasBeenSet = true;
}

bool ClusterNetworkSettings::MaxNodePodNumHasBeenSet() const
{
    return m_maxNodePodNumHasBeenSet;
}

uint64_t ClusterNetworkSettings::GetMaxClusterServiceNum() const
{
    return m_maxClusterServiceNum;
}

void ClusterNetworkSettings::SetMaxClusterServiceNum(const uint64_t& _maxClusterServiceNum)
{
    m_maxClusterServiceNum = _maxClusterServiceNum;
    m_maxClusterServiceNumHasBeenSet = true;
}

bool ClusterNetworkSettings::MaxClusterServiceNumHasBeenSet() const
{
    return m_maxClusterServiceNumHasBeenSet;
}

bool ClusterNetworkSettings::GetIpvs() const
{
    return m_ipvs;
}

void ClusterNetworkSettings::SetIpvs(const bool& _ipvs)
{
    m_ipvs = _ipvs;
    m_ipvsHasBeenSet = true;
}

bool ClusterNetworkSettings::IpvsHasBeenSet() const
{
    return m_ipvsHasBeenSet;
}

string ClusterNetworkSettings::GetVpcId() const
{
    return m_vpcId;
}

void ClusterNetworkSettings::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ClusterNetworkSettings::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

bool ClusterNetworkSettings::GetCni() const
{
    return m_cni;
}

void ClusterNetworkSettings::SetCni(const bool& _cni)
{
    m_cni = _cni;
    m_cniHasBeenSet = true;
}

bool ClusterNetworkSettings::CniHasBeenSet() const
{
    return m_cniHasBeenSet;
}

string ClusterNetworkSettings::GetKubeProxyMode() const
{
    return m_kubeProxyMode;
}

void ClusterNetworkSettings::SetKubeProxyMode(const string& _kubeProxyMode)
{
    m_kubeProxyMode = _kubeProxyMode;
    m_kubeProxyModeHasBeenSet = true;
}

bool ClusterNetworkSettings::KubeProxyModeHasBeenSet() const
{
    return m_kubeProxyModeHasBeenSet;
}

string ClusterNetworkSettings::GetServiceCIDR() const
{
    return m_serviceCIDR;
}

void ClusterNetworkSettings::SetServiceCIDR(const string& _serviceCIDR)
{
    m_serviceCIDR = _serviceCIDR;
    m_serviceCIDRHasBeenSet = true;
}

bool ClusterNetworkSettings::ServiceCIDRHasBeenSet() const
{
    return m_serviceCIDRHasBeenSet;
}

vector<string> ClusterNetworkSettings::GetSubnets() const
{
    return m_subnets;
}

void ClusterNetworkSettings::SetSubnets(const vector<string>& _subnets)
{
    m_subnets = _subnets;
    m_subnetsHasBeenSet = true;
}

bool ClusterNetworkSettings::SubnetsHasBeenSet() const
{
    return m_subnetsHasBeenSet;
}

bool ClusterNetworkSettings::GetIgnoreServiceCIDRConflict() const
{
    return m_ignoreServiceCIDRConflict;
}

void ClusterNetworkSettings::SetIgnoreServiceCIDRConflict(const bool& _ignoreServiceCIDRConflict)
{
    m_ignoreServiceCIDRConflict = _ignoreServiceCIDRConflict;
    m_ignoreServiceCIDRConflictHasBeenSet = true;
}

bool ClusterNetworkSettings::IgnoreServiceCIDRConflictHasBeenSet() const
{
    return m_ignoreServiceCIDRConflictHasBeenSet;
}

bool ClusterNetworkSettings::GetIsDualStack() const
{
    return m_isDualStack;
}

void ClusterNetworkSettings::SetIsDualStack(const bool& _isDualStack)
{
    m_isDualStack = _isDualStack;
    m_isDualStackHasBeenSet = true;
}

bool ClusterNetworkSettings::IsDualStackHasBeenSet() const
{
    return m_isDualStackHasBeenSet;
}

string ClusterNetworkSettings::GetIpv6ServiceCIDR() const
{
    return m_ipv6ServiceCIDR;
}

void ClusterNetworkSettings::SetIpv6ServiceCIDR(const string& _ipv6ServiceCIDR)
{
    m_ipv6ServiceCIDR = _ipv6ServiceCIDR;
    m_ipv6ServiceCIDRHasBeenSet = true;
}

bool ClusterNetworkSettings::Ipv6ServiceCIDRHasBeenSet() const
{
    return m_ipv6ServiceCIDRHasBeenSet;
}

string ClusterNetworkSettings::GetCiliumMode() const
{
    return m_ciliumMode;
}

void ClusterNetworkSettings::SetCiliumMode(const string& _ciliumMode)
{
    m_ciliumMode = _ciliumMode;
    m_ciliumModeHasBeenSet = true;
}

bool ClusterNetworkSettings::CiliumModeHasBeenSet() const
{
    return m_ciliumModeHasBeenSet;
}

