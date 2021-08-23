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
using namespace std;

CloudBaseRunSideSpec::CloudBaseRunSideSpec() :
    m_containerImageHasBeenSet(false),
    m_containerPortHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_envVarHasBeenSet(false),
    m_initialDelaySecondsHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_securityHasBeenSet(false),
    m_volumeMountInfosHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseRunSideSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContainerImage") && !value["ContainerImage"].IsNull())
    {
        if (!value["ContainerImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunSideSpec.ContainerImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerImage = string(value["ContainerImage"].GetString());
        m_containerImageHasBeenSet = true;
    }

    if (value.HasMember("ContainerPort") && !value["ContainerPort"].IsNull())
    {
        if (!value["ContainerPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunSideSpec.ContainerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerPort = value["ContainerPort"].GetInt64();
        m_containerPortHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunSideSpec.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("EnvVar") && !value["EnvVar"].IsNull())
    {
        if (!value["EnvVar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunSideSpec.EnvVar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envVar = string(value["EnvVar"].GetString());
        m_envVarHasBeenSet = true;
    }

    if (value.HasMember("InitialDelaySeconds") && !value["InitialDelaySeconds"].IsNull())
    {
        if (!value["InitialDelaySeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunSideSpec.InitialDelaySeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initialDelaySeconds = value["InitialDelaySeconds"].GetInt64();
        m_initialDelaySecondsHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunSideSpec.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunSideSpec.Mem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetInt64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("Security") && !value["Security"].IsNull())
    {
        if (!value["Security"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunSideSpec.Security` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_security.Deserialize(value["Security"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_securityHasBeenSet = true;
    }

    if (value.HasMember("VolumeMountInfos") && !value["VolumeMountInfos"].IsNull())
    {
        if (!value["VolumeMountInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunSideSpec.VolumeMountInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["VolumeMountInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudBaseRunVolumeMount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_volumeMountInfos.push_back(item);
        }
        m_volumeMountInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseRunSideSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_containerImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerImage.c_str(), allocator).Move(), allocator);
    }

    if (m_containerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerPort, allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_envVarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvVar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envVar.c_str(), allocator).Move(), allocator);
    }

    if (m_initialDelaySecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialDelaySeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initialDelaySeconds, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

    if (m_securityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Security";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_security.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_volumeMountInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMountInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumeMountInfos.begin(); itr != m_volumeMountInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

CloudBaseSecurityContext CloudBaseRunSideSpec::GetSecurity() const
{
    return m_security;
}

void CloudBaseRunSideSpec::SetSecurity(const CloudBaseSecurityContext& _security)
{
    m_security = _security;
    m_securityHasBeenSet = true;
}

bool CloudBaseRunSideSpec::SecurityHasBeenSet() const
{
    return m_securityHasBeenSet;
}

vector<CloudBaseRunVolumeMount> CloudBaseRunSideSpec::GetVolumeMountInfos() const
{
    return m_volumeMountInfos;
}

void CloudBaseRunSideSpec::SetVolumeMountInfos(const vector<CloudBaseRunVolumeMount>& _volumeMountInfos)
{
    m_volumeMountInfos = _volumeMountInfos;
    m_volumeMountInfosHasBeenSet = true;
}

bool CloudBaseRunSideSpec::VolumeMountInfosHasBeenSet() const
{
    return m_volumeMountInfosHasBeenSet;
}

