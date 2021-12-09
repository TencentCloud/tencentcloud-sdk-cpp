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

#include <tencentcloud/cdn/v20180606/model/AdvanceHttps.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AdvanceHttps::AdvanceHttps() :
    m_customTlsStatusHasBeenSet(false),
    m_tlsVersionHasBeenSet(false),
    m_cipherHasBeenSet(false),
    m_verifyOriginTypeHasBeenSet(false),
    m_certInfoHasBeenSet(false),
    m_originCertInfoHasBeenSet(false)
{
}

CoreInternalOutcome AdvanceHttps::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomTlsStatus") && !value["CustomTlsStatus"].IsNull())
    {
        if (!value["CustomTlsStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvanceHttps.CustomTlsStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customTlsStatus = string(value["CustomTlsStatus"].GetString());
        m_customTlsStatusHasBeenSet = true;
    }

    if (value.HasMember("TlsVersion") && !value["TlsVersion"].IsNull())
    {
        if (!value["TlsVersion"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdvanceHttps.TlsVersion` is not array type"));

        const rapidjson::Value &tmpValue = value["TlsVersion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tlsVersion.push_back((*itr).GetString());
        }
        m_tlsVersionHasBeenSet = true;
    }

    if (value.HasMember("Cipher") && !value["Cipher"].IsNull())
    {
        if (!value["Cipher"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvanceHttps.Cipher` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cipher = string(value["Cipher"].GetString());
        m_cipherHasBeenSet = true;
    }

    if (value.HasMember("VerifyOriginType") && !value["VerifyOriginType"].IsNull())
    {
        if (!value["VerifyOriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvanceHttps.VerifyOriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyOriginType = string(value["VerifyOriginType"].GetString());
        m_verifyOriginTypeHasBeenSet = true;
    }

    if (value.HasMember("CertInfo") && !value["CertInfo"].IsNull())
    {
        if (!value["CertInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdvanceHttps.CertInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certInfo.Deserialize(value["CertInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certInfoHasBeenSet = true;
    }

    if (value.HasMember("OriginCertInfo") && !value["OriginCertInfo"].IsNull())
    {
        if (!value["OriginCertInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdvanceHttps.OriginCertInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_originCertInfo.Deserialize(value["OriginCertInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originCertInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvanceHttps::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customTlsStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomTlsStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customTlsStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_tlsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TlsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tlsVersion.begin(); itr != m_tlsVersion.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cipherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cipher";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cipher.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyOriginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyOriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyOriginType.c_str(), allocator).Move(), allocator);
    }

    if (m_certInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originCertInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginCertInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originCertInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AdvanceHttps::GetCustomTlsStatus() const
{
    return m_customTlsStatus;
}

void AdvanceHttps::SetCustomTlsStatus(const string& _customTlsStatus)
{
    m_customTlsStatus = _customTlsStatus;
    m_customTlsStatusHasBeenSet = true;
}

bool AdvanceHttps::CustomTlsStatusHasBeenSet() const
{
    return m_customTlsStatusHasBeenSet;
}

vector<string> AdvanceHttps::GetTlsVersion() const
{
    return m_tlsVersion;
}

void AdvanceHttps::SetTlsVersion(const vector<string>& _tlsVersion)
{
    m_tlsVersion = _tlsVersion;
    m_tlsVersionHasBeenSet = true;
}

bool AdvanceHttps::TlsVersionHasBeenSet() const
{
    return m_tlsVersionHasBeenSet;
}

string AdvanceHttps::GetCipher() const
{
    return m_cipher;
}

void AdvanceHttps::SetCipher(const string& _cipher)
{
    m_cipher = _cipher;
    m_cipherHasBeenSet = true;
}

bool AdvanceHttps::CipherHasBeenSet() const
{
    return m_cipherHasBeenSet;
}

string AdvanceHttps::GetVerifyOriginType() const
{
    return m_verifyOriginType;
}

void AdvanceHttps::SetVerifyOriginType(const string& _verifyOriginType)
{
    m_verifyOriginType = _verifyOriginType;
    m_verifyOriginTypeHasBeenSet = true;
}

bool AdvanceHttps::VerifyOriginTypeHasBeenSet() const
{
    return m_verifyOriginTypeHasBeenSet;
}

ServerCert AdvanceHttps::GetCertInfo() const
{
    return m_certInfo;
}

void AdvanceHttps::SetCertInfo(const ServerCert& _certInfo)
{
    m_certInfo = _certInfo;
    m_certInfoHasBeenSet = true;
}

bool AdvanceHttps::CertInfoHasBeenSet() const
{
    return m_certInfoHasBeenSet;
}

ClientCert AdvanceHttps::GetOriginCertInfo() const
{
    return m_originCertInfo;
}

void AdvanceHttps::SetOriginCertInfo(const ClientCert& _originCertInfo)
{
    m_originCertInfo = _originCertInfo;
    m_originCertInfoHasBeenSet = true;
}

bool AdvanceHttps::OriginCertInfoHasBeenSet() const
{
    return m_originCertInfoHasBeenSet;
}

