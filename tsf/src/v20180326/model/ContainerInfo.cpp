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

#include <tencentcloud/tsf/v20180326/model/ContainerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ContainerInfo::ContainerInfo() :
    m_nameHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_isBusinessMainContainerHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_tcrRepoInfoHasBeenSet(false),
    m_secretNameHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_healthCheckSettingsHasBeenSet(false),
    m_cpuRequestHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_memRequestHasBeenSet(false),
    m_memLimitHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_userEnvsHasBeenSet(false),
    m_jvmOptsHasBeenSet(false),
    m_volumeMountInfoListHasBeenSet(false),
    m_initContainerEnableHasBeenSet(false),
    m_lifeCycleHookListHasBeenSet(false),
    m_privilegeContainerEnableHasBeenSet(false),
    m_runCommandHasBeenSet(false),
    m_runArgHasBeenSet(false),
    m_containerNameHasBeenSet(false)
{
}

CoreInternalOutcome ContainerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("IsBusinessMainContainer") && !value["IsBusinessMainContainer"].IsNull())
    {
        if (!value["IsBusinessMainContainer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.IsBusinessMainContainer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBusinessMainContainer = value["IsBusinessMainContainer"].GetBool();
        m_isBusinessMainContainerHasBeenSet = true;
    }

    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }

    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }

    if (value.HasMember("RepoType") && !value["RepoType"].IsNull())
    {
        if (!value["RepoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.RepoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoType = string(value["RepoType"].GetString());
        m_repoTypeHasBeenSet = true;
    }

    if (value.HasMember("TcrRepoInfo") && !value["TcrRepoInfo"].IsNull())
    {
        if (!value["TcrRepoInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.TcrRepoInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tcrRepoInfo.Deserialize(value["TcrRepoInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tcrRepoInfoHasBeenSet = true;
    }

    if (value.HasMember("SecretName") && !value["SecretName"].IsNull())
    {
        if (!value["SecretName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.SecretName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretName = string(value["SecretName"].GetString());
        m_secretNameHasBeenSet = true;
    }

    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckSettings") && !value["HealthCheckSettings"].IsNull())
    {
        if (!value["HealthCheckSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.HealthCheckSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheckSettings.Deserialize(value["HealthCheckSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckSettingsHasBeenSet = true;
    }

    if (value.HasMember("CpuRequest") && !value["CpuRequest"].IsNull())
    {
        if (!value["CpuRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.CpuRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuRequest = string(value["CpuRequest"].GetString());
        m_cpuRequestHasBeenSet = true;
    }

    if (value.HasMember("CpuLimit") && !value["CpuLimit"].IsNull())
    {
        if (!value["CpuLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.CpuLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLimit = string(value["CpuLimit"].GetString());
        m_cpuLimitHasBeenSet = true;
    }

    if (value.HasMember("MemRequest") && !value["MemRequest"].IsNull())
    {
        if (!value["MemRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.MemRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memRequest = string(value["MemRequest"].GetString());
        m_memRequestHasBeenSet = true;
    }

    if (value.HasMember("MemLimit") && !value["MemLimit"].IsNull())
    {
        if (!value["MemLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.MemLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memLimit = string(value["MemLimit"].GetString());
        m_memLimitHasBeenSet = true;
    }

    if (value.HasMember("Envs") && !value["Envs"].IsNull())
    {
        if (!value["Envs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.Envs` is not array type"));

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

    if (value.HasMember("UserEnvs") && !value["UserEnvs"].IsNull())
    {
        if (!value["UserEnvs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.UserEnvs` is not array type"));

        const rapidjson::Value &tmpValue = value["UserEnvs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Env item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userEnvs.push_back(item);
        }
        m_userEnvsHasBeenSet = true;
    }

    if (value.HasMember("JvmOpts") && !value["JvmOpts"].IsNull())
    {
        if (!value["JvmOpts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.JvmOpts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jvmOpts = string(value["JvmOpts"].GetString());
        m_jvmOptsHasBeenSet = true;
    }

    if (value.HasMember("VolumeMountInfoList") && !value["VolumeMountInfoList"].IsNull())
    {
        if (!value["VolumeMountInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.VolumeMountInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["VolumeMountInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VolumeMountInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_volumeMountInfoList.push_back(item);
        }
        m_volumeMountInfoListHasBeenSet = true;
    }

    if (value.HasMember("InitContainerEnable") && !value["InitContainerEnable"].IsNull())
    {
        if (!value["InitContainerEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.InitContainerEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_initContainerEnable = value["InitContainerEnable"].GetBool();
        m_initContainerEnableHasBeenSet = true;
    }

    if (value.HasMember("LifeCycleHookList") && !value["LifeCycleHookList"].IsNull())
    {
        if (!value["LifeCycleHookList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.LifeCycleHookList` is not array type"));

        const rapidjson::Value &tmpValue = value["LifeCycleHookList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LifeCycleHook item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lifeCycleHookList.push_back(item);
        }
        m_lifeCycleHookListHasBeenSet = true;
    }

    if (value.HasMember("PrivilegeContainerEnable") && !value["PrivilegeContainerEnable"].IsNull())
    {
        if (!value["PrivilegeContainerEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.PrivilegeContainerEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_privilegeContainerEnable = value["PrivilegeContainerEnable"].GetBool();
        m_privilegeContainerEnableHasBeenSet = true;
    }

    if (value.HasMember("RunCommand") && !value["RunCommand"].IsNull())
    {
        if (!value["RunCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.RunCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runCommand = string(value["RunCommand"].GetString());
        m_runCommandHasBeenSet = true;
    }

    if (value.HasMember("RunArg") && !value["RunArg"].IsNull())
    {
        if (!value["RunArg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.RunArg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runArg = string(value["RunArg"].GetString());
        m_runArgHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_isBusinessMainContainerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBusinessMainContainer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBusinessMainContainer, allocator);
    }

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_repoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoType.c_str(), allocator).Move(), allocator);
    }

    if (m_tcrRepoInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcrRepoInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tcrRepoInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckSettings.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_memRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_memLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memLimit.c_str(), allocator).Move(), allocator);
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

    if (m_userEnvsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserEnvs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userEnvs.begin(); itr != m_userEnvs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_jvmOptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JvmOpts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jvmOpts.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeMountInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMountInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumeMountInfoList.begin(); itr != m_volumeMountInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_initContainerEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitContainerEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initContainerEnable, allocator);
    }

    if (m_lifeCycleHookListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycleHookList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lifeCycleHookList.begin(); itr != m_lifeCycleHookList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_privilegeContainerEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeContainerEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_privilegeContainerEnable, allocator);
    }

    if (m_runCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_runArgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunArg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runArg.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

}


string ContainerInfo::GetName() const
{
    return m_name;
}

void ContainerInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ContainerInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ContainerInfo::GetContainerId() const
{
    return m_containerId;
}

void ContainerInfo::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool ContainerInfo::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string ContainerInfo::GetStatus() const
{
    return m_status;
}

void ContainerInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ContainerInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ContainerInfo::GetReason() const
{
    return m_reason;
}

void ContainerInfo::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ContainerInfo::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string ContainerInfo::GetImage() const
{
    return m_image;
}

void ContainerInfo::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool ContainerInfo::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

bool ContainerInfo::GetIsBusinessMainContainer() const
{
    return m_isBusinessMainContainer;
}

void ContainerInfo::SetIsBusinessMainContainer(const bool& _isBusinessMainContainer)
{
    m_isBusinessMainContainer = _isBusinessMainContainer;
    m_isBusinessMainContainerHasBeenSet = true;
}

bool ContainerInfo::IsBusinessMainContainerHasBeenSet() const
{
    return m_isBusinessMainContainerHasBeenSet;
}

string ContainerInfo::GetServer() const
{
    return m_server;
}

void ContainerInfo::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool ContainerInfo::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

string ContainerInfo::GetRepoName() const
{
    return m_repoName;
}

void ContainerInfo::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool ContainerInfo::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string ContainerInfo::GetRepoType() const
{
    return m_repoType;
}

void ContainerInfo::SetRepoType(const string& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool ContainerInfo::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

TcrRepoInfo ContainerInfo::GetTcrRepoInfo() const
{
    return m_tcrRepoInfo;
}

void ContainerInfo::SetTcrRepoInfo(const TcrRepoInfo& _tcrRepoInfo)
{
    m_tcrRepoInfo = _tcrRepoInfo;
    m_tcrRepoInfoHasBeenSet = true;
}

bool ContainerInfo::TcrRepoInfoHasBeenSet() const
{
    return m_tcrRepoInfoHasBeenSet;
}

string ContainerInfo::GetSecretName() const
{
    return m_secretName;
}

void ContainerInfo::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool ContainerInfo::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string ContainerInfo::GetTagName() const
{
    return m_tagName;
}

void ContainerInfo::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool ContainerInfo::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

HealthCheckSettings ContainerInfo::GetHealthCheckSettings() const
{
    return m_healthCheckSettings;
}

void ContainerInfo::SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings)
{
    m_healthCheckSettings = _healthCheckSettings;
    m_healthCheckSettingsHasBeenSet = true;
}

bool ContainerInfo::HealthCheckSettingsHasBeenSet() const
{
    return m_healthCheckSettingsHasBeenSet;
}

string ContainerInfo::GetCpuRequest() const
{
    return m_cpuRequest;
}

void ContainerInfo::SetCpuRequest(const string& _cpuRequest)
{
    m_cpuRequest = _cpuRequest;
    m_cpuRequestHasBeenSet = true;
}

bool ContainerInfo::CpuRequestHasBeenSet() const
{
    return m_cpuRequestHasBeenSet;
}

string ContainerInfo::GetCpuLimit() const
{
    return m_cpuLimit;
}

void ContainerInfo::SetCpuLimit(const string& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool ContainerInfo::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

string ContainerInfo::GetMemRequest() const
{
    return m_memRequest;
}

void ContainerInfo::SetMemRequest(const string& _memRequest)
{
    m_memRequest = _memRequest;
    m_memRequestHasBeenSet = true;
}

bool ContainerInfo::MemRequestHasBeenSet() const
{
    return m_memRequestHasBeenSet;
}

string ContainerInfo::GetMemLimit() const
{
    return m_memLimit;
}

void ContainerInfo::SetMemLimit(const string& _memLimit)
{
    m_memLimit = _memLimit;
    m_memLimitHasBeenSet = true;
}

bool ContainerInfo::MemLimitHasBeenSet() const
{
    return m_memLimitHasBeenSet;
}

vector<Env> ContainerInfo::GetEnvs() const
{
    return m_envs;
}

void ContainerInfo::SetEnvs(const vector<Env>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool ContainerInfo::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

vector<Env> ContainerInfo::GetUserEnvs() const
{
    return m_userEnvs;
}

void ContainerInfo::SetUserEnvs(const vector<Env>& _userEnvs)
{
    m_userEnvs = _userEnvs;
    m_userEnvsHasBeenSet = true;
}

bool ContainerInfo::UserEnvsHasBeenSet() const
{
    return m_userEnvsHasBeenSet;
}

string ContainerInfo::GetJvmOpts() const
{
    return m_jvmOpts;
}

void ContainerInfo::SetJvmOpts(const string& _jvmOpts)
{
    m_jvmOpts = _jvmOpts;
    m_jvmOptsHasBeenSet = true;
}

bool ContainerInfo::JvmOptsHasBeenSet() const
{
    return m_jvmOptsHasBeenSet;
}

vector<VolumeMountInfo> ContainerInfo::GetVolumeMountInfoList() const
{
    return m_volumeMountInfoList;
}

void ContainerInfo::SetVolumeMountInfoList(const vector<VolumeMountInfo>& _volumeMountInfoList)
{
    m_volumeMountInfoList = _volumeMountInfoList;
    m_volumeMountInfoListHasBeenSet = true;
}

bool ContainerInfo::VolumeMountInfoListHasBeenSet() const
{
    return m_volumeMountInfoListHasBeenSet;
}

bool ContainerInfo::GetInitContainerEnable() const
{
    return m_initContainerEnable;
}

void ContainerInfo::SetInitContainerEnable(const bool& _initContainerEnable)
{
    m_initContainerEnable = _initContainerEnable;
    m_initContainerEnableHasBeenSet = true;
}

bool ContainerInfo::InitContainerEnableHasBeenSet() const
{
    return m_initContainerEnableHasBeenSet;
}

vector<LifeCycleHook> ContainerInfo::GetLifeCycleHookList() const
{
    return m_lifeCycleHookList;
}

void ContainerInfo::SetLifeCycleHookList(const vector<LifeCycleHook>& _lifeCycleHookList)
{
    m_lifeCycleHookList = _lifeCycleHookList;
    m_lifeCycleHookListHasBeenSet = true;
}

bool ContainerInfo::LifeCycleHookListHasBeenSet() const
{
    return m_lifeCycleHookListHasBeenSet;
}

bool ContainerInfo::GetPrivilegeContainerEnable() const
{
    return m_privilegeContainerEnable;
}

void ContainerInfo::SetPrivilegeContainerEnable(const bool& _privilegeContainerEnable)
{
    m_privilegeContainerEnable = _privilegeContainerEnable;
    m_privilegeContainerEnableHasBeenSet = true;
}

bool ContainerInfo::PrivilegeContainerEnableHasBeenSet() const
{
    return m_privilegeContainerEnableHasBeenSet;
}

string ContainerInfo::GetRunCommand() const
{
    return m_runCommand;
}

void ContainerInfo::SetRunCommand(const string& _runCommand)
{
    m_runCommand = _runCommand;
    m_runCommandHasBeenSet = true;
}

bool ContainerInfo::RunCommandHasBeenSet() const
{
    return m_runCommandHasBeenSet;
}

string ContainerInfo::GetRunArg() const
{
    return m_runArg;
}

void ContainerInfo::SetRunArg(const string& _runArg)
{
    m_runArg = _runArg;
    m_runArgHasBeenSet = true;
}

bool ContainerInfo::RunArgHasBeenSet() const
{
    return m_runArgHasBeenSet;
}

string ContainerInfo::GetContainerName() const
{
    return m_containerName;
}

void ContainerInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool ContainerInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

