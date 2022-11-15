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

#include <tencentcloud/eis/v20210601/model/RuntimeDeployedInstanceMC.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eis::V20210601::Model;
using namespace std;

RuntimeDeployedInstanceMC::RuntimeDeployedInstanceMC() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceVersionHasBeenSet(false),
    m_instanceCreatedAtHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_projectTypeHasBeenSet(false),
    m_projectVersionHasBeenSet(false)
{
}

CoreInternalOutcome RuntimeDeployedInstanceMC::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeDeployedInstanceMC.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeDeployedInstanceMC.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeDeployedInstanceMC.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeDeployedInstanceMC.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeDeployedInstanceMC.InstanceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = value["InstanceId"].GetInt64();
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceVersion") && !value["InstanceVersion"].IsNull())
    {
        if (!value["InstanceVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeDeployedInstanceMC.InstanceVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersion = value["InstanceVersion"].GetInt64();
        m_instanceVersionHasBeenSet = true;
    }

    if (value.HasMember("InstanceCreatedAt") && !value["InstanceCreatedAt"].IsNull())
    {
        if (!value["InstanceCreatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeDeployedInstanceMC.InstanceCreatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCreatedAt = value["InstanceCreatedAt"].GetInt64();
        m_instanceCreatedAtHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeDeployedInstanceMC.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeDeployedInstanceMC.CreatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = value["CreatedAt"].GetInt64();
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeDeployedInstanceMC.UpdatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = value["UpdatedAt"].GetInt64();
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("ProjectType") && !value["ProjectType"].IsNull())
    {
        if (!value["ProjectType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeDeployedInstanceMC.ProjectType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectType = value["ProjectType"].GetInt64();
        m_projectTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectVersion") && !value["ProjectVersion"].IsNull())
    {
        if (!value["ProjectVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeDeployedInstanceMC.ProjectVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectVersion = value["ProjectVersion"].GetInt64();
        m_projectVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuntimeDeployedInstanceMC::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceId, allocator);
    }

    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceVersion, allocator);
    }

    if (m_instanceCreatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCreatedAt, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedAt, allocator);
    }

    if (m_projectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectType, allocator);
    }

    if (m_projectVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectVersion, allocator);
    }

}


int64_t RuntimeDeployedInstanceMC::GetGroupId() const
{
    return m_groupId;
}

void RuntimeDeployedInstanceMC::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool RuntimeDeployedInstanceMC::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string RuntimeDeployedInstanceMC::GetGroupName() const
{
    return m_groupName;
}

void RuntimeDeployedInstanceMC::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool RuntimeDeployedInstanceMC::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t RuntimeDeployedInstanceMC::GetProjectId() const
{
    return m_projectId;
}

void RuntimeDeployedInstanceMC::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RuntimeDeployedInstanceMC::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RuntimeDeployedInstanceMC::GetProjectName() const
{
    return m_projectName;
}

void RuntimeDeployedInstanceMC::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool RuntimeDeployedInstanceMC::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

int64_t RuntimeDeployedInstanceMC::GetInstanceId() const
{
    return m_instanceId;
}

void RuntimeDeployedInstanceMC::SetInstanceId(const int64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RuntimeDeployedInstanceMC::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t RuntimeDeployedInstanceMC::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void RuntimeDeployedInstanceMC::SetInstanceVersion(const int64_t& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool RuntimeDeployedInstanceMC::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

int64_t RuntimeDeployedInstanceMC::GetInstanceCreatedAt() const
{
    return m_instanceCreatedAt;
}

void RuntimeDeployedInstanceMC::SetInstanceCreatedAt(const int64_t& _instanceCreatedAt)
{
    m_instanceCreatedAt = _instanceCreatedAt;
    m_instanceCreatedAtHasBeenSet = true;
}

bool RuntimeDeployedInstanceMC::InstanceCreatedAtHasBeenSet() const
{
    return m_instanceCreatedAtHasBeenSet;
}

int64_t RuntimeDeployedInstanceMC::GetStatus() const
{
    return m_status;
}

void RuntimeDeployedInstanceMC::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RuntimeDeployedInstanceMC::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RuntimeDeployedInstanceMC::GetCreatedAt() const
{
    return m_createdAt;
}

void RuntimeDeployedInstanceMC::SetCreatedAt(const int64_t& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool RuntimeDeployedInstanceMC::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

int64_t RuntimeDeployedInstanceMC::GetUpdatedAt() const
{
    return m_updatedAt;
}

void RuntimeDeployedInstanceMC::SetUpdatedAt(const int64_t& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool RuntimeDeployedInstanceMC::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

int64_t RuntimeDeployedInstanceMC::GetProjectType() const
{
    return m_projectType;
}

void RuntimeDeployedInstanceMC::SetProjectType(const int64_t& _projectType)
{
    m_projectType = _projectType;
    m_projectTypeHasBeenSet = true;
}

bool RuntimeDeployedInstanceMC::ProjectTypeHasBeenSet() const
{
    return m_projectTypeHasBeenSet;
}

int64_t RuntimeDeployedInstanceMC::GetProjectVersion() const
{
    return m_projectVersion;
}

void RuntimeDeployedInstanceMC::SetProjectVersion(const int64_t& _projectVersion)
{
    m_projectVersion = _projectVersion;
    m_projectVersionHasBeenSet = true;
}

bool RuntimeDeployedInstanceMC::ProjectVersionHasBeenSet() const
{
    return m_projectVersionHasBeenSet;
}

