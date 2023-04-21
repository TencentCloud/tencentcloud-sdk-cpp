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

#include <tencentcloud/tke/v20180525/model/EnableVpcCniNetworkTypeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

EnableVpcCniNetworkTypeRequest::EnableVpcCniNetworkTypeRequest() :
    m_clusterIdHasBeenSet(false),
    m_vpcCniTypeHasBeenSet(false),
    m_enableStaticIpHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_expiredSecondsHasBeenSet(false),
    m_skipAddingNonMasqueradeCIDRsHasBeenSet(false)
{
}

string EnableVpcCniNetworkTypeRequest::ToJsonString() const
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

    if (m_vpcCniTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCniType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcCniType.c_str(), allocator).Move(), allocator);
    }

    if (m_enableStaticIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableStaticIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableStaticIp, allocator);
    }

    if (m_subnetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subnets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnets.begin(); itr != m_subnets.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_expiredSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expiredSeconds, allocator);
    }

    if (m_skipAddingNonMasqueradeCIDRsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipAddingNonMasqueradeCIDRs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skipAddingNonMasqueradeCIDRs, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EnableVpcCniNetworkTypeRequest::GetClusterId() const
{
    return m_clusterId;
}

void EnableVpcCniNetworkTypeRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool EnableVpcCniNetworkTypeRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string EnableVpcCniNetworkTypeRequest::GetVpcCniType() const
{
    return m_vpcCniType;
}

void EnableVpcCniNetworkTypeRequest::SetVpcCniType(const string& _vpcCniType)
{
    m_vpcCniType = _vpcCniType;
    m_vpcCniTypeHasBeenSet = true;
}

bool EnableVpcCniNetworkTypeRequest::VpcCniTypeHasBeenSet() const
{
    return m_vpcCniTypeHasBeenSet;
}

bool EnableVpcCniNetworkTypeRequest::GetEnableStaticIp() const
{
    return m_enableStaticIp;
}

void EnableVpcCniNetworkTypeRequest::SetEnableStaticIp(const bool& _enableStaticIp)
{
    m_enableStaticIp = _enableStaticIp;
    m_enableStaticIpHasBeenSet = true;
}

bool EnableVpcCniNetworkTypeRequest::EnableStaticIpHasBeenSet() const
{
    return m_enableStaticIpHasBeenSet;
}

vector<string> EnableVpcCniNetworkTypeRequest::GetSubnets() const
{
    return m_subnets;
}

void EnableVpcCniNetworkTypeRequest::SetSubnets(const vector<string>& _subnets)
{
    m_subnets = _subnets;
    m_subnetsHasBeenSet = true;
}

bool EnableVpcCniNetworkTypeRequest::SubnetsHasBeenSet() const
{
    return m_subnetsHasBeenSet;
}

uint64_t EnableVpcCniNetworkTypeRequest::GetExpiredSeconds() const
{
    return m_expiredSeconds;
}

void EnableVpcCniNetworkTypeRequest::SetExpiredSeconds(const uint64_t& _expiredSeconds)
{
    m_expiredSeconds = _expiredSeconds;
    m_expiredSecondsHasBeenSet = true;
}

bool EnableVpcCniNetworkTypeRequest::ExpiredSecondsHasBeenSet() const
{
    return m_expiredSecondsHasBeenSet;
}

bool EnableVpcCniNetworkTypeRequest::GetSkipAddingNonMasqueradeCIDRs() const
{
    return m_skipAddingNonMasqueradeCIDRs;
}

void EnableVpcCniNetworkTypeRequest::SetSkipAddingNonMasqueradeCIDRs(const bool& _skipAddingNonMasqueradeCIDRs)
{
    m_skipAddingNonMasqueradeCIDRs = _skipAddingNonMasqueradeCIDRs;
    m_skipAddingNonMasqueradeCIDRsHasBeenSet = true;
}

bool EnableVpcCniNetworkTypeRequest::SkipAddingNonMasqueradeCIDRsHasBeenSet() const
{
    return m_skipAddingNonMasqueradeCIDRsHasBeenSet;
}


