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

#include <tencentcloud/ess/v20201111/model/SignCertificate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

SignCertificate::SignCertificate() :
    m_serialNumberHasBeenSet(false),
    m_commonNameHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_issuerCommonNameHasBeenSet(false)
{
}

CoreInternalOutcome SignCertificate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SerialNumber") && !value["SerialNumber"].IsNull())
    {
        if (!value["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignCertificate.SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(value["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
    }

    if (value.HasMember("CommonName") && !value["CommonName"].IsNull())
    {
        if (!value["CommonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignCertificate.CommonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commonName = string(value["CommonName"].GetString());
        m_commonNameHasBeenSet = true;
    }

    if (value.HasMember("NotBefore") && !value["NotBefore"].IsNull())
    {
        if (!value["NotBefore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SignCertificate.NotBefore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notBefore = value["NotBefore"].GetInt64();
        m_notBeforeHasBeenSet = true;
    }

    if (value.HasMember("NotAfter") && !value["NotAfter"].IsNull())
    {
        if (!value["NotAfter"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SignCertificate.NotAfter` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notAfter = value["NotAfter"].GetInt64();
        m_notAfterHasBeenSet = true;
    }

    if (value.HasMember("IssuerCommonName") && !value["IssuerCommonName"].IsNull())
    {
        if (!value["IssuerCommonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignCertificate.IssuerCommonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuerCommonName = string(value["IssuerCommonName"].GetString());
        m_issuerCommonNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SignCertificate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_commonNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commonName.c_str(), allocator).Move(), allocator);
    }

    if (m_notBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotBefore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notBefore, allocator);
    }

    if (m_notAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notAfter, allocator);
    }

    if (m_issuerCommonNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuerCommonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuerCommonName.c_str(), allocator).Move(), allocator);
    }

}


string SignCertificate::GetSerialNumber() const
{
    return m_serialNumber;
}

void SignCertificate::SetSerialNumber(const string& _serialNumber)
{
    m_serialNumber = _serialNumber;
    m_serialNumberHasBeenSet = true;
}

bool SignCertificate::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

string SignCertificate::GetCommonName() const
{
    return m_commonName;
}

void SignCertificate::SetCommonName(const string& _commonName)
{
    m_commonName = _commonName;
    m_commonNameHasBeenSet = true;
}

bool SignCertificate::CommonNameHasBeenSet() const
{
    return m_commonNameHasBeenSet;
}

int64_t SignCertificate::GetNotBefore() const
{
    return m_notBefore;
}

void SignCertificate::SetNotBefore(const int64_t& _notBefore)
{
    m_notBefore = _notBefore;
    m_notBeforeHasBeenSet = true;
}

bool SignCertificate::NotBeforeHasBeenSet() const
{
    return m_notBeforeHasBeenSet;
}

int64_t SignCertificate::GetNotAfter() const
{
    return m_notAfter;
}

void SignCertificate::SetNotAfter(const int64_t& _notAfter)
{
    m_notAfter = _notAfter;
    m_notAfterHasBeenSet = true;
}

bool SignCertificate::NotAfterHasBeenSet() const
{
    return m_notAfterHasBeenSet;
}

string SignCertificate::GetIssuerCommonName() const
{
    return m_issuerCommonName;
}

void SignCertificate::SetIssuerCommonName(const string& _issuerCommonName)
{
    m_issuerCommonName = _issuerCommonName;
    m_issuerCommonNameHasBeenSet = true;
}

bool SignCertificate::IssuerCommonNameHasBeenSet() const
{
    return m_issuerCommonNameHasBeenSet;
}

