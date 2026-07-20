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

#include <tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorAclRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

ModifyGlobalAcceleratorAclRuleRequest::ModifyGlobalAcceleratorAclRuleRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_globalAcceleratorAclPolicyIdHasBeenSet(false),
    m_globalAcceleratorAclRuleIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_sourceCidrBlockHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ModifyGlobalAcceleratorAclRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_globalAcceleratorAclPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorAclPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorAclPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_globalAcceleratorAclRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorAclRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorAclRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policy.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyGlobalAcceleratorAclRuleRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void ModifyGlobalAcceleratorAclRuleRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool ModifyGlobalAcceleratorAclRuleRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string ModifyGlobalAcceleratorAclRuleRequest::GetGlobalAcceleratorAclPolicyId() const
{
    return m_globalAcceleratorAclPolicyId;
}

void ModifyGlobalAcceleratorAclRuleRequest::SetGlobalAcceleratorAclPolicyId(const string& _globalAcceleratorAclPolicyId)
{
    m_globalAcceleratorAclPolicyId = _globalAcceleratorAclPolicyId;
    m_globalAcceleratorAclPolicyIdHasBeenSet = true;
}

bool ModifyGlobalAcceleratorAclRuleRequest::GlobalAcceleratorAclPolicyIdHasBeenSet() const
{
    return m_globalAcceleratorAclPolicyIdHasBeenSet;
}

string ModifyGlobalAcceleratorAclRuleRequest::GetGlobalAcceleratorAclRuleId() const
{
    return m_globalAcceleratorAclRuleId;
}

void ModifyGlobalAcceleratorAclRuleRequest::SetGlobalAcceleratorAclRuleId(const string& _globalAcceleratorAclRuleId)
{
    m_globalAcceleratorAclRuleId = _globalAcceleratorAclRuleId;
    m_globalAcceleratorAclRuleIdHasBeenSet = true;
}

bool ModifyGlobalAcceleratorAclRuleRequest::GlobalAcceleratorAclRuleIdHasBeenSet() const
{
    return m_globalAcceleratorAclRuleIdHasBeenSet;
}

string ModifyGlobalAcceleratorAclRuleRequest::GetProtocol() const
{
    return m_protocol;
}

void ModifyGlobalAcceleratorAclRuleRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ModifyGlobalAcceleratorAclRuleRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string ModifyGlobalAcceleratorAclRuleRequest::GetPort() const
{
    return m_port;
}

void ModifyGlobalAcceleratorAclRuleRequest::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ModifyGlobalAcceleratorAclRuleRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string ModifyGlobalAcceleratorAclRuleRequest::GetSourceCidrBlock() const
{
    return m_sourceCidrBlock;
}

void ModifyGlobalAcceleratorAclRuleRequest::SetSourceCidrBlock(const string& _sourceCidrBlock)
{
    m_sourceCidrBlock = _sourceCidrBlock;
    m_sourceCidrBlockHasBeenSet = true;
}

bool ModifyGlobalAcceleratorAclRuleRequest::SourceCidrBlockHasBeenSet() const
{
    return m_sourceCidrBlockHasBeenSet;
}

string ModifyGlobalAcceleratorAclRuleRequest::GetPolicy() const
{
    return m_policy;
}

void ModifyGlobalAcceleratorAclRuleRequest::SetPolicy(const string& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool ModifyGlobalAcceleratorAclRuleRequest::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

string ModifyGlobalAcceleratorAclRuleRequest::GetDescription() const
{
    return m_description;
}

void ModifyGlobalAcceleratorAclRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyGlobalAcceleratorAclRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


