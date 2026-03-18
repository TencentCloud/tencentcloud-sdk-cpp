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

#include <tencentcloud/tcb/v20180608/model/Provider.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

Provider::Provider() :
    m_idHasBeenSet(false),
    m_configHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pictureHasBeenSet(false),
    m_homepageHasBeenSet(false),
    m_providerTypeHasBeenSet(false),
    m_autoSignUpWithProviderUserHasBeenSet(false),
    m_onHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_transparentModeHasBeenSet(false),
    m_reuseUserIdHasBeenSet(false),
    m_emailConfigHasBeenSet(false),
    m_autoSignInWhenEmailMatchHasBeenSet(false),
    m_autoSignInWhenPhoneNumberMatchHasBeenSet(false)
{
}

CoreInternalOutcome Provider::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Provider.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Provider.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Provider.Name` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_name.Deserialize(value["Name"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Picture") && !value["Picture"].IsNull())
    {
        if (!value["Picture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Provider.Picture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_picture = string(value["Picture"].GetString());
        m_pictureHasBeenSet = true;
    }

    if (value.HasMember("Homepage") && !value["Homepage"].IsNull())
    {
        if (!value["Homepage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Provider.Homepage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_homepage = string(value["Homepage"].GetString());
        m_homepageHasBeenSet = true;
    }

    if (value.HasMember("ProviderType") && !value["ProviderType"].IsNull())
    {
        if (!value["ProviderType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Provider.ProviderType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_providerType = string(value["ProviderType"].GetString());
        m_providerTypeHasBeenSet = true;
    }

    if (value.HasMember("AutoSignUpWithProviderUser") && !value["AutoSignUpWithProviderUser"].IsNull())
    {
        if (!value["AutoSignUpWithProviderUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Provider.AutoSignUpWithProviderUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoSignUpWithProviderUser = string(value["AutoSignUpWithProviderUser"].GetString());
        m_autoSignUpWithProviderUserHasBeenSet = true;
    }

    if (value.HasMember("On") && !value["On"].IsNull())
    {
        if (!value["On"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Provider.On` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_on = string(value["On"].GetString());
        m_onHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Provider.Description` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_description.Deserialize(value["Description"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("TransparentMode") && !value["TransparentMode"].IsNull())
    {
        if (!value["TransparentMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Provider.TransparentMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transparentMode = string(value["TransparentMode"].GetString());
        m_transparentModeHasBeenSet = true;
    }

    if (value.HasMember("ReuseUserId") && !value["ReuseUserId"].IsNull())
    {
        if (!value["ReuseUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Provider.ReuseUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reuseUserId = string(value["ReuseUserId"].GetString());
        m_reuseUserIdHasBeenSet = true;
    }

    if (value.HasMember("EmailConfig") && !value["EmailConfig"].IsNull())
    {
        if (!value["EmailConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Provider.EmailConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_emailConfig.Deserialize(value["EmailConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_emailConfigHasBeenSet = true;
    }

    if (value.HasMember("AutoSignInWhenEmailMatch") && !value["AutoSignInWhenEmailMatch"].IsNull())
    {
        if (!value["AutoSignInWhenEmailMatch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Provider.AutoSignInWhenEmailMatch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoSignInWhenEmailMatch = string(value["AutoSignInWhenEmailMatch"].GetString());
        m_autoSignInWhenEmailMatchHasBeenSet = true;
    }

    if (value.HasMember("AutoSignInWhenPhoneNumberMatch") && !value["AutoSignInWhenPhoneNumberMatch"].IsNull())
    {
        if (!value["AutoSignInWhenPhoneNumberMatch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Provider.AutoSignInWhenPhoneNumberMatch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoSignInWhenPhoneNumberMatch = string(value["AutoSignInWhenPhoneNumberMatch"].GetString());
        m_autoSignInWhenPhoneNumberMatchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Provider::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_name.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Picture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_picture.c_str(), allocator).Move(), allocator);
    }

    if (m_homepageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Homepage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_homepage.c_str(), allocator).Move(), allocator);
    }

    if (m_providerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_providerType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSignUpWithProviderUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSignUpWithProviderUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoSignUpWithProviderUser.c_str(), allocator).Move(), allocator);
    }

    if (m_onHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "On";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_on.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_description.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transparentModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransparentMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transparentMode.c_str(), allocator).Move(), allocator);
    }

    if (m_reuseUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReuseUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reuseUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_emailConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_emailConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoSignInWhenEmailMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSignInWhenEmailMatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoSignInWhenEmailMatch.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSignInWhenPhoneNumberMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSignInWhenPhoneNumberMatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoSignInWhenPhoneNumberMatch.c_str(), allocator).Move(), allocator);
    }

}


string Provider::GetId() const
{
    return m_id;
}

void Provider::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Provider::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

ProviderConfig Provider::GetConfig() const
{
    return m_config;
}

void Provider::SetConfig(const ProviderConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool Provider::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

LocalizedMessage Provider::GetName() const
{
    return m_name;
}

void Provider::SetName(const LocalizedMessage& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Provider::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Provider::GetPicture() const
{
    return m_picture;
}

void Provider::SetPicture(const string& _picture)
{
    m_picture = _picture;
    m_pictureHasBeenSet = true;
}

bool Provider::PictureHasBeenSet() const
{
    return m_pictureHasBeenSet;
}

string Provider::GetHomepage() const
{
    return m_homepage;
}

void Provider::SetHomepage(const string& _homepage)
{
    m_homepage = _homepage;
    m_homepageHasBeenSet = true;
}

bool Provider::HomepageHasBeenSet() const
{
    return m_homepageHasBeenSet;
}

string Provider::GetProviderType() const
{
    return m_providerType;
}

void Provider::SetProviderType(const string& _providerType)
{
    m_providerType = _providerType;
    m_providerTypeHasBeenSet = true;
}

bool Provider::ProviderTypeHasBeenSet() const
{
    return m_providerTypeHasBeenSet;
}

string Provider::GetAutoSignUpWithProviderUser() const
{
    return m_autoSignUpWithProviderUser;
}

void Provider::SetAutoSignUpWithProviderUser(const string& _autoSignUpWithProviderUser)
{
    m_autoSignUpWithProviderUser = _autoSignUpWithProviderUser;
    m_autoSignUpWithProviderUserHasBeenSet = true;
}

bool Provider::AutoSignUpWithProviderUserHasBeenSet() const
{
    return m_autoSignUpWithProviderUserHasBeenSet;
}

string Provider::GetOn() const
{
    return m_on;
}

void Provider::SetOn(const string& _on)
{
    m_on = _on;
    m_onHasBeenSet = true;
}

bool Provider::OnHasBeenSet() const
{
    return m_onHasBeenSet;
}

LocalizedMessage Provider::GetDescription() const
{
    return m_description;
}

void Provider::SetDescription(const LocalizedMessage& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Provider::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Provider::GetTransparentMode() const
{
    return m_transparentMode;
}

void Provider::SetTransparentMode(const string& _transparentMode)
{
    m_transparentMode = _transparentMode;
    m_transparentModeHasBeenSet = true;
}

bool Provider::TransparentModeHasBeenSet() const
{
    return m_transparentModeHasBeenSet;
}

string Provider::GetReuseUserId() const
{
    return m_reuseUserId;
}

void Provider::SetReuseUserId(const string& _reuseUserId)
{
    m_reuseUserId = _reuseUserId;
    m_reuseUserIdHasBeenSet = true;
}

bool Provider::ReuseUserIdHasBeenSet() const
{
    return m_reuseUserIdHasBeenSet;
}

EmailProviderConfig Provider::GetEmailConfig() const
{
    return m_emailConfig;
}

void Provider::SetEmailConfig(const EmailProviderConfig& _emailConfig)
{
    m_emailConfig = _emailConfig;
    m_emailConfigHasBeenSet = true;
}

bool Provider::EmailConfigHasBeenSet() const
{
    return m_emailConfigHasBeenSet;
}

string Provider::GetAutoSignInWhenEmailMatch() const
{
    return m_autoSignInWhenEmailMatch;
}

void Provider::SetAutoSignInWhenEmailMatch(const string& _autoSignInWhenEmailMatch)
{
    m_autoSignInWhenEmailMatch = _autoSignInWhenEmailMatch;
    m_autoSignInWhenEmailMatchHasBeenSet = true;
}

bool Provider::AutoSignInWhenEmailMatchHasBeenSet() const
{
    return m_autoSignInWhenEmailMatchHasBeenSet;
}

string Provider::GetAutoSignInWhenPhoneNumberMatch() const
{
    return m_autoSignInWhenPhoneNumberMatch;
}

void Provider::SetAutoSignInWhenPhoneNumberMatch(const string& _autoSignInWhenPhoneNumberMatch)
{
    m_autoSignInWhenPhoneNumberMatch = _autoSignInWhenPhoneNumberMatch;
    m_autoSignInWhenPhoneNumberMatchHasBeenSet = true;
}

bool Provider::AutoSignInWhenPhoneNumberMatchHasBeenSet() const
{
    return m_autoSignInWhenPhoneNumberMatchHasBeenSet;
}

