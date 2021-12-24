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

#include <tencentcloud/iecp/v20210914/model/Container.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

Container::Container() :
    m_nameHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageVersionHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_volumeMountsHasBeenSet(false),
    m_cpuRequestHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_memoryRequestHasBeenSet(false),
    m_memoryLimitHasBeenSet(false),
    m_memoryUnitHasBeenSet(false),
    m_gpuLimitHasBeenSet(false),
    m_resourceMapCloudHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_workingDirHasBeenSet(false),
    m_commandsHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_securityContextHasBeenSet(false),
    m_readinessProbeHasBeenSet(false)
{
}

CoreInternalOutcome Container::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageVersion") && !value["ImageVersion"].IsNull())
    {
        if (!value["ImageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.ImageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageVersion = string(value["ImageVersion"].GetString());
        m_imageVersionHasBeenSet = true;
    }

    if (value.HasMember("ImagePullPolicy") && !value["ImagePullPolicy"].IsNull())
    {
        if (!value["ImagePullPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.ImagePullPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullPolicy = string(value["ImagePullPolicy"].GetString());
        m_imagePullPolicyHasBeenSet = true;
    }

    if (value.HasMember("VolumeMounts") && !value["VolumeMounts"].IsNull())
    {
        if (!value["VolumeMounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Container.VolumeMounts` is not array type"));

        const rapidjson::Value &tmpValue = value["VolumeMounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VolumeMount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_volumeMounts.push_back(item);
        }
        m_volumeMountsHasBeenSet = true;
    }

    if (value.HasMember("CpuRequest") && !value["CpuRequest"].IsNull())
    {
        if (!value["CpuRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.CpuRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuRequest = string(value["CpuRequest"].GetString());
        m_cpuRequestHasBeenSet = true;
    }

    if (value.HasMember("CpuLimit") && !value["CpuLimit"].IsNull())
    {
        if (!value["CpuLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.CpuLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLimit = string(value["CpuLimit"].GetString());
        m_cpuLimitHasBeenSet = true;
    }

    if (value.HasMember("MemoryRequest") && !value["MemoryRequest"].IsNull())
    {
        if (!value["MemoryRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.MemoryRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memoryRequest = string(value["MemoryRequest"].GetString());
        m_memoryRequestHasBeenSet = true;
    }

    if (value.HasMember("MemoryLimit") && !value["MemoryLimit"].IsNull())
    {
        if (!value["MemoryLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.MemoryLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memoryLimit = string(value["MemoryLimit"].GetString());
        m_memoryLimitHasBeenSet = true;
    }

    if (value.HasMember("MemoryUnit") && !value["MemoryUnit"].IsNull())
    {
        if (!value["MemoryUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.MemoryUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memoryUnit = string(value["MemoryUnit"].GetString());
        m_memoryUnitHasBeenSet = true;
    }

    if (value.HasMember("GpuLimit") && !value["GpuLimit"].IsNull())
    {
        if (!value["GpuLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.GpuLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuLimit = string(value["GpuLimit"].GetString());
        m_gpuLimitHasBeenSet = true;
    }

    if (value.HasMember("ResourceMapCloud") && !value["ResourceMapCloud"].IsNull())
    {
        if (!value["ResourceMapCloud"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Container.ResourceMapCloud` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceMapCloud"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueObj item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceMapCloud.push_back(item);
        }
        m_resourceMapCloudHasBeenSet = true;
    }

    if (value.HasMember("Envs") && !value["Envs"].IsNull())
    {
        if (!value["Envs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Container.Envs` is not array type"));

        const rapidjson::Value &tmpValue = value["Envs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Env item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envs.push_back(item);
        }
        m_envsHasBeenSet = true;
    }

    if (value.HasMember("WorkingDir") && !value["WorkingDir"].IsNull())
    {
        if (!value["WorkingDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.WorkingDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workingDir = string(value["WorkingDir"].GetString());
        m_workingDirHasBeenSet = true;
    }

    if (value.HasMember("Commands") && !value["Commands"].IsNull())
    {
        if (!value["Commands"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Container.Commands` is not array type"));

        const rapidjson::Value &tmpValue = value["Commands"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_commands.push_back((*itr).GetString());
        }
        m_commandsHasBeenSet = true;
    }

    if (value.HasMember("Args") && !value["Args"].IsNull())
    {
        if (!value["Args"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Container.Args` is not array type"));

        const rapidjson::Value &tmpValue = value["Args"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_args.push_back((*itr).GetString());
        }
        m_argsHasBeenSet = true;
    }

    if (value.HasMember("SecurityContext") && !value["SecurityContext"].IsNull())
    {
        if (!value["SecurityContext"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Container.SecurityContext` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_securityContext.Deserialize(value["SecurityContext"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_securityContextHasBeenSet = true;
    }

    if (value.HasMember("ReadinessProbe") && !value["ReadinessProbe"].IsNull())
    {
        if (!value["ReadinessProbe"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Container.ReadinessProbe` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_readinessProbe.Deserialize(value["ReadinessProbe"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_readinessProbeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Container::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imagePullPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeMountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumeMounts.begin(); itr != m_volumeMounts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memoryRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memoryLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memoryUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceMapCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceMapCloud";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceMapCloud.begin(); itr != m_resourceMapCloud.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_envsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Envs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envs.begin(); itr != m_envs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_workingDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkingDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workingDir.c_str(), allocator).Move(), allocator);
    }

    if (m_commandsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Commands";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_commands.begin(); itr != m_commands.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_argsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_args.begin(); itr != m_args.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_securityContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_securityContext.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_readinessProbeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadinessProbe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_readinessProbe.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Container::GetName() const
{
    return m_name;
}

void Container::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Container::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Container::GetImageName() const
{
    return m_imageName;
}

void Container::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool Container::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string Container::GetImageVersion() const
{
    return m_imageVersion;
}

void Container::SetImageVersion(const string& _imageVersion)
{
    m_imageVersion = _imageVersion;
    m_imageVersionHasBeenSet = true;
}

bool Container::ImageVersionHasBeenSet() const
{
    return m_imageVersionHasBeenSet;
}

string Container::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void Container::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool Container::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

vector<VolumeMount> Container::GetVolumeMounts() const
{
    return m_volumeMounts;
}

void Container::SetVolumeMounts(const vector<VolumeMount>& _volumeMounts)
{
    m_volumeMounts = _volumeMounts;
    m_volumeMountsHasBeenSet = true;
}

bool Container::VolumeMountsHasBeenSet() const
{
    return m_volumeMountsHasBeenSet;
}

string Container::GetCpuRequest() const
{
    return m_cpuRequest;
}

void Container::SetCpuRequest(const string& _cpuRequest)
{
    m_cpuRequest = _cpuRequest;
    m_cpuRequestHasBeenSet = true;
}

bool Container::CpuRequestHasBeenSet() const
{
    return m_cpuRequestHasBeenSet;
}

string Container::GetCpuLimit() const
{
    return m_cpuLimit;
}

void Container::SetCpuLimit(const string& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool Container::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

string Container::GetMemoryRequest() const
{
    return m_memoryRequest;
}

void Container::SetMemoryRequest(const string& _memoryRequest)
{
    m_memoryRequest = _memoryRequest;
    m_memoryRequestHasBeenSet = true;
}

bool Container::MemoryRequestHasBeenSet() const
{
    return m_memoryRequestHasBeenSet;
}

string Container::GetMemoryLimit() const
{
    return m_memoryLimit;
}

void Container::SetMemoryLimit(const string& _memoryLimit)
{
    m_memoryLimit = _memoryLimit;
    m_memoryLimitHasBeenSet = true;
}

bool Container::MemoryLimitHasBeenSet() const
{
    return m_memoryLimitHasBeenSet;
}

string Container::GetMemoryUnit() const
{
    return m_memoryUnit;
}

void Container::SetMemoryUnit(const string& _memoryUnit)
{
    m_memoryUnit = _memoryUnit;
    m_memoryUnitHasBeenSet = true;
}

bool Container::MemoryUnitHasBeenSet() const
{
    return m_memoryUnitHasBeenSet;
}

string Container::GetGpuLimit() const
{
    return m_gpuLimit;
}

void Container::SetGpuLimit(const string& _gpuLimit)
{
    m_gpuLimit = _gpuLimit;
    m_gpuLimitHasBeenSet = true;
}

bool Container::GpuLimitHasBeenSet() const
{
    return m_gpuLimitHasBeenSet;
}

vector<KeyValueObj> Container::GetResourceMapCloud() const
{
    return m_resourceMapCloud;
}

void Container::SetResourceMapCloud(const vector<KeyValueObj>& _resourceMapCloud)
{
    m_resourceMapCloud = _resourceMapCloud;
    m_resourceMapCloudHasBeenSet = true;
}

bool Container::ResourceMapCloudHasBeenSet() const
{
    return m_resourceMapCloudHasBeenSet;
}

vector<Env> Container::GetEnvs() const
{
    return m_envs;
}

void Container::SetEnvs(const vector<Env>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool Container::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

string Container::GetWorkingDir() const
{
    return m_workingDir;
}

void Container::SetWorkingDir(const string& _workingDir)
{
    m_workingDir = _workingDir;
    m_workingDirHasBeenSet = true;
}

bool Container::WorkingDirHasBeenSet() const
{
    return m_workingDirHasBeenSet;
}

vector<string> Container::GetCommands() const
{
    return m_commands;
}

void Container::SetCommands(const vector<string>& _commands)
{
    m_commands = _commands;
    m_commandsHasBeenSet = true;
}

bool Container::CommandsHasBeenSet() const
{
    return m_commandsHasBeenSet;
}

vector<string> Container::GetArgs() const
{
    return m_args;
}

void Container::SetArgs(const vector<string>& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool Container::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

SecurityContext Container::GetSecurityContext() const
{
    return m_securityContext;
}

void Container::SetSecurityContext(const SecurityContext& _securityContext)
{
    m_securityContext = _securityContext;
    m_securityContextHasBeenSet = true;
}

bool Container::SecurityContextHasBeenSet() const
{
    return m_securityContextHasBeenSet;
}

Probe Container::GetReadinessProbe() const
{
    return m_readinessProbe;
}

void Container::SetReadinessProbe(const Probe& _readinessProbe)
{
    m_readinessProbe = _readinessProbe;
    m_readinessProbeHasBeenSet = true;
}

bool Container::ReadinessProbeHasBeenSet() const
{
    return m_readinessProbeHasBeenSet;
}

