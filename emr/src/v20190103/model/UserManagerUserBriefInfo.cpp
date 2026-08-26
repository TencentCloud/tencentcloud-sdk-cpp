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

#include <tencentcloud/emr/v20190103/model/UserManagerUserBriefInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

UserManagerUserBriefInfo::UserManagerUserBriefInfo() :
    m_userNameHasBeenSet(false),
    m_userGroupHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_supportDownLoadKeyTabHasBeenSet(false),
    m_downLoadKeyTabUrlHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_displayPasswdUpdateTimeHasBeenSet(false),
    m_passwdUpdateTimeHasBeenSet(false),
    m_passwdUsedDayHasBeenSet(false),
    m_passwdUsedHourHasBeenSet(false)
{
}

CoreInternalOutcome UserManagerUserBriefInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerUserBriefInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserGroup") && !value["UserGroup"].IsNull())
    {
        if (!value["UserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerUserBriefInfo.UserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroup = string(value["UserGroup"].GetString());
        m_userGroupHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerUserBriefInfo.UserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userType = string(value["UserType"].GetString());
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerUserBriefInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SupportDownLoadKeyTab") && !value["SupportDownLoadKeyTab"].IsNull())
    {
        if (!value["SupportDownLoadKeyTab"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerUserBriefInfo.SupportDownLoadKeyTab` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportDownLoadKeyTab = value["SupportDownLoadKeyTab"].GetBool();
        m_supportDownLoadKeyTabHasBeenSet = true;
    }

    if (value.HasMember("DownLoadKeyTabUrl") && !value["DownLoadKeyTabUrl"].IsNull())
    {
        if (!value["DownLoadKeyTabUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerUserBriefInfo.DownLoadKeyTabUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downLoadKeyTabUrl = string(value["DownLoadKeyTabUrl"].GetString());
        m_downLoadKeyTabUrlHasBeenSet = true;
    }

    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserManagerUserBriefInfo.Groups` is not array type"));

        const rapidjson::Value &tmpValue = value["Groups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groups.push_back((*itr).GetString());
        }
        m_groupsHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerUserBriefInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerUserBriefInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("DisplayPasswdUpdateTime") && !value["DisplayPasswdUpdateTime"].IsNull())
    {
        if (!value["DisplayPasswdUpdateTime"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerUserBriefInfo.DisplayPasswdUpdateTime` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_displayPasswdUpdateTime = value["DisplayPasswdUpdateTime"].GetBool();
        m_displayPasswdUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("PasswdUpdateTime") && !value["PasswdUpdateTime"].IsNull())
    {
        if (!value["PasswdUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerUserBriefInfo.PasswdUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passwdUpdateTime = string(value["PasswdUpdateTime"].GetString());
        m_passwdUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("PasswdUsedDay") && !value["PasswdUsedDay"].IsNull())
    {
        if (!value["PasswdUsedDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerUserBriefInfo.PasswdUsedDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passwdUsedDay = value["PasswdUsedDay"].GetInt64();
        m_passwdUsedDayHasBeenSet = true;
    }

    if (value.HasMember("PasswdUsedHour") && !value["PasswdUsedHour"].IsNull())
    {
        if (!value["PasswdUsedHour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserManagerUserBriefInfo.PasswdUsedHour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passwdUsedHour = value["PasswdUsedHour"].GetInt64();
        m_passwdUsedHourHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserManagerUserBriefInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_supportDownLoadKeyTabHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDownLoadKeyTab";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDownLoadKeyTab, allocator);
    }

    if (m_downLoadKeyTabUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownLoadKeyTabUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downLoadKeyTabUrl.c_str(), allocator).Move(), allocator);
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

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_displayPasswdUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayPasswdUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_displayPasswdUpdateTime, allocator);
    }

    if (m_passwdUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswdUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passwdUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_passwdUsedDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswdUsedDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passwdUsedDay, allocator);
    }

    if (m_passwdUsedHourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswdUsedHour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passwdUsedHour, allocator);
    }

}


string UserManagerUserBriefInfo::GetUserName() const
{
    return m_userName;
}

void UserManagerUserBriefInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserManagerUserBriefInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UserManagerUserBriefInfo::GetUserGroup() const
{
    return m_userGroup;
}

void UserManagerUserBriefInfo::SetUserGroup(const string& _userGroup)
{
    m_userGroup = _userGroup;
    m_userGroupHasBeenSet = true;
}

bool UserManagerUserBriefInfo::UserGroupHasBeenSet() const
{
    return m_userGroupHasBeenSet;
}

string UserManagerUserBriefInfo::GetUserType() const
{
    return m_userType;
}

void UserManagerUserBriefInfo::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool UserManagerUserBriefInfo::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string UserManagerUserBriefInfo::GetCreateTime() const
{
    return m_createTime;
}

void UserManagerUserBriefInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UserManagerUserBriefInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool UserManagerUserBriefInfo::GetSupportDownLoadKeyTab() const
{
    return m_supportDownLoadKeyTab;
}

void UserManagerUserBriefInfo::SetSupportDownLoadKeyTab(const bool& _supportDownLoadKeyTab)
{
    m_supportDownLoadKeyTab = _supportDownLoadKeyTab;
    m_supportDownLoadKeyTabHasBeenSet = true;
}

bool UserManagerUserBriefInfo::SupportDownLoadKeyTabHasBeenSet() const
{
    return m_supportDownLoadKeyTabHasBeenSet;
}

string UserManagerUserBriefInfo::GetDownLoadKeyTabUrl() const
{
    return m_downLoadKeyTabUrl;
}

void UserManagerUserBriefInfo::SetDownLoadKeyTabUrl(const string& _downLoadKeyTabUrl)
{
    m_downLoadKeyTabUrl = _downLoadKeyTabUrl;
    m_downLoadKeyTabUrlHasBeenSet = true;
}

bool UserManagerUserBriefInfo::DownLoadKeyTabUrlHasBeenSet() const
{
    return m_downLoadKeyTabUrlHasBeenSet;
}

vector<string> UserManagerUserBriefInfo::GetGroups() const
{
    return m_groups;
}

void UserManagerUserBriefInfo::SetGroups(const vector<string>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool UserManagerUserBriefInfo::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

string UserManagerUserBriefInfo::GetUin() const
{
    return m_uin;
}

void UserManagerUserBriefInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool UserManagerUserBriefInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t UserManagerUserBriefInfo::GetState() const
{
    return m_state;
}

void UserManagerUserBriefInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool UserManagerUserBriefInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

bool UserManagerUserBriefInfo::GetDisplayPasswdUpdateTime() const
{
    return m_displayPasswdUpdateTime;
}

void UserManagerUserBriefInfo::SetDisplayPasswdUpdateTime(const bool& _displayPasswdUpdateTime)
{
    m_displayPasswdUpdateTime = _displayPasswdUpdateTime;
    m_displayPasswdUpdateTimeHasBeenSet = true;
}

bool UserManagerUserBriefInfo::DisplayPasswdUpdateTimeHasBeenSet() const
{
    return m_displayPasswdUpdateTimeHasBeenSet;
}

string UserManagerUserBriefInfo::GetPasswdUpdateTime() const
{
    return m_passwdUpdateTime;
}

void UserManagerUserBriefInfo::SetPasswdUpdateTime(const string& _passwdUpdateTime)
{
    m_passwdUpdateTime = _passwdUpdateTime;
    m_passwdUpdateTimeHasBeenSet = true;
}

bool UserManagerUserBriefInfo::PasswdUpdateTimeHasBeenSet() const
{
    return m_passwdUpdateTimeHasBeenSet;
}

int64_t UserManagerUserBriefInfo::GetPasswdUsedDay() const
{
    return m_passwdUsedDay;
}

void UserManagerUserBriefInfo::SetPasswdUsedDay(const int64_t& _passwdUsedDay)
{
    m_passwdUsedDay = _passwdUsedDay;
    m_passwdUsedDayHasBeenSet = true;
}

bool UserManagerUserBriefInfo::PasswdUsedDayHasBeenSet() const
{
    return m_passwdUsedDayHasBeenSet;
}

int64_t UserManagerUserBriefInfo::GetPasswdUsedHour() const
{
    return m_passwdUsedHour;
}

void UserManagerUserBriefInfo::SetPasswdUsedHour(const int64_t& _passwdUsedHour)
{
    m_passwdUsedHour = _passwdUsedHour;
    m_passwdUsedHourHasBeenSet = true;
}

bool UserManagerUserBriefInfo::PasswdUsedHourHasBeenSet() const
{
    return m_passwdUsedHourHasBeenSet;
}

