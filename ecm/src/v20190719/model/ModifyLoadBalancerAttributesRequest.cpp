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

#include <tencentcloud/ecm/v20190719/model/ModifyLoadBalancerAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ModifyLoadBalancerAttributesRequest::ModifyLoadBalancerAttributesRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_internetChargeInfoHasBeenSet(false),
    m_loadBalancerPassToTargetHasBeenSet(false)
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

LoadBalancerInternetAccessible ModifyLoadBalancerAttributesRequest::GetInternetChargeInfo() const
{
    return m_internetChargeInfo;
}

void ModifyLoadBalancerAttributesRequest::SetInternetChargeInfo(const LoadBalancerInternetAccessible& _internetChargeInfo)
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


