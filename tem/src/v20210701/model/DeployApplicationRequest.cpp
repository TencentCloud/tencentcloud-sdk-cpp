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

#include <tencentcloud/tem/v20210701/model/DeployApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

DeployApplicationRequest::DeployApplicationRequest() :
    m_applicationIdHasBeenSet(false),
    m_initPodNumHasBeenSet(false),
    m_cpuSpecHasBeenSet(false),
    m_memorySpecHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_deployVersionHasBeenSet(false),
    m_imgRepoHasBeenSet(false),
    m_versionDescHasBeenSet(false),
    m_jvmOptsHasBeenSet(false),
    m_esInfoHasBeenSet(false),
    m_envConfHasBeenSet(false),
    m_logConfsHasBeenSet(false),
    m_storageConfsHasBeenSet(false),
    m_storageMountConfsHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_pkgNameHasBeenSet(false),
    m_jdkVersionHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_logOutputConfHasBeenSet(false),
    m_sourceChannelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_imageCommandHasBeenSet(false),
    m_imageArgsHasBeenSet(false),
    m_useRegistryDefaultConfigHasBeenSet(false),
    m_settingConfsHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_postStartHasBeenSet(false),
    m_preStopHasBeenSet(false),
    m_livenessHasBeenSet(false),
    m_readinessHasBeenSet(false),
    m_deployStrategyConfHasBeenSet(false),
    m_horizontalAutoscalerHasBeenSet(false),
    m_cronHorizontalAutoscalerHasBeenSet(false),
    m_logEnableHasBeenSet(false),
    m_confEditedHasBeenSet(false),
    m_speedUpHasBeenSet(false),
    m_startupProbeHasBeenSet(false),
    m_osFlavourHasBeenSet(false),
    m_enablePrometheusConfHasBeenSet(false),
    m_enableTracingHasBeenSet(false),
    m_enableMetricsHasBeenSet(false),
    m_tcrInstanceIdHasBeenSet(false),
    m_repoServerHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_postStartEncodedHasBeenSet(false),
    m_preStopEncodedHasBeenSet(false)
{
}

string DeployApplicationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_initPodNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitPodNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_initPodNum, allocator);
    }

    if (m_cpuSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpuSpec, allocator);
    }

    if (m_memorySpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemorySpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memorySpec, allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_imgRepoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImgRepo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imgRepo.c_str(), allocator).Move(), allocator);
    }

    if (m_versionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_jvmOptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JvmOpts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jvmOpts.c_str(), allocator).Move(), allocator);
    }

    if (m_esInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_envConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envConf.begin(); itr != m_envConf.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_logConfsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogConfs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logConfs.begin(); itr != m_logConfs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_storageConfsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageConfs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storageConfs.begin(); itr != m_storageConfs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_storageMountConfsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageMountConfs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storageMountConfs.begin(); itr != m_storageMountConfs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployMode.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_jdkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JdkVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jdkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logOutputConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogOutputConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logOutputConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCommand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_imageArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageArgs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageArgs.begin(); itr != m_imageArgs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_useRegistryDefaultConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseRegistryDefaultConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useRegistryDefaultConfig, allocator);
    }

    if (m_settingConfsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettingConfs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_settingConfs.begin(); itr != m_settingConfs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_service.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_postStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_postStart.c_str(), allocator).Move(), allocator);
    }

    if (m_preStopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreStop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_preStop.c_str(), allocator).Move(), allocator);
    }

    if (m_livenessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Liveness";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveness.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_readinessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Readiness";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_readiness.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deployStrategyConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployStrategyConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deployStrategyConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_horizontalAutoscalerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HorizontalAutoscaler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_horizontalAutoscaler.begin(); itr != m_horizontalAutoscaler.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cronHorizontalAutoscalerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronHorizontalAutoscaler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cronHorizontalAutoscaler.begin(); itr != m_cronHorizontalAutoscaler.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_logEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logEnable, allocator);
    }

    if (m_confEditedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfEdited";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_confEdited, allocator);
    }

    if (m_speedUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeedUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_speedUp, allocator);
    }

    if (m_startupProbeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupProbe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_startupProbe.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_osFlavourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsFlavour";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_osFlavour.c_str(), allocator).Move(), allocator);
    }

    if (m_enablePrometheusConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePrometheusConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enablePrometheusConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableTracingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTracing";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableTracing, allocator);
    }

    if (m_enableMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMetrics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableMetrics, allocator);
    }

    if (m_tcrInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcrInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tcrInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_repoServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoServer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoServer.c_str(), allocator).Move(), allocator);
    }

    if (m_repoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_repoType, allocator);
    }

    if (m_postStartEncodedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostStartEncoded";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_postStartEncoded.c_str(), allocator).Move(), allocator);
    }

    if (m_preStopEncodedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreStopEncoded";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_preStopEncoded.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeployApplicationRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DeployApplicationRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DeployApplicationRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

uint64_t DeployApplicationRequest::GetInitPodNum() const
{
    return m_initPodNum;
}

void DeployApplicationRequest::SetInitPodNum(const uint64_t& _initPodNum)
{
    m_initPodNum = _initPodNum;
    m_initPodNumHasBeenSet = true;
}

bool DeployApplicationRequest::InitPodNumHasBeenSet() const
{
    return m_initPodNumHasBeenSet;
}

double DeployApplicationRequest::GetCpuSpec() const
{
    return m_cpuSpec;
}

void DeployApplicationRequest::SetCpuSpec(const double& _cpuSpec)
{
    m_cpuSpec = _cpuSpec;
    m_cpuSpecHasBeenSet = true;
}

bool DeployApplicationRequest::CpuSpecHasBeenSet() const
{
    return m_cpuSpecHasBeenSet;
}

double DeployApplicationRequest::GetMemorySpec() const
{
    return m_memorySpec;
}

void DeployApplicationRequest::SetMemorySpec(const double& _memorySpec)
{
    m_memorySpec = _memorySpec;
    m_memorySpecHasBeenSet = true;
}

bool DeployApplicationRequest::MemorySpecHasBeenSet() const
{
    return m_memorySpecHasBeenSet;
}

string DeployApplicationRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void DeployApplicationRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool DeployApplicationRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string DeployApplicationRequest::GetDeployVersion() const
{
    return m_deployVersion;
}

void DeployApplicationRequest::SetDeployVersion(const string& _deployVersion)
{
    m_deployVersion = _deployVersion;
    m_deployVersionHasBeenSet = true;
}

bool DeployApplicationRequest::DeployVersionHasBeenSet() const
{
    return m_deployVersionHasBeenSet;
}

string DeployApplicationRequest::GetImgRepo() const
{
    return m_imgRepo;
}

void DeployApplicationRequest::SetImgRepo(const string& _imgRepo)
{
    m_imgRepo = _imgRepo;
    m_imgRepoHasBeenSet = true;
}

bool DeployApplicationRequest::ImgRepoHasBeenSet() const
{
    return m_imgRepoHasBeenSet;
}

string DeployApplicationRequest::GetVersionDesc() const
{
    return m_versionDesc;
}

void DeployApplicationRequest::SetVersionDesc(const string& _versionDesc)
{
    m_versionDesc = _versionDesc;
    m_versionDescHasBeenSet = true;
}

bool DeployApplicationRequest::VersionDescHasBeenSet() const
{
    return m_versionDescHasBeenSet;
}

string DeployApplicationRequest::GetJvmOpts() const
{
    return m_jvmOpts;
}

void DeployApplicationRequest::SetJvmOpts(const string& _jvmOpts)
{
    m_jvmOpts = _jvmOpts;
    m_jvmOptsHasBeenSet = true;
}

bool DeployApplicationRequest::JvmOptsHasBeenSet() const
{
    return m_jvmOptsHasBeenSet;
}

EsInfo DeployApplicationRequest::GetEsInfo() const
{
    return m_esInfo;
}

void DeployApplicationRequest::SetEsInfo(const EsInfo& _esInfo)
{
    m_esInfo = _esInfo;
    m_esInfoHasBeenSet = true;
}

bool DeployApplicationRequest::EsInfoHasBeenSet() const
{
    return m_esInfoHasBeenSet;
}

vector<Pair> DeployApplicationRequest::GetEnvConf() const
{
    return m_envConf;
}

void DeployApplicationRequest::SetEnvConf(const vector<Pair>& _envConf)
{
    m_envConf = _envConf;
    m_envConfHasBeenSet = true;
}

bool DeployApplicationRequest::EnvConfHasBeenSet() const
{
    return m_envConfHasBeenSet;
}

vector<string> DeployApplicationRequest::GetLogConfs() const
{
    return m_logConfs;
}

void DeployApplicationRequest::SetLogConfs(const vector<string>& _logConfs)
{
    m_logConfs = _logConfs;
    m_logConfsHasBeenSet = true;
}

bool DeployApplicationRequest::LogConfsHasBeenSet() const
{
    return m_logConfsHasBeenSet;
}

vector<StorageConf> DeployApplicationRequest::GetStorageConfs() const
{
    return m_storageConfs;
}

void DeployApplicationRequest::SetStorageConfs(const vector<StorageConf>& _storageConfs)
{
    m_storageConfs = _storageConfs;
    m_storageConfsHasBeenSet = true;
}

bool DeployApplicationRequest::StorageConfsHasBeenSet() const
{
    return m_storageConfsHasBeenSet;
}

vector<StorageMountConf> DeployApplicationRequest::GetStorageMountConfs() const
{
    return m_storageMountConfs;
}

void DeployApplicationRequest::SetStorageMountConfs(const vector<StorageMountConf>& _storageMountConfs)
{
    m_storageMountConfs = _storageMountConfs;
    m_storageMountConfsHasBeenSet = true;
}

bool DeployApplicationRequest::StorageMountConfsHasBeenSet() const
{
    return m_storageMountConfsHasBeenSet;
}

string DeployApplicationRequest::GetDeployMode() const
{
    return m_deployMode;
}

void DeployApplicationRequest::SetDeployMode(const string& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool DeployApplicationRequest::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

string DeployApplicationRequest::GetPkgName() const
{
    return m_pkgName;
}

void DeployApplicationRequest::SetPkgName(const string& _pkgName)
{
    m_pkgName = _pkgName;
    m_pkgNameHasBeenSet = true;
}

bool DeployApplicationRequest::PkgNameHasBeenSet() const
{
    return m_pkgNameHasBeenSet;
}

string DeployApplicationRequest::GetJdkVersion() const
{
    return m_jdkVersion;
}

void DeployApplicationRequest::SetJdkVersion(const string& _jdkVersion)
{
    m_jdkVersion = _jdkVersion;
    m_jdkVersionHasBeenSet = true;
}

bool DeployApplicationRequest::JdkVersionHasBeenSet() const
{
    return m_jdkVersionHasBeenSet;
}

vector<string> DeployApplicationRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void DeployApplicationRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool DeployApplicationRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

LogOutputConf DeployApplicationRequest::GetLogOutputConf() const
{
    return m_logOutputConf;
}

void DeployApplicationRequest::SetLogOutputConf(const LogOutputConf& _logOutputConf)
{
    m_logOutputConf = _logOutputConf;
    m_logOutputConfHasBeenSet = true;
}

bool DeployApplicationRequest::LogOutputConfHasBeenSet() const
{
    return m_logOutputConfHasBeenSet;
}

int64_t DeployApplicationRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void DeployApplicationRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool DeployApplicationRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}

string DeployApplicationRequest::GetDescription() const
{
    return m_description;
}

void DeployApplicationRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DeployApplicationRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DeployApplicationRequest::GetImageCommand() const
{
    return m_imageCommand;
}

void DeployApplicationRequest::SetImageCommand(const string& _imageCommand)
{
    m_imageCommand = _imageCommand;
    m_imageCommandHasBeenSet = true;
}

bool DeployApplicationRequest::ImageCommandHasBeenSet() const
{
    return m_imageCommandHasBeenSet;
}

vector<string> DeployApplicationRequest::GetImageArgs() const
{
    return m_imageArgs;
}

void DeployApplicationRequest::SetImageArgs(const vector<string>& _imageArgs)
{
    m_imageArgs = _imageArgs;
    m_imageArgsHasBeenSet = true;
}

bool DeployApplicationRequest::ImageArgsHasBeenSet() const
{
    return m_imageArgsHasBeenSet;
}

bool DeployApplicationRequest::GetUseRegistryDefaultConfig() const
{
    return m_useRegistryDefaultConfig;
}

void DeployApplicationRequest::SetUseRegistryDefaultConfig(const bool& _useRegistryDefaultConfig)
{
    m_useRegistryDefaultConfig = _useRegistryDefaultConfig;
    m_useRegistryDefaultConfigHasBeenSet = true;
}

bool DeployApplicationRequest::UseRegistryDefaultConfigHasBeenSet() const
{
    return m_useRegistryDefaultConfigHasBeenSet;
}

vector<MountedSettingConf> DeployApplicationRequest::GetSettingConfs() const
{
    return m_settingConfs;
}

void DeployApplicationRequest::SetSettingConfs(const vector<MountedSettingConf>& _settingConfs)
{
    m_settingConfs = _settingConfs;
    m_settingConfsHasBeenSet = true;
}

bool DeployApplicationRequest::SettingConfsHasBeenSet() const
{
    return m_settingConfsHasBeenSet;
}

EksService DeployApplicationRequest::GetService() const
{
    return m_service;
}

void DeployApplicationRequest::SetService(const EksService& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool DeployApplicationRequest::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string DeployApplicationRequest::GetVersionId() const
{
    return m_versionId;
}

void DeployApplicationRequest::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool DeployApplicationRequest::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string DeployApplicationRequest::GetPostStart() const
{
    return m_postStart;
}

void DeployApplicationRequest::SetPostStart(const string& _postStart)
{
    m_postStart = _postStart;
    m_postStartHasBeenSet = true;
}

bool DeployApplicationRequest::PostStartHasBeenSet() const
{
    return m_postStartHasBeenSet;
}

string DeployApplicationRequest::GetPreStop() const
{
    return m_preStop;
}

void DeployApplicationRequest::SetPreStop(const string& _preStop)
{
    m_preStop = _preStop;
    m_preStopHasBeenSet = true;
}

bool DeployApplicationRequest::PreStopHasBeenSet() const
{
    return m_preStopHasBeenSet;
}

HealthCheckConfig DeployApplicationRequest::GetLiveness() const
{
    return m_liveness;
}

void DeployApplicationRequest::SetLiveness(const HealthCheckConfig& _liveness)
{
    m_liveness = _liveness;
    m_livenessHasBeenSet = true;
}

bool DeployApplicationRequest::LivenessHasBeenSet() const
{
    return m_livenessHasBeenSet;
}

HealthCheckConfig DeployApplicationRequest::GetReadiness() const
{
    return m_readiness;
}

void DeployApplicationRequest::SetReadiness(const HealthCheckConfig& _readiness)
{
    m_readiness = _readiness;
    m_readinessHasBeenSet = true;
}

bool DeployApplicationRequest::ReadinessHasBeenSet() const
{
    return m_readinessHasBeenSet;
}

DeployStrategyConf DeployApplicationRequest::GetDeployStrategyConf() const
{
    return m_deployStrategyConf;
}

void DeployApplicationRequest::SetDeployStrategyConf(const DeployStrategyConf& _deployStrategyConf)
{
    m_deployStrategyConf = _deployStrategyConf;
    m_deployStrategyConfHasBeenSet = true;
}

bool DeployApplicationRequest::DeployStrategyConfHasBeenSet() const
{
    return m_deployStrategyConfHasBeenSet;
}

vector<HorizontalAutoscaler> DeployApplicationRequest::GetHorizontalAutoscaler() const
{
    return m_horizontalAutoscaler;
}

void DeployApplicationRequest::SetHorizontalAutoscaler(const vector<HorizontalAutoscaler>& _horizontalAutoscaler)
{
    m_horizontalAutoscaler = _horizontalAutoscaler;
    m_horizontalAutoscalerHasBeenSet = true;
}

bool DeployApplicationRequest::HorizontalAutoscalerHasBeenSet() const
{
    return m_horizontalAutoscalerHasBeenSet;
}

vector<CronHorizontalAutoscaler> DeployApplicationRequest::GetCronHorizontalAutoscaler() const
{
    return m_cronHorizontalAutoscaler;
}

void DeployApplicationRequest::SetCronHorizontalAutoscaler(const vector<CronHorizontalAutoscaler>& _cronHorizontalAutoscaler)
{
    m_cronHorizontalAutoscaler = _cronHorizontalAutoscaler;
    m_cronHorizontalAutoscalerHasBeenSet = true;
}

bool DeployApplicationRequest::CronHorizontalAutoscalerHasBeenSet() const
{
    return m_cronHorizontalAutoscalerHasBeenSet;
}

int64_t DeployApplicationRequest::GetLogEnable() const
{
    return m_logEnable;
}

void DeployApplicationRequest::SetLogEnable(const int64_t& _logEnable)
{
    m_logEnable = _logEnable;
    m_logEnableHasBeenSet = true;
}

bool DeployApplicationRequest::LogEnableHasBeenSet() const
{
    return m_logEnableHasBeenSet;
}

bool DeployApplicationRequest::GetConfEdited() const
{
    return m_confEdited;
}

void DeployApplicationRequest::SetConfEdited(const bool& _confEdited)
{
    m_confEdited = _confEdited;
    m_confEditedHasBeenSet = true;
}

bool DeployApplicationRequest::ConfEditedHasBeenSet() const
{
    return m_confEditedHasBeenSet;
}

bool DeployApplicationRequest::GetSpeedUp() const
{
    return m_speedUp;
}

void DeployApplicationRequest::SetSpeedUp(const bool& _speedUp)
{
    m_speedUp = _speedUp;
    m_speedUpHasBeenSet = true;
}

bool DeployApplicationRequest::SpeedUpHasBeenSet() const
{
    return m_speedUpHasBeenSet;
}

HealthCheckConfig DeployApplicationRequest::GetStartupProbe() const
{
    return m_startupProbe;
}

void DeployApplicationRequest::SetStartupProbe(const HealthCheckConfig& _startupProbe)
{
    m_startupProbe = _startupProbe;
    m_startupProbeHasBeenSet = true;
}

bool DeployApplicationRequest::StartupProbeHasBeenSet() const
{
    return m_startupProbeHasBeenSet;
}

string DeployApplicationRequest::GetOsFlavour() const
{
    return m_osFlavour;
}

void DeployApplicationRequest::SetOsFlavour(const string& _osFlavour)
{
    m_osFlavour = _osFlavour;
    m_osFlavourHasBeenSet = true;
}

bool DeployApplicationRequest::OsFlavourHasBeenSet() const
{
    return m_osFlavourHasBeenSet;
}

EnablePrometheusConf DeployApplicationRequest::GetEnablePrometheusConf() const
{
    return m_enablePrometheusConf;
}

void DeployApplicationRequest::SetEnablePrometheusConf(const EnablePrometheusConf& _enablePrometheusConf)
{
    m_enablePrometheusConf = _enablePrometheusConf;
    m_enablePrometheusConfHasBeenSet = true;
}

bool DeployApplicationRequest::EnablePrometheusConfHasBeenSet() const
{
    return m_enablePrometheusConfHasBeenSet;
}

int64_t DeployApplicationRequest::GetEnableTracing() const
{
    return m_enableTracing;
}

void DeployApplicationRequest::SetEnableTracing(const int64_t& _enableTracing)
{
    m_enableTracing = _enableTracing;
    m_enableTracingHasBeenSet = true;
}

bool DeployApplicationRequest::EnableTracingHasBeenSet() const
{
    return m_enableTracingHasBeenSet;
}

int64_t DeployApplicationRequest::GetEnableMetrics() const
{
    return m_enableMetrics;
}

void DeployApplicationRequest::SetEnableMetrics(const int64_t& _enableMetrics)
{
    m_enableMetrics = _enableMetrics;
    m_enableMetricsHasBeenSet = true;
}

bool DeployApplicationRequest::EnableMetricsHasBeenSet() const
{
    return m_enableMetricsHasBeenSet;
}

string DeployApplicationRequest::GetTcrInstanceId() const
{
    return m_tcrInstanceId;
}

void DeployApplicationRequest::SetTcrInstanceId(const string& _tcrInstanceId)
{
    m_tcrInstanceId = _tcrInstanceId;
    m_tcrInstanceIdHasBeenSet = true;
}

bool DeployApplicationRequest::TcrInstanceIdHasBeenSet() const
{
    return m_tcrInstanceIdHasBeenSet;
}

string DeployApplicationRequest::GetRepoServer() const
{
    return m_repoServer;
}

void DeployApplicationRequest::SetRepoServer(const string& _repoServer)
{
    m_repoServer = _repoServer;
    m_repoServerHasBeenSet = true;
}

bool DeployApplicationRequest::RepoServerHasBeenSet() const
{
    return m_repoServerHasBeenSet;
}

int64_t DeployApplicationRequest::GetRepoType() const
{
    return m_repoType;
}

void DeployApplicationRequest::SetRepoType(const int64_t& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool DeployApplicationRequest::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

string DeployApplicationRequest::GetPostStartEncoded() const
{
    return m_postStartEncoded;
}

void DeployApplicationRequest::SetPostStartEncoded(const string& _postStartEncoded)
{
    m_postStartEncoded = _postStartEncoded;
    m_postStartEncodedHasBeenSet = true;
}

bool DeployApplicationRequest::PostStartEncodedHasBeenSet() const
{
    return m_postStartEncodedHasBeenSet;
}

string DeployApplicationRequest::GetPreStopEncoded() const
{
    return m_preStopEncoded;
}

void DeployApplicationRequest::SetPreStopEncoded(const string& _preStopEncoded)
{
    m_preStopEncoded = _preStopEncoded;
    m_preStopEncodedHasBeenSet = true;
}

bool DeployApplicationRequest::PreStopEncodedHasBeenSet() const
{
    return m_preStopEncodedHasBeenSet;
}


