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

#include <tencentcloud/tcb/v20180608/model/DeleteEndUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

DeleteEndUserRequest::DeleteEndUserRequest() :
    m_envIdHasBeenSet(false),
    m_userListHasBeenSet(false)
{
}

string DeleteEndUserRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_userListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_userList.begin(); itr != m_userList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteEndUserRequest::GetEnvId() const
{
    return m_envId;
}

void DeleteEndUserRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DeleteEndUserRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

vector<string> DeleteEndUserRequest::GetUserList() const
{
    return m_userList;
}

void DeleteEndUserRequest::SetUserList(const vector<string>& _userList)
{
    m_userList = _userList;
    m_userListHasBeenSet = true;
}

bool DeleteEndUserRequest::UserListHasBeenSet() const
{
    return m_userListHasBeenSet;
}


