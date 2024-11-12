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

#include <tencentcloud/ssl/v20191205/model/CertBasicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

CertBasicInfo::CertBasicInfo() :
    m_issuerHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_fingerprintHasBeenSet(false),
    m_validFromHasBeenSet(false),
    m_validToHasBeenSet(false)
{
}

CoreInternalOutcome CertBasicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertBasicInfo.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("Subject") && !value["Subject"].IsNull())
    {
        if (!value["Subject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertBasicInfo.Subject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subject = string(value["Subject"].GetString());
        m_subjectHasBeenSet = true;
    }

    if (value.HasMember("Fingerprint") && !value["Fingerprint"].IsNull())
    {
        if (!value["Fingerprint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertBasicInfo.Fingerprint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fingerprint = string(value["Fingerprint"].GetString());
        m_fingerprintHasBeenSet = true;
    }

    if (value.HasMember("ValidFrom") && !value["ValidFrom"].IsNull())
    {
        if (!value["ValidFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertBasicInfo.ValidFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validFrom = string(value["ValidFrom"].GetString());
        m_validFromHasBeenSet = true;
    }

    if (value.HasMember("ValidTo") && !value["ValidTo"].IsNull())
    {
        if (!value["ValidTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertBasicInfo.ValidTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validTo = string(value["ValidTo"].GetString());
        m_validToHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertBasicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_issuerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issuer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuer.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subject.c_str(), allocator).Move(), allocator);
    }

    if (m_fingerprintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fingerprint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fingerprint.c_str(), allocator).Move(), allocator);
    }

    if (m_validFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_validToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validTo.c_str(), allocator).Move(), allocator);
    }

}


string CertBasicInfo::GetIssuer() const
{
    return m_issuer;
}

void CertBasicInfo::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool CertBasicInfo::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string CertBasicInfo::GetSubject() const
{
    return m_subject;
}

void CertBasicInfo::SetSubject(const string& _subject)
{
    m_subject = _subject;
    m_subjectHasBeenSet = true;
}

bool CertBasicInfo::SubjectHasBeenSet() const
{
    return m_subjectHasBeenSet;
}

string CertBasicInfo::GetFingerprint() const
{
    return m_fingerprint;
}

void CertBasicInfo::SetFingerprint(const string& _fingerprint)
{
    m_fingerprint = _fingerprint;
    m_fingerprintHasBeenSet = true;
}

bool CertBasicInfo::FingerprintHasBeenSet() const
{
    return m_fingerprintHasBeenSet;
}

string CertBasicInfo::GetValidFrom() const
{
    return m_validFrom;
}

void CertBasicInfo::SetValidFrom(const string& _validFrom)
{
    m_validFrom = _validFrom;
    m_validFromHasBeenSet = true;
}

bool CertBasicInfo::ValidFromHasBeenSet() const
{
    return m_validFromHasBeenSet;
}

string CertBasicInfo::GetValidTo() const
{
    return m_validTo;
}

void CertBasicInfo::SetValidTo(const string& _validTo)
{
    m_validTo = _validTo;
    m_validToHasBeenSet = true;
}

bool CertBasicInfo::ValidToHasBeenSet() const
{
    return m_validToHasBeenSet;
}

