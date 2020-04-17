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

#include <tencentcloud/sqlserver/v20180328/model/DBInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace rapidjson;
using namespace std;

DBInstance::DBInstance() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_usedStorageHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_backupTimeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false)
{
}

CoreInternalOutcome DBInstance::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.VpcId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = value["VpcId"].GetInt64();
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.SubnetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = value["SubnetId"].GetInt64();
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("IsolateTime") && !value["IsolateTime"].IsNull())
    {
        if (!value["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(value["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("UsedStorage") && !value["UsedStorage"].IsNull())
    {
        if (!value["UsedStorage"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.UsedStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedStorage = value["UsedStorage"].GetInt64();
        m_usedStorageHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Model` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_model = value["Model"].GetInt64();
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("BackupTime") && !value["BackupTime"].IsNull())
    {
        if (!value["BackupTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.BackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTime = string(value["BackupTime"].GetString());
        m_backupTimeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBInstance::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcId, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_vipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_isolateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_usedStorageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UsedStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedStorage, allocator);
    }

    if (m_storageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_modelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_model, allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_backupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_uidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_versionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

}


string DBInstance::GetInstanceId() const
{
    return m_instanceId;
}

void DBInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DBInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DBInstance::GetName() const
{
    return m_name;
}

void DBInstance::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DBInstance::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DBInstance::GetProjectId() const
{
    return m_projectId;
}

void DBInstance::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DBInstance::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DBInstance::GetRegionId() const
{
    return m_regionId;
}

void DBInstance::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool DBInstance::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t DBInstance::GetZoneId() const
{
    return m_zoneId;
}

void DBInstance::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DBInstance::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t DBInstance::GetVpcId() const
{
    return m_vpcId;
}

void DBInstance::SetVpcId(const int64_t& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DBInstance::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t DBInstance::GetSubnetId() const
{
    return m_subnetId;
}

void DBInstance::SetSubnetId(const int64_t& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DBInstance::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t DBInstance::GetStatus() const
{
    return m_status;
}

void DBInstance::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DBInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DBInstance::GetVip() const
{
    return m_vip;
}

void DBInstance::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool DBInstance::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t DBInstance::GetVport() const
{
    return m_vport;
}

void DBInstance::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool DBInstance::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string DBInstance::GetCreateTime() const
{
    return m_createTime;
}

void DBInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DBInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DBInstance::GetUpdateTime() const
{
    return m_updateTime;
}

void DBInstance::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DBInstance::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DBInstance::GetStartTime() const
{
    return m_startTime;
}

void DBInstance::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DBInstance::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DBInstance::GetEndTime() const
{
    return m_endTime;
}

void DBInstance::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DBInstance::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DBInstance::GetIsolateTime() const
{
    return m_isolateTime;
}

void DBInstance::SetIsolateTime(const string& _isolateTime)
{
    m_isolateTime = _isolateTime;
    m_isolateTimeHasBeenSet = true;
}

bool DBInstance::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

int64_t DBInstance::GetMemory() const
{
    return m_memory;
}

void DBInstance::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DBInstance::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t DBInstance::GetUsedStorage() const
{
    return m_usedStorage;
}

void DBInstance::SetUsedStorage(const int64_t& _usedStorage)
{
    m_usedStorage = _usedStorage;
    m_usedStorageHasBeenSet = true;
}

bool DBInstance::UsedStorageHasBeenSet() const
{
    return m_usedStorageHasBeenSet;
}

int64_t DBInstance::GetStorage() const
{
    return m_storage;
}

void DBInstance::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool DBInstance::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string DBInstance::GetVersionName() const
{
    return m_versionName;
}

void DBInstance::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool DBInstance::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

int64_t DBInstance::GetRenewFlag() const
{
    return m_renewFlag;
}

void DBInstance::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool DBInstance::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

int64_t DBInstance::GetModel() const
{
    return m_model;
}

void DBInstance::SetModel(const int64_t& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool DBInstance::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string DBInstance::GetRegion() const
{
    return m_region;
}

void DBInstance::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DBInstance::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DBInstance::GetZone() const
{
    return m_zone;
}

void DBInstance::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DBInstance::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DBInstance::GetBackupTime() const
{
    return m_backupTime;
}

void DBInstance::SetBackupTime(const string& _backupTime)
{
    m_backupTime = _backupTime;
    m_backupTimeHasBeenSet = true;
}

bool DBInstance::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

int64_t DBInstance::GetPayMode() const
{
    return m_payMode;
}

void DBInstance::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DBInstance::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DBInstance::GetUid() const
{
    return m_uid;
}

void DBInstance::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool DBInstance::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

int64_t DBInstance::GetCpu() const
{
    return m_cpu;
}

void DBInstance::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DBInstance::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string DBInstance::GetVersion() const
{
    return m_version;
}

void DBInstance::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool DBInstance::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DBInstance::GetType() const
{
    return m_type;
}

void DBInstance::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DBInstance::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DBInstance::GetPid() const
{
    return m_pid;
}

void DBInstance::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool DBInstance::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string DBInstance::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void DBInstance::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool DBInstance::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string DBInstance::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void DBInstance::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool DBInstance::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

