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

#include <tencentcloud/alb/v20251030/model/ModifyLoadBalancerModificationProtectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

ModifyLoadBalancerModificationProtectionRequest::ModifyLoadBalancerModificationProtectionRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_modificationProtectionEnabledHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

string ModifyLoadBalancerModificationProtectionRequest::ToJsonString() const
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

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_modificationProtectionEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModificationProtectionEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modificationProtectionEnabled, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLoadBalancerModificationProtectionRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyLoadBalancerModificationProtectionRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyLoadBalancerModificationProtectionRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

bool ModifyLoadBalancerModificationProtectionRequest::GetDryRun() const
{
    return m_dryRun;
}

void ModifyLoadBalancerModificationProtectionRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool ModifyLoadBalancerModificationProtectionRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

bool ModifyLoadBalancerModificationProtectionRequest::GetModificationProtectionEnabled() const
{
    return m_modificationProtectionEnabled;
}

void ModifyLoadBalancerModificationProtectionRequest::SetModificationProtectionEnabled(const bool& _modificationProtectionEnabled)
{
    m_modificationProtectionEnabled = _modificationProtectionEnabled;
    m_modificationProtectionEnabledHasBeenSet = true;
}

bool ModifyLoadBalancerModificationProtectionRequest::ModificationProtectionEnabledHasBeenSet() const
{
    return m_modificationProtectionEnabledHasBeenSet;
}

string ModifyLoadBalancerModificationProtectionRequest::GetReason() const
{
    return m_reason;
}

void ModifyLoadBalancerModificationProtectionRequest::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ModifyLoadBalancerModificationProtectionRequest::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}


