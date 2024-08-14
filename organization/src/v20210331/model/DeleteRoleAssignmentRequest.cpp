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

#include <tencentcloud/organization/v20210331/model/DeleteRoleAssignmentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

DeleteRoleAssignmentRequest::DeleteRoleAssignmentRequest() :
    m_zoneIdHasBeenSet(false),
    m_roleConfigurationIdHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_targetUinHasBeenSet(false),
    m_principalTypeHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_deprovisionStrategyHasBeenSet(false)
{
}

string DeleteRoleAssignmentRequest::ToJsonString() const
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

    if (m_roleConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetUin, allocator);
    }

    if (m_principalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_principalType.c_str(), allocator).Move(), allocator);
    }

    if (m_principalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_principalId.c_str(), allocator).Move(), allocator);
    }

    if (m_deprovisionStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeprovisionStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deprovisionStrategy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteRoleAssignmentRequest::GetZoneId() const
{
    return m_zoneId;
}

void DeleteRoleAssignmentRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DeleteRoleAssignmentRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DeleteRoleAssignmentRequest::GetRoleConfigurationId() const
{
    return m_roleConfigurationId;
}

void DeleteRoleAssignmentRequest::SetRoleConfigurationId(const string& _roleConfigurationId)
{
    m_roleConfigurationId = _roleConfigurationId;
    m_roleConfigurationIdHasBeenSet = true;
}

bool DeleteRoleAssignmentRequest::RoleConfigurationIdHasBeenSet() const
{
    return m_roleConfigurationIdHasBeenSet;
}

string DeleteRoleAssignmentRequest::GetTargetType() const
{
    return m_targetType;
}

void DeleteRoleAssignmentRequest::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool DeleteRoleAssignmentRequest::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

int64_t DeleteRoleAssignmentRequest::GetTargetUin() const
{
    return m_targetUin;
}

void DeleteRoleAssignmentRequest::SetTargetUin(const int64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool DeleteRoleAssignmentRequest::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

string DeleteRoleAssignmentRequest::GetPrincipalType() const
{
    return m_principalType;
}

void DeleteRoleAssignmentRequest::SetPrincipalType(const string& _principalType)
{
    m_principalType = _principalType;
    m_principalTypeHasBeenSet = true;
}

bool DeleteRoleAssignmentRequest::PrincipalTypeHasBeenSet() const
{
    return m_principalTypeHasBeenSet;
}

string DeleteRoleAssignmentRequest::GetPrincipalId() const
{
    return m_principalId;
}

void DeleteRoleAssignmentRequest::SetPrincipalId(const string& _principalId)
{
    m_principalId = _principalId;
    m_principalIdHasBeenSet = true;
}

bool DeleteRoleAssignmentRequest::PrincipalIdHasBeenSet() const
{
    return m_principalIdHasBeenSet;
}

string DeleteRoleAssignmentRequest::GetDeprovisionStrategy() const
{
    return m_deprovisionStrategy;
}

void DeleteRoleAssignmentRequest::SetDeprovisionStrategy(const string& _deprovisionStrategy)
{
    m_deprovisionStrategy = _deprovisionStrategy;
    m_deprovisionStrategyHasBeenSet = true;
}

bool DeleteRoleAssignmentRequest::DeprovisionStrategyHasBeenSet() const
{
    return m_deprovisionStrategyHasBeenSet;
}


