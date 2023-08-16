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

#include <tencentcloud/ssl/v20191205/model/ReplaceCertificateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

ReplaceCertificateRequest::ReplaceCertificateRequest() :
    m_certificateIdHasBeenSet(false),
    m_validTypeHasBeenSet(false),
    m_csrTypeHasBeenSet(false),
    m_csrContentHasBeenSet(false),
    m_csrkeyPasswordHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_certCSREncryptAlgoHasBeenSet(false),
    m_certCSRKeyParameterHasBeenSet(false)
{
}

string ReplaceCertificateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_validTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validType.c_str(), allocator).Move(), allocator);
    }

    if (m_csrTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CsrType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_csrType.c_str(), allocator).Move(), allocator);
    }

    if (m_csrContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CsrContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_csrContent.c_str(), allocator).Move(), allocator);
    }

    if (m_csrkeyPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CsrkeyPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_csrkeyPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_certCSREncryptAlgoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertCSREncryptAlgo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certCSREncryptAlgo.c_str(), allocator).Move(), allocator);
    }

    if (m_certCSRKeyParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertCSRKeyParameter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certCSRKeyParameter.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReplaceCertificateRequest::GetCertificateId() const
{
    return m_certificateId;
}

void ReplaceCertificateRequest::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool ReplaceCertificateRequest::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string ReplaceCertificateRequest::GetValidType() const
{
    return m_validType;
}

void ReplaceCertificateRequest::SetValidType(const string& _validType)
{
    m_validType = _validType;
    m_validTypeHasBeenSet = true;
}

bool ReplaceCertificateRequest::ValidTypeHasBeenSet() const
{
    return m_validTypeHasBeenSet;
}

string ReplaceCertificateRequest::GetCsrType() const
{
    return m_csrType;
}

void ReplaceCertificateRequest::SetCsrType(const string& _csrType)
{
    m_csrType = _csrType;
    m_csrTypeHasBeenSet = true;
}

bool ReplaceCertificateRequest::CsrTypeHasBeenSet() const
{
    return m_csrTypeHasBeenSet;
}

string ReplaceCertificateRequest::GetCsrContent() const
{
    return m_csrContent;
}

void ReplaceCertificateRequest::SetCsrContent(const string& _csrContent)
{
    m_csrContent = _csrContent;
    m_csrContentHasBeenSet = true;
}

bool ReplaceCertificateRequest::CsrContentHasBeenSet() const
{
    return m_csrContentHasBeenSet;
}

string ReplaceCertificateRequest::GetCsrkeyPassword() const
{
    return m_csrkeyPassword;
}

void ReplaceCertificateRequest::SetCsrkeyPassword(const string& _csrkeyPassword)
{
    m_csrkeyPassword = _csrkeyPassword;
    m_csrkeyPasswordHasBeenSet = true;
}

bool ReplaceCertificateRequest::CsrkeyPasswordHasBeenSet() const
{
    return m_csrkeyPasswordHasBeenSet;
}

string ReplaceCertificateRequest::GetReason() const
{
    return m_reason;
}

void ReplaceCertificateRequest::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ReplaceCertificateRequest::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string ReplaceCertificateRequest::GetCertCSREncryptAlgo() const
{
    return m_certCSREncryptAlgo;
}

void ReplaceCertificateRequest::SetCertCSREncryptAlgo(const string& _certCSREncryptAlgo)
{
    m_certCSREncryptAlgo = _certCSREncryptAlgo;
    m_certCSREncryptAlgoHasBeenSet = true;
}

bool ReplaceCertificateRequest::CertCSREncryptAlgoHasBeenSet() const
{
    return m_certCSREncryptAlgoHasBeenSet;
}

string ReplaceCertificateRequest::GetCertCSRKeyParameter() const
{
    return m_certCSRKeyParameter;
}

void ReplaceCertificateRequest::SetCertCSRKeyParameter(const string& _certCSRKeyParameter)
{
    m_certCSRKeyParameter = _certCSRKeyParameter;
    m_certCSRKeyParameterHasBeenSet = true;
}

bool ReplaceCertificateRequest::CertCSRKeyParameterHasBeenSet() const
{
    return m_certCSRKeyParameterHasBeenSet;
}


