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

#include <tencentcloud/tke/v20180525/model/CreateEKSContainerInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CreateEKSContainerInstancesRequest::CreateEKSContainerInstancesRequest() :
    m_containersHasBeenSet(false),
    m_eksCiNameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_restartPolicyHasBeenSet(false),
    m_imageRegistryCredentialsHasBeenSet(false),
    m_eksCiVolumeHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_initContainersHasBeenSet(false),
    m_dnsConfigHasBeenSet(false),
    m_existedEipIdsHasBeenSet(false),
    m_autoCreateEipAttributeHasBeenSet(false),
    m_autoCreateEipHasBeenSet(false),
    m_cpuTypeHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_gpuCountHasBeenSet(false),
    m_camRoleNameHasBeenSet(false)
{
}

string CreateEKSContainerInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_containersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Containers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_containers.begin(); itr != m_containers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_eksCiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksCiName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eksCiName.c_str(), allocator).Move(), allocator);
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

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_restartPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_restartPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_imageRegistryCredentialsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRegistryCredentials";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageRegistryCredentials.begin(); itr != m_imageRegistryCredentials.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_eksCiVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksCiVolume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eksCiVolume.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicas, allocator);
    }

    if (m_initContainersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitContainers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_initContainers.begin(); itr != m_initContainers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dnsConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dnsConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_existedEipIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExistedEipIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_existedEipIds.begin(); itr != m_existedEipIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoCreateEipAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCreateEipAttribute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoCreateEipAttribute.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoCreateEipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCreateEip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoCreateEip, allocator);
    }

    if (m_cpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gpuCount, allocator);
    }

    if (m_camRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamRoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_camRoleName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Container> CreateEKSContainerInstancesRequest::GetContainers() const
{
    return m_containers;
}

void CreateEKSContainerInstancesRequest::SetContainers(const vector<Container>& _containers)
{
    m_containers = _containers;
    m_containersHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::ContainersHasBeenSet() const
{
    return m_containersHasBeenSet;
}

string CreateEKSContainerInstancesRequest::GetEksCiName() const
{
    return m_eksCiName;
}

void CreateEKSContainerInstancesRequest::SetEksCiName(const string& _eksCiName)
{
    m_eksCiName = _eksCiName;
    m_eksCiNameHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::EksCiNameHasBeenSet() const
{
    return m_eksCiNameHasBeenSet;
}

vector<string> CreateEKSContainerInstancesRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateEKSContainerInstancesRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string CreateEKSContainerInstancesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateEKSContainerInstancesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateEKSContainerInstancesRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateEKSContainerInstancesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

double CreateEKSContainerInstancesRequest::GetMemory() const
{
    return m_memory;
}

void CreateEKSContainerInstancesRequest::SetMemory(const double& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

double CreateEKSContainerInstancesRequest::GetCpu() const
{
    return m_cpu;
}

void CreateEKSContainerInstancesRequest::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string CreateEKSContainerInstancesRequest::GetRestartPolicy() const
{
    return m_restartPolicy;
}

void CreateEKSContainerInstancesRequest::SetRestartPolicy(const string& _restartPolicy)
{
    m_restartPolicy = _restartPolicy;
    m_restartPolicyHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::RestartPolicyHasBeenSet() const
{
    return m_restartPolicyHasBeenSet;
}

vector<ImageRegistryCredential> CreateEKSContainerInstancesRequest::GetImageRegistryCredentials() const
{
    return m_imageRegistryCredentials;
}

void CreateEKSContainerInstancesRequest::SetImageRegistryCredentials(const vector<ImageRegistryCredential>& _imageRegistryCredentials)
{
    m_imageRegistryCredentials = _imageRegistryCredentials;
    m_imageRegistryCredentialsHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::ImageRegistryCredentialsHasBeenSet() const
{
    return m_imageRegistryCredentialsHasBeenSet;
}

EksCiVolume CreateEKSContainerInstancesRequest::GetEksCiVolume() const
{
    return m_eksCiVolume;
}

void CreateEKSContainerInstancesRequest::SetEksCiVolume(const EksCiVolume& _eksCiVolume)
{
    m_eksCiVolume = _eksCiVolume;
    m_eksCiVolumeHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::EksCiVolumeHasBeenSet() const
{
    return m_eksCiVolumeHasBeenSet;
}

int64_t CreateEKSContainerInstancesRequest::GetReplicas() const
{
    return m_replicas;
}

void CreateEKSContainerInstancesRequest::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

vector<Container> CreateEKSContainerInstancesRequest::GetInitContainers() const
{
    return m_initContainers;
}

void CreateEKSContainerInstancesRequest::SetInitContainers(const vector<Container>& _initContainers)
{
    m_initContainers = _initContainers;
    m_initContainersHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::InitContainersHasBeenSet() const
{
    return m_initContainersHasBeenSet;
}

DNSConfig CreateEKSContainerInstancesRequest::GetDnsConfig() const
{
    return m_dnsConfig;
}

void CreateEKSContainerInstancesRequest::SetDnsConfig(const DNSConfig& _dnsConfig)
{
    m_dnsConfig = _dnsConfig;
    m_dnsConfigHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::DnsConfigHasBeenSet() const
{
    return m_dnsConfigHasBeenSet;
}

vector<string> CreateEKSContainerInstancesRequest::GetExistedEipIds() const
{
    return m_existedEipIds;
}

void CreateEKSContainerInstancesRequest::SetExistedEipIds(const vector<string>& _existedEipIds)
{
    m_existedEipIds = _existedEipIds;
    m_existedEipIdsHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::ExistedEipIdsHasBeenSet() const
{
    return m_existedEipIdsHasBeenSet;
}

EipAttribute CreateEKSContainerInstancesRequest::GetAutoCreateEipAttribute() const
{
    return m_autoCreateEipAttribute;
}

void CreateEKSContainerInstancesRequest::SetAutoCreateEipAttribute(const EipAttribute& _autoCreateEipAttribute)
{
    m_autoCreateEipAttribute = _autoCreateEipAttribute;
    m_autoCreateEipAttributeHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::AutoCreateEipAttributeHasBeenSet() const
{
    return m_autoCreateEipAttributeHasBeenSet;
}

bool CreateEKSContainerInstancesRequest::GetAutoCreateEip() const
{
    return m_autoCreateEip;
}

void CreateEKSContainerInstancesRequest::SetAutoCreateEip(const bool& _autoCreateEip)
{
    m_autoCreateEip = _autoCreateEip;
    m_autoCreateEipHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::AutoCreateEipHasBeenSet() const
{
    return m_autoCreateEipHasBeenSet;
}

string CreateEKSContainerInstancesRequest::GetCpuType() const
{
    return m_cpuType;
}

void CreateEKSContainerInstancesRequest::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}

string CreateEKSContainerInstancesRequest::GetGpuType() const
{
    return m_gpuType;
}

void CreateEKSContainerInstancesRequest::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

uint64_t CreateEKSContainerInstancesRequest::GetGpuCount() const
{
    return m_gpuCount;
}

void CreateEKSContainerInstancesRequest::SetGpuCount(const uint64_t& _gpuCount)
{
    m_gpuCount = _gpuCount;
    m_gpuCountHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::GpuCountHasBeenSet() const
{
    return m_gpuCountHasBeenSet;
}

string CreateEKSContainerInstancesRequest::GetCamRoleName() const
{
    return m_camRoleName;
}

void CreateEKSContainerInstancesRequest::SetCamRoleName(const string& _camRoleName)
{
    m_camRoleName = _camRoleName;
    m_camRoleNameHasBeenSet = true;
}

bool CreateEKSContainerInstancesRequest::CamRoleNameHasBeenSet() const
{
    return m_camRoleNameHasBeenSet;
}


