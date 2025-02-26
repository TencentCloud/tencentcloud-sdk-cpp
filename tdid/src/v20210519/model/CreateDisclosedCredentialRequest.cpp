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

#include <tencentcloud/tdid/v20210519/model/CreateDisclosedCredentialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

CreateDisclosedCredentialRequest::CreateDisclosedCredentialRequest() :
    m_policyIdHasBeenSet(false),
    m_credentialDataHasBeenSet(false),
    m_policyJsonHasBeenSet(false),
    m_dAPIdHasBeenSet(false),
    m_uAPIdHasBeenSet(false)
{
}

string CreateDisclosedCredentialRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyId, allocator);
    }

    if (m_credentialDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_credentialData.c_str(), allocator).Move(), allocator);
    }

    if (m_policyJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyJson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyJson.c_str(), allocator).Move(), allocator);
    }

    if (m_dAPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DAPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dAPId, allocator);
    }

    if (m_uAPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UAPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uAPId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateDisclosedCredentialRequest::GetPolicyId() const
{
    return m_policyId;
}

void CreateDisclosedCredentialRequest::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CreateDisclosedCredentialRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string CreateDisclosedCredentialRequest::GetCredentialData() const
{
    return m_credentialData;
}

void CreateDisclosedCredentialRequest::SetCredentialData(const string& _credentialData)
{
    m_credentialData = _credentialData;
    m_credentialDataHasBeenSet = true;
}

bool CreateDisclosedCredentialRequest::CredentialDataHasBeenSet() const
{
    return m_credentialDataHasBeenSet;
}

string CreateDisclosedCredentialRequest::GetPolicyJson() const
{
    return m_policyJson;
}

void CreateDisclosedCredentialRequest::SetPolicyJson(const string& _policyJson)
{
    m_policyJson = _policyJson;
    m_policyJsonHasBeenSet = true;
}

bool CreateDisclosedCredentialRequest::PolicyJsonHasBeenSet() const
{
    return m_policyJsonHasBeenSet;
}

uint64_t CreateDisclosedCredentialRequest::GetDAPId() const
{
    return m_dAPId;
}

void CreateDisclosedCredentialRequest::SetDAPId(const uint64_t& _dAPId)
{
    m_dAPId = _dAPId;
    m_dAPIdHasBeenSet = true;
}

bool CreateDisclosedCredentialRequest::DAPIdHasBeenSet() const
{
    return m_dAPIdHasBeenSet;
}

uint64_t CreateDisclosedCredentialRequest::GetUAPId() const
{
    return m_uAPId;
}

void CreateDisclosedCredentialRequest::SetUAPId(const uint64_t& _uAPId)
{
    m_uAPId = _uAPId;
    m_uAPIdHasBeenSet = true;
}

bool CreateDisclosedCredentialRequest::UAPIdHasBeenSet() const
{
    return m_uAPIdHasBeenSet;
}


