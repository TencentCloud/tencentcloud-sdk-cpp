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

#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

ModifyLoadBalancerAttributesRequest::ModifyLoadBalancerAttributesRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_targetRegionInfoHasBeenSet(false),
    m_internetChargeInfoHasBeenSet(false),
    m_loadBalancerPassToTargetHasBeenSet(false),
    m_snatProHasBeenSet(false)
{
}

string ModifyLoadBalancerAttributesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetRegionInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetRegionInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_targetRegionInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_internetChargeInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetChargeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_internetChargeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_loadBalancerPassToTargetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerPassToTarget";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loadBalancerPassToTarget, allocator);
    }

    if (m_snatProHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SnatPro";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_snatPro, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLoadBalancerAttributesRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyLoadBalancerAttributesRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyLoadBalancerAttributesRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ModifyLoadBalancerAttributesRequest::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void ModifyLoadBalancerAttributesRequest::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool ModifyLoadBalancerAttributesRequest::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

TargetRegionInfo ModifyLoadBalancerAttributesRequest::GetTargetRegionInfo() const
{
    return m_targetRegionInfo;
}

void ModifyLoadBalancerAttributesRequest::SetTargetRegionInfo(const TargetRegionInfo& _targetRegionInfo)
{
    m_targetRegionInfo = _targetRegionInfo;
    m_targetRegionInfoHasBeenSet = true;
}

bool ModifyLoadBalancerAttributesRequest::TargetRegionInfoHasBeenSet() const
{
    return m_targetRegionInfoHasBeenSet;
}

InternetAccessible ModifyLoadBalancerAttributesRequest::GetInternetChargeInfo() const
{
    return m_internetChargeInfo;
}

void ModifyLoadBalancerAttributesRequest::SetInternetChargeInfo(const InternetAccessible& _internetChargeInfo)
{
    m_internetChargeInfo = _internetChargeInfo;
    m_internetChargeInfoHasBeenSet = true;
}

bool ModifyLoadBalancerAttributesRequest::InternetChargeInfoHasBeenSet() const
{
    return m_internetChargeInfoHasBeenSet;
}

bool ModifyLoadBalancerAttributesRequest::GetLoadBalancerPassToTarget() const
{
    return m_loadBalancerPassToTarget;
}

void ModifyLoadBalancerAttributesRequest::SetLoadBalancerPassToTarget(const bool& _loadBalancerPassToTarget)
{
    m_loadBalancerPassToTarget = _loadBalancerPassToTarget;
    m_loadBalancerPassToTargetHasBeenSet = true;
}

bool ModifyLoadBalancerAttributesRequest::LoadBalancerPassToTargetHasBeenSet() const
{
    return m_loadBalancerPassToTargetHasBeenSet;
}

bool ModifyLoadBalancerAttributesRequest::GetSnatPro() const
{
    return m_snatPro;
}

void ModifyLoadBalancerAttributesRequest::SetSnatPro(const bool& _snatPro)
{
    m_snatPro = _snatPro;
    m_snatProHasBeenSet = true;
}

bool ModifyLoadBalancerAttributesRequest::SnatProHasBeenSet() const
{
    return m_snatProHasBeenSet;
}


