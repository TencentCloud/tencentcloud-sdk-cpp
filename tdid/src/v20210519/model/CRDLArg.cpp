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

#include <tencentcloud/tdid/v20210519/model/CRDLArg.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

CRDLArg::CRDLArg() :
    m_cPTIdHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_claimJsonHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_partiesHasBeenSet(false)
{
}

CoreInternalOutcome CRDLArg::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CPTId") && !value["CPTId"].IsNull())
    {
        if (!value["CPTId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CRDLArg.CPTId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPTId = value["CPTId"].GetUint64();
        m_cPTIdHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CRDLArg.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CRDLArg.ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(value["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("ClaimJson") && !value["ClaimJson"].IsNull())
    {
        if (!value["ClaimJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CRDLArg.ClaimJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_claimJson = string(value["ClaimJson"].GetString());
        m_claimJsonHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CRDLArg.Type` is not array type"));

        const rapidjson::Value &tmpValue = value["Type"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_type.push_back((*itr).GetString());
        }
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Parties") && !value["Parties"].IsNull())
    {
        if (!value["Parties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CRDLArg.Parties` is not array type"));

        const rapidjson::Value &tmpValue = value["Parties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_parties.push_back((*itr).GetString());
        }
        m_partiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CRDLArg::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cPTIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPTId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPTId, allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_expirationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_claimJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClaimJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_claimJson.c_str(), allocator).Move(), allocator);
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

    if (m_partiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_parties.begin(); itr != m_parties.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t CRDLArg::GetCPTId() const
{
    return m_cPTId;
}

void CRDLArg::SetCPTId(const uint64_t& _cPTId)
{
    m_cPTId = _cPTId;
    m_cPTIdHasBeenSet = true;
}

bool CRDLArg::CPTIdHasBeenSet() const
{
    return m_cPTIdHasBeenSet;
}

string CRDLArg::GetIssuer() const
{
    return m_issuer;
}

void CRDLArg::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool CRDLArg::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string CRDLArg::GetExpirationDate() const
{
    return m_expirationDate;
}

void CRDLArg::SetExpirationDate(const string& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool CRDLArg::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

string CRDLArg::GetClaimJson() const
{
    return m_claimJson;
}

void CRDLArg::SetClaimJson(const string& _claimJson)
{
    m_claimJson = _claimJson;
    m_claimJsonHasBeenSet = true;
}

bool CRDLArg::ClaimJsonHasBeenSet() const
{
    return m_claimJsonHasBeenSet;
}

vector<string> CRDLArg::GetType() const
{
    return m_type;
}

void CRDLArg::SetType(const vector<string>& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CRDLArg::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> CRDLArg::GetParties() const
{
    return m_parties;
}

void CRDLArg::SetParties(const vector<string>& _parties)
{
    m_parties = _parties;
    m_partiesHasBeenSet = true;
}

bool CRDLArg::PartiesHasBeenSet() const
{
    return m_partiesHasBeenSet;
}

