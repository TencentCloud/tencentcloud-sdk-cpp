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

#include <tencentcloud/iecp/v20210914/model/ApplicationStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ApplicationStatusInfo::ApplicationStatusInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_manageUrlHasBeenSet(false),
    m_workloadKindHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_availableReplicasHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatusInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatusInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatusInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatusInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatusInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("ManageUrl") && !value["ManageUrl"].IsNull())
    {
        if (!value["ManageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatusInfo.ManageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manageUrl = string(value["ManageUrl"].GetString());
        m_manageUrlHasBeenSet = true;
    }

    if (value.HasMember("WorkloadKind") && !value["WorkloadKind"].IsNull())
    {
        if (!value["WorkloadKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatusInfo.WorkloadKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadKind = string(value["WorkloadKind"].GetString());
        m_workloadKindHasBeenSet = true;
    }

    if (value.HasMember("DeployMode") && !value["DeployMode"].IsNull())
    {
        if (!value["DeployMode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatusInfo.DeployMode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deployMode.Deserialize(value["DeployMode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deployModeHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatusInfo.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("AvailableReplicas") && !value["AvailableReplicas"].IsNull())
    {
        if (!value["AvailableReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatusInfo.AvailableReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableReplicas = value["AvailableReplicas"].GetInt64();
        m_availableReplicasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_manageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadKind.c_str(), allocator).Move(), allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deployMode.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

    if (m_availableReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableReplicas, allocator);
    }

}


uint64_t ApplicationStatusInfo::GetId() const
{
    return m_id;
}

void ApplicationStatusInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ApplicationStatusInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ApplicationStatusInfo::GetName() const
{
    return m_name;
}

void ApplicationStatusInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApplicationStatusInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ApplicationStatusInfo::GetVersion() const
{
    return m_version;
}

void ApplicationStatusInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ApplicationStatusInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ApplicationStatusInfo::GetStatus() const
{
    return m_status;
}

void ApplicationStatusInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApplicationStatusInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApplicationStatusInfo::GetStartTime() const
{
    return m_startTime;
}

void ApplicationStatusInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ApplicationStatusInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ApplicationStatusInfo::GetManageUrl() const
{
    return m_manageUrl;
}

void ApplicationStatusInfo::SetManageUrl(const string& _manageUrl)
{
    m_manageUrl = _manageUrl;
    m_manageUrlHasBeenSet = true;
}

bool ApplicationStatusInfo::ManageUrlHasBeenSet() const
{
    return m_manageUrlHasBeenSet;
}

string ApplicationStatusInfo::GetWorkloadKind() const
{
    return m_workloadKind;
}

void ApplicationStatusInfo::SetWorkloadKind(const string& _workloadKind)
{
    m_workloadKind = _workloadKind;
    m_workloadKindHasBeenSet = true;
}

bool ApplicationStatusInfo::WorkloadKindHasBeenSet() const
{
    return m_workloadKindHasBeenSet;
}

ApplicationDeployMode ApplicationStatusInfo::GetDeployMode() const
{
    return m_deployMode;
}

void ApplicationStatusInfo::SetDeployMode(const ApplicationDeployMode& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool ApplicationStatusInfo::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

int64_t ApplicationStatusInfo::GetReplicas() const
{
    return m_replicas;
}

void ApplicationStatusInfo::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool ApplicationStatusInfo::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

int64_t ApplicationStatusInfo::GetAvailableReplicas() const
{
    return m_availableReplicas;
}

void ApplicationStatusInfo::SetAvailableReplicas(const int64_t& _availableReplicas)
{
    m_availableReplicas = _availableReplicas;
    m_availableReplicasHasBeenSet = true;
}

bool ApplicationStatusInfo::AvailableReplicasHasBeenSet() const
{
    return m_availableReplicasHasBeenSet;
}

