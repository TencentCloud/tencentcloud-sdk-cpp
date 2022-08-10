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

#include <tencentcloud/gme/v20180711/model/ModifyUserMicStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

ModifyUserMicStatusRequest::ModifyUserMicStatusRequest() :
    m_bizIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_usersHasBeenSet(false)
{
}

string ModifyUserMicStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bizId, allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_usersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Users";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_users.begin(); itr != m_users.end(); ++itr, ++i)
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


int64_t ModifyUserMicStatusRequest::GetBizId() const
{
    return m_bizId;
}

void ModifyUserMicStatusRequest::SetBizId(const int64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool ModifyUserMicStatusRequest::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

string ModifyUserMicStatusRequest::GetRoomId() const
{
    return m_roomId;
}

void ModifyUserMicStatusRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool ModifyUserMicStatusRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

vector<UserMicStatus> ModifyUserMicStatusRequest::GetUsers() const
{
    return m_users;
}

void ModifyUserMicStatusRequest::SetUsers(const vector<UserMicStatus>& _users)
{
    m_users = _users;
    m_usersHasBeenSet = true;
}

bool ModifyUserMicStatusRequest::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}


