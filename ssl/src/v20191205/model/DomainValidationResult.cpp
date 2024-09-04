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

#include <tencentcloud/ssl/v20191205/model/DomainValidationResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DomainValidationResult::DomainValidationResult() :
    m_domainHasBeenSet(false),
    m_verifyTypeHasBeenSet(false),
    m_localCheckHasBeenSet(false),
    m_caCheckHasBeenSet(false),
    m_localCheckFailReasonHasBeenSet(false),
    m_checkValueHasBeenSet(false),
    m_frequentlyHasBeenSet(false),
    m_issuedHasBeenSet(false)
{
}

CoreInternalOutcome DomainValidationResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainValidationResult.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("VerifyType") && !value["VerifyType"].IsNull())
    {
        if (!value["VerifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainValidationResult.VerifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyType = string(value["VerifyType"].GetString());
        m_verifyTypeHasBeenSet = true;
    }

    if (value.HasMember("LocalCheck") && !value["LocalCheck"].IsNull())
    {
        if (!value["LocalCheck"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainValidationResult.LocalCheck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_localCheck = value["LocalCheck"].GetInt64();
        m_localCheckHasBeenSet = true;
    }

    if (value.HasMember("CaCheck") && !value["CaCheck"].IsNull())
    {
        if (!value["CaCheck"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainValidationResult.CaCheck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_caCheck = value["CaCheck"].GetInt64();
        m_caCheckHasBeenSet = true;
    }

    if (value.HasMember("LocalCheckFailReason") && !value["LocalCheckFailReason"].IsNull())
    {
        if (!value["LocalCheckFailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainValidationResult.LocalCheckFailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localCheckFailReason = string(value["LocalCheckFailReason"].GetString());
        m_localCheckFailReasonHasBeenSet = true;
    }

    if (value.HasMember("CheckValue") && !value["CheckValue"].IsNull())
    {
        if (!value["CheckValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainValidationResult.CheckValue` is not array type"));

        const rapidjson::Value &tmpValue = value["CheckValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_checkValue.push_back((*itr).GetString());
        }
        m_checkValueHasBeenSet = true;
    }

    if (value.HasMember("Frequently") && !value["Frequently"].IsNull())
    {
        if (!value["Frequently"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DomainValidationResult.Frequently` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_frequently = value["Frequently"].GetBool();
        m_frequentlyHasBeenSet = true;
    }

    if (value.HasMember("Issued") && !value["Issued"].IsNull())
    {
        if (!value["Issued"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DomainValidationResult.Issued` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_issued = value["Issued"].GetBool();
        m_issuedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainValidationResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_localCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localCheck, allocator);
    }

    if (m_caCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_caCheck, allocator);
    }

    if (m_localCheckFailReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalCheckFailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localCheckFailReason.c_str(), allocator).Move(), allocator);
    }

    if (m_checkValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_checkValue.begin(); itr != m_checkValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_frequentlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frequently";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frequently, allocator);
    }

    if (m_issuedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issued";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_issued, allocator);
    }

}


string DomainValidationResult::GetDomain() const
{
    return m_domain;
}

void DomainValidationResult::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainValidationResult::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DomainValidationResult::GetVerifyType() const
{
    return m_verifyType;
}

void DomainValidationResult::SetVerifyType(const string& _verifyType)
{
    m_verifyType = _verifyType;
    m_verifyTypeHasBeenSet = true;
}

bool DomainValidationResult::VerifyTypeHasBeenSet() const
{
    return m_verifyTypeHasBeenSet;
}

int64_t DomainValidationResult::GetLocalCheck() const
{
    return m_localCheck;
}

void DomainValidationResult::SetLocalCheck(const int64_t& _localCheck)
{
    m_localCheck = _localCheck;
    m_localCheckHasBeenSet = true;
}

bool DomainValidationResult::LocalCheckHasBeenSet() const
{
    return m_localCheckHasBeenSet;
}

int64_t DomainValidationResult::GetCaCheck() const
{
    return m_caCheck;
}

void DomainValidationResult::SetCaCheck(const int64_t& _caCheck)
{
    m_caCheck = _caCheck;
    m_caCheckHasBeenSet = true;
}

bool DomainValidationResult::CaCheckHasBeenSet() const
{
    return m_caCheckHasBeenSet;
}

string DomainValidationResult::GetLocalCheckFailReason() const
{
    return m_localCheckFailReason;
}

void DomainValidationResult::SetLocalCheckFailReason(const string& _localCheckFailReason)
{
    m_localCheckFailReason = _localCheckFailReason;
    m_localCheckFailReasonHasBeenSet = true;
}

bool DomainValidationResult::LocalCheckFailReasonHasBeenSet() const
{
    return m_localCheckFailReasonHasBeenSet;
}

vector<string> DomainValidationResult::GetCheckValue() const
{
    return m_checkValue;
}

void DomainValidationResult::SetCheckValue(const vector<string>& _checkValue)
{
    m_checkValue = _checkValue;
    m_checkValueHasBeenSet = true;
}

bool DomainValidationResult::CheckValueHasBeenSet() const
{
    return m_checkValueHasBeenSet;
}

bool DomainValidationResult::GetFrequently() const
{
    return m_frequently;
}

void DomainValidationResult::SetFrequently(const bool& _frequently)
{
    m_frequently = _frequently;
    m_frequentlyHasBeenSet = true;
}

bool DomainValidationResult::FrequentlyHasBeenSet() const
{
    return m_frequentlyHasBeenSet;
}

bool DomainValidationResult::GetIssued() const
{
    return m_issued;
}

void DomainValidationResult::SetIssued(const bool& _issued)
{
    m_issued = _issued;
    m_issuedHasBeenSet = true;
}

bool DomainValidationResult::IssuedHasBeenSet() const
{
    return m_issuedHasBeenSet;
}

