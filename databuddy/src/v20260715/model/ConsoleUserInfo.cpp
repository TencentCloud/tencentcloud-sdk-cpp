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

#include <tencentcloud/databuddy/v20260715/model/ConsoleUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ConsoleUserInfo::ConsoleUserInfo() :
    m_userUinHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_userSourceHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_isOwnerHasBeenSet(false),
    m_userTagHasBeenSet(false),
    m_isAdminHasBeenSet(false)
{
}

CoreInternalOutcome ConsoleUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleUserInfo.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleUserInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleUserInfo.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("Roles") && !value["Roles"].IsNull())
    {
        if (!value["Roles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsoleUserInfo.Roles` is not array type"));

        const rapidjson::Value &tmpValue = value["Roles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RoleBasicInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_roles.push_back(item);
        }
        m_rolesHasBeenSet = true;
    }

    if (value.HasMember("UserSource") && !value["UserSource"].IsNull())
    {
        if (!value["UserSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleUserInfo.UserSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userSource = string(value["UserSource"].GetString());
        m_userSourceHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleUserInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleUserInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("IsOwner") && !value["IsOwner"].IsNull())
    {
        if (!value["IsOwner"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleUserInfo.IsOwner` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOwner = value["IsOwner"].GetBool();
        m_isOwnerHasBeenSet = true;
    }

    if (value.HasMember("UserTag") && !value["UserTag"].IsNull())
    {
        if (!value["UserTag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleUserInfo.UserTag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userTag = value["UserTag"].GetInt64();
        m_userTagHasBeenSet = true;
    }

    if (value.HasMember("IsAdmin") && !value["IsAdmin"].IsNull())
    {
        if (!value["IsAdmin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleUserInfo.IsAdmin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAdmin = value["IsAdmin"].GetBool();
        m_isAdminHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsoleUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_rolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Roles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roles.begin(); itr != m_roles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_userSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userSource.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOwner, allocator);
    }

    if (m_userTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userTag, allocator);
    }

    if (m_isAdminHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAdmin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAdmin, allocator);
    }

}


string ConsoleUserInfo::GetUserUin() const
{
    return m_userUin;
}

void ConsoleUserInfo::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool ConsoleUserInfo::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string ConsoleUserInfo::GetUserName() const
{
    return m_userName;
}

void ConsoleUserInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ConsoleUserInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ConsoleUserInfo::GetNickname() const
{
    return m_nickname;
}

void ConsoleUserInfo::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool ConsoleUserInfo::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

vector<RoleBasicInfo> ConsoleUserInfo::GetRoles() const
{
    return m_roles;
}

void ConsoleUserInfo::SetRoles(const vector<RoleBasicInfo>& _roles)
{
    m_roles = _roles;
    m_rolesHasBeenSet = true;
}

bool ConsoleUserInfo::RolesHasBeenSet() const
{
    return m_rolesHasBeenSet;
}

string ConsoleUserInfo::GetUserSource() const
{
    return m_userSource;
}

void ConsoleUserInfo::SetUserSource(const string& _userSource)
{
    m_userSource = _userSource;
    m_userSourceHasBeenSet = true;
}

bool ConsoleUserInfo::UserSourceHasBeenSet() const
{
    return m_userSourceHasBeenSet;
}

string ConsoleUserInfo::GetCreateTime() const
{
    return m_createTime;
}

void ConsoleUserInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ConsoleUserInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ConsoleUserInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ConsoleUserInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ConsoleUserInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool ConsoleUserInfo::GetIsOwner() const
{
    return m_isOwner;
}

void ConsoleUserInfo::SetIsOwner(const bool& _isOwner)
{
    m_isOwner = _isOwner;
    m_isOwnerHasBeenSet = true;
}

bool ConsoleUserInfo::IsOwnerHasBeenSet() const
{
    return m_isOwnerHasBeenSet;
}

int64_t ConsoleUserInfo::GetUserTag() const
{
    return m_userTag;
}

void ConsoleUserInfo::SetUserTag(const int64_t& _userTag)
{
    m_userTag = _userTag;
    m_userTagHasBeenSet = true;
}

bool ConsoleUserInfo::UserTagHasBeenSet() const
{
    return m_userTagHasBeenSet;
}

bool ConsoleUserInfo::GetIsAdmin() const
{
    return m_isAdmin;
}

void ConsoleUserInfo::SetIsAdmin(const bool& _isAdmin)
{
    m_isAdmin = _isAdmin;
    m_isAdminHasBeenSet = true;
}

bool ConsoleUserInfo::IsAdminHasBeenSet() const
{
    return m_isAdminHasBeenSet;
}

