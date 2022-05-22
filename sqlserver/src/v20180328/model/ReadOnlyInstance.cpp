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

#include <tencentcloud/sqlserver/v20180328/model/ReadOnlyInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ReadOnlyInstance::ReadOnlyInstance() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_synStatusHasBeenSet(false),
    m_databaseDifferenceHasBeenSet(false),
    m_accountDifferenceHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false)
{
}

CoreInternalOutcome ReadOnlyInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.Model` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_model = value["Model"].GetInt64();
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.DelayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = string(value["DelayTime"].GetString());
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("SynStatus") && !value["SynStatus"].IsNull())
    {
        if (!value["SynStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.SynStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_synStatus = string(value["SynStatus"].GetString());
        m_synStatusHasBeenSet = true;
    }

    if (value.HasMember("DatabaseDifference") && !value["DatabaseDifference"].IsNull())
    {
        if (!value["DatabaseDifference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.DatabaseDifference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseDifference = string(value["DatabaseDifference"].GetString());
        m_databaseDifferenceHasBeenSet = true;
    }

    if (value.HasMember("AccountDifference") && !value["AccountDifference"].IsNull())
    {
        if (!value["AccountDifference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.AccountDifference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountDifference = string(value["AccountDifference"].GetString());
        m_accountDifferenceHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("IsolateTime") && !value["IsolateTime"].IsNull())
    {
        if (!value["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(value["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstance.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReadOnlyInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_model, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delayTime.c_str(), allocator).Move(), allocator);
    }

    if (m_synStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_synStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseDifferenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseDifference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseDifference.c_str(), allocator).Move(), allocator);
    }

    if (m_accountDifferenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountDifference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountDifference.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

}


string ReadOnlyInstance::GetInstanceId() const
{
    return m_instanceId;
}

void ReadOnlyInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ReadOnlyInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ReadOnlyInstance::GetName() const
{
    return m_name;
}

void ReadOnlyInstance::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ReadOnlyInstance::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ReadOnlyInstance::GetUid() const
{
    return m_uid;
}

void ReadOnlyInstance::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool ReadOnlyInstance::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

int64_t ReadOnlyInstance::GetProjectId() const
{
    return m_projectId;
}

void ReadOnlyInstance::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ReadOnlyInstance::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t ReadOnlyInstance::GetStatus() const
{
    return m_status;
}

void ReadOnlyInstance::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReadOnlyInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReadOnlyInstance::GetCreateTime() const
{
    return m_createTime;
}

void ReadOnlyInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ReadOnlyInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ReadOnlyInstance::GetUpdateTime() const
{
    return m_updateTime;
}

void ReadOnlyInstance::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ReadOnlyInstance::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t ReadOnlyInstance::GetMemory() const
{
    return m_memory;
}

void ReadOnlyInstance::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ReadOnlyInstance::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t ReadOnlyInstance::GetStorage() const
{
    return m_storage;
}

void ReadOnlyInstance::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool ReadOnlyInstance::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

int64_t ReadOnlyInstance::GetCpu() const
{
    return m_cpu;
}

void ReadOnlyInstance::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ReadOnlyInstance::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string ReadOnlyInstance::GetVersion() const
{
    return m_version;
}

void ReadOnlyInstance::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ReadOnlyInstance::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ReadOnlyInstance::GetType() const
{
    return m_type;
}

void ReadOnlyInstance::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ReadOnlyInstance::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ReadOnlyInstance::GetModel() const
{
    return m_model;
}

void ReadOnlyInstance::SetModel(const int64_t& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ReadOnlyInstance::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

int64_t ReadOnlyInstance::GetPayMode() const
{
    return m_payMode;
}

void ReadOnlyInstance::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ReadOnlyInstance::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t ReadOnlyInstance::GetWeight() const
{
    return m_weight;
}

void ReadOnlyInstance::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool ReadOnlyInstance::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string ReadOnlyInstance::GetDelayTime() const
{
    return m_delayTime;
}

void ReadOnlyInstance::SetDelayTime(const string& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool ReadOnlyInstance::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string ReadOnlyInstance::GetSynStatus() const
{
    return m_synStatus;
}

void ReadOnlyInstance::SetSynStatus(const string& _synStatus)
{
    m_synStatus = _synStatus;
    m_synStatusHasBeenSet = true;
}

bool ReadOnlyInstance::SynStatusHasBeenSet() const
{
    return m_synStatusHasBeenSet;
}

string ReadOnlyInstance::GetDatabaseDifference() const
{
    return m_databaseDifference;
}

void ReadOnlyInstance::SetDatabaseDifference(const string& _databaseDifference)
{
    m_databaseDifference = _databaseDifference;
    m_databaseDifferenceHasBeenSet = true;
}

bool ReadOnlyInstance::DatabaseDifferenceHasBeenSet() const
{
    return m_databaseDifferenceHasBeenSet;
}

string ReadOnlyInstance::GetAccountDifference() const
{
    return m_accountDifference;
}

void ReadOnlyInstance::SetAccountDifference(const string& _accountDifference)
{
    m_accountDifference = _accountDifference;
    m_accountDifferenceHasBeenSet = true;
}

bool ReadOnlyInstance::AccountDifferenceHasBeenSet() const
{
    return m_accountDifferenceHasBeenSet;
}

string ReadOnlyInstance::GetStartTime() const
{
    return m_startTime;
}

void ReadOnlyInstance::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ReadOnlyInstance::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ReadOnlyInstance::GetEndTime() const
{
    return m_endTime;
}

void ReadOnlyInstance::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ReadOnlyInstance::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ReadOnlyInstance::GetIsolateTime() const
{
    return m_isolateTime;
}

void ReadOnlyInstance::SetIsolateTime(const string& _isolateTime)
{
    m_isolateTime = _isolateTime;
    m_isolateTimeHasBeenSet = true;
}

bool ReadOnlyInstance::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

string ReadOnlyInstance::GetRegionId() const
{
    return m_regionId;
}

void ReadOnlyInstance::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ReadOnlyInstance::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string ReadOnlyInstance::GetZoneId() const
{
    return m_zoneId;
}

void ReadOnlyInstance::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ReadOnlyInstance::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

