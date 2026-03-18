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

#include <tencentcloud/tcb/v20180608/model/ModifyProviderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ModifyProviderRequest::ModifyProviderRequest() :
    m_envIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pictureHasBeenSet(false),
    m_homepageHasBeenSet(false),
    m_providerTypeHasBeenSet(false),
    m_configHasBeenSet(false),
    m_transparentModeHasBeenSet(false),
    m_onHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_reuseUserIdHasBeenSet(false),
    m_emailConfigHasBeenSet(false),
    m_autoSignInWhenEmailMatchHasBeenSet(false),
    m_autoSignInWhenPhoneNumberMatchHasBeenSet(false)
{
}

string ModifyProviderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_name.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_pictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Picture";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_picture.c_str(), allocator).Move(), allocator);
    }

    if (m_homepageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Homepage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_homepage.c_str(), allocator).Move(), allocator);
    }

    if (m_providerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_providerType.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_transparentModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransparentMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transparentMode.c_str(), allocator).Move(), allocator);
    }

    if (m_onHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "On";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_on.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_description.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_reuseUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReuseUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reuseUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_emailConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_emailConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoSignInWhenEmailMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSignInWhenEmailMatch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoSignInWhenEmailMatch.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSignInWhenPhoneNumberMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSignInWhenPhoneNumberMatch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoSignInWhenPhoneNumberMatch.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyProviderRequest::GetEnvId() const
{
    return m_envId;
}

void ModifyProviderRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool ModifyProviderRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string ModifyProviderRequest::GetId() const
{
    return m_id;
}

void ModifyProviderRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyProviderRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

LocalizedMessage ModifyProviderRequest::GetName() const
{
    return m_name;
}

void ModifyProviderRequest::SetName(const LocalizedMessage& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyProviderRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyProviderRequest::GetPicture() const
{
    return m_picture;
}

void ModifyProviderRequest::SetPicture(const string& _picture)
{
    m_picture = _picture;
    m_pictureHasBeenSet = true;
}

bool ModifyProviderRequest::PictureHasBeenSet() const
{
    return m_pictureHasBeenSet;
}

string ModifyProviderRequest::GetHomepage() const
{
    return m_homepage;
}

void ModifyProviderRequest::SetHomepage(const string& _homepage)
{
    m_homepage = _homepage;
    m_homepageHasBeenSet = true;
}

bool ModifyProviderRequest::HomepageHasBeenSet() const
{
    return m_homepageHasBeenSet;
}

string ModifyProviderRequest::GetProviderType() const
{
    return m_providerType;
}

void ModifyProviderRequest::SetProviderType(const string& _providerType)
{
    m_providerType = _providerType;
    m_providerTypeHasBeenSet = true;
}

bool ModifyProviderRequest::ProviderTypeHasBeenSet() const
{
    return m_providerTypeHasBeenSet;
}

ProviderConfig ModifyProviderRequest::GetConfig() const
{
    return m_config;
}

void ModifyProviderRequest::SetConfig(const ProviderConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ModifyProviderRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string ModifyProviderRequest::GetTransparentMode() const
{
    return m_transparentMode;
}

void ModifyProviderRequest::SetTransparentMode(const string& _transparentMode)
{
    m_transparentMode = _transparentMode;
    m_transparentModeHasBeenSet = true;
}

bool ModifyProviderRequest::TransparentModeHasBeenSet() const
{
    return m_transparentModeHasBeenSet;
}

string ModifyProviderRequest::GetOn() const
{
    return m_on;
}

void ModifyProviderRequest::SetOn(const string& _on)
{
    m_on = _on;
    m_onHasBeenSet = true;
}

bool ModifyProviderRequest::OnHasBeenSet() const
{
    return m_onHasBeenSet;
}

LocalizedMessage ModifyProviderRequest::GetDescription() const
{
    return m_description;
}

void ModifyProviderRequest::SetDescription(const LocalizedMessage& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyProviderRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyProviderRequest::GetReuseUserId() const
{
    return m_reuseUserId;
}

void ModifyProviderRequest::SetReuseUserId(const string& _reuseUserId)
{
    m_reuseUserId = _reuseUserId;
    m_reuseUserIdHasBeenSet = true;
}

bool ModifyProviderRequest::ReuseUserIdHasBeenSet() const
{
    return m_reuseUserIdHasBeenSet;
}

EmailProviderConfig ModifyProviderRequest::GetEmailConfig() const
{
    return m_emailConfig;
}

void ModifyProviderRequest::SetEmailConfig(const EmailProviderConfig& _emailConfig)
{
    m_emailConfig = _emailConfig;
    m_emailConfigHasBeenSet = true;
}

bool ModifyProviderRequest::EmailConfigHasBeenSet() const
{
    return m_emailConfigHasBeenSet;
}

string ModifyProviderRequest::GetAutoSignInWhenEmailMatch() const
{
    return m_autoSignInWhenEmailMatch;
}

void ModifyProviderRequest::SetAutoSignInWhenEmailMatch(const string& _autoSignInWhenEmailMatch)
{
    m_autoSignInWhenEmailMatch = _autoSignInWhenEmailMatch;
    m_autoSignInWhenEmailMatchHasBeenSet = true;
}

bool ModifyProviderRequest::AutoSignInWhenEmailMatchHasBeenSet() const
{
    return m_autoSignInWhenEmailMatchHasBeenSet;
}

string ModifyProviderRequest::GetAutoSignInWhenPhoneNumberMatch() const
{
    return m_autoSignInWhenPhoneNumberMatch;
}

void ModifyProviderRequest::SetAutoSignInWhenPhoneNumberMatch(const string& _autoSignInWhenPhoneNumberMatch)
{
    m_autoSignInWhenPhoneNumberMatch = _autoSignInWhenPhoneNumberMatch;
    m_autoSignInWhenPhoneNumberMatchHasBeenSet = true;
}

bool ModifyProviderRequest::AutoSignInWhenPhoneNumberMatchHasBeenSet() const
{
    return m_autoSignInWhenPhoneNumberMatchHasBeenSet;
}


