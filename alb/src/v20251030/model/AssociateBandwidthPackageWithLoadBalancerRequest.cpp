/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/alb/v20251030/model/AssociateBandwidthPackageWithLoadBalancerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

AssociateBandwidthPackageWithLoadBalancerRequest::AssociateBandwidthPackageWithLoadBalancerRequest() :
    m_bandwidthPackageIdHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_dryRunHasBeenSet(false)
{
}

string AssociateBandwidthPackageWithLoadBalancerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bandwidthPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bandwidthPackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssociateBandwidthPackageWithLoadBalancerRequest::GetBandwidthPackageId() const
{
    return m_bandwidthPackageId;
}

void AssociateBandwidthPackageWithLoadBalancerRequest::SetBandwidthPackageId(const string& _bandwidthPackageId)
{
    m_bandwidthPackageId = _bandwidthPackageId;
    m_bandwidthPackageIdHasBeenSet = true;
}

bool AssociateBandwidthPackageWithLoadBalancerRequest::BandwidthPackageIdHasBeenSet() const
{
    return m_bandwidthPackageIdHasBeenSet;
}

string AssociateBandwidthPackageWithLoadBalancerRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void AssociateBandwidthPackageWithLoadBalancerRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool AssociateBandwidthPackageWithLoadBalancerRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string AssociateBandwidthPackageWithLoadBalancerRequest::GetClientToken() const
{
    return m_clientToken;
}

void AssociateBandwidthPackageWithLoadBalancerRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool AssociateBandwidthPackageWithLoadBalancerRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

bool AssociateBandwidthPackageWithLoadBalancerRequest::GetDryRun() const
{
    return m_dryRun;
}

void AssociateBandwidthPackageWithLoadBalancerRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool AssociateBandwidthPackageWithLoadBalancerRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}


