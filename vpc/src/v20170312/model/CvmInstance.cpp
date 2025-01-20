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

#include <tencentcloud/vpc/v20170312/model/CvmInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CvmInstance::CvmInstance() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_eniLimitHasBeenSet(false),
    m_eniIpLimitHasBeenSet(false),
    m_instanceEniCountHasBeenSet(false)
{
}

CoreInternalOutcome CvmInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CvmInstance.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CvmInstance.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CvmInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CvmInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CvmInstance.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CvmInstance.CPU` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetUint64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CvmInstance.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CvmInstance.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CvmInstance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("EniLimit") && !value["EniLimit"].IsNull())
    {
        if (!value["EniLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CvmInstance.EniLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eniLimit = value["EniLimit"].GetUint64();
        m_eniLimitHasBeenSet = true;
    }

    if (value.HasMember("EniIpLimit") && !value["EniIpLimit"].IsNull())
    {
        if (!value["EniIpLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CvmInstance.EniIpLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eniIpLimit = value["EniIpLimit"].GetUint64();
        m_eniIpLimitHasBeenSet = true;
    }

    if (value.HasMember("InstanceEniCount") && !value["InstanceEniCount"].IsNull())
    {
        if (!value["InstanceEniCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CvmInstance.InstanceEniCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceEniCount = value["InstanceEniCount"].GetUint64();
        m_instanceEniCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CvmInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
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

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_eniLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eniLimit, allocator);
    }

    if (m_eniIpLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniIpLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eniIpLimit, allocator);
    }

    if (m_instanceEniCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceEniCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceEniCount, allocator);
    }

}


string CvmInstance::GetVpcId() const
{
    return m_vpcId;
}

void CvmInstance::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CvmInstance::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CvmInstance::GetSubnetId() const
{
    return m_subnetId;
}

void CvmInstance::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CvmInstance::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CvmInstance::GetInstanceId() const
{
    return m_instanceId;
}

void CvmInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CvmInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CvmInstance::GetInstanceName() const
{
    return m_instanceName;
}

void CvmInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CvmInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CvmInstance::GetInstanceState() const
{
    return m_instanceState;
}

void CvmInstance::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool CvmInstance::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

uint64_t CvmInstance::GetCPU() const
{
    return m_cPU;
}

void CvmInstance::SetCPU(const uint64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool CvmInstance::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t CvmInstance::GetMemory() const
{
    return m_memory;
}

void CvmInstance::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CvmInstance::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string CvmInstance::GetCreatedTime() const
{
    return m_createdTime;
}

void CvmInstance::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool CvmInstance::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string CvmInstance::GetInstanceType() const
{
    return m_instanceType;
}

void CvmInstance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CvmInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t CvmInstance::GetEniLimit() const
{
    return m_eniLimit;
}

void CvmInstance::SetEniLimit(const uint64_t& _eniLimit)
{
    m_eniLimit = _eniLimit;
    m_eniLimitHasBeenSet = true;
}

bool CvmInstance::EniLimitHasBeenSet() const
{
    return m_eniLimitHasBeenSet;
}

uint64_t CvmInstance::GetEniIpLimit() const
{
    return m_eniIpLimit;
}

void CvmInstance::SetEniIpLimit(const uint64_t& _eniIpLimit)
{
    m_eniIpLimit = _eniIpLimit;
    m_eniIpLimitHasBeenSet = true;
}

bool CvmInstance::EniIpLimitHasBeenSet() const
{
    return m_eniIpLimitHasBeenSet;
}

uint64_t CvmInstance::GetInstanceEniCount() const
{
    return m_instanceEniCount;
}

void CvmInstance::SetInstanceEniCount(const uint64_t& _instanceEniCount)
{
    m_instanceEniCount = _instanceEniCount;
    m_instanceEniCountHasBeenSet = true;
}

bool CvmInstance::InstanceEniCountHasBeenSet() const
{
    return m_instanceEniCountHasBeenSet;
}

