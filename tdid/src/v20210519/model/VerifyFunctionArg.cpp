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

#include <tencentcloud/tdid/v20210519/model/VerifyFunctionArg.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

VerifyFunctionArg::VerifyFunctionArg() :
    m_cptIdHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_claimJsonHasBeenSet(false),
    m_issuanceDateHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_idHasBeenSet(false),
    m_proofHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome VerifyFunctionArg::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CptId") && !value["CptId"].IsNull())
    {
        if (!value["CptId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyFunctionArg.CptId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cptId = value["CptId"].GetUint64();
        m_cptIdHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyFunctionArg.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyFunctionArg.ExpirationDate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = value["ExpirationDate"].GetInt64();
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("ClaimJson") && !value["ClaimJson"].IsNull())
    {
        if (!value["ClaimJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyFunctionArg.ClaimJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_claimJson = string(value["ClaimJson"].GetString());
        m_claimJsonHasBeenSet = true;
    }

    if (value.HasMember("IssuanceDate") && !value["IssuanceDate"].IsNull())
    {
        if (!value["IssuanceDate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyFunctionArg.IssuanceDate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_issuanceDate = value["IssuanceDate"].GetInt64();
        m_issuanceDateHasBeenSet = true;
    }

    if (value.HasMember("Context") && !value["Context"].IsNull())
    {
        if (!value["Context"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyFunctionArg.Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(value["Context"].GetString());
        m_contextHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyFunctionArg.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Proof") && !value["Proof"].IsNull())
    {
        if (!value["Proof"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyFunctionArg.Proof` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_proof.Deserialize(value["Proof"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_proofHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VerifyFunctionArg.Type` is not array type"));

        const rapidjson::Value &tmpValue = value["Type"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_type.push_back((*itr).GetString());
        }
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VerifyFunctionArg::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cptId, allocator);
    }

    if (m_issuerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issuer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuer.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expirationDate, allocator);
    }

    if (m_claimJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClaimJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_claimJson.c_str(), allocator).Move(), allocator);
    }

    if (m_issuanceDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuanceDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_issuanceDate, allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_proofHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proof";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_proof.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_type.begin(); itr != m_type.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t VerifyFunctionArg::GetCptId() const
{
    return m_cptId;
}

void VerifyFunctionArg::SetCptId(const uint64_t& _cptId)
{
    m_cptId = _cptId;
    m_cptIdHasBeenSet = true;
}

bool VerifyFunctionArg::CptIdHasBeenSet() const
{
    return m_cptIdHasBeenSet;
}

string VerifyFunctionArg::GetIssuer() const
{
    return m_issuer;
}

void VerifyFunctionArg::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool VerifyFunctionArg::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

int64_t VerifyFunctionArg::GetExpirationDate() const
{
    return m_expirationDate;
}

void VerifyFunctionArg::SetExpirationDate(const int64_t& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool VerifyFunctionArg::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

string VerifyFunctionArg::GetClaimJson() const
{
    return m_claimJson;
}

void VerifyFunctionArg::SetClaimJson(const string& _claimJson)
{
    m_claimJson = _claimJson;
    m_claimJsonHasBeenSet = true;
}

bool VerifyFunctionArg::ClaimJsonHasBeenSet() const
{
    return m_claimJsonHasBeenSet;
}

int64_t VerifyFunctionArg::GetIssuanceDate() const
{
    return m_issuanceDate;
}

void VerifyFunctionArg::SetIssuanceDate(const int64_t& _issuanceDate)
{
    m_issuanceDate = _issuanceDate;
    m_issuanceDateHasBeenSet = true;
}

bool VerifyFunctionArg::IssuanceDateHasBeenSet() const
{
    return m_issuanceDateHasBeenSet;
}

string VerifyFunctionArg::GetContext() const
{
    return m_context;
}

void VerifyFunctionArg::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool VerifyFunctionArg::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

string VerifyFunctionArg::GetId() const
{
    return m_id;
}

void VerifyFunctionArg::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool VerifyFunctionArg::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

Proof VerifyFunctionArg::GetProof() const
{
    return m_proof;
}

void VerifyFunctionArg::SetProof(const Proof& _proof)
{
    m_proof = _proof;
    m_proofHasBeenSet = true;
}

bool VerifyFunctionArg::ProofHasBeenSet() const
{
    return m_proofHasBeenSet;
}

vector<string> VerifyFunctionArg::GetType() const
{
    return m_type;
}

void VerifyFunctionArg::SetType(const vector<string>& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VerifyFunctionArg::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

