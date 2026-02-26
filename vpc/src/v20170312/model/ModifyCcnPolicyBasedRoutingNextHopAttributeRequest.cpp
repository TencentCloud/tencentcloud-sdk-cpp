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

#include <tencentcloud/vpc/v20170312/model/ModifyCcnPolicyBasedRoutingNextHopAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::ModifyCcnPolicyBasedRoutingNextHopAttributeRequest() :
    m_ccnIdHasBeenSet(false),
    m_policyBasedRoutingNextHopIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nextHopRegionHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_nextHopResourceTypeHasBeenSet(false),
    m_nextHopResourceIdHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

string ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyBasedRoutingNextHopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyBasedRoutingNextHopId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyBasedRoutingNextHopId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nextHopRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHopRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextHopRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nextHopResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHopResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextHopResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_nextHopResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHopResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextHopResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::GetCcnId() const
{
    return m_ccnId;
}

void ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::GetPolicyBasedRoutingNextHopId() const
{
    return m_policyBasedRoutingNextHopId;
}

void ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::SetPolicyBasedRoutingNextHopId(const string& _policyBasedRoutingNextHopId)
{
    m_policyBasedRoutingNextHopId = _policyBasedRoutingNextHopId;
    m_policyBasedRoutingNextHopIdHasBeenSet = true;
}

bool ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::PolicyBasedRoutingNextHopIdHasBeenSet() const
{
    return m_policyBasedRoutingNextHopIdHasBeenSet;
}

string ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::GetName() const
{
    return m_name;
}

void ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::GetDescription() const
{
    return m_description;
}

void ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::GetNextHopRegion() const
{
    return m_nextHopRegion;
}

void ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::SetNextHopRegion(const string& _nextHopRegion)
{
    m_nextHopRegion = _nextHopRegion;
    m_nextHopRegionHasBeenSet = true;
}

bool ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::NextHopRegionHasBeenSet() const
{
    return m_nextHopRegionHasBeenSet;
}

string ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::GetInstanceType() const
{
    return m_instanceType;
}

void ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::GetNextHopResourceType() const
{
    return m_nextHopResourceType;
}

void ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::SetNextHopResourceType(const string& _nextHopResourceType)
{
    m_nextHopResourceType = _nextHopResourceType;
    m_nextHopResourceTypeHasBeenSet = true;
}

bool ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::NextHopResourceTypeHasBeenSet() const
{
    return m_nextHopResourceTypeHasBeenSet;
}

string ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::GetNextHopResourceId() const
{
    return m_nextHopResourceId;
}

void ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::SetNextHopResourceId(const string& _nextHopResourceId)
{
    m_nextHopResourceId = _nextHopResourceId;
    m_nextHopResourceIdHasBeenSet = true;
}

bool ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::NextHopResourceIdHasBeenSet() const
{
    return m_nextHopResourceIdHasBeenSet;
}

string ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::GetState() const
{
    return m_state;
}

void ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ModifyCcnPolicyBasedRoutingNextHopAttributeRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}


