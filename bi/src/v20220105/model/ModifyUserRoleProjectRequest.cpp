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

#include <tencentcloud/bi/v20220105/model/ModifyUserRoleProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ModifyUserRoleProjectRequest::ModifyUserRoleProjectRequest() :
    m_projectIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_roleIdListHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_appUserIdHasBeenSet(false)
{
}

string ModifyUserRoleProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roleIdList.begin(); itr != m_roleIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_appUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appUserId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyUserRoleProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyUserRoleProjectRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyUserRoleProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyUserRoleProjectRequest::GetUserId() const
{
    return m_userId;
}

void ModifyUserRoleProjectRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ModifyUserRoleProjectRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<int64_t> ModifyUserRoleProjectRequest::GetRoleIdList() const
{
    return m_roleIdList;
}

void ModifyUserRoleProjectRequest::SetRoleIdList(const vector<int64_t>& _roleIdList)
{
    m_roleIdList = _roleIdList;
    m_roleIdListHasBeenSet = true;
}

bool ModifyUserRoleProjectRequest::RoleIdListHasBeenSet() const
{
    return m_roleIdListHasBeenSet;
}

string ModifyUserRoleProjectRequest::GetEmail() const
{
    return m_email;
}

void ModifyUserRoleProjectRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ModifyUserRoleProjectRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ModifyUserRoleProjectRequest::GetUserName() const
{
    return m_userName;
}

void ModifyUserRoleProjectRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ModifyUserRoleProjectRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ModifyUserRoleProjectRequest::GetAppUserId() const
{
    return m_appUserId;
}

void ModifyUserRoleProjectRequest::SetAppUserId(const string& _appUserId)
{
    m_appUserId = _appUserId;
    m_appUserIdHasBeenSet = true;
}

bool ModifyUserRoleProjectRequest::AppUserIdHasBeenSet() const
{
    return m_appUserIdHasBeenSet;
}


