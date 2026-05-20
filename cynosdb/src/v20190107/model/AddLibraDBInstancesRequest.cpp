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

#include <tencentcloud/cynosdb/v20190107/model/AddLibraDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

AddLibraDBInstancesRequest::AddLibraDBInstancesRequest() :
    m_zoneHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_objectsHasBeenSet(false),
    m_portHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_replicasNumHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_orderSourceHasBeenSet(false),
    m_dealModeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_libraDBVersionHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_srcInstanceIdHasBeenSet(false)
{
}

string AddLibraDBInstancesRequest::ToJsonString() const
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

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mem, allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_objectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Objects";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objects.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_replicasNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicasNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicasNum, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_orderSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderSource.c_str(), allocator).Move(), allocator);
    }

    if (m_dealModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealMode, allocator);
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

    if (m_libraDBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraDBVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_libraDBVersion.c_str(), allocator).Move(), allocator);
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

    if (m_srcInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcInstanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddLibraDBInstancesRequest::GetZone() const
{
    return m_zone;
}

void AddLibraDBInstancesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string AddLibraDBInstancesRequest::GetClusterId() const
{
    return m_clusterId;
}

void AddLibraDBInstancesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t AddLibraDBInstancesRequest::GetCpu() const
{
    return m_cpu;
}

void AddLibraDBInstancesRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t AddLibraDBInstancesRequest::GetMem() const
{
    return m_mem;
}

void AddLibraDBInstancesRequest::SetMem(const int64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

int64_t AddLibraDBInstancesRequest::GetStorageSize() const
{
    return m_storageSize;
}

void AddLibraDBInstancesRequest::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

int64_t AddLibraDBInstancesRequest::GetPayMode() const
{
    return m_payMode;
}

void AddLibraDBInstancesRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

Objects AddLibraDBInstancesRequest::GetObjects() const
{
    return m_objects;
}

void AddLibraDBInstancesRequest::SetObjects(const Objects& _objects)
{
    m_objects = _objects;
    m_objectsHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::ObjectsHasBeenSet() const
{
    return m_objectsHasBeenSet;
}

int64_t AddLibraDBInstancesRequest::GetPort() const
{
    return m_port;
}

void AddLibraDBInstancesRequest::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t AddLibraDBInstancesRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void AddLibraDBInstancesRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string AddLibraDBInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void AddLibraDBInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t AddLibraDBInstancesRequest::GetReplicasNum() const
{
    return m_replicasNum;
}

void AddLibraDBInstancesRequest::SetReplicasNum(const int64_t& _replicasNum)
{
    m_replicasNum = _replicasNum;
    m_replicasNumHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::ReplicasNumHasBeenSet() const
{
    return m_replicasNumHasBeenSet;
}

string AddLibraDBInstancesRequest::GetInstanceType() const
{
    return m_instanceType;
}

void AddLibraDBInstancesRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string AddLibraDBInstancesRequest::GetStorageType() const
{
    return m_storageType;
}

void AddLibraDBInstancesRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

int64_t AddLibraDBInstancesRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void AddLibraDBInstancesRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

string AddLibraDBInstancesRequest::GetOrderSource() const
{
    return m_orderSource;
}

void AddLibraDBInstancesRequest::SetOrderSource(const string& _orderSource)
{
    m_orderSource = _orderSource;
    m_orderSourceHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::OrderSourceHasBeenSet() const
{
    return m_orderSourceHasBeenSet;
}

int64_t AddLibraDBInstancesRequest::GetDealMode() const
{
    return m_dealMode;
}

void AddLibraDBInstancesRequest::SetDealMode(const int64_t& _dealMode)
{
    m_dealMode = _dealMode;
    m_dealModeHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::DealModeHasBeenSet() const
{
    return m_dealModeHasBeenSet;
}

string AddLibraDBInstancesRequest::GetVpcId() const
{
    return m_vpcId;
}

void AddLibraDBInstancesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string AddLibraDBInstancesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void AddLibraDBInstancesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<string> AddLibraDBInstancesRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void AddLibraDBInstancesRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string AddLibraDBInstancesRequest::GetLibraDBVersion() const
{
    return m_libraDBVersion;
}

void AddLibraDBInstancesRequest::SetLibraDBVersion(const string& _libraDBVersion)
{
    m_libraDBVersion = _libraDBVersion;
    m_libraDBVersionHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::LibraDBVersionHasBeenSet() const
{
    return m_libraDBVersionHasBeenSet;
}

int64_t AddLibraDBInstancesRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void AddLibraDBInstancesRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string AddLibraDBInstancesRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void AddLibraDBInstancesRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string AddLibraDBInstancesRequest::GetSrcInstanceId() const
{
    return m_srcInstanceId;
}

void AddLibraDBInstancesRequest::SetSrcInstanceId(const string& _srcInstanceId)
{
    m_srcInstanceId = _srcInstanceId;
    m_srcInstanceIdHasBeenSet = true;
}

bool AddLibraDBInstancesRequest::SrcInstanceIdHasBeenSet() const
{
    return m_srcInstanceIdHasBeenSet;
}


