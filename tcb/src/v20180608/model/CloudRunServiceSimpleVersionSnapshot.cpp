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

#include <tencentcloud/tcb/v20180608/model/CloudRunServiceSimpleVersionSnapshot.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudRunServiceSimpleVersionSnapshot::CloudRunServiceSimpleVersionSnapshot() :
    m_versionNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_minNumHasBeenSet(false),
    m_maxNumHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policyThresholdHasBeenSet(false),
    m_envParamsHasBeenSet(false),
    m_containerPortHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_uploadTypeHasBeenSet(false),
    m_dockerfilePathHasBeenSet(false),
    m_buildDirHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_repoHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_customLogsHasBeenSet(false),
    m_initialDelaySecondsHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_imageInfoHasBeenSet(false),
    m_codeDetailHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome CloudRunServiceSimpleVersionSnapshot::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.Cpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetDouble();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.Mem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetDouble();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("MinNum") && !value["MinNum"].IsNull())
    {
        if (!value["MinNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.MinNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minNum = value["MinNum"].GetInt64();
        m_minNumHasBeenSet = true;
    }

    if (value.HasMember("MaxNum") && !value["MaxNum"].IsNull())
    {
        if (!value["MaxNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.MaxNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNum = value["MaxNum"].GetInt64();
        m_maxNumHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(value["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicyThreshold") && !value["PolicyThreshold"].IsNull())
    {
        if (!value["PolicyThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.PolicyThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyThreshold = value["PolicyThreshold"].GetInt64();
        m_policyThresholdHasBeenSet = true;
    }

    if (value.HasMember("EnvParams") && !value["EnvParams"].IsNull())
    {
        if (!value["EnvParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.EnvParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envParams = string(value["EnvParams"].GetString());
        m_envParamsHasBeenSet = true;
    }

    if (value.HasMember("ContainerPort") && !value["ContainerPort"].IsNull())
    {
        if (!value["ContainerPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.ContainerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerPort = value["ContainerPort"].GetInt64();
        m_containerPortHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("UploadType") && !value["UploadType"].IsNull())
    {
        if (!value["UploadType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.UploadType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadType = string(value["UploadType"].GetString());
        m_uploadTypeHasBeenSet = true;
    }

    if (value.HasMember("DockerfilePath") && !value["DockerfilePath"].IsNull())
    {
        if (!value["DockerfilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.DockerfilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerfilePath = string(value["DockerfilePath"].GetString());
        m_dockerfilePathHasBeenSet = true;
    }

    if (value.HasMember("BuildDir") && !value["BuildDir"].IsNull())
    {
        if (!value["BuildDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.BuildDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildDir = string(value["BuildDir"].GetString());
        m_buildDirHasBeenSet = true;
    }

    if (value.HasMember("RepoType") && !value["RepoType"].IsNull())
    {
        if (!value["RepoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.RepoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoType = string(value["RepoType"].GetString());
        m_repoTypeHasBeenSet = true;
    }

    if (value.HasMember("Repo") && !value["Repo"].IsNull())
    {
        if (!value["Repo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.Repo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repo = string(value["Repo"].GetString());
        m_repoHasBeenSet = true;
    }

    if (value.HasMember("Branch") && !value["Branch"].IsNull())
    {
        if (!value["Branch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.Branch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_branch = string(value["Branch"].GetString());
        m_branchHasBeenSet = true;
    }

    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("ServerName") && !value["ServerName"].IsNull())
    {
        if (!value["ServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(value["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("PackageVersion") && !value["PackageVersion"].IsNull())
    {
        if (!value["PackageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.PackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageVersion = string(value["PackageVersion"].GetString());
        m_packageVersionHasBeenSet = true;
    }

    if (value.HasMember("CustomLogs") && !value["CustomLogs"].IsNull())
    {
        if (!value["CustomLogs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.CustomLogs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customLogs = string(value["CustomLogs"].GetString());
        m_customLogsHasBeenSet = true;
    }

    if (value.HasMember("InitialDelaySeconds") && !value["InitialDelaySeconds"].IsNull())
    {
        if (!value["InitialDelaySeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.InitialDelaySeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initialDelaySeconds = value["InitialDelaySeconds"].GetInt64();
        m_initialDelaySecondsHasBeenSet = true;
    }

    if (value.HasMember("SnapshotName") && !value["SnapshotName"].IsNull())
    {
        if (!value["SnapshotName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.SnapshotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotName = string(value["SnapshotName"].GetString());
        m_snapshotNameHasBeenSet = true;
    }

    if (value.HasMember("ImageInfo") && !value["ImageInfo"].IsNull())
    {
        if (!value["ImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.ImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageInfo.Deserialize(value["ImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageInfoHasBeenSet = true;
    }

    if (value.HasMember("CodeDetail") && !value["CodeDetail"].IsNull())
    {
        if (!value["CodeDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.CodeDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_codeDetail.Deserialize(value["CodeDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_codeDetailHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceSimpleVersionSnapshot.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudRunServiceSimpleVersionSnapshot::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

    if (m_minNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minNum, allocator);
    }

    if (m_maxNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNum, allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_policyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyThreshold, allocator);
    }

    if (m_envParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envParams.c_str(), allocator).Move(), allocator);
    }

    if (m_containerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerPort, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadType.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerfilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerfilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerfilePath.c_str(), allocator).Move(), allocator);
    }

    if (m_buildDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildDir.c_str(), allocator).Move(), allocator);
    }

    if (m_repoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoType.c_str(), allocator).Move(), allocator);
    }

    if (m_repoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repo.c_str(), allocator).Move(), allocator);
    }

    if (m_branchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_branch.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_packageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_customLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomLogs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customLogs.c_str(), allocator).Move(), allocator);
    }

    if (m_initialDelaySecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialDelaySeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initialDelaySeconds, allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_codeDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_codeDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string CloudRunServiceSimpleVersionSnapshot::GetVersionName() const
{
    return m_versionName;
}

void CloudRunServiceSimpleVersionSnapshot::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetRemark() const
{
    return m_remark;
}

void CloudRunServiceSimpleVersionSnapshot::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

double CloudRunServiceSimpleVersionSnapshot::GetCpu() const
{
    return m_cpu;
}

void CloudRunServiceSimpleVersionSnapshot::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double CloudRunServiceSimpleVersionSnapshot::GetMem() const
{
    return m_mem;
}

void CloudRunServiceSimpleVersionSnapshot::SetMem(const double& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

int64_t CloudRunServiceSimpleVersionSnapshot::GetMinNum() const
{
    return m_minNum;
}

void CloudRunServiceSimpleVersionSnapshot::SetMinNum(const int64_t& _minNum)
{
    m_minNum = _minNum;
    m_minNumHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::MinNumHasBeenSet() const
{
    return m_minNumHasBeenSet;
}

int64_t CloudRunServiceSimpleVersionSnapshot::GetMaxNum() const
{
    return m_maxNum;
}

void CloudRunServiceSimpleVersionSnapshot::SetMaxNum(const int64_t& _maxNum)
{
    m_maxNum = _maxNum;
    m_maxNumHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::MaxNumHasBeenSet() const
{
    return m_maxNumHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetImageUrl() const
{
    return m_imageUrl;
}

void CloudRunServiceSimpleVersionSnapshot::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetPolicyType() const
{
    return m_policyType;
}

void CloudRunServiceSimpleVersionSnapshot::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

int64_t CloudRunServiceSimpleVersionSnapshot::GetPolicyThreshold() const
{
    return m_policyThreshold;
}

void CloudRunServiceSimpleVersionSnapshot::SetPolicyThreshold(const int64_t& _policyThreshold)
{
    m_policyThreshold = _policyThreshold;
    m_policyThresholdHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::PolicyThresholdHasBeenSet() const
{
    return m_policyThresholdHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetEnvParams() const
{
    return m_envParams;
}

void CloudRunServiceSimpleVersionSnapshot::SetEnvParams(const string& _envParams)
{
    m_envParams = _envParams;
    m_envParamsHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::EnvParamsHasBeenSet() const
{
    return m_envParamsHasBeenSet;
}

int64_t CloudRunServiceSimpleVersionSnapshot::GetContainerPort() const
{
    return m_containerPort;
}

void CloudRunServiceSimpleVersionSnapshot::SetContainerPort(const int64_t& _containerPort)
{
    m_containerPort = _containerPort;
    m_containerPortHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::ContainerPortHasBeenSet() const
{
    return m_containerPortHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetCreateTime() const
{
    return m_createTime;
}

void CloudRunServiceSimpleVersionSnapshot::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetUpdateTime() const
{
    return m_updateTime;
}

void CloudRunServiceSimpleVersionSnapshot::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetUploadType() const
{
    return m_uploadType;
}

void CloudRunServiceSimpleVersionSnapshot::SetUploadType(const string& _uploadType)
{
    m_uploadType = _uploadType;
    m_uploadTypeHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::UploadTypeHasBeenSet() const
{
    return m_uploadTypeHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetDockerfilePath() const
{
    return m_dockerfilePath;
}

void CloudRunServiceSimpleVersionSnapshot::SetDockerfilePath(const string& _dockerfilePath)
{
    m_dockerfilePath = _dockerfilePath;
    m_dockerfilePathHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::DockerfilePathHasBeenSet() const
{
    return m_dockerfilePathHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetBuildDir() const
{
    return m_buildDir;
}

void CloudRunServiceSimpleVersionSnapshot::SetBuildDir(const string& _buildDir)
{
    m_buildDir = _buildDir;
    m_buildDirHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::BuildDirHasBeenSet() const
{
    return m_buildDirHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetRepoType() const
{
    return m_repoType;
}

void CloudRunServiceSimpleVersionSnapshot::SetRepoType(const string& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetRepo() const
{
    return m_repo;
}

void CloudRunServiceSimpleVersionSnapshot::SetRepo(const string& _repo)
{
    m_repo = _repo;
    m_repoHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::RepoHasBeenSet() const
{
    return m_repoHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetBranch() const
{
    return m_branch;
}

void CloudRunServiceSimpleVersionSnapshot::SetBranch(const string& _branch)
{
    m_branch = _branch;
    m_branchHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::BranchHasBeenSet() const
{
    return m_branchHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetEnvId() const
{
    return m_envId;
}

void CloudRunServiceSimpleVersionSnapshot::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetServerName() const
{
    return m_serverName;
}

void CloudRunServiceSimpleVersionSnapshot::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetPackageName() const
{
    return m_packageName;
}

void CloudRunServiceSimpleVersionSnapshot::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetPackageVersion() const
{
    return m_packageVersion;
}

void CloudRunServiceSimpleVersionSnapshot::SetPackageVersion(const string& _packageVersion)
{
    m_packageVersion = _packageVersion;
    m_packageVersionHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetCustomLogs() const
{
    return m_customLogs;
}

void CloudRunServiceSimpleVersionSnapshot::SetCustomLogs(const string& _customLogs)
{
    m_customLogs = _customLogs;
    m_customLogsHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::CustomLogsHasBeenSet() const
{
    return m_customLogsHasBeenSet;
}

int64_t CloudRunServiceSimpleVersionSnapshot::GetInitialDelaySeconds() const
{
    return m_initialDelaySeconds;
}

void CloudRunServiceSimpleVersionSnapshot::SetInitialDelaySeconds(const int64_t& _initialDelaySeconds)
{
    m_initialDelaySeconds = _initialDelaySeconds;
    m_initialDelaySecondsHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::InitialDelaySecondsHasBeenSet() const
{
    return m_initialDelaySecondsHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetSnapshotName() const
{
    return m_snapshotName;
}

void CloudRunServiceSimpleVersionSnapshot::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

CloudBaseRunImageInfo CloudRunServiceSimpleVersionSnapshot::GetImageInfo() const
{
    return m_imageInfo;
}

void CloudRunServiceSimpleVersionSnapshot::SetImageInfo(const CloudBaseRunImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

CloudBaseCodeRepoDetail CloudRunServiceSimpleVersionSnapshot::GetCodeDetail() const
{
    return m_codeDetail;
}

void CloudRunServiceSimpleVersionSnapshot::SetCodeDetail(const CloudBaseCodeRepoDetail& _codeDetail)
{
    m_codeDetail = _codeDetail;
    m_codeDetailHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::CodeDetailHasBeenSet() const
{
    return m_codeDetailHasBeenSet;
}

string CloudRunServiceSimpleVersionSnapshot::GetStatus() const
{
    return m_status;
}

void CloudRunServiceSimpleVersionSnapshot::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CloudRunServiceSimpleVersionSnapshot::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

