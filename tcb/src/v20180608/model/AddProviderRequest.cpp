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

#include <tencentcloud/tcb/v20180608/model/AddProviderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

AddProviderRequest::AddProviderRequest() :
    m_envIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_providerTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_pictureHasBeenSet(false),
    m_homepageHasBeenSet(false),
    m_configHasBeenSet(false),
    m_transparentModeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_reuseUserIdHasBeenSet(false),
    m_onHasBeenSet(false),
    m_autoSignInWhenEmailMatchHasBeenSet(false),
    m_autoSignInWhenPhoneNumberMatchHasBeenSet(false)
{
}

string AddProviderRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_name.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_providerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_providerType.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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

    if (m_onHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "On";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_on.c_str(), allocator).Move(), allocator);
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


string AddProviderRequest::GetEnvId() const
{
    return m_envId;
}

void AddProviderRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool AddProviderRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

LocalizedMessage AddProviderRequest::GetName() const
{
    return m_name;
}

void AddProviderRequest::SetName(const LocalizedMessage& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddProviderRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AddProviderRequest::GetProviderType() const
{
    return m_providerType;
}

void AddProviderRequest::SetProviderType(const string& _providerType)
{
    m_providerType = _providerType;
    m_providerTypeHasBeenSet = true;
}

bool AddProviderRequest::ProviderTypeHasBeenSet() const
{
    return m_providerTypeHasBeenSet;
}

string AddProviderRequest::GetId() const
{
    return m_id;
}

void AddProviderRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AddProviderRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AddProviderRequest::GetPicture() const
{
    return m_picture;
}

void AddProviderRequest::SetPicture(const string& _picture)
{
    m_picture = _picture;
    m_pictureHasBeenSet = true;
}

bool AddProviderRequest::PictureHasBeenSet() const
{
    return m_pictureHasBeenSet;
}

string AddProviderRequest::GetHomepage() const
{
    return m_homepage;
}

void AddProviderRequest::SetHomepage(const string& _homepage)
{
    m_homepage = _homepage;
    m_homepageHasBeenSet = true;
}

bool AddProviderRequest::HomepageHasBeenSet() const
{
    return m_homepageHasBeenSet;
}

ProviderConfig AddProviderRequest::GetConfig() const
{
    return m_config;
}

void AddProviderRequest::SetConfig(const ProviderConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool AddProviderRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string AddProviderRequest::GetTransparentMode() const
{
    return m_transparentMode;
}

void AddProviderRequest::SetTransparentMode(const string& _transparentMode)
{
    m_transparentMode = _transparentMode;
    m_transparentModeHasBeenSet = true;
}

bool AddProviderRequest::TransparentModeHasBeenSet() const
{
    return m_transparentModeHasBeenSet;
}

LocalizedMessage AddProviderRequest::GetDescription() const
{
    return m_description;
}

void AddProviderRequest::SetDescription(const LocalizedMessage& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AddProviderRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AddProviderRequest::GetReuseUserId() const
{
    return m_reuseUserId;
}

void AddProviderRequest::SetReuseUserId(const string& _reuseUserId)
{
    m_reuseUserId = _reuseUserId;
    m_reuseUserIdHasBeenSet = true;
}

bool AddProviderRequest::ReuseUserIdHasBeenSet() const
{
    return m_reuseUserIdHasBeenSet;
}

string AddProviderRequest::GetOn() const
{
    return m_on;
}

void AddProviderRequest::SetOn(const string& _on)
{
    m_on = _on;
    m_onHasBeenSet = true;
}

bool AddProviderRequest::OnHasBeenSet() const
{
    return m_onHasBeenSet;
}

string AddProviderRequest::GetAutoSignInWhenEmailMatch() const
{
    return m_autoSignInWhenEmailMatch;
}

void AddProviderRequest::SetAutoSignInWhenEmailMatch(const string& _autoSignInWhenEmailMatch)
{
    m_autoSignInWhenEmailMatch = _autoSignInWhenEmailMatch;
    m_autoSignInWhenEmailMatchHasBeenSet = true;
}

bool AddProviderRequest::AutoSignInWhenEmailMatchHasBeenSet() const
{
    return m_autoSignInWhenEmailMatchHasBeenSet;
}

string AddProviderRequest::GetAutoSignInWhenPhoneNumberMatch() const
{
    return m_autoSignInWhenPhoneNumberMatch;
}

void AddProviderRequest::SetAutoSignInWhenPhoneNumberMatch(const string& _autoSignInWhenPhoneNumberMatch)
{
    m_autoSignInWhenPhoneNumberMatch = _autoSignInWhenPhoneNumberMatch;
    m_autoSignInWhenPhoneNumberMatchHasBeenSet = true;
}

bool AddProviderRequest::AutoSignInWhenPhoneNumberMatchHasBeenSet() const
{
    return m_autoSignInWhenPhoneNumberMatchHasBeenSet;
}


