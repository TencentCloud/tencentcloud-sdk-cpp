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

#include <tencentcloud/tdcpg/v20211118/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdcpg::V20211118::Model;
using namespace std;

Instance::Instance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_payPeriodEndTimeHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_dBMajorVersionHasBeenSet(false),
    m_dBKernelVersionHasBeenSet(false)
{
}

CoreInternalOutcome Instance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("EndpointId") && !value["EndpointId"].IsNull())
    {
        if (!value["EndpointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.EndpointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointId = string(value["EndpointId"].GetString());
        m_endpointIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("DBVersion") && !value["DBVersion"].IsNull())
    {
        if (!value["DBVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.DBVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBVersion = string(value["DBVersion"].GetString());
        m_dBVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PayPeriodEndTime") && !value["PayPeriodEndTime"].IsNull())
    {
        if (!value["PayPeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.PayPeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payPeriodEndTime = string(value["PayPeriodEndTime"].GetString());
        m_payPeriodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.CPU` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetUint64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("DBMajorVersion") && !value["DBMajorVersion"].IsNull())
    {
        if (!value["DBMajorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.DBMajorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBMajorVersion = string(value["DBMajorVersion"].GetString());
        m_dBMajorVersionHasBeenSet = true;
    }

    if (value.HasMember("DBKernelVersion") && !value["DBKernelVersion"].IsNull())
    {
        if (!value["DBKernelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.DBKernelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBKernelVersion = string(value["DBKernelVersion"].GetString());
        m_dBKernelVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_dBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_payPeriodEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayPeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payPeriodEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_dBMajorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBMajorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBMajorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dBKernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBKernelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBKernelVersion.c_str(), allocator).Move(), allocator);
    }

}


string Instance::GetInstanceId() const
{
    return m_instanceId;
}

void Instance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Instance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Instance::GetInstanceName() const
{
    return m_instanceName;
}

void Instance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool Instance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string Instance::GetClusterId() const
{
    return m_clusterId;
}

void Instance::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Instance::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Instance::GetEndpointId() const
{
    return m_endpointId;
}

void Instance::SetEndpointId(const string& _endpointId)
{
    m_endpointId = _endpointId;
    m_endpointIdHasBeenSet = true;
}

bool Instance::EndpointIdHasBeenSet() const
{
    return m_endpointIdHasBeenSet;
}

string Instance::GetRegion() const
{
    return m_region;
}

void Instance::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Instance::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string Instance::GetZone() const
{
    return m_zone;
}

void Instance::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool Instance::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string Instance::GetDBVersion() const
{
    return m_dBVersion;
}

void Instance::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool Instance::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

string Instance::GetStatus() const
{
    return m_status;
}

void Instance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Instance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Instance::GetStatusDesc() const
{
    return m_statusDesc;
}

void Instance::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool Instance::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string Instance::GetCreateTime() const
{
    return m_createTime;
}

void Instance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Instance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Instance::GetPayMode() const
{
    return m_payMode;
}

void Instance::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Instance::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string Instance::GetPayPeriodEndTime() const
{
    return m_payPeriodEndTime;
}

void Instance::SetPayPeriodEndTime(const string& _payPeriodEndTime)
{
    m_payPeriodEndTime = _payPeriodEndTime;
    m_payPeriodEndTimeHasBeenSet = true;
}

bool Instance::PayPeriodEndTimeHasBeenSet() const
{
    return m_payPeriodEndTimeHasBeenSet;
}

uint64_t Instance::GetCPU() const
{
    return m_cPU;
}

void Instance::SetCPU(const uint64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool Instance::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t Instance::GetMemory() const
{
    return m_memory;
}

void Instance::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool Instance::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string Instance::GetInstanceType() const
{
    return m_instanceType;
}

void Instance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool Instance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string Instance::GetDBMajorVersion() const
{
    return m_dBMajorVersion;
}

void Instance::SetDBMajorVersion(const string& _dBMajorVersion)
{
    m_dBMajorVersion = _dBMajorVersion;
    m_dBMajorVersionHasBeenSet = true;
}

bool Instance::DBMajorVersionHasBeenSet() const
{
    return m_dBMajorVersionHasBeenSet;
}

string Instance::GetDBKernelVersion() const
{
    return m_dBKernelVersion;
}

void Instance::SetDBKernelVersion(const string& _dBKernelVersion)
{
    m_dBKernelVersion = _dBKernelVersion;
    m_dBKernelVersionHasBeenSet = true;
}

bool Instance::DBKernelVersionHasBeenSet() const
{
    return m_dBKernelVersionHasBeenSet;
}

