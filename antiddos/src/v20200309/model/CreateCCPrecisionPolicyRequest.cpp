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

#include <tencentcloud/antiddos/v20200309/model/CreateCCPrecisionPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

CreateCCPrecisionPolicyRequest::CreateCCPrecisionPolicyRequest() :
    m_instanceIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_policyActionHasBeenSet(false),
    m_policyListHasBeenSet(false)
{
}

string CreateCCPrecisionPolicyRequest::ToJsonString() const
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

    if (m_policyActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyAction.c_str(), allocator).Move(), allocator);
    }

    if (m_policyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policyList.begin(); itr != m_policyList.end(); ++itr, ++i)
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


string CreateCCPrecisionPolicyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateCCPrecisionPolicyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateCCPrecisionPolicyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateCCPrecisionPolicyRequest::GetIp() const
{
    return m_ip;
}

void CreateCCPrecisionPolicyRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool CreateCCPrecisionPolicyRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string CreateCCPrecisionPolicyRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateCCPrecisionPolicyRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateCCPrecisionPolicyRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateCCPrecisionPolicyRequest::GetDomain() const
{
    return m_domain;
}

void CreateCCPrecisionPolicyRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateCCPrecisionPolicyRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateCCPrecisionPolicyRequest::GetPolicyAction() const
{
    return m_policyAction;
}

void CreateCCPrecisionPolicyRequest::SetPolicyAction(const string& _policyAction)
{
    m_policyAction = _policyAction;
    m_policyActionHasBeenSet = true;
}

bool CreateCCPrecisionPolicyRequest::PolicyActionHasBeenSet() const
{
    return m_policyActionHasBeenSet;
}

vector<CCPrecisionPlyRecord> CreateCCPrecisionPolicyRequest::GetPolicyList() const
{
    return m_policyList;
}

void CreateCCPrecisionPolicyRequest::SetPolicyList(const vector<CCPrecisionPlyRecord>& _policyList)
{
    m_policyList = _policyList;
    m_policyListHasBeenSet = true;
}

bool CreateCCPrecisionPolicyRequest::PolicyListHasBeenSet() const
{
    return m_policyListHasBeenSet;
}


