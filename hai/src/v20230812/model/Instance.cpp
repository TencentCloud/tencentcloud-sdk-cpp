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

#include <tencentcloud/hai/v20230812/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

Instance::Instance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_bundleNameHasBeenSet(false),
    m_gPUCountHasBeenSet(false),
    m_gPUPerformanceHasBeenSet(false),
    m_gPUMemoryHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_latestOperationHasBeenSet(false),
    m_latestOperationStateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_maxOutBandwidthHasBeenSet(false),
    m_maxFreeTrafficHasBeenSet(false),
    m_configurationEnvironmentHasBeenSet(false),
    m_loginServicesHasBeenSet(false),
    m_oSTypeHasBeenSet(false)
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

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("BundleName") && !value["BundleName"].IsNull())
    {
        if (!value["BundleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.BundleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleName = string(value["BundleName"].GetString());
        m_bundleNameHasBeenSet = true;
    }

    if (value.HasMember("GPUCount") && !value["GPUCount"].IsNull())
    {
        if (!value["GPUCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.GPUCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gPUCount = value["GPUCount"].GetUint64();
        m_gPUCountHasBeenSet = true;
    }

    if (value.HasMember("GPUPerformance") && !value["GPUPerformance"].IsNull())
    {
        if (!value["GPUPerformance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.GPUPerformance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gPUPerformance = string(value["GPUPerformance"].GetString());
        m_gPUPerformanceHasBeenSet = true;
    }

    if (value.HasMember("GPUMemory") && !value["GPUMemory"].IsNull())
    {
        if (!value["GPUMemory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.GPUMemory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gPUMemory = string(value["GPUMemory"].GetString());
        m_gPUMemoryHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.CPU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = string(value["CPU"].GetString());
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Memory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memory = string(value["Memory"].GetString());
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Instance.PrivateIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpAddresses.push_back((*itr).GetString());
        }
        m_privateIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddresses") && !value["PublicIpAddresses"].IsNull())
    {
        if (!value["PublicIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Instance.PublicIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpAddresses.push_back((*itr).GetString());
        }
        m_publicIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Instance.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("LatestOperation") && !value["LatestOperation"].IsNull())
    {
        if (!value["LatestOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LatestOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperation = string(value["LatestOperation"].GetString());
        m_latestOperationHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationState") && !value["LatestOperationState"].IsNull())
    {
        if (!value["LatestOperationState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LatestOperationState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationState = string(value["LatestOperationState"].GetString());
        m_latestOperationStateHasBeenSet = true;
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

    if (value.HasMember("MaxOutBandwidth") && !value["MaxOutBandwidth"].IsNull())
    {
        if (!value["MaxOutBandwidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.MaxOutBandwidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxOutBandwidth = string(value["MaxOutBandwidth"].GetString());
        m_maxOutBandwidthHasBeenSet = true;
    }

    if (value.HasMember("MaxFreeTraffic") && !value["MaxFreeTraffic"].IsNull())
    {
        if (!value["MaxFreeTraffic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.MaxFreeTraffic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxFreeTraffic = string(value["MaxFreeTraffic"].GetString());
        m_maxFreeTrafficHasBeenSet = true;
    }

    if (value.HasMember("ConfigurationEnvironment") && !value["ConfigurationEnvironment"].IsNull())
    {
        if (!value["ConfigurationEnvironment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ConfigurationEnvironment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configurationEnvironment = string(value["ConfigurationEnvironment"].GetString());
        m_configurationEnvironmentHasBeenSet = true;
    }

    if (value.HasMember("LoginServices") && !value["LoginServices"].IsNull())
    {
        if (!value["LoginServices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Instance.LoginServices` is not array type"));

        const rapidjson::Value &tmpValue = value["LoginServices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LoginService item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_loginServices.push_back(item);
        }
        m_loginServicesHasBeenSet = true;
    }

    if (value.HasMember("OSType") && !value["OSType"].IsNull())
    {
        if (!value["OSType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.OSType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oSType = string(value["OSType"].GetString());
        m_oSTypeHasBeenSet = true;
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

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleName.c_str(), allocator).Move(), allocator);
    }

    if (m_gPUCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gPUCount, allocator);
    }

    if (m_gPUPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUPerformance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gPUPerformance.c_str(), allocator).Move(), allocator);
    }

    if (m_gPUMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gPUMemory.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cPU.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memory.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privateIpAddresses.begin(); itr != m_privateIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_publicIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicIpAddresses.begin(); itr != m_publicIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_latestOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperationState.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_maxOutBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxOutBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxOutBandwidth.c_str(), allocator).Move(), allocator);
    }

    if (m_maxFreeTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFreeTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxFreeTraffic.c_str(), allocator).Move(), allocator);
    }

    if (m_configurationEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigurationEnvironment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configurationEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_loginServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginServices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_loginServices.begin(); itr != m_loginServices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_oSTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OSType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oSType.c_str(), allocator).Move(), allocator);
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

string Instance::GetInstanceState() const
{
    return m_instanceState;
}

void Instance::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool Instance::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string Instance::GetApplicationName() const
{
    return m_applicationName;
}

void Instance::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool Instance::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string Instance::GetBundleName() const
{
    return m_bundleName;
}

void Instance::SetBundleName(const string& _bundleName)
{
    m_bundleName = _bundleName;
    m_bundleNameHasBeenSet = true;
}

bool Instance::BundleNameHasBeenSet() const
{
    return m_bundleNameHasBeenSet;
}

uint64_t Instance::GetGPUCount() const
{
    return m_gPUCount;
}

void Instance::SetGPUCount(const uint64_t& _gPUCount)
{
    m_gPUCount = _gPUCount;
    m_gPUCountHasBeenSet = true;
}

bool Instance::GPUCountHasBeenSet() const
{
    return m_gPUCountHasBeenSet;
}

string Instance::GetGPUPerformance() const
{
    return m_gPUPerformance;
}

void Instance::SetGPUPerformance(const string& _gPUPerformance)
{
    m_gPUPerformance = _gPUPerformance;
    m_gPUPerformanceHasBeenSet = true;
}

bool Instance::GPUPerformanceHasBeenSet() const
{
    return m_gPUPerformanceHasBeenSet;
}

string Instance::GetGPUMemory() const
{
    return m_gPUMemory;
}

void Instance::SetGPUMemory(const string& _gPUMemory)
{
    m_gPUMemory = _gPUMemory;
    m_gPUMemoryHasBeenSet = true;
}

bool Instance::GPUMemoryHasBeenSet() const
{
    return m_gPUMemoryHasBeenSet;
}

string Instance::GetCPU() const
{
    return m_cPU;
}

void Instance::SetCPU(const string& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool Instance::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

string Instance::GetMemory() const
{
    return m_memory;
}

void Instance::SetMemory(const string& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool Instance::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

SystemDisk Instance::GetSystemDisk() const
{
    return m_systemDisk;
}

void Instance::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool Instance::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<string> Instance::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void Instance::SetPrivateIpAddresses(const vector<string>& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool Instance::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

vector<string> Instance::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void Instance::SetPublicIpAddresses(const vector<string>& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool Instance::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

vector<string> Instance::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void Instance::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool Instance::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string Instance::GetLatestOperation() const
{
    return m_latestOperation;
}

void Instance::SetLatestOperation(const string& _latestOperation)
{
    m_latestOperation = _latestOperation;
    m_latestOperationHasBeenSet = true;
}

bool Instance::LatestOperationHasBeenSet() const
{
    return m_latestOperationHasBeenSet;
}

string Instance::GetLatestOperationState() const
{
    return m_latestOperationState;
}

void Instance::SetLatestOperationState(const string& _latestOperationState)
{
    m_latestOperationState = _latestOperationState;
    m_latestOperationStateHasBeenSet = true;
}

bool Instance::LatestOperationStateHasBeenSet() const
{
    return m_latestOperationStateHasBeenSet;
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

string Instance::GetMaxOutBandwidth() const
{
    return m_maxOutBandwidth;
}

void Instance::SetMaxOutBandwidth(const string& _maxOutBandwidth)
{
    m_maxOutBandwidth = _maxOutBandwidth;
    m_maxOutBandwidthHasBeenSet = true;
}

bool Instance::MaxOutBandwidthHasBeenSet() const
{
    return m_maxOutBandwidthHasBeenSet;
}

string Instance::GetMaxFreeTraffic() const
{
    return m_maxFreeTraffic;
}

void Instance::SetMaxFreeTraffic(const string& _maxFreeTraffic)
{
    m_maxFreeTraffic = _maxFreeTraffic;
    m_maxFreeTrafficHasBeenSet = true;
}

bool Instance::MaxFreeTrafficHasBeenSet() const
{
    return m_maxFreeTrafficHasBeenSet;
}

string Instance::GetConfigurationEnvironment() const
{
    return m_configurationEnvironment;
}

void Instance::SetConfigurationEnvironment(const string& _configurationEnvironment)
{
    m_configurationEnvironment = _configurationEnvironment;
    m_configurationEnvironmentHasBeenSet = true;
}

bool Instance::ConfigurationEnvironmentHasBeenSet() const
{
    return m_configurationEnvironmentHasBeenSet;
}

vector<LoginService> Instance::GetLoginServices() const
{
    return m_loginServices;
}

void Instance::SetLoginServices(const vector<LoginService>& _loginServices)
{
    m_loginServices = _loginServices;
    m_loginServicesHasBeenSet = true;
}

bool Instance::LoginServicesHasBeenSet() const
{
    return m_loginServicesHasBeenSet;
}

string Instance::GetOSType() const
{
    return m_oSType;
}

void Instance::SetOSType(const string& _oSType)
{
    m_oSType = _oSType;
    m_oSTypeHasBeenSet = true;
}

bool Instance::OSTypeHasBeenSet() const
{
    return m_oSTypeHasBeenSet;
}

