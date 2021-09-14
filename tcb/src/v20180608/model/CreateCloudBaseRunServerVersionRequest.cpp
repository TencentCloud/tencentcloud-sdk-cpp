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

#include <tencentcloud/tcb/v20180608/model/CreateCloudBaseRunServerVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateCloudBaseRunServerVersionRequest::CreateCloudBaseRunServerVersionRequest() :
    m_envIdHasBeenSet(false),
    m_uploadTypeHasBeenSet(false),
    m_flowRatioHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_minNumHasBeenSet(false),
    m_maxNumHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policyThresholdHasBeenSet(false),
    m_containerPortHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_repositoryTypeHasBeenSet(false),
    m_dockerfilePathHasBeenSet(false),
    m_buildDirHasBeenSet(false),
    m_envParamsHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_versionRemarkHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_imageInfoHasBeenSet(false),
    m_codeDetailHasBeenSet(false),
    m_imageSecretInfoHasBeenSet(false),
    m_imagePullSecretHasBeenSet(false),
    m_customLogsHasBeenSet(false),
    m_initialDelaySecondsHasBeenSet(false),
    m_mountVolumeInfoHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_esInfoHasBeenSet(false),
    m_enableUnionHasBeenSet(false),
    m_operatorRemarkHasBeenSet(false),
    m_serverPathHasBeenSet(false),
    m_imageReuseKeyHasBeenSet(false),
    m_sidecarSpecsHasBeenSet(false),
    m_securityHasBeenSet(false),
    m_serviceVolumesHasBeenSet(false),
    m_isCreateJnsGwHasBeenSet(false),
    m_serviceVolumeMountsHasBeenSet(false),
    m_hasDockerfileHasBeenSet(false),
    m_baseImageHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_repoLanguageHasBeenSet(false),
    m_uploadFilenameHasBeenSet(false),
    m_policyDetailHasBeenSet(false)
{
}

string CreateCloudBaseRunServerVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uploadType.c_str(), allocator).Move(), allocator);
    }

    if (m_flowRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flowRatio, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mem, allocator);
    }

    if (m_minNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minNum, allocator);
    }

    if (m_maxNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxNum, allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_policyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyThreshold, allocator);
    }

    if (m_containerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_containerPort, allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repositoryType.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerfilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerfilePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dockerfilePath.c_str(), allocator).Move(), allocator);
    }

    if (m_buildDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buildDir.c_str(), allocator).Move(), allocator);
    }

    if (m_envParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envParams.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repository";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repository.c_str(), allocator).Move(), allocator);
    }

    if (m_branchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_branch.c_str(), allocator).Move(), allocator);
    }

    if (m_versionRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_packageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_codeDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_codeDetail.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imageSecretInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSecretInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageSecretInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imagePullSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullSecret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imagePullSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_customLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomLogs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customLogs.c_str(), allocator).Move(), allocator);
    }

    if (m_initialDelaySecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialDelaySeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_initialDelaySeconds, allocator);
    }

    if (m_mountVolumeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountVolumeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mountVolumeInfo.begin(); itr != m_mountVolumeInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessType, allocator);
    }

    if (m_esInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableUnionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableUnion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableUnion, allocator);
    }

    if (m_operatorRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operatorRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_serverPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverPath.c_str(), allocator).Move(), allocator);
    }

    if (m_imageReuseKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageReuseKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageReuseKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sidecarSpecsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SidecarSpecs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sidecarSpecs.begin(); itr != m_sidecarSpecs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_securityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Security";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_security.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serviceVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVolumes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceVolumes.begin(); itr != m_serviceVolumes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isCreateJnsGwHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCreateJnsGw";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCreateJnsGw, allocator);
    }

    if (m_serviceVolumeMountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVolumeMounts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceVolumeMounts.begin(); itr != m_serviceVolumeMounts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_hasDockerfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasDockerfile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasDockerfile, allocator);
    }

    if (m_baseImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baseImage.c_str(), allocator).Move(), allocator);
    }

    if (m_entryPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryPoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entryPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_repoLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadFilenameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadFilename";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uploadFilename.c_str(), allocator).Move(), allocator);
    }

    if (m_policyDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policyDetail.begin(); itr != m_policyDetail.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudBaseRunServerVersionRequest::GetEnvId() const
{
    return m_envId;
}

void CreateCloudBaseRunServerVersionRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetUploadType() const
{
    return m_uploadType;
}

void CreateCloudBaseRunServerVersionRequest::SetUploadType(const string& _uploadType)
{
    m_uploadType = _uploadType;
    m_uploadTypeHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::UploadTypeHasBeenSet() const
{
    return m_uploadTypeHasBeenSet;
}

int64_t CreateCloudBaseRunServerVersionRequest::GetFlowRatio() const
{
    return m_flowRatio;
}

void CreateCloudBaseRunServerVersionRequest::SetFlowRatio(const int64_t& _flowRatio)
{
    m_flowRatio = _flowRatio;
    m_flowRatioHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::FlowRatioHasBeenSet() const
{
    return m_flowRatioHasBeenSet;
}

double CreateCloudBaseRunServerVersionRequest::GetCpu() const
{
    return m_cpu;
}

void CreateCloudBaseRunServerVersionRequest::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double CreateCloudBaseRunServerVersionRequest::GetMem() const
{
    return m_mem;
}

void CreateCloudBaseRunServerVersionRequest::SetMem(const double& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

int64_t CreateCloudBaseRunServerVersionRequest::GetMinNum() const
{
    return m_minNum;
}

void CreateCloudBaseRunServerVersionRequest::SetMinNum(const int64_t& _minNum)
{
    m_minNum = _minNum;
    m_minNumHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::MinNumHasBeenSet() const
{
    return m_minNumHasBeenSet;
}

int64_t CreateCloudBaseRunServerVersionRequest::GetMaxNum() const
{
    return m_maxNum;
}

void CreateCloudBaseRunServerVersionRequest::SetMaxNum(const int64_t& _maxNum)
{
    m_maxNum = _maxNum;
    m_maxNumHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::MaxNumHasBeenSet() const
{
    return m_maxNumHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetPolicyType() const
{
    return m_policyType;
}

void CreateCloudBaseRunServerVersionRequest::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

int64_t CreateCloudBaseRunServerVersionRequest::GetPolicyThreshold() const
{
    return m_policyThreshold;
}

void CreateCloudBaseRunServerVersionRequest::SetPolicyThreshold(const int64_t& _policyThreshold)
{
    m_policyThreshold = _policyThreshold;
    m_policyThresholdHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::PolicyThresholdHasBeenSet() const
{
    return m_policyThresholdHasBeenSet;
}

int64_t CreateCloudBaseRunServerVersionRequest::GetContainerPort() const
{
    return m_containerPort;
}

void CreateCloudBaseRunServerVersionRequest::SetContainerPort(const int64_t& _containerPort)
{
    m_containerPort = _containerPort;
    m_containerPortHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::ContainerPortHasBeenSet() const
{
    return m_containerPortHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetServerName() const
{
    return m_serverName;
}

void CreateCloudBaseRunServerVersionRequest::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetRepositoryType() const
{
    return m_repositoryType;
}

void CreateCloudBaseRunServerVersionRequest::SetRepositoryType(const string& _repositoryType)
{
    m_repositoryType = _repositoryType;
    m_repositoryTypeHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::RepositoryTypeHasBeenSet() const
{
    return m_repositoryTypeHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetDockerfilePath() const
{
    return m_dockerfilePath;
}

void CreateCloudBaseRunServerVersionRequest::SetDockerfilePath(const string& _dockerfilePath)
{
    m_dockerfilePath = _dockerfilePath;
    m_dockerfilePathHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::DockerfilePathHasBeenSet() const
{
    return m_dockerfilePathHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetBuildDir() const
{
    return m_buildDir;
}

void CreateCloudBaseRunServerVersionRequest::SetBuildDir(const string& _buildDir)
{
    m_buildDir = _buildDir;
    m_buildDirHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::BuildDirHasBeenSet() const
{
    return m_buildDirHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetEnvParams() const
{
    return m_envParams;
}

void CreateCloudBaseRunServerVersionRequest::SetEnvParams(const string& _envParams)
{
    m_envParams = _envParams;
    m_envParamsHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::EnvParamsHasBeenSet() const
{
    return m_envParamsHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetRepository() const
{
    return m_repository;
}

void CreateCloudBaseRunServerVersionRequest::SetRepository(const string& _repository)
{
    m_repository = _repository;
    m_repositoryHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::RepositoryHasBeenSet() const
{
    return m_repositoryHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetBranch() const
{
    return m_branch;
}

void CreateCloudBaseRunServerVersionRequest::SetBranch(const string& _branch)
{
    m_branch = _branch;
    m_branchHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::BranchHasBeenSet() const
{
    return m_branchHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetVersionRemark() const
{
    return m_versionRemark;
}

void CreateCloudBaseRunServerVersionRequest::SetVersionRemark(const string& _versionRemark)
{
    m_versionRemark = _versionRemark;
    m_versionRemarkHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::VersionRemarkHasBeenSet() const
{
    return m_versionRemarkHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetPackageName() const
{
    return m_packageName;
}

void CreateCloudBaseRunServerVersionRequest::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetPackageVersion() const
{
    return m_packageVersion;
}

void CreateCloudBaseRunServerVersionRequest::SetPackageVersion(const string& _packageVersion)
{
    m_packageVersion = _packageVersion;
    m_packageVersionHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}

CloudBaseRunImageInfo CreateCloudBaseRunServerVersionRequest::GetImageInfo() const
{
    return m_imageInfo;
}

void CreateCloudBaseRunServerVersionRequest::SetImageInfo(const CloudBaseRunImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

CloudBaseCodeRepoDetail CreateCloudBaseRunServerVersionRequest::GetCodeDetail() const
{
    return m_codeDetail;
}

void CreateCloudBaseRunServerVersionRequest::SetCodeDetail(const CloudBaseCodeRepoDetail& _codeDetail)
{
    m_codeDetail = _codeDetail;
    m_codeDetailHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::CodeDetailHasBeenSet() const
{
    return m_codeDetailHasBeenSet;
}

CloudBaseRunImageSecretInfo CreateCloudBaseRunServerVersionRequest::GetImageSecretInfo() const
{
    return m_imageSecretInfo;
}

void CreateCloudBaseRunServerVersionRequest::SetImageSecretInfo(const CloudBaseRunImageSecretInfo& _imageSecretInfo)
{
    m_imageSecretInfo = _imageSecretInfo;
    m_imageSecretInfoHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::ImageSecretInfoHasBeenSet() const
{
    return m_imageSecretInfoHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetImagePullSecret() const
{
    return m_imagePullSecret;
}

void CreateCloudBaseRunServerVersionRequest::SetImagePullSecret(const string& _imagePullSecret)
{
    m_imagePullSecret = _imagePullSecret;
    m_imagePullSecretHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::ImagePullSecretHasBeenSet() const
{
    return m_imagePullSecretHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetCustomLogs() const
{
    return m_customLogs;
}

void CreateCloudBaseRunServerVersionRequest::SetCustomLogs(const string& _customLogs)
{
    m_customLogs = _customLogs;
    m_customLogsHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::CustomLogsHasBeenSet() const
{
    return m_customLogsHasBeenSet;
}

int64_t CreateCloudBaseRunServerVersionRequest::GetInitialDelaySeconds() const
{
    return m_initialDelaySeconds;
}

void CreateCloudBaseRunServerVersionRequest::SetInitialDelaySeconds(const int64_t& _initialDelaySeconds)
{
    m_initialDelaySeconds = _initialDelaySeconds;
    m_initialDelaySecondsHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::InitialDelaySecondsHasBeenSet() const
{
    return m_initialDelaySecondsHasBeenSet;
}

vector<CloudBaseRunVolumeMount> CreateCloudBaseRunServerVersionRequest::GetMountVolumeInfo() const
{
    return m_mountVolumeInfo;
}

void CreateCloudBaseRunServerVersionRequest::SetMountVolumeInfo(const vector<CloudBaseRunVolumeMount>& _mountVolumeInfo)
{
    m_mountVolumeInfo = _mountVolumeInfo;
    m_mountVolumeInfoHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::MountVolumeInfoHasBeenSet() const
{
    return m_mountVolumeInfoHasBeenSet;
}

int64_t CreateCloudBaseRunServerVersionRequest::GetAccessType() const
{
    return m_accessType;
}

void CreateCloudBaseRunServerVersionRequest::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

CloudBaseEsInfo CreateCloudBaseRunServerVersionRequest::GetEsInfo() const
{
    return m_esInfo;
}

void CreateCloudBaseRunServerVersionRequest::SetEsInfo(const CloudBaseEsInfo& _esInfo)
{
    m_esInfo = _esInfo;
    m_esInfoHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::EsInfoHasBeenSet() const
{
    return m_esInfoHasBeenSet;
}

bool CreateCloudBaseRunServerVersionRequest::GetEnableUnion() const
{
    return m_enableUnion;
}

void CreateCloudBaseRunServerVersionRequest::SetEnableUnion(const bool& _enableUnion)
{
    m_enableUnion = _enableUnion;
    m_enableUnionHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::EnableUnionHasBeenSet() const
{
    return m_enableUnionHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetOperatorRemark() const
{
    return m_operatorRemark;
}

void CreateCloudBaseRunServerVersionRequest::SetOperatorRemark(const string& _operatorRemark)
{
    m_operatorRemark = _operatorRemark;
    m_operatorRemarkHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::OperatorRemarkHasBeenSet() const
{
    return m_operatorRemarkHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetServerPath() const
{
    return m_serverPath;
}

void CreateCloudBaseRunServerVersionRequest::SetServerPath(const string& _serverPath)
{
    m_serverPath = _serverPath;
    m_serverPathHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::ServerPathHasBeenSet() const
{
    return m_serverPathHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetImageReuseKey() const
{
    return m_imageReuseKey;
}

void CreateCloudBaseRunServerVersionRequest::SetImageReuseKey(const string& _imageReuseKey)
{
    m_imageReuseKey = _imageReuseKey;
    m_imageReuseKeyHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::ImageReuseKeyHasBeenSet() const
{
    return m_imageReuseKeyHasBeenSet;
}

vector<CloudBaseRunSideSpec> CreateCloudBaseRunServerVersionRequest::GetSidecarSpecs() const
{
    return m_sidecarSpecs;
}

void CreateCloudBaseRunServerVersionRequest::SetSidecarSpecs(const vector<CloudBaseRunSideSpec>& _sidecarSpecs)
{
    m_sidecarSpecs = _sidecarSpecs;
    m_sidecarSpecsHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::SidecarSpecsHasBeenSet() const
{
    return m_sidecarSpecsHasBeenSet;
}

CloudBaseSecurityContext CreateCloudBaseRunServerVersionRequest::GetSecurity() const
{
    return m_security;
}

void CreateCloudBaseRunServerVersionRequest::SetSecurity(const CloudBaseSecurityContext& _security)
{
    m_security = _security;
    m_securityHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::SecurityHasBeenSet() const
{
    return m_securityHasBeenSet;
}

vector<CloudRunServiceVolume> CreateCloudBaseRunServerVersionRequest::GetServiceVolumes() const
{
    return m_serviceVolumes;
}

void CreateCloudBaseRunServerVersionRequest::SetServiceVolumes(const vector<CloudRunServiceVolume>& _serviceVolumes)
{
    m_serviceVolumes = _serviceVolumes;
    m_serviceVolumesHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::ServiceVolumesHasBeenSet() const
{
    return m_serviceVolumesHasBeenSet;
}

int64_t CreateCloudBaseRunServerVersionRequest::GetIsCreateJnsGw() const
{
    return m_isCreateJnsGw;
}

void CreateCloudBaseRunServerVersionRequest::SetIsCreateJnsGw(const int64_t& _isCreateJnsGw)
{
    m_isCreateJnsGw = _isCreateJnsGw;
    m_isCreateJnsGwHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::IsCreateJnsGwHasBeenSet() const
{
    return m_isCreateJnsGwHasBeenSet;
}

vector<CloudBaseRunServiceVolumeMount> CreateCloudBaseRunServerVersionRequest::GetServiceVolumeMounts() const
{
    return m_serviceVolumeMounts;
}

void CreateCloudBaseRunServerVersionRequest::SetServiceVolumeMounts(const vector<CloudBaseRunServiceVolumeMount>& _serviceVolumeMounts)
{
    m_serviceVolumeMounts = _serviceVolumeMounts;
    m_serviceVolumeMountsHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::ServiceVolumeMountsHasBeenSet() const
{
    return m_serviceVolumeMountsHasBeenSet;
}

int64_t CreateCloudBaseRunServerVersionRequest::GetHasDockerfile() const
{
    return m_hasDockerfile;
}

void CreateCloudBaseRunServerVersionRequest::SetHasDockerfile(const int64_t& _hasDockerfile)
{
    m_hasDockerfile = _hasDockerfile;
    m_hasDockerfileHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::HasDockerfileHasBeenSet() const
{
    return m_hasDockerfileHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetBaseImage() const
{
    return m_baseImage;
}

void CreateCloudBaseRunServerVersionRequest::SetBaseImage(const string& _baseImage)
{
    m_baseImage = _baseImage;
    m_baseImageHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::BaseImageHasBeenSet() const
{
    return m_baseImageHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetEntryPoint() const
{
    return m_entryPoint;
}

void CreateCloudBaseRunServerVersionRequest::SetEntryPoint(const string& _entryPoint)
{
    m_entryPoint = _entryPoint;
    m_entryPointHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::EntryPointHasBeenSet() const
{
    return m_entryPointHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetRepoLanguage() const
{
    return m_repoLanguage;
}

void CreateCloudBaseRunServerVersionRequest::SetRepoLanguage(const string& _repoLanguage)
{
    m_repoLanguage = _repoLanguage;
    m_repoLanguageHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::RepoLanguageHasBeenSet() const
{
    return m_repoLanguageHasBeenSet;
}

string CreateCloudBaseRunServerVersionRequest::GetUploadFilename() const
{
    return m_uploadFilename;
}

void CreateCloudBaseRunServerVersionRequest::SetUploadFilename(const string& _uploadFilename)
{
    m_uploadFilename = _uploadFilename;
    m_uploadFilenameHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::UploadFilenameHasBeenSet() const
{
    return m_uploadFilenameHasBeenSet;
}

vector<HpaPolicy> CreateCloudBaseRunServerVersionRequest::GetPolicyDetail() const
{
    return m_policyDetail;
}

void CreateCloudBaseRunServerVersionRequest::SetPolicyDetail(const vector<HpaPolicy>& _policyDetail)
{
    m_policyDetail = _policyDetail;
    m_policyDetailHasBeenSet = true;
}

bool CreateCloudBaseRunServerVersionRequest::PolicyDetailHasBeenSet() const
{
    return m_policyDetailHasBeenSet;
}


