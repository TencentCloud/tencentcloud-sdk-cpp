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

#include <tencentcloud/cwp/v20180228/model/AssetMachineBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetMachineBaseInfo::AssetMachineBaseInfo() :
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_osInfoHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_memLoadHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskLoadHasBeenSet(false),
    m_partitionCountHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_cpuSizeHasBeenSet(false),
    m_cpuLoadHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_cpuLoadNumHasBeenSet(false)
{
}

CoreInternalOutcome AssetMachineBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("OsInfo") && !value["OsInfo"].IsNull())
    {
        if (!value["OsInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.OsInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osInfo = string(value["OsInfo"].GetString());
        m_osInfoHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.Cpu` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = string(value["Cpu"].GetString());
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.MemSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetUint64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("MemLoad") && !value["MemLoad"].IsNull())
    {
        if (!value["MemLoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.MemLoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memLoad = string(value["MemLoad"].GetString());
        m_memLoadHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.DiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetUint64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskLoad") && !value["DiskLoad"].IsNull())
    {
        if (!value["DiskLoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.DiskLoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskLoad = string(value["DiskLoad"].GetString());
        m_diskLoadHasBeenSet = true;
    }

    if (value.HasMember("PartitionCount") && !value["PartitionCount"].IsNull())
    {
        if (!value["PartitionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.PartitionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionCount = value["PartitionCount"].GetUint64();
        m_partitionCountHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("CpuSize") && !value["CpuSize"].IsNull())
    {
        if (!value["CpuSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.CpuSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuSize = value["CpuSize"].GetUint64();
        m_cpuSizeHasBeenSet = true;
    }

    if (value.HasMember("CpuLoad") && !value["CpuLoad"].IsNull())
    {
        if (!value["CpuLoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.CpuLoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLoad = string(value["CpuLoad"].GetString());
        m_cpuLoadHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.Tag` is not array type"));

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

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.IsNew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetInt64();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("CpuLoadNum") && !value["CpuLoadNum"].IsNull())
    {
        if (!value["CpuLoadNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineBaseInfo.CpuLoadNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLoadNum = string(value["CpuLoadNum"].GetString());
        m_cpuLoadNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetMachineBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_osInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpu.c_str(), allocator).Move(), allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_memLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memLoad.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskLoad.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionCount, allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_cpuSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuSize, allocator);
    }

    if (m_cpuLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuLoad.c_str(), allocator).Move(), allocator);
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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNew, allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cpuLoadNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLoadNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuLoadNum.c_str(), allocator).Move(), allocator);
    }

}


string AssetMachineBaseInfo::GetQuuid() const
{
    return m_quuid;
}

void AssetMachineBaseInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool AssetMachineBaseInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string AssetMachineBaseInfo::GetUuid() const
{
    return m_uuid;
}

void AssetMachineBaseInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool AssetMachineBaseInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string AssetMachineBaseInfo::GetMachineIp() const
{
    return m_machineIp;
}

void AssetMachineBaseInfo::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool AssetMachineBaseInfo::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string AssetMachineBaseInfo::GetMachineName() const
{
    return m_machineName;
}

void AssetMachineBaseInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool AssetMachineBaseInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string AssetMachineBaseInfo::GetOsInfo() const
{
    return m_osInfo;
}

void AssetMachineBaseInfo::SetOsInfo(const string& _osInfo)
{
    m_osInfo = _osInfo;
    m_osInfoHasBeenSet = true;
}

bool AssetMachineBaseInfo::OsInfoHasBeenSet() const
{
    return m_osInfoHasBeenSet;
}

string AssetMachineBaseInfo::GetCpu() const
{
    return m_cpu;
}

void AssetMachineBaseInfo::SetCpu(const string& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool AssetMachineBaseInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t AssetMachineBaseInfo::GetMemSize() const
{
    return m_memSize;
}

void AssetMachineBaseInfo::SetMemSize(const uint64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool AssetMachineBaseInfo::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

string AssetMachineBaseInfo::GetMemLoad() const
{
    return m_memLoad;
}

void AssetMachineBaseInfo::SetMemLoad(const string& _memLoad)
{
    m_memLoad = _memLoad;
    m_memLoadHasBeenSet = true;
}

bool AssetMachineBaseInfo::MemLoadHasBeenSet() const
{
    return m_memLoadHasBeenSet;
}

uint64_t AssetMachineBaseInfo::GetDiskSize() const
{
    return m_diskSize;
}

void AssetMachineBaseInfo::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool AssetMachineBaseInfo::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string AssetMachineBaseInfo::GetDiskLoad() const
{
    return m_diskLoad;
}

void AssetMachineBaseInfo::SetDiskLoad(const string& _diskLoad)
{
    m_diskLoad = _diskLoad;
    m_diskLoadHasBeenSet = true;
}

bool AssetMachineBaseInfo::DiskLoadHasBeenSet() const
{
    return m_diskLoadHasBeenSet;
}

uint64_t AssetMachineBaseInfo::GetPartitionCount() const
{
    return m_partitionCount;
}

void AssetMachineBaseInfo::SetPartitionCount(const uint64_t& _partitionCount)
{
    m_partitionCount = _partitionCount;
    m_partitionCountHasBeenSet = true;
}

bool AssetMachineBaseInfo::PartitionCountHasBeenSet() const
{
    return m_partitionCountHasBeenSet;
}

string AssetMachineBaseInfo::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void AssetMachineBaseInfo::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool AssetMachineBaseInfo::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

uint64_t AssetMachineBaseInfo::GetProjectId() const
{
    return m_projectId;
}

void AssetMachineBaseInfo::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AssetMachineBaseInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t AssetMachineBaseInfo::GetCpuSize() const
{
    return m_cpuSize;
}

void AssetMachineBaseInfo::SetCpuSize(const uint64_t& _cpuSize)
{
    m_cpuSize = _cpuSize;
    m_cpuSizeHasBeenSet = true;
}

bool AssetMachineBaseInfo::CpuSizeHasBeenSet() const
{
    return m_cpuSizeHasBeenSet;
}

string AssetMachineBaseInfo::GetCpuLoad() const
{
    return m_cpuLoad;
}

void AssetMachineBaseInfo::SetCpuLoad(const string& _cpuLoad)
{
    m_cpuLoad = _cpuLoad;
    m_cpuLoadHasBeenSet = true;
}

bool AssetMachineBaseInfo::CpuLoadHasBeenSet() const
{
    return m_cpuLoadHasBeenSet;
}

vector<MachineTag> AssetMachineBaseInfo::GetTag() const
{
    return m_tag;
}

void AssetMachineBaseInfo::SetTag(const vector<MachineTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AssetMachineBaseInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string AssetMachineBaseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetMachineBaseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetMachineBaseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t AssetMachineBaseInfo::GetIsNew() const
{
    return m_isNew;
}

void AssetMachineBaseInfo::SetIsNew(const int64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool AssetMachineBaseInfo::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

string AssetMachineBaseInfo::GetFirstTime() const
{
    return m_firstTime;
}

void AssetMachineBaseInfo::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetMachineBaseInfo::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

MachineExtraInfo AssetMachineBaseInfo::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void AssetMachineBaseInfo::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool AssetMachineBaseInfo::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

string AssetMachineBaseInfo::GetCpuLoadNum() const
{
    return m_cpuLoadNum;
}

void AssetMachineBaseInfo::SetCpuLoadNum(const string& _cpuLoadNum)
{
    m_cpuLoadNum = _cpuLoadNum;
    m_cpuLoadNumHasBeenSet = true;
}

bool AssetMachineBaseInfo::CpuLoadNumHasBeenSet() const
{
    return m_cpuLoadNumHasBeenSet;
}

