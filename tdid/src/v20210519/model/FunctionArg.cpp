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

#include <tencentcloud/tdid/v20210519/model/FunctionArg.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

FunctionArg::FunctionArg() :
    m_cptIdHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_claimJsonHasBeenSet(false)
{
}

CoreInternalOutcome FunctionArg::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CptId") && !value["CptId"].IsNull())
    {
        if (!value["CptId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionArg.CptId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cptId = value["CptId"].GetUint64();
        m_cptIdHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionArg.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionArg.ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(value["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("ClaimJson") && !value["ClaimJson"].IsNull())
    {
        if (!value["ClaimJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionArg.ClaimJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_claimJson = string(value["ClaimJson"].GetString());
        m_claimJsonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FunctionArg::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(m_expirationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_claimJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClaimJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_claimJson.c_str(), allocator).Move(), allocator);
    }

}


uint64_t FunctionArg::GetCptId() const
{
    return m_cptId;
}

void FunctionArg::SetCptId(const uint64_t& _cptId)
{
    m_cptId = _cptId;
    m_cptIdHasBeenSet = true;
}

bool FunctionArg::CptIdHasBeenSet() const
{
    return m_cptIdHasBeenSet;
}

string FunctionArg::GetIssuer() const
{
    return m_issuer;
}

void FunctionArg::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool FunctionArg::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string FunctionArg::GetExpirationDate() const
{
    return m_expirationDate;
}

void FunctionArg::SetExpirationDate(const string& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool FunctionArg::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

string FunctionArg::GetClaimJson() const
{
    return m_claimJson;
}

void FunctionArg::SetClaimJson(const string& _claimJson)
{
    m_claimJson = _claimJson;
    m_claimJsonHasBeenSet = true;
}

bool FunctionArg::ClaimJsonHasBeenSet() const
{
    return m_claimJsonHasBeenSet;
}

