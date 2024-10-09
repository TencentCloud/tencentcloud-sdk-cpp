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
    m_privateKeyHasBeenSet(false),
    m_gmCertTypeHasBeenSet(false),
    m_gmCertHasBeenSet(false),
    m_gmPrivateKeyHasBeenSet(false),
    m_gmEncCertHasBeenSet(false),
    m_gmEncPrivateKeyHasBeenSet(false),
    m_gmSSLIdHasBeenSet(false)
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

    if (m_gmCertTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmCertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gmCertType, allocator);
    }

    if (m_gmCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmCert";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gmCert.c_str(), allocator).Move(), allocator);
    }

    if (m_gmPrivateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmPrivateKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gmPrivateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_gmEncCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmEncCert";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gmEncCert.c_str(), allocator).Move(), allocator);
    }

    if (m_gmEncPrivateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmEncPrivateKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gmEncPrivateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_gmSSLIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmSSLId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gmSSLId.c_str(), allocator).Move(), allocator);
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

int64_t DescribeCertificateVerifyResultRequest::GetGmCertType() const
{
    return m_gmCertType;
}

void DescribeCertificateVerifyResultRequest::SetGmCertType(const int64_t& _gmCertType)
{
    m_gmCertType = _gmCertType;
    m_gmCertTypeHasBeenSet = true;
}

bool DescribeCertificateVerifyResultRequest::GmCertTypeHasBeenSet() const
{
    return m_gmCertTypeHasBeenSet;
}

string DescribeCertificateVerifyResultRequest::GetGmCert() const
{
    return m_gmCert;
}

void DescribeCertificateVerifyResultRequest::SetGmCert(const string& _gmCert)
{
    m_gmCert = _gmCert;
    m_gmCertHasBeenSet = true;
}

bool DescribeCertificateVerifyResultRequest::GmCertHasBeenSet() const
{
    return m_gmCertHasBeenSet;
}

string DescribeCertificateVerifyResultRequest::GetGmPrivateKey() const
{
    return m_gmPrivateKey;
}

void DescribeCertificateVerifyResultRequest::SetGmPrivateKey(const string& _gmPrivateKey)
{
    m_gmPrivateKey = _gmPrivateKey;
    m_gmPrivateKeyHasBeenSet = true;
}

bool DescribeCertificateVerifyResultRequest::GmPrivateKeyHasBeenSet() const
{
    return m_gmPrivateKeyHasBeenSet;
}

string DescribeCertificateVerifyResultRequest::GetGmEncCert() const
{
    return m_gmEncCert;
}

void DescribeCertificateVerifyResultRequest::SetGmEncCert(const string& _gmEncCert)
{
    m_gmEncCert = _gmEncCert;
    m_gmEncCertHasBeenSet = true;
}

bool DescribeCertificateVerifyResultRequest::GmEncCertHasBeenSet() const
{
    return m_gmEncCertHasBeenSet;
}

string DescribeCertificateVerifyResultRequest::GetGmEncPrivateKey() const
{
    return m_gmEncPrivateKey;
}

void DescribeCertificateVerifyResultRequest::SetGmEncPrivateKey(const string& _gmEncPrivateKey)
{
    m_gmEncPrivateKey = _gmEncPrivateKey;
    m_gmEncPrivateKeyHasBeenSet = true;
}

bool DescribeCertificateVerifyResultRequest::GmEncPrivateKeyHasBeenSet() const
{
    return m_gmEncPrivateKeyHasBeenSet;
}

string DescribeCertificateVerifyResultRequest::GetGmSSLId() const
{
    return m_gmSSLId;
}

void DescribeCertificateVerifyResultRequest::SetGmSSLId(const string& _gmSSLId)
{
    m_gmSSLId = _gmSSLId;
    m_gmSSLIdHasBeenSet = true;
}

bool DescribeCertificateVerifyResultRequest::GmSSLIdHasBeenSet() const
{
    return m_gmSSLIdHasBeenSet;
}


