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

#include <tencentcloud/tcb/v20180608/model/CloudBaseRunSideSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

CloudBaseRunSideSpec::CloudBaseRunSideSpec() :
    m_containerImageHasBeenSet(false),
    m_containerPortHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_envVarHasBeenSet(false),
    m_initialDelaySecondsHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseRunSideSpec::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ContainerImage") && !value["ContainerImage"].IsNull())
    {
        if (!value["ContainerImage"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseRunSideSpec.ContainerImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerImage = string(value["ContainerImage"].GetString());
        m_containerImageHasBeenSet = true;
    }

    if (value.HasMember("ContainerPort") && !value["ContainerPort"].IsNull())
    {
        if (!value["ContainerPort"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CloudBaseRunSideSpec.ContainerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerPort = value["ContainerPort"].GetInt64();
        m_containerPortHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseRunSideSpec.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("EnvVar") && !value["EnvVar"].IsNull())
    {
        if (!value["EnvVar"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseRunSideSpec.EnvVar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envVar = string(value["EnvVar"].GetString());
        m_envVarHasBeenSet = true;
    }

    if (value.HasMember("InitialDelaySeconds") && !value["InitialDelaySeconds"].IsNull())
    {
        if (!value["InitialDelaySeconds"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CloudBaseRunSideSpec.InitialDelaySeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initialDelaySeconds = value["InitialDelaySeconds"].GetInt64();
        m_initialDelaySecondsHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CloudBaseRunSideSpec.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CloudBaseRunSideSpec.Mem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetInt64();
        m_memHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseRunSideSpec::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_containerImageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContainerImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_containerImage.c_str(), allocator).Move(), allocator);
    }

    if (m_containerPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContainerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerPort, allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_envVarHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvVar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_envVar.c_str(), allocator).Move(), allocator);
    }

    if (m_initialDelaySecondsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InitialDelaySeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initialDelaySeconds, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

}


string CloudBaseRunSideSpec::GetContainerImage() const
{
    return m_containerImage;
}

void CloudBaseRunSideSpec::SetContainerImage(const string& _containerImage)
{
    m_containerImage = _containerImage;
    m_containerImageHasBeenSet = true;
}

bool CloudBaseRunSideSpec::ContainerImageHasBeenSet() const
{
    return m_containerImageHasBeenSet;
}

int64_t CloudBaseRunSideSpec::GetContainerPort() const
{
    return m_containerPort;
}

void CloudBaseRunSideSpec::SetContainerPort(const int64_t& _containerPort)
{
    m_containerPort = _containerPort;
    m_containerPortHasBeenSet = true;
}

bool CloudBaseRunSideSpec::ContainerPortHasBeenSet() const
{
    return m_containerPortHasBeenSet;
}

string CloudBaseRunSideSpec::GetContainerName() const
{
    return m_containerName;
}

void CloudBaseRunSideSpec::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool CloudBaseRunSideSpec::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string CloudBaseRunSideSpec::GetEnvVar() const
{
    return m_envVar;
}

void CloudBaseRunSideSpec::SetEnvVar(const string& _envVar)
{
    m_envVar = _envVar;
    m_envVarHasBeenSet = true;
}

bool CloudBaseRunSideSpec::EnvVarHasBeenSet() const
{
    return m_envVarHasBeenSet;
}

int64_t CloudBaseRunSideSpec::GetInitialDelaySeconds() const
{
    return m_initialDelaySeconds;
}

void CloudBaseRunSideSpec::SetInitialDelaySeconds(const int64_t& _initialDelaySeconds)
{
    m_initialDelaySeconds = _initialDelaySeconds;
    m_initialDelaySecondsHasBeenSet = true;
}

bool CloudBaseRunSideSpec::InitialDelaySecondsHasBeenSet() const
{
    return m_initialDelaySecondsHasBeenSet;
}

int64_t CloudBaseRunSideSpec::GetCpu() const
{
    return m_cpu;
}

void CloudBaseRunSideSpec::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CloudBaseRunSideSpec::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t CloudBaseRunSideSpec::GetMem() const
{
    return m_mem;
}

void CloudBaseRunSideSpec::SetMem(const int64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool CloudBaseRunSideSpec::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

