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

#include <tencentcloud/vdb/v20230616/model/CreateInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vdb::V20230616::Model;
using namespace std;

CreateInstanceRequest::CreateInstanceRequest() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_payPeriodHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_slaveZonesHasBeenSet(false),
    m_isNoExpiredHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_briefHasBeenSet(false),
    m_chiefHasBeenSet(false),
    m_dBAHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_workerNodeNumHasBeenSet(false)
{
}

string CreateInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
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

    if (m_payPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payPeriod, allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
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

    if (m_projectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Project";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_project.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_slaveZones.begin(); itr != m_slaveZones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isNoExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNoExpired";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNoExpired, allocator);
    }

    if (m_engineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_briefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brief";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brief.c_str(), allocator).Move(), allocator);
    }

    if (m_chiefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Chief";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chief.c_str(), allocator).Move(), allocator);
    }

    if (m_dBAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBA";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBA.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
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

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_workerNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerNodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workerNodeNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t CreateInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateInstanceRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string CreateInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<string> CreateInstanceRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateInstanceRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateInstanceRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

int64_t CreateInstanceRequest::GetPayPeriod() const
{
    return m_payPeriod;
}

void CreateInstanceRequest::SetPayPeriod(const int64_t& _payPeriod)
{
    m_payPeriod = _payPeriod;
    m_payPeriodHasBeenSet = true;
}

bool CreateInstanceRequest::PayPeriodHasBeenSet() const
{
    return m_payPeriodHasBeenSet;
}

int64_t CreateInstanceRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void CreateInstanceRequest::SetAutoRenew(const int64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool CreateInstanceRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

string CreateInstanceRequest::GetParams() const
{
    return m_params;
}

void CreateInstanceRequest::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool CreateInstanceRequest::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

vector<Tag> CreateInstanceRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateInstanceRequest::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateInstanceRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CreateInstanceRequest::GetProject() const
{
    return m_project;
}

void CreateInstanceRequest::SetProject(const string& _project)
{
    m_project = _project;
    m_projectHasBeenSet = true;
}

bool CreateInstanceRequest::ProjectHasBeenSet() const
{
    return m_projectHasBeenSet;
}

string CreateInstanceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateInstanceRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateInstanceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CreateInstanceRequest::GetMode() const
{
    return m_mode;
}

void CreateInstanceRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreateInstanceRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t CreateInstanceRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateInstanceRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateInstanceRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string CreateInstanceRequest::GetNetworkType() const
{
    return m_networkType;
}

void CreateInstanceRequest::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool CreateInstanceRequest::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string CreateInstanceRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateInstanceRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateInstanceRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<CreateInstancesComponent> CreateInstanceRequest::GetComponents() const
{
    return m_components;
}

void CreateInstanceRequest::SetComponents(const vector<CreateInstancesComponent>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool CreateInstanceRequest::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

string CreateInstanceRequest::GetZone() const
{
    return m_zone;
}

void CreateInstanceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateInstanceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<string> CreateInstanceRequest::GetSlaveZones() const
{
    return m_slaveZones;
}

void CreateInstanceRequest::SetSlaveZones(const vector<string>& _slaveZones)
{
    m_slaveZones = _slaveZones;
    m_slaveZonesHasBeenSet = true;
}

bool CreateInstanceRequest::SlaveZonesHasBeenSet() const
{
    return m_slaveZonesHasBeenSet;
}

bool CreateInstanceRequest::GetIsNoExpired() const
{
    return m_isNoExpired;
}

void CreateInstanceRequest::SetIsNoExpired(const bool& _isNoExpired)
{
    m_isNoExpired = _isNoExpired;
    m_isNoExpiredHasBeenSet = true;
}

bool CreateInstanceRequest::IsNoExpiredHasBeenSet() const
{
    return m_isNoExpiredHasBeenSet;
}

string CreateInstanceRequest::GetEngineName() const
{
    return m_engineName;
}

void CreateInstanceRequest::SetEngineName(const string& _engineName)
{
    m_engineName = _engineName;
    m_engineNameHasBeenSet = true;
}

bool CreateInstanceRequest::EngineNameHasBeenSet() const
{
    return m_engineNameHasBeenSet;
}

string CreateInstanceRequest::GetEngineVersion() const
{
    return m_engineVersion;
}

void CreateInstanceRequest::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool CreateInstanceRequest::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

string CreateInstanceRequest::GetBrief() const
{
    return m_brief;
}

void CreateInstanceRequest::SetBrief(const string& _brief)
{
    m_brief = _brief;
    m_briefHasBeenSet = true;
}

bool CreateInstanceRequest::BriefHasBeenSet() const
{
    return m_briefHasBeenSet;
}

string CreateInstanceRequest::GetChief() const
{
    return m_chief;
}

void CreateInstanceRequest::SetChief(const string& _chief)
{
    m_chief = _chief;
    m_chiefHasBeenSet = true;
}

bool CreateInstanceRequest::ChiefHasBeenSet() const
{
    return m_chiefHasBeenSet;
}

string CreateInstanceRequest::GetDBA() const
{
    return m_dBA;
}

void CreateInstanceRequest::SetDBA(const string& _dBA)
{
    m_dBA = _dBA;
    m_dBAHasBeenSet = true;
}

bool CreateInstanceRequest::DBAHasBeenSet() const
{
    return m_dBAHasBeenSet;
}

string CreateInstanceRequest::GetNodeType() const
{
    return m_nodeType;
}

void CreateInstanceRequest::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool CreateInstanceRequest::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t CreateInstanceRequest::GetCpu() const
{
    return m_cpu;
}

void CreateInstanceRequest::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateInstanceRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t CreateInstanceRequest::GetMemory() const
{
    return m_memory;
}

void CreateInstanceRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateInstanceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t CreateInstanceRequest::GetDiskSize() const
{
    return m_diskSize;
}

void CreateInstanceRequest::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CreateInstanceRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

uint64_t CreateInstanceRequest::GetWorkerNodeNum() const
{
    return m_workerNodeNum;
}

void CreateInstanceRequest::SetWorkerNodeNum(const uint64_t& _workerNodeNum)
{
    m_workerNodeNum = _workerNodeNum;
    m_workerNodeNumHasBeenSet = true;
}

bool CreateInstanceRequest::WorkerNodeNumHasBeenSet() const
{
    return m_workerNodeNumHasBeenSet;
}


