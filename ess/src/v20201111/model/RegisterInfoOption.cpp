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

#include <tencentcloud/ess/v20201111/model/RegisterInfoOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

RegisterInfoOption::RegisterInfoOption() :
    m_legalNameSameHasBeenSet(false),
    m_unifiedSocialCreditCodeCNameSameHasBeenSet(false),
    m_organizationIdCardTypeSameHasBeenSet(false)
{
}

CoreInternalOutcome RegisterInfoOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LegalNameSame") && !value["LegalNameSame"].IsNull())
    {
        if (!value["LegalNameSame"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfoOption.LegalNameSame` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_legalNameSame = value["LegalNameSame"].GetBool();
        m_legalNameSameHasBeenSet = true;
    }

    if (value.HasMember("UnifiedSocialCreditCodeCNameSame") && !value["UnifiedSocialCreditCodeCNameSame"].IsNull())
    {
        if (!value["UnifiedSocialCreditCodeCNameSame"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfoOption.UnifiedSocialCreditCodeCNameSame` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_unifiedSocialCreditCodeCNameSame = value["UnifiedSocialCreditCodeCNameSame"].GetBool();
        m_unifiedSocialCreditCodeCNameSameHasBeenSet = true;
    }

    if (value.HasMember("OrganizationIdCardTypeSame") && !value["OrganizationIdCardTypeSame"].IsNull())
    {
        if (!value["OrganizationIdCardTypeSame"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfoOption.OrganizationIdCardTypeSame` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_organizationIdCardTypeSame = value["OrganizationIdCardTypeSame"].GetBool();
        m_organizationIdCardTypeSameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegisterInfoOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_legalNameSameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalNameSame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_legalNameSame, allocator);
    }

    if (m_unifiedSocialCreditCodeCNameSameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnifiedSocialCreditCodeCNameSame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unifiedSocialCreditCodeCNameSame, allocator);
    }

    if (m_organizationIdCardTypeSameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationIdCardTypeSame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_organizationIdCardTypeSame, allocator);
    }

}


bool RegisterInfoOption::GetLegalNameSame() const
{
    return m_legalNameSame;
}

void RegisterInfoOption::SetLegalNameSame(const bool& _legalNameSame)
{
    m_legalNameSame = _legalNameSame;
    m_legalNameSameHasBeenSet = true;
}

bool RegisterInfoOption::LegalNameSameHasBeenSet() const
{
    return m_legalNameSameHasBeenSet;
}

bool RegisterInfoOption::GetUnifiedSocialCreditCodeCNameSame() const
{
    return m_unifiedSocialCreditCodeCNameSame;
}

void RegisterInfoOption::SetUnifiedSocialCreditCodeCNameSame(const bool& _unifiedSocialCreditCodeCNameSame)
{
    m_unifiedSocialCreditCodeCNameSame = _unifiedSocialCreditCodeCNameSame;
    m_unifiedSocialCreditCodeCNameSameHasBeenSet = true;
}

bool RegisterInfoOption::UnifiedSocialCreditCodeCNameSameHasBeenSet() const
{
    return m_unifiedSocialCreditCodeCNameSameHasBeenSet;
}

bool RegisterInfoOption::GetOrganizationIdCardTypeSame() const
{
    return m_organizationIdCardTypeSame;
}

void RegisterInfoOption::SetOrganizationIdCardTypeSame(const bool& _organizationIdCardTypeSame)
{
    m_organizationIdCardTypeSame = _organizationIdCardTypeSame;
    m_organizationIdCardTypeSameHasBeenSet = true;
}

bool RegisterInfoOption::OrganizationIdCardTypeSameHasBeenSet() const
{
    return m_organizationIdCardTypeSameHasBeenSet;
}

