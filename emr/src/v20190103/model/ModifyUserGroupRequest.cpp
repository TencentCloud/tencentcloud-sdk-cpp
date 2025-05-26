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

#include <tencentcloud/emr/v20190103/model/ModifyUserGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyUserGroupRequest::ModifyUserGroupRequest() :
    m_usersHasBeenSet(false),
    m_userGroupHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyUserGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_usersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Users";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_users.begin(); itr != m_users.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groups.begin(); itr != m_groups.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyUserGroupRequest::GetUsers() const
{
    return m_users;
}

void ModifyUserGroupRequest::SetUsers(const vector<string>& _users)
{
    m_users = _users;
    m_usersHasBeenSet = true;
}

bool ModifyUserGroupRequest::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}

string ModifyUserGroupRequest::GetUserGroup() const
{
    return m_userGroup;
}

void ModifyUserGroupRequest::SetUserGroup(const string& _userGroup)
{
    m_userGroup = _userGroup;
    m_userGroupHasBeenSet = true;
}

bool ModifyUserGroupRequest::UserGroupHasBeenSet() const
{
    return m_userGroupHasBeenSet;
}

vector<string> ModifyUserGroupRequest::GetGroups() const
{
    return m_groups;
}

void ModifyUserGroupRequest::SetGroups(const vector<string>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool ModifyUserGroupRequest::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

string ModifyUserGroupRequest::GetRemark() const
{
    return m_remark;
}

void ModifyUserGroupRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyUserGroupRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


