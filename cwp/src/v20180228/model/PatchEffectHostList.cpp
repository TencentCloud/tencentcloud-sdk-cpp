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

#include <tencentcloud/cwp/v20180228/model/PatchEffectHostList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

PatchEffectHostList::PatchEffectHostList() :
    m_hostVersionHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_firstScanTimeHasBeenSet(false),
    m_latestScanTimeHasBeenSet(false),
    m_fixStatusHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_latestFixTimeHasBeenSet(false),
    m_kbIdHasBeenSet(false),
    m_restartRequiredHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_hasSnapshotHasBeenSet(false)
{
}

CoreInternalOutcome PatchEffectHostList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostVersion") && !value["HostVersion"].IsNull())
    {
        if (!value["HostVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.HostVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostVersion = value["HostVersion"].GetUint64();
        m_hostVersionHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("FirstScanTime") && !value["FirstScanTime"].IsNull())
    {
        if (!value["FirstScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.FirstScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstScanTime = string(value["FirstScanTime"].GetString());
        m_firstScanTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestScanTime") && !value["LatestScanTime"].IsNull())
    {
        if (!value["LatestScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.LatestScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestScanTime = string(value["LatestScanTime"].GetString());
        m_latestScanTimeHasBeenSet = true;
    }

    if (value.HasMember("FixStatus") && !value["FixStatus"].IsNull())
    {
        if (!value["FixStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.FixStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fixStatus = value["FixStatus"].GetUint64();
        m_fixStatusHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LatestFixTime") && !value["LatestFixTime"].IsNull())
    {
        if (!value["LatestFixTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.LatestFixTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFixTime = string(value["LatestFixTime"].GetString());
        m_latestFixTimeHasBeenSet = true;
    }

    if (value.HasMember("KbId") && !value["KbId"].IsNull())
    {
        if (!value["KbId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.KbId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kbId = value["KbId"].GetUint64();
        m_kbIdHasBeenSet = true;
    }

    if (value.HasMember("RestartRequired") && !value["RestartRequired"].IsNull())
    {
        if (!value["RestartRequired"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.RestartRequired` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_restartRequired = value["RestartRequired"].GetUint64();
        m_restartRequiredHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("HasSnapshot") && !value["HasSnapshot"].IsNull())
    {
        if (!value["HasSnapshot"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PatchEffectHostList.HasSnapshot` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hasSnapshot = value["HasSnapshot"].GetUint64();
        m_hasSnapshotHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PatchEffectHostList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostVersion, allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_firstScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fixStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixStatus, allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_latestFixTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestFixTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestFixTime.c_str(), allocator).Move(), allocator);
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kbId, allocator);
    }

    if (m_restartRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restartRequired, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_hasSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasSnapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasSnapshot, allocator);
    }

}


uint64_t PatchEffectHostList::GetHostVersion() const
{
    return m_hostVersion;
}

void PatchEffectHostList::SetHostVersion(const uint64_t& _hostVersion)
{
    m_hostVersion = _hostVersion;
    m_hostVersionHasBeenSet = true;
}

bool PatchEffectHostList::HostVersionHasBeenSet() const
{
    return m_hostVersionHasBeenSet;
}

string PatchEffectHostList::GetInstanceState() const
{
    return m_instanceState;
}

void PatchEffectHostList::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool PatchEffectHostList::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string PatchEffectHostList::GetFirstScanTime() const
{
    return m_firstScanTime;
}

void PatchEffectHostList::SetFirstScanTime(const string& _firstScanTime)
{
    m_firstScanTime = _firstScanTime;
    m_firstScanTimeHasBeenSet = true;
}

bool PatchEffectHostList::FirstScanTimeHasBeenSet() const
{
    return m_firstScanTimeHasBeenSet;
}

string PatchEffectHostList::GetLatestScanTime() const
{
    return m_latestScanTime;
}

void PatchEffectHostList::SetLatestScanTime(const string& _latestScanTime)
{
    m_latestScanTime = _latestScanTime;
    m_latestScanTimeHasBeenSet = true;
}

bool PatchEffectHostList::LatestScanTimeHasBeenSet() const
{
    return m_latestScanTimeHasBeenSet;
}

uint64_t PatchEffectHostList::GetFixStatus() const
{
    return m_fixStatus;
}

void PatchEffectHostList::SetFixStatus(const uint64_t& _fixStatus)
{
    m_fixStatus = _fixStatus;
    m_fixStatusHasBeenSet = true;
}

bool PatchEffectHostList::FixStatusHasBeenSet() const
{
    return m_fixStatusHasBeenSet;
}

MachineExtraInfo PatchEffectHostList::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void PatchEffectHostList::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool PatchEffectHostList::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

string PatchEffectHostList::GetUuid() const
{
    return m_uuid;
}

void PatchEffectHostList::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool PatchEffectHostList::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string PatchEffectHostList::GetQuuid() const
{
    return m_quuid;
}

void PatchEffectHostList::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool PatchEffectHostList::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

uint64_t PatchEffectHostList::GetId() const
{
    return m_id;
}

void PatchEffectHostList::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PatchEffectHostList::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t PatchEffectHostList::GetStatus() const
{
    return m_status;
}

void PatchEffectHostList::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PatchEffectHostList::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PatchEffectHostList::GetLatestFixTime() const
{
    return m_latestFixTime;
}

void PatchEffectHostList::SetLatestFixTime(const string& _latestFixTime)
{
    m_latestFixTime = _latestFixTime;
    m_latestFixTimeHasBeenSet = true;
}

bool PatchEffectHostList::LatestFixTimeHasBeenSet() const
{
    return m_latestFixTimeHasBeenSet;
}

uint64_t PatchEffectHostList::GetKbId() const
{
    return m_kbId;
}

void PatchEffectHostList::SetKbId(const uint64_t& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool PatchEffectHostList::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

uint64_t PatchEffectHostList::GetRestartRequired() const
{
    return m_restartRequired;
}

void PatchEffectHostList::SetRestartRequired(const uint64_t& _restartRequired)
{
    m_restartRequired = _restartRequired;
    m_restartRequiredHasBeenSet = true;
}

bool PatchEffectHostList::RestartRequiredHasBeenSet() const
{
    return m_restartRequiredHasBeenSet;
}

uint64_t PatchEffectHostList::GetRegionId() const
{
    return m_regionId;
}

void PatchEffectHostList::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool PatchEffectHostList::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string PatchEffectHostList::GetMachineType() const
{
    return m_machineType;
}

void PatchEffectHostList::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool PatchEffectHostList::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

uint64_t PatchEffectHostList::GetHasSnapshot() const
{
    return m_hasSnapshot;
}

void PatchEffectHostList::SetHasSnapshot(const uint64_t& _hasSnapshot)
{
    m_hasSnapshot = _hasSnapshot;
    m_hasSnapshotHasBeenSet = true;
}

bool PatchEffectHostList::HasSnapshotHasBeenSet() const
{
    return m_hasSnapshotHasBeenSet;
}

