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

#include <tencentcloud/ess/v20201111/model/RegisterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

RegisterInfo::RegisterInfo() :
    m_legalNameHasBeenSet(false),
    m_usccHasBeenSet(false),
    m_unifiedSocialCreditCodeHasBeenSet(false),
    m_authorizationTypesHasBeenSet(false),
    m_authorizationTypeHasBeenSet(false)
{
}

CoreInternalOutcome RegisterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LegalName") && !value["LegalName"].IsNull())
    {
        if (!value["LegalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfo.LegalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalName = string(value["LegalName"].GetString());
        m_legalNameHasBeenSet = true;
    }

    if (value.HasMember("Uscc") && !value["Uscc"].IsNull())
    {
        if (!value["Uscc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfo.Uscc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uscc = string(value["Uscc"].GetString());
        m_usccHasBeenSet = true;
    }

    if (value.HasMember("UnifiedSocialCreditCode") && !value["UnifiedSocialCreditCode"].IsNull())
    {
        if (!value["UnifiedSocialCreditCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfo.UnifiedSocialCreditCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unifiedSocialCreditCode = string(value["UnifiedSocialCreditCode"].GetString());
        m_unifiedSocialCreditCodeHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationTypes") && !value["AuthorizationTypes"].IsNull())
    {
        if (!value["AuthorizationTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegisterInfo.AuthorizationTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthorizationTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_authorizationTypes.push_back((*itr).GetUint64());
        }
        m_authorizationTypesHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationType") && !value["AuthorizationType"].IsNull())
    {
        if (!value["AuthorizationType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfo.AuthorizationType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationType = value["AuthorizationType"].GetInt64();
        m_authorizationTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegisterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_legalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalName.c_str(), allocator).Move(), allocator);
    }

    if (m_usccHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uscc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uscc.c_str(), allocator).Move(), allocator);
    }

    if (m_unifiedSocialCreditCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnifiedSocialCreditCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unifiedSocialCreditCode.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authorizationTypes.begin(); itr != m_authorizationTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_authorizationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizationType, allocator);
    }

}


string RegisterInfo::GetLegalName() const
{
    return m_legalName;
}

void RegisterInfo::SetLegalName(const string& _legalName)
{
    m_legalName = _legalName;
    m_legalNameHasBeenSet = true;
}

bool RegisterInfo::LegalNameHasBeenSet() const
{
    return m_legalNameHasBeenSet;
}

string RegisterInfo::GetUscc() const
{
    return m_uscc;
}

void RegisterInfo::SetUscc(const string& _uscc)
{
    m_uscc = _uscc;
    m_usccHasBeenSet = true;
}

bool RegisterInfo::UsccHasBeenSet() const
{
    return m_usccHasBeenSet;
}

string RegisterInfo::GetUnifiedSocialCreditCode() const
{
    return m_unifiedSocialCreditCode;
}

void RegisterInfo::SetUnifiedSocialCreditCode(const string& _unifiedSocialCreditCode)
{
    m_unifiedSocialCreditCode = _unifiedSocialCreditCode;
    m_unifiedSocialCreditCodeHasBeenSet = true;
}

bool RegisterInfo::UnifiedSocialCreditCodeHasBeenSet() const
{
    return m_unifiedSocialCreditCodeHasBeenSet;
}

vector<uint64_t> RegisterInfo::GetAuthorizationTypes() const
{
    return m_authorizationTypes;
}

void RegisterInfo::SetAuthorizationTypes(const vector<uint64_t>& _authorizationTypes)
{
    m_authorizationTypes = _authorizationTypes;
    m_authorizationTypesHasBeenSet = true;
}

bool RegisterInfo::AuthorizationTypesHasBeenSet() const
{
    return m_authorizationTypesHasBeenSet;
}

int64_t RegisterInfo::GetAuthorizationType() const
{
    return m_authorizationType;
}

void RegisterInfo::SetAuthorizationType(const int64_t& _authorizationType)
{
    m_authorizationType = _authorizationType;
    m_authorizationTypeHasBeenSet = true;
}

bool RegisterInfo::AuthorizationTypeHasBeenSet() const
{
    return m_authorizationTypeHasBeenSet;
}

