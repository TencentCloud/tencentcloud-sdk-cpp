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

#include <tencentcloud/tdid/v20210519/model/CreatePresentationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

CreatePresentationRequest::CreatePresentationRequest() :
    m_dAPIdHasBeenSet(false),
    m_uAPIdHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_didHasBeenSet(false),
    m_verifyCodeHasBeenSet(false),
    m_policyJsonHasBeenSet(false),
    m_unsignedHasBeenSet(false),
    m_credentialListHasBeenSet(false)
{
}

string CreatePresentationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_credentialsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credentials";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_credentials.begin(); itr != m_credentials.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_didHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Did";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_did.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyCode.c_str(), allocator).Move(), allocator);
    }

    if (m_policyJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyJson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyJson.c_str(), allocator).Move(), allocator);
    }

    if (m_unsignedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unsigned";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unsigned, allocator);
    }

    if (m_credentialListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_credentialList.begin(); itr != m_credentialList.end(); ++itr, ++i)
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


uint64_t CreatePresentationRequest::GetDAPId() const
{
    return m_dAPId;
}

void CreatePresentationRequest::SetDAPId(const uint64_t& _dAPId)
{
    m_dAPId = _dAPId;
    m_dAPIdHasBeenSet = true;
}

bool CreatePresentationRequest::DAPIdHasBeenSet() const
{
    return m_dAPIdHasBeenSet;
}

uint64_t CreatePresentationRequest::GetUAPId() const
{
    return m_uAPId;
}

void CreatePresentationRequest::SetUAPId(const uint64_t& _uAPId)
{
    m_uAPId = _uAPId;
    m_uAPIdHasBeenSet = true;
}

bool CreatePresentationRequest::UAPIdHasBeenSet() const
{
    return m_uAPIdHasBeenSet;
}

vector<string> CreatePresentationRequest::GetCredentials() const
{
    return m_credentials;
}

void CreatePresentationRequest::SetCredentials(const vector<string>& _credentials)
{
    m_credentials = _credentials;
    m_credentialsHasBeenSet = true;
}

bool CreatePresentationRequest::CredentialsHasBeenSet() const
{
    return m_credentialsHasBeenSet;
}

string CreatePresentationRequest::GetDid() const
{
    return m_did;
}

void CreatePresentationRequest::SetDid(const string& _did)
{
    m_did = _did;
    m_didHasBeenSet = true;
}

bool CreatePresentationRequest::DidHasBeenSet() const
{
    return m_didHasBeenSet;
}

string CreatePresentationRequest::GetVerifyCode() const
{
    return m_verifyCode;
}

void CreatePresentationRequest::SetVerifyCode(const string& _verifyCode)
{
    m_verifyCode = _verifyCode;
    m_verifyCodeHasBeenSet = true;
}

bool CreatePresentationRequest::VerifyCodeHasBeenSet() const
{
    return m_verifyCodeHasBeenSet;
}

string CreatePresentationRequest::GetPolicyJson() const
{
    return m_policyJson;
}

void CreatePresentationRequest::SetPolicyJson(const string& _policyJson)
{
    m_policyJson = _policyJson;
    m_policyJsonHasBeenSet = true;
}

bool CreatePresentationRequest::PolicyJsonHasBeenSet() const
{
    return m_policyJsonHasBeenSet;
}

bool CreatePresentationRequest::GetUnsigned() const
{
    return m_unsigned;
}

void CreatePresentationRequest::SetUnsigned(const bool& _unsigned)
{
    m_unsigned = _unsigned;
    m_unsignedHasBeenSet = true;
}

bool CreatePresentationRequest::UnsignedHasBeenSet() const
{
    return m_unsignedHasBeenSet;
}

vector<CredentialProof> CreatePresentationRequest::GetCredentialList() const
{
    return m_credentialList;
}

void CreatePresentationRequest::SetCredentialList(const vector<CredentialProof>& _credentialList)
{
    m_credentialList = _credentialList;
    m_credentialListHasBeenSet = true;
}

bool CreatePresentationRequest::CredentialListHasBeenSet() const
{
    return m_credentialListHasBeenSet;
}


