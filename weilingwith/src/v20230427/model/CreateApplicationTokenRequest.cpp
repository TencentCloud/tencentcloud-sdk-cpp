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

#include <tencentcloud/weilingwith/v20230427/model/CreateApplicationTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

CreateApplicationTokenRequest::CreateApplicationTokenRequest() :
    m_applicationIdHasBeenSet(false),
    m_nonceHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_signatureHasBeenSet(false)
{
}

string CreateApplicationTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicationId, allocator);
    }

    if (m_nonceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nonce";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nonce.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tenantId, allocator);
    }

    if (m_requestTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_requestTime, allocator);
    }

    if (m_signatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Signature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signature.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateApplicationTokenRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateApplicationTokenRequest::SetApplicationId(const uint64_t& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateApplicationTokenRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string CreateApplicationTokenRequest::GetNonce() const
{
    return m_nonce;
}

void CreateApplicationTokenRequest::SetNonce(const string& _nonce)
{
    m_nonce = _nonce;
    m_nonceHasBeenSet = true;
}

bool CreateApplicationTokenRequest::NonceHasBeenSet() const
{
    return m_nonceHasBeenSet;
}

uint64_t CreateApplicationTokenRequest::GetTenantId() const
{
    return m_tenantId;
}

void CreateApplicationTokenRequest::SetTenantId(const uint64_t& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool CreateApplicationTokenRequest::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

uint64_t CreateApplicationTokenRequest::GetRequestTime() const
{
    return m_requestTime;
}

void CreateApplicationTokenRequest::SetRequestTime(const uint64_t& _requestTime)
{
    m_requestTime = _requestTime;
    m_requestTimeHasBeenSet = true;
}

bool CreateApplicationTokenRequest::RequestTimeHasBeenSet() const
{
    return m_requestTimeHasBeenSet;
}

string CreateApplicationTokenRequest::GetSignature() const
{
    return m_signature;
}

void CreateApplicationTokenRequest::SetSignature(const string& _signature)
{
    m_signature = _signature;
    m_signatureHasBeenSet = true;
}

bool CreateApplicationTokenRequest::SignatureHasBeenSet() const
{
    return m_signatureHasBeenSet;
}


