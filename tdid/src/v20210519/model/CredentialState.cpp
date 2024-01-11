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

#include <tencentcloud/tdid/v20210519/model/CredentialState.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

CredentialState::CredentialState() :
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_vCDigestHasBeenSet(false),
    m_tXDigestHasBeenSet(false),
    m_issueTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_cPTIdHasBeenSet(false),
    m_signatureHasBeenSet(false),
    m_metaDigestHasBeenSet(false)
{
}

CoreInternalOutcome CredentialState::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialState.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialState.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialState.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("VCDigest") && !value["VCDigest"].IsNull())
    {
        if (!value["VCDigest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialState.VCDigest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vCDigest = string(value["VCDigest"].GetString());
        m_vCDigestHasBeenSet = true;
    }

    if (value.HasMember("TXDigest") && !value["TXDigest"].IsNull())
    {
        if (!value["TXDigest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialState.TXDigest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tXDigest = string(value["TXDigest"].GetString());
        m_tXDigestHasBeenSet = true;
    }

    if (value.HasMember("IssueTime") && !value["IssueTime"].IsNull())
    {
        if (!value["IssueTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialState.IssueTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_issueTime = value["IssueTime"].GetUint64();
        m_issueTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialState.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("CPTId") && !value["CPTId"].IsNull())
    {
        if (!value["CPTId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialState.CPTId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPTId = value["CPTId"].GetUint64();
        m_cPTIdHasBeenSet = true;
    }

    if (value.HasMember("Signature") && !value["Signature"].IsNull())
    {
        if (!value["Signature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialState.Signature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signature = string(value["Signature"].GetString());
        m_signatureHasBeenSet = true;
    }

    if (value.HasMember("MetaDigest") && !value["MetaDigest"].IsNull())
    {
        if (!value["MetaDigest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialState.MetaDigest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaDigest = string(value["MetaDigest"].GetString());
        m_metaDigestHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CredentialState::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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

    if (m_vCDigestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VCDigest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vCDigest.c_str(), allocator).Move(), allocator);
    }

    if (m_tXDigestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TXDigest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tXDigest.c_str(), allocator).Move(), allocator);
    }

    if (m_issueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_issueTime, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_cPTIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPTId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPTId, allocator);
    }

    if (m_signatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Signature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signature.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDigestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaDigest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaDigest.c_str(), allocator).Move(), allocator);
    }

}


string CredentialState::GetId() const
{
    return m_id;
}

void CredentialState::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CredentialState::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t CredentialState::GetStatus() const
{
    return m_status;
}

void CredentialState::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CredentialState::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CredentialState::GetIssuer() const
{
    return m_issuer;
}

void CredentialState::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool CredentialState::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string CredentialState::GetVCDigest() const
{
    return m_vCDigest;
}

void CredentialState::SetVCDigest(const string& _vCDigest)
{
    m_vCDigest = _vCDigest;
    m_vCDigestHasBeenSet = true;
}

bool CredentialState::VCDigestHasBeenSet() const
{
    return m_vCDigestHasBeenSet;
}

string CredentialState::GetTXDigest() const
{
    return m_tXDigest;
}

void CredentialState::SetTXDigest(const string& _tXDigest)
{
    m_tXDigest = _tXDigest;
    m_tXDigestHasBeenSet = true;
}

bool CredentialState::TXDigestHasBeenSet() const
{
    return m_tXDigestHasBeenSet;
}

uint64_t CredentialState::GetIssueTime() const
{
    return m_issueTime;
}

void CredentialState::SetIssueTime(const uint64_t& _issueTime)
{
    m_issueTime = _issueTime;
    m_issueTimeHasBeenSet = true;
}

bool CredentialState::IssueTimeHasBeenSet() const
{
    return m_issueTimeHasBeenSet;
}

uint64_t CredentialState::GetExpireTime() const
{
    return m_expireTime;
}

void CredentialState::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CredentialState::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t CredentialState::GetCPTId() const
{
    return m_cPTId;
}

void CredentialState::SetCPTId(const uint64_t& _cPTId)
{
    m_cPTId = _cPTId;
    m_cPTIdHasBeenSet = true;
}

bool CredentialState::CPTIdHasBeenSet() const
{
    return m_cPTIdHasBeenSet;
}

string CredentialState::GetSignature() const
{
    return m_signature;
}

void CredentialState::SetSignature(const string& _signature)
{
    m_signature = _signature;
    m_signatureHasBeenSet = true;
}

bool CredentialState::SignatureHasBeenSet() const
{
    return m_signatureHasBeenSet;
}

string CredentialState::GetMetaDigest() const
{
    return m_metaDigest;
}

void CredentialState::SetMetaDigest(const string& _metaDigest)
{
    m_metaDigest = _metaDigest;
    m_metaDigestHasBeenSet = true;
}

bool CredentialState::MetaDigestHasBeenSet() const
{
    return m_metaDigestHasBeenSet;
}

