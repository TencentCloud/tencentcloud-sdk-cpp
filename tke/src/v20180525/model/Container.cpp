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

#include <tencentcloud/tke/v20180525/model/Container.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

Container::Container() :
    m_imageHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_commandsHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_currentStateHasBeenSet(false),
    m_environmentVarsHasBeenSet(false),
    m_gpuLimitHasBeenSet(false),
    m_livenessProbeHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_readinessProbeHasBeenSet(false),
    m_restartCountHasBeenSet(false),
    m_securityContextHasBeenSet(false),
    m_volumeMountsHasBeenSet(false),
    m_workingDirHasBeenSet(false)
{
}

CoreInternalOutcome Container::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
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

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Container.Cpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetDouble();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("CurrentState") && !value["CurrentState"].IsNull())
    {
        if (!value["CurrentState"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Container.CurrentState` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_currentState.Deserialize(value["CurrentState"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_currentStateHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentVars") && !value["EnvironmentVars"].IsNull())
    {
        if (!value["EnvironmentVars"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Container.EnvironmentVars` is not array type"));

        const rapidjson::Value &tmpValue = value["EnvironmentVars"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EnvironmentVariable item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_environmentVars.push_back(item);
        }
        m_environmentVarsHasBeenSet = true;
    }

    if (value.HasMember("GpuLimit") && !value["GpuLimit"].IsNull())
    {
        if (!value["GpuLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Container.GpuLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuLimit = value["GpuLimit"].GetUint64();
        m_gpuLimitHasBeenSet = true;
    }

    if (value.HasMember("LivenessProbe") && !value["LivenessProbe"].IsNull())
    {
        if (!value["LivenessProbe"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Container.LivenessProbe` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_livenessProbe.Deserialize(value["LivenessProbe"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_livenessProbeHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Container.Memory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetDouble();
        m_memoryHasBeenSet = true;
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

    if (value.HasMember("RestartCount") && !value["RestartCount"].IsNull())
    {
        if (!value["RestartCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Container.RestartCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_restartCount = value["RestartCount"].GetUint64();
        m_restartCountHasBeenSet = true;
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

    if (value.HasMember("WorkingDir") && !value["WorkingDir"].IsNull())
    {
        if (!value["WorkingDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.WorkingDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workingDir = string(value["WorkingDir"].GetString());
        m_workingDirHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Container::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_currentStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_currentState.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_environmentVarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentVars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_environmentVars.begin(); itr != m_environmentVars.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_gpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuLimit, allocator);
    }

    if (m_livenessProbeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivenessProbe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_livenessProbe.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_readinessProbeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadinessProbe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_readinessProbe.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_restartCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restartCount, allocator);
    }

    if (m_securityContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_securityContext.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_workingDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkingDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workingDir.c_str(), allocator).Move(), allocator);
    }

}


string Container::GetImage() const
{
    return m_image;
}

void Container::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool Container::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
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

double Container::GetCpu() const
{
    return m_cpu;
}

void Container::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool Container::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

ContainerState Container::GetCurrentState() const
{
    return m_currentState;
}

void Container::SetCurrentState(const ContainerState& _currentState)
{
    m_currentState = _currentState;
    m_currentStateHasBeenSet = true;
}

bool Container::CurrentStateHasBeenSet() const
{
    return m_currentStateHasBeenSet;
}

vector<EnvironmentVariable> Container::GetEnvironmentVars() const
{
    return m_environmentVars;
}

void Container::SetEnvironmentVars(const vector<EnvironmentVariable>& _environmentVars)
{
    m_environmentVars = _environmentVars;
    m_environmentVarsHasBeenSet = true;
}

bool Container::EnvironmentVarsHasBeenSet() const
{
    return m_environmentVarsHasBeenSet;
}

uint64_t Container::GetGpuLimit() const
{
    return m_gpuLimit;
}

void Container::SetGpuLimit(const uint64_t& _gpuLimit)
{
    m_gpuLimit = _gpuLimit;
    m_gpuLimitHasBeenSet = true;
}

bool Container::GpuLimitHasBeenSet() const
{
    return m_gpuLimitHasBeenSet;
}

LivenessOrReadinessProbe Container::GetLivenessProbe() const
{
    return m_livenessProbe;
}

void Container::SetLivenessProbe(const LivenessOrReadinessProbe& _livenessProbe)
{
    m_livenessProbe = _livenessProbe;
    m_livenessProbeHasBeenSet = true;
}

bool Container::LivenessProbeHasBeenSet() const
{
    return m_livenessProbeHasBeenSet;
}

double Container::GetMemory() const
{
    return m_memory;
}

void Container::SetMemory(const double& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool Container::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

LivenessOrReadinessProbe Container::GetReadinessProbe() const
{
    return m_readinessProbe;
}

void Container::SetReadinessProbe(const LivenessOrReadinessProbe& _readinessProbe)
{
    m_readinessProbe = _readinessProbe;
    m_readinessProbeHasBeenSet = true;
}

bool Container::ReadinessProbeHasBeenSet() const
{
    return m_readinessProbeHasBeenSet;
}

uint64_t Container::GetRestartCount() const
{
    return m_restartCount;
}

void Container::SetRestartCount(const uint64_t& _restartCount)
{
    m_restartCount = _restartCount;
    m_restartCountHasBeenSet = true;
}

bool Container::RestartCountHasBeenSet() const
{
    return m_restartCountHasBeenSet;
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

