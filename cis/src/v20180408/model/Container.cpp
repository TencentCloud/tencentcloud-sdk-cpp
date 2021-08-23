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

#include <tencentcloud/cis/v20180408/model/Container.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cis::V20180408::Model;
using namespace std;

Container::Container() :
    m_commandHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_environmentVarsHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_restartCountHasBeenSet(false),
    m_currentStateHasBeenSet(false),
    m_previousStateHasBeenSet(false),
    m_workingDirHasBeenSet(false),
    m_containerIdHasBeenSet(false)
{
}

CoreInternalOutcome Container::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
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

    if (value.HasMember("EnvironmentVars") && !value["EnvironmentVars"].IsNull())
    {
        if (!value["EnvironmentVars"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Container.EnvironmentVars` is not array type"));

        const rapidjson::Value &tmpValue = value["EnvironmentVars"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EnvironmentVar item;
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

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Container.Cpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetDouble();
        m_cpuHasBeenSet = true;
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

    if (value.HasMember("RestartCount") && !value["RestartCount"].IsNull())
    {
        if (!value["RestartCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Container.RestartCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_restartCount = value["RestartCount"].GetUint64();
        m_restartCountHasBeenSet = true;
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

    if (value.HasMember("PreviousState") && !value["PreviousState"].IsNull())
    {
        if (!value["PreviousState"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Container.PreviousState` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_previousState.Deserialize(value["PreviousState"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_previousStateHasBeenSet = true;
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

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Container::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
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

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_restartCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restartCount, allocator);
    }

    if (m_currentStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_currentState.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_previousStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviousState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_previousState.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workingDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkingDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workingDir.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

}


string Container::GetCommand() const
{
    return m_command;
}

void Container::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool Container::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
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

vector<EnvironmentVar> Container::GetEnvironmentVars() const
{
    return m_environmentVars;
}

void Container::SetEnvironmentVars(const vector<EnvironmentVar>& _environmentVars)
{
    m_environmentVars = _environmentVars;
    m_environmentVarsHasBeenSet = true;
}

bool Container::EnvironmentVarsHasBeenSet() const
{
    return m_environmentVarsHasBeenSet;
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

ContainerState Container::GetPreviousState() const
{
    return m_previousState;
}

void Container::SetPreviousState(const ContainerState& _previousState)
{
    m_previousState = _previousState;
    m_previousStateHasBeenSet = true;
}

bool Container::PreviousStateHasBeenSet() const
{
    return m_previousStateHasBeenSet;
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

string Container::GetContainerId() const
{
    return m_containerId;
}

void Container::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool Container::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

