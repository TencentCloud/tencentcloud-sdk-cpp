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

#include <tencentcloud/keewidb/v20220308/model/CreateInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Keewidb::V20220308::Model;
using namespace std;

CreateInstancesRequest::CreateInstancesRequest() :
    m_typeIdHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_billingModeHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_shardNumHasBeenSet(false),
    m_replicasNumHasBeenSet(false),
    m_machineMemoryHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_noAuthHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_vPortHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_securityGroupIdListHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_machineCpuHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_compressionHasBeenSet(false)
{
}

string CreateInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_typeId, allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_billingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_billingMode, allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_shardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardNum, allocator);
    }

    if (m_replicasNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicasNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicasNum, allocator);
    }

    if (m_machineMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineMemory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_machineMemory, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_noAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoAuth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_noAuth, allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_vPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vPort, allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_securityGroupIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIdList.begin(); itr != m_securityGroupIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memSize, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_machineCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_machineCpu, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compression.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateInstancesRequest::GetTypeId() const
{
    return m_typeId;
}

void CreateInstancesRequest::SetTypeId(const uint64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool CreateInstancesRequest::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

string CreateInstancesRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void CreateInstancesRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool CreateInstancesRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string CreateInstancesRequest::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void CreateInstancesRequest::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool CreateInstancesRequest::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

int64_t CreateInstancesRequest::GetBillingMode() const
{
    return m_billingMode;
}

void CreateInstancesRequest::SetBillingMode(const int64_t& _billingMode)
{
    m_billingMode = _billingMode;
    m_billingModeHasBeenSet = true;
}

bool CreateInstancesRequest::BillingModeHasBeenSet() const
{
    return m_billingModeHasBeenSet;
}

uint64_t CreateInstancesRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateInstancesRequest::SetGoodsNum(const uint64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateInstancesRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

uint64_t CreateInstancesRequest::GetPeriod() const
{
    return m_period;
}

void CreateInstancesRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateInstancesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t CreateInstancesRequest::GetShardNum() const
{
    return m_shardNum;
}

void CreateInstancesRequest::SetShardNum(const int64_t& _shardNum)
{
    m_shardNum = _shardNum;
    m_shardNumHasBeenSet = true;
}

bool CreateInstancesRequest::ShardNumHasBeenSet() const
{
    return m_shardNumHasBeenSet;
}

int64_t CreateInstancesRequest::GetReplicasNum() const
{
    return m_replicasNum;
}

void CreateInstancesRequest::SetReplicasNum(const int64_t& _replicasNum)
{
    m_replicasNum = _replicasNum;
    m_replicasNumHasBeenSet = true;
}

bool CreateInstancesRequest::ReplicasNumHasBeenSet() const
{
    return m_replicasNumHasBeenSet;
}

int64_t CreateInstancesRequest::GetMachineMemory() const
{
    return m_machineMemory;
}

void CreateInstancesRequest::SetMachineMemory(const int64_t& _machineMemory)
{
    m_machineMemory = _machineMemory;
    m_machineMemoryHasBeenSet = true;
}

bool CreateInstancesRequest::MachineMemoryHasBeenSet() const
{
    return m_machineMemoryHasBeenSet;
}

uint64_t CreateInstancesRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateInstancesRequest::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateInstancesRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateInstancesRequest::GetZoneName() const
{
    return m_zoneName;
}

void CreateInstancesRequest::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool CreateInstancesRequest::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string CreateInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

bool CreateInstancesRequest::GetNoAuth() const
{
    return m_noAuth;
}

void CreateInstancesRequest::SetNoAuth(const bool& _noAuth)
{
    m_noAuth = _noAuth;
    m_noAuthHasBeenSet = true;
}

bool CreateInstancesRequest::NoAuthHasBeenSet() const
{
    return m_noAuthHasBeenSet;
}

string CreateInstancesRequest::GetPassword() const
{
    return m_password;
}

void CreateInstancesRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateInstancesRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

uint64_t CreateInstancesRequest::GetVPort() const
{
    return m_vPort;
}

void CreateInstancesRequest::SetVPort(const uint64_t& _vPort)
{
    m_vPort = _vPort;
    m_vPortHasBeenSet = true;
}

bool CreateInstancesRequest::VPortHasBeenSet() const
{
    return m_vPortHasBeenSet;
}

uint64_t CreateInstancesRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void CreateInstancesRequest::SetAutoRenew(const uint64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool CreateInstancesRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

vector<string> CreateInstancesRequest::GetSecurityGroupIdList() const
{
    return m_securityGroupIdList;
}

void CreateInstancesRequest::SetSecurityGroupIdList(const vector<string>& _securityGroupIdList)
{
    m_securityGroupIdList = _securityGroupIdList;
    m_securityGroupIdListHasBeenSet = true;
}

bool CreateInstancesRequest::SecurityGroupIdListHasBeenSet() const
{
    return m_securityGroupIdListHasBeenSet;
}

vector<ResourceTag> CreateInstancesRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateInstancesRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateInstancesRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

int64_t CreateInstancesRequest::GetMemSize() const
{
    return m_memSize;
}

void CreateInstancesRequest::SetMemSize(const int64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool CreateInstancesRequest::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

int64_t CreateInstancesRequest::GetDiskSize() const
{
    return m_diskSize;
}

void CreateInstancesRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CreateInstancesRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

int64_t CreateInstancesRequest::GetMachineCpu() const
{
    return m_machineCpu;
}

void CreateInstancesRequest::SetMachineCpu(const int64_t& _machineCpu)
{
    m_machineCpu = _machineCpu;
    m_machineCpuHasBeenSet = true;
}

bool CreateInstancesRequest::MachineCpuHasBeenSet() const
{
    return m_machineCpuHasBeenSet;
}

int64_t CreateInstancesRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateInstancesRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateInstancesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateInstancesRequest::GetCompression() const
{
    return m_compression;
}

void CreateInstancesRequest::SetCompression(const string& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool CreateInstancesRequest::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}


