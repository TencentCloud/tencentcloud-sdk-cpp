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

#include <tencentcloud/wedata/v20250806/model/ProjectUserRole.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ProjectUserRole::ProjectUserRole() :
    m_appIdHasBeenSet(false),
    m_rootAccountIdHasBeenSet(false),
    m_userUinHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_isCreatorHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isProjectOwnerHasBeenSet(false),
    m_phoneNumHasBeenSet(false),
    m_emailHasBeenSet(false)
{
}

CoreInternalOutcome ProjectUserRole::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("RootAccountId") && !value["RootAccountId"].IsNull())
    {
        if (!value["RootAccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.RootAccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rootAccountId = string(value["RootAccountId"].GetString());
        m_rootAccountIdHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Roles") && !value["Roles"].IsNull())
    {
        if (!value["Roles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.Roles` is not array type"));

        const rapidjson::Value &tmpValue = value["Roles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SystemRole item;
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

    if (value.HasMember("IsCreator") && !value["IsCreator"].IsNull())
    {
        if (!value["IsCreator"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.IsCreator` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCreator = value["IsCreator"].GetBool();
        m_isCreatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IsProjectOwner") && !value["IsProjectOwner"].IsNull())
    {
        if (!value["IsProjectOwner"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.IsProjectOwner` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isProjectOwner = value["IsProjectOwner"].GetBool();
        m_isProjectOwnerHasBeenSet = true;
    }

    if (value.HasMember("PhoneNum") && !value["PhoneNum"].IsNull())
    {
        if (!value["PhoneNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.PhoneNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNum = string(value["PhoneNum"].GetString());
        m_phoneNumHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectUserRole::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_rootAccountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootAccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rootAccountId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
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

    if (m_isCreatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCreator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCreator, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isProjectOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProjectOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProjectOwner, allocator);
    }

    if (m_phoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNum.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

}


string ProjectUserRole::GetAppId() const
{
    return m_appId;
}

void ProjectUserRole::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ProjectUserRole::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ProjectUserRole::GetRootAccountId() const
{
    return m_rootAccountId;
}

void ProjectUserRole::SetRootAccountId(const string& _rootAccountId)
{
    m_rootAccountId = _rootAccountId;
    m_rootAccountIdHasBeenSet = true;
}

bool ProjectUserRole::RootAccountIdHasBeenSet() const
{
    return m_rootAccountIdHasBeenSet;
}

string ProjectUserRole::GetUserUin() const
{
    return m_userUin;
}

void ProjectUserRole::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool ProjectUserRole::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string ProjectUserRole::GetUserName() const
{
    return m_userName;
}

void ProjectUserRole::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ProjectUserRole::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ProjectUserRole::GetDisplayName() const
{
    return m_displayName;
}

void ProjectUserRole::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool ProjectUserRole::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

vector<SystemRole> ProjectUserRole::GetRoles() const
{
    return m_roles;
}

void ProjectUserRole::SetRoles(const vector<SystemRole>& _roles)
{
    m_roles = _roles;
    m_rolesHasBeenSet = true;
}

bool ProjectUserRole::RolesHasBeenSet() const
{
    return m_rolesHasBeenSet;
}

bool ProjectUserRole::GetIsCreator() const
{
    return m_isCreator;
}

void ProjectUserRole::SetIsCreator(const bool& _isCreator)
{
    m_isCreator = _isCreator;
    m_isCreatorHasBeenSet = true;
}

bool ProjectUserRole::IsCreatorHasBeenSet() const
{
    return m_isCreatorHasBeenSet;
}

string ProjectUserRole::GetCreateTime() const
{
    return m_createTime;
}

void ProjectUserRole::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProjectUserRole::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool ProjectUserRole::GetIsProjectOwner() const
{
    return m_isProjectOwner;
}

void ProjectUserRole::SetIsProjectOwner(const bool& _isProjectOwner)
{
    m_isProjectOwner = _isProjectOwner;
    m_isProjectOwnerHasBeenSet = true;
}

bool ProjectUserRole::IsProjectOwnerHasBeenSet() const
{
    return m_isProjectOwnerHasBeenSet;
}

string ProjectUserRole::GetPhoneNum() const
{
    return m_phoneNum;
}

void ProjectUserRole::SetPhoneNum(const string& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool ProjectUserRole::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}

string ProjectUserRole::GetEmail() const
{
    return m_email;
}

void ProjectUserRole::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ProjectUserRole::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

