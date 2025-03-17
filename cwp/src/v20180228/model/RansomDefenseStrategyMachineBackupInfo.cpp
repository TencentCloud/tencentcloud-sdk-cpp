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

#include <tencentcloud/cwp/v20180228/model/RansomDefenseStrategyMachineBackupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RansomDefenseStrategyMachineBackupInfo::RansomDefenseStrategyMachineBackupInfo() :
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_cloudTagsHasBeenSet(false),
    m_regionInfoHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_diskInfoHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_backupCountHasBeenSet(false),
    m_lastBackupStatusHasBeenSet(false),
    m_lastBackupMessageHasBeenSet(false),
    m_lastBackupTimeHasBeenSet(false),
    m_rollBackPercentHasBeenSet(false),
    m_rollBackStatusHasBeenSet(false),
    m_backupSuccessCountHasBeenSet(false),
    m_hostVersionHasBeenSet(false),
    m_machineTypeHasBeenSet(false)
{
}

CoreInternalOutcome RansomDefenseStrategyMachineBackupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("CloudTags") && !value["CloudTags"].IsNull())
    {
        if (!value["CloudTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.CloudTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CloudTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cloudTags.push_back(item);
        }
        m_cloudTagsHasBeenSet = true;
    }

    if (value.HasMember("RegionInfo") && !value["RegionInfo"].IsNull())
    {
        if (!value["RegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.RegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regionInfo.Deserialize(value["RegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionInfoHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MachineTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.StrategyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = value["StrategyId"].GetUint64();
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("DiskInfo") && !value["DiskInfo"].IsNull())
    {
        if (!value["DiskInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.DiskInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskInfo = string(value["DiskInfo"].GetString());
        m_diskInfoHasBeenSet = true;
    }

    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("BackupCount") && !value["BackupCount"].IsNull())
    {
        if (!value["BackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.BackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupCount = value["BackupCount"].GetUint64();
        m_backupCountHasBeenSet = true;
    }

    if (value.HasMember("LastBackupStatus") && !value["LastBackupStatus"].IsNull())
    {
        if (!value["LastBackupStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.LastBackupStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastBackupStatus = value["LastBackupStatus"].GetUint64();
        m_lastBackupStatusHasBeenSet = true;
    }

    if (value.HasMember("LastBackupMessage") && !value["LastBackupMessage"].IsNull())
    {
        if (!value["LastBackupMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.LastBackupMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastBackupMessage = string(value["LastBackupMessage"].GetString());
        m_lastBackupMessageHasBeenSet = true;
    }

    if (value.HasMember("LastBackupTime") && !value["LastBackupTime"].IsNull())
    {
        if (!value["LastBackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.LastBackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastBackupTime = string(value["LastBackupTime"].GetString());
        m_lastBackupTimeHasBeenSet = true;
    }

    if (value.HasMember("RollBackPercent") && !value["RollBackPercent"].IsNull())
    {
        if (!value["RollBackPercent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.RollBackPercent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rollBackPercent = value["RollBackPercent"].GetUint64();
        m_rollBackPercentHasBeenSet = true;
    }

    if (value.HasMember("RollBackStatus") && !value["RollBackStatus"].IsNull())
    {
        if (!value["RollBackStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.RollBackStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rollBackStatus = value["RollBackStatus"].GetUint64();
        m_rollBackStatusHasBeenSet = true;
    }

    if (value.HasMember("BackupSuccessCount") && !value["BackupSuccessCount"].IsNull())
    {
        if (!value["BackupSuccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.BackupSuccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSuccessCount = value["BackupSuccessCount"].GetUint64();
        m_backupSuccessCountHasBeenSet = true;
    }

    if (value.HasMember("HostVersion") && !value["HostVersion"].IsNull())
    {
        if (!value["HostVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.HostVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostVersion = value["HostVersion"].GetUint64();
        m_hostVersionHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineBackupInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RansomDefenseStrategyMachineBackupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloudTags.begin(); itr != m_cloudTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_diskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupCount, allocator);
    }

    if (m_lastBackupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastBackupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastBackupStatus, allocator);
    }

    if (m_lastBackupMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastBackupMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastBackupMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_lastBackupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastBackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastBackupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_rollBackPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollBackPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rollBackPercent, allocator);
    }

    if (m_rollBackStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollBackStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rollBackStatus, allocator);
    }

    if (m_backupSuccessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSuccessCount, allocator);
    }

    if (m_hostVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostVersion, allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

}


string RansomDefenseStrategyMachineBackupInfo::GetUuid() const
{
    return m_uuid;
}

void RansomDefenseStrategyMachineBackupInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string RansomDefenseStrategyMachineBackupInfo::GetQuuid() const
{
    return m_quuid;
}

void RansomDefenseStrategyMachineBackupInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string RansomDefenseStrategyMachineBackupInfo::GetMachineName() const
{
    return m_machineName;
}

void RansomDefenseStrategyMachineBackupInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string RansomDefenseStrategyMachineBackupInfo::GetInstanceId() const
{
    return m_instanceId;
}

void RansomDefenseStrategyMachineBackupInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RansomDefenseStrategyMachineBackupInfo::GetMachineIp() const
{
    return m_machineIp;
}

void RansomDefenseStrategyMachineBackupInfo::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string RansomDefenseStrategyMachineBackupInfo::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void RansomDefenseStrategyMachineBackupInfo::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

vector<Tag> RansomDefenseStrategyMachineBackupInfo::GetCloudTags() const
{
    return m_cloudTags;
}

void RansomDefenseStrategyMachineBackupInfo::SetCloudTags(const vector<Tag>& _cloudTags)
{
    m_cloudTags = _cloudTags;
    m_cloudTagsHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::CloudTagsHasBeenSet() const
{
    return m_cloudTagsHasBeenSet;
}

RegionInfo RansomDefenseStrategyMachineBackupInfo::GetRegionInfo() const
{
    return m_regionInfo;
}

void RansomDefenseStrategyMachineBackupInfo::SetRegionInfo(const RegionInfo& _regionInfo)
{
    m_regionInfo = _regionInfo;
    m_regionInfoHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::RegionInfoHasBeenSet() const
{
    return m_regionInfoHasBeenSet;
}

vector<MachineTag> RansomDefenseStrategyMachineBackupInfo::GetTag() const
{
    return m_tag;
}

void RansomDefenseStrategyMachineBackupInfo::SetTag(const vector<MachineTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

uint64_t RansomDefenseStrategyMachineBackupInfo::GetStatus() const
{
    return m_status;
}

void RansomDefenseStrategyMachineBackupInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t RansomDefenseStrategyMachineBackupInfo::GetStrategyId() const
{
    return m_strategyId;
}

void RansomDefenseStrategyMachineBackupInfo::SetStrategyId(const uint64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string RansomDefenseStrategyMachineBackupInfo::GetDiskInfo() const
{
    return m_diskInfo;
}

void RansomDefenseStrategyMachineBackupInfo::SetDiskInfo(const string& _diskInfo)
{
    m_diskInfo = _diskInfo;
    m_diskInfoHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::DiskInfoHasBeenSet() const
{
    return m_diskInfoHasBeenSet;
}

string RansomDefenseStrategyMachineBackupInfo::GetStrategyName() const
{
    return m_strategyName;
}

void RansomDefenseStrategyMachineBackupInfo::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

uint64_t RansomDefenseStrategyMachineBackupInfo::GetBackupCount() const
{
    return m_backupCount;
}

void RansomDefenseStrategyMachineBackupInfo::SetBackupCount(const uint64_t& _backupCount)
{
    m_backupCount = _backupCount;
    m_backupCountHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::BackupCountHasBeenSet() const
{
    return m_backupCountHasBeenSet;
}

uint64_t RansomDefenseStrategyMachineBackupInfo::GetLastBackupStatus() const
{
    return m_lastBackupStatus;
}

void RansomDefenseStrategyMachineBackupInfo::SetLastBackupStatus(const uint64_t& _lastBackupStatus)
{
    m_lastBackupStatus = _lastBackupStatus;
    m_lastBackupStatusHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::LastBackupStatusHasBeenSet() const
{
    return m_lastBackupStatusHasBeenSet;
}

string RansomDefenseStrategyMachineBackupInfo::GetLastBackupMessage() const
{
    return m_lastBackupMessage;
}

void RansomDefenseStrategyMachineBackupInfo::SetLastBackupMessage(const string& _lastBackupMessage)
{
    m_lastBackupMessage = _lastBackupMessage;
    m_lastBackupMessageHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::LastBackupMessageHasBeenSet() const
{
    return m_lastBackupMessageHasBeenSet;
}

string RansomDefenseStrategyMachineBackupInfo::GetLastBackupTime() const
{
    return m_lastBackupTime;
}

void RansomDefenseStrategyMachineBackupInfo::SetLastBackupTime(const string& _lastBackupTime)
{
    m_lastBackupTime = _lastBackupTime;
    m_lastBackupTimeHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::LastBackupTimeHasBeenSet() const
{
    return m_lastBackupTimeHasBeenSet;
}

uint64_t RansomDefenseStrategyMachineBackupInfo::GetRollBackPercent() const
{
    return m_rollBackPercent;
}

void RansomDefenseStrategyMachineBackupInfo::SetRollBackPercent(const uint64_t& _rollBackPercent)
{
    m_rollBackPercent = _rollBackPercent;
    m_rollBackPercentHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::RollBackPercentHasBeenSet() const
{
    return m_rollBackPercentHasBeenSet;
}

uint64_t RansomDefenseStrategyMachineBackupInfo::GetRollBackStatus() const
{
    return m_rollBackStatus;
}

void RansomDefenseStrategyMachineBackupInfo::SetRollBackStatus(const uint64_t& _rollBackStatus)
{
    m_rollBackStatus = _rollBackStatus;
    m_rollBackStatusHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::RollBackStatusHasBeenSet() const
{
    return m_rollBackStatusHasBeenSet;
}

uint64_t RansomDefenseStrategyMachineBackupInfo::GetBackupSuccessCount() const
{
    return m_backupSuccessCount;
}

void RansomDefenseStrategyMachineBackupInfo::SetBackupSuccessCount(const uint64_t& _backupSuccessCount)
{
    m_backupSuccessCount = _backupSuccessCount;
    m_backupSuccessCountHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::BackupSuccessCountHasBeenSet() const
{
    return m_backupSuccessCountHasBeenSet;
}

uint64_t RansomDefenseStrategyMachineBackupInfo::GetHostVersion() const
{
    return m_hostVersion;
}

void RansomDefenseStrategyMachineBackupInfo::SetHostVersion(const uint64_t& _hostVersion)
{
    m_hostVersion = _hostVersion;
    m_hostVersionHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::HostVersionHasBeenSet() const
{
    return m_hostVersionHasBeenSet;
}

string RansomDefenseStrategyMachineBackupInfo::GetMachineType() const
{
    return m_machineType;
}

void RansomDefenseStrategyMachineBackupInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool RansomDefenseStrategyMachineBackupInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

