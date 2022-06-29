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

#include <tencentcloud/antiddos/v20200309/model/CreateCCReqLimitPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

CreateCCReqLimitPolicyRequest::CreateCCReqLimitPolicyRequest() :
    m_instanceIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_isGlobalHasBeenSet(false)
{
}

string CreateCCReqLimitPolicyRequest::ToJsonString() const
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

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_policy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isGlobal, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCCReqLimitPolicyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateCCReqLimitPolicyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateCCReqLimitPolicyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateCCReqLimitPolicyRequest::GetIp() const
{
    return m_ip;
}

void CreateCCReqLimitPolicyRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool CreateCCReqLimitPolicyRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string CreateCCReqLimitPolicyRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateCCReqLimitPolicyRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateCCReqLimitPolicyRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateCCReqLimitPolicyRequest::GetDomain() const
{
    return m_domain;
}

void CreateCCReqLimitPolicyRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateCCReqLimitPolicyRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

CCReqLimitPolicyRecord CreateCCReqLimitPolicyRequest::GetPolicy() const
{
    return m_policy;
}

void CreateCCReqLimitPolicyRequest::SetPolicy(const CCReqLimitPolicyRecord& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool CreateCCReqLimitPolicyRequest::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

int64_t CreateCCReqLimitPolicyRequest::GetIsGlobal() const
{
    return m_isGlobal;
}

void CreateCCReqLimitPolicyRequest::SetIsGlobal(const int64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool CreateCCReqLimitPolicyRequest::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}


