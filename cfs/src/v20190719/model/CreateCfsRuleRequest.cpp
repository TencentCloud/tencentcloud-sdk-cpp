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

#include <tencentcloud/cfs/v20190719/model/CreateCfsRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

CreateCfsRuleRequest::CreateCfsRuleRequest() :
    m_pGroupIdHasBeenSet(false),
    m_authClientIpHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_rWPermissionHasBeenSet(false),
    m_userPermissionHasBeenSet(false)
{
}

string CreateCfsRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_authClientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthClientIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authClientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }

    if (m_rWPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RWPermission";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rWPermission.c_str(), allocator).Move(), allocator);
    }

    if (m_userPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPermission";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userPermission.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCfsRuleRequest::GetPGroupId() const
{
    return m_pGroupId;
}

void CreateCfsRuleRequest::SetPGroupId(const string& _pGroupId)
{
    m_pGroupId = _pGroupId;
    m_pGroupIdHasBeenSet = true;
}

bool CreateCfsRuleRequest::PGroupIdHasBeenSet() const
{
    return m_pGroupIdHasBeenSet;
}

string CreateCfsRuleRequest::GetAuthClientIp() const
{
    return m_authClientIp;
}

void CreateCfsRuleRequest::SetAuthClientIp(const string& _authClientIp)
{
    m_authClientIp = _authClientIp;
    m_authClientIpHasBeenSet = true;
}

bool CreateCfsRuleRequest::AuthClientIpHasBeenSet() const
{
    return m_authClientIpHasBeenSet;
}

int64_t CreateCfsRuleRequest::GetPriority() const
{
    return m_priority;
}

void CreateCfsRuleRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CreateCfsRuleRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string CreateCfsRuleRequest::GetRWPermission() const
{
    return m_rWPermission;
}

void CreateCfsRuleRequest::SetRWPermission(const string& _rWPermission)
{
    m_rWPermission = _rWPermission;
    m_rWPermissionHasBeenSet = true;
}

bool CreateCfsRuleRequest::RWPermissionHasBeenSet() const
{
    return m_rWPermissionHasBeenSet;
}

string CreateCfsRuleRequest::GetUserPermission() const
{
    return m_userPermission;
}

void CreateCfsRuleRequest::SetUserPermission(const string& _userPermission)
{
    m_userPermission = _userPermission;
    m_userPermissionHasBeenSet = true;
}

bool CreateCfsRuleRequest::UserPermissionHasBeenSet() const
{
    return m_userPermissionHasBeenSet;
}


