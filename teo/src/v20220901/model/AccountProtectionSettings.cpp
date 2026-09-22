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

#include <tencentcloud/teo/v20220901/model/AccountProtectionSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AccountProtectionSettings::AccountProtectionSettings() :
    m_enabledHasBeenSet(false),
    m_requestPurposeHasBeenSet(false),
    m_userIDSourceHasBeenSet(false),
    m_userRiskProfileHasBeenSet(false)
{
}

CoreInternalOutcome AccountProtectionSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountProtectionSettings.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("RequestPurpose") && !value["RequestPurpose"].IsNull())
    {
        if (!value["RequestPurpose"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountProtectionSettings.RequestPurpose` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestPurpose = string(value["RequestPurpose"].GetString());
        m_requestPurposeHasBeenSet = true;
    }

    if (value.HasMember("UserIDSource") && !value["UserIDSource"].IsNull())
    {
        if (!value["UserIDSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountProtectionSettings.UserIDSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIDSource = string(value["UserIDSource"].GetString());
        m_userIDSourceHasBeenSet = true;
    }

    if (value.HasMember("UserRiskProfile") && !value["UserRiskProfile"].IsNull())
    {
        if (!value["UserRiskProfile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccountProtectionSettings.UserRiskProfile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userRiskProfile.Deserialize(value["UserRiskProfile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userRiskProfileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountProtectionSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

    if (m_requestPurposeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestPurpose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestPurpose.c_str(), allocator).Move(), allocator);
    }

    if (m_userIDSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIDSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userIDSource.c_str(), allocator).Move(), allocator);
    }

    if (m_userRiskProfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserRiskProfile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userRiskProfile.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AccountProtectionSettings::GetEnabled() const
{
    return m_enabled;
}

void AccountProtectionSettings::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool AccountProtectionSettings::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string AccountProtectionSettings::GetRequestPurpose() const
{
    return m_requestPurpose;
}

void AccountProtectionSettings::SetRequestPurpose(const string& _requestPurpose)
{
    m_requestPurpose = _requestPurpose;
    m_requestPurposeHasBeenSet = true;
}

bool AccountProtectionSettings::RequestPurposeHasBeenSet() const
{
    return m_requestPurposeHasBeenSet;
}

string AccountProtectionSettings::GetUserIDSource() const
{
    return m_userIDSource;
}

void AccountProtectionSettings::SetUserIDSource(const string& _userIDSource)
{
    m_userIDSource = _userIDSource;
    m_userIDSourceHasBeenSet = true;
}

bool AccountProtectionSettings::UserIDSourceHasBeenSet() const
{
    return m_userIDSourceHasBeenSet;
}

UserRiskProfile AccountProtectionSettings::GetUserRiskProfile() const
{
    return m_userRiskProfile;
}

void AccountProtectionSettings::SetUserRiskProfile(const UserRiskProfile& _userRiskProfile)
{
    m_userRiskProfile = _userRiskProfile;
    m_userRiskProfileHasBeenSet = true;
}

bool AccountProtectionSettings::UserRiskProfileHasBeenSet() const
{
    return m_userRiskProfileHasBeenSet;
}

