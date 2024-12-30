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

#include <tencentcloud/essbasic/v20210526/model/OrganizationAuthorizationOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

OrganizationAuthorizationOptions::OrganizationAuthorizationOptions() :
    m_uniformSocialCreditCodeSameHasBeenSet(false),
    m_organizationNameSameHasBeenSet(false),
    m_legalNameSameHasBeenSet(false)
{
}

CoreInternalOutcome OrganizationAuthorizationOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UniformSocialCreditCodeSame") && !value["UniformSocialCreditCodeSame"].IsNull())
    {
        if (!value["UniformSocialCreditCodeSame"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationAuthorizationOptions.UniformSocialCreditCodeSame` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_uniformSocialCreditCodeSame = value["UniformSocialCreditCodeSame"].GetBool();
        m_uniformSocialCreditCodeSameHasBeenSet = true;
    }

    if (value.HasMember("OrganizationNameSame") && !value["OrganizationNameSame"].IsNull())
    {
        if (!value["OrganizationNameSame"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationAuthorizationOptions.OrganizationNameSame` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_organizationNameSame = value["OrganizationNameSame"].GetBool();
        m_organizationNameSameHasBeenSet = true;
    }

    if (value.HasMember("LegalNameSame") && !value["LegalNameSame"].IsNull())
    {
        if (!value["LegalNameSame"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationAuthorizationOptions.LegalNameSame` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_legalNameSame = value["LegalNameSame"].GetBool();
        m_legalNameSameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrganizationAuthorizationOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uniformSocialCreditCodeSameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniformSocialCreditCodeSame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uniformSocialCreditCodeSame, allocator);
    }

    if (m_organizationNameSameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationNameSame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_organizationNameSame, allocator);
    }

    if (m_legalNameSameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalNameSame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_legalNameSame, allocator);
    }

}


bool OrganizationAuthorizationOptions::GetUniformSocialCreditCodeSame() const
{
    return m_uniformSocialCreditCodeSame;
}

void OrganizationAuthorizationOptions::SetUniformSocialCreditCodeSame(const bool& _uniformSocialCreditCodeSame)
{
    m_uniformSocialCreditCodeSame = _uniformSocialCreditCodeSame;
    m_uniformSocialCreditCodeSameHasBeenSet = true;
}

bool OrganizationAuthorizationOptions::UniformSocialCreditCodeSameHasBeenSet() const
{
    return m_uniformSocialCreditCodeSameHasBeenSet;
}

bool OrganizationAuthorizationOptions::GetOrganizationNameSame() const
{
    return m_organizationNameSame;
}

void OrganizationAuthorizationOptions::SetOrganizationNameSame(const bool& _organizationNameSame)
{
    m_organizationNameSame = _organizationNameSame;
    m_organizationNameSameHasBeenSet = true;
}

bool OrganizationAuthorizationOptions::OrganizationNameSameHasBeenSet() const
{
    return m_organizationNameSameHasBeenSet;
}

bool OrganizationAuthorizationOptions::GetLegalNameSame() const
{
    return m_legalNameSame;
}

void OrganizationAuthorizationOptions::SetLegalNameSame(const bool& _legalNameSame)
{
    m_legalNameSame = _legalNameSame;
    m_legalNameSameHasBeenSet = true;
}

bool OrganizationAuthorizationOptions::LegalNameSameHasBeenSet() const
{
    return m_legalNameSameHasBeenSet;
}

