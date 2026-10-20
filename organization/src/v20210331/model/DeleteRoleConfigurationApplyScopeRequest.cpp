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

#include <tencentcloud/organization/v20210331/model/DeleteRoleConfigurationApplyScopeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

DeleteRoleConfigurationApplyScopeRequest::DeleteRoleConfigurationApplyScopeRequest() :
    m_zoneIdHasBeenSet(false),
    m_roleConfigurationIdsHasBeenSet(false),
    m_targetUinHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_principalTypeHasBeenSet(false)
{
}

string DeleteRoleConfigurationApplyScopeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleConfigurationIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roleConfigurationIds.begin(); itr != m_roleConfigurationIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetUin, allocator);
    }

    if (m_principalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_principalId.c_str(), allocator).Move(), allocator);
    }

    if (m_principalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_principalType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteRoleConfigurationApplyScopeRequest::GetZoneId() const
{
    return m_zoneId;
}

void DeleteRoleConfigurationApplyScopeRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DeleteRoleConfigurationApplyScopeRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<string> DeleteRoleConfigurationApplyScopeRequest::GetRoleConfigurationIds() const
{
    return m_roleConfigurationIds;
}

void DeleteRoleConfigurationApplyScopeRequest::SetRoleConfigurationIds(const vector<string>& _roleConfigurationIds)
{
    m_roleConfigurationIds = _roleConfigurationIds;
    m_roleConfigurationIdsHasBeenSet = true;
}

bool DeleteRoleConfigurationApplyScopeRequest::RoleConfigurationIdsHasBeenSet() const
{
    return m_roleConfigurationIdsHasBeenSet;
}

int64_t DeleteRoleConfigurationApplyScopeRequest::GetTargetUin() const
{
    return m_targetUin;
}

void DeleteRoleConfigurationApplyScopeRequest::SetTargetUin(const int64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool DeleteRoleConfigurationApplyScopeRequest::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

string DeleteRoleConfigurationApplyScopeRequest::GetPrincipalId() const
{
    return m_principalId;
}

void DeleteRoleConfigurationApplyScopeRequest::SetPrincipalId(const string& _principalId)
{
    m_principalId = _principalId;
    m_principalIdHasBeenSet = true;
}

bool DeleteRoleConfigurationApplyScopeRequest::PrincipalIdHasBeenSet() const
{
    return m_principalIdHasBeenSet;
}

string DeleteRoleConfigurationApplyScopeRequest::GetPrincipalType() const
{
    return m_principalType;
}

void DeleteRoleConfigurationApplyScopeRequest::SetPrincipalType(const string& _principalType)
{
    m_principalType = _principalType;
    m_principalTypeHasBeenSet = true;
}

bool DeleteRoleConfigurationApplyScopeRequest::PrincipalTypeHasBeenSet() const
{
    return m_principalTypeHasBeenSet;
}


