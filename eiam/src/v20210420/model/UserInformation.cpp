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

#include <tencentcloud/eiam/v20210420/model/UserInformation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

UserInformation::UserInformation() :
    m_userNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_orgPathHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_subjectGroupsHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_lastLoginTimeHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome UserInformation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInformation.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInformation.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInformation.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInformation.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInformation.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInformation.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("OrgPath") && !value["OrgPath"].IsNull())
    {
        if (!value["OrgPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInformation.OrgPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgPath = string(value["OrgPath"].GetString());
        m_orgPathHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInformation.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("SubjectGroups") && !value["SubjectGroups"].IsNull())
    {
        if (!value["SubjectGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserInformation.SubjectGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["SubjectGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subjectGroups.push_back((*itr).GetString());
        }
        m_subjectGroupsHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInformation.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("LastLoginTime") && !value["LastLoginTime"].IsNull())
    {
        if (!value["LastLoginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInformation.LastLoginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginTime = string(value["LastLoginTime"].GetString());
        m_lastLoginTimeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInformation.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserInformation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_orgPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgPath.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subjectGroups.begin(); itr != m_subjectGroups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_lastLoginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLoginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

}


string UserInformation::GetUserName() const
{
    return m_userName;
}

void UserInformation::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserInformation::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UserInformation::GetStatus() const
{
    return m_status;
}

void UserInformation::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UserInformation::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UserInformation::GetDisplayName() const
{
    return m_displayName;
}

void UserInformation::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool UserInformation::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string UserInformation::GetDescription() const
{
    return m_description;
}

void UserInformation::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UserInformation::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UserInformation::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void UserInformation::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool UserInformation::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

string UserInformation::GetCreationTime() const
{
    return m_creationTime;
}

void UserInformation::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool UserInformation::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string UserInformation::GetOrgPath() const
{
    return m_orgPath;
}

void UserInformation::SetOrgPath(const string& _orgPath)
{
    m_orgPath = _orgPath;
    m_orgPathHasBeenSet = true;
}

bool UserInformation::OrgPathHasBeenSet() const
{
    return m_orgPathHasBeenSet;
}

string UserInformation::GetPhone() const
{
    return m_phone;
}

void UserInformation::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool UserInformation::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

vector<string> UserInformation::GetSubjectGroups() const
{
    return m_subjectGroups;
}

void UserInformation::SetSubjectGroups(const vector<string>& _subjectGroups)
{
    m_subjectGroups = _subjectGroups;
    m_subjectGroupsHasBeenSet = true;
}

bool UserInformation::SubjectGroupsHasBeenSet() const
{
    return m_subjectGroupsHasBeenSet;
}

string UserInformation::GetEmail() const
{
    return m_email;
}

void UserInformation::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool UserInformation::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string UserInformation::GetLastLoginTime() const
{
    return m_lastLoginTime;
}

void UserInformation::SetLastLoginTime(const string& _lastLoginTime)
{
    m_lastLoginTime = _lastLoginTime;
    m_lastLoginTimeHasBeenSet = true;
}

bool UserInformation::LastLoginTimeHasBeenSet() const
{
    return m_lastLoginTimeHasBeenSet;
}

string UserInformation::GetUserId() const
{
    return m_userId;
}

void UserInformation::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UserInformation::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

