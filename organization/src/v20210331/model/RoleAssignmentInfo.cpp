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

#include <tencentcloud/organization/v20210331/model/RoleAssignmentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

RoleAssignmentInfo::RoleAssignmentInfo() :
    m_principalIdHasBeenSet(false),
    m_principalTypeHasBeenSet(false),
    m_targetUinHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_roleConfigurationIdHasBeenSet(false)
{
}

CoreInternalOutcome RoleAssignmentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrincipalId") && !value["PrincipalId"].IsNull())
    {
        if (!value["PrincipalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignmentInfo.PrincipalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalId = string(value["PrincipalId"].GetString());
        m_principalIdHasBeenSet = true;
    }

    if (value.HasMember("PrincipalType") && !value["PrincipalType"].IsNull())
    {
        if (!value["PrincipalType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignmentInfo.PrincipalType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalType = string(value["PrincipalType"].GetString());
        m_principalTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetUin") && !value["TargetUin"].IsNull())
    {
        if (!value["TargetUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignmentInfo.TargetUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetUin = value["TargetUin"].GetInt64();
        m_targetUinHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignmentInfo.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("RoleConfigurationId") && !value["RoleConfigurationId"].IsNull())
    {
        if (!value["RoleConfigurationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignmentInfo.RoleConfigurationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleConfigurationId = string(value["RoleConfigurationId"].GetString());
        m_roleConfigurationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleAssignmentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_principalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principalId.c_str(), allocator).Move(), allocator);
    }

    if (m_principalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principalType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetUin, allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_roleConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleConfigurationId.c_str(), allocator).Move(), allocator);
    }

}


string RoleAssignmentInfo::GetPrincipalId() const
{
    return m_principalId;
}

void RoleAssignmentInfo::SetPrincipalId(const string& _principalId)
{
    m_principalId = _principalId;
    m_principalIdHasBeenSet = true;
}

bool RoleAssignmentInfo::PrincipalIdHasBeenSet() const
{
    return m_principalIdHasBeenSet;
}

string RoleAssignmentInfo::GetPrincipalType() const
{
    return m_principalType;
}

void RoleAssignmentInfo::SetPrincipalType(const string& _principalType)
{
    m_principalType = _principalType;
    m_principalTypeHasBeenSet = true;
}

bool RoleAssignmentInfo::PrincipalTypeHasBeenSet() const
{
    return m_principalTypeHasBeenSet;
}

int64_t RoleAssignmentInfo::GetTargetUin() const
{
    return m_targetUin;
}

void RoleAssignmentInfo::SetTargetUin(const int64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool RoleAssignmentInfo::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

string RoleAssignmentInfo::GetTargetType() const
{
    return m_targetType;
}

void RoleAssignmentInfo::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool RoleAssignmentInfo::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string RoleAssignmentInfo::GetRoleConfigurationId() const
{
    return m_roleConfigurationId;
}

void RoleAssignmentInfo::SetRoleConfigurationId(const string& _roleConfigurationId)
{
    m_roleConfigurationId = _roleConfigurationId;
    m_roleConfigurationIdHasBeenSet = true;
}

bool RoleAssignmentInfo::RoleConfigurationIdHasBeenSet() const
{
    return m_roleConfigurationIdHasBeenSet;
}

