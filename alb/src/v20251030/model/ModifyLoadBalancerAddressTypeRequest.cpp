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

#include <tencentcloud/alb/v20251030/model/ModifyLoadBalancerAddressTypeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

ModifyLoadBalancerAddressTypeRequest::ModifyLoadBalancerAddressTypeRequest() :
    m_addressTypeHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_bandwidthPackageIdHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_zoneMappingsHasBeenSet(false)
{
}

string ModifyLoadBalancerAddressTypeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressType.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bandwidthPackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_zoneMappingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneMappings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneMappings.begin(); itr != m_zoneMappings.end(); ++itr, ++i)
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


string ModifyLoadBalancerAddressTypeRequest::GetAddressType() const
{
    return m_addressType;
}

void ModifyLoadBalancerAddressTypeRequest::SetAddressType(const string& _addressType)
{
    m_addressType = _addressType;
    m_addressTypeHasBeenSet = true;
}

bool ModifyLoadBalancerAddressTypeRequest::AddressTypeHasBeenSet() const
{
    return m_addressTypeHasBeenSet;
}

string ModifyLoadBalancerAddressTypeRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyLoadBalancerAddressTypeRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyLoadBalancerAddressTypeRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ModifyLoadBalancerAddressTypeRequest::GetBandwidthPackageId() const
{
    return m_bandwidthPackageId;
}

void ModifyLoadBalancerAddressTypeRequest::SetBandwidthPackageId(const string& _bandwidthPackageId)
{
    m_bandwidthPackageId = _bandwidthPackageId;
    m_bandwidthPackageIdHasBeenSet = true;
}

bool ModifyLoadBalancerAddressTypeRequest::BandwidthPackageIdHasBeenSet() const
{
    return m_bandwidthPackageIdHasBeenSet;
}

bool ModifyLoadBalancerAddressTypeRequest::GetDryRun() const
{
    return m_dryRun;
}

void ModifyLoadBalancerAddressTypeRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool ModifyLoadBalancerAddressTypeRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

vector<ZoneMappingsItem> ModifyLoadBalancerAddressTypeRequest::GetZoneMappings() const
{
    return m_zoneMappings;
}

void ModifyLoadBalancerAddressTypeRequest::SetZoneMappings(const vector<ZoneMappingsItem>& _zoneMappings)
{
    m_zoneMappings = _zoneMappings;
    m_zoneMappingsHasBeenSet = true;
}

bool ModifyLoadBalancerAddressTypeRequest::ZoneMappingsHasBeenSet() const
{
    return m_zoneMappingsHasBeenSet;
}


