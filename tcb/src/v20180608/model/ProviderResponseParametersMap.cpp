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

#include <tencentcloud/tcb/v20180608/model/ProviderResponseParametersMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ProviderResponseParametersMap::ProviderResponseParametersMap() :
    m_subHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pictureHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_groupsHasBeenSet(false)
{
}

CoreInternalOutcome ProviderResponseParametersMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sub") && !value["Sub"].IsNull())
    {
        if (!value["Sub"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderResponseParametersMap.Sub` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sub = string(value["Sub"].GetString());
        m_subHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderResponseParametersMap.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Picture") && !value["Picture"].IsNull())
    {
        if (!value["Picture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderResponseParametersMap.Picture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_picture = string(value["Picture"].GetString());
        m_pictureHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderResponseParametersMap.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderResponseParametersMap.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderResponseParametersMap.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderResponseParametersMap.Groups` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groups = string(value["Groups"].GetString());
        m_groupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProviderResponseParametersMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sub";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sub.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Picture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_picture.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groups.c_str(), allocator).Move(), allocator);
    }

}


string ProviderResponseParametersMap::GetSub() const
{
    return m_sub;
}

void ProviderResponseParametersMap::SetSub(const string& _sub)
{
    m_sub = _sub;
    m_subHasBeenSet = true;
}

bool ProviderResponseParametersMap::SubHasBeenSet() const
{
    return m_subHasBeenSet;
}

string ProviderResponseParametersMap::GetName() const
{
    return m_name;
}

void ProviderResponseParametersMap::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ProviderResponseParametersMap::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ProviderResponseParametersMap::GetPicture() const
{
    return m_picture;
}

void ProviderResponseParametersMap::SetPicture(const string& _picture)
{
    m_picture = _picture;
    m_pictureHasBeenSet = true;
}

bool ProviderResponseParametersMap::PictureHasBeenSet() const
{
    return m_pictureHasBeenSet;
}

string ProviderResponseParametersMap::GetUsername() const
{
    return m_username;
}

void ProviderResponseParametersMap::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool ProviderResponseParametersMap::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string ProviderResponseParametersMap::GetEmail() const
{
    return m_email;
}

void ProviderResponseParametersMap::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ProviderResponseParametersMap::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ProviderResponseParametersMap::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void ProviderResponseParametersMap::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool ProviderResponseParametersMap::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string ProviderResponseParametersMap::GetGroups() const
{
    return m_groups;
}

void ProviderResponseParametersMap::SetGroups(const string& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool ProviderResponseParametersMap::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

