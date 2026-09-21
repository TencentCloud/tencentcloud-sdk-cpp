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

#include <tencentcloud/databuddy/v20260715/model/UpdateConsoleGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UpdateConsoleGroupRequest::UpdateConsoleGroupRequest() :
    m_groupIdHasBeenSet(false),
    m_operTypeHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupNicknameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_userUinsHasBeenSet(false)
{
}

string UpdateConsoleGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_operTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_operType, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNickname";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupNickname.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateConsoleGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void UpdateConsoleGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool UpdateConsoleGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t UpdateConsoleGroupRequest::GetOperType() const
{
    return m_operType;
}

void UpdateConsoleGroupRequest::SetOperType(const int64_t& _operType)
{
    m_operType = _operType;
    m_operTypeHasBeenSet = true;
}

bool UpdateConsoleGroupRequest::OperTypeHasBeenSet() const
{
    return m_operTypeHasBeenSet;
}

string UpdateConsoleGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void UpdateConsoleGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool UpdateConsoleGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string UpdateConsoleGroupRequest::GetGroupNickname() const
{
    return m_groupNickname;
}

void UpdateConsoleGroupRequest::SetGroupNickname(const string& _groupNickname)
{
    m_groupNickname = _groupNickname;
    m_groupNicknameHasBeenSet = true;
}

bool UpdateConsoleGroupRequest::GroupNicknameHasBeenSet() const
{
    return m_groupNicknameHasBeenSet;
}

string UpdateConsoleGroupRequest::GetDescription() const
{
    return m_description;
}

void UpdateConsoleGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateConsoleGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> UpdateConsoleGroupRequest::GetUserUins() const
{
    return m_userUins;
}

void UpdateConsoleGroupRequest::SetUserUins(const vector<string>& _userUins)
{
    m_userUins = _userUins;
    m_userUinsHasBeenSet = true;
}

bool UpdateConsoleGroupRequest::UserUinsHasBeenSet() const
{
    return m_userUinsHasBeenSet;
}


