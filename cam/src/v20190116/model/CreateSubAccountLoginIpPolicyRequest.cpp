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

#include <tencentcloud/cam/v20190116/model/CreateSubAccountLoginIpPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

CreateSubAccountLoginIpPolicyRequest::CreateSubAccountLoginIpPolicyRequest() :
    m_ipPoliciesHasBeenSet(false),
    m_approverTypeHasBeenSet(false),
    m_approverUinHasBeenSet(false),
    m_disablePolicyHasBeenSet(false),
    m_policyTypeHasBeenSet(false)
{
}

string CreateSubAccountLoginIpPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ipPoliciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpPolicies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipPolicies.begin(); itr != m_ipPolicies.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_approverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_approverType.c_str(), allocator).Move(), allocator);
    }

    if (m_approverUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_approverUin.begin(); itr != m_approverUin.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_disablePolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisablePolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disablePolicy, allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<IpPolicy> CreateSubAccountLoginIpPolicyRequest::GetIpPolicies() const
{
    return m_ipPolicies;
}

void CreateSubAccountLoginIpPolicyRequest::SetIpPolicies(const vector<IpPolicy>& _ipPolicies)
{
    m_ipPolicies = _ipPolicies;
    m_ipPoliciesHasBeenSet = true;
}

bool CreateSubAccountLoginIpPolicyRequest::IpPoliciesHasBeenSet() const
{
    return m_ipPoliciesHasBeenSet;
}

string CreateSubAccountLoginIpPolicyRequest::GetApproverType() const
{
    return m_approverType;
}

void CreateSubAccountLoginIpPolicyRequest::SetApproverType(const string& _approverType)
{
    m_approverType = _approverType;
    m_approverTypeHasBeenSet = true;
}

bool CreateSubAccountLoginIpPolicyRequest::ApproverTypeHasBeenSet() const
{
    return m_approverTypeHasBeenSet;
}

vector<uint64_t> CreateSubAccountLoginIpPolicyRequest::GetApproverUin() const
{
    return m_approverUin;
}

void CreateSubAccountLoginIpPolicyRequest::SetApproverUin(const vector<uint64_t>& _approverUin)
{
    m_approverUin = _approverUin;
    m_approverUinHasBeenSet = true;
}

bool CreateSubAccountLoginIpPolicyRequest::ApproverUinHasBeenSet() const
{
    return m_approverUinHasBeenSet;
}

uint64_t CreateSubAccountLoginIpPolicyRequest::GetDisablePolicy() const
{
    return m_disablePolicy;
}

void CreateSubAccountLoginIpPolicyRequest::SetDisablePolicy(const uint64_t& _disablePolicy)
{
    m_disablePolicy = _disablePolicy;
    m_disablePolicyHasBeenSet = true;
}

bool CreateSubAccountLoginIpPolicyRequest::DisablePolicyHasBeenSet() const
{
    return m_disablePolicyHasBeenSet;
}

uint64_t CreateSubAccountLoginIpPolicyRequest::GetPolicyType() const
{
    return m_policyType;
}

void CreateSubAccountLoginIpPolicyRequest::SetPolicyType(const uint64_t& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool CreateSubAccountLoginIpPolicyRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}


