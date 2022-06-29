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

#include <tencentcloud/tke/v20180525/model/CreateEKSClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CreateEKSClusterRequest::CreateEKSClusterRequest() :
    m_k8SVersionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_clusterDescHasBeenSet(false),
    m_serviceSubnetIdHasBeenSet(false),
    m_dnsServersHasBeenSet(false),
    m_extraParamHasBeenSet(false),
    m_enableVpcCoreDNSHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_subnetInfosHasBeenSet(false)
{
}

string CreateEKSClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_k8SVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8SVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_k8SVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsServers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dnsServers.begin(); itr != m_dnsServers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_extraParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraParam.c_str(), allocator).Move(), allocator);
    }

    if (m_enableVpcCoreDNSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableVpcCoreDNS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableVpcCoreDNS, allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_subnetInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subnetInfos.begin(); itr != m_subnetInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEKSClusterRequest::GetK8SVersion() const
{
    return m_k8SVersion;
}

void CreateEKSClusterRequest::SetK8SVersion(const string& _k8SVersion)
{
    m_k8SVersion = _k8SVersion;
    m_k8SVersionHasBeenSet = true;
}

bool CreateEKSClusterRequest::K8SVersionHasBeenSet() const
{
    return m_k8SVersionHasBeenSet;
}

string CreateEKSClusterRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateEKSClusterRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateEKSClusterRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateEKSClusterRequest::GetClusterName() const
{
    return m_clusterName;
}

void CreateEKSClusterRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CreateEKSClusterRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

vector<string> CreateEKSClusterRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void CreateEKSClusterRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool CreateEKSClusterRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

string CreateEKSClusterRequest::GetClusterDesc() const
{
    return m_clusterDesc;
}

void CreateEKSClusterRequest::SetClusterDesc(const string& _clusterDesc)
{
    m_clusterDesc = _clusterDesc;
    m_clusterDescHasBeenSet = true;
}

bool CreateEKSClusterRequest::ClusterDescHasBeenSet() const
{
    return m_clusterDescHasBeenSet;
}

string CreateEKSClusterRequest::GetServiceSubnetId() const
{
    return m_serviceSubnetId;
}

void CreateEKSClusterRequest::SetServiceSubnetId(const string& _serviceSubnetId)
{
    m_serviceSubnetId = _serviceSubnetId;
    m_serviceSubnetIdHasBeenSet = true;
}

bool CreateEKSClusterRequest::ServiceSubnetIdHasBeenSet() const
{
    return m_serviceSubnetIdHasBeenSet;
}

vector<DnsServerConf> CreateEKSClusterRequest::GetDnsServers() const
{
    return m_dnsServers;
}

void CreateEKSClusterRequest::SetDnsServers(const vector<DnsServerConf>& _dnsServers)
{
    m_dnsServers = _dnsServers;
    m_dnsServersHasBeenSet = true;
}

bool CreateEKSClusterRequest::DnsServersHasBeenSet() const
{
    return m_dnsServersHasBeenSet;
}

string CreateEKSClusterRequest::GetExtraParam() const
{
    return m_extraParam;
}

void CreateEKSClusterRequest::SetExtraParam(const string& _extraParam)
{
    m_extraParam = _extraParam;
    m_extraParamHasBeenSet = true;
}

bool CreateEKSClusterRequest::ExtraParamHasBeenSet() const
{
    return m_extraParamHasBeenSet;
}

bool CreateEKSClusterRequest::GetEnableVpcCoreDNS() const
{
    return m_enableVpcCoreDNS;
}

void CreateEKSClusterRequest::SetEnableVpcCoreDNS(const bool& _enableVpcCoreDNS)
{
    m_enableVpcCoreDNS = _enableVpcCoreDNS;
    m_enableVpcCoreDNSHasBeenSet = true;
}

bool CreateEKSClusterRequest::EnableVpcCoreDNSHasBeenSet() const
{
    return m_enableVpcCoreDNSHasBeenSet;
}

vector<TagSpecification> CreateEKSClusterRequest::GetTagSpecification() const
{
    return m_tagSpecification;
}

void CreateEKSClusterRequest::SetTagSpecification(const vector<TagSpecification>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool CreateEKSClusterRequest::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

vector<SubnetInfos> CreateEKSClusterRequest::GetSubnetInfos() const
{
    return m_subnetInfos;
}

void CreateEKSClusterRequest::SetSubnetInfos(const vector<SubnetInfos>& _subnetInfos)
{
    m_subnetInfos = _subnetInfos;
    m_subnetInfosHasBeenSet = true;
}

bool CreateEKSClusterRequest::SubnetInfosHasBeenSet() const
{
    return m_subnetInfosHasBeenSet;
}


