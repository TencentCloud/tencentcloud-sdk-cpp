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

#include <tencentcloud/alb/v20251030/model/ModifySecurityPolicyAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

ModifySecurityPolicyAttributesRequest::ModifySecurityPolicyAttributesRequest() :
    m_securityPolicyIdHasBeenSet(false),
    m_ciphersHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_securityPolicyNameHasBeenSet(false),
    m_tLSVersionsHasBeenSet(false)
{
}

string ModifySecurityPolicyAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_securityPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_ciphersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ciphers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ciphers.begin(); itr != m_ciphers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_securityPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityPolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_tLSVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSVersions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tLSVersions.begin(); itr != m_tLSVersions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySecurityPolicyAttributesRequest::GetSecurityPolicyId() const
{
    return m_securityPolicyId;
}

void ModifySecurityPolicyAttributesRequest::SetSecurityPolicyId(const string& _securityPolicyId)
{
    m_securityPolicyId = _securityPolicyId;
    m_securityPolicyIdHasBeenSet = true;
}

bool ModifySecurityPolicyAttributesRequest::SecurityPolicyIdHasBeenSet() const
{
    return m_securityPolicyIdHasBeenSet;
}

vector<string> ModifySecurityPolicyAttributesRequest::GetCiphers() const
{
    return m_ciphers;
}

void ModifySecurityPolicyAttributesRequest::SetCiphers(const vector<string>& _ciphers)
{
    m_ciphers = _ciphers;
    m_ciphersHasBeenSet = true;
}

bool ModifySecurityPolicyAttributesRequest::CiphersHasBeenSet() const
{
    return m_ciphersHasBeenSet;
}

bool ModifySecurityPolicyAttributesRequest::GetDryRun() const
{
    return m_dryRun;
}

void ModifySecurityPolicyAttributesRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool ModifySecurityPolicyAttributesRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string ModifySecurityPolicyAttributesRequest::GetSecurityPolicyName() const
{
    return m_securityPolicyName;
}

void ModifySecurityPolicyAttributesRequest::SetSecurityPolicyName(const string& _securityPolicyName)
{
    m_securityPolicyName = _securityPolicyName;
    m_securityPolicyNameHasBeenSet = true;
}

bool ModifySecurityPolicyAttributesRequest::SecurityPolicyNameHasBeenSet() const
{
    return m_securityPolicyNameHasBeenSet;
}

vector<string> ModifySecurityPolicyAttributesRequest::GetTLSVersions() const
{
    return m_tLSVersions;
}

void ModifySecurityPolicyAttributesRequest::SetTLSVersions(const vector<string>& _tLSVersions)
{
    m_tLSVersions = _tLSVersions;
    m_tLSVersionsHasBeenSet = true;
}

bool ModifySecurityPolicyAttributesRequest::TLSVersionsHasBeenSet() const
{
    return m_tLSVersionsHasBeenSet;
}


