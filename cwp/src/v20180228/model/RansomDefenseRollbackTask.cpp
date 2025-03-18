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

#include <tencentcloud/cwp/v20180228/model/RansomDefenseRollbackTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RansomDefenseRollbackTask::RansomDefenseRollbackTask() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_disksHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_backupTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_regionInfoHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_machineTypeHasBeenSet(false)
{
}

CoreInternalOutcome RansomDefenseRollbackTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseRollbackTask.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseRollbackTask.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseRollbackTask.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseRollbackTask.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseRollbackTask.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Disks") && !value["Disks"].IsNull())
    {
        if (!value["Disks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseRollbackTask.Disks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disks = string(value["Disks"].GetString());
        m_disksHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseRollbackTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupTime") && !value["BackupTime"].IsNull())
    {
        if (!value["BackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseRollbackTask.BackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTime = string(value["BackupTime"].GetString());
        m_backupTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseRollbackTask.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("RegionInfo") && !value["RegionInfo"].IsNull())
    {
        if (!value["RegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseRollbackTask.RegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regionInfo.Deserialize(value["RegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionInfoHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseRollbackTask.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseRollbackTask.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RansomDefenseRollbackTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_disksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disks.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RansomDefenseRollbackTask::GetId() const
{
    return m_id;
}

void RansomDefenseRollbackTask::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RansomDefenseRollbackTask::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RansomDefenseRollbackTask::GetUuid() const
{
    return m_uuid;
}

void RansomDefenseRollbackTask::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool RansomDefenseRollbackTask::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string RansomDefenseRollbackTask::GetQuuid() const
{
    return m_quuid;
}

void RansomDefenseRollbackTask::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool RansomDefenseRollbackTask::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string RansomDefenseRollbackTask::GetMachineName() const
{
    return m_machineName;
}

void RansomDefenseRollbackTask::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool RansomDefenseRollbackTask::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

uint64_t RansomDefenseRollbackTask::GetStatus() const
{
    return m_status;
}

void RansomDefenseRollbackTask::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RansomDefenseRollbackTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RansomDefenseRollbackTask::GetDisks() const
{
    return m_disks;
}

void RansomDefenseRollbackTask::SetDisks(const string& _disks)
{
    m_disks = _disks;
    m_disksHasBeenSet = true;
}

bool RansomDefenseRollbackTask::DisksHasBeenSet() const
{
    return m_disksHasBeenSet;
}

string RansomDefenseRollbackTask::GetCreateTime() const
{
    return m_createTime;
}

void RansomDefenseRollbackTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RansomDefenseRollbackTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RansomDefenseRollbackTask::GetBackupTime() const
{
    return m_backupTime;
}

void RansomDefenseRollbackTask::SetBackupTime(const string& _backupTime)
{
    m_backupTime = _backupTime;
    m_backupTimeHasBeenSet = true;
}

bool RansomDefenseRollbackTask::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

string RansomDefenseRollbackTask::GetModifyTime() const
{
    return m_modifyTime;
}

void RansomDefenseRollbackTask::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool RansomDefenseRollbackTask::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

RegionInfo RansomDefenseRollbackTask::GetRegionInfo() const
{
    return m_regionInfo;
}

void RansomDefenseRollbackTask::SetRegionInfo(const RegionInfo& _regionInfo)
{
    m_regionInfo = _regionInfo;
    m_regionInfoHasBeenSet = true;
}

bool RansomDefenseRollbackTask::RegionInfoHasBeenSet() const
{
    return m_regionInfoHasBeenSet;
}

string RansomDefenseRollbackTask::GetInstanceId() const
{
    return m_instanceId;
}

void RansomDefenseRollbackTask::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RansomDefenseRollbackTask::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RansomDefenseRollbackTask::GetMachineType() const
{
    return m_machineType;
}

void RansomDefenseRollbackTask::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool RansomDefenseRollbackTask::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

