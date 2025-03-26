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

#include <tencentcloud/tke/v20180525/model/EksCi.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

EksCi::EksCi() :
    m_autoCreatedEipIdHasBeenSet(false),
    m_camRoleNameHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_cpuTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_eipAddressHasBeenSet(false),
    m_eksCiIdHasBeenSet(false),
    m_eksCiNameHasBeenSet(false),
    m_eksCiVolumeHasBeenSet(false),
    m_gpuCountHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_initContainersHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_persistStatusHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_restartPolicyHasBeenSet(false),
    m_securityContextHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_succeededTimeHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

CoreInternalOutcome EksCi::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoCreatedEipId") && !value["AutoCreatedEipId"].IsNull())
    {
        if (!value["AutoCreatedEipId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.AutoCreatedEipId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoCreatedEipId = string(value["AutoCreatedEipId"].GetString());
        m_autoCreatedEipIdHasBeenSet = true;
    }

    if (value.HasMember("CamRoleName") && !value["CamRoleName"].IsNull())
    {
        if (!value["CamRoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.CamRoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_camRoleName = string(value["CamRoleName"].GetString());
        m_camRoleNameHasBeenSet = true;
    }

    if (value.HasMember("Containers") && !value["Containers"].IsNull())
    {
        if (!value["Containers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EksCi.Containers` is not array type"));

        const rapidjson::Value &tmpValue = value["Containers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Container item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_containers.push_back(item);
        }
        m_containersHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.Cpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetDouble();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("CpuType") && !value["CpuType"].IsNull())
    {
        if (!value["CpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.CpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuType = string(value["CpuType"].GetString());
        m_cpuTypeHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("EipAddress") && !value["EipAddress"].IsNull())
    {
        if (!value["EipAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.EipAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipAddress = string(value["EipAddress"].GetString());
        m_eipAddressHasBeenSet = true;
    }

    if (value.HasMember("EksCiId") && !value["EksCiId"].IsNull())
    {
        if (!value["EksCiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.EksCiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eksCiId = string(value["EksCiId"].GetString());
        m_eksCiIdHasBeenSet = true;
    }

    if (value.HasMember("EksCiName") && !value["EksCiName"].IsNull())
    {
        if (!value["EksCiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.EksCiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eksCiName = string(value["EksCiName"].GetString());
        m_eksCiNameHasBeenSet = true;
    }

    if (value.HasMember("EksCiVolume") && !value["EksCiVolume"].IsNull())
    {
        if (!value["EksCiVolume"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.EksCiVolume` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eksCiVolume.Deserialize(value["EksCiVolume"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eksCiVolumeHasBeenSet = true;
    }

    if (value.HasMember("GpuCount") && !value["GpuCount"].IsNull())
    {
        if (!value["GpuCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.GpuCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuCount = value["GpuCount"].GetUint64();
        m_gpuCountHasBeenSet = true;
    }

    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.GpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuType = string(value["GpuType"].GetString());
        m_gpuTypeHasBeenSet = true;
    }

    if (value.HasMember("InitContainers") && !value["InitContainers"].IsNull())
    {
        if (!value["InitContainers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EksCi.InitContainers` is not array type"));

        const rapidjson::Value &tmpValue = value["InitContainers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Container item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_initContainers.push_back(item);
        }
        m_initContainersHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.Memory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetDouble();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("PersistStatus") && !value["PersistStatus"].IsNull())
    {
        if (!value["PersistStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.PersistStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_persistStatus = value["PersistStatus"].GetBool();
        m_persistStatusHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("RestartPolicy") && !value["RestartPolicy"].IsNull())
    {
        if (!value["RestartPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.RestartPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restartPolicy = string(value["RestartPolicy"].GetString());
        m_restartPolicyHasBeenSet = true;
    }

    if (value.HasMember("SecurityContext") && !value["SecurityContext"].IsNull())
    {
        if (!value["SecurityContext"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.SecurityContext` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_securityContext.Deserialize(value["SecurityContext"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_securityContextHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EksCi.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SucceededTime") && !value["SucceededTime"].IsNull())
    {
        if (!value["SucceededTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.SucceededTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_succeededTime = string(value["SucceededTime"].GetString());
        m_succeededTimeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksCi.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EksCi::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoCreatedEipIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCreatedEipId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoCreatedEipId.c_str(), allocator).Move(), allocator);
    }

    if (m_camRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamRoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_camRoleName.c_str(), allocator).Move(), allocator);
    }

    if (m_containersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Containers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_containers.begin(); itr != m_containers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_cpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_eipAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eipAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_eksCiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksCiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eksCiId.c_str(), allocator).Move(), allocator);
    }

    if (m_eksCiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksCiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eksCiName.c_str(), allocator).Move(), allocator);
    }

    if (m_eksCiVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksCiVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eksCiVolume.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gpuCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuCount, allocator);
    }

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_initContainersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitContainers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_initContainers.begin(); itr != m_initContainers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_persistStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersistStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_persistStatus, allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_restartPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restartPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_securityContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_securityContext.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_succeededTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SucceededTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_succeededTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

}


string EksCi::GetAutoCreatedEipId() const
{
    return m_autoCreatedEipId;
}

void EksCi::SetAutoCreatedEipId(const string& _autoCreatedEipId)
{
    m_autoCreatedEipId = _autoCreatedEipId;
    m_autoCreatedEipIdHasBeenSet = true;
}

bool EksCi::AutoCreatedEipIdHasBeenSet() const
{
    return m_autoCreatedEipIdHasBeenSet;
}

string EksCi::GetCamRoleName() const
{
    return m_camRoleName;
}

void EksCi::SetCamRoleName(const string& _camRoleName)
{
    m_camRoleName = _camRoleName;
    m_camRoleNameHasBeenSet = true;
}

bool EksCi::CamRoleNameHasBeenSet() const
{
    return m_camRoleNameHasBeenSet;
}

vector<Container> EksCi::GetContainers() const
{
    return m_containers;
}

void EksCi::SetContainers(const vector<Container>& _containers)
{
    m_containers = _containers;
    m_containersHasBeenSet = true;
}

bool EksCi::ContainersHasBeenSet() const
{
    return m_containersHasBeenSet;
}

double EksCi::GetCpu() const
{
    return m_cpu;
}

void EksCi::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool EksCi::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string EksCi::GetCpuType() const
{
    return m_cpuType;
}

void EksCi::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool EksCi::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}

string EksCi::GetCreationTime() const
{
    return m_creationTime;
}

void EksCi::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool EksCi::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string EksCi::GetEipAddress() const
{
    return m_eipAddress;
}

void EksCi::SetEipAddress(const string& _eipAddress)
{
    m_eipAddress = _eipAddress;
    m_eipAddressHasBeenSet = true;
}

bool EksCi::EipAddressHasBeenSet() const
{
    return m_eipAddressHasBeenSet;
}

string EksCi::GetEksCiId() const
{
    return m_eksCiId;
}

void EksCi::SetEksCiId(const string& _eksCiId)
{
    m_eksCiId = _eksCiId;
    m_eksCiIdHasBeenSet = true;
}

bool EksCi::EksCiIdHasBeenSet() const
{
    return m_eksCiIdHasBeenSet;
}

string EksCi::GetEksCiName() const
{
    return m_eksCiName;
}

void EksCi::SetEksCiName(const string& _eksCiName)
{
    m_eksCiName = _eksCiName;
    m_eksCiNameHasBeenSet = true;
}

bool EksCi::EksCiNameHasBeenSet() const
{
    return m_eksCiNameHasBeenSet;
}

EksCiVolume EksCi::GetEksCiVolume() const
{
    return m_eksCiVolume;
}

void EksCi::SetEksCiVolume(const EksCiVolume& _eksCiVolume)
{
    m_eksCiVolume = _eksCiVolume;
    m_eksCiVolumeHasBeenSet = true;
}

bool EksCi::EksCiVolumeHasBeenSet() const
{
    return m_eksCiVolumeHasBeenSet;
}

uint64_t EksCi::GetGpuCount() const
{
    return m_gpuCount;
}

void EksCi::SetGpuCount(const uint64_t& _gpuCount)
{
    m_gpuCount = _gpuCount;
    m_gpuCountHasBeenSet = true;
}

bool EksCi::GpuCountHasBeenSet() const
{
    return m_gpuCountHasBeenSet;
}

string EksCi::GetGpuType() const
{
    return m_gpuType;
}

void EksCi::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool EksCi::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

vector<Container> EksCi::GetInitContainers() const
{
    return m_initContainers;
}

void EksCi::SetInitContainers(const vector<Container>& _initContainers)
{
    m_initContainers = _initContainers;
    m_initContainersHasBeenSet = true;
}

bool EksCi::InitContainersHasBeenSet() const
{
    return m_initContainersHasBeenSet;
}

double EksCi::GetMemory() const
{
    return m_memory;
}

void EksCi::SetMemory(const double& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool EksCi::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

bool EksCi::GetPersistStatus() const
{
    return m_persistStatus;
}

void EksCi::SetPersistStatus(const bool& _persistStatus)
{
    m_persistStatus = _persistStatus;
    m_persistStatusHasBeenSet = true;
}

bool EksCi::PersistStatusHasBeenSet() const
{
    return m_persistStatusHasBeenSet;
}

string EksCi::GetPrivateIp() const
{
    return m_privateIp;
}

void EksCi::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool EksCi::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string EksCi::GetRestartPolicy() const
{
    return m_restartPolicy;
}

void EksCi::SetRestartPolicy(const string& _restartPolicy)
{
    m_restartPolicy = _restartPolicy;
    m_restartPolicyHasBeenSet = true;
}

bool EksCi::RestartPolicyHasBeenSet() const
{
    return m_restartPolicyHasBeenSet;
}

SecurityContext EksCi::GetSecurityContext() const
{
    return m_securityContext;
}

void EksCi::SetSecurityContext(const SecurityContext& _securityContext)
{
    m_securityContext = _securityContext;
    m_securityContextHasBeenSet = true;
}

bool EksCi::SecurityContextHasBeenSet() const
{
    return m_securityContextHasBeenSet;
}

vector<string> EksCi::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void EksCi::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool EksCi::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string EksCi::GetStatus() const
{
    return m_status;
}

void EksCi::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EksCi::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EksCi::GetSubnetId() const
{
    return m_subnetId;
}

void EksCi::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool EksCi::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string EksCi::GetSucceededTime() const
{
    return m_succeededTime;
}

void EksCi::SetSucceededTime(const string& _succeededTime)
{
    m_succeededTime = _succeededTime;
    m_succeededTimeHasBeenSet = true;
}

bool EksCi::SucceededTimeHasBeenSet() const
{
    return m_succeededTimeHasBeenSet;
}

string EksCi::GetVpcId() const
{
    return m_vpcId;
}

void EksCi::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool EksCi::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

