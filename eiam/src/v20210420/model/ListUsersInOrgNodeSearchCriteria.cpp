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

#include <tencentcloud/eiam/v20210420/model/ListUsersInOrgNodeSearchCriteria.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

ListUsersInOrgNodeSearchCriteria::ListUsersInOrgNodeSearchCriteria() :
    m_userNameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

CoreInternalOutcome ListUsersInOrgNodeSearchCriteria::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListUsersInOrgNodeSearchCriteria.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListUsersInOrgNodeSearchCriteria.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListUsersInOrgNodeSearchCriteria.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListUsersInOrgNodeSearchCriteria.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListUsersInOrgNodeSearchCriteria.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListUsersInOrgNodeSearchCriteria.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("Keyword") && !value["Keyword"].IsNull())
    {
        if (!value["Keyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListUsersInOrgNodeSearchCriteria.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListUsersInOrgNodeSearchCriteria::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

}


string ListUsersInOrgNodeSearchCriteria::GetUserName() const
{
    return m_userName;
}

void ListUsersInOrgNodeSearchCriteria::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ListUsersInOrgNodeSearchCriteria::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ListUsersInOrgNodeSearchCriteria::GetPhone() const
{
    return m_phone;
}

void ListUsersInOrgNodeSearchCriteria::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool ListUsersInOrgNodeSearchCriteria::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string ListUsersInOrgNodeSearchCriteria::GetEmail() const
{
    return m_email;
}

void ListUsersInOrgNodeSearchCriteria::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ListUsersInOrgNodeSearchCriteria::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ListUsersInOrgNodeSearchCriteria::GetStatus() const
{
    return m_status;
}

void ListUsersInOrgNodeSearchCriteria::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListUsersInOrgNodeSearchCriteria::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ListUsersInOrgNodeSearchCriteria::GetCreationTime() const
{
    return m_creationTime;
}

void ListUsersInOrgNodeSearchCriteria::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool ListUsersInOrgNodeSearchCriteria::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string ListUsersInOrgNodeSearchCriteria::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void ListUsersInOrgNodeSearchCriteria::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool ListUsersInOrgNodeSearchCriteria::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

string ListUsersInOrgNodeSearchCriteria::GetKeyword() const
{
    return m_keyword;
}

void ListUsersInOrgNodeSearchCriteria::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListUsersInOrgNodeSearchCriteria::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

