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

#include <tencentcloud/tke/v20180525/model/CreateClusterEndpointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CreateClusterEndpointRequest::CreateClusterEndpointRequest() :
    m_clusterIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_isExtranetHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_extensiveParametersHasBeenSet(false),
    m_existedLoadBalancerIdHasBeenSet(false)
{
}

string CreateClusterEndpointRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_isExtranetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExtranet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isExtranet, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_extensiveParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensiveParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extensiveParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_existedLoadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExistedLoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_existedLoadBalancerId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClusterEndpointRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateClusterEndpointRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateClusterEndpointRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateClusterEndpointRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateClusterEndpointRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateClusterEndpointRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

bool CreateClusterEndpointRequest::GetIsExtranet() const
{
    return m_isExtranet;
}

void CreateClusterEndpointRequest::SetIsExtranet(const bool& _isExtranet)
{
    m_isExtranet = _isExtranet;
    m_isExtranetHasBeenSet = true;
}

bool CreateClusterEndpointRequest::IsExtranetHasBeenSet() const
{
    return m_isExtranetHasBeenSet;
}

string CreateClusterEndpointRequest::GetDomain() const
{
    return m_domain;
}

void CreateClusterEndpointRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateClusterEndpointRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateClusterEndpointRequest::GetSecurityGroup() const
{
    return m_securityGroup;
}

void CreateClusterEndpointRequest::SetSecurityGroup(const string& _securityGroup)
{
    m_securityGroup = _securityGroup;
    m_securityGroupHasBeenSet = true;
}

bool CreateClusterEndpointRequest::SecurityGroupHasBeenSet() const
{
    return m_securityGroupHasBeenSet;
}

string CreateClusterEndpointRequest::GetExtensiveParameters() const
{
    return m_extensiveParameters;
}

void CreateClusterEndpointRequest::SetExtensiveParameters(const string& _extensiveParameters)
{
    m_extensiveParameters = _extensiveParameters;
    m_extensiveParametersHasBeenSet = true;
}

bool CreateClusterEndpointRequest::ExtensiveParametersHasBeenSet() const
{
    return m_extensiveParametersHasBeenSet;
}

string CreateClusterEndpointRequest::GetExistedLoadBalancerId() const
{
    return m_existedLoadBalancerId;
}

void CreateClusterEndpointRequest::SetExistedLoadBalancerId(const string& _existedLoadBalancerId)
{
    m_existedLoadBalancerId = _existedLoadBalancerId;
    m_existedLoadBalancerIdHasBeenSet = true;
}

bool CreateClusterEndpointRequest::ExistedLoadBalancerIdHasBeenSet() const
{
    return m_existedLoadBalancerIdHasBeenSet;
}


