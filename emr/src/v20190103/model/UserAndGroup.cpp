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

#include <tencentcloud/emr/v20190103/model/UserAndGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

UserAndGroup::UserAndGroup() :
    m_userNameHasBeenSet(false),
    m_userGroupHasBeenSet(false)
{
}

CoreInternalOutcome UserAndGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserAndGroup.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserGroup") && !value["UserGroup"].IsNull())
    {
        if (!value["UserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserAndGroup.UserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroup = string(value["UserGroup"].GetString());
        m_userGroupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserAndGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string UserAndGroup::GetUserName() const
{
    return m_userName;
}

void UserAndGroup::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserAndGroup::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UserAndGroup::GetUserGroup() const
{
    return m_userGroup;
}

void UserAndGroup::SetUserGroup(const string& _userGroup)
{
    m_userGroup = _userGroup;
    m_userGroupHasBeenSet = true;
}

bool UserAndGroup::UserGroupHasBeenSet() const
{
    return m_userGroupHasBeenSet;
}

