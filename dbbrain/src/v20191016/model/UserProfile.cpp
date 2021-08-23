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

#include <tencentcloud/dbbrain/v20191016/model/UserProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

UserProfile::UserProfile() :
    m_profileIdHasBeenSet(false),
    m_profileTypeHasBeenSet(false),
    m_profileLevelHasBeenSet(false),
    m_profileNameHasBeenSet(false),
    m_profileInfoHasBeenSet(false)
{
}

CoreInternalOutcome UserProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProfileId") && !value["ProfileId"].IsNull())
    {
        if (!value["ProfileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProfile.ProfileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profileId = string(value["ProfileId"].GetString());
        m_profileIdHasBeenSet = true;
    }

    if (value.HasMember("ProfileType") && !value["ProfileType"].IsNull())
    {
        if (!value["ProfileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProfile.ProfileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profileType = string(value["ProfileType"].GetString());
        m_profileTypeHasBeenSet = true;
    }

    if (value.HasMember("ProfileLevel") && !value["ProfileLevel"].IsNull())
    {
        if (!value["ProfileLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProfile.ProfileLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profileLevel = string(value["ProfileLevel"].GetString());
        m_profileLevelHasBeenSet = true;
    }

    if (value.HasMember("ProfileName") && !value["ProfileName"].IsNull())
    {
        if (!value["ProfileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProfile.ProfileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profileName = string(value["ProfileName"].GetString());
        m_profileNameHasBeenSet = true;
    }

    if (value.HasMember("ProfileInfo") && !value["ProfileInfo"].IsNull())
    {
        if (!value["ProfileInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserProfile.ProfileInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_profileInfo.Deserialize(value["ProfileInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_profileInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_profileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profileId.c_str(), allocator).Move(), allocator);
    }

    if (m_profileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profileType.c_str(), allocator).Move(), allocator);
    }

    if (m_profileLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profileLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_profileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profileName.c_str(), allocator).Move(), allocator);
    }

    if (m_profileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profileInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string UserProfile::GetProfileId() const
{
    return m_profileId;
}

void UserProfile::SetProfileId(const string& _profileId)
{
    m_profileId = _profileId;
    m_profileIdHasBeenSet = true;
}

bool UserProfile::ProfileIdHasBeenSet() const
{
    return m_profileIdHasBeenSet;
}

string UserProfile::GetProfileType() const
{
    return m_profileType;
}

void UserProfile::SetProfileType(const string& _profileType)
{
    m_profileType = _profileType;
    m_profileTypeHasBeenSet = true;
}

bool UserProfile::ProfileTypeHasBeenSet() const
{
    return m_profileTypeHasBeenSet;
}

string UserProfile::GetProfileLevel() const
{
    return m_profileLevel;
}

void UserProfile::SetProfileLevel(const string& _profileLevel)
{
    m_profileLevel = _profileLevel;
    m_profileLevelHasBeenSet = true;
}

bool UserProfile::ProfileLevelHasBeenSet() const
{
    return m_profileLevelHasBeenSet;
}

string UserProfile::GetProfileName() const
{
    return m_profileName;
}

void UserProfile::SetProfileName(const string& _profileName)
{
    m_profileName = _profileName;
    m_profileNameHasBeenSet = true;
}

bool UserProfile::ProfileNameHasBeenSet() const
{
    return m_profileNameHasBeenSet;
}

ProfileInfo UserProfile::GetProfileInfo() const
{
    return m_profileInfo;
}

void UserProfile::SetProfileInfo(const ProfileInfo& _profileInfo)
{
    m_profileInfo = _profileInfo;
    m_profileInfoHasBeenSet = true;
}

bool UserProfile::ProfileInfoHasBeenSet() const
{
    return m_profileInfoHasBeenSet;
}

