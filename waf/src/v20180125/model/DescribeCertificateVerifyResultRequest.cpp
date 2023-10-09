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

#include <tencentcloud/waf/v20180125/model/DescribeCertificateVerifyResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeCertificateVerifyResultRequest::DescribeCertificateVerifyResultRequest() :
    m_domainHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_certIDHasBeenSet(false),
    m_privateKeyHasBeenSet(false)
{
}

string DescribeCertificateVerifyResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_certType, allocator);
    }

    if (m_certificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificate.c_str(), allocator).Move(), allocator);
    }

    if (m_certIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certID.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCertificateVerifyResultRequest::GetDomain() const
{
    return m_domain;
}

void DescribeCertificateVerifyResultRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeCertificateVerifyResultRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t DescribeCertificateVerifyResultRequest::GetCertType() const
{
    return m_certType;
}

void DescribeCertificateVerifyResultRequest::SetCertType(const int64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool DescribeCertificateVerifyResultRequest::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string DescribeCertificateVerifyResultRequest::GetCertificate() const
{
    return m_certificate;
}

void DescribeCertificateVerifyResultRequest::SetCertificate(const string& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool DescribeCertificateVerifyResultRequest::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

string DescribeCertificateVerifyResultRequest::GetCertID() const
{
    return m_certID;
}

void DescribeCertificateVerifyResultRequest::SetCertID(const string& _certID)
{
    m_certID = _certID;
    m_certIDHasBeenSet = true;
}

bool DescribeCertificateVerifyResultRequest::CertIDHasBeenSet() const
{
    return m_certIDHasBeenSet;
}

string DescribeCertificateVerifyResultRequest::GetPrivateKey() const
{
    return m_privateKey;
}

void DescribeCertificateVerifyResultRequest::SetPrivateKey(const string& _privateKey)
{
    m_privateKey = _privateKey;
    m_privateKeyHasBeenSet = true;
}

bool DescribeCertificateVerifyResultRequest::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}


