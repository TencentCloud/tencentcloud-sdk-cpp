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

#include <tencentcloud/alb/v20251030/model/CreateSecurityPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

CreateSecurityPolicyRequest::CreateSecurityPolicyRequest() :
    m_ciphersHasBeenSet(false),
    m_tLSVersionsHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_securityPolicyNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateSecurityPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


vector<string> CreateSecurityPolicyRequest::GetCiphers() const
{
    return m_ciphers;
}

void CreateSecurityPolicyRequest::SetCiphers(const vector<string>& _ciphers)
{
    m_ciphers = _ciphers;
    m_ciphersHasBeenSet = true;
}

bool CreateSecurityPolicyRequest::CiphersHasBeenSet() const
{
    return m_ciphersHasBeenSet;
}

vector<string> CreateSecurityPolicyRequest::GetTLSVersions() const
{
    return m_tLSVersions;
}

void CreateSecurityPolicyRequest::SetTLSVersions(const vector<string>& _tLSVersions)
{
    m_tLSVersions = _tLSVersions;
    m_tLSVersionsHasBeenSet = true;
}

bool CreateSecurityPolicyRequest::TLSVersionsHasBeenSet() const
{
    return m_tLSVersionsHasBeenSet;
}

string CreateSecurityPolicyRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateSecurityPolicyRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateSecurityPolicyRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

bool CreateSecurityPolicyRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateSecurityPolicyRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateSecurityPolicyRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string CreateSecurityPolicyRequest::GetSecurityPolicyName() const
{
    return m_securityPolicyName;
}

void CreateSecurityPolicyRequest::SetSecurityPolicyName(const string& _securityPolicyName)
{
    m_securityPolicyName = _securityPolicyName;
    m_securityPolicyNameHasBeenSet = true;
}

bool CreateSecurityPolicyRequest::SecurityPolicyNameHasBeenSet() const
{
    return m_securityPolicyNameHasBeenSet;
}

vector<TagInfo> CreateSecurityPolicyRequest::GetTags() const
{
    return m_tags;
}

void CreateSecurityPolicyRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateSecurityPolicyRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


