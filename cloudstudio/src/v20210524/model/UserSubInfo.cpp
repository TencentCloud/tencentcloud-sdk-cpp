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

#include <tencentcloud/cloudstudio/v20210524/model/UserSubInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

UserSubInfo::UserSubInfo() :
    m_teamHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_isAdminHasBeenSet(false),
    m_isTrialHasBeenSet(false)
{
}

CoreInternalOutcome UserSubInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Team") && !value["Team"].IsNull())
    {
        if (!value["Team"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSubInfo.Team` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_team = string(value["Team"].GetString());
        m_teamHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSubInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserSubInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("IsAdmin") && !value["IsAdmin"].IsNull())
    {
        if (!value["IsAdmin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserSubInfo.IsAdmin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAdmin = value["IsAdmin"].GetBool();
        m_isAdminHasBeenSet = true;
    }

    if (value.HasMember("IsTrial") && !value["IsTrial"].IsNull())
    {
        if (!value["IsTrial"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserSubInfo.IsTrial` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTrial = value["IsTrial"].GetBool();
        m_isTrialHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserSubInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_teamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Team";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_team.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_isAdminHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAdmin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAdmin, allocator);
    }

    if (m_isTrialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTrial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTrial, allocator);
    }

}


string UserSubInfo::GetTeam() const
{
    return m_team;
}

void UserSubInfo::SetTeam(const string& _team)
{
    m_team = _team;
    m_teamHasBeenSet = true;
}

bool UserSubInfo::TeamHasBeenSet() const
{
    return m_teamHasBeenSet;
}

string UserSubInfo::GetUserName() const
{
    return m_userName;
}

void UserSubInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserSubInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UserSubInfo::GetNickName() const
{
    return m_nickName;
}

void UserSubInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool UserSubInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

bool UserSubInfo::GetIsAdmin() const
{
    return m_isAdmin;
}

void UserSubInfo::SetIsAdmin(const bool& _isAdmin)
{
    m_isAdmin = _isAdmin;
    m_isAdminHasBeenSet = true;
}

bool UserSubInfo::IsAdminHasBeenSet() const
{
    return m_isAdminHasBeenSet;
}

bool UserSubInfo::GetIsTrial() const
{
    return m_isTrial;
}

void UserSubInfo::SetIsTrial(const bool& _isTrial)
{
    m_isTrial = _isTrial;
    m_isTrialHasBeenSet = true;
}

bool UserSubInfo::IsTrialHasBeenSet() const
{
    return m_isTrialHasBeenSet;
}

