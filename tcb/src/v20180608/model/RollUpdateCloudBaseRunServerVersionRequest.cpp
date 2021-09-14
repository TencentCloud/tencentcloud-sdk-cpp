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

#include <tencentcloud/tcb/v20180608/model/RollUpdateCloudBaseRunServerVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

RollUpdateCloudBaseRunServerVersionRequest::RollUpdateCloudBaseRunServerVersionRequest() :
    m_envIdHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_uploadTypeHasBeenSet(false),
    m_repositoryTypeHasBeenSet(false),
    m_flowRatioHasBeenSet(false),
    m_dockerfilePathHasBeenSet(false),
    m_buildDirHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_minNumHasBeenSet(false),
    m_maxNumHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policyThresholdHasBeenSet(false),
    m_envParamsHasBeenSet(false),
    m_containerPortHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_versionRemarkHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_imageInfoHasBeenSet(false),
    m_codeDetailHasBeenSet(false),
    m_isRebuildHasBeenSet(false),
    m_initialDelaySecondsHasBeenSet(false),
    m_mountVolumeInfoHasBeenSet(false),
    m_rollbackHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_customLogsHasBeenSet(false),
    m_enableUnionHasBeenSet(false),
    m_operatorRemarkHasBeenSet(false),
    m_serverPathHasBeenSet(false),
    m_isUpdateClsHasBeenSet(false),
    m_policyDetailHasBeenSet(false)
{
}

string RollUpdateCloudBaseRunServerVersionRequest::ToJsonString() const
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

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uploadType.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repositoryType.c_str(), allocator).Move(), allocator);
    }

    if (m_flowRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flowRatio, allocator);
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

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cpu.c_str(), allocator).Move(), allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mem.c_str(), allocator).Move(), allocator);
    }

    if (m_minNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_minNum.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maxNum.c_str(), allocator).Move(), allocator);
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
        d.AddMember(iKey, rapidjson::Value(m_policyThreshold.c_str(), allocator).Move(), allocator);
    }

    if (m_envParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envParams.c_str(), allocator).Move(), allocator);
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

    if (m_isRebuildHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRebuild";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRebuild, allocator);
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

    if (m_rollbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rollback";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rollback, allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_customLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomLogs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customLogs.c_str(), allocator).Move(), allocator);
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

    if (m_isUpdateClsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUpdateCls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isUpdateCls, allocator);
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


string RollUpdateCloudBaseRunServerVersionRequest::GetEnvId() const
{
    return m_envId;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetVersionName() const
{
    return m_versionName;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetUploadType() const
{
    return m_uploadType;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetUploadType(const string& _uploadType)
{
    m_uploadType = _uploadType;
    m_uploadTypeHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::UploadTypeHasBeenSet() const
{
    return m_uploadTypeHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetRepositoryType() const
{
    return m_repositoryType;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetRepositoryType(const string& _repositoryType)
{
    m_repositoryType = _repositoryType;
    m_repositoryTypeHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::RepositoryTypeHasBeenSet() const
{
    return m_repositoryTypeHasBeenSet;
}

int64_t RollUpdateCloudBaseRunServerVersionRequest::GetFlowRatio() const
{
    return m_flowRatio;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetFlowRatio(const int64_t& _flowRatio)
{
    m_flowRatio = _flowRatio;
    m_flowRatioHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::FlowRatioHasBeenSet() const
{
    return m_flowRatioHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetDockerfilePath() const
{
    return m_dockerfilePath;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetDockerfilePath(const string& _dockerfilePath)
{
    m_dockerfilePath = _dockerfilePath;
    m_dockerfilePathHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::DockerfilePathHasBeenSet() const
{
    return m_dockerfilePathHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetBuildDir() const
{
    return m_buildDir;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetBuildDir(const string& _buildDir)
{
    m_buildDir = _buildDir;
    m_buildDirHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::BuildDirHasBeenSet() const
{
    return m_buildDirHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetCpu() const
{
    return m_cpu;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetCpu(const string& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetMem() const
{
    return m_mem;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetMem(const string& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetMinNum() const
{
    return m_minNum;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetMinNum(const string& _minNum)
{
    m_minNum = _minNum;
    m_minNumHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::MinNumHasBeenSet() const
{
    return m_minNumHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetMaxNum() const
{
    return m_maxNum;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetMaxNum(const string& _maxNum)
{
    m_maxNum = _maxNum;
    m_maxNumHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::MaxNumHasBeenSet() const
{
    return m_maxNumHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetPolicyType() const
{
    return m_policyType;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetPolicyThreshold() const
{
    return m_policyThreshold;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetPolicyThreshold(const string& _policyThreshold)
{
    m_policyThreshold = _policyThreshold;
    m_policyThresholdHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::PolicyThresholdHasBeenSet() const
{
    return m_policyThresholdHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetEnvParams() const
{
    return m_envParams;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetEnvParams(const string& _envParams)
{
    m_envParams = _envParams;
    m_envParamsHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::EnvParamsHasBeenSet() const
{
    return m_envParamsHasBeenSet;
}

int64_t RollUpdateCloudBaseRunServerVersionRequest::GetContainerPort() const
{
    return m_containerPort;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetContainerPort(const int64_t& _containerPort)
{
    m_containerPort = _containerPort;
    m_containerPortHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::ContainerPortHasBeenSet() const
{
    return m_containerPortHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetServerName() const
{
    return m_serverName;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetRepository() const
{
    return m_repository;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetRepository(const string& _repository)
{
    m_repository = _repository;
    m_repositoryHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::RepositoryHasBeenSet() const
{
    return m_repositoryHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetBranch() const
{
    return m_branch;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetBranch(const string& _branch)
{
    m_branch = _branch;
    m_branchHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::BranchHasBeenSet() const
{
    return m_branchHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetVersionRemark() const
{
    return m_versionRemark;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetVersionRemark(const string& _versionRemark)
{
    m_versionRemark = _versionRemark;
    m_versionRemarkHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::VersionRemarkHasBeenSet() const
{
    return m_versionRemarkHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetPackageName() const
{
    return m_packageName;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetPackageVersion() const
{
    return m_packageVersion;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetPackageVersion(const string& _packageVersion)
{
    m_packageVersion = _packageVersion;
    m_packageVersionHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}

CloudBaseRunImageInfo RollUpdateCloudBaseRunServerVersionRequest::GetImageInfo() const
{
    return m_imageInfo;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetImageInfo(const CloudBaseRunImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

CloudBaseCodeRepoDetail RollUpdateCloudBaseRunServerVersionRequest::GetCodeDetail() const
{
    return m_codeDetail;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetCodeDetail(const CloudBaseCodeRepoDetail& _codeDetail)
{
    m_codeDetail = _codeDetail;
    m_codeDetailHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::CodeDetailHasBeenSet() const
{
    return m_codeDetailHasBeenSet;
}

bool RollUpdateCloudBaseRunServerVersionRequest::GetIsRebuild() const
{
    return m_isRebuild;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetIsRebuild(const bool& _isRebuild)
{
    m_isRebuild = _isRebuild;
    m_isRebuildHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::IsRebuildHasBeenSet() const
{
    return m_isRebuildHasBeenSet;
}

int64_t RollUpdateCloudBaseRunServerVersionRequest::GetInitialDelaySeconds() const
{
    return m_initialDelaySeconds;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetInitialDelaySeconds(const int64_t& _initialDelaySeconds)
{
    m_initialDelaySeconds = _initialDelaySeconds;
    m_initialDelaySecondsHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::InitialDelaySecondsHasBeenSet() const
{
    return m_initialDelaySecondsHasBeenSet;
}

vector<CloudBaseRunVolumeMount> RollUpdateCloudBaseRunServerVersionRequest::GetMountVolumeInfo() const
{
    return m_mountVolumeInfo;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetMountVolumeInfo(const vector<CloudBaseRunVolumeMount>& _mountVolumeInfo)
{
    m_mountVolumeInfo = _mountVolumeInfo;
    m_mountVolumeInfoHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::MountVolumeInfoHasBeenSet() const
{
    return m_mountVolumeInfoHasBeenSet;
}

bool RollUpdateCloudBaseRunServerVersionRequest::GetRollback() const
{
    return m_rollback;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetRollback(const bool& _rollback)
{
    m_rollback = _rollback;
    m_rollbackHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::RollbackHasBeenSet() const
{
    return m_rollbackHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetSnapshotName() const
{
    return m_snapshotName;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetCustomLogs() const
{
    return m_customLogs;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetCustomLogs(const string& _customLogs)
{
    m_customLogs = _customLogs;
    m_customLogsHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::CustomLogsHasBeenSet() const
{
    return m_customLogsHasBeenSet;
}

bool RollUpdateCloudBaseRunServerVersionRequest::GetEnableUnion() const
{
    return m_enableUnion;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetEnableUnion(const bool& _enableUnion)
{
    m_enableUnion = _enableUnion;
    m_enableUnionHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::EnableUnionHasBeenSet() const
{
    return m_enableUnionHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetOperatorRemark() const
{
    return m_operatorRemark;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetOperatorRemark(const string& _operatorRemark)
{
    m_operatorRemark = _operatorRemark;
    m_operatorRemarkHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::OperatorRemarkHasBeenSet() const
{
    return m_operatorRemarkHasBeenSet;
}

string RollUpdateCloudBaseRunServerVersionRequest::GetServerPath() const
{
    return m_serverPath;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetServerPath(const string& _serverPath)
{
    m_serverPath = _serverPath;
    m_serverPathHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::ServerPathHasBeenSet() const
{
    return m_serverPathHasBeenSet;
}

bool RollUpdateCloudBaseRunServerVersionRequest::GetIsUpdateCls() const
{
    return m_isUpdateCls;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetIsUpdateCls(const bool& _isUpdateCls)
{
    m_isUpdateCls = _isUpdateCls;
    m_isUpdateClsHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::IsUpdateClsHasBeenSet() const
{
    return m_isUpdateClsHasBeenSet;
}

vector<HpaPolicy> RollUpdateCloudBaseRunServerVersionRequest::GetPolicyDetail() const
{
    return m_policyDetail;
}

void RollUpdateCloudBaseRunServerVersionRequest::SetPolicyDetail(const vector<HpaPolicy>& _policyDetail)
{
    m_policyDetail = _policyDetail;
    m_policyDetailHasBeenSet = true;
}

bool RollUpdateCloudBaseRunServerVersionRequest::PolicyDetailHasBeenSet() const
{
    return m_policyDetailHasBeenSet;
}


