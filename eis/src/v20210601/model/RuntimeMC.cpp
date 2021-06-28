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

#include <tencentcloud/eis/v20210601/model/RuntimeMC.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eis::V20210601::Model;
using namespace std;

RuntimeMC::RuntimeMC() :
    m_runtimeIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_workerSizeHasBeenSet(false),
    m_workerReplicaHasBeenSet(false),
    m_runningInstanceCountHasBeenSet(false)
{
}

CoreInternalOutcome RuntimeMC::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuntimeId") && !value["RuntimeId"].IsNull())
    {
        if (!value["RuntimeId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RuntimeMC.RuntimeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeId = value["RuntimeId"].GetInt64();
        m_runtimeIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuntimeMC.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuntimeMC.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuntimeMC.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RuntimeMC.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RuntimeMC.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RuntimeMC.CreatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = value["CreatedAt"].GetInt64();
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RuntimeMC.UpdatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = value["UpdatedAt"].GetInt64();
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("WorkerSize") && !value["WorkerSize"].IsNull())
    {
        if (!value["WorkerSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RuntimeMC.WorkerSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workerSize = value["WorkerSize"].GetInt64();
        m_workerSizeHasBeenSet = true;
    }

    if (value.HasMember("WorkerReplica") && !value["WorkerReplica"].IsNull())
    {
        if (!value["WorkerReplica"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RuntimeMC.WorkerReplica` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workerReplica = value["WorkerReplica"].GetInt64();
        m_workerReplicaHasBeenSet = true;
    }

    if (value.HasMember("RunningInstanceCount") && !value["RunningInstanceCount"].IsNull())
    {
        if (!value["RunningInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RuntimeMC.RunningInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningInstanceCount = value["RunningInstanceCount"].GetInt64();
        m_runningInstanceCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuntimeMC::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_runtimeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runtimeId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
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

    if (m_workerSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workerSize, allocator);
    }

    if (m_workerReplicaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerReplica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workerReplica, allocator);
    }

    if (m_runningInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningInstanceCount, allocator);
    }

}


int64_t RuntimeMC::GetRuntimeId() const
{
    return m_runtimeId;
}

void RuntimeMC::SetRuntimeId(const int64_t& _runtimeId)
{
    m_runtimeId = _runtimeId;
    m_runtimeIdHasBeenSet = true;
}

bool RuntimeMC::RuntimeIdHasBeenSet() const
{
    return m_runtimeIdHasBeenSet;
}

string RuntimeMC::GetUin() const
{
    return m_uin;
}

void RuntimeMC::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool RuntimeMC::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string RuntimeMC::GetDisplayName() const
{
    return m_displayName;
}

void RuntimeMC::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool RuntimeMC::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string RuntimeMC::GetZone() const
{
    return m_zone;
}

void RuntimeMC::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool RuntimeMC::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t RuntimeMC::GetType() const
{
    return m_type;
}

void RuntimeMC::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RuntimeMC::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t RuntimeMC::GetStatus() const
{
    return m_status;
}

void RuntimeMC::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RuntimeMC::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RuntimeMC::GetCreatedAt() const
{
    return m_createdAt;
}

void RuntimeMC::SetCreatedAt(const int64_t& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool RuntimeMC::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

int64_t RuntimeMC::GetUpdatedAt() const
{
    return m_updatedAt;
}

void RuntimeMC::SetUpdatedAt(const int64_t& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool RuntimeMC::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

int64_t RuntimeMC::GetWorkerSize() const
{
    return m_workerSize;
}

void RuntimeMC::SetWorkerSize(const int64_t& _workerSize)
{
    m_workerSize = _workerSize;
    m_workerSizeHasBeenSet = true;
}

bool RuntimeMC::WorkerSizeHasBeenSet() const
{
    return m_workerSizeHasBeenSet;
}

int64_t RuntimeMC::GetWorkerReplica() const
{
    return m_workerReplica;
}

void RuntimeMC::SetWorkerReplica(const int64_t& _workerReplica)
{
    m_workerReplica = _workerReplica;
    m_workerReplicaHasBeenSet = true;
}

bool RuntimeMC::WorkerReplicaHasBeenSet() const
{
    return m_workerReplicaHasBeenSet;
}

int64_t RuntimeMC::GetRunningInstanceCount() const
{
    return m_runningInstanceCount;
}

void RuntimeMC::SetRunningInstanceCount(const int64_t& _runningInstanceCount)
{
    m_runningInstanceCount = _runningInstanceCount;
    m_runningInstanceCountHasBeenSet = true;
}

bool RuntimeMC::RunningInstanceCountHasBeenSet() const
{
    return m_runningInstanceCountHasBeenSet;
}

