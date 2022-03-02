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

#include <tencentcloud/tdid/v20210519/model/CredentialStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

CredentialStatus::CredentialStatus() :
    m_credentialIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_digestHasBeenSet(false),
    m_signatureHasBeenSet(false),
    m_timeStampHasBeenSet(false)
{
}

CoreInternalOutcome CredentialStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CredentialId") && !value["CredentialId"].IsNull())
    {
        if (!value["CredentialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialStatus.CredentialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialId = string(value["CredentialId"].GetString());
        m_credentialIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialStatus.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialStatus.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("Digest") && !value["Digest"].IsNull())
    {
        if (!value["Digest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialStatus.Digest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_digest = string(value["Digest"].GetString());
        m_digestHasBeenSet = true;
    }

    if (value.HasMember("Signature") && !value["Signature"].IsNull())
    {
        if (!value["Signature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialStatus.Signature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signature = string(value["Signature"].GetString());
        m_signatureHasBeenSet = true;
    }

    if (value.HasMember("TimeStamp") && !value["TimeStamp"].IsNull())
    {
        if (!value["TimeStamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialStatus.TimeStamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeStamp = value["TimeStamp"].GetUint64();
        m_timeStampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CredentialStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_credentialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_issuerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issuer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuer.c_str(), allocator).Move(), allocator);
    }

    if (m_digestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Digest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_digest.c_str(), allocator).Move(), allocator);
    }

    if (m_signatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Signature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signature.c_str(), allocator).Move(), allocator);
    }

    if (m_timeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeStamp, allocator);
    }

}


string CredentialStatus::GetCredentialId() const
{
    return m_credentialId;
}

void CredentialStatus::SetCredentialId(const string& _credentialId)
{
    m_credentialId = _credentialId;
    m_credentialIdHasBeenSet = true;
}

bool CredentialStatus::CredentialIdHasBeenSet() const
{
    return m_credentialIdHasBeenSet;
}

uint64_t CredentialStatus::GetStatus() const
{
    return m_status;
}

void CredentialStatus::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CredentialStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CredentialStatus::GetIssuer() const
{
    return m_issuer;
}

void CredentialStatus::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool CredentialStatus::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string CredentialStatus::GetDigest() const
{
    return m_digest;
}

void CredentialStatus::SetDigest(const string& _digest)
{
    m_digest = _digest;
    m_digestHasBeenSet = true;
}

bool CredentialStatus::DigestHasBeenSet() const
{
    return m_digestHasBeenSet;
}

string CredentialStatus::GetSignature() const
{
    return m_signature;
}

void CredentialStatus::SetSignature(const string& _signature)
{
    m_signature = _signature;
    m_signatureHasBeenSet = true;
}

bool CredentialStatus::SignatureHasBeenSet() const
{
    return m_signatureHasBeenSet;
}

uint64_t CredentialStatus::GetTimeStamp() const
{
    return m_timeStamp;
}

void CredentialStatus::SetTimeStamp(const uint64_t& _timeStamp)
{
    m_timeStamp = _timeStamp;
    m_timeStampHasBeenSet = true;
}

bool CredentialStatus::TimeStampHasBeenSet() const
{
    return m_timeStampHasBeenSet;
}

