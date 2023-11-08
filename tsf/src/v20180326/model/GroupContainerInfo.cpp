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

#include <tencentcloud/tsf/v20180326/model/GroupContainerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

GroupContainerInfo::GroupContainerInfo() :
    m_tagNameHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_tcrRepoInfoHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_secretNameHasBeenSet(false),
    m_jvmOptsHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_cpuRequestHasBeenSet(false),
    m_memRequestHasBeenSet(false),
    m_memLimitHasBeenSet(false),
    m_healthCheckSettingsHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_userEnvsHasBeenSet(false),
    m_volumeMountInfoListHasBeenSet(false)
{
}

CoreInternalOutcome GroupContainerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }

    if (value.HasMember("RepoType") && !value["RepoType"].IsNull())
    {
        if (!value["RepoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.RepoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoType = string(value["RepoType"].GetString());
        m_repoTypeHasBeenSet = true;
    }

    if (value.HasMember("TcrRepoInfo") && !value["TcrRepoInfo"].IsNull())
    {
        if (!value["TcrRepoInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.TcrRepoInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tcrRepoInfo.Deserialize(value["TcrRepoInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tcrRepoInfoHasBeenSet = true;
    }

    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }

    if (value.HasMember("SecretName") && !value["SecretName"].IsNull())
    {
        if (!value["SecretName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.SecretName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretName = string(value["SecretName"].GetString());
        m_secretNameHasBeenSet = true;
    }

    if (value.HasMember("JvmOpts") && !value["JvmOpts"].IsNull())
    {
        if (!value["JvmOpts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.JvmOpts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jvmOpts = string(value["JvmOpts"].GetString());
        m_jvmOptsHasBeenSet = true;
    }

    if (value.HasMember("CpuLimit") && !value["CpuLimit"].IsNull())
    {
        if (!value["CpuLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.CpuLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLimit = string(value["CpuLimit"].GetString());
        m_cpuLimitHasBeenSet = true;
    }

    if (value.HasMember("CpuRequest") && !value["CpuRequest"].IsNull())
    {
        if (!value["CpuRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.CpuRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuRequest = string(value["CpuRequest"].GetString());
        m_cpuRequestHasBeenSet = true;
    }

    if (value.HasMember("MemRequest") && !value["MemRequest"].IsNull())
    {
        if (!value["MemRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.MemRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memRequest = string(value["MemRequest"].GetString());
        m_memRequestHasBeenSet = true;
    }

    if (value.HasMember("MemLimit") && !value["MemLimit"].IsNull())
    {
        if (!value["MemLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.MemLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memLimit = string(value["MemLimit"].GetString());
        m_memLimitHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckSettings") && !value["HealthCheckSettings"].IsNull())
    {
        if (!value["HealthCheckSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.HealthCheckSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheckSettings.Deserialize(value["HealthCheckSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckSettingsHasBeenSet = true;
    }

    if (value.HasMember("Envs") && !value["Envs"].IsNull())
    {
        if (!value["Envs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.Envs` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.UserEnvs` is not array type"));

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

    if (value.HasMember("VolumeMountInfoList") && !value["VolumeMountInfoList"].IsNull())
    {
        if (!value["VolumeMountInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupContainerInfo.VolumeMountInfoList` is not array type"));

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


    return CoreInternalOutcome(true);
}

void GroupContainerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
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

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_jvmOptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JvmOpts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jvmOpts.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuRequest.c_str(), allocator).Move(), allocator);
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

    if (m_healthCheckSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckSettings.ToJsonObject(value[key.c_str()], allocator);
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

}


string GroupContainerInfo::GetTagName() const
{
    return m_tagName;
}

void GroupContainerInfo::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool GroupContainerInfo::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

string GroupContainerInfo::GetContainerName() const
{
    return m_containerName;
}

void GroupContainerInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool GroupContainerInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string GroupContainerInfo::GetRepoName() const
{
    return m_repoName;
}

void GroupContainerInfo::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool GroupContainerInfo::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string GroupContainerInfo::GetRepoType() const
{
    return m_repoType;
}

void GroupContainerInfo::SetRepoType(const string& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool GroupContainerInfo::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

TcrRepoInfo GroupContainerInfo::GetTcrRepoInfo() const
{
    return m_tcrRepoInfo;
}

void GroupContainerInfo::SetTcrRepoInfo(const TcrRepoInfo& _tcrRepoInfo)
{
    m_tcrRepoInfo = _tcrRepoInfo;
    m_tcrRepoInfoHasBeenSet = true;
}

bool GroupContainerInfo::TcrRepoInfoHasBeenSet() const
{
    return m_tcrRepoInfoHasBeenSet;
}

string GroupContainerInfo::GetServer() const
{
    return m_server;
}

void GroupContainerInfo::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool GroupContainerInfo::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

string GroupContainerInfo::GetSecretName() const
{
    return m_secretName;
}

void GroupContainerInfo::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool GroupContainerInfo::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string GroupContainerInfo::GetJvmOpts() const
{
    return m_jvmOpts;
}

void GroupContainerInfo::SetJvmOpts(const string& _jvmOpts)
{
    m_jvmOpts = _jvmOpts;
    m_jvmOptsHasBeenSet = true;
}

bool GroupContainerInfo::JvmOptsHasBeenSet() const
{
    return m_jvmOptsHasBeenSet;
}

string GroupContainerInfo::GetCpuLimit() const
{
    return m_cpuLimit;
}

void GroupContainerInfo::SetCpuLimit(const string& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool GroupContainerInfo::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

string GroupContainerInfo::GetCpuRequest() const
{
    return m_cpuRequest;
}

void GroupContainerInfo::SetCpuRequest(const string& _cpuRequest)
{
    m_cpuRequest = _cpuRequest;
    m_cpuRequestHasBeenSet = true;
}

bool GroupContainerInfo::CpuRequestHasBeenSet() const
{
    return m_cpuRequestHasBeenSet;
}

string GroupContainerInfo::GetMemRequest() const
{
    return m_memRequest;
}

void GroupContainerInfo::SetMemRequest(const string& _memRequest)
{
    m_memRequest = _memRequest;
    m_memRequestHasBeenSet = true;
}

bool GroupContainerInfo::MemRequestHasBeenSet() const
{
    return m_memRequestHasBeenSet;
}

string GroupContainerInfo::GetMemLimit() const
{
    return m_memLimit;
}

void GroupContainerInfo::SetMemLimit(const string& _memLimit)
{
    m_memLimit = _memLimit;
    m_memLimitHasBeenSet = true;
}

bool GroupContainerInfo::MemLimitHasBeenSet() const
{
    return m_memLimitHasBeenSet;
}

HealthCheckSettings GroupContainerInfo::GetHealthCheckSettings() const
{
    return m_healthCheckSettings;
}

void GroupContainerInfo::SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings)
{
    m_healthCheckSettings = _healthCheckSettings;
    m_healthCheckSettingsHasBeenSet = true;
}

bool GroupContainerInfo::HealthCheckSettingsHasBeenSet() const
{
    return m_healthCheckSettingsHasBeenSet;
}

vector<Env> GroupContainerInfo::GetEnvs() const
{
    return m_envs;
}

void GroupContainerInfo::SetEnvs(const vector<Env>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool GroupContainerInfo::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

vector<Env> GroupContainerInfo::GetUserEnvs() const
{
    return m_userEnvs;
}

void GroupContainerInfo::SetUserEnvs(const vector<Env>& _userEnvs)
{
    m_userEnvs = _userEnvs;
    m_userEnvsHasBeenSet = true;
}

bool GroupContainerInfo::UserEnvsHasBeenSet() const
{
    return m_userEnvsHasBeenSet;
}

vector<VolumeMountInfo> GroupContainerInfo::GetVolumeMountInfoList() const
{
    return m_volumeMountInfoList;
}

void GroupContainerInfo::SetVolumeMountInfoList(const vector<VolumeMountInfo>& _volumeMountInfoList)
{
    m_volumeMountInfoList = _volumeMountInfoList;
    m_volumeMountInfoListHasBeenSet = true;
}

bool GroupContainerInfo::VolumeMountInfoListHasBeenSet() const
{
    return m_volumeMountInfoListHasBeenSet;
}

