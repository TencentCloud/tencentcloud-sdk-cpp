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
using namespace std;

ModifyLoadBalancerAttributesRequest::ModifyLoadBalancerAttributesRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_targetRegionInfoHasBeenSet(false),
    m_internetChargeInfoHasBeenSet(false),
    m_loadBalancerPassToTargetHasBeenSet(false),
    m_snatProHasBeenSet(false),
    m_deleteProtectHasBeenSet(false),
    m_modifyClassicDomainHasBeenSet(false)
{
}

string ModifyLoadBalancerAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetRegionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetRegionInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetRegionInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_internetChargeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetChargeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetChargeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_loadBalancerPassToTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerPassToTarget";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loadBalancerPassToTarget, allocator);
    }

    if (m_snatProHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnatPro";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_snatPro, allocator);
    }

    if (m_deleteProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteProtect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteProtect, allocator);
    }

    if (m_modifyClassicDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyClassicDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modifyClassicDomain, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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

bool ModifyLoadBalancerAttributesRequest::GetDeleteProtect() const
{
    return m_deleteProtect;
}

void ModifyLoadBalancerAttributesRequest::SetDeleteProtect(const bool& _deleteProtect)
{
    m_deleteProtect = _deleteProtect;
    m_deleteProtectHasBeenSet = true;
}

bool ModifyLoadBalancerAttributesRequest::DeleteProtectHasBeenSet() const
{
    return m_deleteProtectHasBeenSet;
}

bool ModifyLoadBalancerAttributesRequest::GetModifyClassicDomain() const
{
    return m_modifyClassicDomain;
}

void ModifyLoadBalancerAttributesRequest::SetModifyClassicDomain(const bool& _modifyClassicDomain)
{
    m_modifyClassicDomain = _modifyClassicDomain;
    m_modifyClassicDomainHasBeenSet = true;
}

bool ModifyLoadBalancerAttributesRequest::ModifyClassicDomainHasBeenSet() const
{
    return m_modifyClassicDomainHasBeenSet;
}


