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

#include <tencentcloud/evt/v20250217/model/DeleteRoleUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Evt::V20250217::Model;
using namespace std;

DeleteRoleUserRequest::DeleteRoleUserRequest() :
    m_roleSystemIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

string DeleteRoleUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roleSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roleSystemId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DeleteRoleUserRequest::GetRoleSystemId() const
{
    return m_roleSystemId;
}

void DeleteRoleUserRequest::SetRoleSystemId(const uint64_t& _roleSystemId)
{
    m_roleSystemId = _roleSystemId;
    m_roleSystemIdHasBeenSet = true;
}

bool DeleteRoleUserRequest::RoleSystemIdHasBeenSet() const
{
    return m_roleSystemIdHasBeenSet;
}

string DeleteRoleUserRequest::GetUserId() const
{
    return m_userId;
}

void DeleteRoleUserRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DeleteRoleUserRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}


