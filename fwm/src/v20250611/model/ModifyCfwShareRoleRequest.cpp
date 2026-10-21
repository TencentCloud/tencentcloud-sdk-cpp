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

#include <tencentcloud/fwm/v20250611/model/ModifyCfwShareRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

ModifyCfwShareRoleRequest::ModifyCfwShareRoleRequest() :
    m_cfwShareRoleHasBeenSet(false),
    m_userMemberIdHasBeenSet(false),
    m_sharerMemberIdHasBeenSet(false)
{
}

string ModifyCfwShareRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cfwShareRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwShareRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cfwShareRole.c_str(), allocator).Move(), allocator);
    }

    if (m_userMemberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserMemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userMemberId.c_str(), allocator).Move(), allocator);
    }

    if (m_sharerMemberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharerMemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sharerMemberId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCfwShareRoleRequest::GetCfwShareRole() const
{
    return m_cfwShareRole;
}

void ModifyCfwShareRoleRequest::SetCfwShareRole(const string& _cfwShareRole)
{
    m_cfwShareRole = _cfwShareRole;
    m_cfwShareRoleHasBeenSet = true;
}

bool ModifyCfwShareRoleRequest::CfwShareRoleHasBeenSet() const
{
    return m_cfwShareRoleHasBeenSet;
}

string ModifyCfwShareRoleRequest::GetUserMemberId() const
{
    return m_userMemberId;
}

void ModifyCfwShareRoleRequest::SetUserMemberId(const string& _userMemberId)
{
    m_userMemberId = _userMemberId;
    m_userMemberIdHasBeenSet = true;
}

bool ModifyCfwShareRoleRequest::UserMemberIdHasBeenSet() const
{
    return m_userMemberIdHasBeenSet;
}

string ModifyCfwShareRoleRequest::GetSharerMemberId() const
{
    return m_sharerMemberId;
}

void ModifyCfwShareRoleRequest::SetSharerMemberId(const string& _sharerMemberId)
{
    m_sharerMemberId = _sharerMemberId;
    m_sharerMemberIdHasBeenSet = true;
}

bool ModifyCfwShareRoleRequest::SharerMemberIdHasBeenSet() const
{
    return m_sharerMemberIdHasBeenSet;
}


