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

#include <tencentcloud/organization/v20210331/model/RoleAssignments.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

RoleAssignments::RoleAssignments() :
    m_roleConfigurationIdHasBeenSet(false),
    m_roleConfigurationNameHasBeenSet(false),
    m_targetUinHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_principalTypeHasBeenSet(false),
    m_principalNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_targetNameHasBeenSet(false)
{
}

CoreInternalOutcome RoleAssignments::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleConfigurationId") && !value["RoleConfigurationId"].IsNull())
    {
        if (!value["RoleConfigurationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignments.RoleConfigurationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleConfigurationId = string(value["RoleConfigurationId"].GetString());
        m_roleConfigurationIdHasBeenSet = true;
    }

    if (value.HasMember("RoleConfigurationName") && !value["RoleConfigurationName"].IsNull())
    {
        if (!value["RoleConfigurationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignments.RoleConfigurationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleConfigurationName = string(value["RoleConfigurationName"].GetString());
        m_roleConfigurationNameHasBeenSet = true;
    }

    if (value.HasMember("TargetUin") && !value["TargetUin"].IsNull())
    {
        if (!value["TargetUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignments.TargetUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetUin = value["TargetUin"].GetInt64();
        m_targetUinHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignments.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("PrincipalId") && !value["PrincipalId"].IsNull())
    {
        if (!value["PrincipalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignments.PrincipalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalId = string(value["PrincipalId"].GetString());
        m_principalIdHasBeenSet = true;
    }

    if (value.HasMember("PrincipalType") && !value["PrincipalType"].IsNull())
    {
        if (!value["PrincipalType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignments.PrincipalType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalType = string(value["PrincipalType"].GetString());
        m_principalTypeHasBeenSet = true;
    }

    if (value.HasMember("PrincipalName") && !value["PrincipalName"].IsNull())
    {
        if (!value["PrincipalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignments.PrincipalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalName = string(value["PrincipalName"].GetString());
        m_principalNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignments.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignments.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TargetName") && !value["TargetName"].IsNull())
    {
        if (!value["TargetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAssignments.TargetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetName = string(value["TargetName"].GetString());
        m_targetNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleAssignments::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleConfigurationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleConfigurationName.c_str(), allocator).Move(), allocator);
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

    if (m_principalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principalName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_targetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetName.c_str(), allocator).Move(), allocator);
    }

}


string RoleAssignments::GetRoleConfigurationId() const
{
    return m_roleConfigurationId;
}

void RoleAssignments::SetRoleConfigurationId(const string& _roleConfigurationId)
{
    m_roleConfigurationId = _roleConfigurationId;
    m_roleConfigurationIdHasBeenSet = true;
}

bool RoleAssignments::RoleConfigurationIdHasBeenSet() const
{
    return m_roleConfigurationIdHasBeenSet;
}

string RoleAssignments::GetRoleConfigurationName() const
{
    return m_roleConfigurationName;
}

void RoleAssignments::SetRoleConfigurationName(const string& _roleConfigurationName)
{
    m_roleConfigurationName = _roleConfigurationName;
    m_roleConfigurationNameHasBeenSet = true;
}

bool RoleAssignments::RoleConfigurationNameHasBeenSet() const
{
    return m_roleConfigurationNameHasBeenSet;
}

int64_t RoleAssignments::GetTargetUin() const
{
    return m_targetUin;
}

void RoleAssignments::SetTargetUin(const int64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool RoleAssignments::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

string RoleAssignments::GetTargetType() const
{
    return m_targetType;
}

void RoleAssignments::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool RoleAssignments::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string RoleAssignments::GetPrincipalId() const
{
    return m_principalId;
}

void RoleAssignments::SetPrincipalId(const string& _principalId)
{
    m_principalId = _principalId;
    m_principalIdHasBeenSet = true;
}

bool RoleAssignments::PrincipalIdHasBeenSet() const
{
    return m_principalIdHasBeenSet;
}

string RoleAssignments::GetPrincipalType() const
{
    return m_principalType;
}

void RoleAssignments::SetPrincipalType(const string& _principalType)
{
    m_principalType = _principalType;
    m_principalTypeHasBeenSet = true;
}

bool RoleAssignments::PrincipalTypeHasBeenSet() const
{
    return m_principalTypeHasBeenSet;
}

string RoleAssignments::GetPrincipalName() const
{
    return m_principalName;
}

void RoleAssignments::SetPrincipalName(const string& _principalName)
{
    m_principalName = _principalName;
    m_principalNameHasBeenSet = true;
}

bool RoleAssignments::PrincipalNameHasBeenSet() const
{
    return m_principalNameHasBeenSet;
}

string RoleAssignments::GetCreateTime() const
{
    return m_createTime;
}

void RoleAssignments::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RoleAssignments::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RoleAssignments::GetUpdateTime() const
{
    return m_updateTime;
}

void RoleAssignments::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RoleAssignments::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RoleAssignments::GetTargetName() const
{
    return m_targetName;
}

void RoleAssignments::SetTargetName(const string& _targetName)
{
    m_targetName = _targetName;
    m_targetNameHasBeenSet = true;
}

bool RoleAssignments::TargetNameHasBeenSet() const
{
    return m_targetNameHasBeenSet;
}

