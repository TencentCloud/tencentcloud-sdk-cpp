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

#include <tencentcloud/cdb/v20170320/model/DescribeInstanceUpgradeTypeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeInstanceUpgradeTypeRequest::DescribeInstanceUpgradeTypeRequest() :
    m_instanceIdHasBeenSet(false),
    m_dstCpuHasBeenSet(false),
    m_dstMemoryHasBeenSet(false),
    m_dstDiskHasBeenSet(false),
    m_dstVersionHasBeenSet(false),
    m_dstDeployModeHasBeenSet(false),
    m_dstProtectModeHasBeenSet(false),
    m_dstSlaveZoneHasBeenSet(false),
    m_dstBackupZoneHasBeenSet(false),
    m_dstCdbTypeHasBeenSet(false),
    m_dstZoneIdHasBeenSet(false),
    m_nodeDistributionHasBeenSet(false),
    m_clusterTopologyHasBeenSet(false)
{
}

string DescribeInstanceUpgradeTypeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dstCpu, allocator);
    }

    if (m_dstMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstMemory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dstMemory, allocator);
    }

    if (m_dstDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstDisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dstDisk, allocator);
    }

    if (m_dstVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dstDeployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstDeployMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dstDeployMode, allocator);
    }

    if (m_dstProtectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstProtectMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dstProtectMode, allocator);
    }

    if (m_dstSlaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstSlaveZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dstSlaveZone, allocator);
    }

    if (m_dstBackupZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstBackupZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dstBackupZone, allocator);
    }

    if (m_dstCdbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstCdbType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstCdbType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstZoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dstZoneId, allocator);
    }

    if (m_nodeDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeDistribution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeDistribution.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clusterTopologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterTopology";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterTopology.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceUpgradeTypeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInstanceUpgradeTypeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInstanceUpgradeTypeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

double DescribeInstanceUpgradeTypeRequest::GetDstCpu() const
{
    return m_dstCpu;
}

void DescribeInstanceUpgradeTypeRequest::SetDstCpu(const double& _dstCpu)
{
    m_dstCpu = _dstCpu;
    m_dstCpuHasBeenSet = true;
}

bool DescribeInstanceUpgradeTypeRequest::DstCpuHasBeenSet() const
{
    return m_dstCpuHasBeenSet;
}

uint64_t DescribeInstanceUpgradeTypeRequest::GetDstMemory() const
{
    return m_dstMemory;
}

void DescribeInstanceUpgradeTypeRequest::SetDstMemory(const uint64_t& _dstMemory)
{
    m_dstMemory = _dstMemory;
    m_dstMemoryHasBeenSet = true;
}

bool DescribeInstanceUpgradeTypeRequest::DstMemoryHasBeenSet() const
{
    return m_dstMemoryHasBeenSet;
}

uint64_t DescribeInstanceUpgradeTypeRequest::GetDstDisk() const
{
    return m_dstDisk;
}

void DescribeInstanceUpgradeTypeRequest::SetDstDisk(const uint64_t& _dstDisk)
{
    m_dstDisk = _dstDisk;
    m_dstDiskHasBeenSet = true;
}

bool DescribeInstanceUpgradeTypeRequest::DstDiskHasBeenSet() const
{
    return m_dstDiskHasBeenSet;
}

string DescribeInstanceUpgradeTypeRequest::GetDstVersion() const
{
    return m_dstVersion;
}

void DescribeInstanceUpgradeTypeRequest::SetDstVersion(const string& _dstVersion)
{
    m_dstVersion = _dstVersion;
    m_dstVersionHasBeenSet = true;
}

bool DescribeInstanceUpgradeTypeRequest::DstVersionHasBeenSet() const
{
    return m_dstVersionHasBeenSet;
}

int64_t DescribeInstanceUpgradeTypeRequest::GetDstDeployMode() const
{
    return m_dstDeployMode;
}

void DescribeInstanceUpgradeTypeRequest::SetDstDeployMode(const int64_t& _dstDeployMode)
{
    m_dstDeployMode = _dstDeployMode;
    m_dstDeployModeHasBeenSet = true;
}

bool DescribeInstanceUpgradeTypeRequest::DstDeployModeHasBeenSet() const
{
    return m_dstDeployModeHasBeenSet;
}

int64_t DescribeInstanceUpgradeTypeRequest::GetDstProtectMode() const
{
    return m_dstProtectMode;
}

void DescribeInstanceUpgradeTypeRequest::SetDstProtectMode(const int64_t& _dstProtectMode)
{
    m_dstProtectMode = _dstProtectMode;
    m_dstProtectModeHasBeenSet = true;
}

bool DescribeInstanceUpgradeTypeRequest::DstProtectModeHasBeenSet() const
{
    return m_dstProtectModeHasBeenSet;
}

int64_t DescribeInstanceUpgradeTypeRequest::GetDstSlaveZone() const
{
    return m_dstSlaveZone;
}

void DescribeInstanceUpgradeTypeRequest::SetDstSlaveZone(const int64_t& _dstSlaveZone)
{
    m_dstSlaveZone = _dstSlaveZone;
    m_dstSlaveZoneHasBeenSet = true;
}

bool DescribeInstanceUpgradeTypeRequest::DstSlaveZoneHasBeenSet() const
{
    return m_dstSlaveZoneHasBeenSet;
}

int64_t DescribeInstanceUpgradeTypeRequest::GetDstBackupZone() const
{
    return m_dstBackupZone;
}

void DescribeInstanceUpgradeTypeRequest::SetDstBackupZone(const int64_t& _dstBackupZone)
{
    m_dstBackupZone = _dstBackupZone;
    m_dstBackupZoneHasBeenSet = true;
}

bool DescribeInstanceUpgradeTypeRequest::DstBackupZoneHasBeenSet() const
{
    return m_dstBackupZoneHasBeenSet;
}

string DescribeInstanceUpgradeTypeRequest::GetDstCdbType() const
{
    return m_dstCdbType;
}

void DescribeInstanceUpgradeTypeRequest::SetDstCdbType(const string& _dstCdbType)
{
    m_dstCdbType = _dstCdbType;
    m_dstCdbTypeHasBeenSet = true;
}

bool DescribeInstanceUpgradeTypeRequest::DstCdbTypeHasBeenSet() const
{
    return m_dstCdbTypeHasBeenSet;
}

int64_t DescribeInstanceUpgradeTypeRequest::GetDstZoneId() const
{
    return m_dstZoneId;
}

void DescribeInstanceUpgradeTypeRequest::SetDstZoneId(const int64_t& _dstZoneId)
{
    m_dstZoneId = _dstZoneId;
    m_dstZoneIdHasBeenSet = true;
}

bool DescribeInstanceUpgradeTypeRequest::DstZoneIdHasBeenSet() const
{
    return m_dstZoneIdHasBeenSet;
}

NodeDistribution DescribeInstanceUpgradeTypeRequest::GetNodeDistribution() const
{
    return m_nodeDistribution;
}

void DescribeInstanceUpgradeTypeRequest::SetNodeDistribution(const NodeDistribution& _nodeDistribution)
{
    m_nodeDistribution = _nodeDistribution;
    m_nodeDistributionHasBeenSet = true;
}

bool DescribeInstanceUpgradeTypeRequest::NodeDistributionHasBeenSet() const
{
    return m_nodeDistributionHasBeenSet;
}

ClusterTopology DescribeInstanceUpgradeTypeRequest::GetClusterTopology() const
{
    return m_clusterTopology;
}

void DescribeInstanceUpgradeTypeRequest::SetClusterTopology(const ClusterTopology& _clusterTopology)
{
    m_clusterTopology = _clusterTopology;
    m_clusterTopologyHasBeenSet = true;
}

bool DescribeInstanceUpgradeTypeRequest::ClusterTopologyHasBeenSet() const
{
    return m_clusterTopologyHasBeenSet;
}


