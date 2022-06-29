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

#include <tencentcloud/antiddos/v20200309/model/AssociateDDoSEipLoadBalancerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

AssociateDDoSEipLoadBalancerRequest::AssociateDDoSEipLoadBalancerRequest() :
    m_instanceIdHasBeenSet(false),
    m_eipHasBeenSet(false),
    m_loadBalancerIDHasBeenSet(false),
    m_loadBalancerRegionHasBeenSet(false),
    m_vipHasBeenSet(false)
{
}

string AssociateDDoSEipLoadBalancerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_eipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eip.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerID.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssociateDDoSEipLoadBalancerRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AssociateDDoSEipLoadBalancerRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AssociateDDoSEipLoadBalancerRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AssociateDDoSEipLoadBalancerRequest::GetEip() const
{
    return m_eip;
}

void AssociateDDoSEipLoadBalancerRequest::SetEip(const string& _eip)
{
    m_eip = _eip;
    m_eipHasBeenSet = true;
}

bool AssociateDDoSEipLoadBalancerRequest::EipHasBeenSet() const
{
    return m_eipHasBeenSet;
}

string AssociateDDoSEipLoadBalancerRequest::GetLoadBalancerID() const
{
    return m_loadBalancerID;
}

void AssociateDDoSEipLoadBalancerRequest::SetLoadBalancerID(const string& _loadBalancerID)
{
    m_loadBalancerID = _loadBalancerID;
    m_loadBalancerIDHasBeenSet = true;
}

bool AssociateDDoSEipLoadBalancerRequest::LoadBalancerIDHasBeenSet() const
{
    return m_loadBalancerIDHasBeenSet;
}

string AssociateDDoSEipLoadBalancerRequest::GetLoadBalancerRegion() const
{
    return m_loadBalancerRegion;
}

void AssociateDDoSEipLoadBalancerRequest::SetLoadBalancerRegion(const string& _loadBalancerRegion)
{
    m_loadBalancerRegion = _loadBalancerRegion;
    m_loadBalancerRegionHasBeenSet = true;
}

bool AssociateDDoSEipLoadBalancerRequest::LoadBalancerRegionHasBeenSet() const
{
    return m_loadBalancerRegionHasBeenSet;
}

string AssociateDDoSEipLoadBalancerRequest::GetVip() const
{
    return m_vip;
}

void AssociateDDoSEipLoadBalancerRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool AssociateDDoSEipLoadBalancerRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}


