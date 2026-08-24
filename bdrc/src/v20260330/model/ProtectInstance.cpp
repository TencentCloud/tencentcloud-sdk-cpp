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

#include <tencentcloud/bdrc/v20260330/model/ProtectInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ProtectInstance::ProtectInstance() :
    m_instanceIdHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_agentStatusHasBeenSet(false),
    m_lastHeartbeatTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_backupCountHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_latestBackupTimeHasBeenSet(false),
    m_offlineReasonHasBeenSet(false)
{
}

CoreInternalOutcome ProtectInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectInstance.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("AgentVersion") && !value["AgentVersion"].IsNull())
    {
        if (!value["AgentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectInstance.AgentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentVersion = string(value["AgentVersion"].GetString());
        m_agentVersionHasBeenSet = true;
    }

    if (value.HasMember("AgentStatus") && !value["AgentStatus"].IsNull())
    {
        if (!value["AgentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectInstance.AgentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentStatus = string(value["AgentStatus"].GetString());
        m_agentStatusHasBeenSet = true;
    }

    if (value.HasMember("LastHeartbeatTime") && !value["LastHeartbeatTime"].IsNull())
    {
        if (!value["LastHeartbeatTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectInstance.LastHeartbeatTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastHeartbeatTime = string(value["LastHeartbeatTime"].GetString());
        m_lastHeartbeatTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectInstance.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectInstance.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("BackupCount") && !value["BackupCount"].IsNull())
    {
        if (!value["BackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectInstance.BackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupCount = value["BackupCount"].GetUint64();
        m_backupCountHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("LatestBackupTime") && !value["LatestBackupTime"].IsNull())
    {
        if (!value["LatestBackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectInstance.LatestBackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestBackupTime = string(value["LatestBackupTime"].GetString());
        m_latestBackupTimeHasBeenSet = true;
    }

    if (value.HasMember("OfflineReason") && !value["OfflineReason"].IsNull())
    {
        if (!value["OfflineReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectInstance.OfflineReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineReason = string(value["OfflineReason"].GetString());
        m_offlineReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_agentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_lastHeartbeatTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastHeartbeatTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastHeartbeatTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_backupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupCount, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_latestBackupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestBackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestBackupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineReason.c_str(), allocator).Move(), allocator);
    }

}


string ProtectInstance::GetInstanceId() const
{
    return m_instanceId;
}

void ProtectInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ProtectInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ProtectInstance::GetAgentId() const
{
    return m_agentId;
}

void ProtectInstance::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool ProtectInstance::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string ProtectInstance::GetAgentVersion() const
{
    return m_agentVersion;
}

void ProtectInstance::SetAgentVersion(const string& _agentVersion)
{
    m_agentVersion = _agentVersion;
    m_agentVersionHasBeenSet = true;
}

bool ProtectInstance::AgentVersionHasBeenSet() const
{
    return m_agentVersionHasBeenSet;
}

string ProtectInstance::GetAgentStatus() const
{
    return m_agentStatus;
}

void ProtectInstance::SetAgentStatus(const string& _agentStatus)
{
    m_agentStatus = _agentStatus;
    m_agentStatusHasBeenSet = true;
}

bool ProtectInstance::AgentStatusHasBeenSet() const
{
    return m_agentStatusHasBeenSet;
}

string ProtectInstance::GetLastHeartbeatTime() const
{
    return m_lastHeartbeatTime;
}

void ProtectInstance::SetLastHeartbeatTime(const string& _lastHeartbeatTime)
{
    m_lastHeartbeatTime = _lastHeartbeatTime;
    m_lastHeartbeatTimeHasBeenSet = true;
}

bool ProtectInstance::LastHeartbeatTimeHasBeenSet() const
{
    return m_lastHeartbeatTimeHasBeenSet;
}

string ProtectInstance::GetCreatedTime() const
{
    return m_createdTime;
}

void ProtectInstance::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ProtectInstance::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ProtectInstance::GetExtraInfo() const
{
    return m_extraInfo;
}

void ProtectInstance::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool ProtectInstance::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

uint64_t ProtectInstance::GetBackupCount() const
{
    return m_backupCount;
}

void ProtectInstance::SetBackupCount(const uint64_t& _backupCount)
{
    m_backupCount = _backupCount;
    m_backupCountHasBeenSet = true;
}

bool ProtectInstance::BackupCountHasBeenSet() const
{
    return m_backupCountHasBeenSet;
}

string ProtectInstance::GetInstanceName() const
{
    return m_instanceName;
}

void ProtectInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ProtectInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ProtectInstance::GetLatestBackupTime() const
{
    return m_latestBackupTime;
}

void ProtectInstance::SetLatestBackupTime(const string& _latestBackupTime)
{
    m_latestBackupTime = _latestBackupTime;
    m_latestBackupTimeHasBeenSet = true;
}

bool ProtectInstance::LatestBackupTimeHasBeenSet() const
{
    return m_latestBackupTimeHasBeenSet;
}

string ProtectInstance::GetOfflineReason() const
{
    return m_offlineReason;
}

void ProtectInstance::SetOfflineReason(const string& _offlineReason)
{
    m_offlineReason = _offlineReason;
    m_offlineReasonHasBeenSet = true;
}

bool ProtectInstance::OfflineReasonHasBeenSet() const
{
    return m_offlineReasonHasBeenSet;
}

