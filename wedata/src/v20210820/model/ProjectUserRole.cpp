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

#include <tencentcloud/wedata/v20210820/model/ProjectUserRole.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ProjectUserRole::ProjectUserRole() :
    m_rolesHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_isProjectAdminHasBeenSet(false),
    m_phoneNumHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_isProjectOwnerHasBeenSet(false)
{
}

CoreInternalOutcome ProjectUserRole::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


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

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
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

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.Creator` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_creator = value["Creator"].GetBool();
        m_creatorHasBeenSet = true;
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

    if (value.HasMember("IsProjectAdmin") && !value["IsProjectAdmin"].IsNull())
    {
        if (!value["IsProjectAdmin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.IsProjectAdmin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isProjectAdmin = value["IsProjectAdmin"].GetBool();
        m_isProjectAdminHasBeenSet = true;
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

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectUserRole.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

void ProjectUserRole::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creator, allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_isProjectAdminHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProjectAdmin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProjectAdmin, allocator);
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

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_isProjectOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProjectOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProjectOwner, allocator);
    }

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

string ProjectUserRole::GetUserId() const
{
    return m_userId;
}

void ProjectUserRole::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ProjectUserRole::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
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

bool ProjectUserRole::GetCreator() const
{
    return m_creator;
}

void ProjectUserRole::SetCreator(const bool& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool ProjectUserRole::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
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

bool ProjectUserRole::GetIsProjectAdmin() const
{
    return m_isProjectAdmin;
}

void ProjectUserRole::SetIsProjectAdmin(const bool& _isProjectAdmin)
{
    m_isProjectAdmin = _isProjectAdmin;
    m_isProjectAdminHasBeenSet = true;
}

bool ProjectUserRole::IsProjectAdminHasBeenSet() const
{
    return m_isProjectAdminHasBeenSet;
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

string ProjectUserRole::GetOwnerUin() const
{
    return m_ownerUin;
}

void ProjectUserRole::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ProjectUserRole::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
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

