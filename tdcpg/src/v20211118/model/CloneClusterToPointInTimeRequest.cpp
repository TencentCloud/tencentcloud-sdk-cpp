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

#include <tencentcloud/tdcpg/v20211118/model/CloneClusterToPointInTimeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdcpg::V20211118::Model;
using namespace std;

CloneClusterToPointInTimeRequest::CloneClusterToPointInTimeRequest() :
    m_zoneHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_sourceClusterIdHasBeenSet(false),
    m_sourceDataPointHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_storagePayModeHasBeenSet(false),
    m_storageHasBeenSet(false)
{
}

string CloneClusterToPointInTimeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_dBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceDataPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDataPoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceDataPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_storagePayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storagePayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storage, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CloneClusterToPointInTimeRequest::GetZone() const
{
    return m_zone;
}

void CloneClusterToPointInTimeRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CloneClusterToPointInTimeRequest::GetDBVersion() const
{
    return m_dBVersion;
}

void CloneClusterToPointInTimeRequest::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

uint64_t CloneClusterToPointInTimeRequest::GetCPU() const
{
    return m_cPU;
}

void CloneClusterToPointInTimeRequest::SetCPU(const uint64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t CloneClusterToPointInTimeRequest::GetMemory() const
{
    return m_memory;
}

void CloneClusterToPointInTimeRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string CloneClusterToPointInTimeRequest::GetVpcId() const
{
    return m_vpcId;
}

void CloneClusterToPointInTimeRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CloneClusterToPointInTimeRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CloneClusterToPointInTimeRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CloneClusterToPointInTimeRequest::GetPayMode() const
{
    return m_payMode;
}

void CloneClusterToPointInTimeRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string CloneClusterToPointInTimeRequest::GetSourceClusterId() const
{
    return m_sourceClusterId;
}

void CloneClusterToPointInTimeRequest::SetSourceClusterId(const string& _sourceClusterId)
{
    m_sourceClusterId = _sourceClusterId;
    m_sourceClusterIdHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::SourceClusterIdHasBeenSet() const
{
    return m_sourceClusterIdHasBeenSet;
}

string CloneClusterToPointInTimeRequest::GetSourceDataPoint() const
{
    return m_sourceDataPoint;
}

void CloneClusterToPointInTimeRequest::SetSourceDataPoint(const string& _sourceDataPoint)
{
    m_sourceDataPoint = _sourceDataPoint;
    m_sourceDataPointHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::SourceDataPointHasBeenSet() const
{
    return m_sourceDataPointHasBeenSet;
}

string CloneClusterToPointInTimeRequest::GetClusterName() const
{
    return m_clusterName;
}

void CloneClusterToPointInTimeRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

uint64_t CloneClusterToPointInTimeRequest::GetProjectId() const
{
    return m_projectId;
}

void CloneClusterToPointInTimeRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t CloneClusterToPointInTimeRequest::GetPort() const
{
    return m_port;
}

void CloneClusterToPointInTimeRequest::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t CloneClusterToPointInTimeRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void CloneClusterToPointInTimeRequest::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

uint64_t CloneClusterToPointInTimeRequest::GetPeriod() const
{
    return m_period;
}

void CloneClusterToPointInTimeRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

uint64_t CloneClusterToPointInTimeRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CloneClusterToPointInTimeRequest::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string CloneClusterToPointInTimeRequest::GetStoragePayMode() const
{
    return m_storagePayMode;
}

void CloneClusterToPointInTimeRequest::SetStoragePayMode(const string& _storagePayMode)
{
    m_storagePayMode = _storagePayMode;
    m_storagePayModeHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::StoragePayModeHasBeenSet() const
{
    return m_storagePayModeHasBeenSet;
}

uint64_t CloneClusterToPointInTimeRequest::GetStorage() const
{
    return m_storage;
}

void CloneClusterToPointInTimeRequest::SetStorage(const uint64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CloneClusterToPointInTimeRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}


