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

#include <tencentcloud/hai/v20230812/model/RoleStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

RoleStatusInfo::RoleStatusInfo() :
    m_roleNameHasBeenSet(false),
    m_workloadTypeHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_runningReplicasHasBeenSet(false),
    m_targetReplicasHasBeenSet(false),
    m_containerCountHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_lastObservedTimeHasBeenSet(false),
    m_roleHasBeenSet(false)
{
}

CoreInternalOutcome RoleStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleStatusInfo.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("WorkloadType") && !value["WorkloadType"].IsNull())
    {
        if (!value["WorkloadType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleStatusInfo.WorkloadType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadType = string(value["WorkloadType"].GetString());
        m_workloadTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkloadName") && !value["WorkloadName"].IsNull())
    {
        if (!value["WorkloadName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleStatusInfo.WorkloadName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadName = string(value["WorkloadName"].GetString());
        m_workloadNameHasBeenSet = true;
    }

    if (value.HasMember("RunningReplicas") && !value["RunningReplicas"].IsNull())
    {
        if (!value["RunningReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleStatusInfo.RunningReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningReplicas = value["RunningReplicas"].GetInt64();
        m_runningReplicasHasBeenSet = true;
    }

    if (value.HasMember("TargetReplicas") && !value["TargetReplicas"].IsNull())
    {
        if (!value["TargetReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleStatusInfo.TargetReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetReplicas = value["TargetReplicas"].GetInt64();
        m_targetReplicasHasBeenSet = true;
    }

    if (value.HasMember("ContainerCount") && !value["ContainerCount"].IsNull())
    {
        if (!value["ContainerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleStatusInfo.ContainerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCount = value["ContainerCount"].GetInt64();
        m_containerCountHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleStatusInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("LastObservedTime") && !value["LastObservedTime"].IsNull())
    {
        if (!value["LastObservedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleStatusInfo.LastObservedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastObservedTime = string(value["LastObservedTime"].GetString());
        m_lastObservedTimeHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleStatusInfo.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadType.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadName.c_str(), allocator).Move(), allocator);
    }

    if (m_runningReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningReplicas, allocator);
    }

    if (m_targetReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetReplicas, allocator);
    }

    if (m_containerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCount, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_lastObservedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastObservedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastObservedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

}


string RoleStatusInfo::GetRoleName() const
{
    return m_roleName;
}

void RoleStatusInfo::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool RoleStatusInfo::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string RoleStatusInfo::GetWorkloadType() const
{
    return m_workloadType;
}

void RoleStatusInfo::SetWorkloadType(const string& _workloadType)
{
    m_workloadType = _workloadType;
    m_workloadTypeHasBeenSet = true;
}

bool RoleStatusInfo::WorkloadTypeHasBeenSet() const
{
    return m_workloadTypeHasBeenSet;
}

string RoleStatusInfo::GetWorkloadName() const
{
    return m_workloadName;
}

void RoleStatusInfo::SetWorkloadName(const string& _workloadName)
{
    m_workloadName = _workloadName;
    m_workloadNameHasBeenSet = true;
}

bool RoleStatusInfo::WorkloadNameHasBeenSet() const
{
    return m_workloadNameHasBeenSet;
}

int64_t RoleStatusInfo::GetRunningReplicas() const
{
    return m_runningReplicas;
}

void RoleStatusInfo::SetRunningReplicas(const int64_t& _runningReplicas)
{
    m_runningReplicas = _runningReplicas;
    m_runningReplicasHasBeenSet = true;
}

bool RoleStatusInfo::RunningReplicasHasBeenSet() const
{
    return m_runningReplicasHasBeenSet;
}

int64_t RoleStatusInfo::GetTargetReplicas() const
{
    return m_targetReplicas;
}

void RoleStatusInfo::SetTargetReplicas(const int64_t& _targetReplicas)
{
    m_targetReplicas = _targetReplicas;
    m_targetReplicasHasBeenSet = true;
}

bool RoleStatusInfo::TargetReplicasHasBeenSet() const
{
    return m_targetReplicasHasBeenSet;
}

int64_t RoleStatusInfo::GetContainerCount() const
{
    return m_containerCount;
}

void RoleStatusInfo::SetContainerCount(const int64_t& _containerCount)
{
    m_containerCount = _containerCount;
    m_containerCountHasBeenSet = true;
}

bool RoleStatusInfo::ContainerCountHasBeenSet() const
{
    return m_containerCountHasBeenSet;
}

string RoleStatusInfo::GetState() const
{
    return m_state;
}

void RoleStatusInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool RoleStatusInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string RoleStatusInfo::GetLastObservedTime() const
{
    return m_lastObservedTime;
}

void RoleStatusInfo::SetLastObservedTime(const string& _lastObservedTime)
{
    m_lastObservedTime = _lastObservedTime;
    m_lastObservedTimeHasBeenSet = true;
}

bool RoleStatusInfo::LastObservedTimeHasBeenSet() const
{
    return m_lastObservedTimeHasBeenSet;
}

string RoleStatusInfo::GetRole() const
{
    return m_role;
}

void RoleStatusInfo::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool RoleStatusInfo::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

