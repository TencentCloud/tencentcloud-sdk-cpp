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

#include <tencentcloud/cam/v20190116/model/UpdateRoleSessionDurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

UpdateRoleSessionDurationRequest::UpdateRoleSessionDurationRequest() :
    m_sessionDurationHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_roleIdHasBeenSet(false)
{
}

string UpdateRoleSessionDurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sessionDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionDuration, allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roleId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateRoleSessionDurationRequest::GetSessionDuration() const
{
    return m_sessionDuration;
}

void UpdateRoleSessionDurationRequest::SetSessionDuration(const uint64_t& _sessionDuration)
{
    m_sessionDuration = _sessionDuration;
    m_sessionDurationHasBeenSet = true;
}

bool UpdateRoleSessionDurationRequest::SessionDurationHasBeenSet() const
{
    return m_sessionDurationHasBeenSet;
}

string UpdateRoleSessionDurationRequest::GetRoleName() const
{
    return m_roleName;
}

void UpdateRoleSessionDurationRequest::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool UpdateRoleSessionDurationRequest::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

uint64_t UpdateRoleSessionDurationRequest::GetRoleId() const
{
    return m_roleId;
}

void UpdateRoleSessionDurationRequest::SetRoleId(const uint64_t& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool UpdateRoleSessionDurationRequest::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}


