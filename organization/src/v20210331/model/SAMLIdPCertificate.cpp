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

#include <tencentcloud/organization/v20210331/model/SAMLIdPCertificate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

SAMLIdPCertificate::SAMLIdPCertificate() :
    m_serialNumberHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_signatureAlgorithmHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_x509CertificateHasBeenSet(false)
{
}

CoreInternalOutcome SAMLIdPCertificate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SerialNumber") && !value["SerialNumber"].IsNull())
    {
        if (!value["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdPCertificate.SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(value["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdPCertificate.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdPCertificate.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("CertificateId") && !value["CertificateId"].IsNull())
    {
        if (!value["CertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdPCertificate.CertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = string(value["CertificateId"].GetString());
        m_certificateIdHasBeenSet = true;
    }

    if (value.HasMember("PublicKey") && !value["PublicKey"].IsNull())
    {
        if (!value["PublicKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdPCertificate.PublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicKey = string(value["PublicKey"].GetString());
        m_publicKeyHasBeenSet = true;
    }

    if (value.HasMember("SignatureAlgorithm") && !value["SignatureAlgorithm"].IsNull())
    {
        if (!value["SignatureAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdPCertificate.SignatureAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signatureAlgorithm = string(value["SignatureAlgorithm"].GetString());
        m_signatureAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("NotAfter") && !value["NotAfter"].IsNull())
    {
        if (!value["NotAfter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdPCertificate.NotAfter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notAfter = string(value["NotAfter"].GetString());
        m_notAfterHasBeenSet = true;
    }

    if (value.HasMember("NotBefore") && !value["NotBefore"].IsNull())
    {
        if (!value["NotBefore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdPCertificate.NotBefore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notBefore = string(value["NotBefore"].GetString());
        m_notBeforeHasBeenSet = true;
    }

    if (value.HasMember("Subject") && !value["Subject"].IsNull())
    {
        if (!value["Subject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdPCertificate.Subject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subject = string(value["Subject"].GetString());
        m_subjectHasBeenSet = true;
    }

    if (value.HasMember("X509Certificate") && !value["X509Certificate"].IsNull())
    {
        if (!value["X509Certificate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdPCertificate.X509Certificate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_x509Certificate = string(value["X509Certificate"].GetString());
        m_x509CertificateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SAMLIdPCertificate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_issuerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issuer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuer.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_publicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_signatureAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signatureAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_notAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notAfter.c_str(), allocator).Move(), allocator);
    }

    if (m_notBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotBefore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notBefore.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subject.c_str(), allocator).Move(), allocator);
    }

    if (m_x509CertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X509Certificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_x509Certificate.c_str(), allocator).Move(), allocator);
    }

}


string SAMLIdPCertificate::GetSerialNumber() const
{
    return m_serialNumber;
}

void SAMLIdPCertificate::SetSerialNumber(const string& _serialNumber)
{
    m_serialNumber = _serialNumber;
    m_serialNumberHasBeenSet = true;
}

bool SAMLIdPCertificate::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

string SAMLIdPCertificate::GetIssuer() const
{
    return m_issuer;
}

void SAMLIdPCertificate::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool SAMLIdPCertificate::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

int64_t SAMLIdPCertificate::GetVersion() const
{
    return m_version;
}

void SAMLIdPCertificate::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SAMLIdPCertificate::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string SAMLIdPCertificate::GetCertificateId() const
{
    return m_certificateId;
}

void SAMLIdPCertificate::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool SAMLIdPCertificate::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string SAMLIdPCertificate::GetPublicKey() const
{
    return m_publicKey;
}

void SAMLIdPCertificate::SetPublicKey(const string& _publicKey)
{
    m_publicKey = _publicKey;
    m_publicKeyHasBeenSet = true;
}

bool SAMLIdPCertificate::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

string SAMLIdPCertificate::GetSignatureAlgorithm() const
{
    return m_signatureAlgorithm;
}

void SAMLIdPCertificate::SetSignatureAlgorithm(const string& _signatureAlgorithm)
{
    m_signatureAlgorithm = _signatureAlgorithm;
    m_signatureAlgorithmHasBeenSet = true;
}

bool SAMLIdPCertificate::SignatureAlgorithmHasBeenSet() const
{
    return m_signatureAlgorithmHasBeenSet;
}

string SAMLIdPCertificate::GetNotAfter() const
{
    return m_notAfter;
}

void SAMLIdPCertificate::SetNotAfter(const string& _notAfter)
{
    m_notAfter = _notAfter;
    m_notAfterHasBeenSet = true;
}

bool SAMLIdPCertificate::NotAfterHasBeenSet() const
{
    return m_notAfterHasBeenSet;
}

string SAMLIdPCertificate::GetNotBefore() const
{
    return m_notBefore;
}

void SAMLIdPCertificate::SetNotBefore(const string& _notBefore)
{
    m_notBefore = _notBefore;
    m_notBeforeHasBeenSet = true;
}

bool SAMLIdPCertificate::NotBeforeHasBeenSet() const
{
    return m_notBeforeHasBeenSet;
}

string SAMLIdPCertificate::GetSubject() const
{
    return m_subject;
}

void SAMLIdPCertificate::SetSubject(const string& _subject)
{
    m_subject = _subject;
    m_subjectHasBeenSet = true;
}

bool SAMLIdPCertificate::SubjectHasBeenSet() const
{
    return m_subjectHasBeenSet;
}

string SAMLIdPCertificate::GetX509Certificate() const
{
    return m_x509Certificate;
}

void SAMLIdPCertificate::SetX509Certificate(const string& _x509Certificate)
{
    m_x509Certificate = _x509Certificate;
    m_x509CertificateHasBeenSet = true;
}

bool SAMLIdPCertificate::X509CertificateHasBeenSet() const
{
    return m_x509CertificateHasBeenSet;
}

