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

#include <tencentcloud/databuddy/v20260715/model/UpdateConsoleUsersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UpdateConsoleUsersRequest::UpdateConsoleUsersRequest() :
    m_userUinsHasBeenSet(false),
    m_roleIdsHasBeenSet(false)
{
}

string UpdateConsoleUsersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userUins.begin(); itr != m_userUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_roleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roleIds.begin(); itr != m_roleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> UpdateConsoleUsersRequest::GetUserUins() const
{
    return m_userUins;
}

void UpdateConsoleUsersRequest::SetUserUins(const vector<string>& _userUins)
{
    m_userUins = _userUins;
    m_userUinsHasBeenSet = true;
}

bool UpdateConsoleUsersRequest::UserUinsHasBeenSet() const
{
    return m_userUinsHasBeenSet;
}

vector<string> UpdateConsoleUsersRequest::GetRoleIds() const
{
    return m_roleIds;
}

void UpdateConsoleUsersRequest::SetRoleIds(const vector<string>& _roleIds)
{
    m_roleIds = _roleIds;
    m_roleIdsHasBeenSet = true;
}

bool UpdateConsoleUsersRequest::RoleIdsHasBeenSet() const
{
    return m_roleIdsHasBeenSet;
}


