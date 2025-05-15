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

#include <tencentcloud/emr/v20190103/model/UserInfoForUserManager.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

UserInfoForUserManager::UserInfoForUserManager() :
    m_userNameHasBeenSet(false),
    m_userGroupHasBeenSet(false),
    m_passWordHasBeenSet(false),
    m_reMarkHasBeenSet(false),
    m_groupsHasBeenSet(false)
{
}

CoreInternalOutcome UserInfoForUserManager::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfoForUserManager.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserGroup") && !value["UserGroup"].IsNull())
    {
        if (!value["UserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfoForUserManager.UserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroup = string(value["UserGroup"].GetString());
        m_userGroupHasBeenSet = true;
    }

    if (value.HasMember("PassWord") && !value["PassWord"].IsNull())
    {
        if (!value["PassWord"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfoForUserManager.PassWord` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passWord = string(value["PassWord"].GetString());
        m_passWordHasBeenSet = true;
    }

    if (value.HasMember("ReMark") && !value["ReMark"].IsNull())
    {
        if (!value["ReMark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfoForUserManager.ReMark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reMark = string(value["ReMark"].GetString());
        m_reMarkHasBeenSet = true;
    }

    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserInfoForUserManager.Groups` is not array type"));

        const rapidjson::Value &tmpValue = value["Groups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groups.push_back((*itr).GetString());
        }
        m_groupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserInfoForUserManager::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_passWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassWord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passWord.c_str(), allocator).Move(), allocator);
    }

    if (m_reMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reMark.c_str(), allocator).Move(), allocator);
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groups.begin(); itr != m_groups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string UserInfoForUserManager::GetUserName() const
{
    return m_userName;
}

void UserInfoForUserManager::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserInfoForUserManager::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UserInfoForUserManager::GetUserGroup() const
{
    return m_userGroup;
}

void UserInfoForUserManager::SetUserGroup(const string& _userGroup)
{
    m_userGroup = _userGroup;
    m_userGroupHasBeenSet = true;
}

bool UserInfoForUserManager::UserGroupHasBeenSet() const
{
    return m_userGroupHasBeenSet;
}

string UserInfoForUserManager::GetPassWord() const
{
    return m_passWord;
}

void UserInfoForUserManager::SetPassWord(const string& _passWord)
{
    m_passWord = _passWord;
    m_passWordHasBeenSet = true;
}

bool UserInfoForUserManager::PassWordHasBeenSet() const
{
    return m_passWordHasBeenSet;
}

string UserInfoForUserManager::GetReMark() const
{
    return m_reMark;
}

void UserInfoForUserManager::SetReMark(const string& _reMark)
{
    m_reMark = _reMark;
    m_reMarkHasBeenSet = true;
}

bool UserInfoForUserManager::ReMarkHasBeenSet() const
{
    return m_reMarkHasBeenSet;
}

vector<string> UserInfoForUserManager::GetGroups() const
{
    return m_groups;
}

void UserInfoForUserManager::SetGroups(const vector<string>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool UserInfoForUserManager::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

