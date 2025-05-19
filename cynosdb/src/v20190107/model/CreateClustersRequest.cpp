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

#include <tencentcloud/cynosdb/v20190107/model/CreateClustersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CreateClustersRequest::CreateClustersRequest() :
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_adminPasswordHasBeenSet(false),
    m_portHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_rollbackStrategyHasBeenSet(false),
    m_rollbackIdHasBeenSet(false),
    m_originalClusterIdHasBeenSet(false),
    m_expectTimeHasBeenSet(false),
    m_expectTimeThreshHasBeenSet(false),
    m_storageLimitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_haCountHasBeenSet(false),
    m_orderSourceHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_dbModeHasBeenSet(false),
    m_minCpuHasBeenSet(false),
    m_maxCpuHasBeenSet(false),
    m_autoPauseHasBeenSet(false),
    m_autoPauseDelayHasBeenSet(false),
    m_storagePayModeHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_alarmPolicyIdsHasBeenSet(false),
    m_clusterParamsHasBeenSet(false),
    m_dealModeHasBeenSet(false),
    m_paramTemplateIdHasBeenSet(false),
    m_slaveZoneHasBeenSet(false),
    m_instanceInitInfosHasBeenSet(false),
    m_gdnIdHasBeenSet(false),
    m_proxyConfigHasBeenSet(false)
{
}

string CreateClustersRequest::ToJsonString() const
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

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storage, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_rollbackStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rollbackStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rollbackId, allocator);
    }

    if (m_originalClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originalClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_expectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expectTimeThreshHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectTimeThresh";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expectTimeThresh, allocator);
    }

    if (m_storageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageLimit, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_haCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_haCount, allocator);
    }

    if (m_orderSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderSource.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dbModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbMode.c_str(), allocator).Move(), allocator);
    }

    if (m_minCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minCpu, allocator);
    }

    if (m_maxCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxCpu, allocator);
    }

    if (m_autoPauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPause";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoPause.c_str(), allocator).Move(), allocator);
    }

    if (m_autoPauseDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPauseDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoPauseDelay, allocator);
    }

    if (m_storagePayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storagePayMode, allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmPolicyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPolicyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmPolicyIds.begin(); itr != m_alarmPolicyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterParams.begin(); itr != m_clusterParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dealModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealMode, allocator);
    }

    if (m_paramTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_paramTemplateId, allocator);
    }

    if (m_slaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_slaveZone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceInitInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInitInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceInitInfos.begin(); itr != m_instanceInitInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_gdnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GdnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gdnId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_proxyConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClustersRequest::GetZone() const
{
    return m_zone;
}

void CreateClustersRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateClustersRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateClustersRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateClustersRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateClustersRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateClustersRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateClustersRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateClustersRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateClustersRequest::GetDbType() const
{
    return m_dbType;
}

void CreateClustersRequest::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool CreateClustersRequest::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string CreateClustersRequest::GetDbVersion() const
{
    return m_dbVersion;
}

void CreateClustersRequest::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool CreateClustersRequest::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

int64_t CreateClustersRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateClustersRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateClustersRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateClustersRequest::GetCpu() const
{
    return m_cpu;
}

void CreateClustersRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateClustersRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t CreateClustersRequest::GetMemory() const
{
    return m_memory;
}

void CreateClustersRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateClustersRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t CreateClustersRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void CreateClustersRequest::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool CreateClustersRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

int64_t CreateClustersRequest::GetStorage() const
{
    return m_storage;
}

void CreateClustersRequest::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CreateClustersRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string CreateClustersRequest::GetClusterName() const
{
    return m_clusterName;
}

void CreateClustersRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CreateClustersRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CreateClustersRequest::GetAdminPassword() const
{
    return m_adminPassword;
}

void CreateClustersRequest::SetAdminPassword(const string& _adminPassword)
{
    m_adminPassword = _adminPassword;
    m_adminPasswordHasBeenSet = true;
}

bool CreateClustersRequest::AdminPasswordHasBeenSet() const
{
    return m_adminPasswordHasBeenSet;
}

int64_t CreateClustersRequest::GetPort() const
{
    return m_port;
}

void CreateClustersRequest::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateClustersRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t CreateClustersRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateClustersRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateClustersRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t CreateClustersRequest::GetCount() const
{
    return m_count;
}

void CreateClustersRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateClustersRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string CreateClustersRequest::GetRollbackStrategy() const
{
    return m_rollbackStrategy;
}

void CreateClustersRequest::SetRollbackStrategy(const string& _rollbackStrategy)
{
    m_rollbackStrategy = _rollbackStrategy;
    m_rollbackStrategyHasBeenSet = true;
}

bool CreateClustersRequest::RollbackStrategyHasBeenSet() const
{
    return m_rollbackStrategyHasBeenSet;
}

uint64_t CreateClustersRequest::GetRollbackId() const
{
    return m_rollbackId;
}

void CreateClustersRequest::SetRollbackId(const uint64_t& _rollbackId)
{
    m_rollbackId = _rollbackId;
    m_rollbackIdHasBeenSet = true;
}

bool CreateClustersRequest::RollbackIdHasBeenSet() const
{
    return m_rollbackIdHasBeenSet;
}

string CreateClustersRequest::GetOriginalClusterId() const
{
    return m_originalClusterId;
}

void CreateClustersRequest::SetOriginalClusterId(const string& _originalClusterId)
{
    m_originalClusterId = _originalClusterId;
    m_originalClusterIdHasBeenSet = true;
}

bool CreateClustersRequest::OriginalClusterIdHasBeenSet() const
{
    return m_originalClusterIdHasBeenSet;
}

string CreateClustersRequest::GetExpectTime() const
{
    return m_expectTime;
}

void CreateClustersRequest::SetExpectTime(const string& _expectTime)
{
    m_expectTime = _expectTime;
    m_expectTimeHasBeenSet = true;
}

bool CreateClustersRequest::ExpectTimeHasBeenSet() const
{
    return m_expectTimeHasBeenSet;
}

uint64_t CreateClustersRequest::GetExpectTimeThresh() const
{
    return m_expectTimeThresh;
}

void CreateClustersRequest::SetExpectTimeThresh(const uint64_t& _expectTimeThresh)
{
    m_expectTimeThresh = _expectTimeThresh;
    m_expectTimeThreshHasBeenSet = true;
}

bool CreateClustersRequest::ExpectTimeThreshHasBeenSet() const
{
    return m_expectTimeThreshHasBeenSet;
}

int64_t CreateClustersRequest::GetStorageLimit() const
{
    return m_storageLimit;
}

void CreateClustersRequest::SetStorageLimit(const int64_t& _storageLimit)
{
    m_storageLimit = _storageLimit;
    m_storageLimitHasBeenSet = true;
}

bool CreateClustersRequest::StorageLimitHasBeenSet() const
{
    return m_storageLimitHasBeenSet;
}

int64_t CreateClustersRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateClustersRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateClustersRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string CreateClustersRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateClustersRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateClustersRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

int64_t CreateClustersRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateClustersRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateClustersRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t CreateClustersRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateClustersRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateClustersRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

int64_t CreateClustersRequest::GetHaCount() const
{
    return m_haCount;
}

void CreateClustersRequest::SetHaCount(const int64_t& _haCount)
{
    m_haCount = _haCount;
    m_haCountHasBeenSet = true;
}

bool CreateClustersRequest::HaCountHasBeenSet() const
{
    return m_haCountHasBeenSet;
}

string CreateClustersRequest::GetOrderSource() const
{
    return m_orderSource;
}

void CreateClustersRequest::SetOrderSource(const string& _orderSource)
{
    m_orderSource = _orderSource;
    m_orderSourceHasBeenSet = true;
}

bool CreateClustersRequest::OrderSourceHasBeenSet() const
{
    return m_orderSourceHasBeenSet;
}

vector<Tag> CreateClustersRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateClustersRequest::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateClustersRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CreateClustersRequest::GetDbMode() const
{
    return m_dbMode;
}

void CreateClustersRequest::SetDbMode(const string& _dbMode)
{
    m_dbMode = _dbMode;
    m_dbModeHasBeenSet = true;
}

bool CreateClustersRequest::DbModeHasBeenSet() const
{
    return m_dbModeHasBeenSet;
}

double CreateClustersRequest::GetMinCpu() const
{
    return m_minCpu;
}

void CreateClustersRequest::SetMinCpu(const double& _minCpu)
{
    m_minCpu = _minCpu;
    m_minCpuHasBeenSet = true;
}

bool CreateClustersRequest::MinCpuHasBeenSet() const
{
    return m_minCpuHasBeenSet;
}

double CreateClustersRequest::GetMaxCpu() const
{
    return m_maxCpu;
}

void CreateClustersRequest::SetMaxCpu(const double& _maxCpu)
{
    m_maxCpu = _maxCpu;
    m_maxCpuHasBeenSet = true;
}

bool CreateClustersRequest::MaxCpuHasBeenSet() const
{
    return m_maxCpuHasBeenSet;
}

string CreateClustersRequest::GetAutoPause() const
{
    return m_autoPause;
}

void CreateClustersRequest::SetAutoPause(const string& _autoPause)
{
    m_autoPause = _autoPause;
    m_autoPauseHasBeenSet = true;
}

bool CreateClustersRequest::AutoPauseHasBeenSet() const
{
    return m_autoPauseHasBeenSet;
}

int64_t CreateClustersRequest::GetAutoPauseDelay() const
{
    return m_autoPauseDelay;
}

void CreateClustersRequest::SetAutoPauseDelay(const int64_t& _autoPauseDelay)
{
    m_autoPauseDelay = _autoPauseDelay;
    m_autoPauseDelayHasBeenSet = true;
}

bool CreateClustersRequest::AutoPauseDelayHasBeenSet() const
{
    return m_autoPauseDelayHasBeenSet;
}

int64_t CreateClustersRequest::GetStoragePayMode() const
{
    return m_storagePayMode;
}

void CreateClustersRequest::SetStoragePayMode(const int64_t& _storagePayMode)
{
    m_storagePayMode = _storagePayMode;
    m_storagePayModeHasBeenSet = true;
}

bool CreateClustersRequest::StoragePayModeHasBeenSet() const
{
    return m_storagePayModeHasBeenSet;
}

vector<string> CreateClustersRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateClustersRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateClustersRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

vector<string> CreateClustersRequest::GetAlarmPolicyIds() const
{
    return m_alarmPolicyIds;
}

void CreateClustersRequest::SetAlarmPolicyIds(const vector<string>& _alarmPolicyIds)
{
    m_alarmPolicyIds = _alarmPolicyIds;
    m_alarmPolicyIdsHasBeenSet = true;
}

bool CreateClustersRequest::AlarmPolicyIdsHasBeenSet() const
{
    return m_alarmPolicyIdsHasBeenSet;
}

vector<ParamItem> CreateClustersRequest::GetClusterParams() const
{
    return m_clusterParams;
}

void CreateClustersRequest::SetClusterParams(const vector<ParamItem>& _clusterParams)
{
    m_clusterParams = _clusterParams;
    m_clusterParamsHasBeenSet = true;
}

bool CreateClustersRequest::ClusterParamsHasBeenSet() const
{
    return m_clusterParamsHasBeenSet;
}

int64_t CreateClustersRequest::GetDealMode() const
{
    return m_dealMode;
}

void CreateClustersRequest::SetDealMode(const int64_t& _dealMode)
{
    m_dealMode = _dealMode;
    m_dealModeHasBeenSet = true;
}

bool CreateClustersRequest::DealModeHasBeenSet() const
{
    return m_dealModeHasBeenSet;
}

int64_t CreateClustersRequest::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void CreateClustersRequest::SetParamTemplateId(const int64_t& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool CreateClustersRequest::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}

string CreateClustersRequest::GetSlaveZone() const
{
    return m_slaveZone;
}

void CreateClustersRequest::SetSlaveZone(const string& _slaveZone)
{
    m_slaveZone = _slaveZone;
    m_slaveZoneHasBeenSet = true;
}

bool CreateClustersRequest::SlaveZoneHasBeenSet() const
{
    return m_slaveZoneHasBeenSet;
}

vector<InstanceInitInfo> CreateClustersRequest::GetInstanceInitInfos() const
{
    return m_instanceInitInfos;
}

void CreateClustersRequest::SetInstanceInitInfos(const vector<InstanceInitInfo>& _instanceInitInfos)
{
    m_instanceInitInfos = _instanceInitInfos;
    m_instanceInitInfosHasBeenSet = true;
}

bool CreateClustersRequest::InstanceInitInfosHasBeenSet() const
{
    return m_instanceInitInfosHasBeenSet;
}

string CreateClustersRequest::GetGdnId() const
{
    return m_gdnId;
}

void CreateClustersRequest::SetGdnId(const string& _gdnId)
{
    m_gdnId = _gdnId;
    m_gdnIdHasBeenSet = true;
}

bool CreateClustersRequest::GdnIdHasBeenSet() const
{
    return m_gdnIdHasBeenSet;
}

ProxyConfig CreateClustersRequest::GetProxyConfig() const
{
    return m_proxyConfig;
}

void CreateClustersRequest::SetProxyConfig(const ProxyConfig& _proxyConfig)
{
    m_proxyConfig = _proxyConfig;
    m_proxyConfigHasBeenSet = true;
}

bool CreateClustersRequest::ProxyConfigHasBeenSet() const
{
    return m_proxyConfigHasBeenSet;
}


