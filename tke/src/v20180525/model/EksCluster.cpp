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

#include <tencentcloud/tke/v20180525/model/EksCluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

EksCluster::EksCluster() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_k8SVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterDescHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_serviceSubnetIdHasBeenSet(false),
    m_dnsServersHasBeenSet(false),
    m_needDeleteCbsHasBeenSet(false),
    m_enableVpcCoreDNSHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false)
{
}

CoreInternalOutcome EksCluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCluster.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCluster.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetIds") && !value["SubnetIds"].IsNull())
    {
        if (!value["SubnetIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EksCluster.SubnetIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetIds.push_back((*itr).GetString());
        }
        m_subnetIdsHasBeenSet = true;
    }

    if (value.HasMember("K8SVersion") && !value["K8SVersion"].IsNull())
    {
        if (!value["K8SVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCluster.K8SVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_k8SVersion = string(value["K8SVersion"].GetString());
        m_k8SVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCluster.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ClusterDesc") && !value["ClusterDesc"].IsNull())
    {
        if (!value["ClusterDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCluster.ClusterDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDesc = string(value["ClusterDesc"].GetString());
        m_clusterDescHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCluster.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ServiceSubnetId") && !value["ServiceSubnetId"].IsNull())
    {
        if (!value["ServiceSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCluster.ServiceSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceSubnetId = string(value["ServiceSubnetId"].GetString());
        m_serviceSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("DnsServers") && !value["DnsServers"].IsNull())
    {
        if (!value["DnsServers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EksCluster.DnsServers` is not array type"));

        const rapidjson::Value &tmpValue = value["DnsServers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DnsServerConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dnsServers.push_back(item);
        }
        m_dnsServersHasBeenSet = true;
    }

    if (value.HasMember("NeedDeleteCbs") && !value["NeedDeleteCbs"].IsNull())
    {
        if (!value["NeedDeleteCbs"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EksCluster.NeedDeleteCbs` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needDeleteCbs = value["NeedDeleteCbs"].GetBool();
        m_needDeleteCbsHasBeenSet = true;
    }

    if (value.HasMember("EnableVpcCoreDNS") && !value["EnableVpcCoreDNS"].IsNull())
    {
        if (!value["EnableVpcCoreDNS"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EksCluster.EnableVpcCoreDNS` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableVpcCoreDNS = value["EnableVpcCoreDNS"].GetBool();
        m_enableVpcCoreDNSHasBeenSet = true;
    }

    if (value.HasMember("TagSpecification") && !value["TagSpecification"].IsNull())
    {
        if (!value["TagSpecification"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EksCluster.TagSpecification` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSpecification"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagSpecification item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSpecification.push_back(item);
        }
        m_tagSpecificationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EksCluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_k8SVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8SVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_k8SVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dnsServers.begin(); itr != m_dnsServers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_needDeleteCbsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedDeleteCbs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needDeleteCbs, allocator);
    }

    if (m_enableVpcCoreDNSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableVpcCoreDNS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableVpcCoreDNS, allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string EksCluster::GetClusterId() const
{
    return m_clusterId;
}

void EksCluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool EksCluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string EksCluster::GetClusterName() const
{
    return m_clusterName;
}

void EksCluster::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool EksCluster::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string EksCluster::GetVpcId() const
{
    return m_vpcId;
}

void EksCluster::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool EksCluster::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> EksCluster::GetSubnetIds() const
{
    return m_subnetIds;
}

void EksCluster::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool EksCluster::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

string EksCluster::GetK8SVersion() const
{
    return m_k8SVersion;
}

void EksCluster::SetK8SVersion(const string& _k8SVersion)
{
    m_k8SVersion = _k8SVersion;
    m_k8SVersionHasBeenSet = true;
}

bool EksCluster::K8SVersionHasBeenSet() const
{
    return m_k8SVersionHasBeenSet;
}

string EksCluster::GetStatus() const
{
    return m_status;
}

void EksCluster::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EksCluster::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EksCluster::GetClusterDesc() const
{
    return m_clusterDesc;
}

void EksCluster::SetClusterDesc(const string& _clusterDesc)
{
    m_clusterDesc = _clusterDesc;
    m_clusterDescHasBeenSet = true;
}

bool EksCluster::ClusterDescHasBeenSet() const
{
    return m_clusterDescHasBeenSet;
}

string EksCluster::GetCreatedTime() const
{
    return m_createdTime;
}

void EksCluster::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool EksCluster::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string EksCluster::GetServiceSubnetId() const
{
    return m_serviceSubnetId;
}

void EksCluster::SetServiceSubnetId(const string& _serviceSubnetId)
{
    m_serviceSubnetId = _serviceSubnetId;
    m_serviceSubnetIdHasBeenSet = true;
}

bool EksCluster::ServiceSubnetIdHasBeenSet() const
{
    return m_serviceSubnetIdHasBeenSet;
}

vector<DnsServerConf> EksCluster::GetDnsServers() const
{
    return m_dnsServers;
}

void EksCluster::SetDnsServers(const vector<DnsServerConf>& _dnsServers)
{
    m_dnsServers = _dnsServers;
    m_dnsServersHasBeenSet = true;
}

bool EksCluster::DnsServersHasBeenSet() const
{
    return m_dnsServersHasBeenSet;
}

bool EksCluster::GetNeedDeleteCbs() const
{
    return m_needDeleteCbs;
}

void EksCluster::SetNeedDeleteCbs(const bool& _needDeleteCbs)
{
    m_needDeleteCbs = _needDeleteCbs;
    m_needDeleteCbsHasBeenSet = true;
}

bool EksCluster::NeedDeleteCbsHasBeenSet() const
{
    return m_needDeleteCbsHasBeenSet;
}

bool EksCluster::GetEnableVpcCoreDNS() const
{
    return m_enableVpcCoreDNS;
}

void EksCluster::SetEnableVpcCoreDNS(const bool& _enableVpcCoreDNS)
{
    m_enableVpcCoreDNS = _enableVpcCoreDNS;
    m_enableVpcCoreDNSHasBeenSet = true;
}

bool EksCluster::EnableVpcCoreDNSHasBeenSet() const
{
    return m_enableVpcCoreDNSHasBeenSet;
}

vector<TagSpecification> EksCluster::GetTagSpecification() const
{
    return m_tagSpecification;
}

void EksCluster::SetTagSpecification(const vector<TagSpecification>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool EksCluster::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

