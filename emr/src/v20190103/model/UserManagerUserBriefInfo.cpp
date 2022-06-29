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
    m_downLoadKeyTabUrlHasBeenSet(false)
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

