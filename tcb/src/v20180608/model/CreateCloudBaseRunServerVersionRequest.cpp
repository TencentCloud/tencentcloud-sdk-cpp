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
using namespace rapidjson;
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
    m_enableUnionHasBeenSet(false)
{
}

string CreateCloudBaseRunServerVersionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UploadType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_uploadType.c_str(), allocator).Move(), allocator);
    }

    if (m_flowRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FlowRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flowRatio, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mem, allocator);
    }

    if (m_minNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MinNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minNum, allocator);
    }

    if (m_maxNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxNum, allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_policyThresholdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyThreshold, allocator);
    }

    if (m_containerPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContainerPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_containerPort, allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RepositoryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_repositoryType.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerfilePathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DockerfilePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dockerfilePath.c_str(), allocator).Move(), allocator);
    }

    if (m_buildDirHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BuildDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_buildDir.c_str(), allocator).Move(), allocator);
    }

    if (m_envParamsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_envParams.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Repository";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_repository.c_str(), allocator).Move(), allocator);
    }

    if (m_branchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Branch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_branch.c_str(), allocator).Move(), allocator);
    }

    if (m_versionRemarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VersionRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_versionRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_packageVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PackageVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_packageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_imageInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_codeDetailHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CodeDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_codeDetail.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imageSecretInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageSecretInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_imageSecretInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imagePullSecretHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImagePullSecret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imagePullSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_customLogsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomLogs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_customLogs.c_str(), allocator).Move(), allocator);
    }

    if (m_initialDelaySecondsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InitialDelaySeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_initialDelaySeconds, allocator);
    }

    if (m_mountVolumeInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MountVolumeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mountVolumeInfo.begin(); itr != m_mountVolumeInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_accessTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessType, allocator);
    }

    if (m_esInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EsInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_esInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableUnionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableUnion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableUnion, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


