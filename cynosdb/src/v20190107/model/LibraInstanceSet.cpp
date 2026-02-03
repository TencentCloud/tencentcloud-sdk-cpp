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

#include <tencentcloud/cynosdb/v20190107/model/LibraInstanceSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

LibraInstanceSet::LibraInstanceSet() :
    m_dbModeHasBeenSet(false),
    m_instanceCpuHasBeenSet(false),
    m_instanceDeviceTypeHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceMemoryHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instancePayModeHasBeenSet(false),
    m_instancePeriodEndTimeHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_instanceStatusDescHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_wanDomainHasBeenSet(false),
    m_wanIPHasBeenSet(false),
    m_wanPortHasBeenSet(false),
    m_wanStatusHasBeenSet(false),
    m_instanceStorageHasBeenSet(false),
    m_instanceStorageTypeHasBeenSet(false)
{
}

CoreInternalOutcome LibraInstanceSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbMode") && !value["DbMode"].IsNull())
    {
        if (!value["DbMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.DbMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbMode = string(value["DbMode"].GetString());
        m_dbModeHasBeenSet = true;
    }

    if (value.HasMember("InstanceCpu") && !value["InstanceCpu"].IsNull())
    {
        if (!value["InstanceCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.InstanceCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCpu = value["InstanceCpu"].GetInt64();
        m_instanceCpuHasBeenSet = true;
    }

    if (value.HasMember("InstanceDeviceType") && !value["InstanceDeviceType"].IsNull())
    {
        if (!value["InstanceDeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.InstanceDeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceDeviceType = string(value["InstanceDeviceType"].GetString());
        m_instanceDeviceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceGroupId") && !value["InstanceGroupId"].IsNull())
    {
        if (!value["InstanceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.InstanceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceGroupId = string(value["InstanceGroupId"].GetString());
        m_instanceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceMemory") && !value["InstanceMemory"].IsNull())
    {
        if (!value["InstanceMemory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.InstanceMemory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceMemory = value["InstanceMemory"].GetInt64();
        m_instanceMemoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstancePayMode") && !value["InstancePayMode"].IsNull())
    {
        if (!value["InstancePayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.InstancePayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instancePayMode = value["InstancePayMode"].GetInt64();
        m_instancePayModeHasBeenSet = true;
    }

    if (value.HasMember("InstancePeriodEndTime") && !value["InstancePeriodEndTime"].IsNull())
    {
        if (!value["InstancePeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.InstancePeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instancePeriodEndTime = string(value["InstancePeriodEndTime"].GetString());
        m_instancePeriodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceRole") && !value["InstanceRole"].IsNull())
    {
        if (!value["InstanceRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.InstanceRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRole = string(value["InstanceRole"].GetString());
        m_instanceRoleHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatusDesc") && !value["InstanceStatusDesc"].IsNull())
    {
        if (!value["InstanceStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.InstanceStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatusDesc = string(value["InstanceStatusDesc"].GetString());
        m_instanceStatusDescHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.NetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netType = string(value["NetType"].GetString());
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("WanDomain") && !value["WanDomain"].IsNull())
    {
        if (!value["WanDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.WanDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanDomain = string(value["WanDomain"].GetString());
        m_wanDomainHasBeenSet = true;
    }

    if (value.HasMember("WanIP") && !value["WanIP"].IsNull())
    {
        if (!value["WanIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.WanIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIP = string(value["WanIP"].GetString());
        m_wanIPHasBeenSet = true;
    }

    if (value.HasMember("WanPort") && !value["WanPort"].IsNull())
    {
        if (!value["WanPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.WanPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanPort = value["WanPort"].GetInt64();
        m_wanPortHasBeenSet = true;
    }

    if (value.HasMember("WanStatus") && !value["WanStatus"].IsNull())
    {
        if (!value["WanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.WanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanStatus = string(value["WanStatus"].GetString());
        m_wanStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceStorage") && !value["InstanceStorage"].IsNull())
    {
        if (!value["InstanceStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.InstanceStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStorage = value["InstanceStorage"].GetInt64();
        m_instanceStorageHasBeenSet = true;
    }

    if (value.HasMember("InstanceStorageType") && !value["InstanceStorageType"].IsNull())
    {
        if (!value["InstanceStorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraInstanceSet.InstanceStorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStorageType = string(value["InstanceStorageType"].GetString());
        m_instanceStorageTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LibraInstanceSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbMode.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCpu, allocator);
    }

    if (m_instanceDeviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceDeviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceMemory, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instancePayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instancePayMode, allocator);
    }

    if (m_instancePeriodEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instancePeriodEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_wanDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_wanIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIP.c_str(), allocator).Move(), allocator);
    }

    if (m_wanPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wanPort, allocator);
    }

    if (m_wanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStorage, allocator);
    }

    if (m_instanceStorageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStorageType.c_str(), allocator).Move(), allocator);
    }

}


string LibraInstanceSet::GetDbMode() const
{
    return m_dbMode;
}

void LibraInstanceSet::SetDbMode(const string& _dbMode)
{
    m_dbMode = _dbMode;
    m_dbModeHasBeenSet = true;
}

bool LibraInstanceSet::DbModeHasBeenSet() const
{
    return m_dbModeHasBeenSet;
}

int64_t LibraInstanceSet::GetInstanceCpu() const
{
    return m_instanceCpu;
}

void LibraInstanceSet::SetInstanceCpu(const int64_t& _instanceCpu)
{
    m_instanceCpu = _instanceCpu;
    m_instanceCpuHasBeenSet = true;
}

bool LibraInstanceSet::InstanceCpuHasBeenSet() const
{
    return m_instanceCpuHasBeenSet;
}

string LibraInstanceSet::GetInstanceDeviceType() const
{
    return m_instanceDeviceType;
}

void LibraInstanceSet::SetInstanceDeviceType(const string& _instanceDeviceType)
{
    m_instanceDeviceType = _instanceDeviceType;
    m_instanceDeviceTypeHasBeenSet = true;
}

bool LibraInstanceSet::InstanceDeviceTypeHasBeenSet() const
{
    return m_instanceDeviceTypeHasBeenSet;
}

string LibraInstanceSet::GetInstanceGroupId() const
{
    return m_instanceGroupId;
}

void LibraInstanceSet::SetInstanceGroupId(const string& _instanceGroupId)
{
    m_instanceGroupId = _instanceGroupId;
    m_instanceGroupIdHasBeenSet = true;
}

bool LibraInstanceSet::InstanceGroupIdHasBeenSet() const
{
    return m_instanceGroupIdHasBeenSet;
}

string LibraInstanceSet::GetInstanceId() const
{
    return m_instanceId;
}

void LibraInstanceSet::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool LibraInstanceSet::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t LibraInstanceSet::GetInstanceMemory() const
{
    return m_instanceMemory;
}

void LibraInstanceSet::SetInstanceMemory(const int64_t& _instanceMemory)
{
    m_instanceMemory = _instanceMemory;
    m_instanceMemoryHasBeenSet = true;
}

bool LibraInstanceSet::InstanceMemoryHasBeenSet() const
{
    return m_instanceMemoryHasBeenSet;
}

string LibraInstanceSet::GetInstanceName() const
{
    return m_instanceName;
}

void LibraInstanceSet::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool LibraInstanceSet::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t LibraInstanceSet::GetInstancePayMode() const
{
    return m_instancePayMode;
}

void LibraInstanceSet::SetInstancePayMode(const int64_t& _instancePayMode)
{
    m_instancePayMode = _instancePayMode;
    m_instancePayModeHasBeenSet = true;
}

bool LibraInstanceSet::InstancePayModeHasBeenSet() const
{
    return m_instancePayModeHasBeenSet;
}

string LibraInstanceSet::GetInstancePeriodEndTime() const
{
    return m_instancePeriodEndTime;
}

void LibraInstanceSet::SetInstancePeriodEndTime(const string& _instancePeriodEndTime)
{
    m_instancePeriodEndTime = _instancePeriodEndTime;
    m_instancePeriodEndTimeHasBeenSet = true;
}

bool LibraInstanceSet::InstancePeriodEndTimeHasBeenSet() const
{
    return m_instancePeriodEndTimeHasBeenSet;
}

string LibraInstanceSet::GetInstanceRole() const
{
    return m_instanceRole;
}

void LibraInstanceSet::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool LibraInstanceSet::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

string LibraInstanceSet::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void LibraInstanceSet::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool LibraInstanceSet::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string LibraInstanceSet::GetInstanceStatusDesc() const
{
    return m_instanceStatusDesc;
}

void LibraInstanceSet::SetInstanceStatusDesc(const string& _instanceStatusDesc)
{
    m_instanceStatusDesc = _instanceStatusDesc;
    m_instanceStatusDescHasBeenSet = true;
}

bool LibraInstanceSet::InstanceStatusDescHasBeenSet() const
{
    return m_instanceStatusDescHasBeenSet;
}

string LibraInstanceSet::GetNetType() const
{
    return m_netType;
}

void LibraInstanceSet::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool LibraInstanceSet::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string LibraInstanceSet::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void LibraInstanceSet::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool LibraInstanceSet::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

string LibraInstanceSet::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void LibraInstanceSet::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool LibraInstanceSet::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string LibraInstanceSet::GetVip() const
{
    return m_vip;
}

void LibraInstanceSet::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool LibraInstanceSet::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t LibraInstanceSet::GetVport() const
{
    return m_vport;
}

void LibraInstanceSet::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool LibraInstanceSet::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string LibraInstanceSet::GetWanDomain() const
{
    return m_wanDomain;
}

void LibraInstanceSet::SetWanDomain(const string& _wanDomain)
{
    m_wanDomain = _wanDomain;
    m_wanDomainHasBeenSet = true;
}

bool LibraInstanceSet::WanDomainHasBeenSet() const
{
    return m_wanDomainHasBeenSet;
}

string LibraInstanceSet::GetWanIP() const
{
    return m_wanIP;
}

void LibraInstanceSet::SetWanIP(const string& _wanIP)
{
    m_wanIP = _wanIP;
    m_wanIPHasBeenSet = true;
}

bool LibraInstanceSet::WanIPHasBeenSet() const
{
    return m_wanIPHasBeenSet;
}

int64_t LibraInstanceSet::GetWanPort() const
{
    return m_wanPort;
}

void LibraInstanceSet::SetWanPort(const int64_t& _wanPort)
{
    m_wanPort = _wanPort;
    m_wanPortHasBeenSet = true;
}

bool LibraInstanceSet::WanPortHasBeenSet() const
{
    return m_wanPortHasBeenSet;
}

string LibraInstanceSet::GetWanStatus() const
{
    return m_wanStatus;
}

void LibraInstanceSet::SetWanStatus(const string& _wanStatus)
{
    m_wanStatus = _wanStatus;
    m_wanStatusHasBeenSet = true;
}

bool LibraInstanceSet::WanStatusHasBeenSet() const
{
    return m_wanStatusHasBeenSet;
}

int64_t LibraInstanceSet::GetInstanceStorage() const
{
    return m_instanceStorage;
}

void LibraInstanceSet::SetInstanceStorage(const int64_t& _instanceStorage)
{
    m_instanceStorage = _instanceStorage;
    m_instanceStorageHasBeenSet = true;
}

bool LibraInstanceSet::InstanceStorageHasBeenSet() const
{
    return m_instanceStorageHasBeenSet;
}

string LibraInstanceSet::GetInstanceStorageType() const
{
    return m_instanceStorageType;
}

void LibraInstanceSet::SetInstanceStorageType(const string& _instanceStorageType)
{
    m_instanceStorageType = _instanceStorageType;
    m_instanceStorageTypeHasBeenSet = true;
}

bool LibraInstanceSet::InstanceStorageTypeHasBeenSet() const
{
    return m_instanceStorageTypeHasBeenSet;
}

