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

#include <tencentcloud/organization/v20210331/model/RoleConfigurationProvisionings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

RoleConfigurationProvisionings::RoleConfigurationProvisionings() :
    m_deploymentStatusHasBeenSet(false),
    m_roleConfigurationIdHasBeenSet(false),
    m_roleConfigurationNameHasBeenSet(false),
    m_targetUinHasBeenSet(false),
    m_targetNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_targetTypeHasBeenSet(false)
{
}

CoreInternalOutcome RoleConfigurationProvisionings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeploymentStatus") && !value["DeploymentStatus"].IsNull())
    {
        if (!value["DeploymentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfigurationProvisionings.DeploymentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentStatus = string(value["DeploymentStatus"].GetString());
        m_deploymentStatusHasBeenSet = true;
    }

    if (value.HasMember("RoleConfigurationId") && !value["RoleConfigurationId"].IsNull())
    {
        if (!value["RoleConfigurationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfigurationProvisionings.RoleConfigurationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleConfigurationId = string(value["RoleConfigurationId"].GetString());
        m_roleConfigurationIdHasBeenSet = true;
    }

    if (value.HasMember("RoleConfigurationName") && !value["RoleConfigurationName"].IsNull())
    {
        if (!value["RoleConfigurationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfigurationProvisionings.RoleConfigurationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleConfigurationName = string(value["RoleConfigurationName"].GetString());
        m_roleConfigurationNameHasBeenSet = true;
    }

    if (value.HasMember("TargetUin") && !value["TargetUin"].IsNull())
    {
        if (!value["TargetUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfigurationProvisionings.TargetUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetUin = value["TargetUin"].GetInt64();
        m_targetUinHasBeenSet = true;
    }

    if (value.HasMember("TargetName") && !value["TargetName"].IsNull())
    {
        if (!value["TargetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfigurationProvisionings.TargetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetName = string(value["TargetName"].GetString());
        m_targetNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfigurationProvisionings.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfigurationProvisionings.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfigurationProvisionings.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleConfigurationProvisionings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deploymentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deploymentStatus.c_str(), allocator).Move(), allocator);
    }

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

    if (m_targetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetName.c_str(), allocator).Move(), allocator);
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

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

}


string RoleConfigurationProvisionings::GetDeploymentStatus() const
{
    return m_deploymentStatus;
}

void RoleConfigurationProvisionings::SetDeploymentStatus(const string& _deploymentStatus)
{
    m_deploymentStatus = _deploymentStatus;
    m_deploymentStatusHasBeenSet = true;
}

bool RoleConfigurationProvisionings::DeploymentStatusHasBeenSet() const
{
    return m_deploymentStatusHasBeenSet;
}

string RoleConfigurationProvisionings::GetRoleConfigurationId() const
{
    return m_roleConfigurationId;
}

void RoleConfigurationProvisionings::SetRoleConfigurationId(const string& _roleConfigurationId)
{
    m_roleConfigurationId = _roleConfigurationId;
    m_roleConfigurationIdHasBeenSet = true;
}

bool RoleConfigurationProvisionings::RoleConfigurationIdHasBeenSet() const
{
    return m_roleConfigurationIdHasBeenSet;
}

string RoleConfigurationProvisionings::GetRoleConfigurationName() const
{
    return m_roleConfigurationName;
}

void RoleConfigurationProvisionings::SetRoleConfigurationName(const string& _roleConfigurationName)
{
    m_roleConfigurationName = _roleConfigurationName;
    m_roleConfigurationNameHasBeenSet = true;
}

bool RoleConfigurationProvisionings::RoleConfigurationNameHasBeenSet() const
{
    return m_roleConfigurationNameHasBeenSet;
}

int64_t RoleConfigurationProvisionings::GetTargetUin() const
{
    return m_targetUin;
}

void RoleConfigurationProvisionings::SetTargetUin(const int64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool RoleConfigurationProvisionings::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

string RoleConfigurationProvisionings::GetTargetName() const
{
    return m_targetName;
}

void RoleConfigurationProvisionings::SetTargetName(const string& _targetName)
{
    m_targetName = _targetName;
    m_targetNameHasBeenSet = true;
}

bool RoleConfigurationProvisionings::TargetNameHasBeenSet() const
{
    return m_targetNameHasBeenSet;
}

string RoleConfigurationProvisionings::GetCreateTime() const
{
    return m_createTime;
}

void RoleConfigurationProvisionings::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RoleConfigurationProvisionings::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RoleConfigurationProvisionings::GetUpdateTime() const
{
    return m_updateTime;
}

void RoleConfigurationProvisionings::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RoleConfigurationProvisionings::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RoleConfigurationProvisionings::GetTargetType() const
{
    return m_targetType;
}

void RoleConfigurationProvisionings::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool RoleConfigurationProvisionings::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

