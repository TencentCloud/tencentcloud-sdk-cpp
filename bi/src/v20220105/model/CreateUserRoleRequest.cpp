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

#include <tencentcloud/bi/v20220105/model/CreateUserRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

CreateUserRoleRequest::CreateUserRoleRequest() :
    m_roleIdListHasBeenSet(false),
    m_userListHasBeenSet(false),
    m_userInfoListHasBeenSet(false)
{
}

string CreateUserRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_userListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userList.begin(); itr != m_userList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_userInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userInfoList.begin(); itr != m_userInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> CreateUserRoleRequest::GetRoleIdList() const
{
    return m_roleIdList;
}

void CreateUserRoleRequest::SetRoleIdList(const vector<int64_t>& _roleIdList)
{
    m_roleIdList = _roleIdList;
    m_roleIdListHasBeenSet = true;
}

bool CreateUserRoleRequest::RoleIdListHasBeenSet() const
{
    return m_roleIdListHasBeenSet;
}

vector<UserIdAndUserName> CreateUserRoleRequest::GetUserList() const
{
    return m_userList;
}

void CreateUserRoleRequest::SetUserList(const vector<UserIdAndUserName>& _userList)
{
    m_userList = _userList;
    m_userListHasBeenSet = true;
}

bool CreateUserRoleRequest::UserListHasBeenSet() const
{
    return m_userListHasBeenSet;
}

vector<UserInfo> CreateUserRoleRequest::GetUserInfoList() const
{
    return m_userInfoList;
}

void CreateUserRoleRequest::SetUserInfoList(const vector<UserInfo>& _userInfoList)
{
    m_userInfoList = _userInfoList;
    m_userInfoListHasBeenSet = true;
}

bool CreateUserRoleRequest::UserInfoListHasBeenSet() const
{
    return m_userInfoListHasBeenSet;
}


